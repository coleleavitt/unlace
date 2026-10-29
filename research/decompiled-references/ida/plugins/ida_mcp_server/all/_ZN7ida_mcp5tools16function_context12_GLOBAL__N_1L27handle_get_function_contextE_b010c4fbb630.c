__m128i *__fastcall ida_mcp::tools::function_context::`anonymous namespace'::handle_get_function_context(
        __int64 a1,
        __int64 a2)
{
  std::runtime_error *v2; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // rbx
  char *v4; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v5; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r15
  char *v7; // rax
  char *v8; // rax
  _BYTE *v9; // rbx
  char *v10; // rbx
  int *v11; // rax
  int *v12; // r14
  __int64 v13; // r15
  void **func; // rax
  char *v15; // r15
  __int64 v16; // r12
  __int64 v17; // rax
  size_t *v18; // rdx
  _QWORD *v19; // rbx
  __int64 v20; // rax
  size_t v21; // rcx
  size_t v22; // rax
  __int64 v23; // rax
  char v24; // si
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  __int64 v27; // rax
  char v28; // si
  __int64 v29; // rdx
  const char *v30; // r15
  __int64 *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  char v37; // si
  __int64 v38; // rdx
  __int64 *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  unsigned __int64 v45; // r8
  char *v46; // r9
  __int64 *v47; // rdx
  _QWORD *v48; // rcx
  __int128 v49; // xmm0
  __int64 v50; // rax
  size_t v51; // rsi
  __int64 v52; // rax
  __int64 *v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  char v73; // si
  __int64 v74; // rdx
  char *v75; // rbx
  __int64 *v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 *v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  __int8 v96; // cl
  __int64 v97; // rdx
  char v98; // si
  ida_mcp::tools::cpp_class_recovery *v99; // rdi
  __m128i v100; // xmm1
  __int64 (__fastcall *hexdsp)(__int64, void **, __int64, __int64); // rax
  __int64 v102; // r12
  __int64 (__fastcall *v103)(__int64, __int64); // rax
  unsigned __int64 v104; // rbx
  char *v105; // rax
  void *v106; // r10
  char *v107; // rsi
  __int64 v108; // r8
  char *v109; // r9
  __int64 *v110; // rdx
  char *v111; // rsi
  __int64 v112; // rax
  __int64 v113; // r8
  __int64 *v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 *v118; // rbx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rax
  __int8 v130; // cl
  char v131; // si
  __int64 v132; // rdx
  __int64 v133; // rax
  const char *v134; // r13
  __int64 *v135; // rbx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 *v143; // rbx
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  const char *v148; // r13
  __int64 *v149; // rbx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rax
  __int8 v161; // cl
  char v162; // si
  __int64 v163; // rdx
  __int64 tryblks; // rbx
  __int64 v165; // rax
  __int8 v166; // si
  __int64 v167; // rdx
  __int64 v168; // rax
  __int8 v169; // si
  __int64 v170; // rdx
  __int64 v171; // rbx
  char *v172; // r14
  __int64 v173; // rax
  __int8 v174; // si
  __int64 v175; // rdx
  __int64 v176; // rbx
  __int64 v177; // rax
  __int8 v178; // si
  __int64 v179; // rdx
  char v180; // cl
  _QWORD *v181; // r12
  __int64 v182; // rax
  size_t v183; // rax
  unsigned int v184; // r14d
  char *v185; // rdx
  _QWORD *v186; // rax
  __int64 v187; // rcx
  unsigned __int64 v188; // r8
  _OWORD *v189; // rdx
  char *v190; // r9
  __int64 v191; // rsi
  __int64 v192; // rax
  size_t v193; // rax
  unsigned int v194; // r14d
  __int64 *v195; // rdx
  _QWORD *v196; // rax
  __int64 v197; // rcx
  unsigned __int64 v198; // r8
  __int64 *v199; // rdx
  char *v200; // r9
  size_t v201; // rsi
  __int64 v202; // rax
  __int8 **v203; // rsi
  _QWORD *v204; // rdi
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // rax
  __int64 v212; // r12
  __int8 v213; // si
  __int64 v214; // rax
  char *v215; // r12
  char *v216; // r14
  char *v217; // r13
  __int8 v218; // bl
  __int64 v219; // rax
  char v220; // cl
  __int8 v221; // si
  __int64 v222; // rdx
  char v223; // al
  __int8 v224; // bl
  __int64 v225; // rax
  __int64 v226; // rcx
  __int8 v227; // si
  __int64 v228; // rdx
  __int8 v229; // bl
  __int64 v230; // rax
  __int8 v231; // cl
  __int8 v232; // si
  __int64 v233; // rdx
  char *v234; // rdi
  __int64 v235; // rbx
  __int64 v236; // r15
  __int64 v237; // r14
  char v238; // al
  char *v239; // rax
  __int64 v240; // rdi
  _QWORD *v242; // rax
  __int64 *v243; // rax
  unsigned int v244; // r10d
  unsigned int v245; // r10d
  unsigned __int64 v246; // rsi
  char *v247; // rax
  char *v248; // r13
  unsigned int v249; // r14d
  char *v250; // rdi
  unsigned int v251; // r14d
  unsigned int v252; // eax
  __int64 v253; // rdx
  unsigned __int64 v254; // rsi
  char *v255; // rax
  char *v256; // r13
  unsigned int v257; // r14d
  char *v258; // rdi
  unsigned int v259; // r14d
  unsigned int v260; // eax
  __int64 v261; // rdx
  char *v262; // rcx
  __int64 v263; // rax
  __int64 v264; // rax
  int v265; // edx
  unsigned int v266; // edx
  char *v267; // r11
  unsigned int v268; // edx
  __int64 v269; // rdi
  int v270; // edx
  unsigned int v271; // edx
  char *v272; // r11
  unsigned int v273; // edx
  __int64 v274; // rdi
  __int64 v275; // rcx
  __int64 v276; // r13
  char *v277; // r12
  __int64 v278; // rax
  char *v279; // r13
  char *v280; // r14
  size_t v281; // rdx
  int v282; // eax
  unsigned __int64 v283; // rbx
  char *v284; // rbx
  char *v285; // r14
  char *v286; // r13
  size_t v287; // rdx
  int v288; // eax
  unsigned __int64 v289; // rbx
  char *v290; // rbx
  char *v291; // r13
  size_t v292; // rdx
  int v293; // eax
  unsigned __int64 v294; // rbx
  __int64 v295; // rax
  char *v296; // rcx
  __int64 v297; // rax
  __int64 v298; // rcx
  __int64 v299; // r8
  __int64 v300; // r9
  __int64 v301; // rax
  __int64 v302; // rcx
  __int64 v303; // r8
  __int64 v304; // r9
  __int64 v305; // rcx
  __int64 v306; // r8
  __int64 v307; // r9
  __int64 *v308; // rbx
  __int64 v309; // rdx
  __int64 v310; // rcx
  __int64 v311; // r8
  __int64 v312; // r9
  __int64 v313; // rcx
  __int64 v314; // r8
  __int64 v315; // r9
  __int64 *v316; // rbx
  __int64 v317; // rdx
  __int64 v318; // rcx
  __int64 v319; // r8
  __int64 v320; // r9
  __int64 *v321; // rbx
  __int64 v322; // rdx
  __int64 v323; // rcx
  __int64 v324; // r8
  __int64 v325; // r9
  __int64 v326; // rcx
  __int64 v327; // r8
  __int64 v328; // r9
  __int64 v329; // rcx
  __int64 v330; // r8
  __int64 v331; // r9
  char *v332; // rbx
  __int64 *v333; // rbx
  __int64 v334; // rdx
  __int64 v335; // rcx
  __int64 v336; // r8
  __int64 v337; // r9
  __int64 v338; // rax
  __int8 v339; // si
  __int64 v340; // rdx
  __int64 v341; // r12
  __int64 *v342; // rdx
  _QWORD *v343; // rax
  __int64 v344; // rcx
  __int64 v345; // r8
  unsigned __int64 v346; // r9
  __int64 *v347; // rdx
  _QWORD *v348; // rdi
  size_t v349; // rsi
  __int64 v350; // rax
  size_t v351; // rax
  unsigned int v352; // r14d
  char *v353; // rdx
  _QWORD *v354; // rax
  __int64 v355; // rcx
  __int64 v356; // r8
  unsigned __int64 v357; // r9
  _OWORD *v358; // rdx
  _QWORD *v359; // rdi
  __int64 v360; // rsi
  __int64 v361; // rcx
  __int64 v362; // r8
  __int64 v363; // r9
  __int64 v364; // rax
  __int128 *v365; // r13
  __int8 v366; // si
  __int64 v367; // rax
  bool v368; // cf
  __int64 v369; // rax
  size_t v370; // rax
  unsigned int v371; // r14d
  __int64 *v372; // rax
  _QWORD *v373; // rax
  unsigned __int64 v374; // rsi
  char *v375; // rax
  char *v376; // r13
  unsigned int v377; // r14d
  char *v378; // rdi
  unsigned int v379; // r14d
  unsigned int v380; // eax
  __int64 v381; // rdx
  unsigned __int64 v382; // rsi
  char *v383; // rax
  char *v384; // r13
  unsigned int v385; // r14d
  char *v386; // rdi
  unsigned int v387; // r14d
  unsigned int v388; // eax
  __int64 v389; // rdx
  __int8 v390; // bl
  __int64 v391; // rax
  char v392; // cl
  __int8 v393; // si
  __int64 v394; // rdx
  __int64 v395; // rbx
  __int64 v396; // rax
  __int8 v397; // si
  __int64 v398; // rdx
  char v399; // cl
  __int64 v400; // rbx
  __int64 v401; // rax
  __int8 v402; // si
  __int64 v403; // rdx
  char v404; // cl
  __int64 v405; // rbx
  __int64 v406; // rax
  __int8 v407; // si
  __int64 v408; // rdx
  char v409; // cl
  int v410; // eax
  __int64 v411; // rbx
  __int64 v412; // rax
  __int8 v413; // si
  __int64 v414; // rdx
  char v415; // cl
  __int8 v416; // bl
  __int64 v417; // rax
  char v418; // cl
  __int8 v419; // si
  __int64 v420; // rdx
  __int128 *v421; // rcx
  __int64 v422; // rax
  __int64 v423; // rax
  int v424; // edx
  char *v425; // rdi
  unsigned int v426; // edx
  char *v427; // r11
  unsigned int v428; // edx
  int v429; // edx
  char *v430; // rdi
  unsigned int v431; // edx
  char *v432; // r11
  unsigned int v433; // edx
  __int64 *v434; // rbx
  __int64 v435; // rdx
  __int64 v436; // rcx
  __int64 v437; // r8
  __int64 v438; // r9
  __int64 v439; // rax
  __int8 v440; // si
  __int8 v441; // bl
  __int64 v442; // rax
  char v443; // cl
  __int8 v444; // si
  __int64 v445; // rdx
  __m128i si128; // xmm0
  char i; // al
  char *v448; // rax
  char *v449; // rcx
  unsigned __int64 v450; // rbx
  void **v451; // rax
  void **v452; // rsi
  char *v453; // rdi
  void *v454; // rdx
  void *v455; // rcx
  char *v456; // rax
  __int64 v457; // rax
  char v458; // si
  char v459; // dl
  __int64 v460; // rdx
  _QWORD *v461; // rax
  __int64 v462; // rax
  char v463; // dl
  void *v464; // rcx
  char v465; // si
  __int64 v466; // rdx
  __int64 v467; // rax
  char v468; // si
  char v469; // dl
  __int64 v470; // rdx
  const char *v471; // rsi
  __int64 v472; // rdx
  __int64 v473; // rcx
  __int64 v474; // r8
  __int64 v475; // r9
  __int64 v476; // rax
  char v477; // dl
  void *v478; // rcx
  __int64 v479; // rdx
  unsigned __int64 v480; // rax
  __m128i v481; // xmm0
  char j; // al
  char *v483; // rax
  char *v484; // rcx
  unsigned __int64 v485; // r12
  __m256i *v486; // rax
  __m256i *v487; // rsi
  char *v488; // rdi
  __int64 v489; // rdx
  __int64 v490; // rcx
  const char *v491; // rax
  size_t v492; // rax
  unsigned int v493; // r12d
  size_t *v494; // rdx
  __int64 v495; // rax
  __int64 v496; // rsi
  __int64 v497; // r12
  size_t v498; // rdx
  __int64 v499; // rax
  char v500; // si
  __int128 *v501; // rdx
  _QWORD *v502; // r12
  __int64 v503; // rax
  char v504; // si
  __int128 *v505; // rdx
  size_t v506; // rax
  unsigned int v507; // ecx
  size_t *v508; // rdx
  __int64 v509; // rax
  __int64 v510; // rsi
  __int64 v511; // r12
  size_t v512; // rdx
  __int64 v513; // rax
  char v514; // si
  __int128 *v515; // rdx
  __int64 *v516; // r12
  __int64 v517; // rdx
  __int64 v518; // rcx
  __int64 v519; // r8
  __int64 v520; // r9
  __int64 v521; // rax
  char v522; // si
  __int128 *v523; // rdx
  char *head; // rax
  __int64 v525; // rax
  __int64 v526; // rcx
  __int64 v527; // r8
  __int64 v528; // r9
  __int64 v529; // rax
  __int64 v530; // rax
  __int64 v531; // rcx
  __int64 v532; // r8
  __int64 v533; // r9
  __int64 v534; // rcx
  __int64 v535; // r8
  __int64 v536; // r9
  __int64 v537; // rcx
  __int64 v538; // r8
  __int64 v539; // r9
  __int64 v540; // rcx
  __int64 v541; // r8
  __int64 v542; // r9
  __int64 v543; // rax
  __int64 v544; // rcx
  __int64 v545; // r8
  __int64 v546; // r9
  __int64 v547; // rax
  __int64 v548; // rax
  __int64 v549; // rcx
  __int64 v550; // r8
  __int64 v551; // r9
  __int64 v552; // rcx
  __int64 v553; // r8
  __int64 v554; // r9
  __int64 v555; // rcx
  __int64 v556; // r8
  __int64 v557; // r9
  __int64 v558; // rcx
  __int64 v559; // r8
  __int64 v560; // r9
  __int64 *v561; // rbx
  __int64 v562; // rdx
  __int64 v563; // rcx
  __int64 v564; // r8
  __int64 v565; // r9
  __int64 v566; // rcx
  __int64 v567; // r8
  __int64 v568; // r9
  __int64 v569; // rcx
  __int64 v570; // r8
  __int64 v571; // r9
  __int64 v572; // rax
  char v573; // si
  __int8 v574; // cl
  __int64 v575; // rdx
  char *v576; // rbx
  __int8 **v577; // rbx
  char *v578; // rbx
  unsigned __int64 v579; // rax
  unsigned __int64 v580; // rax
  size_t *v581; // rax
  size_t *v582; // rax
  const char *v583; // rax
  unsigned int v584; // edi
  unsigned __int64 v585; // r8
  char *v586; // r9
  char *v587; // r11
  unsigned int v588; // eax
  unsigned int v589; // ecx
  __int64 v590; // rsi
  unsigned int v591; // edi
  unsigned __int64 v592; // r8
  char *v593; // r9
  char *v594; // r11
  unsigned int v595; // eax
  unsigned int v596; // ecx
  __int64 v597; // rsi
  unsigned __int64 v598; // rdi
  char *v599; // rsi
  char *v600; // rax
  char *v601; // rsi
  unsigned int v602; // eax
  unsigned int v603; // eax
  unsigned int v604; // edx
  __int64 v605; // rcx
  unsigned __int64 v606; // rdi
  char *v607; // rax
  char *v608; // r12
  unsigned int v609; // eax
  char *v610; // r11
  unsigned int v611; // eax
  unsigned int v612; // edx
  __int64 v613; // rcx
  __int64 *v614; // rbx
  __int64 v615; // rdx
  __int64 v616; // rcx
  __int64 v617; // r8
  __int64 v618; // r9
  __int64 v619; // rax
  __int8 v620; // si
  __int64 v621; // rdx
  char v622; // r14
  unsigned __int64 v623; // r13
  char *v624; // rdx
  _QWORD *v625; // rax
  unsigned __int64 v626; // r8
  char *v627; // r9
  __int64 v628; // rcx
  _QWORD *v629; // rdx
  __int128 v630; // xmm0
  __int64 v631; // rsi
  __int64 *v632; // rax
  __int64 v633; // rdx
  __int64 v634; // rcx
  __int64 v635; // r8
  __int64 v636; // r9
  size_t v637; // rax
  unsigned int v638; // r12d
  char *v639; // rdx
  _QWORD *v640; // rax
  unsigned __int64 v641; // r8
  char *v642; // r9
  __int64 v643; // rcx
  _QWORD *v644; // rdx
  __int128 v645; // xmm0
  __int64 v646; // rsi
  __int64 v647; // rcx
  __int64 v648; // r8
  __int64 v649; // r9
  char *v650; // r12
  __int64 *v651; // rax
  __int64 v652; // rdx
  __int64 v653; // rcx
  __int64 v654; // r8
  __int64 v655; // r9
  size_t v656; // rax
  unsigned __int32 v657; // ecx
  _QWORD *v658; // rax
  __int8 v659; // bl
  __int64 v660; // rax
  char v661; // cl
  __int8 v662; // si
  __int64 v663; // rdx
  __int64 v664; // rax
  __int64 v665; // rbx
  __int64 v666; // rax
  __int8 v667; // si
  __int64 v668; // rdx
  char v669; // cl
  int v670; // eax
  __int64 v671; // rbx
  __int64 v672; // rax
  __int8 v673; // si
  __int64 v674; // rdx
  char v675; // cl
  __int8 v676; // bl
  __int64 v677; // rax
  char v678; // cl
  __int8 v679; // si
  __int64 v680; // rdx
  __int64 v681; // rax
  char *v682; // rax
  __int64 v683; // rcx
  __int64 v684; // r8
  __int64 v685; // r9
  __int64 v686; // rax
  __int64 *v687; // rbx
  __int64 v688; // rdx
  __int64 v689; // rcx
  __int64 v690; // r8
  __int64 v691; // r9
  __int64 v692; // rcx
  __int64 v693; // r8
  __int64 v694; // r9
  __int64 v695; // rcx
  __int64 v696; // r8
  __int64 v697; // r9
  __int64 v698; // rax
  char v699; // si
  __int8 v700; // cl
  void *v701; // rdx
  unsigned int v703; // edi
  unsigned int v704; // edi
  char *v705; // rdi
  unsigned __int64 v706; // rcx
  char *v707; // rax
  char *v708; // rdi
  unsigned int v709; // eax
  unsigned int v710; // eax
  unsigned int v711; // edx
  __int64 v712; // rsi
  unsigned __int64 v713; // rsi
  char *v714; // rax
  char *v715; // r12
  unsigned int v716; // eax
  char *v717; // r11
  unsigned int v718; // eax
  unsigned int v719; // edx
  __int64 v720; // rcx
  char *v721; // r11
  unsigned int v722; // eax
  __int64 v723; // rdi
  unsigned int v724; // eax
  __int64 v725; // rdi
  unsigned int v726; // edi
  unsigned int v727; // esi
  __int64 v728; // rcx
  __int64 v729; // r8
  __int64 v730; // r9
  __int64 *v731; // rbx
  __int64 v732; // rdx
  __int64 v733; // rcx
  __int64 v734; // r8
  __int64 v735; // r9
  __int64 v736; // rcx
  __int64 v737; // r8
  __int64 v738; // r9
  __int64 *v739; // rbx
  __int64 v740; // rdx
  __int64 v741; // rcx
  __int64 v742; // r8
  __int64 v743; // r9
  __int64 v744; // rcx
  __int64 v745; // r8
  __int64 v746; // r9
  __int64 v747; // rcx
  __int64 v748; // r8
  __int64 v749; // r9
  __int64 v750; // rax
  __int8 v751; // cl
  char v752; // si
  __int64 v753; // rdx
  char *v754; // rbx
  unsigned __int64 v755; // rax
  unsigned int v756; // eax
  unsigned int v757; // eax
  unsigned int v758; // edx
  __int64 v759; // rdi
  unsigned __int64 v760; // rdi
  unsigned __int64 v761; // rax
  char *v762; // r8
  unsigned int v763; // eax
  unsigned int v764; // eax
  unsigned int v765; // edx
  __int64 v766; // rsi
  char v767; // r13
  unsigned __int64 v768; // r12
  char *v769; // rax
  __int64 *v770; // rax
  __int64 v771; // rdx
  __int64 v772; // rcx
  __int64 v773; // r8
  __int64 v774; // r9
  __int64 v775; // rcx
  __int64 v776; // r8
  __int64 v777; // r9
  __int64 *v778; // rax
  __int64 v779; // rdx
  __int64 v780; // rcx
  __int64 v781; // r8
  __int64 v782; // r9
  __int64 v783; // rcx
  __int64 v784; // r8
  __int64 v785; // r9
  __int64 v786; // rcx
  __int64 v787; // r8
  __int64 v788; // r9
  __int8 v789; // bl
  __int64 v790; // rax
  char v791; // cl
  __int8 v792; // si
  __int64 v793; // rdx
  __int64 v794; // rcx
  __int64 v795; // r8
  __int64 v796; // r9
  __int64 *v797; // rbx
  __int64 v798; // rdx
  __int64 v799; // rcx
  __int64 v800; // r8
  __int64 v801; // r9
  __int64 v802; // rcx
  __int64 v803; // r8
  __int64 v804; // r9
  __int64 v805; // rcx
  __int64 v806; // r8
  __int64 v807; // r9
  __int64 v808; // rax
  char v809; // si
  __int8 v810; // cl
  void *v811; // rdx
  char *v812; // rax
  __int64 *v813; // rbx
  __int64 v814; // rdx
  __int64 v815; // rcx
  __int64 v816; // r8
  __int64 v817; // r9
  __int64 v818; // rax
  __int8 v819; // si
  __int64 v820; // rdx
  void (__fastcall *v821)(__int64, __int64); // rax
  __int64 v822; // rdi
  __int64 v823; // rbx
  __int64 v824; // r13
  void (__fastcall *v825)(__int64, __int64); // rax
  void (__fastcall *v826)(__int64, __int64); // rax
  void (__fastcall *v827)(__int64, __int64); // rax
  __int64 *v828; // rbx
  __int64 v829; // rdx
  __int64 v830; // rcx
  __int64 v831; // r8
  __int64 v832; // r9
  __int64 v833; // rax
  __int8 v834; // si
  __int64 v835; // rdx
  __int64 *v836; // rbx
  __int64 v837; // rdx
  __int64 v838; // rcx
  __int64 v839; // r8
  __int64 v840; // r9
  __int64 v841; // rax
  __int8 v842; // si
  __int64 v843; // rdx
  int v844; // [rsp+0h] [rbp-760h]
  int v845; // [rsp+0h] [rbp-760h]
  int v846; // [rsp+0h] [rbp-760h]
  int v847; // [rsp+0h] [rbp-760h]
  int v848; // [rsp+0h] [rbp-760h]
  int v849; // [rsp+0h] [rbp-760h]
  int v850; // [rsp+0h] [rbp-760h]
  int v851; // [rsp+0h] [rbp-760h]
  int v852; // [rsp+0h] [rbp-760h]
  int v853; // [rsp+0h] [rbp-760h]
  int v854; // [rsp+0h] [rbp-760h]
  int v855; // [rsp+0h] [rbp-760h]
  int v856; // [rsp+0h] [rbp-760h]
  int v857; // [rsp+0h] [rbp-760h]
  int v858; // [rsp+0h] [rbp-760h]
  int v859; // [rsp+0h] [rbp-760h]
  int v860; // [rsp+0h] [rbp-760h]
  int v861; // [rsp+0h] [rbp-760h]
  int v862; // [rsp+0h] [rbp-760h]
  int v863; // [rsp+0h] [rbp-760h]
  int v864; // [rsp+0h] [rbp-760h]
  int v865; // [rsp+0h] [rbp-760h]
  char *v866; // [rsp+0h] [rbp-760h]
  int v867; // [rsp+0h] [rbp-760h]
  int v868; // [rsp+0h] [rbp-760h]
  int v869; // [rsp+0h] [rbp-760h]
  int v870; // [rsp+0h] [rbp-760h]
  int v871; // [rsp+0h] [rbp-760h]
  int v872; // [rsp+0h] [rbp-760h]
  int v873; // [rsp+0h] [rbp-760h]
  int v874; // [rsp+0h] [rbp-760h]
  int v875; // [rsp+0h] [rbp-760h]
  int v876; // [rsp+0h] [rbp-760h]
  int v877; // [rsp+0h] [rbp-760h]
  int v878; // [rsp+0h] [rbp-760h]
  int v879; // [rsp+0h] [rbp-760h]
  int v880; // [rsp+0h] [rbp-760h]
  int v881; // [rsp+0h] [rbp-760h]
  int v882; // [rsp+0h] [rbp-760h]
  int v883; // [rsp+0h] [rbp-760h]
  int v884; // [rsp+0h] [rbp-760h]
  int v885; // [rsp+0h] [rbp-760h]
  int v886; // [rsp+0h] [rbp-760h]
  int v887; // [rsp+0h] [rbp-760h]
  int v888; // [rsp+0h] [rbp-760h]
  int v889; // [rsp+0h] [rbp-760h]
  int v890; // [rsp+0h] [rbp-760h]
  int v891; // [rsp+0h] [rbp-760h]
  int v892; // [rsp+0h] [rbp-760h]
  int v893; // [rsp+0h] [rbp-760h]
  int v894; // [rsp+0h] [rbp-760h]
  int v895; // [rsp+0h] [rbp-760h]
  int v896; // [rsp+0h] [rbp-760h]
  int v897; // [rsp+0h] [rbp-760h]
  int v898; // [rsp+0h] [rbp-760h]
  int v899; // [rsp+0h] [rbp-760h]
  int v900; // [rsp+0h] [rbp-760h]
  int v901; // [rsp+0h] [rbp-760h]
  int v902; // [rsp+0h] [rbp-760h]
  int v903; // [rsp+0h] [rbp-760h]
  int v904; // [rsp+0h] [rbp-760h]
  int v905; // [rsp+0h] [rbp-760h]
  int v906; // [rsp+0h] [rbp-760h]
  int v907; // [rsp+0h] [rbp-760h]
  int v908; // [rsp+0h] [rbp-760h]
  int v909; // [rsp+0h] [rbp-760h]
  int v910; // [rsp+0h] [rbp-760h]
  __int64 v911; // [rsp+8h] [rbp-758h]
  int v912; // [rsp+8h] [rbp-758h]
  __int64 v913; // [rsp+8h] [rbp-758h]
  int v914; // [rsp+8h] [rbp-758h]
  int v915; // [rsp+8h] [rbp-758h]
  __int64 v916; // [rsp+8h] [rbp-758h]
  __int64 v917; // [rsp+8h] [rbp-758h]
  int v918; // [rsp+8h] [rbp-758h]
  __int64 v919; // [rsp+8h] [rbp-758h]
  int v920; // [rsp+8h] [rbp-758h]
  __int64 v921; // [rsp+8h] [rbp-758h]
  __int64 v922; // [rsp+8h] [rbp-758h]
  __int64 v923; // [rsp+8h] [rbp-758h]
  int v924; // [rsp+8h] [rbp-758h]
  __int64 v925; // [rsp+8h] [rbp-758h]
  __int64 v926; // [rsp+8h] [rbp-758h]
  __int64 v927; // [rsp+8h] [rbp-758h]
  int v928; // [rsp+8h] [rbp-758h]
  int v929; // [rsp+8h] [rbp-758h]
  __int64 v930; // [rsp+8h] [rbp-758h]
  __int64 v931; // [rsp+8h] [rbp-758h]
  __int64 v932; // [rsp+8h] [rbp-758h]
  __int64 v933; // [rsp+8h] [rbp-758h]
  __int64 v934; // [rsp+8h] [rbp-758h]
  __int64 v935; // [rsp+8h] [rbp-758h]
  __int64 v936; // [rsp+8h] [rbp-758h]
  int v937; // [rsp+8h] [rbp-758h]
  __int64 v938; // [rsp+8h] [rbp-758h]
  int v939; // [rsp+8h] [rbp-758h]
  int v940; // [rsp+8h] [rbp-758h]
  __int64 v941; // [rsp+8h] [rbp-758h]
  __int64 v942; // [rsp+8h] [rbp-758h]
  __int64 v943; // [rsp+8h] [rbp-758h]
  __int64 v944; // [rsp+8h] [rbp-758h]
  _QWORD *v945; // [rsp+8h] [rbp-758h]
  __int64 v946; // [rsp+8h] [rbp-758h]
  __int64 v947; // [rsp+8h] [rbp-758h]
  __int64 v948; // [rsp+8h] [rbp-758h]
  __int64 v949; // [rsp+8h] [rbp-758h]
  __int64 v950; // [rsp+8h] [rbp-758h]
  __int64 v951; // [rsp+8h] [rbp-758h]
  __int64 v952; // [rsp+8h] [rbp-758h]
  __int64 v953; // [rsp+8h] [rbp-758h]
  int v954; // [rsp+8h] [rbp-758h]
  __int64 v955; // [rsp+8h] [rbp-758h]
  __int64 v956; // [rsp+8h] [rbp-758h]
  int v957; // [rsp+8h] [rbp-758h]
  __int64 v958; // [rsp+8h] [rbp-758h]
  __int64 v959; // [rsp+8h] [rbp-758h]
  __int64 v960; // [rsp+8h] [rbp-758h]
  int v961; // [rsp+8h] [rbp-758h]
  __int64 v962; // [rsp+8h] [rbp-758h]
  __int64 v963; // [rsp+8h] [rbp-758h]
  int v964; // [rsp+8h] [rbp-758h]
  __int64 v965; // [rsp+8h] [rbp-758h]
  int v966; // [rsp+8h] [rbp-758h]
  __int64 v967; // [rsp+8h] [rbp-758h]
  __int64 v968; // [rsp+8h] [rbp-758h]
  __int64 v969; // [rsp+8h] [rbp-758h]
  int v970; // [rsp+8h] [rbp-758h]
  __int64 v971; // [rsp+8h] [rbp-758h]
  __int64 v972; // [rsp+8h] [rbp-758h]
  int v973; // [rsp+8h] [rbp-758h]
  __int64 v974; // [rsp+8h] [rbp-758h]
  __int64 v975; // [rsp+8h] [rbp-758h]
  __int64 v976; // [rsp+10h] [rbp-750h]
  __int64 v977; // [rsp+10h] [rbp-750h]
  int v978; // [rsp+10h] [rbp-750h]
  __int64 v979; // [rsp+10h] [rbp-750h]
  int v980; // [rsp+10h] [rbp-750h]
  __int64 v981; // [rsp+10h] [rbp-750h]
  int v982; // [rsp+10h] [rbp-750h]
  int v983; // [rsp+10h] [rbp-750h]
  __int64 v984; // [rsp+10h] [rbp-750h]
  int v985; // [rsp+10h] [rbp-750h]
  __int64 v986; // [rsp+10h] [rbp-750h]
  int v987; // [rsp+10h] [rbp-750h]
  int v988; // [rsp+10h] [rbp-750h]
  __int64 v989; // [rsp+10h] [rbp-750h]
  __int64 v990; // [rsp+10h] [rbp-750h]
  int v991; // [rsp+10h] [rbp-750h]
  int v992; // [rsp+10h] [rbp-750h]
  int v993; // [rsp+10h] [rbp-750h]
  __int64 v994; // [rsp+10h] [rbp-750h]
  __int64 v995; // [rsp+10h] [rbp-750h]
  int v996; // [rsp+10h] [rbp-750h]
  int v997; // [rsp+10h] [rbp-750h]
  int v998; // [rsp+10h] [rbp-750h]
  int v999; // [rsp+10h] [rbp-750h]
  int v1000; // [rsp+10h] [rbp-750h]
  int v1001; // [rsp+10h] [rbp-750h]
  int v1002; // [rsp+10h] [rbp-750h]
  __int64 v1003; // [rsp+10h] [rbp-750h]
  int v1004; // [rsp+10h] [rbp-750h]
  __int64 v1005; // [rsp+10h] [rbp-750h]
  __int64 v1006; // [rsp+10h] [rbp-750h]
  int v1007; // [rsp+10h] [rbp-750h]
  int v1008; // [rsp+10h] [rbp-750h]
  int v1009; // [rsp+10h] [rbp-750h]
  int v1010; // [rsp+10h] [rbp-750h]
  int v1011; // [rsp+10h] [rbp-750h]
  int v1012; // [rsp+10h] [rbp-750h]
  int v1013; // [rsp+10h] [rbp-750h]
  int v1014; // [rsp+10h] [rbp-750h]
  int v1015; // [rsp+10h] [rbp-750h]
  int v1016; // [rsp+10h] [rbp-750h]
  int v1017; // [rsp+10h] [rbp-750h]
  int v1018; // [rsp+10h] [rbp-750h]
  int v1019; // [rsp+10h] [rbp-750h]
  __int64 v1020; // [rsp+10h] [rbp-750h]
  int v1021; // [rsp+10h] [rbp-750h]
  int v1022; // [rsp+10h] [rbp-750h]
  __int64 v1023; // [rsp+10h] [rbp-750h]
  int v1024; // [rsp+10h] [rbp-750h]
  int v1025; // [rsp+10h] [rbp-750h]
  int v1026; // [rsp+10h] [rbp-750h]
  __int64 v1027; // [rsp+10h] [rbp-750h]
  int v1028; // [rsp+10h] [rbp-750h]
  int v1029; // [rsp+10h] [rbp-750h]
  __int64 v1030; // [rsp+10h] [rbp-750h]
  int v1031; // [rsp+10h] [rbp-750h]
  __int64 v1032; // [rsp+10h] [rbp-750h]
  int v1033; // [rsp+10h] [rbp-750h]
  int v1034; // [rsp+10h] [rbp-750h]
  int v1035; // [rsp+10h] [rbp-750h]
  __int64 v1036; // [rsp+10h] [rbp-750h]
  int v1037; // [rsp+10h] [rbp-750h]
  __int64 v1038; // [rsp+10h] [rbp-750h]
  int v1039; // [rsp+10h] [rbp-750h]
  int v1040; // [rsp+10h] [rbp-750h]
  int v1041; // [rsp+18h] [rbp-748h]
  int v1042; // [rsp+18h] [rbp-748h]
  int v1043; // [rsp+18h] [rbp-748h]
  int v1044; // [rsp+18h] [rbp-748h]
  int v1045; // [rsp+18h] [rbp-748h]
  int v1046; // [rsp+18h] [rbp-748h]
  int v1047; // [rsp+18h] [rbp-748h]
  int v1048; // [rsp+18h] [rbp-748h]
  int v1049; // [rsp+18h] [rbp-748h]
  int v1050; // [rsp+18h] [rbp-748h]
  int v1051; // [rsp+18h] [rbp-748h]
  int v1052; // [rsp+18h] [rbp-748h]
  int v1053; // [rsp+18h] [rbp-748h]
  int v1054; // [rsp+18h] [rbp-748h]
  int v1055; // [rsp+18h] [rbp-748h]
  int v1056; // [rsp+18h] [rbp-748h]
  int v1057; // [rsp+18h] [rbp-748h]
  int v1058; // [rsp+18h] [rbp-748h]
  int v1059; // [rsp+18h] [rbp-748h]
  int v1060; // [rsp+18h] [rbp-748h]
  int v1061; // [rsp+18h] [rbp-748h]
  int v1062; // [rsp+18h] [rbp-748h]
  int v1063; // [rsp+18h] [rbp-748h]
  int v1064; // [rsp+18h] [rbp-748h]
  int v1065; // [rsp+18h] [rbp-748h]
  int v1066; // [rsp+18h] [rbp-748h]
  int v1067; // [rsp+18h] [rbp-748h]
  int v1068; // [rsp+18h] [rbp-748h]
  int v1069; // [rsp+18h] [rbp-748h]
  int v1070; // [rsp+18h] [rbp-748h]
  int v1071; // [rsp+18h] [rbp-748h]
  int v1072; // [rsp+18h] [rbp-748h]
  int v1073; // [rsp+18h] [rbp-748h]
  int v1074; // [rsp+18h] [rbp-748h]
  int v1075; // [rsp+18h] [rbp-748h]
  int v1076; // [rsp+18h] [rbp-748h]
  int v1077; // [rsp+18h] [rbp-748h]
  int v1078; // [rsp+18h] [rbp-748h]
  int v1079; // [rsp+18h] [rbp-748h]
  int v1080; // [rsp+18h] [rbp-748h]
  int v1081; // [rsp+18h] [rbp-748h]
  int v1082; // [rsp+18h] [rbp-748h]
  int v1083; // [rsp+18h] [rbp-748h]
  int v1084; // [rsp+20h] [rbp-740h]
  int v1085; // [rsp+20h] [rbp-740h]
  int v1086; // [rsp+20h] [rbp-740h]
  int v1087; // [rsp+20h] [rbp-740h]
  int v1088; // [rsp+20h] [rbp-740h]
  int v1089; // [rsp+20h] [rbp-740h]
  int v1090; // [rsp+20h] [rbp-740h]
  int v1091; // [rsp+20h] [rbp-740h]
  int v1092; // [rsp+20h] [rbp-740h]
  int v1093; // [rsp+20h] [rbp-740h]
  int v1094; // [rsp+20h] [rbp-740h]
  int v1095; // [rsp+20h] [rbp-740h]
  int v1096; // [rsp+20h] [rbp-740h]
  int v1097; // [rsp+20h] [rbp-740h]
  int v1098; // [rsp+20h] [rbp-740h]
  int v1099; // [rsp+20h] [rbp-740h]
  int v1100; // [rsp+20h] [rbp-740h]
  int v1101; // [rsp+20h] [rbp-740h]
  int v1102; // [rsp+20h] [rbp-740h]
  int v1103; // [rsp+20h] [rbp-740h]
  int v1104; // [rsp+20h] [rbp-740h]
  int v1105; // [rsp+20h] [rbp-740h]
  int v1106; // [rsp+20h] [rbp-740h]
  int v1107; // [rsp+20h] [rbp-740h]
  int v1108; // [rsp+20h] [rbp-740h]
  int v1109; // [rsp+20h] [rbp-740h]
  int v1110; // [rsp+20h] [rbp-740h]
  int v1111; // [rsp+20h] [rbp-740h]
  int v1112; // [rsp+20h] [rbp-740h]
  int v1113; // [rsp+20h] [rbp-740h]
  int v1114; // [rsp+20h] [rbp-740h]
  int v1115; // [rsp+20h] [rbp-740h]
  int v1116; // [rsp+20h] [rbp-740h]
  int v1117; // [rsp+20h] [rbp-740h]
  int v1118; // [rsp+20h] [rbp-740h]
  int v1119; // [rsp+20h] [rbp-740h]
  int v1120; // [rsp+20h] [rbp-740h]
  int v1121; // [rsp+20h] [rbp-740h]
  int v1122; // [rsp+20h] [rbp-740h]
  int v1123; // [rsp+20h] [rbp-740h]
  int v1124; // [rsp+20h] [rbp-740h]
  int v1125; // [rsp+20h] [rbp-740h]
  int v1126; // [rsp+20h] [rbp-740h]
  int v1127; // [rsp+20h] [rbp-740h]
  int v1128; // [rsp+28h] [rbp-738h]
  int v1129; // [rsp+28h] [rbp-738h]
  int v1130; // [rsp+28h] [rbp-738h]
  int v1131; // [rsp+28h] [rbp-738h]
  int v1132; // [rsp+28h] [rbp-738h]
  int v1133; // [rsp+28h] [rbp-738h]
  int v1134; // [rsp+28h] [rbp-738h]
  int v1135; // [rsp+28h] [rbp-738h]
  int v1136; // [rsp+28h] [rbp-738h]
  int v1137; // [rsp+28h] [rbp-738h]
  int v1138; // [rsp+28h] [rbp-738h]
  int v1139; // [rsp+28h] [rbp-738h]
  int v1140; // [rsp+28h] [rbp-738h]
  int v1141; // [rsp+28h] [rbp-738h]
  int v1142; // [rsp+28h] [rbp-738h]
  int v1143; // [rsp+28h] [rbp-738h]
  int v1144; // [rsp+28h] [rbp-738h]
  int v1145; // [rsp+28h] [rbp-738h]
  int v1146; // [rsp+28h] [rbp-738h]
  int v1147; // [rsp+28h] [rbp-738h]
  int v1148; // [rsp+28h] [rbp-738h]
  int v1149; // [rsp+28h] [rbp-738h]
  int v1150; // [rsp+28h] [rbp-738h]
  int v1151; // [rsp+28h] [rbp-738h]
  int v1152; // [rsp+28h] [rbp-738h]
  int v1153; // [rsp+28h] [rbp-738h]
  int v1154; // [rsp+28h] [rbp-738h]
  int v1155; // [rsp+28h] [rbp-738h]
  int v1156; // [rsp+28h] [rbp-738h]
  int v1157; // [rsp+28h] [rbp-738h]
  int v1158; // [rsp+28h] [rbp-738h]
  int v1159; // [rsp+28h] [rbp-738h]
  int v1160; // [rsp+28h] [rbp-738h]
  int v1161; // [rsp+28h] [rbp-738h]
  int v1162; // [rsp+28h] [rbp-738h]
  int v1163; // [rsp+28h] [rbp-738h]
  int v1164; // [rsp+28h] [rbp-738h]
  int v1165; // [rsp+28h] [rbp-738h]
  int v1166; // [rsp+28h] [rbp-738h]
  int v1167; // [rsp+28h] [rbp-738h]
  int v1168; // [rsp+28h] [rbp-738h]
  int v1169; // [rsp+28h] [rbp-738h]
  int v1170; // [rsp+28h] [rbp-738h]
  int v1171; // [rsp+28h] [rbp-738h]
  __int64 v1173; // [rsp+30h] [rbp-730h]
  __int64 v1174; // [rsp+30h] [rbp-730h]
  __int64 v1175; // [rsp+30h] [rbp-730h]
  __int64 v1176; // [rsp+30h] [rbp-730h]
  __int64 v1177; // [rsp+30h] [rbp-730h]
  __int64 v1178; // [rsp+30h] [rbp-730h]
  __m128i *v1179; // [rsp+30h] [rbp-730h]
  __int64 v1180; // [rsp+30h] [rbp-730h]
  __int64 v1181; // [rsp+30h] [rbp-730h]
  __int64 v1182; // [rsp+30h] [rbp-730h]
  __int64 v1183; // [rsp+30h] [rbp-730h]
  __int64 v1184; // [rsp+30h] [rbp-730h]
  __int64 v1185; // [rsp+30h] [rbp-730h]
  __int64 v1186; // [rsp+30h] [rbp-730h]
  __int64 v1187; // [rsp+30h] [rbp-730h]
  __int64 v1188; // [rsp+30h] [rbp-730h]
  __int64 v1189; // [rsp+30h] [rbp-730h]
  __int64 v1190; // [rsp+30h] [rbp-730h]
  _QWORD *v1191; // [rsp+30h] [rbp-730h]
  __int64 v1192; // [rsp+30h] [rbp-730h]
  __int64 v1193; // [rsp+30h] [rbp-730h]
  __int64 v1194; // [rsp+30h] [rbp-730h]
  __int64 v1195; // [rsp+30h] [rbp-730h]
  __int64 v1196; // [rsp+30h] [rbp-730h]
  __int64 v1197; // [rsp+30h] [rbp-730h]
  __int64 v1198; // [rsp+30h] [rbp-730h]
  __int64 v1199; // [rsp+30h] [rbp-730h]
  __int64 v1200; // [rsp+30h] [rbp-730h]
  __int64 v1201; // [rsp+30h] [rbp-730h]
  __int64 v1202; // [rsp+30h] [rbp-730h]
  __int64 v1203; // [rsp+30h] [rbp-730h]
  __int64 v1204; // [rsp+30h] [rbp-730h]
  __int64 v1205; // [rsp+30h] [rbp-730h]
  __int64 v1206; // [rsp+30h] [rbp-730h]
  __int64 v1207; // [rsp+30h] [rbp-730h]
  __int64 v1208; // [rsp+30h] [rbp-730h]
  __int64 v1209; // [rsp+30h] [rbp-730h]
  __int64 v1210; // [rsp+30h] [rbp-730h]
  __int64 v1211; // [rsp+30h] [rbp-730h]
  __int64 v1212; // [rsp+30h] [rbp-730h]
  __int64 v1213; // [rsp+30h] [rbp-730h]
  __int64 v1214; // [rsp+30h] [rbp-730h]
  __int64 v1215; // [rsp+30h] [rbp-730h]
  int v1216; // [rsp+38h] [rbp-728h]
  int v1217; // [rsp+38h] [rbp-728h]
  int v1218; // [rsp+38h] [rbp-728h]
  int v1219; // [rsp+38h] [rbp-728h]
  int v1220; // [rsp+38h] [rbp-728h]
  int v1221; // [rsp+38h] [rbp-728h]
  int v1222; // [rsp+38h] [rbp-728h]
  int v1223; // [rsp+38h] [rbp-728h]
  int v1224; // [rsp+38h] [rbp-728h]
  int v1225; // [rsp+38h] [rbp-728h]
  int v1226; // [rsp+38h] [rbp-728h]
  int v1227; // [rsp+38h] [rbp-728h]
  char *v1228; // [rsp+38h] [rbp-728h]
  int v1229; // [rsp+38h] [rbp-728h]
  int v1230; // [rsp+38h] [rbp-728h]
  int v1231; // [rsp+38h] [rbp-728h]
  int v1232; // [rsp+38h] [rbp-728h]
  int v1233; // [rsp+38h] [rbp-728h]
  int v1234; // [rsp+38h] [rbp-728h]
  int v1235; // [rsp+38h] [rbp-728h]
  int v1236; // [rsp+38h] [rbp-728h]
  int v1237; // [rsp+38h] [rbp-728h]
  int v1238; // [rsp+38h] [rbp-728h]
  int v1239; // [rsp+38h] [rbp-728h]
  int v1240; // [rsp+38h] [rbp-728h]
  int v1241; // [rsp+38h] [rbp-728h]
  int v1242; // [rsp+38h] [rbp-728h]
  int v1243; // [rsp+38h] [rbp-728h]
  int v1244; // [rsp+38h] [rbp-728h]
  int v1245; // [rsp+38h] [rbp-728h]
  int v1246; // [rsp+38h] [rbp-728h]
  int v1247; // [rsp+38h] [rbp-728h]
  int v1248; // [rsp+38h] [rbp-728h]
  int v1249; // [rsp+38h] [rbp-728h]
  int v1250; // [rsp+38h] [rbp-728h]
  int v1251; // [rsp+38h] [rbp-728h]
  int v1252; // [rsp+38h] [rbp-728h]
  int v1253; // [rsp+38h] [rbp-728h]
  int v1254; // [rsp+38h] [rbp-728h]
  int v1255; // [rsp+38h] [rbp-728h]
  int v1256; // [rsp+38h] [rbp-728h]
  int v1257; // [rsp+38h] [rbp-728h]
  int v1258; // [rsp+38h] [rbp-728h]
  int v1259; // [rsp+38h] [rbp-728h]
  int v1260; // [rsp+38h] [rbp-728h]
  int v1261; // [rsp+40h] [rbp-720h]
  int v1262; // [rsp+40h] [rbp-720h]
  int v1263; // [rsp+40h] [rbp-720h]
  int v1264; // [rsp+40h] [rbp-720h]
  int v1265; // [rsp+40h] [rbp-720h]
  int v1266; // [rsp+40h] [rbp-720h]
  int v1267; // [rsp+40h] [rbp-720h]
  size_t *v1268; // [rsp+40h] [rbp-720h]
  int v1269; // [rsp+40h] [rbp-720h]
  int v1270; // [rsp+40h] [rbp-720h]
  int v1271; // [rsp+40h] [rbp-720h]
  int v1272; // [rsp+40h] [rbp-720h]
  int v1273; // [rsp+40h] [rbp-720h]
  int v1274; // [rsp+40h] [rbp-720h]
  int v1275; // [rsp+40h] [rbp-720h]
  int v1276; // [rsp+40h] [rbp-720h]
  int v1277; // [rsp+40h] [rbp-720h]
  int v1278; // [rsp+40h] [rbp-720h]
  int v1279; // [rsp+40h] [rbp-720h]
  int v1280; // [rsp+40h] [rbp-720h]
  int v1281; // [rsp+40h] [rbp-720h]
  int v1282; // [rsp+40h] [rbp-720h]
  int v1283; // [rsp+40h] [rbp-720h]
  int v1284; // [rsp+40h] [rbp-720h]
  int v1285; // [rsp+40h] [rbp-720h]
  int v1286; // [rsp+40h] [rbp-720h]
  int v1287; // [rsp+40h] [rbp-720h]
  int v1288; // [rsp+40h] [rbp-720h]
  int v1289; // [rsp+40h] [rbp-720h]
  int v1290; // [rsp+40h] [rbp-720h]
  int v1291; // [rsp+40h] [rbp-720h]
  int v1292; // [rsp+40h] [rbp-720h]
  int v1293; // [rsp+40h] [rbp-720h]
  int v1294; // [rsp+40h] [rbp-720h]
  int v1295; // [rsp+40h] [rbp-720h]
  int v1296; // [rsp+40h] [rbp-720h]
  int v1297; // [rsp+40h] [rbp-720h]
  int v1298; // [rsp+40h] [rbp-720h]
  int v1299; // [rsp+40h] [rbp-720h]
  int v1300; // [rsp+40h] [rbp-720h]
  int v1301; // [rsp+40h] [rbp-720h]
  int v1302; // [rsp+40h] [rbp-720h]
  int v1303; // [rsp+40h] [rbp-720h]
  int v1304; // [rsp+40h] [rbp-720h]
  int v1305; // [rsp+48h] [rbp-718h]
  int v1306; // [rsp+48h] [rbp-718h]
  int v1307; // [rsp+48h] [rbp-718h]
  int v1308; // [rsp+48h] [rbp-718h]
  int v1309; // [rsp+48h] [rbp-718h]
  int v1310; // [rsp+48h] [rbp-718h]
  int v1311; // [rsp+48h] [rbp-718h]
  int v1312; // [rsp+48h] [rbp-718h]
  int v1313; // [rsp+48h] [rbp-718h]
  int v1314; // [rsp+48h] [rbp-718h]
  int v1315; // [rsp+48h] [rbp-718h]
  int v1316; // [rsp+48h] [rbp-718h]
  int v1317; // [rsp+48h] [rbp-718h]
  int v1318; // [rsp+48h] [rbp-718h]
  int v1319; // [rsp+48h] [rbp-718h]
  int v1320; // [rsp+48h] [rbp-718h]
  int v1321; // [rsp+48h] [rbp-718h]
  int v1322; // [rsp+48h] [rbp-718h]
  int v1323; // [rsp+48h] [rbp-718h]
  int v1324; // [rsp+48h] [rbp-718h]
  int v1325; // [rsp+48h] [rbp-718h]
  int v1326; // [rsp+48h] [rbp-718h]
  int v1327; // [rsp+48h] [rbp-718h]
  int v1328; // [rsp+48h] [rbp-718h]
  int v1329; // [rsp+48h] [rbp-718h]
  int v1330; // [rsp+48h] [rbp-718h]
  int v1331; // [rsp+48h] [rbp-718h]
  int v1332; // [rsp+48h] [rbp-718h]
  int v1333; // [rsp+48h] [rbp-718h]
  int v1334; // [rsp+48h] [rbp-718h]
  int v1335; // [rsp+48h] [rbp-718h]
  int v1336; // [rsp+48h] [rbp-718h]
  int v1337; // [rsp+48h] [rbp-718h]
  int v1338; // [rsp+48h] [rbp-718h]
  int v1339; // [rsp+48h] [rbp-718h]
  int v1340; // [rsp+48h] [rbp-718h]
  int v1341; // [rsp+48h] [rbp-718h]
  int v1342; // [rsp+48h] [rbp-718h]
  int v1343; // [rsp+48h] [rbp-718h]
  int v1344; // [rsp+48h] [rbp-718h]
  int v1345; // [rsp+48h] [rbp-718h]
  int v1346; // [rsp+48h] [rbp-718h]
  int v1347; // [rsp+48h] [rbp-718h]
  int v1348; // [rsp+48h] [rbp-718h]
  int v1349; // [rsp+50h] [rbp-710h]
  int v1350; // [rsp+50h] [rbp-710h]
  int v1351; // [rsp+50h] [rbp-710h]
  int v1352; // [rsp+50h] [rbp-710h]
  int v1353; // [rsp+50h] [rbp-710h]
  int v1354; // [rsp+50h] [rbp-710h]
  int v1355; // [rsp+50h] [rbp-710h]
  char *v1356; // [rsp+50h] [rbp-710h]
  int v1357; // [rsp+50h] [rbp-710h]
  int v1358; // [rsp+50h] [rbp-710h]
  int v1359; // [rsp+50h] [rbp-710h]
  int v1360; // [rsp+50h] [rbp-710h]
  int v1361; // [rsp+50h] [rbp-710h]
  int v1362; // [rsp+50h] [rbp-710h]
  int v1363; // [rsp+50h] [rbp-710h]
  int v1364; // [rsp+50h] [rbp-710h]
  int v1365; // [rsp+50h] [rbp-710h]
  int v1366; // [rsp+50h] [rbp-710h]
  int v1367; // [rsp+50h] [rbp-710h]
  int v1368; // [rsp+50h] [rbp-710h]
  int v1369; // [rsp+50h] [rbp-710h]
  int v1370; // [rsp+50h] [rbp-710h]
  int v1371; // [rsp+50h] [rbp-710h]
  int v1372; // [rsp+50h] [rbp-710h]
  int v1373; // [rsp+50h] [rbp-710h]
  int v1374; // [rsp+50h] [rbp-710h]
  int v1375; // [rsp+50h] [rbp-710h]
  int v1376; // [rsp+50h] [rbp-710h]
  int v1377; // [rsp+50h] [rbp-710h]
  int v1378; // [rsp+50h] [rbp-710h]
  int v1379; // [rsp+50h] [rbp-710h]
  int v1380; // [rsp+50h] [rbp-710h]
  int v1381; // [rsp+50h] [rbp-710h]
  int v1382; // [rsp+50h] [rbp-710h]
  int v1383; // [rsp+50h] [rbp-710h]
  int v1384; // [rsp+50h] [rbp-710h]
  int v1385; // [rsp+50h] [rbp-710h]
  int v1386; // [rsp+50h] [rbp-710h]
  int v1387; // [rsp+50h] [rbp-710h]
  int v1388; // [rsp+50h] [rbp-710h]
  int v1389; // [rsp+50h] [rbp-710h]
  int v1390; // [rsp+50h] [rbp-710h]
  int v1391; // [rsp+50h] [rbp-710h]
  int v1392; // [rsp+50h] [rbp-710h]
  char v1393; // [rsp+58h] [rbp-708h]
  char v1394; // [rsp+58h] [rbp-708h]
  _QWORD *v1395; // [rsp+58h] [rbp-708h]
  char v1396; // [rsp+58h] [rbp-708h]
  char v1397; // [rsp+58h] [rbp-708h]
  _QWORD *v1398; // [rsp+58h] [rbp-708h]
  __int64 v1399; // [rsp+58h] [rbp-708h]
  char v1400; // [rsp+58h] [rbp-708h]
  _QWORD *v1401; // [rsp+58h] [rbp-708h]
  char v1402; // [rsp+58h] [rbp-708h]
  _QWORD *v1403; // [rsp+58h] [rbp-708h]
  char v1404; // [rsp+58h] [rbp-708h]
  char v1405; // [rsp+58h] [rbp-708h]
  char v1406; // [rsp+58h] [rbp-708h]
  char v1407; // [rsp+58h] [rbp-708h]
  char v1408; // [rsp+58h] [rbp-708h]
  char v1409; // [rsp+58h] [rbp-708h]
  char v1410; // [rsp+58h] [rbp-708h]
  char v1411; // [rsp+58h] [rbp-708h]
  char v1412; // [rsp+58h] [rbp-708h]
  char v1413; // [rsp+58h] [rbp-708h]
  char v1414; // [rsp+58h] [rbp-708h]
  char v1415; // [rsp+58h] [rbp-708h]
  char v1416; // [rsp+58h] [rbp-708h]
  char v1417; // [rsp+58h] [rbp-708h]
  char v1418; // [rsp+58h] [rbp-708h]
  char v1419; // [rsp+58h] [rbp-708h]
  char v1420; // [rsp+58h] [rbp-708h]
  char v1421; // [rsp+58h] [rbp-708h]
  char v1422; // [rsp+58h] [rbp-708h]
  char v1423; // [rsp+58h] [rbp-708h]
  char v1424; // [rsp+58h] [rbp-708h]
  char v1425; // [rsp+58h] [rbp-708h]
  char v1426; // [rsp+58h] [rbp-708h]
  char v1427; // [rsp+58h] [rbp-708h]
  char v1428; // [rsp+58h] [rbp-708h]
  char v1429; // [rsp+58h] [rbp-708h]
  char v1430; // [rsp+58h] [rbp-708h]
  _QWORD *v1431; // [rsp+58h] [rbp-708h]
  char v1432; // [rsp+58h] [rbp-708h]
  char v1433; // [rsp+58h] [rbp-708h]
  char v1434; // [rsp+58h] [rbp-708h]
  char v1435; // [rsp+58h] [rbp-708h]
  __int64 v1436; // [rsp+60h] [rbp-700h]
  __int64 v1437; // [rsp+60h] [rbp-700h]
  __int64 v1438; // [rsp+60h] [rbp-700h]
  __int64 v1439; // [rsp+60h] [rbp-700h]
  __int64 v1440; // [rsp+60h] [rbp-700h]
  __int64 v1441; // [rsp+60h] [rbp-700h]
  __int64 v1442; // [rsp+60h] [rbp-700h]
  __int64 v1443; // [rsp+60h] [rbp-700h]
  __int64 v1444; // [rsp+60h] [rbp-700h]
  __int64 v1445; // [rsp+60h] [rbp-700h]
  __int64 v1446; // [rsp+60h] [rbp-700h]
  __int64 v1447; // [rsp+60h] [rbp-700h]
  __int64 v1448; // [rsp+60h] [rbp-700h]
  __int64 v1449; // [rsp+60h] [rbp-700h]
  __int64 v1450; // [rsp+60h] [rbp-700h]
  __int64 v1451; // [rsp+60h] [rbp-700h]
  __int64 v1452; // [rsp+60h] [rbp-700h]
  __int64 v1453; // [rsp+60h] [rbp-700h]
  __int64 v1454; // [rsp+60h] [rbp-700h]
  __int64 v1455; // [rsp+60h] [rbp-700h]
  __int64 v1456; // [rsp+60h] [rbp-700h]
  __int64 v1457; // [rsp+60h] [rbp-700h]
  __int64 v1458; // [rsp+60h] [rbp-700h]
  __int64 v1459; // [rsp+60h] [rbp-700h]
  __int64 v1460; // [rsp+60h] [rbp-700h]
  __int64 v1461; // [rsp+60h] [rbp-700h]
  __int64 v1462; // [rsp+60h] [rbp-700h]
  __int64 v1463; // [rsp+60h] [rbp-700h]
  __int64 v1464; // [rsp+60h] [rbp-700h]
  __int64 v1465; // [rsp+60h] [rbp-700h]
  __int64 v1466; // [rsp+60h] [rbp-700h]
  __int64 v1467; // [rsp+60h] [rbp-700h]
  __int64 v1468; // [rsp+60h] [rbp-700h]
  __int64 v1469; // [rsp+60h] [rbp-700h]
  __int64 v1470; // [rsp+60h] [rbp-700h]
  __int64 v1471; // [rsp+60h] [rbp-700h]
  __int64 v1472; // [rsp+60h] [rbp-700h]
  __int64 v1473; // [rsp+60h] [rbp-700h]
  __int64 v1474; // [rsp+60h] [rbp-700h]
  __int64 v1475; // [rsp+60h] [rbp-700h]
  __int64 v1476; // [rsp+60h] [rbp-700h]
  __int64 v1477; // [rsp+60h] [rbp-700h]
  __int64 v1478; // [rsp+60h] [rbp-700h]
  int v1479; // [rsp+68h] [rbp-6F8h]
  int v1480; // [rsp+68h] [rbp-6F8h]
  int v1481; // [rsp+68h] [rbp-6F8h]
  int v1482; // [rsp+68h] [rbp-6F8h]
  int v1483; // [rsp+68h] [rbp-6F8h]
  int v1484; // [rsp+68h] [rbp-6F8h]
  int v1485; // [rsp+68h] [rbp-6F8h]
  int v1486; // [rsp+68h] [rbp-6F8h]
  int v1487; // [rsp+68h] [rbp-6F8h]
  int v1488; // [rsp+68h] [rbp-6F8h]
  int v1489; // [rsp+68h] [rbp-6F8h]
  int v1490; // [rsp+68h] [rbp-6F8h]
  int v1491; // [rsp+68h] [rbp-6F8h]
  int v1492; // [rsp+68h] [rbp-6F8h]
  int v1493; // [rsp+68h] [rbp-6F8h]
  int v1494; // [rsp+68h] [rbp-6F8h]
  int v1495; // [rsp+68h] [rbp-6F8h]
  int v1496; // [rsp+68h] [rbp-6F8h]
  int v1497; // [rsp+68h] [rbp-6F8h]
  int v1498; // [rsp+68h] [rbp-6F8h]
  int v1499; // [rsp+68h] [rbp-6F8h]
  int v1500; // [rsp+68h] [rbp-6F8h]
  int v1501; // [rsp+68h] [rbp-6F8h]
  int v1502; // [rsp+68h] [rbp-6F8h]
  int v1503; // [rsp+68h] [rbp-6F8h]
  int v1504; // [rsp+68h] [rbp-6F8h]
  int v1505; // [rsp+68h] [rbp-6F8h]
  int v1506; // [rsp+68h] [rbp-6F8h]
  int v1507; // [rsp+68h] [rbp-6F8h]
  int v1508; // [rsp+68h] [rbp-6F8h]
  int v1509; // [rsp+68h] [rbp-6F8h]
  int v1510; // [rsp+68h] [rbp-6F8h]
  int v1511; // [rsp+68h] [rbp-6F8h]
  int v1512; // [rsp+68h] [rbp-6F8h]
  int v1513; // [rsp+68h] [rbp-6F8h]
  int v1514; // [rsp+68h] [rbp-6F8h]
  int v1515; // [rsp+68h] [rbp-6F8h]
  int v1516; // [rsp+68h] [rbp-6F8h]
  int v1517; // [rsp+68h] [rbp-6F8h]
  int v1518; // [rsp+68h] [rbp-6F8h]
  int v1519; // [rsp+68h] [rbp-6F8h]
  int v1520; // [rsp+68h] [rbp-6F8h]
  int v1521; // [rsp+68h] [rbp-6F8h]
  __int64 v1522; // [rsp+70h] [rbp-6F0h]
  __int64 v1523; // [rsp+70h] [rbp-6F0h]
  __int64 v1524; // [rsp+70h] [rbp-6F0h]
  __int64 v1525; // [rsp+70h] [rbp-6F0h]
  __int64 v1526; // [rsp+70h] [rbp-6F0h]
  __int64 v1527; // [rsp+70h] [rbp-6F0h]
  __int64 v1528; // [rsp+70h] [rbp-6F0h]
  __int64 v1529; // [rsp+70h] [rbp-6F0h]
  __int64 v1530; // [rsp+70h] [rbp-6F0h]
  __int64 v1531; // [rsp+70h] [rbp-6F0h]
  __int64 v1532; // [rsp+70h] [rbp-6F0h]
  __int64 v1533; // [rsp+70h] [rbp-6F0h]
  __int64 v1534; // [rsp+70h] [rbp-6F0h]
  __int64 v1535; // [rsp+70h] [rbp-6F0h]
  __int64 v1536; // [rsp+70h] [rbp-6F0h]
  __int64 v1537; // [rsp+70h] [rbp-6F0h]
  __int64 v1538; // [rsp+70h] [rbp-6F0h]
  __int64 v1539; // [rsp+70h] [rbp-6F0h]
  __int64 v1540; // [rsp+70h] [rbp-6F0h]
  __int64 v1541; // [rsp+70h] [rbp-6F0h]
  __int64 v1542; // [rsp+70h] [rbp-6F0h]
  __int64 v1543; // [rsp+70h] [rbp-6F0h]
  _QWORD *v1544; // [rsp+70h] [rbp-6F0h]
  __int64 v1545; // [rsp+70h] [rbp-6F0h]
  __int64 v1546; // [rsp+70h] [rbp-6F0h]
  __int64 v1547; // [rsp+70h] [rbp-6F0h]
  __int64 v1548; // [rsp+70h] [rbp-6F0h]
  __int64 v1549; // [rsp+70h] [rbp-6F0h]
  __int64 v1550; // [rsp+70h] [rbp-6F0h]
  __int64 v1551; // [rsp+70h] [rbp-6F0h]
  __int64 v1552; // [rsp+70h] [rbp-6F0h]
  __int64 v1553; // [rsp+70h] [rbp-6F0h]
  __int64 v1554; // [rsp+70h] [rbp-6F0h]
  __int64 v1555; // [rsp+70h] [rbp-6F0h]
  __int64 v1556; // [rsp+70h] [rbp-6F0h]
  __int64 v1557; // [rsp+70h] [rbp-6F0h]
  __int64 v1558; // [rsp+70h] [rbp-6F0h]
  __int64 v1559; // [rsp+70h] [rbp-6F0h]
  __int64 v1560; // [rsp+70h] [rbp-6F0h]
  __int64 v1561; // [rsp+70h] [rbp-6F0h]
  __int64 v1562; // [rsp+70h] [rbp-6F0h]
  __int64 v1563; // [rsp+70h] [rbp-6F0h]
  __int64 v1564; // [rsp+70h] [rbp-6F0h]
  __int64 v1565; // [rsp+70h] [rbp-6F0h]
  __int64 v1566; // [rsp+70h] [rbp-6F0h]
  bool v1567; // [rsp+7Eh] [rbp-6E2h]
  char v1568; // [rsp+7Eh] [rbp-6E2h]
  __int8 v1569; // [rsp+7Fh] [rbp-6E1h]
  __int64 v1570; // [rsp+80h] [rbp-6E0h]
  __int64 v1571; // [rsp+88h] [rbp-6D8h]
  char v1572; // [rsp+88h] [rbp-6D8h]
  __int64 v1573; // [rsp+90h] [rbp-6D0h]
  __m128i v1574; // [rsp+98h] [rbp-6C8h] BYREF
  __int8 *v1575; // [rsp+A8h] [rbp-6B8h]
  void **v1576; // [rsp+B0h] [rbp-6B0h]
  __int64 v1577; // [rsp+B8h] [rbp-6A8h]
  char *v1578; // [rsp+C0h] [rbp-6A0h]
  __int128 *v1579; // [rsp+C8h] [rbp-698h]
  char *v1580; // [rsp+D0h] [rbp-690h]
  size_t *v1581; // [rsp+D8h] [rbp-688h]
  __int64 *v1582; // [rsp+E0h] [rbp-680h]
  _QWORD *v1583; // [rsp+E8h] [rbp-678h]
  char *v1584; // [rsp+F0h] [rbp-670h] BYREF
  char **v1585; // [rsp+F8h] [rbp-668h]
  __m128i v1586; // [rsp+100h] [rbp-660h] BYREF
  __int64 *v1587; // [rsp+110h] [rbp-650h]
  char *v1588; // [rsp+118h] [rbp-648h]
  __int128 *v1589; // [rsp+120h] [rbp-640h]
  __int128 *v1590; // [rsp+128h] [rbp-638h]
  __int8 **v1591; // [rsp+130h] [rbp-630h]
  __int8 *v1592; // [rsp+138h] [rbp-628h]
  void *v1593; // [rsp+140h] [rbp-620h]
  void *frame_size; // [rsp+148h] [rbp-618h]
  char *v1595; // [rsp+150h] [rbp-610h]
  __int64 v1596; // [rsp+158h] [rbp-608h]
  __int128 *v1597; // [rsp+160h] [rbp-600h]
  __m128i *v1598; // [rsp+168h] [rbp-5F8h]
  __int128 *v1599; // [rsp+170h] [rbp-5F0h]
  ida_mcp::tools::cpp_class_recovery *v1600; // [rsp+178h] [rbp-5E8h]
  char *v1601; // [rsp+180h] [rbp-5E0h]
  __int64 v1602; // [rsp+188h] [rbp-5D8h]
  __m128i *v1603; // [rsp+190h] [rbp-5D0h]
  char *v1604; // [rsp+198h] [rbp-5C8h]
  char *v1605[2]; // [rsp+1A0h] [rbp-5C0h] BYREF
  _QWORD v1606[2]; // [rsp+1B0h] [rbp-5B0h] BYREF
  __m128i v1607; // [rsp+1C0h] [rbp-5A0h]
  __m128i v1608[2]; // [rsp+1D0h] [rbp-590h] BYREF
  char v1609; // [rsp+1F0h] [rbp-570h] BYREF
  char v1610; // [rsp+200h] [rbp-560h] BYREF
  unsigned __int64 v1611; // [rsp+210h] [rbp-550h]
  char v1612; // [rsp+220h] [rbp-540h] BYREF
  _QWORD *v1613; // [rsp+228h] [rbp-538h] BYREF
  char v1614; // [rsp+230h] [rbp-530h] BYREF
  __int8 *v1615; // [rsp+238h] [rbp-528h]
  char v1616; // [rsp+240h] [rbp-520h] BYREF
  __int64 v1617; // [rsp+248h] [rbp-518h]
  size_t v1618; // [rsp+250h] [rbp-510h] BYREF
  __int128 *v1619; // [rsp+258h] [rbp-508h] BYREF
  __m128i v1620; // [rsp+260h] [rbp-500h] BYREF
  const char *v1621; // [rsp+270h] [rbp-4F0h]
  __int128 v1622; // [rsp+278h] [rbp-4E8h]
  __m128i v1623; // [rsp+290h] [rbp-4D0h] BYREF
  char v1624; // [rsp+2A0h] [rbp-4C0h]
  unsigned __int8 v1625; // [rsp+2A1h] [rbp-4BFh]
  char *v1626; // [rsp+2B0h] [rbp-4B0h] BYREF
  __int128 v1627; // [rsp+2B8h] [rbp-4A8h]
  void *src[5]; // [rsp+2D0h] [rbp-490h] BYREF
  unsigned __int64 v1629; // [rsp+2F8h] [rbp-468h]
  char *v1630; // [rsp+300h] [rbp-460h] BYREF
  __m256i v1631; // [rsp+308h] [rbp-458h] BYREF
  unsigned __int64 v1632; // [rsp+328h] [rbp-438h]
  _QWORD v1633[4]; // [rsp+330h] [rbp-430h] BYREF
  char v1634[8]; // [rsp+350h] [rbp-410h] BYREF
  __int128 v1635; // [rsp+358h] [rbp-408h] BYREF
  char v1636; // [rsp+368h] [rbp-3F8h]
  __int64 v1637; // [rsp+370h] [rbp-3F0h]
  __int64 v1638; // [rsp+378h] [rbp-3E8h]
  char v1639[8]; // [rsp+380h] [rbp-3E0h] BYREF
  __int128 v1640; // [rsp+388h] [rbp-3D8h] BYREF
  __int64 v1641; // [rsp+3A8h] [rbp-3B8h]
  char v1642[8]; // [rsp+3B0h] [rbp-3B0h] BYREF
  __int64 v1643; // [rsp+3C0h] [rbp-3A0h]
  char v1644; // [rsp+3C8h] [rbp-398h]
  _BOOL8 v1645; // [rsp+3D0h] [rbp-390h]
  __int64 v1646; // [rsp+3D8h] [rbp-388h]
  char v1647; // [rsp+3E0h] [rbp-380h] BYREF
  __int64 v1648; // [rsp+3F0h] [rbp-370h]
  _QWORD v1649[3]; // [rsp+3F8h] [rbp-368h] BYREF
  char v1650[8]; // [rsp+410h] [rbp-350h] BYREF
  __int128 v1651; // [rsp+418h] [rbp-348h] BYREF
  char v1652; // [rsp+428h] [rbp-338h]
  __int64 v1653; // [rsp+430h] [rbp-330h]
  __int64 v1654; // [rsp+438h] [rbp-328h]
  void *v1655; // [rsp+440h] [rbp-320h] BYREF
  __int128 v1656; // [rsp+448h] [rbp-318h] BYREF
  __int64 v1657; // [rsp+468h] [rbp-2F8h]
  void *v1658; // [rsp+470h] [rbp-2F0h] BYREF
  size_t v1659; // [rsp+478h] [rbp-2E8h]
  __int64 v1660; // [rsp+480h] [rbp-2E0h] BYREF
  char v1661; // [rsp+488h] [rbp-2D8h]
  _BOOL8 v1662; // [rsp+490h] [rbp-2D0h]
  __int64 v1663; // [rsp+498h] [rbp-2C8h]
  void *v1664; // [rsp+4A0h] [rbp-2C0h] BYREF
  __int128 v1665; // [rsp+4A8h] [rbp-2B8h] BYREF
  _QWORD v1666[2]; // [rsp+4B8h] [rbp-2A8h] BYREF
  __int64 v1667; // [rsp+4C8h] [rbp-298h]
  char *v1668; // [rsp+4D0h] [rbp-290h] BYREF
  __int128 v1669; // [rsp+4D8h] [rbp-288h] BYREF
  __int64 v1670; // [rsp+4E8h] [rbp-278h]
  __int128 v1671; // [rsp+4F0h] [rbp-270h] BYREF
  char v1672[8]; // [rsp+500h] [rbp-260h] BYREF
  __m128i v1673; // [rsp+508h] [rbp-258h] BYREF
  __int64 v1674; // [rsp+518h] [rbp-248h] BYREF
  __int128 v1675; // [rsp+520h] [rbp-240h] BYREF
  _QWORD v1676[3]; // [rsp+530h] [rbp-230h] BYREF
  char v1677; // [rsp+548h] [rbp-218h] BYREF
  __int8 *v1678; // [rsp+550h] [rbp-210h] BYREF
  __m128i v1679; // [rsp+558h] [rbp-208h] BYREF
  __int64 v1680; // [rsp+568h] [rbp-1F8h] BYREF
  __int128 v1681; // [rsp+570h] [rbp-1F0h] BYREF
  _QWORD v1682[3]; // [rsp+580h] [rbp-1E0h] BYREF
  char v1683; // [rsp+598h] [rbp-1C8h] BYREF
  size_t *v1684; // [rsp+5A0h] [rbp-1C0h] BYREF
  size_t v1685; // [rsp+5A8h] [rbp-1B8h] BYREF
  size_t v1686; // [rsp+5B0h] [rbp-1B0h] BYREF
  __int64 v1687; // [rsp+5B8h] [rbp-1A8h] BYREF
  char v1688; // [rsp+5C0h] [rbp-1A0h] BYREF
  __int64 v1689; // [rsp+5C8h] [rbp-198h]
  _QWORD v1690[2]; // [rsp+5D0h] [rbp-190h] BYREF
  __int64 v1691; // [rsp+5E0h] [rbp-180h]
  _QWORD v1692[3]; // [rsp+5E8h] [rbp-178h] BYREF
  _QWORD v1693[3]; // [rsp+600h] [rbp-160h] BYREF
  char v1694; // [rsp+618h] [rbp-148h] BYREF
  _QWORD v1695[4]; // [rsp+620h] [rbp-140h] BYREF
  char v1696[24]; // [rsp+640h] [rbp-120h] BYREF
  _BYTE v1697[8]; // [rsp+658h] [rbp-108h]
  char v1698[24]; // [rsp+660h] [rbp-100h] BYREF
  _BYTE v1699[8]; // [rsp+678h] [rbp-E8h]
  char v1700[24]; // [rsp+680h] [rbp-E0h] BYREF
  _BYTE v1701[8]; // [rsp+698h] [rbp-C8h]
  char v1702[24]; // [rsp+6A0h] [rbp-C0h] BYREF
  _BYTE v1703[8]; // [rsp+6B8h] [rbp-A8h]
  char v1704[24]; // [rsp+6C0h] [rbp-A0h] BYREF
  _BYTE v1705[8]; // [rsp+6D8h] [rbp-88h]
  char v1706[32]; // [rsp+6E0h] [rbp-80h] BYREF
  char s[40]; // [rsp+700h] [rbp-60h] BYREF
  unsigned __int64 v1708; // [rsp+728h] [rbp-38h]

  v1708 = __readfsqword(0x28u);
  v1679.m128i_i8[8] = 0;
  v1679.m128i_i64[0] = 0;
  v9 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v1591 = &v1678;
  v1678 = &v1679.m128i_i8[8];
  if ( *v9 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v9 )
    {
      case 0:
        v7 = "null";
        break;
      case 1:
        v7 = "object";
        break;
      case 2:
        v7 = (char *)"array";
        break;
      case 3:
        v7 = "string";
        break;
      case 4:
        v7 = "boolean";
        break;
      case 8:
        v7 = "binary";
        break;
      case 9:
        v7 = "discarded";
        break;
      default:
        v7 = "number";
        break;
    }
    v1630 = v7;
    v1604 = (char *)&v1684;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v10 = v1678;
  if ( v1679.m128i_i64[0] > 2uLL && *v1678 == 48 && (v1678[1] & 0xDF) == 0x58 )
    v10 = v1678 + 2;
  v11 = __errno_location();
  *v11 = 0;
  v12 = v11;
  v13 = __isoc23_strtoull();
  if ( v10 == v1630 || *v1630 || (v1567 = v13 == -1 && *v12 == 34) )
  {
    std::string::_M_dispose();
    v2 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v2, "Invalid address format");
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v1620.m128i_i64[0] = v13;
  v1620.m128i_i8[8] = 1;
  v1607 = _mm_load_si128(&v1620);
  std::string::_M_dispose();
  if ( *(_BYTE *)a2 != 1 )
  {
    LOBYTE(v1598) = 1;
LABEL_9:
    v1573 = 2;
    goto LABEL_10;
  }
  v278 = *(_QWORD *)(a2 + 8);
  v279 = (char *)(v278 + 8);
  v1605[0] = *(char **)(v278 + 16);
  v280 = v1605[0];
  if ( !v1605[0] )
  {
    v1573 = 2;
    LOBYTE(v1598) = 1;
    goto LABEL_10;
  }
  v1604 = (char *)(v278 + 8);
  do
  {
    while ( 1 )
    {
      v283 = *((_QWORD *)v280 + 5);
      if ( !v283 )
        break;
      v281 = 13;
      if ( v283 <= 0xD )
        v281 = *((_QWORD *)v280 + 5);
      v282 = memcmp(*((const void **)v280 + 4), "include_xrefs", v281);
      if ( v282 || (v282 = v283 - 13, (__int64)(v283 - 13) <= 0x7FFFFFFF) )
      {
        if ( v282 < 0 )
          break;
      }
      v279 = v280;
      v280 = *((char **)v280 + 2);
      if ( !v280 )
        goto LABEL_167;
    }
    v280 = *((char **)v280 + 3);
  }
  while ( v280 );
LABEL_167:
  v284 = v1604;
  if ( v1604 == v279 || std::string::compare(*((void **)v279 + 4), *((_QWORD *)v279 + 5), "include_xrefs") > 0 )
  {
    LOBYTE(v1598) = 1;
    v285 = v1605[0];
    v286 = v1604;
  }
  else
  {
    LOBYTE(v1598) = 1;
    if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      LOBYTE(v1630) = 0;
      nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      LOBYTE(v1598) = (_BYTE)v1630;
    }
    if ( *(_BYTE *)a2 != 1 )
      goto LABEL_9;
    v295 = *(_QWORD *)(a2 + 8);
    v296 = *(char **)(v295 + 16);
    v284 = (char *)(v295 + 8);
    v286 = (char *)(v295 + 8);
    v1605[0] = v296;
    if ( !v296 )
      goto LABEL_9;
    v285 = v296;
  }
  v1604 = v284;
  do
  {
    while ( 1 )
    {
      v289 = *((_QWORD *)v1605[0] + 5);
      if ( !v289 )
        break;
      v287 = 9;
      if ( v289 <= 9 )
        v287 = *((_QWORD *)v1605[0] + 5);
      v288 = memcmp(*((const void **)v1605[0] + 4), "max_depth", v287);
      if ( v288 || (v288 = v289 - 9, (__int64)(v289 - 9) <= 0x7FFFFFFF) )
      {
        if ( v288 < 0 )
          break;
      }
      v286 = v1605[0];
      v1605[0] = *((char **)v1605[0] + 2);
      if ( !v1605[0] )
        goto LABEL_179;
    }
    v1605[0] = *((char **)v1605[0] + 3);
  }
  while ( v1605[0] );
LABEL_179:
  v290 = v1604;
  if ( v1604 == v286 )
  {
    v1573 = 2;
  }
  else
  {
    v1573 = 2;
    if ( std::string::compare(*((void **)v286 + 4), *((_QWORD *)v286 + 5), "max_depth") <= 0 )
    {
      if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v1630 = nullptr;
        nlohmann::json_abi_v3_12_0::detail::get_arithmetic_value<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,unsigned long,0>();
        v681 = 5;
        if ( (unsigned __int64)v1630 <= 5 )
          v681 = (__int64)v1630;
        v1573 = v681;
      }
      if ( *(_BYTE *)a2 != 1 )
        goto LABEL_10;
      v297 = *(_QWORD *)(a2 + 8);
      v285 = *(char **)(v297 + 16);
      v290 = (char *)(v297 + 8);
      if ( !v285 )
        goto LABEL_10;
    }
  }
  v1605[0] = v290;
  v291 = v290;
  do
  {
    while ( 1 )
    {
      v294 = *((_QWORD *)v285 + 5);
      if ( !v294 )
        break;
      v292 = 21;
      if ( v294 <= 0x15 )
        v292 = *((_QWORD *)v285 + 5);
      v293 = memcmp(*((const void **)v285 + 4), "include_decompilation", v292);
      if ( v293 || (v293 = v294 - 21, (__int64)(v294 - 21) <= 0x7FFFFFFF) )
      {
        if ( v293 < 0 )
          break;
      }
      v291 = v285;
      v285 = *((char **)v285 + 2);
      if ( !v285 )
        goto LABEL_190;
    }
    v285 = *((char **)v285 + 3);
  }
  while ( v285 );
LABEL_190:
  if ( v291 != v1605[0]
    && std::string::compare(*((void **)v291 + 4), *((_QWORD *)v291 + 5), "include_decompilation") <= 0
    && *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    LOBYTE(v1630) = 0;
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    v1567 = (char)v1630;
  }
LABEL_10:
  func = (void **)get_func();
  v1574.m128i_i64[0] = (__int64)func;
  if ( !func )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
    v1660 = 0;
    v1598 = (__m128i *)&v1647;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    v1663 = 0;
    v1604 = (char *)&v1684;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v1684,
      (__int64)&v1658,
      2,
      v298,
      v299,
      v300,
      v844,
      v911,
      v976,
      v1041,
      v1084,
      v1128,
      a1,
      v1216,
      v1261,
      v1305,
      v1349,
      (char)&v1630,
      v1436,
      v1479,
      v1522);
    LOBYTE(v1664) = 0;
    v1686 = 0;
    *(_QWORD *)&v1665 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v1664) = 3;
    v301 = operator new(0x20u);
    *(_DWORD *)(v301 + 16) = 1869771365;
    *(_QWORD *)v301 = v301 + 16;
    *(_BYTE *)(v301 + 20) = 114;
    *(_QWORD *)(v301 + 8) = 5;
    *(_BYTE *)(v301 + 21) = 0;
    v1666[0] = 4;
    v1666[1] = 1;
    v1667 = 0;
    v1665 = (unsigned __int64)v301;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v1687,
      (__int64)&v1664,
      2,
      v302,
      v303,
      v304,
      v870,
      v935,
      v1001,
      v1056,
      v1099,
      v1143,
      v1187,
      v1232,
      v1276,
      v1320,
      v1364,
      v1407,
      v1451,
      v1494,
      v1537);
    v1689 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
    *((_QWORD *)&v1669 + 1) = 0;
    ida_mcp::format_ea[abi:cxx11]();
    std::string::_M_replace();
    v1586.m128i_i64[0] = (__int64)&v1655;
    std::string::basic_string();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    *((_QWORD *)&v1671 + 1) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v1690,
      (__int64)&v1668,
      2,
      v305,
      v306,
      v307,
      v871,
      v936,
      v1002,
      v1057,
      v1100,
      v1144,
      v1188,
      v1233,
      v1277,
      v1321,
      v1365,
      v1408,
      v1452,
      v1495,
      v1538);
    v1691 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
    LOBYTE(v1674) = 0;
    v1599 = &v1675;
    v1673.m128i_i64[1] = 0;
    *(_QWORD *)&v1675 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v1674) = 3;
    v308 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v308,
      "This address may be in data, undefined code, or not analyzed as a function by IDA Pro.",
      v309,
      v310,
      v311,
      v312,
      v872,
      v937,
      v1003);
    v1675 = (unsigned __int64)v308;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v1692,
      (__int64)v1672,
      2,
      v313,
      v314,
      v315,
      v873,
      v938,
      v1004,
      v1058,
      v1101,
      v1145,
      v1189,
      v1234,
      v1278,
      v1322,
      v1366,
      v1409,
      v1453,
      v1496,
      v1539);
    LOBYTE(v1678) = 0;
    v1603 = &v1679;
    v1692[2] = 0;
    v1679.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v1678) = 3;
    v316 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v316, "suggestion", v317, v318, v319, v320, v874, v939, v1005);
    LOBYTE(v1680) = 0;
    v1597 = &v1681;
    *(_QWORD *)&v1681 = 0;
    v1679 = (__m128i)(unsigned __int64)v316;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v1680) = 3;
    v321 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v321,
      "Try using get_address_info or get_func_limits to find the containing function, or ensure IDA has analyzed this address.",
      v322,
      v323,
      v324,
      v325,
      v875,
      v940,
      v1006);
    v1681 = (unsigned __int64)v321;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v1693,
      (__int64)v1591,
      2,
      v326,
      v327,
      v328,
      v876,
      v941,
      v1007,
      v1059,
      v1102,
      v1146,
      v1190,
      v1235,
      v1279,
      v1323,
      v1367,
      v1410,
      v1454,
      v1497,
      v1540);
    v1693[2] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v1191,
      (__int64)v1604,
      5,
      v329,
      v330,
      v331,
      v877,
      v942,
      v1008,
      v1060,
      v1103,
      v1147,
      (__int64)v1191,
      v1236,
      v1280,
      v1324,
      v1368,
      v1411,
      v1455,
      v1498,
      v1541);
    v332 = &v1694;
    do
    {
      v332 -= 24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v332 != v1604 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    std::string::_M_dispose();
    std::string::_M_dispose();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    std::string::_M_dispose();
    return v1179;
  }
  v15 = (char *)*func;
  v1584 = (char *)func[1];
  v1578 = v15;
  ida_mcp::get_function_name[abi:cxx11]();
  v1621 = nullptr;
  v1606[0] = 0;
  v1622 = 0;
  if ( (unsigned __int8)get_tinfo() )
    print_tinfo();
  v16 = *(_QWORD *)(v1574.m128i_i64[0] + 16);
  frame_size = (void *)get_frame_size();
  v1604 = (char *)&v1684;
  ida_mcp::format_ea[abi:cxx11]();
  v1630 = nullptr;
  v1631.m256i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v17 = operator new(0x20u);
  v18 = v1684;
  v19 = (_QWORD *)v17;
  v20 = v17 + 16;
  *v19 = v20;
  v21 = v1685;
  if ( v18 == &v1686 )
  {
    v727 = v1685 + 1;
    if ( (unsigned int)(v1685 + 1) >= 8 )
    {
      v19[2] = v1686;
      *(_QWORD *)(v20 + v727 - 8) = *(size_t *)((char *)&v1685 + v727);
      v760 = (unsigned __int64)(v19 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v761 = v20 - v760;
      v762 = (char *)&v1686 - v761;
      v763 = (v727 + v761) & 0xFFFFFFF8;
      if ( v763 >= 8 )
      {
        v764 = v763 & 0xFFFFFFF8;
        v765 = 0;
        do
        {
          v766 = v765;
          v765 += 8;
          *(_QWORD *)(v760 + v766) = *(_QWORD *)&v762[v766];
        }
        while ( v765 < v764 );
      }
    }
    else if ( (v727 & 4) != 0 )
    {
      *((_DWORD *)v19 + 4) = v1686;
      *(_DWORD *)(v20 + v727 - 4) = *(_DWORD *)((char *)&v1685 + v727 + 4);
    }
    else if ( (_DWORD)v1685 != -1 )
    {
      *((_BYTE *)v19 + 16) = v1686;
      if ( (v727 & 2) != 0 )
        *(_WORD *)(v20 + v727 - 2) = *(_WORD *)((char *)&v1685 + v727 + 6);
    }
  }
  else
  {
    v22 = v1686;
    *v19 = v18;
    v19[2] = v22;
  }
  v19[1] = v21;
  v1684 = &v1686;
  v1685 = 0;
  LOBYTE(v1686) = 0;
  v1608[0].m128i_i8[0] = 0;
  v1608[0].m128i_i64[1] = 0;
  v23 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v24 = *(_BYTE *)v23;
  *(_BYTE *)v23 = 3;
  v25 = *(_QWORD *)(v23 + 8);
  *(_QWORD *)(v23 + 8) = v19;
  LOBYTE(v1630) = v24;
  v1631.m256i_i64[0] = v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  v1630 = nullptr;
  v1631.m256i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1605[0] = (char *)v1633[1];
  v26 = (_QWORD *)operator new(0x20u);
  *v26 = v26 + 2;
  std::string::_M_construct<true>();
  v27 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v28 = *(_BYTE *)v27;
  *(_BYTE *)v27 = 3;
  v29 = *(_QWORD *)(v27 + 8);
  *(_QWORD *)(v27 + 8) = v26;
  LOBYTE(v1630) = v28;
  v1631.m256i_i64[0] = v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( (_QWORD)v1622 )
    v30 = v1621;
  else
    v30 = _qstring<char>::c_str(void)const::nullstr;
  v1630 = nullptr;
  v1631.m256i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v31 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v31, v30, v32, v33, v34, v35, v844, v911, v976);
  v36 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v37 = *(_BYTE *)v36;
  *(_BYTE *)v36 = 3;
  v38 = *(_QWORD *)(v36 + 8);
  *(_QWORD *)(v36 + 8) = v31;
  LOBYTE(v1630) = v37;
  v1631.m256i_i64[0] = v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1668) = 0;
  v1590 = &v1669;
  *(_QWORD *)&v1669 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1668) = 3;
  v39 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v39, "start", v40, v41, v42, v43, v845, v912, v977);
  v1576 = &v1658;
  v1669 = (unsigned __int64)v39;
  ida_mcp::format_ea[abi:cxx11]();
  LOBYTE(v1670) = 0;
  v1589 = &v1671;
  *(_QWORD *)&v1671 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1670) = 3;
  v44 = operator new(0x20u);
  v47 = (__int64 *)v1658;
  v48 = (_QWORD *)v44;
  v49 = (unsigned __int64)v44;
  v50 = v44 + 16;
  v51 = v1659;
  *v48 = v50;
  if ( v47 == &v1660 )
  {
    v726 = v51 + 1;
    if ( (unsigned int)(v51 + 1) >= 8 )
    {
      v48[2] = v1660;
      *(_QWORD *)(v50 + v726 - 8) = *(size_t *)((char *)&v1659 + v726);
      v45 = (unsigned __int64)(v48 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v755 = v50 - v45;
      v46 = (char *)&v1660 - v755;
      v756 = (v726 + v755) & 0xFFFFFFF8;
      if ( v756 >= 8 )
      {
        v757 = v756 & 0xFFFFFFF8;
        v758 = 0;
        do
        {
          v759 = v758;
          v758 += 8;
          *(_QWORD *)(v45 + v759) = *(_QWORD *)&v46[v759];
        }
        while ( v758 < v757 );
      }
    }
    else if ( (v726 & 4) != 0 )
    {
      *((_DWORD *)v48 + 4) = v1660;
      *(_DWORD *)(v50 + v726 - 4) = *(_DWORD *)((char *)&v1659 + v726 + 4);
    }
    else if ( (_DWORD)v51 != -1 )
    {
      *((_BYTE *)v48 + 16) = v1660;
      if ( (v726 & 2) != 0 )
        *(_WORD *)(v50 + v726 - 2) = *(_WORD *)((char *)&v1659 + v726 + 6);
    }
  }
  else
  {
    v52 = v1660;
    *v48 = v47;
    v48[2] = v52;
  }
  v48[1] = v51;
  v1658 = &v1660;
  v1659 = 0;
  LOBYTE(v1660) = 0;
  v1585 = &v1668;
  v1671 = v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1604,
    (__int64)&v1668,
    2,
    (__int64)v48,
    v45,
    (__int64)v46,
    v846,
    v913,
    v978,
    v1041,
    (int)v1633,
    (int)v1606,
    a1,
    v1216,
    v1261,
    (int)v1608,
    v1349,
    (char)&v1630,
    v1436,
    v1479,
    v1522);
  v1672[0] = 0;
  v1600 = (ida_mcp::tools::cpp_class_recovery *)&v1673;
  v1686 = 0;
  v1673.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1672[0] = 3;
  v53 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v53, "end", v54, v55, v56, v57, v847, v914, v979);
  v1574.m128i_i64[1] = (__int64)&v1664;
  v1673 = (__m128i)(unsigned __int64)v53;
  ida_mcp::format_ea[abi:cxx11]();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
  *((_QWORD *)&v1675 + 1) = 0;
  v1588 = v1672;
  v1587 = &v1687;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1687,
    (__int64)v1672,
    2,
    v58,
    v59,
    v60,
    v848,
    (__int64)&v1674,
    v980,
    v1042,
    v1085,
    v1129,
    v1173,
    v1217,
    v1262,
    v1306,
    v1350,
    v1393,
    v1437,
    v1480,
    v1523);
  LOBYTE(v1678) = 0;
  v1603 = &v1679;
  v1689 = 0;
  v1679.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1678) = 3;
  v61 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v61, "size", v62, v63, v64, v65, v849, v915, v981);
  v1681 = (unsigned __int64)(v1584 - v1578);
  LOBYTE(v1680) = 6;
  v1583 = v1690;
  v1679 = (__m128i)(unsigned __int64)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1690,
    (__int64)v1591,
    2,
    v66,
    v67,
    v68,
    v850,
    v916,
    v982,
    v1043,
    v1086,
    v1130,
    v1174,
    v1218,
    v1263,
    v1307,
    v1351,
    v1394,
    v1438,
    v1481,
    v1524);
  v1691 = 0;
  LOBYTE(v1630) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1395,
    (__int64)v1604,
    3,
    v69,
    v70,
    v71,
    v851,
    v917,
    v983,
    v1044,
    v1087,
    v1131,
    v1175,
    v1219,
    v1264,
    v1308,
    v1352,
    (char)v1395,
    v1439,
    v1482,
    v1525);
  LOBYTE(v61) = (_BYTE)v1630;
  v72 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v73 = *(_BYTE *)v72;
  *(_BYTE *)v72 = (_BYTE)v61;
  v74 = *(_QWORD *)(v72 + 8);
  v75 = (char *)v1692;
  *(_QWORD *)(v72 + 8) = v1631.m256i_i64[0];
  v1631.m256i_i64[0] = v74;
  LOBYTE(v1630) = v73;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1605[0] = v1604;
  do
  {
    v75 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v75 != v1605[0] );
  v1597 = &v1681;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1599 = &v1675;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  v1672[0] = 0;
  v1673.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1672[0] = 3;
  v76 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v76, "flags", v77, v78, v79, v80, v852, v918, v984);
  LOBYTE(v1674) = 6;
  v1675 = (unsigned int)v16;
  v1673 = (__m128i)(unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1604,
    (__int64)v1588,
    2,
    v81,
    v82,
    v83,
    v853,
    v919,
    v985,
    v1045,
    v1088,
    v1132,
    v1176,
    v1220,
    v1265,
    v1309,
    v1353,
    v1396,
    v1440,
    v1483,
    v1526);
  LOBYTE(v1678) = 0;
  v1686 = 0;
  v1679.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1678) = 3;
  v84 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v84, "frame_size", v85, v86, v87, v88, v854, v920, v986);
  LOBYTE(v1680) = 6;
  v1681 = (unsigned __int64)frame_size;
  v1679 = (__m128i)(unsigned __int64)v84;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1587,
    (__int64)v1591,
    2,
    v89,
    v90,
    v91,
    v855,
    v921,
    v987,
    v1046,
    v1089,
    v1133,
    v1177,
    v1221,
    v1266,
    v1310,
    v1354,
    v1397,
    v1441,
    v1484,
    v1527);
  v1689 = 0;
  LOBYTE(v1630) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1398,
    (__int64)v1604,
    2,
    v92,
    v93,
    v94,
    v856,
    v922,
    v988,
    v1047,
    v1090,
    v1134,
    v1178,
    v1222,
    v1267,
    v1311,
    v1355,
    (char)v1398,
    v1442,
    v1485,
    v1528);
  LOBYTE(v84) = (_BYTE)v1630;
  v95 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v96 = v1608[0].m128i_i8[0];
  v97 = *(_QWORD *)(v95 + 8);
  v98 = *(_BYTE *)v95;
  *(_BYTE *)v95 = (_BYTE)v84;
  v1569 = v96;
  v1570 = v1608[0].m128i_i64[1];
  *(_QWORD *)(v95 + 8) = v1631.m256i_i64[0];
  v1631.m256i_i64[0] = v97;
  LOBYTE(v1630) = v98;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1580 = &v1688;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1581 = &v1685;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v99 = v1600;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( (_BYTE)v1598 )
  {
    v1612 = 0;
    v1613 = nullptr;
    v1579 = (__int128 *)&v1612;
    *(__m128i *)v1605 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)&src[1]);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    si128 = _mm_load_si128((const __m128i *)v1605);
    LODWORD(src[1]) = 0;
    src[4] = &src[1];
    v1572 = v1612;
    v1629 = 0;
    v1544 = v1613;
    v1598 = &v1623;
    *(__m128i *)&src[2] = si128;
    for ( i = xrefblk_t_first_to(); ; i = xrefblk_t_next_to() )
    {
      if ( !i )
        goto LABEL_321;
      if ( v1624 )
      {
        v448 = (char *)get_func();
        v1605[0] = v448;
        v449 = v448;
        if ( v448 )
        {
          v450 = *(_QWORD *)v448;
          v451 = (void **)src[2];
          v1618 = v450;
          if ( !src[2] )
            break;
          v452 = &src[1];
          v453 = v449;
          do
          {
            while ( 1 )
            {
              v454 = v451[2];
              v455 = v451[3];
              if ( (unsigned __int64)v451[4] >= v450 )
                break;
              v451 = (void **)v451[3];
              if ( !v455 )
                goto LABEL_307;
            }
            v452 = v451;
            v451 = (void **)v451[2];
          }
          while ( v454 );
LABEL_307:
          v1605[0] = v453;
          if ( v452 == &src[1] || v450 < (unsigned __int64)v452[4] )
            break;
        }
      }
LABEL_298:
      ;
    }
    std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_insert_unique<unsigned long long const&>();
    ida_mcp::get_function_name[abi:cxx11]();
    if ( v1625 == 18 )
    {
      frame_size = "Jump_Far";
    }
    else if ( v1625 > 0x12u )
    {
      v812 = "Jump_Near";
      if ( v1625 != 19 )
        v812 = "Code_Unknown";
      frame_size = v812;
    }
    else
    {
      frame_size = "Call_Far";
      if ( v1625 != 16 )
      {
        v456 = "Call_Near";
        if ( v1625 != 17 )
          v456 = "Code_Unknown";
        frame_size = v456;
      }
    }
    *(_QWORD *)&v1627 = 0;
    ida_mcp::format_ea[abi:cxx11]();
    LOBYTE(v1630) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    LOBYTE(v1626) = 0;
    LOBYTE(v1593) = (_BYTE)v1630;
    v457 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v458 = *(_BYTE *)v457;
    v459 = (char)v1626;
    *(_BYTE *)v457 = (_BYTE)v1593;
    LOBYTE(v1605[0]) = v459;
    v460 = *(_QWORD *)(v457 + 8);
    *(_QWORD *)(v457 + 8) = v1631.m256i_i64[0];
    LOBYTE(v1630) = v458;
    v1631.m256i_i64[0] = v460;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    std::string::_M_dispose();
    v1630 = nullptr;
    v1631.m256i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v1592 = v1678;
    v461 = (_QWORD *)operator new(0x20u);
    *v461 = v461 + 2;
    v1593 = v461;
    std::string::_M_construct<true>();
    v462 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v463 = (char)v1626;
    v464 = v1593;
    v465 = *(_BYTE *)v462;
    *(_BYTE *)v462 = 3;
    LOBYTE(v1605[0]) = v463;
    v466 = *(_QWORD *)(v462 + 8);
    *(_QWORD *)(v462 + 8) = v464;
    LOBYTE(v1630) = v465;
    v1631.m256i_i64[0] = v466;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    ida_mcp::format_ea[abi:cxx11]();
    LOBYTE(v1630) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    LOBYTE(v1593) = (_BYTE)v1630;
    v467 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v468 = *(_BYTE *)v467;
    v469 = (char)v1626;
    *(_BYTE *)v467 = (_BYTE)v1593;
    LOBYTE(v1605[0]) = v469;
    v470 = *(_QWORD *)(v467 + 8);
    *(_QWORD *)(v467 + 8) = v1631.m256i_i64[0];
    LOBYTE(v1630) = v468;
    v1631.m256i_i64[0] = v470;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    std::string::_M_dispose();
    v1630 = nullptr;
    v1631.m256i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v471 = (const char *)frame_size;
    frame_size = (void *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)frame_size,
      v471,
      v472,
      v473,
      v474,
      v475,
      v857,
      v923,
      v989);
    v476 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v477 = (char)v1626;
    v478 = frame_size;
    LOBYTE(v471) = *(_BYTE *)v476;
    *(_BYTE *)v476 = 3;
    LOBYTE(v1605[0]) = v477;
    v479 = *(_QWORD *)(v476 + 8);
    *(_QWORD *)(v476 + 8) = v478;
    LOBYTE(v1630) = (_BYTE)v471;
    v1631.m256i_i64[0] = v479;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v1612 = v1572;
    v1613 = v1544;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
    v1572 = v1612;
    v1544 = v1613;
    if ( v1612 == 1 )
    {
      v480 = v1613[5];
    }
    else
    {
      if ( v1612 != 2 )
      {
LABEL_317:
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        std::string::_M_dispose();
        goto LABEL_298;
      }
      v480 = (__int64)(v1613[1] - *v1613) >> 4;
    }
    if ( v480 <= 0x31 )
      goto LABEL_317;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    std::string::_M_dispose();
LABEL_321:
    v1614 = 0;
    v1615 = nullptr;
    *(__m128i *)v1605 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)&v1631);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v481 = _mm_load_si128((const __m128i *)v1605);
    v1631.m256i_i32[0] = 0;
    v1631.m256i_i64[3] = (__int64)&v1631;
    LOBYTE(v1593) = v1614;
    v1632 = 0;
    v1592 = v1615;
    *(__m128i *)&v1631.m256i_u64[1] = v481;
    if ( v1578 >= v1584 )
      goto LABEL_360;
    frame_size = v1578;
LABEL_323:
    for ( j = xrefblk_t_first_from(); ; j = xrefblk_t_next_from() )
    {
      if ( !j )
      {
        if ( (_BYTE)v1593 != 1 )
        {
          if ( (_BYTE)v1593 != 2 )
            goto LABEL_358;
          goto LABEL_376;
        }
LABEL_379:
        LOBYTE(v1593) = 1;
        v580 = *((_QWORD *)v1592 + 5);
LABEL_377:
        if ( v580 > 0x31 )
          goto LABEL_360;
LABEL_358:
        head = (char *)next_head();
        frame_size = head;
        if ( head == (char *)-1LL || head >= v1584 )
        {
LABEL_360:
          v1598 = (__m128i *)&v1647;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
          v1634[0] = 0;
          frame_size = &v1635;
          v1648 = 0;
          *(_QWORD *)&v1635 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v1634[0] = 3;
          v525 = operator new(0x20u);
          *(_BYTE *)(v525 + 20) = 116;
          *(_QWORD *)v525 = v525 + 16;
          *(_DWORD *)(v525 + 16) = 1853189987;
          *(_QWORD *)(v525 + 8) = 5;
          *(_BYTE *)(v525 + 21) = 0;
          v1635 = (unsigned __int64)v525;
          if ( v1572 == 1 )
          {
            v529 = v1544[5];
          }
          else if ( v1572 == 2 )
          {
            v529 = (__int64)(v1544[1] - *v1544) >> 4;
          }
          else
          {
            v529 = v1572 != 0;
          }
          v1636 = 6;
          v1637 = v529;
          v1638 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v1588,
            (__int64)v1634,
            2,
            v526,
            v527,
            v528,
            v857,
            v923,
            v989,
            v1048,
            v1091,
            v1135,
            (__int64)v1179,
            v1223,
            (int)v1268,
            v1312,
            (int)&v1614,
            v1399,
            v1443,
            v1486,
            (__int64)v1544);
          v1639[0] = 0;
          v1582 = (__int64 *)&v1640;
          v1673.m128i_i64[1] = 0;
          *(_QWORD *)&v1640 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v1639[0] = 3;
          v530 = operator new(0x20u);
          *(_DWORD *)(v530 + 16) = 1835365481;
          *(_QWORD *)v530 = v530 + 16;
          *(_BYTE *)(v530 + 20) = 115;
          *(_QWORD *)(v530 + 8) = 5;
          *(_BYTE *)(v530 + 21) = 0;
          v1640 = (unsigned __int64)v530;
          v1612 = v1572;
          v1613 = (_QWORD *)v1545;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v1641 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v945,
            (__int64)v1639,
            2,
            v531,
            v532,
            v533,
            v880,
            (__int64)v945,
            v1011,
            v1063,
            v1106,
            v1150,
            v1194,
            v1239,
            v1283,
            v1327,
            v1371,
            v1414,
            v1458,
            v1501,
            v1545);
          *((_QWORD *)&v1675 + 1) = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[10],char [10],0>();
          v1643 = 0;
          v1644 = 4;
          v1646 = 0;
          v1645 = v1629 > 0x32;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v1676,
            (__int64)v1642,
            2,
            v534,
            v535,
            v536,
            v881,
            v946,
            v1012,
            v1064,
            v1107,
            v1151,
            v1195,
            v1240,
            v1284,
            v1328,
            v1372,
            v1415,
            v1459,
            v1502,
            v1546);
          v1676[2] = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v1649,
            (__int64)v1588,
            3,
            v537,
            v538,
            v539,
            v882,
            v947,
            v1013,
            v1065,
            v1108,
            v1152,
            v1196,
            v1241,
            v1285,
            v1329,
            v1373,
            v1416,
            v1460,
            v1503,
            v1547);
          v1649[2] = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v1604,
            (__int64)v1598,
            2,
            v540,
            v541,
            v542,
            v883,
            v948,
            v1014,
            v1066,
            v1109,
            v1153,
            v1197,
            v1242,
            v1286,
            v1330,
            v1374,
            v1417,
            v1461,
            v1504,
            v1548);
          v1686 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
          v1650[0] = 0;
          v1579 = &v1651;
          *((_QWORD *)&v1665 + 1) = 0;
          *(_QWORD *)&v1651 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v1650[0] = 3;
          v543 = operator new(0x20u);
          *(_BYTE *)(v543 + 20) = 116;
          *(_QWORD *)v543 = v543 + 16;
          *(_DWORD *)(v543 + 16) = 1853189987;
          *(_QWORD *)(v543 + 8) = 5;
          *(_BYTE *)(v543 + 21) = 0;
          v1651 = (unsigned __int64)v543;
          if ( (_BYTE)v1593 == 1 )
          {
            v547 = *((_QWORD *)v1592 + 5);
          }
          else if ( (_BYTE)v1593 == 2 )
          {
            v547 = (__int64)(*((_QWORD *)v1592 + 1) - *(_QWORD *)v1592) >> 4;
          }
          else
          {
            v547 = (_BYTE)v1593 != 0;
          }
          v1652 = 6;
          v1653 = v547;
          v1654 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v1591,
            (__int64)v1650,
            2,
            v544,
            v545,
            v546,
            v884,
            v949,
            v1015,
            v1067,
            v1110,
            v1154,
            v1198,
            v1243,
            v1287,
            v1331,
            v1375,
            v1418,
            v1462,
            v1505,
            v1549);
          LOBYTE(v1655) = 0;
          v1679.m128i_i64[1] = 0;
          *(_QWORD *)&v1656 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          LOBYTE(v1655) = 3;
          v548 = operator new(0x20u);
          *(_DWORD *)(v548 + 16) = 1835365481;
          *(_QWORD *)v548 = v548 + 16;
          *(_BYTE *)(v548 + 20) = 115;
          *(_QWORD *)(v548 + 8) = 5;
          *(_BYTE *)(v548 + 21) = 0;
          v1656 = (unsigned __int64)v548;
          v1614 = (char)v1593;
          v1615 = v1592;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v1657 = 0;
          v1586.m128i_i64[0] = (__int64)&v1655;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            &v1680,
            (__int64)&v1655,
            2,
            v549,
            v550,
            v551,
            v885,
            v950,
            v1016,
            v1068,
            v1111,
            v1155,
            v1199,
            v1244,
            v1288,
            v1332,
            v1376,
            v1419,
            v1463,
            v1506,
            v1550);
          *((_QWORD *)&v1681 + 1) = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[10],char [10],0>();
          v1660 = 0;
          v1661 = 4;
          v1663 = 0;
          v1662 = v1632 > 0x32;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v1682,
            (__int64)v1576,
            2,
            v552,
            v553,
            v554,
            v886,
            v951,
            v1017,
            v1069,
            v1112,
            v1156,
            v1200,
            v1245,
            v1289,
            v1333,
            v1377,
            v1420,
            v1464,
            v1507,
            v1551);
          v1682[2] = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v1666,
            (__int64)v1591,
            3,
            v555,
            v556,
            v557,
            v887,
            v952,
            v1018,
            v1070,
            v1113,
            v1157,
            v1201,
            v1246,
            v1290,
            v1334,
            v1378,
            v1421,
            v1465,
            v1508,
            v1552);
          v1667 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v1587,
            v1574.m128i_i64[1],
            2,
            v558,
            v559,
            v560,
            v888,
            v953,
            v1019,
            v1071,
            v1114,
            v1158,
            v1202,
            v1247,
            v1291,
            v1335,
            v1379,
            v1422,
            v1466,
            v1509,
            v1553);
          LOBYTE(v1668) = 0;
          v1689 = 0;
          *(_QWORD *)&v1669 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          LOBYTE(v1668) = 3;
          v561 = (__int64 *)operator new(0x20u);
          std::string::basic_string<std::allocator<char>>(
            v561,
            "analysis_depth",
            v562,
            v563,
            v564,
            v565,
            v889,
            v954,
            v1020);
          LOBYTE(v1670) = 6;
          v1671 = (unsigned __int64)v1573;
          v1669 = (unsigned __int64)v561;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v1583,
            (__int64)v1585,
            2,
            v566,
            v567,
            v568,
            v890,
            v955,
            v1021,
            v1072,
            v1115,
            v1159,
            v1203,
            v1248,
            v1292,
            v1336,
            v1380,
            v1423,
            v1467,
            v1510,
            v1554);
          v1691 = 0;
          LOBYTE(v1626) = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            &v1626,
            (__int64)v1604,
            3,
            v569,
            v570,
            v571,
            v891,
            v956,
            v1022,
            v1073,
            v1116,
            v1160,
            v1204,
            v1249,
            v1293,
            v1337,
            v1381,
            v1424,
            v1468,
            v1511,
            v1555);
          LOBYTE(v561) = (_BYTE)v1626;
          v572 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v573 = *(_BYTE *)v572;
          v574 = v1608[0].m128i_i8[0];
          *(_BYTE *)v572 = (_BYTE)v561;
          v575 = *(_QWORD *)(v572 + 8);
          v576 = (char *)v1692;
          v1569 = v574;
          v1570 = v1608[0].m128i_i64[1];
          *(_QWORD *)(v572 + 8) = v1627;
          *(_QWORD *)&v1627 = v575;
          LOBYTE(v1626) = v573;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          do
          {
            v576 -= 24;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
          while ( v576 != v1604 );
          v577 = (__int8 **)&v1683;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          do
          {
            v577 -= 3;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
          while ( v577 != v1591 );
          v578 = &v1677;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          do
          {
            v578 -= 24;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
          while ( v578 != v1588 );
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_erase((_QWORD *)v1631.m256i_i64[1]);
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_erase((_QWORD *)src[2]);
          v99 = (ida_mcp::tools::cpp_class_recovery *)&v1613;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          goto LABEL_22;
        }
        goto LABEL_323;
      }
      if ( BYTE8(v1627) )
      {
        v483 = (char *)get_func();
        v1605[0] = v483;
        v484 = v483;
        if ( v483 )
        {
          v485 = *(_QWORD *)v483;
          v486 = (__m256i *)v1631.m256i_i64[1];
          v1611 = v485;
          if ( !v1631.m256i_i64[1] )
            break;
          v487 = &v1631;
          v488 = v484;
          do
          {
            while ( 1 )
            {
              v489 = v486->m256i_i64[2];
              v490 = v486->m256i_i64[3];
              if ( v486[1].m256i_i64[0] >= v485 )
                break;
              v486 = (__m256i *)v486->m256i_i64[3];
              if ( !v490 )
                goto LABEL_333;
            }
            v487 = v486;
            v486 = (__m256i *)v486->m256i_i64[2];
          }
          while ( v489 );
LABEL_333:
          v1605[0] = v488;
          if ( v487 == &v1631 || v485 < v487[1].m256i_i64[0] )
            break;
        }
      }
LABEL_324:
      ;
    }
    std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_insert_unique<unsigned long long const&>();
    ida_mcp::get_function_name[abi:cxx11]();
    if ( BYTE9(v1627) == 18 )
    {
      v1586.m128i_i64[0] = (__int64)"Jump_Far";
    }
    else if ( BYTE9(v1627) > 0x12u )
    {
      v583 = "Jump_Near";
      if ( BYTE9(v1627) != 19 )
        v583 = "Code_Unknown";
      v1586.m128i_i64[0] = (__int64)v583;
    }
    else
    {
      v1586.m128i_i64[0] = (__int64)"Call_Far";
      if ( BYTE9(v1627) != 16 )
      {
        v491 = "Call_Near";
        if ( BYTE9(v1627) != 17 )
          v491 = "Code_Unknown";
        v1586.m128i_i64[0] = (__int64)v491;
      }
    }
    v1617 = 0;
    v1605[0] = (char *)v1695;
    qsnprintf();
    v1684 = &v1686;
    v492 = strlen(v1605[0]);
    v1618 = v492;
    v493 = v492;
    if ( v492 > 0xF )
    {
      v581 = (size_t *)std::string::_M_create();
      v1684 = v581;
      v1686 = v1618;
    }
    else
    {
      if ( v492 == 1 )
      {
        LOBYTE(v1686) = v1695[0];
        goto LABEL_344;
      }
      if ( !v492 )
      {
LABEL_344:
        v494 = &v1686;
        goto LABEL_345;
      }
      v581 = &v1686;
    }
    if ( v493 >= 8 )
    {
      v598 = (unsigned __int64)(v581 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v581 = v1695[0];
      v599 = v1605[0];
      *(size_t *)((char *)v581 + v493 - 8) = *(_QWORD *)&v1605[0][v493 - 8];
      v600 = (char *)v581 - v598;
      v601 = (char *)(v599 - v600);
      v602 = (v493 + (_DWORD)v600) & 0xFFFFFFF8;
      if ( v602 >= 8 )
      {
        v603 = v602 & 0xFFFFFFF8;
        v604 = 0;
        do
        {
          v605 = v604;
          v604 += 8;
          *(_QWORD *)(v598 + v605) = *(_QWORD *)&v601[v605];
        }
        while ( v604 < v603 );
      }
    }
    else if ( (v493 & 4) != 0 )
    {
      *(_DWORD *)v581 = v1695[0];
      *(_DWORD *)((char *)v581 + v493 - 4) = *(_DWORD *)&v1605[0][v493 - 4];
    }
    else if ( v493 )
    {
      *(_BYTE *)v581 = v1695[0];
      if ( (v493 & 2) != 0 )
        *(_WORD *)((char *)v581 + v493 - 2) = *(_WORD *)&v1605[0][v493 - 2];
    }
    v492 = v1618;
    v494 = v1684;
LABEL_345:
    v1685 = v492;
    *((_BYTE *)v494 + v492) = 0;
    v1605[0] = (char *)&v1619;
    v1618 = 0;
    v1619 = nullptr;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v495 = operator new(0x20u);
    v496 = v495 + 16;
    v497 = v495;
    v498 = v1685;
    *(_QWORD *)v495 = v495 + 16;
    if ( v1684 == &v1686 )
    {
      v591 = v498 + 1;
      if ( (unsigned int)(v498 + 1) < 8 )
      {
        if ( (v591 & 4) != 0 )
        {
          *(_DWORD *)(v495 + 16) = v1686;
          *(_DWORD *)(v496 + v591 - 4) = *(_DWORD *)((char *)&v1685 + v591 + 4);
        }
        else if ( (_DWORD)v498 != -1 )
        {
          *(_BYTE *)(v495 + 16) = v1686;
          if ( (v591 & 2) != 0 )
            *(_WORD *)(v496 + v591 - 2) = *(_WORD *)((char *)&v1685 + v591 + 6);
        }
      }
      else
      {
        v592 = (v495 + 24) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)(v495 + 16) = v1686;
        *(_QWORD *)(v496 + v591 - 8) = *(size_t *)((char *)&v1685 + v591);
        v593 = (char *)&v1686 - (v496 - v592);
        if ( ((v591 + (_DWORD)v496 - (_DWORD)v592) & 0xFFFFFFF8) >= 8 )
        {
          v594 = v1605[0];
          v595 = (v591 + v496 - v592) & 0xFFFFFFF8;
          v596 = 0;
          do
          {
            v597 = v596;
            v596 += 8;
            *(_QWORD *)(v592 + v597) = *(_QWORD *)&v593[v597];
          }
          while ( v596 < v595 );
          v1605[0] = v594;
        }
      }
    }
    else
    {
      *(_QWORD *)v495 = v1684;
      *(_QWORD *)(v495 + 16) = v1686;
    }
    *(_QWORD *)(v497 + 8) = v498;
    v1684 = &v1686;
    v1685 = 0;
    LOBYTE(v1686) = 0;
    v1616 = 0;
    v1582 = (__int64 *)&v1616;
    v499 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v500 = *(_BYTE *)v499;
    v501 = *(__int128 **)(v499 + 8);
    *(_BYTE *)v499 = 3;
    *(_QWORD *)(v499 + 8) = v497;
    LOBYTE(v1618) = v500;
    v1619 = v501;
    LOBYTE(v1598) = v1616;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    std::string::_M_dispose();
    v1618 = 0;
    v1619 = nullptr;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v1575 = v1678;
    v1577 = v1679.m128i_i64[0];
    v502 = (_QWORD *)operator new(0x20u);
    *v502 = v502 + 2;
    std::string::_M_construct<true>();
    v503 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v504 = *(_BYTE *)v503;
    v505 = *(__int128 **)(v503 + 8);
    *(_BYTE *)v503 = 3;
    *(_QWORD *)(v503 + 8) = v502;
    LOBYTE(v1618) = v504;
    LOBYTE(v1598) = v1616;
    v1619 = v505;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    qsnprintf();
    v1684 = &v1686;
    v506 = strlen(v1696);
    v1618 = v506;
    v507 = v506;
    if ( v506 > 0xF )
    {
      v1577 = v506;
      v582 = (size_t *)std::string::_M_create();
      v1684 = v582;
      v507 = v1577;
      v1686 = v1618;
    }
    else
    {
      if ( v506 == 1 )
      {
        LOBYTE(v1686) = v1696[0];
        goto LABEL_350;
      }
      if ( !v506 )
      {
LABEL_350:
        v508 = &v1686;
        goto LABEL_351;
      }
      v582 = &v1686;
    }
    if ( v507 >= 8 )
    {
      v606 = (unsigned __int64)(v582 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v582 = *(_QWORD *)v1696;
      *(size_t *)((char *)v582 + v507 - 8) = *(_QWORD *)((char *)&v1695[3] + v507);
      v607 = (char *)v582 - v606;
      v608 = (char *)(v1696 - v607);
      v609 = (v507 + (_DWORD)v607) & 0xFFFFFFF8;
      if ( v609 >= 8 )
      {
        v610 = v1605[0];
        v611 = v609 & 0xFFFFFFF8;
        v612 = 0;
        do
        {
          v613 = v612;
          v612 += 8;
          *(_QWORD *)(v606 + v613) = *(_QWORD *)&v608[v613];
        }
        while ( v612 < v611 );
        v1605[0] = v610;
      }
    }
    else if ( (v507 & 4) != 0 )
    {
      *(_DWORD *)v582 = *(_DWORD *)v1696;
      *(_DWORD *)((char *)v582 + v507 - 4) = *(_DWORD *)((char *)&v1695[3] + v507 + 4);
    }
    else if ( v507 )
    {
      *(_BYTE *)v582 = v1696[0];
      if ( (v507 & 2) != 0 )
        *(_WORD *)((char *)v582 + v507 - 2) = *(_WORD *)((char *)&v1695[3] + v507 + 6);
    }
    v506 = v1618;
    v508 = v1684;
LABEL_351:
    v1685 = v506;
    *((_BYTE *)v508 + v506) = 0;
    v1618 = 0;
    v1619 = nullptr;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v509 = operator new(0x20u);
    v510 = v509 + 16;
    v511 = v509;
    v512 = v1685;
    *(_QWORD *)v509 = v509 + 16;
    if ( v1684 == &v1686 )
    {
      v584 = v512 + 1;
      if ( (unsigned int)(v512 + 1) < 8 )
      {
        if ( (v584 & 4) != 0 )
        {
          *(_DWORD *)(v509 + 16) = v1686;
          *(_DWORD *)(v510 + v584 - 4) = *(_DWORD *)((char *)&v1685 + v584 + 4);
        }
        else if ( (_DWORD)v512 != -1 )
        {
          *(_BYTE *)(v509 + 16) = v1686;
          if ( (v584 & 2) != 0 )
            *(_WORD *)(v510 + v584 - 2) = *(_WORD *)((char *)&v1685 + v584 + 6);
        }
      }
      else
      {
        v585 = (v509 + 24) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)(v509 + 16) = v1686;
        *(_QWORD *)(v510 + v584 - 8) = *(size_t *)((char *)&v1685 + v584);
        v586 = (char *)&v1686 - (v510 - v585);
        if ( ((v584 + (_DWORD)v510 - (_DWORD)v585) & 0xFFFFFFF8) >= 8 )
        {
          v587 = v1605[0];
          v588 = (v584 + v510 - v585) & 0xFFFFFFF8;
          v589 = 0;
          do
          {
            v590 = v589;
            v589 += 8;
            *(_QWORD *)(v585 + v590) = *(_QWORD *)&v586[v590];
          }
          while ( v589 < v588 );
          v1605[0] = v587;
        }
      }
    }
    else
    {
      *(_QWORD *)v509 = v1684;
      *(_QWORD *)(v509 + 16) = v1686;
    }
    *(_QWORD *)(v511 + 8) = v512;
    v1684 = &v1686;
    v1685 = 0;
    LOBYTE(v1686) = 0;
    v513 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v514 = *(_BYTE *)v513;
    v515 = *(__int128 **)(v513 + 8);
    *(_BYTE *)v513 = 3;
    *(_QWORD *)(v513 + 8) = v511;
    LOBYTE(v1618) = v514;
    v1619 = v515;
    LOBYTE(v1598) = v1616;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    std::string::_M_dispose();
    v1618 = 0;
    v1619 = nullptr;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v516 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v516,
      (const char *)v1586.m128i_i64[0],
      v517,
      v518,
      v519,
      v520,
      v857,
      v923,
      v989);
    v521 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v522 = *(_BYTE *)v521;
    v523 = *(__int128 **)(v521 + 8);
    *(_BYTE *)v521 = 3;
    *(_QWORD *)(v521 + 8) = v516;
    LOBYTE(v1618) = v522;
    LOBYTE(v1598) = v1616;
    v1619 = v523;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v1614 = (char)v1593;
    v1615 = v1592;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
    LOBYTE(v1593) = v1614;
    v1592 = v1615;
    if ( v1614 == 1 )
    {
      v579 = *((_QWORD *)v1615 + 5);
    }
    else
    {
      if ( v1614 != 2 )
      {
LABEL_355:
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        std::string::_M_dispose();
        goto LABEL_324;
      }
      v579 = (__int64)(*((_QWORD *)v1615 + 1) - *(_QWORD *)v1615) >> 4;
    }
    if ( v579 > 0x31 )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      std::string::_M_dispose();
      if ( (_BYTE)v1593 != 1 )
      {
LABEL_376:
        LOBYTE(v1593) = 2;
        v580 = (__int64)(*((_QWORD *)v1592 + 1) - *(_QWORD *)v1592) >> 4;
        goto LABEL_377;
      }
      goto LABEL_379;
    }
    goto LABEL_355;
  }
LABEL_22:
  if ( v1567 )
  {
    ida_mcp::tools::cpp_class_recovery::ensure_recovery_done(v99);
    v1605[0] = s;
    *(_OWORD *)s = 0;
    get_idp_name();
    if ( strlen(s) == 3 && *(_WORD *)s == 27747 && s[2] == 105 )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[10],char [10],0>();
      *((_QWORD *)&v1669 + 1) = 0;
      v1670 = 4;
      v1671 = 0u;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v1604,
        (__int64)v1585,
        2,
        v728,
        v729,
        v730,
        v857,
        v923,
        v989,
        v1048,
        v1091,
        v1135,
        (__int64)v1179,
        v1223,
        (int)v1268,
        v1312,
        (int)v1356,
        v1399,
        v1443,
        v1486,
        v1529);
      v1686 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
      LOBYTE(v1674) = 0;
      v1673.m128i_i64[1] = 0;
      *(_QWORD *)&v1675 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v1674) = 3;
      v731 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(
        v731,
        "Decompilation not supported for .NET/CLI binaries (IL bytecode, not native assembly)",
        v732,
        v733,
        v734,
        v735,
        v899,
        v964,
        v1030);
      v1675 = (unsigned __int64)v731;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v1587,
        (__int64)v1588,
        2,
        v736,
        v737,
        v738,
        v900,
        v965,
        v1031,
        v1078,
        v1121,
        v1165,
        v1209,
        v1254,
        v1298,
        v1342,
        v1386,
        v1429,
        v1472,
        v1515,
        v1560);
      v1689 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[10],char [10],0>();
      LOBYTE(v1680) = 0;
      v1679.m128i_i64[1] = 0;
      *(_QWORD *)&v1681 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v1680) = 3;
      v739 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(v739, v1605[0], v740, v741, v742, v743, v901, v966, v1032);
      v1681 = (unsigned __int64)v739;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v1583,
        (__int64)v1591,
        2,
        v744,
        v745,
        v746,
        v902,
        v967,
        v1033,
        v1079,
        v1122,
        v1166,
        v1210,
        v1255,
        v1299,
        v1343,
        v1387,
        v1430,
        v1473,
        v1516,
        v1561);
      v1691 = 0;
      LOBYTE(v1630) = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v1431,
        (__int64)v1604,
        3,
        v747,
        v748,
        v749,
        v903,
        v968,
        v1034,
        v1080,
        v1123,
        v1167,
        v1211,
        v1256,
        v1300,
        v1344,
        v1388,
        (char)v1431,
        v1474,
        v1517,
        v1562);
      LOBYTE(v739) = (_BYTE)v1630;
      v1608[0].m128i_i8[0] = v1569;
      v1608[0].m128i_i64[1] = v1570;
      v750 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v751 = v1608[0].m128i_i8[0];
      v752 = *(_BYTE *)v750;
      *(_BYTE *)v750 = (_BYTE)v739;
      v753 = *(_QWORD *)(v750 + 8);
      v754 = (char *)v1692;
      v1569 = v751;
      v1570 = v1608[0].m128i_i64[1];
      *(_QWORD *)(v750 + 8) = v1631.m256i_i64[0];
      v1631.m256i_i64[0] = v753;
      LOBYTE(v1630) = v752;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      do
      {
        v754 -= 24;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      while ( v754 != v1604 );
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    else if ( (unsigned __int8)ida_mcp::is_go_pathological_func() )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[10],char [10],0>();
      v1673.m128i_i64[1] = 0;
      v1674 = 4;
      v1675 = 0u;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v1604,
        (__int64)v1588,
        2,
        v115,
        v116,
        v117,
        v857,
        v923,
        v989,
        v1048,
        v1091,
        v1135,
        (__int64)v1179,
        v1223,
        (int)v1268,
        v1312,
        (int)v1356,
        v1399,
        v1443,
        v1486,
        v1529);
      v1686 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
      LOBYTE(v1680) = 0;
      v1679.m128i_i64[1] = 0;
      *(_QWORD *)&v1681 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v1680) = 3;
      v118 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(
        v118,
        "Skipped (Hex-Rays infinite-loop risk on Go go.shape types; IDA 9.3sp1 bug)",
        v119,
        v120,
        v121,
        v122,
        v858,
        v924,
        v990);
      v1681 = (unsigned __int64)v118;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v1587,
        (__int64)v1591,
        2,
        v123,
        v124,
        v125,
        v859,
        v925,
        v991,
        v1049,
        v1092,
        v1136,
        v1180,
        v1224,
        v1269,
        v1313,
        v1357,
        v1400,
        v1444,
        v1487,
        v1530);
      v1689 = 0;
      LOBYTE(v1630) = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v1401,
        (__int64)v1604,
        2,
        v126,
        v127,
        v128,
        v860,
        v926,
        v992,
        v1050,
        v1093,
        v1137,
        v1181,
        v1225,
        v1270,
        v1314,
        v1358,
        (char)v1401,
        v1445,
        v1488,
        v1531);
      LOBYTE(v118) = (_BYTE)v1630;
      v1608[0].m128i_i8[0] = v1569;
      v1608[0].m128i_i64[1] = v1570;
      v129 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v130 = v1608[0].m128i_i8[0];
      v131 = *(_BYTE *)v129;
      *(_BYTE *)v129 = (_BYTE)v118;
      v132 = *(_QWORD *)(v129 + 8);
      v1569 = v130;
      v1570 = v1608[0].m128i_i64[1];
      *(_QWORD *)(v129 + 8) = v1631.m256i_i64[0];
      v1631.m256i_i64[0] = v132;
      LOBYTE(v1630) = v131;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    else
    {
      v100 = _mm_loadl_epi64(&v1574);
      v1630 = nullptr;
      *(_OWORD *)v1631.m256i_i8 = 0xFFFFFFFFFFFFFFFFLL;
      *(_OWORD *)&v1631.m256i_u64[2] = 0;
      *(__m128i *)src = v100;
      *(_OWORD *)&src[2] = 0;
      hexdsp = (__int64 (__fastcall *)(__int64, void **, __int64, __int64))get_hexdsp();
      v102 = hexdsp(566, src, v1399, 1);
      if ( src[1] )
      {
        src[2] = nullptr;
        qfree();
      }
      if ( v102 )
      {
        v103 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
        v1605[0] = (char *)v103(560, v102);
        v104 = 0;
        v1626 = nullptr;
        v1627 = 0;
        if ( *((_QWORD *)v1605[0] + 1) )
        {
          while ( 1 )
          {
            memset(src, 0, 24);
            tag_remove();
            v105 = (char *)src[1] + (src[1] == nullptr) - 1;
            v106 = v105;
            if ( (char *)src[1] + (src[1] == nullptr) != (char *)&dword_0 + 1 )
            {
              v107 = v1626;
              v108 = ((_QWORD)v1627 == 0) + (_QWORD)v1627 - 1LL;
              v109 = &v105[v108];
              v110 = (__int64 *)&v105[((_QWORD)v1627 == 0) + (_QWORD)v1627];
              if ( *((_QWORD *)&v1627 + 1) < (unsigned __int64)v110 )
              {
                v1592 = &v105[v108];
                v1593 = (void *)(((_QWORD)v1627 == 0) + (_QWORD)v1627 - 1LL);
                frame_size = (char *)src[1] + (src[1] == nullptr) - 1;
                v1598 = (__m128i *)&v105[((_QWORD)v1627 == 0) + (_QWORD)v1627];
                v1626 = (char *)qvector_reserve();
                v109 = v1592;
                v107 = v1626;
                v108 = (__int64)v1593;
                v106 = frame_size;
                v110 = (__int64 *)v1598;
              }
              *(_QWORD *)&v1627 = v110;
              v109[(_QWORD)v107] = 0;
              memcpy(&v1626[v108], src[0], (size_t)v106);
            }
            if ( src[0] )
            {
              src[1] = nullptr;
              ++v104;
              qfree();
              if ( v104 >= *((_QWORD *)v1605[0] + 1) )
                break;
            }
            else if ( ++v104 >= *((_QWORD *)v1605[0] + 1) )
            {
              break;
            }
            v111 = v1626;
            v112 = ((_QWORD)v1627 == 0) + (_QWORD)v1627 - 1LL;
            v113 = v112;
            v114 = (__int64 *)(v112 + 2);
            if ( *((_QWORD *)&v1627 + 1) < (unsigned __int64)(v112 + 2) )
            {
              frame_size = (void *)(((_QWORD)v1627 == 0) + (_QWORD)v1627 - 1LL);
              v1598 = (__m128i *)(v112 + 2);
              v1626 = (char *)qvector_reserve();
              v113 = (__int64)frame_size;
              v111 = v1626;
              v114 = (__int64 *)v1598;
            }
            *(_QWORD *)&v1627 = v114;
            v111[v113 + 1] = 0;
            v1626[v113] = 10;
          }
        }
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[10],char [10],0>();
        v1673.m128i_i64[1] = 0;
        v1674 = 4;
        v1675 = 1u;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v1604,
          (__int64)v1588,
          2,
          v683,
          v684,
          v685,
          v857,
          v923,
          v989,
          v1048,
          v1091,
          v1135,
          (__int64)v1179,
          v1223,
          (int)v1268,
          v1312,
          (int)v1356,
          v1399,
          v1443,
          v1486,
          v1529);
        LOBYTE(v1678) = 0;
        v1686 = 0;
        v1679.m128i_i64[0] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v1678) = 3;
        v686 = operator new(0x20u);
        *(_QWORD *)v686 = v686 + 16;
        strcpy((char *)(v686 + 16), "pseudocode");
        *(_QWORD *)(v686 + 8) = 10;
        v1679 = (__m128i)(unsigned __int64)v686;
        if ( (_QWORD)v1627 )
          v1605[0] = v1626;
        else
          v1605[0] = _qstring<char>::c_str(void)const::nullstr;
        LOBYTE(v1680) = 0;
        *(_QWORD *)&v1681 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v1680) = 3;
        v687 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v687, v1605[0], v688, v689, v690, v691, v896, v961, v1027);
        v1681 = (unsigned __int64)v687;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v1587,
          (__int64)v1591,
          2,
          v692,
          v693,
          v694,
          v897,
          v962,
          v1028,
          v1076,
          v1119,
          v1163,
          v1207,
          v1252,
          v1296,
          v1340,
          v1384,
          v1427,
          v1470,
          v1513,
          v1558);
        v1689 = 0;
        LOBYTE(src[0]) = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          src,
          (__int64)v1604,
          2,
          v695,
          v696,
          v697,
          v898,
          v963,
          v1029,
          v1077,
          v1120,
          v1164,
          v1208,
          v1253,
          v1297,
          v1341,
          v1385,
          v1428,
          v1471,
          v1514,
          v1559);
        LOBYTE(v687) = src[0];
        v1608[0].m128i_i8[0] = v1569;
        v1608[0].m128i_i64[1] = v1570;
        v698 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v699 = *(_BYTE *)v698;
        v700 = v1608[0].m128i_i8[0];
        *(_BYTE *)v698 = (_BYTE)v687;
        v701 = *(void **)(v698 + 8);
        v1569 = v700;
        v1570 = v1608[0].m128i_i64[1];
        *(void **)(v698 + 8) = src[1];
        src[1] = v701;
        LOBYTE(src[0]) = v699;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v1626 )
        {
          *(_QWORD *)&v1627 = 0;
          qfree();
        }
        if ( (*(_DWORD *)(v102 + 104))-- == 1 )
        {
          v821 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
          v821(564, v102);
          if ( *(_QWORD *)(v102 + 160) )
          {
            *(_QWORD *)(v102 + 168) = 0;
            qfree();
          }
          v822 = *(_QWORD *)(v102 + 128);
          if ( v822 )
          {
            if ( *(_QWORD *)(v102 + 136) )
            {
              v823 = 0;
              v824 = *(_QWORD *)(v102 + 136);
              do
              {
                while ( *(_QWORD *)(v822 + 32 * v823) )
                {
                  *(_QWORD *)(v822 + 32 * v823++ + 8) = 0;
                  qfree();
                  v822 = *(_QWORD *)(v102 + 128);
                  if ( v824 == v823 )
                    goto LABEL_564;
                }
                ++v823;
              }
              while ( v824 != v823 );
            }
LABEL_564:
            *(_QWORD *)(v102 + 136) = 0;
            qfree();
          }
          v825 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
          v825(493, v102 + 16);
          v826 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
          v826(444, v102 + 16);
          v827 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
          v827(130, v102);
        }
      }
      else
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[10],char [10],0>();
        v1673.m128i_i64[1] = 0;
        v1674 = 4;
        v1675 = 0u;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v1604,
          (__int64)v1588,
          2,
          v794,
          v795,
          v796,
          v857,
          v923,
          v989,
          v1048,
          v1091,
          v1135,
          (__int64)v1179,
          v1223,
          (int)v1268,
          v1312,
          (int)v1356,
          v1399,
          v1443,
          v1486,
          v1529);
        v1686 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
        LOBYTE(v1680) = 0;
        v1679.m128i_i64[1] = 0;
        *(_QWORD *)&v1681 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v1680) = 3;
        v797 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(
          v797,
          "Decompilation not available (requires Hexrays license or function cannot be decompiled)",
          v798,
          v799,
          v800,
          v801,
          v908,
          v973,
          v1038);
        v1681 = (unsigned __int64)v797;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v1587,
          (__int64)v1591,
          2,
          v802,
          v803,
          v804,
          v909,
          v974,
          v1039,
          v1082,
          v1126,
          v1170,
          v1214,
          v1259,
          v1303,
          v1347,
          v1391,
          v1434,
          v1477,
          v1520,
          v1565);
        v1689 = 0;
        LOBYTE(src[0]) = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          src,
          (__int64)v1604,
          2,
          v805,
          v806,
          v807,
          v910,
          v975,
          v1040,
          v1083,
          v1127,
          v1171,
          v1215,
          v1260,
          v1304,
          v1348,
          v1392,
          v1435,
          v1478,
          v1521,
          v1566);
        LOBYTE(v797) = src[0];
        v1608[0].m128i_i8[0] = v1569;
        v1608[0].m128i_i64[1] = v1570;
        v808 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v809 = *(_BYTE *)v808;
        v810 = v1608[0].m128i_i8[0];
        *(_BYTE *)v808 = (_BYTE)v797;
        v811 = *(void **)(v808 + 8);
        v1569 = v810;
        v1570 = v1608[0].m128i_i64[1];
        *(void **)(v808 + 8) = src[1];
        src[1] = v811;
        LOBYTE(src[0]) = v809;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      if ( v1631.m256i_i64[1] )
      {
        v1631.m256i_i64[2] = 0;
        qfree();
      }
    }
  }
  v1626 = nullptr;
  v1627 = 0;
  memset(src, 0, 24);
  get_func_cmt();
  get_func_cmt();
  if ( ((unsigned __int64)src[1] | (unsigned __int64)v1627) > 1 )
  {
    v1672[0] = 0;
    v1673.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v1672[0] = 3;
    v133 = operator new(0x20u);
    strcpy((char *)(v133 + 16), "regular");
    *(_QWORD *)v133 = v133 + 16;
    *(_QWORD *)(v133 + 8) = 7;
    v1673 = (__m128i)(unsigned __int64)v133;
    if ( (_QWORD)v1627 )
      v134 = v1626;
    else
      v134 = _qstring<char>::c_str(void)const::nullstr;
    LOBYTE(v1674) = 0;
    *(_QWORD *)&v1675 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v1674) = 3;
    v135 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v135, v134, v136, v137, v138, v139, v857, v923, v989);
    v1675 = (unsigned __int64)v135;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v1604,
      (__int64)v1588,
      2,
      v140,
      v141,
      v142,
      v861,
      v927,
      v993,
      v1048,
      v1091,
      v1135,
      (__int64)v1179,
      v1223,
      (int)v1268,
      v1312,
      (int)v1356,
      v1399,
      v1443,
      v1486,
      v1529);
    LOBYTE(v1678) = 0;
    v1686 = 0;
    v1679.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v1678) = 3;
    v143 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v143, "repeatable", v144, v145, v146, v147, v862, v928, v994);
    v1679 = (__m128i)(unsigned __int64)v143;
    if ( src[1] )
      v148 = (const char *)src[0];
    else
      v148 = _qstring<char>::c_str(void)const::nullstr;
    LOBYTE(v1680) = 0;
    *(_QWORD *)&v1681 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v1680) = 3;
    v149 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v149, v148, v150, v151, v152, v153, v863, v929, v995);
    v1681 = (unsigned __int64)v149;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v1587,
      (__int64)v1591,
      2,
      v154,
      v155,
      v156,
      v864,
      v930,
      v996,
      v1051,
      v1094,
      v1138,
      v1182,
      v1226,
      v1271,
      v1315,
      v1359,
      v1402,
      v1446,
      v1489,
      v1532);
    v1689 = 0;
    LOBYTE(v1630) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v1403,
      (__int64)v1604,
      2,
      v157,
      v158,
      v159,
      v865,
      v931,
      v997,
      v1052,
      v1095,
      v1139,
      v1183,
      v1227,
      v1272,
      v1316,
      v1360,
      (char)v1403,
      v1447,
      v1490,
      v1533);
    LOBYTE(v149) = (_BYTE)v1630;
    v1608[0].m128i_i8[0] = v1569;
    v1608[0].m128i_i64[1] = v1570;
    v160 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v161 = v1608[0].m128i_i8[0];
    v162 = *(_BYTE *)v160;
    *(_BYTE *)v160 = (_BYTE)v149;
    v163 = *(_QWORD *)(v160 + 8);
    v1569 = v161;
    v1570 = v1608[0].m128i_i64[1];
    *(_QWORD *)(v160 + 8) = v1631.m256i_i64[0];
    v1631.m256i_i64[0] = v163;
    LOBYTE(v1630) = v162;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v1630 = nullptr;
  *(_OWORD *)v1631.m256i_i8 = 0;
  v1608[1] = (__m128i)_mm_loadh_ps((const double *)&v1584);
  tryblks = get_tryblks();
  if ( tryblks )
  {
    v1609 = 0;
    v866 = &v1609;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v1623.m128i_i64[1] = 1;
    v165 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v166 = *(_BYTE *)v165;
    v167 = *(_QWORD *)(v165 + 8);
    *(_BYTE *)v165 = 4;
    v1593 = &v1623.m128i_u64[1];
    v1623.m128i_i8[0] = v166;
    *(_QWORD *)(v165 + 8) = v1623.m128i_i64[1];
    v1623.m128i_i64[1] = v167;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v168 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v169 = *(_BYTE *)v168;
    v170 = *(_QWORD *)(v168 + 8);
    *(_BYTE *)v168 = 6;
    v1623.m128i_i8[0] = v169;
    *(_QWORD *)(v168 + 8) = tryblks;
    v1623.m128i_i64[1] = v170;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v1610 = 0;
    v1228 = &v1610;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    LOBYTE(v1529) = v1610;
    if ( v1631.m256i_i64[0] )
    {
      v1574.m128i_i64[0] = 0;
      while ( 1 )
      {
        v171 = v1574.m128i_i64[0];
        LOBYTE(v1611) = 0;
        v172 = &v1630[104 * v1574.m128i_i64[0]];
        frame_size = v172;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v173 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v174 = *(_BYTE *)v173;
        v175 = *(_QWORD *)(v173 + 8);
        *(_BYTE *)v173 = 6;
        v1623.m128i_i8[0] = v174;
        *(_QWORD *)(v173 + 8) = v171;
        v1623.m128i_i64[1] = v175;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v176 = (unsigned __int8)v172[98];
        v177 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v178 = *(_BYTE *)v177;
        v179 = *(_QWORD *)(v177 + 8);
        *(_BYTE *)v177 = 6;
        v180 = v1611;
        v1623.m128i_i8[0] = v178;
        *(_QWORD *)(v177 + 8) = v176;
        LOBYTE(v1575) = v180;
        v1623.m128i_i64[1] = v179;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v1612 = 0;
        v1613 = nullptr;
        v1579 = (__int128 *)&v1612;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        LOBYTE(v1592) = v1612;
        v1584 = (char *)v1613;
        if ( *((_QWORD *)v172 + 1) )
        {
          v1605[0] = nullptr;
          while ( 1 )
          {
            v181 = (_QWORD *)(*(_QWORD *)frame_size + 16 * (__int64)v1605[0]);
            LOBYTE(v1668) = 0;
            *(_QWORD *)&v1669 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            LOBYTE(v1668) = 3;
            v182 = operator new(0x20u);
            *(_DWORD *)(v182 + 16) = 1918989427;
            *(_QWORD *)v182 = v182 + 16;
            *(_BYTE *)(v182 + 20) = 116;
            *(_BYTE *)(v182 + 21) = 0;
            *(_QWORD *)(v182 + 8) = 5;
            v1669 = (unsigned __int64)v182;
            qsnprintf();
            v1586.m128i_i64[0] = (__int64)&v1655;
            v1655 = (char *)&v1656 + 8;
            v183 = strlen(v1698);
            v1623.m128i_i64[0] = v183;
            v184 = v183;
            if ( v183 > 0xF )
            {
              v242 = (_QWORD *)std::string::_M_create();
              v1655 = v242;
              *((_QWORD *)&v1656 + 1) = v1623.m128i_i64[0];
            }
            else
            {
              if ( v183 == 1 )
              {
                BYTE8(v1656) = v1698[0];
LABEL_53:
                v185 = (char *)&v1656 + 8;
                goto LABEL_54;
              }
              if ( !v183 )
                goto LABEL_53;
              v242 = (_QWORD *)&v1656 + 1;
            }
            if ( v184 >= 8 )
            {
              v254 = (unsigned __int64)(v242 + 1) & 0xFFFFFFFFFFFFFFF8LL;
              *v242 = *(_QWORD *)v1698;
              *(_QWORD *)((char *)v242 + v184 - 8) = *(_QWORD *)&v1697[v184];
              v255 = (char *)v242 - v254;
              v256 = (char *)(v1698 - v255);
              v257 = ((_DWORD)v255 + v184) & 0xFFFFFFF8;
              if ( v257 >= 8 )
              {
                v258 = v1605[0];
                v259 = v257 & 0xFFFFFFF8;
                v260 = 0;
                do
                {
                  v261 = v260;
                  v260 += 8;
                  *(_QWORD *)(v254 + v261) = *(_QWORD *)&v256[v261];
                }
                while ( v260 < v259 );
                v1605[0] = v258;
              }
            }
            else if ( (v184 & 4) != 0 )
            {
              *(_DWORD *)v242 = *(_DWORD *)v1698;
              *(_DWORD *)((char *)v242 + v184 - 4) = *(_DWORD *)&v1697[v184 + 4];
            }
            else if ( v184 )
            {
              *(_BYTE *)v242 = v1698[0];
              if ( (v184 & 2) != 0 )
                *(_WORD *)((char *)v242 + v184 - 2) = *(_WORD *)&v1697[v184 + 6];
            }
            v183 = v1623.m128i_i64[0];
            v185 = (char *)v1655;
LABEL_54:
            *(_QWORD *)&v1656 = v183;
            v185[v183] = 0;
            LOBYTE(v1670) = 0;
            *(_QWORD *)&v1671 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            LOBYTE(v1670) = 3;
            v186 = (_QWORD *)operator new(0x20u);
            v189 = v1655;
            v190 = (char *)(v186 + 2);
            v191 = v1656;
            *v186 = v186 + 2;
            if ( v189 == (__int128 *)((char *)&v1656 + 8) )
            {
              v244 = v191 + 1;
              if ( (unsigned int)(v191 + 1) >= 8 )
              {
                v188 = (unsigned __int64)(v186 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                v186[2] = *((_QWORD *)&v1656 + 1);
                v187 = v244;
                v270 = (_DWORD)v190 - v188;
                *(_QWORD *)&v190[v244 - 8] = *(_QWORD *)((char *)&v1656 + v244);
                v190 = (char *)((char *)&v1656 + 8 - &v190[-v188]);
                v271 = (v244 + v270) & 0xFFFFFFF8;
                if ( v271 >= 8 )
                {
                  v272 = v1605[0];
                  v273 = v271 & 0xFFFFFFF8;
                  LODWORD(v187) = 0;
                  do
                  {
                    v274 = (unsigned int)v187;
                    v187 = (unsigned int)(v187 + 8);
                    *(_QWORD *)(v188 + v274) = *(_QWORD *)&v190[v274];
                  }
                  while ( (unsigned int)v187 < v273 );
                  v1605[0] = v272;
                }
              }
              else if ( (v244 & 4) != 0 )
              {
                *((_DWORD *)v186 + 4) = DWORD2(v1656);
                v187 = *(unsigned int *)((char *)&v1656 + v244 + 4);
                *(_DWORD *)&v190[v244 - 4] = v187;
              }
              else if ( (_DWORD)v191 != -1 )
              {
                *((_BYTE *)v186 + 16) = BYTE8(v1656);
                if ( (v244 & 2) != 0 )
                {
                  v187 = *(unsigned __int16 *)((char *)&v1656 + v244 + 6);
                  *(_WORD *)&v190[v244 - 2] = v187;
                }
              }
            }
            else
            {
              *v186 = v189;
              v186[2] = *((_QWORD *)&v1656 + 1);
            }
            v186[1] = v191;
            v1655 = (char *)&v1656 + 8;
            *(_QWORD *)&v1656 = 0;
            BYTE8(v1656) = 0;
            v1671 = (unsigned __int64)v186;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v1604,
              (__int64)v1585,
              2,
              v187,
              v188,
              (__int64)v190,
              (int)v866,
              v923,
              v989,
              v1048,
              v1091,
              v1135,
              (__int64)v1179,
              (int)v1228,
              (int)v1268,
              v1312,
              (int)v1356,
              v1399,
              v1443,
              v1486,
              v1529);
            v1672[0] = 0;
            v1686 = 0;
            v1673.m128i_i64[0] = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v1672[0] = 3;
            v192 = operator new(0x20u);
            *(_BYTE *)(v192 + 18) = 100;
            *(_WORD *)(v192 + 16) = 28261;
            *(_QWORD *)v192 = v192 + 16;
            *(_BYTE *)(v192 + 19) = 0;
            *(_QWORD *)(v192 + 8) = 3;
            v1673 = (__m128i)(unsigned __int64)v192;
            qsnprintf();
            v1658 = &v1660;
            v193 = strlen(v1700);
            v1623.m128i_i64[0] = v193;
            v194 = v193;
            if ( v193 > 0xF )
            {
              v243 = (__int64 *)std::string::_M_create();
              v1658 = v243;
              v1660 = v1623.m128i_i64[0];
            }
            else
            {
              if ( v193 == 1 )
              {
                LOBYTE(v1660) = v1700[0];
LABEL_59:
                v195 = &v1660;
                goto LABEL_60;
              }
              if ( !v193 )
                goto LABEL_59;
              v243 = &v1660;
            }
            if ( v194 >= 8 )
            {
              v246 = (unsigned __int64)(v243 + 1) & 0xFFFFFFFFFFFFFFF8LL;
              *v243 = *(_QWORD *)v1700;
              *(__int64 *)((char *)v243 + v194 - 8) = *(_QWORD *)&v1699[v194];
              v247 = (char *)v243 - v246;
              v248 = (char *)(v1700 - v247);
              v249 = ((_DWORD)v247 + v194) & 0xFFFFFFF8;
              if ( v249 >= 8 )
              {
                v250 = v1605[0];
                v251 = v249 & 0xFFFFFFF8;
                v252 = 0;
                do
                {
                  v253 = v252;
                  v252 += 8;
                  *(_QWORD *)(v246 + v253) = *(_QWORD *)&v248[v253];
                }
                while ( v252 < v251 );
                v1605[0] = v250;
              }
            }
            else if ( (v194 & 4) != 0 )
            {
              *(_DWORD *)v243 = *(_DWORD *)v1700;
              *(_DWORD *)((char *)v243 + v194 - 4) = *(_DWORD *)&v1699[v194 + 4];
            }
            else if ( v194 )
            {
              *(_BYTE *)v243 = v1700[0];
              if ( (v194 & 2) != 0 )
                *(_WORD *)((char *)v243 + v194 - 2) = *(_WORD *)&v1699[v194 + 6];
            }
            v193 = v1623.m128i_i64[0];
            v195 = (__int64 *)v1658;
LABEL_60:
            v1659 = v193;
            *((_BYTE *)v195 + v193) = 0;
            LOBYTE(v1674) = 0;
            *(_QWORD *)&v1675 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            LOBYTE(v1674) = 3;
            v196 = (_QWORD *)operator new(0x20u);
            v199 = (__int64 *)v1658;
            v200 = (char *)(v196 + 2);
            v201 = v1659;
            *v196 = v196 + 2;
            if ( v199 == &v1660 )
            {
              v245 = v201 + 1;
              if ( (unsigned int)(v201 + 1) >= 8 )
              {
                v198 = (unsigned __int64)(v196 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                v196[2] = v1660;
                v197 = v245;
                v265 = (_DWORD)v200 - v198;
                *(_QWORD *)&v200[v245 - 8] = *(size_t *)((char *)&v1659 + v245);
                v200 = (char *)((char *)&v1660 - &v200[-v198]);
                v266 = (v245 + v265) & 0xFFFFFFF8;
                if ( v266 >= 8 )
                {
                  v267 = v1605[0];
                  v268 = v266 & 0xFFFFFFF8;
                  LODWORD(v197) = 0;
                  do
                  {
                    v269 = (unsigned int)v197;
                    v197 = (unsigned int)(v197 + 8);
                    *(_QWORD *)(v198 + v269) = *(_QWORD *)&v200[v269];
                  }
                  while ( (unsigned int)v197 < v268 );
                  v1605[0] = v267;
                }
              }
              else if ( (v245 & 4) != 0 )
              {
                *((_DWORD *)v196 + 4) = v1660;
                v197 = *(unsigned int *)((char *)&v1659 + v245 + 4);
                *(_DWORD *)&v200[v245 - 4] = v197;
              }
              else if ( (_DWORD)v201 != -1 )
              {
                *((_BYTE *)v196 + 16) = v1660;
                if ( (v245 & 2) != 0 )
                {
                  v197 = *(unsigned __int16 *)((char *)&v1659 + v245 + 6);
                  *(_WORD *)&v200[v245 - 2] = v197;
                }
              }
            }
            else
            {
              *v196 = v199;
              v196[2] = v1660;
            }
            v196[1] = v201;
            v1658 = &v1660;
            v1659 = 0;
            LOBYTE(v1660) = 0;
            v1675 = (unsigned __int64)v196;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v1587,
              (__int64)v1588,
              2,
              v197,
              v198,
              (__int64)v200,
              v867,
              v932,
              v998,
              v1053,
              v1096,
              v1140,
              v1184,
              v1229,
              v1273,
              v1317,
              v1361,
              v1404,
              v1448,
              v1491,
              v1534);
            LOBYTE(v1678) = 0;
            v1689 = 0;
            v1679.m128i_i64[0] = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            LOBYTE(v1678) = 3;
            v202 = operator new(0x20u);
            strcpy((char *)(v202 + 16), "size");
            v203 = v1591;
            *(_QWORD *)v202 = v202 + 16;
            v204 = v1583;
            *(_QWORD *)(v202 + 8) = 4;
            v1679 = (__m128i)(unsigned __int64)v202;
            v1681 = (unsigned __int64)(v181[1] - *v181);
            LOBYTE(v1680) = 6;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v204,
              (__int64)v203,
              2,
              v205,
              v206,
              v207,
              v868,
              v933,
              v999,
              v1054,
              v1097,
              v1141,
              v1185,
              v1230,
              v1274,
              v1318,
              v1362,
              v1405,
              v1449,
              v1492,
              v1535);
            v1691 = 0;
            v1602 = 3;
            v1601 = v1604;
            v1623.m128i_i8[0] = 0;
            v1623.m128i_i64[1] = 0;
            v1598 = &v1623;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              &v1623,
              (__int64)v1604,
              3,
              v208,
              v209,
              v210,
              v869,
              v934,
              v1000,
              v1055,
              v1098,
              v1142,
              v1186,
              v1231,
              v1275,
              v1319,
              v1363,
              v1406,
              v1450,
              v1493,
              v1536);
            if ( !(_BYTE)v1592 )
            {
              v211 = operator new(0x18u);
              *(_QWORD *)(v211 + 16) = 0;
              v212 = v211;
              *(_OWORD *)v211 = 0;
LABEL_64:
              std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
              v1584 = (char *)v212;
              v213 = v1623.m128i_i8[0];
              v214 = v1623.m128i_i64[1];
              goto LABEL_65;
            }
            if ( (_BYTE)v1592 != 2 )
            {
              v5 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
              switch ( (char)v1592 )
              {
                case 1:
                  v8 = "object";
                  break;
                case 2:
                  v8 = (char *)"array";
                  break;
                case 3:
                  v8 = "string";
                  break;
                case 4:
                  v8 = "boolean";
                  break;
                case 8:
                  v8 = "binary";
                  break;
                case 9:
                  v8 = "discarded";
                  break;
                default:
                  v8 = "number";
                  break;
              }
              v1618 = (size_t)v8;
              nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
              nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
                v5,
                308);
              std::string::_M_dispose();
              __cxa_throw(
                v5,
                (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
            }
            v262 = v1584;
            v263 = *((_QWORD *)v1584 + 1);
            if ( v263 == *((_QWORD *)v1584 + 2) )
            {
              v212 = (__int64)v1584;
              goto LABEL_64;
            }
            v264 = v263 + 16;
            v213 = 0;
            *(__m128i *)(v264 - 16) = _mm_load_si128(&v1623);
            *((_QWORD *)v262 + 1) = v264;
            v214 = 0;
LABEL_65:
            v1623.m128i_i8[0] = v213;
            v215 = (char *)v1692;
            v1623.m128i_i64[1] = v214;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v216 = v1605[0];
            v217 = v1604;
            do
            {
              v215 -= 24;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
            while ( v215 != v217 );
            v1605[0] = v216;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            if ( v1658 != &v1660 )
              operator delete(v1658, v1660 + 1);
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            if ( v1655 != (char *)&v1656 + 8 )
              operator delete(v1655, *((_QWORD *)&v1656 + 1) + 1LL);
            ++v1605[0];
            LOBYTE(v1592) = 2;
            if ( v1605[0] >= (char *)*((_QWORD *)frame_size + 1) )
              goto LABEL_72;
          }
        }
        v1598 = &v1623;
LABEL_72:
        v1623.m128i_i8[0] = 0;
        v1612 = (char)v1592;
        v1613 = v1584;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v218 = v1623.m128i_i8[0];
        v219 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v220 = v1611;
        v221 = *(_BYTE *)v219;
        *(_BYTE *)v219 = v218;
        v222 = *(_QWORD *)(v219 + 8);
        LOBYTE(v1575) = v220;
        *(_QWORD *)(v219 + 8) = v1623.m128i_i64[1];
        v1623.m128i_i64[1] = v222;
        v1623.m128i_i8[0] = v221;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v223 = *((_BYTE *)frame_size + 97);
        if ( v223 == 2 )
        {
          v1623 = 0u;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v333 = (__int64 *)operator new(0x20u);
          std::string::basic_string<std::allocator<char>>(
            v333,
            "cpp_exception",
            v334,
            v335,
            v336,
            v337,
            (int)v866,
            v923,
            v989);
          v338 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v339 = *(_BYTE *)v338;
          v340 = *(_QWORD *)(v338 + 8);
          *(_BYTE *)v338 = 3;
          *(_QWORD *)(v338 + 8) = v333;
          v1623.m128i_i8[0] = v339;
          LOBYTE(v1575) = v1611;
          v1623.m128i_i64[1] = v340;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v1614 = 0;
          v1356 = &v1614;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v1568 = v1614;
          if ( *((_QWORD *)frame_size + 4) )
          {
            v1571 = 0;
            v1582 = (__int64 *)&v1616;
            while ( 1 )
            {
              v1616 = 0;
              v341 = *((_QWORD *)frame_size + 3) + 56 * v1571;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
              LOBYTE(v1618) = 0;
              LOBYTE(v1578) = v1616;
              v1268 = &v1618;
              v1619 = nullptr;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
              v1586.m128i_i8[0] = v1618;
              v1579 = v1619;
              if ( *(_QWORD *)(v341 + 8) )
                break;
LABEL_267:
              v1623.m128i_i8[0] = 0;
              LOBYTE(v1618) = v1586.m128i_i8[0];
              v1619 = v1579;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
              v390 = v1623.m128i_i8[0];
              v391 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v392 = v1616;
              v393 = *(_BYTE *)v391;
              *(_BYTE *)v391 = v390;
              v394 = *(_QWORD *)(v391 + 8);
              LOBYTE(v1578) = v392;
              *(_QWORD *)(v391 + 8) = v1623.m128i_i64[1];
              v1623.m128i_i64[1] = v394;
              v1623.m128i_i8[0] = v393;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v395 = *(_QWORD *)(v341 + 48);
              if ( v395 == -1 )
              {
                v1623.m128i_i8[0] = 0;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[10],char [10],0>();
                v441 = v1623.m128i_i8[0];
                v442 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
                v443 = v1616;
                v444 = *(_BYTE *)v442;
                *(_BYTE *)v442 = v441;
                v445 = *(_QWORD *)(v442 + 8);
                LOBYTE(v1578) = v443;
                *(_QWORD *)(v442 + 8) = v1623.m128i_i64[1];
                v1623.m128i_i64[1] = v445;
                v1623.m128i_i8[0] = v444;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              }
              else
              {
                if ( v395 == -2 )
                {
                  v1623 = 0u;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  v434 = (__int64 *)operator new(0x20u);
                  std::string::basic_string<std::allocator<char>>(
                    v434,
                    "cleanup_handler",
                    v435,
                    v436,
                    v437,
                    v438,
                    (int)v866,
                    v923,
                    v989);
                  v439 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
                  v440 = *(_BYTE *)v439;
                  v398 = *(_QWORD *)(v439 + 8);
                  *(_BYTE *)v439 = 3;
                  *(_QWORD *)(v439 + 8) = v434;
                  v1623.m128i_i8[0] = v440;
                  LOBYTE(v1578) = v1616;
                }
                else
                {
                  v396 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
                  v397 = *(_BYTE *)v396;
                  v398 = *(_QWORD *)(v396 + 8);
                  *(_BYTE *)v396 = 5;
                  v399 = v1616;
                  v1623.m128i_i8[0] = v397;
                  *(_QWORD *)(v396 + 8) = v395;
                  LOBYTE(v1578) = v399;
                }
                v1623.m128i_i64[1] = v398;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              }
              v400 = *(_QWORD *)(v341 + 24);
              if ( v400 != -1 )
              {
                v1616 = (char)v1578;
                v401 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
                v402 = *(_BYTE *)v401;
                v403 = *(_QWORD *)(v401 + 8);
                *(_BYTE *)v401 = 5;
                v404 = v1616;
                v1623.m128i_i8[0] = v402;
                *(_QWORD *)(v401 + 8) = v400;
                LOBYTE(v1578) = v404;
                v1623.m128i_i64[1] = v403;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              }
              v405 = *(_QWORD *)(v341 + 40);
              if ( v405 != -1 )
              {
                v1616 = (char)v1578;
                v406 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
                v407 = *(_BYTE *)v406;
                v408 = *(_QWORD *)(v406 + 8);
                *(_BYTE *)v406 = 5;
                v409 = v1616;
                v1623.m128i_i8[0] = v407;
                *(_QWORD *)(v406 + 8) = v405;
                LOBYTE(v1578) = v409;
                v1623.m128i_i64[1] = v408;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              }
              v410 = *(_DWORD *)(v341 + 32);
              if ( v410 != -1 )
              {
                v411 = v410;
                v1616 = (char)v1578;
                v412 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
                v413 = *(_BYTE *)v412;
                v414 = *(_QWORD *)(v412 + 8);
                *(_BYTE *)v412 = 5;
                v415 = v1616;
                v1623.m128i_i8[0] = v413;
                *(_QWORD *)(v412 + 8) = v411;
                LOBYTE(v1578) = v415;
                v1623.m128i_i64[1] = v414;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              }
              v1614 = v1568;
              v1616 = (char)v1578;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
              v1568 = v1614;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              if ( (unsigned __int64)++v1571 >= *((_QWORD *)frame_size + 4) )
                goto LABEL_278;
            }
            v1605[0] = nullptr;
            while ( 2 )
            {
              v1672[0] = 0;
              v1673.m128i_i64[0] = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v1672[0] = 3;
              v369 = operator new(0x20u);
              *(_DWORD *)(v369 + 16) = 1918989427;
              *(_QWORD *)v369 = v369 + 16;
              *(_BYTE *)(v369 + 20) = 116;
              *(_BYTE *)(v369 + 21) = 0;
              *(_QWORD *)(v369 + 8) = 5;
              v1673 = (__m128i)(unsigned __int64)v369;
              qsnprintf();
              v1658 = &v1660;
              v370 = strlen(v1702);
              v1623.m128i_i64[0] = v370;
              v371 = v370;
              if ( v370 > 0xF )
              {
                v372 = (__int64 *)std::string::_M_create();
                v1658 = v372;
                v1660 = v1623.m128i_i64[0];
                goto LABEL_234;
              }
              if ( v370 == 1 )
              {
                LOBYTE(v1660) = v1702[0];
LABEL_215:
                v342 = &v1660;
              }
              else
              {
                if ( !v370 )
                  goto LABEL_215;
                v372 = &v1660;
LABEL_234:
                if ( v371 >= 8 )
                {
                  v382 = (unsigned __int64)(v372 + 1) & 0xFFFFFFFFFFFFFFF8LL;
                  *v372 = *(_QWORD *)v1702;
                  *(__int64 *)((char *)v372 + v371 - 8) = *(_QWORD *)&v1701[v371];
                  v383 = (char *)v372 - v382;
                  v384 = (char *)(v1702 - v383);
                  v385 = ((_DWORD)v383 + v371) & 0xFFFFFFF8;
                  if ( v385 >= 8 )
                  {
                    v386 = v1605[0];
                    v387 = v385 & 0xFFFFFFF8;
                    v388 = 0;
                    do
                    {
                      v389 = v388;
                      v388 += 8;
                      *(_QWORD *)(v382 + v389) = *(_QWORD *)&v384[v389];
                    }
                    while ( v388 < v387 );
                    v1605[0] = v386;
                  }
                }
                else if ( (v371 & 4) != 0 )
                {
                  *(_DWORD *)v372 = *(_DWORD *)v1702;
                  *(_DWORD *)((char *)v372 + v371 - 4) = *(_DWORD *)&v1701[v371 + 4];
                }
                else if ( v371 )
                {
                  *(_BYTE *)v372 = v1702[0];
                  if ( (v371 & 2) != 0 )
                    *(_WORD *)((char *)v372 + v371 - 2) = *(_WORD *)&v1701[v371 + 6];
                }
                v370 = v1623.m128i_i64[0];
                v342 = (__int64 *)v1658;
              }
              v1659 = v370;
              *((_BYTE *)v342 + v370) = 0;
              LOBYTE(v1674) = 0;
              *(_QWORD *)&v1675 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              LOBYTE(v1674) = 3;
              v343 = (_QWORD *)operator new(0x20u);
              v347 = (__int64 *)v1658;
              v348 = v343 + 2;
              v349 = v1659;
              *v343 = v343 + 2;
              if ( v347 == &v1660 )
              {
                v345 = v349 + 1;
                if ( (unsigned int)(v349 + 1) >= 8 )
                {
                  v344 = (unsigned int)v345;
                  v346 = (unsigned __int64)(v343 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                  v343[2] = v1660;
                  *(_QWORD *)((char *)v348 + (unsigned int)v345 - 8) = *(size_t *)((char *)&v1659 + (unsigned int)v345);
                  v424 = (_DWORD)v348 - v346;
                  v425 = (char *)((char *)&v1660 - ((char *)v348 - v346));
                  v426 = (v345 + v424) & 0xFFFFFFF8;
                  if ( v426 >= 8 )
                  {
                    v427 = v1605[0];
                    v428 = v426 & 0xFFFFFFF8;
                    LODWORD(v344) = 0;
                    do
                    {
                      v345 = (unsigned int)v344;
                      v344 = (unsigned int)(v344 + 8);
                      *(_QWORD *)(v346 + v345) = *(_QWORD *)&v425[v345];
                    }
                    while ( (unsigned int)v344 < v428 );
                    v1605[0] = v427;
                  }
                }
                else if ( (v345 & 4) != 0 )
                {
                  *((_DWORD *)v343 + 4) = v1660;
                  v344 = *(unsigned int *)((char *)&v1659 + (unsigned int)v345 + 4);
                  *(_DWORD *)((char *)v348 + (unsigned int)v345 - 4) = v344;
                }
                else if ( (_DWORD)v349 != -1 )
                {
                  *((_BYTE *)v343 + 16) = v1660;
                  if ( (v345 & 2) != 0 )
                  {
                    v344 = *(unsigned __int16 *)((char *)&v1659 + (unsigned int)v345 + 6);
                    *(_WORD *)((char *)v348 + (unsigned int)v345 - 2) = v344;
                  }
                }
              }
              else
              {
                *v343 = v347;
                v343[2] = v1660;
              }
              v343[1] = v349;
              v1658 = &v1660;
              v1659 = 0;
              LOBYTE(v1660) = 0;
              v1675 = (unsigned __int64)v343;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                v1604,
                (__int64)v1588,
                2,
                v344,
                v345,
                v346,
                (int)v866,
                v923,
                v989,
                v1048,
                v1091,
                v1135,
                (__int64)v1179,
                (int)v1228,
                (int)v1268,
                v1312,
                (int)v1356,
                v1399,
                v1443,
                v1486,
                v1529);
              LOBYTE(v1678) = 0;
              v1686 = 0;
              v1679.m128i_i64[0] = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              LOBYTE(v1678) = 3;
              v350 = operator new(0x20u);
              *(_BYTE *)(v350 + 18) = 100;
              *(_QWORD *)v350 = v350 + 16;
              *(_WORD *)(v350 + 16) = 28261;
              *(_BYTE *)(v350 + 19) = 0;
              *(_QWORD *)(v350 + 8) = 3;
              v1679 = (__m128i)(unsigned __int64)v350;
              qsnprintf();
              v1664 = (char *)&v1665 + 8;
              v351 = strlen(v1704);
              v1623.m128i_i64[0] = v351;
              v352 = v351;
              if ( v351 > 0xF )
              {
                v373 = (_QWORD *)std::string::_M_create();
                v1664 = v373;
                *((_QWORD *)&v1665 + 1) = v1623.m128i_i64[0];
                goto LABEL_243;
              }
              if ( v351 == 1 )
              {
                BYTE8(v1665) = v1704[0];
LABEL_221:
                v353 = (char *)&v1665 + 8;
              }
              else
              {
                if ( !v351 )
                  goto LABEL_221;
                v373 = (_QWORD *)&v1665 + 1;
LABEL_243:
                if ( v352 >= 8 )
                {
                  v374 = (unsigned __int64)(v373 + 1) & 0xFFFFFFFFFFFFFFF8LL;
                  *v373 = *(_QWORD *)v1704;
                  *(_QWORD *)((char *)v373 + v352 - 8) = *(_QWORD *)&v1703[v352];
                  v375 = (char *)v373 - v374;
                  v376 = (char *)(v1704 - v375);
                  v377 = ((_DWORD)v375 + v352) & 0xFFFFFFF8;
                  if ( v377 >= 8 )
                  {
                    v378 = v1605[0];
                    v379 = v377 & 0xFFFFFFF8;
                    v380 = 0;
                    do
                    {
                      v381 = v380;
                      v380 += 8;
                      *(_QWORD *)(v374 + v381) = *(_QWORD *)&v376[v381];
                    }
                    while ( v380 < v379 );
                    v1605[0] = v378;
                  }
                }
                else if ( (v352 & 4) != 0 )
                {
                  *(_DWORD *)v373 = *(_DWORD *)v1704;
                  *(_DWORD *)((char *)v373 + v352 - 4) = *(_DWORD *)&v1703[v352 + 4];
                }
                else if ( v352 )
                {
                  *(_BYTE *)v373 = v1704[0];
                  if ( (v352 & 2) != 0 )
                    *(_WORD *)((char *)v373 + v352 - 2) = *(_WORD *)&v1703[v352 + 6];
                }
                v351 = v1623.m128i_i64[0];
                v353 = (char *)v1664;
              }
              *(_QWORD *)&v1665 = v351;
              v353[v351] = 0;
              LOBYTE(v1680) = 0;
              *(_QWORD *)&v1681 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              LOBYTE(v1680) = 3;
              v354 = (_QWORD *)operator new(0x20u);
              v358 = v1664;
              v359 = v354 + 2;
              v360 = v1665;
              *v354 = v354 + 2;
              if ( v358 == (__int128 *)((char *)&v1665 + 8) )
              {
                v356 = v360 + 1;
                if ( (unsigned int)(v360 + 1) >= 8 )
                {
                  v355 = (unsigned int)v356;
                  v357 = (unsigned __int64)(v354 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                  v354[2] = *((_QWORD *)&v1665 + 1);
                  *(_QWORD *)((char *)v359 + (unsigned int)v356 - 8) = *(_QWORD *)((char *)&v1666[-2]
                                                                                 + (unsigned int)v356);
                  v429 = (_DWORD)v359 - v357;
                  v430 = (char *)((char *)&v1665 + 8 - ((char *)v359 - v357));
                  v431 = (v356 + v429) & 0xFFFFFFF8;
                  if ( v431 >= 8 )
                  {
                    v432 = v1605[0];
                    v433 = v431 & 0xFFFFFFF8;
                    LODWORD(v355) = 0;
                    do
                    {
                      v356 = (unsigned int)v355;
                      v355 = (unsigned int)(v355 + 8);
                      *(_QWORD *)(v357 + v356) = *(_QWORD *)&v430[v356];
                    }
                    while ( (unsigned int)v355 < v433 );
                    v1605[0] = v432;
                  }
                }
                else if ( (v356 & 4) != 0 )
                {
                  *((_DWORD *)v354 + 4) = DWORD2(v1665);
                  v355 = *(unsigned int *)((char *)&v1666[-1] + (unsigned int)v356 - 4);
                  *(_DWORD *)((char *)v359 + (unsigned int)v356 - 4) = v355;
                }
                else if ( (_DWORD)v360 != -1 )
                {
                  *((_BYTE *)v354 + 16) = BYTE8(v1665);
                  if ( (v356 & 2) != 0 )
                  {
                    v355 = *(unsigned __int16 *)((char *)&v1666[-1] + (unsigned int)v356 - 2);
                    *(_WORD *)((char *)v359 + (unsigned int)v356 - 2) = v355;
                  }
                }
              }
              else
              {
                *v354 = v358;
                v354[2] = *((_QWORD *)&v1665 + 1);
              }
              v354[1] = v360;
              v1664 = (char *)&v1665 + 8;
              *(_QWORD *)&v1665 = 0;
              BYTE8(v1665) = 0;
              v1681 = (unsigned __int64)v354;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                v1587,
                (__int64)v1591,
                2,
                v355,
                v356,
                v357,
                v878,
                v943,
                v1009,
                v1061,
                v1104,
                v1148,
                v1192,
                v1237,
                v1281,
                v1325,
                v1369,
                v1412,
                v1456,
                v1499,
                v1542);
              v1689 = 0;
              v1596 = 2;
              v1595 = v1604;
              v1623.m128i_i8[0] = 0;
              v1623.m128i_i64[1] = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                v1598,
                (__int64)v1604,
                2,
                v361,
                v362,
                v363,
                v879,
                v944,
                v1010,
                v1062,
                v1105,
                v1149,
                v1193,
                v1238,
                v1282,
                v1326,
                v1370,
                v1413,
                v1457,
                v1500,
                v1543);
              v1577 = v1623.m128i_i64[1];
              if ( !v1586.m128i_i8[0] )
              {
                v364 = operator new(0x18u);
                *(_QWORD *)(v364 + 16) = 0;
                v365 = (__int128 *)v364;
                *(_OWORD *)v364 = 0;
                goto LABEL_226;
              }
              if ( v1586.m128i_i8[0] != 2 )
              {
                v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
                switch ( v1586.m128i_i8[0] )
                {
                  case 1:
                    v4 = "object";
                    break;
                  case 2:
                    v4 = (char *)"array";
                    break;
                  case 3:
                    v4 = "string";
                    break;
                  case 4:
                    v4 = "boolean";
                    break;
                  case 8:
                    v4 = "binary";
                    break;
                  case 9:
                    v4 = "discarded";
                    break;
                  default:
                    v4 = "number";
                    break;
                }
                v1606[1] = v4;
                nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
                nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
                  v3,
                  308);
                std::string::_M_dispose();
                __cxa_throw(
                  v3,
                  (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                  (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
              }
              v421 = v1579;
              v422 = *((_QWORD *)v1579 + 1);
              if ( v422 == *((_QWORD *)v1579 + 2) )
              {
                v365 = v1579;
LABEL_226:
                std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
                v1579 = v365;
                v366 = v1623.m128i_i8[0];
                v367 = v1623.m128i_i64[1];
              }
              else
              {
                v423 = v422 + 16;
                v366 = 0;
                *(__m128i *)(v423 - 16) = _mm_load_si128(&v1623);
                *((_QWORD *)v421 + 1) = v423;
                v367 = 0;
              }
              v1623.m128i_i64[1] = v367;
              v1623.m128i_i8[0] = v366;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              if ( v1664 != (char *)&v1665 + 8 )
                operator delete(v1664, *((_QWORD *)&v1665 + 1) + 1LL);
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              if ( v1658 != &v1660 )
                operator delete(v1658, v1660 + 1);
              v368 = ++v1605[0] < (char *)*(_QWORD *)(v341 + 8);
              v1586.m128i_i8[0] = 2;
              if ( !v368 )
                goto LABEL_267;
              continue;
            }
          }
LABEL_278:
          v1623.m128i_i8[0] = 0;
          v1614 = v1568;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v416 = v1623.m128i_i8[0];
          v417 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v418 = v1611;
          v419 = *(_BYTE *)v417;
          *(_BYTE *)v417 = v416;
          v420 = *(_QWORD *)(v417 + 8);
          LOBYTE(v1575) = v418;
          *(_QWORD *)(v417 + 8) = v1623.m128i_i64[1];
          v1623.m128i_i8[0] = v419;
          v1623.m128i_i64[1] = v420;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        else if ( v223 == 1 )
        {
          v1623 = 0u;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v614 = (__int64 *)operator new(0x20u);
          std::string::basic_string<std::allocator<char>>(
            v614,
            "seh_exception",
            v615,
            v616,
            v617,
            v618,
            (int)v866,
            v923,
            v989);
          v619 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v620 = *(_BYTE *)v619;
          v621 = *(_QWORD *)(v619 + 8);
          *(_BYTE *)v619 = 3;
          *(_QWORD *)(v619 + 8) = v614;
          v1623.m128i_i8[0] = v620;
          LOBYTE(v1575) = v1611;
          v1623.m128i_i64[1] = v621;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v1614 = 0;
          v1356 = &v1614;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v1616 = 0;
          LOBYTE(v1579) = v1614;
          v1582 = (__int64 *)&v1616;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v622 = v1616;
          if ( !*((_QWORD *)frame_size + 4) )
          {
LABEL_437:
            v1623.m128i_i8[0] = 0;
            v1616 = v622;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
            v659 = v1623.m128i_i8[0];
            v660 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v661 = v1614;
            v662 = *(_BYTE *)v660;
            *(_BYTE *)v660 = v659;
            v663 = *(_QWORD *)(v660 + 8);
            LOBYTE(v1579) = v661;
            *(_QWORD *)(v660 + 8) = v1623.m128i_i64[1];
            v1623.m128i_i64[1] = v663;
            v1623.m128i_i8[0] = v662;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            if ( *((_QWORD *)frame_size + 9) )
            {
              LOBYTE(v1618) = 0;
              v1268 = &v1618;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
              v767 = v1618;
              if ( *((_QWORD *)frame_size + 9) )
              {
                v768 = 0;
                v1582 = &v1680;
                do
                {
                  v769 = (char *)(*((_QWORD *)frame_size + 8) + 16 * v768);
                  v1672[0] = 0;
                  v1605[0] = v769;
                  v1673.m128i_i64[0] = 0;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  v1672[0] = 3;
                  v770 = (__int64 *)operator new(0x20u);
                  v1586 = (__m128i)(unsigned __int64)v770;
                  std::string::basic_string<std::allocator<char>>(
                    v770,
                    "start",
                    v771,
                    v772,
                    v773,
                    v774,
                    (int)v866,
                    v923,
                    v989);
                  v1673 = _mm_load_si128(&v1586);
                  ida_mcp::format_ea[abi:cxx11]();
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
                  *((_QWORD *)&v1675 + 1) = 0;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                    v1604,
                    (__int64)v1588,
                    2,
                    v775,
                    v776,
                    v777,
                    v904,
                    v969,
                    v1035,
                    v1048,
                    v1091,
                    v1135,
                    (__int64)v1179,
                    (int)v1228,
                    (int)v1268,
                    v1312,
                    (int)v1356,
                    v1399,
                    v1443,
                    v1486,
                    v1529);
                  LOBYTE(v1678) = 0;
                  v1686 = 0;
                  v1679.m128i_i64[0] = 0;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  LOBYTE(v1678) = 3;
                  v778 = (__int64 *)operator new(0x20u);
                  v1586 = (__m128i)(unsigned __int64)v778;
                  std::string::basic_string<std::allocator<char>>(
                    v778,
                    "end",
                    v779,
                    v780,
                    v781,
                    v782,
                    v905,
                    v970,
                    v1036);
                  v1679 = _mm_load_si128(&v1586);
                  ida_mcp::format_ea[abi:cxx11]();
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
                  *((_QWORD *)&v1681 + 1) = 0;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                    v1587,
                    (__int64)v1591,
                    2,
                    v783,
                    v784,
                    v785,
                    v906,
                    v971,
                    v1037,
                    v1081,
                    v1124,
                    v1168,
                    v1212,
                    v1257,
                    v1301,
                    v1345,
                    v1389,
                    v1432,
                    v1475,
                    v1518,
                    v1563);
                  v1689 = 0;
                  v1623.m128i_i8[0] = 0;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                    v1598,
                    (__int64)v1604,
                    2,
                    v786,
                    v787,
                    v788,
                    v907,
                    v972,
                    (int)v1604,
                    2,
                    v1125,
                    v1169,
                    v1213,
                    v1258,
                    v1302,
                    v1346,
                    v1390,
                    v1433,
                    v1476,
                    v1519,
                    v1564);
                  LOBYTE(v1618) = v767;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
                  ++v768;
                  v767 = v1618;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  std::string::_M_dispose();
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  std::string::_M_dispose();
                }
                while ( v768 < *((_QWORD *)frame_size + 9) );
              }
              v1623.m128i_i8[0] = 0;
              LOBYTE(v1618) = v767;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
              v789 = v1623.m128i_i8[0];
              v790 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v791 = v1614;
              v792 = *(_BYTE *)v790;
              *(_BYTE *)v790 = v789;
              v793 = *(_QWORD *)(v790 + 8);
              LOBYTE(v1579) = v791;
              *(_QWORD *)(v790 + 8) = v1623.m128i_i64[1];
              v1623.m128i_i8[0] = v792;
              v1623.m128i_i64[1] = v793;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
            else
            {
              v664 = *((_QWORD *)frame_size + 11);
              if ( v664 == -1 )
              {
                v1623 = 0u;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                v828 = (__int64 *)operator new(0x20u);
                std::string::basic_string<std::allocator<char>>(
                  v828,
                  "EXCEPTION_CONTINUE_EXECUTION",
                  v829,
                  v830,
                  v831,
                  v832,
                  (int)v866,
                  v923,
                  v989);
                v833 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
                v834 = *(_BYTE *)v833;
                v835 = *(_QWORD *)(v833 + 8);
                *(_BYTE *)v833 = 3;
                *(_QWORD *)(v833 + 8) = v828;
                v1623.m128i_i8[0] = v834;
                LOBYTE(v1579) = v1614;
                v1623.m128i_i64[1] = v835;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              }
              else if ( v664 )
              {
                if ( v664 == 1 )
                {
                  v1623 = 0u;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  v836 = (__int64 *)operator new(0x20u);
                  std::string::basic_string<std::allocator<char>>(
                    v836,
                    "EXCEPTION_EXECUTE_HANDLER",
                    v837,
                    v838,
                    v839,
                    v840,
                    (int)v866,
                    v923,
                    v989);
                  v841 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
                  v842 = *(_BYTE *)v841;
                  v843 = *(_QWORD *)(v841 + 8);
                  *(_BYTE *)v841 = 3;
                  *(_QWORD *)(v841 + 8) = v836;
                  v1623.m128i_i8[0] = v842;
                  LOBYTE(v1579) = v1614;
                  v1623.m128i_i64[1] = v843;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                }
              }
              else
              {
                v1623 = 0u;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                v813 = (__int64 *)operator new(0x20u);
                std::string::basic_string<std::allocator<char>>(
                  v813,
                  "EXCEPTION_CONTINUE_SEARCH",
                  v814,
                  v815,
                  v816,
                  v817,
                  (int)v866,
                  v923,
                  v989);
                v818 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
                v819 = *(_BYTE *)v818;
                v820 = *(_QWORD *)(v818 + 8);
                *(_BYTE *)v818 = 3;
                *(_QWORD *)(v818 + 8) = v813;
                v1623.m128i_i8[0] = v819;
                LOBYTE(v1579) = v1614;
                v1623.m128i_i64[1] = v820;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              }
            }
            v665 = *((_QWORD *)frame_size + 6);
            if ( v665 != -1 )
            {
              v1614 = (char)v1579;
              v666 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v667 = *(_BYTE *)v666;
              v668 = *(_QWORD *)(v666 + 8);
              *(_BYTE *)v666 = 5;
              v669 = v1614;
              v1623.m128i_i8[0] = v667;
              *(_QWORD *)(v666 + 8) = v665;
              LOBYTE(v1579) = v669;
              v1623.m128i_i64[1] = v668;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
            v670 = *((_DWORD *)frame_size + 14);
            if ( v670 != -1 )
            {
              v671 = v670;
              v1614 = (char)v1579;
              v672 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v673 = *(_BYTE *)v672;
              v674 = *(_QWORD *)(v672 + 8);
              *(_BYTE *)v672 = 5;
              v675 = v1614;
              v1623.m128i_i8[0] = v673;
              *(_QWORD *)(v672 + 8) = v671;
              LOBYTE(v1579) = v675;
              v1623.m128i_i64[1] = v674;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
            v1623.m128i_i8[0] = 0;
            v1614 = (char)v1579;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
            v676 = v1623.m128i_i8[0];
            v677 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v678 = v1611;
            v679 = *(_BYTE *)v677;
            *(_BYTE *)v677 = v676;
            v680 = *(_QWORD *)(v677 + 8);
            LOBYTE(v1575) = v678;
            *(_QWORD *)(v677 + 8) = v1623.m128i_i64[1];
            v1623.m128i_i64[1] = v680;
            v1623.m128i_i8[0] = v679;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            goto LABEL_74;
          }
          v623 = 0;
          while ( 2 )
          {
            v650 = (char *)(*((_QWORD *)frame_size + 3) + 16 * v623);
            v1672[0] = 0;
            v1605[0] = v650;
            v1673.m128i_i64[0] = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v1672[0] = 3;
            v651 = (__int64 *)operator new(0x20u);
            v1586 = (__m128i)(unsigned __int64)v651;
            std::string::basic_string<std::allocator<char>>(
              v651,
              "start",
              v652,
              v653,
              v654,
              v655,
              (int)v866,
              v923,
              v989);
            v1673 = _mm_load_si128(&v1586);
            qsnprintf();
            v1664 = (char *)&v1665 + 8;
            v656 = strlen(v1706);
            v1623.m128i_i64[0] = v656;
            v657 = v656;
            if ( v656 > 0xF )
            {
              v1586.m128i_i64[0] = v656;
              v658 = (_QWORD *)std::string::_M_create();
              v1664 = v658;
              v657 = v1586.m128i_i32[0];
              *((_QWORD *)&v1665 + 1) = v1623.m128i_i64[0];
              goto LABEL_431;
            }
            if ( v656 == 1 )
            {
              BYTE8(v1665) = v1706[0];
              goto LABEL_419;
            }
            if ( v656 )
            {
              v658 = (_QWORD *)&v1665 + 1;
LABEL_431:
              if ( v657 >= 8 )
              {
                *v658 = *(_QWORD *)v1706;
                *(_QWORD *)((char *)v658 + v657 - 8) = *(_QWORD *)&v1705[v657];
                v713 = (unsigned __int64)(v658 + 1) & 0xFFFFFFFFFFFFFFF8LL;
                v714 = (char *)v658 - v713;
                v715 = (char *)(v1706 - v714);
                v716 = (v657 + (_DWORD)v714) & 0xFFFFFFF8;
                if ( v716 >= 8 )
                {
                  v717 = v1605[0];
                  v718 = v716 & 0xFFFFFFF8;
                  v719 = 0;
                  do
                  {
                    v720 = v719;
                    v719 += 8;
                    *(_QWORD *)(v713 + v720) = *(_QWORD *)&v715[v720];
                  }
                  while ( v719 < v718 );
                  v1605[0] = v717;
                }
              }
              else if ( (v657 & 4) != 0 )
              {
                *(_DWORD *)v658 = *(_DWORD *)v1706;
                *(_DWORD *)((char *)v658 + v657 - 4) = *(_DWORD *)&v1705[v657 + 4];
              }
              else if ( v657 )
              {
                *(_BYTE *)v658 = v1706[0];
                if ( (v657 & 2) != 0 )
                  *(_WORD *)((char *)v658 + v657 - 2) = *(_WORD *)&v1705[v657 + 6];
              }
              v656 = v1623.m128i_i64[0];
              v624 = (char *)v1664;
            }
            else
            {
LABEL_419:
              v624 = (char *)&v1665 + 8;
            }
            *(_QWORD *)&v1665 = v656;
            v624[v656] = 0;
            LOBYTE(v1674) = 0;
            *(_QWORD *)&v1675 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            LOBYTE(v1674) = 3;
            v625 = (_QWORD *)operator new(0x20u);
            v628 = (__int64)(v625 + 2);
            v629 = v625;
            v630 = (unsigned __int64)v625;
            v631 = v1665;
            *v625 = v625 + 2;
            if ( v1664 == (char *)&v1665 + 8 )
            {
              v703 = v631 + 1;
              if ( (unsigned int)(v631 + 1) >= 8 )
              {
                v625[2] = *((_QWORD *)&v1665 + 1);
                *(_QWORD *)(v628 + v703 - 8) = *(_QWORD *)((char *)&v1666[-2] + v703);
                v626 = (unsigned __int64)(v625 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                v627 = (char *)&v1666[-1] - (v628 - v626);
                if ( ((v703 + (_DWORD)v628 - (_DWORD)v626) & 0xFFFFFFF8) >= 8 )
                {
                  v721 = v1605[0];
                  v722 = (v703 + v628 - v626) & 0xFFFFFFF8;
                  LODWORD(v628) = 0;
                  do
                  {
                    v723 = (unsigned int)v628;
                    v628 = (unsigned int)(v628 + 8);
                    *(_QWORD *)(v626 + v723) = *(_QWORD *)&v627[v723];
                  }
                  while ( (unsigned int)v628 < v722 );
                  v1605[0] = v721;
                }
              }
              else if ( (v703 & 4) != 0 )
              {
                *((_DWORD *)v625 + 4) = DWORD2(v1665);
                *(_DWORD *)(v628 + v703 - 4) = *(_DWORD *)((char *)&v1666[-1] + v703 - 4);
              }
              else if ( (_DWORD)v631 != -1 )
              {
                *((_BYTE *)v625 + 16) = BYTE8(v1665);
                if ( (v703 & 2) != 0 )
                  *(_WORD *)(v628 + v703 - 2) = *(_WORD *)((char *)&v1666[-1] + v703 - 2);
              }
            }
            else
            {
              *v625 = v1664;
              v625[2] = *((_QWORD *)&v1665 + 1);
            }
            v629[1] = v631;
            v1664 = (char *)&v1665 + 8;
            *(_QWORD *)&v1665 = 0;
            BYTE8(v1665) = 0;
            v1675 = v630;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v1604,
              (__int64)v1588,
              2,
              v628,
              v626,
              (__int64)v627,
              v895,
              v960,
              v1026,
              v1048,
              v1091,
              v1135,
              (__int64)v1179,
              (int)v1228,
              (int)v1268,
              v1312,
              (int)v1356,
              v1399,
              v1443,
              v1486,
              v1529);
            LOBYTE(v1678) = 0;
            v1686 = 0;
            v1679.m128i_i64[0] = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            LOBYTE(v1678) = 3;
            v632 = (__int64 *)operator new(0x20u);
            v1586 = (__m128i)(unsigned __int64)v632;
            std::string::basic_string<std::allocator<char>>(v632, "end", v633, v634, v635, v636, v892, v957, v1023);
            v1679 = _mm_load_si128(&v1586);
            v1605[0] = s;
            qsnprintf();
            v1668 = (char *)&v1669 + 8;
            v637 = strlen(v1605[0]);
            v1623.m128i_i64[0] = v637;
            v638 = v637;
            if ( v637 > 0xF )
            {
              v682 = (char *)std::string::_M_create();
              v1668 = v682;
              *((_QWORD *)&v1669 + 1) = v1623.m128i_i64[0];
LABEL_473:
              if ( v638 >= 8 )
              {
                *(_QWORD *)v682 = *(_QWORD *)s;
                v705 = v1605[0];
                *(_QWORD *)&v682[v638 - 8] = *(_QWORD *)&v1605[0][v638 - 8];
                v706 = (unsigned __int64)(v682 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v707 = &v682[-v706];
                v708 = (char *)(v705 - v707);
                v709 = (v638 + (_DWORD)v707) & 0xFFFFFFF8;
                if ( v709 >= 8 )
                {
                  v710 = v709 & 0xFFFFFFF8;
                  v711 = 0;
                  do
                  {
                    v712 = v711;
                    v711 += 8;
                    *(_QWORD *)(v706 + v712) = *(_QWORD *)&v708[v712];
                  }
                  while ( v711 < v710 );
                }
              }
              else if ( (v638 & 4) != 0 )
              {
                *(_DWORD *)v682 = *(_DWORD *)s;
                *(_DWORD *)&v682[v638 - 4] = *(_DWORD *)&v1605[0][v638 - 4];
              }
              else if ( v638 )
              {
                *v682 = s[0];
                if ( (v638 & 2) != 0 )
                  *(_WORD *)&v682[v638 - 2] = *(_WORD *)&v1605[0][v638 - 2];
              }
              v637 = v1623.m128i_i64[0];
              v639 = v1668;
            }
            else
            {
              if ( v637 == 1 )
              {
                BYTE8(v1669) = s[0];
                goto LABEL_425;
              }
              if ( v637 )
              {
                v682 = (char *)&v1669 + 8;
                goto LABEL_473;
              }
LABEL_425:
              v639 = (char *)&v1669 + 8;
            }
            *(_QWORD *)&v1669 = v637;
            v639[v637] = 0;
            LOBYTE(v1680) = 0;
            *(_QWORD *)&v1681 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            LOBYTE(v1680) = 3;
            v640 = (_QWORD *)operator new(0x20u);
            v643 = (__int64)(v640 + 2);
            v644 = v640;
            v645 = (unsigned __int64)v640;
            v646 = v1669;
            *v640 = v640 + 2;
            if ( v1668 == (char *)&v1669 + 8 )
            {
              v704 = v646 + 1;
              if ( (unsigned int)(v646 + 1) >= 8 )
              {
                v640[2] = *((_QWORD *)&v1669 + 1);
                *(_QWORD *)(v643 + v704 - 8) = *(_QWORD *)((char *)&v1669 + v704);
                v641 = (unsigned __int64)(v640 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                v642 = (char *)&v1669 - (v643 - v641) + 8;
                if ( ((v704 + (_DWORD)v643 - (_DWORD)v641) & 0xFFFFFFF8) >= 8 )
                {
                  v724 = (v704 + v643 - v641) & 0xFFFFFFF8;
                  LODWORD(v643) = 0;
                  do
                  {
                    v725 = (unsigned int)v643;
                    v643 = (unsigned int)(v643 + 8);
                    *(_QWORD *)(v641 + v725) = *(_QWORD *)&v642[v725];
                  }
                  while ( (unsigned int)v643 < v724 );
                }
              }
              else if ( (v704 & 4) != 0 )
              {
                *((_DWORD *)v640 + 4) = DWORD2(v1669);
                *(_DWORD *)(v643 + v704 - 4) = *(_DWORD *)((char *)&v1669 + v704 + 4);
              }
              else if ( (_DWORD)v646 != -1 )
              {
                *((_BYTE *)v640 + 16) = BYTE8(v1669);
                if ( (v704 & 2) != 0 )
                  *(_WORD *)(v643 + v704 - 2) = *(_WORD *)((char *)&v1669 + v704 + 6);
              }
            }
            else
            {
              *v640 = v1668;
              v640[2] = *((_QWORD *)&v1669 + 1);
            }
            v644[1] = v646;
            v1668 = (char *)&v1669 + 8;
            *(_QWORD *)&v1669 = 0;
            BYTE8(v1669) = 0;
            v1681 = v645;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v1587,
              (__int64)v1591,
              2,
              v643,
              v641,
              (__int64)v642,
              v893,
              v958,
              v1024,
              v1074,
              v1117,
              v1161,
              v1205,
              v1250,
              v1294,
              v1338,
              v1382,
              v1425,
              v1469,
              v1512,
              v1556);
            v1689 = 0;
            v1623.m128i_i8[0] = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v1598,
              (__int64)v1604,
              2,
              v647,
              v648,
              v649,
              v894,
              v959,
              v1025,
              v1075,
              v1118,
              v1162,
              v1206,
              v1251,
              v1295,
              v1339,
              v1383,
              v1426,
              (__int64)v1604,
              2,
              v1557);
            v1616 = v622;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
            ++v623;
            v622 = v1616;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            std::string::_M_dispose();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            std::string::_M_dispose();
            if ( v623 >= *((_QWORD *)frame_size + 4) )
              goto LABEL_437;
            continue;
          }
        }
LABEL_74:
        v1610 = v1529;
        LOBYTE(v1611) = (_BYTE)v1575;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
        LOBYTE(v1529) = v1610;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( ++v1574.m128i_i64[0] >= (unsigned __int64)v1631.m256i_i64[0] )
          goto LABEL_75;
      }
    }
    v1598 = &v1623;
LABEL_75:
    v1623.m128i_i8[0] = 0;
    v1610 = v1529;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v224 = v1623.m128i_i8[0];
    v225 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v226 = v1623.m128i_i64[1];
    v227 = *(_BYTE *)v225;
    *(_BYTE *)v225 = v224;
    v228 = *(_QWORD *)(v225 + 8);
    *(_QWORD *)(v225 + 8) = v226;
    v1623.m128i_i8[0] = v227;
    v1623.m128i_i64[1] = v228;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v1623.m128i_i8[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v229 = v1623.m128i_i8[0];
    v1608[0].m128i_i8[0] = v1569;
    v1608[0].m128i_i64[1] = v1570;
    v230 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v231 = v1608[0].m128i_i8[0];
    v232 = *(_BYTE *)v230;
    *(_BYTE *)v230 = v229;
    v233 = *(_QWORD *)(v230 + 8);
    v1569 = v231;
    v1570 = v1608[0].m128i_i64[1];
    *(_QWORD *)(v230 + 8) = v1623.m128i_i64[1];
    v1623.m128i_i64[1] = v233;
    v1623.m128i_i8[0] = v232;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v234 = v1630;
  v1608[0].m128i_i8[0] = v1569;
  v1608[0].m128i_i64[1] = v1570;
  *v1179 = _mm_load_si128(v1608);
  if ( v234 )
  {
    v235 = v1631.m256i_i64[0];
    if ( v1631.m256i_i64[0] )
    {
      v236 = 0;
      v237 = 0;
      while ( 1 )
      {
        v1605[0] = &v234[v236];
        v238 = v234[v236 + 97];
        if ( v238 == 2 )
          break;
        if ( v238 == 1 )
        {
          if ( *((_QWORD *)v1605[0] + 8) )
          {
            *((_QWORD *)v1605[0] + 9) = 0;
            qfree();
          }
          if ( *((_QWORD *)v1605[0] + 3) )
            goto LABEL_153;
        }
LABEL_83:
        v239 = v1605[0];
        v240 = *(_QWORD *)v1605[0];
        v1605[0][97] = 0;
        if ( v240 )
        {
          *((_QWORD *)v239 + 1) = 0;
          ++v237;
          qfree();
          v234 = v1630;
          if ( v237 == v235 )
            goto LABEL_85;
        }
        else
        {
          ++v237;
          v234 = v1630;
          if ( v235 == v237 )
            goto LABEL_85;
        }
        v236 += 104;
      }
      v275 = *((_QWORD *)v1605[0] + 3);
      if ( !v275 )
        goto LABEL_83;
      v1604 = *((char **)v1605[0] + 4);
      if ( v1604 )
      {
        v276 = 0;
        v277 = nullptr;
        while ( 1 )
        {
          if ( *(_QWORD *)(v275 + v276) )
          {
            *(_QWORD *)(v275 + v276 + 8) = 0;
            ++v277;
            qfree();
            v275 = *((_QWORD *)v1605[0] + 3);
            if ( v1604 == v277 )
              break;
          }
          else if ( v1604 == ++v277 )
          {
            break;
          }
          v276 += 56;
        }
      }
LABEL_153:
      *((_QWORD *)v1605[0] + 4) = 0;
      qfree();
      goto LABEL_83;
    }
LABEL_85:
    v1631.m256i_i64[0] = 0;
    qfree();
  }
  if ( src[0] )
  {
    src[1] = nullptr;
    qfree();
  }
  if ( v1626 )
  {
    *(_QWORD *)&v1627 = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( v1621 )
  {
    *(_QWORD *)&v1622 = 0;
    qfree();
  }
  std::string::_M_dispose();
  return v1179;
}

