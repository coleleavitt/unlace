__int64 __fastcall sub_47560(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v8; // rax
  __int64 v9; // r13
  size_t v10; // rax
  void *v11; // r14
  size_t v12; // rbp
  _BYTE **v13; // r13
  _BYTE *v14; // rsi
  const char *v15; // r12
  __int64 v16; // rbp
  __int64 result; // rax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // r9
  _QWORD *v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rdi
  _WORD *v28; // rbp
  __int64 v29; // rsi
  void **v30; // r12
  __int64 *v31; // rdx
  char v32; // dl
  unsigned int v33; // edx
  __int64 *v34; // rcx
  unsigned int v35; // edx
  unsigned int v36; // edx
  unsigned int v37; // edx
  _QWORD *v38; // rcx
  unsigned int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rdi
  _DWORD *v42; // r8
  __int64 v43; // rsi
  __int64 v44; // rdi
  _DWORD *v45; // rdx
  unsigned int v46; // ecx
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // r8
  __int64 v50; // rsi
  __int64 v51; // rdi
  _DWORD *v52; // rdx
  unsigned int v53; // ecx
  __int64 v54; // rdx
  __int64 v55; // rdi
  __int64 v56; // r8
  __int64 v57; // rsi
  __int64 v58; // rdi
  _QWORD *v59; // rdx
  unsigned int v60; // edx
  __int64 *v61; // rcx
  __int64 v62; // rbp
  unsigned __int64 v63; // r12
  unsigned __int64 v64; // r12
  unsigned int v65; // ecx
  __int64 v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // r8
  _QWORD *v69; // rdx
  unsigned int v70; // ecx
  __int64 v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rdi
  _QWORD *v74; // rdx
  unsigned int v75; // ecx
  __int64 v76; // rdx
  __int64 v77; // rsi
  _DWORD *v78; // r8
  __int64 *v79; // rdx
  unsigned int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // rsi
  __int64 *v83; // r9
  __int64 v84; // rdi
  unsigned int v85; // r10d
  __int64 v86; // rsi
  __int64 (__fastcall *v87)(const char *, __int64, double); // rdi
  __int64 *v88; // rdx
  unsigned int v89; // ecx
  __int64 v90; // rdx
  __int64 v91; // rdi
  __int64 *v92; // r8
  __int64 v93; // rsi
  __int64 v94; // rdi
  _DWORD *v95; // rdx
  unsigned int v96; // ecx
  __int64 v97; // rdx
  __int64 v98; // rsi
  __int64 *v99; // rbx
  __int64 *v100; // rdx
  unsigned int v101; // ecx
  __int64 v102; // rdx
  __int64 v103; // rdi
  unsigned __int64 *v104; // rbp
  __int64 v105; // rsi
  __int64 v106; // r9
  __int64 v107; // rdi
  unsigned int v108; // r10d
  __int64 v109; // rsi
  __int64 (__fastcall *v110)(char *, __int64); // rdi
  __int64 *v111; // rdx
  unsigned int v112; // ecx
  __int64 v113; // rdx
  __int64 v114; // rdi
  _QWORD *v115; // r8
  __int64 v116; // rsi
  _WORD *v117; // rdi
  char **v118; // rdx
  unsigned int v119; // ecx
  __int64 v120; // rdx
  __int64 v121; // rsi
  _DWORD *v122; // rbx
  _BYTE **v123; // rdx
  unsigned int v124; // ecx
  __int64 v125; // rdx
  __int64 v126; // rsi
  __int64 v127; // r10
  __int64 v128; // rdi
  __int64 v129; // r11
  __int64 v130; // rsi
  unsigned int v131; // ebp
  __int64 v132; // rdi
  __int64 v133; // r8
  __int64 v134; // rsi
  __int64 v135; // r9
  __int64 *v136; // rdx
  unsigned int v137; // ecx
  __int64 v138; // rdx
  __int64 v139; // rsi
  __int64 *v140; // rbx
  __int64 *v141; // rdx
  unsigned int v142; // ecx
  unsigned int v143; // ecx
  unsigned int v144; // ecx
  __int64 v145; // rdx
  __int64 v146; // rsi
  _DWORD *v147; // rbx
  _QWORD *v148; // rdx
  unsigned int v149; // ecx
  __int64 v150; // rdx
  __int64 v151; // rsi
  __int64 v152; // r9
  __int64 v153; // rdi
  __int64 v154; // rsi
  int *v155; // rdx
  __int64 v156; // rax
  unsigned int v157; // ecx
  __int64 v158; // rdx
  __int64 v159; // rdi
  __int64 *v160; // r8
  __int64 v161; // rsi
  _QWORD *v162; // rdi
  __int64 *v163; // rdx
  unsigned int v164; // ecx
  __int64 v165; // rdx
  __int64 v166; // rdi
  unsigned int v167; // edx
  __int64 *v168; // rcx
  unsigned int v169; // edx
  __int64 *v170; // rcx
  unsigned int v171; // ecx
  __int64 v172; // rdx
  __int64 v173; // rdi
  const char *v174; // r9
  __int64 v175; // rsi
  int v176; // r10d
  __int64 v177; // rdi
  _QWORD *v178; // r11
  __int64 v179; // rsi
  __int64 *v180; // rbp
  _DWORD *v181; // rdx
  __int64 v182; // rax
  unsigned int v183; // edx
  __int64 *v184; // rcx
  unsigned int v185; // edx
  __int64 v186; // rcx
  __int16 v187; // ax
  unsigned int v188; // ecx
  __int64 v189; // rdx
  __int64 v190; // rsi
  __int64 v191; // rbp
  const char **v192; // rdx
  const char *v193; // r12
  unsigned int v194; // ecx
  __int64 v195; // rdx
  __int64 v196; // rsi
  __int64 v197; // r12
  _DWORD *v198; // rdx
  char v199; // bp
  unsigned int v200; // edx
  __int64 v201; // rcx
  __int64 v202; // rsi
  __int64 v203; // rdi
  __int64 v204; // r8
  __int64 v205; // rsi
  __int64 v206; // rbp
  __int64 *v207; // rcx
  __int64 v208; // r12
  unsigned int v209; // ecx
  __int64 v210; // rdx
  __int64 v211; // rsi
  _WORD *v212; // rdi
  __int64 *v213; // rdx
  unsigned int v214; // ecx
  __int64 v215; // rdx
  __int64 v216; // rsi
  int *v217; // rdi
  _DWORD **v218; // rdx
  _WORD *v219; // rax
  __int16 v220; // dx
  int v221; // edx
  unsigned int v222; // ecx
  __int64 v223; // rdx
  __int64 v224; // rsi
  __int64 v225; // r11
  __int64 v226; // rdi
  int v227; // esi
  __int64 v228; // r9
  __int64 v229; // r8
  __int64 v230; // rdi
  unsigned int *v231; // r9
  __int64 v232; // r10
  int v233; // edi
  __int64 **v234; // rdx
  unsigned int v235; // edx
  const char **v236; // rcx
  const char *v237; // rbp
  unsigned int v238; // edx
  __int64 v239; // rbp
  unsigned __int8 *v240; // r15
  __int64 v241; // r14
  char *v242; // r13
  char *v243; // r8
  unsigned __int64 v244; // r10
  __int64 v245; // r11
  __int64 v246; // rax
  __int64 v247; // r8
  __int64 v248; // r11
  __int64 v249; // rdx
  __int64 v250; // rcx
  _QWORD *v251; // r10
  __int64 v252; // rax
  char *v253; // rdi
  unsigned __int64 v254; // rbp
  void *v255; // r14
  void *v256; // r13
  char *v257; // r12
  unsigned int v258; // ecx
  __int64 v259; // rdx
  __int64 v260; // rsi
  __int64 v261; // rdi
  __int64 **v262; // rdx
  unsigned int v263; // edx
  __int64 *v264; // rcx
  unsigned int v265; // ecx
  __int64 v266; // rdx
  __int64 v267; // rsi
  __int64 v268; // rdi
  __int64 *v269; // rdx
  unsigned int v270; // edx
  _QWORD *v271; // rcx
  unsigned int v272; // ecx
  __int64 v273; // rdx
  __int64 v274; // rsi
  int v275; // ebp
  int *v276; // rdx
  int v277; // r12d
  void *v278; // rax
  unsigned int v279; // edx
  __int64 v280; // rcx
  __int64 v281; // rdi
  __int64 v282; // r8
  __int64 v283; // rsi
  __int64 v284; // r9
  _QWORD **v285; // rcx
  int v286; // r12d
  __int64 *v287; // rax
  __int64 v288; // r14
  __int64 v289; // rbx
  unsigned int v290; // ecx
  __int64 v291; // rdx
  __int64 v292; // rsi
  __int64 v293; // rbp
  __int64 v294; // rdi
  void *v295; // r12
  __int64 v296; // rsi
  bool v297; // r13
  _QWORD **v298; // rdx
  _QWORD *v299; // r14
  unsigned int v300; // ecx
  unsigned int v301; // ecx
  unsigned int v302; // ecx
  __int64 v303; // rdx
  __int64 v304; // rsi
  __int64 *v305; // rdi
  __int64 *v306; // rdx
  unsigned int v307; // edx
  _QWORD *func; // rax
  __int64 v309; // rcx
  __int64 v310; // r8
  __int64 v311; // r9
  unsigned int v312; // edx
  __int64 *v313; // rcx
  __int64 v314; // rdx
  __int64 v315; // rcx
  __int64 v316; // r8
  __int64 v317; // r9
  __int64 v318; // rdx
  __int64 v319; // rcx
  __int64 v320; // r8
  __int64 v321; // r9
  unsigned int v322; // edx
  _QWORD *v323; // rcx
  unsigned int v324; // ecx
  __int64 v325; // rdx
  __int64 v326; // rdi
  __int64 *v327; // r8
  __int64 v328; // rsi
  unsigned __int64 *v329; // rdi
  __int64 **v330; // rdx
  unsigned int v331; // edx
  __int64 *v332; // rcx
  unsigned int v333; // edx
  _QWORD **v334; // rcx
  unsigned int v335; // edx
  unsigned __int16 **v336; // rcx
  __m128i v337; // xmm1
  __int64 v338; // rdx
  __int64 v339; // rcx
  __int64 v340; // r8
  __int64 v341; // r9
  __int64 v342; // rdx
  __int64 v343; // rcx
  __int64 v344; // r8
  __int64 v345; // r9
  __m128i v346; // xmm6
  __int64 v347; // r8
  __int64 v348; // r9
  __int64 v349; // rdx
  __int64 v350; // rcx
  __int64 v351; // r8
  __int64 v352; // r9
  unsigned int v353; // edx
  _QWORD **v354; // rcx
  unsigned int v355; // edx
  char **v356; // rcx
  char *v357; // rbx
  char v358; // al
  char v359; // cl
  unsigned int v360; // edx
  __int64 *v361; // rcx
  unsigned int v362; // ecx
  __int64 v363; // rdx
  __int64 v364; // rdi
  _DWORD *v365; // rbp
  __int64 v366; // rsi
  __int64 v367; // rdi
  __int64 *v368; // rdx
  unsigned int v369; // edx
  __int64 **v370; // rcx
  __int64 *v371; // r12
  __int64 v372; // r13
  __int64 sreg; // rbp
  unsigned int v374; // edx
  __int64 *v375; // rcx
  __int64 v376; // r13
  __int64 flags; // r12
  unsigned int v378; // ecx
  __int64 v379; // rdx
  __int64 v380; // rsi
  __int64 *v381; // r8
  __int64 v382; // rdi
  unsigned int v383; // r9d
  __int64 v384; // rsi
  unsigned __int64 v385; // rdi
  unsigned int *v386; // rdx
  unsigned int v387; // edx
  __int64 *v388; // rcx
  unsigned int v389; // edx
  __int64 *v390; // rcx
  unsigned int v391; // ecx
  __int64 v392; // rdx
  __int64 v393; // rsi
  __int64 v394; // r8
  __int64 v395; // rdi
  __int64 v396; // r9
  __int64 v397; // rsi
  __int64 v398; // rdi
  _QWORD *v399; // rdx
  unsigned int v400; // edx
  __int64 **v401; // rcx
  unsigned int v402; // ecx
  __int64 v403; // rdx
  __int64 v404; // rsi
  __int64 v405; // rdi
  unsigned __int8 *v406; // rdx
  unsigned int v407; // edx
  __int64 v408; // rcx
  unsigned __int64 v409; // rax
  __int64 v410; // rdx
  unsigned int v411; // ecx
  __int64 v412; // rdx
  __int64 v413; // rsi
  __int64 v414; // rdi
  _QWORD *v415; // rdx
  unsigned int v416; // edx
  __int64 *v417; // rcx
  unsigned int v418; // edx
  __int64 *v419; // rcx
  __int64 v420; // rdx
  unsigned int v421; // ecx
  __int64 v422; // rdx
  unsigned __int64 v423; // rbx
  unsigned int v424; // edx
  __int64 v425; // rcx
  __int64 v426; // rsi
  _QWORD *v427; // rcx
  unsigned int v428; // ecx
  __int64 v429; // rdx
  __int64 v430; // rsi
  _DWORD *v431; // rdi
  __int64 *v432; // rdx
  unsigned int v433; // ecx
  __int64 v434; // rdx
  __int64 v435; // rdi
  __int64 v436; // rsi
  __int64 *v437; // rdx
  __int64 v438; // rdx
  unsigned int v439; // esi
  __int64 v440; // rcx
  __int64 v441; // rdx
  __int64 v442; // r8
  __int64 v443; // rdi
  _BYTE *v444; // rdx
  unsigned int *v445; // rcx
  __int64 v446; // rcx
  unsigned int v447; // ecx
  __int64 v448; // rdx
  __int64 v449; // rsi
  __int64 v450; // rdi
  __int64 v451; // r8
  __int64 v452; // rsi
  unsigned int *v453; // rdx
  unsigned int v454; // edx
  __int64 *v455; // rcx
  __int64 v456; // rbp
  char v457; // dl
  unsigned int v458; // eax
  unsigned int v459; // ecx
  __int64 v460; // rdx
  __int64 v461; // rdi
  __int64 v462; // r8
  __int64 v463; // rsi
  __int64 v464; // rdi
  _DWORD *v465; // rdx
  unsigned int v466; // ecx
  __int64 v467; // rdx
  __int64 v468; // rsi
  __int64 v469; // rbx
  int *v470; // rdx
  int v471; // eax
  __int64 v472; // rdx
  unsigned int v473; // ecx
  __int64 v474; // rdx
  __int64 v475; // rsi
  __int64 v476; // r9
  __int64 v477; // rdi
  __int64 v478; // r10
  __int64 v479; // rsi
  __int64 v480; // rdi
  _DWORD *v481; // rdx
  unsigned int v482; // ecx
  __int64 v483; // rdx
  __int64 v484; // rdi
  __int64 *v485; // r8
  __int64 *v486; // rdi
  unsigned int v487; // ecx
  __int64 v488; // rdx
  __int64 v489; // rdi
  __int64 v490; // r8
  __int64 v491; // rsi
  __int64 v492; // rdi
  _QWORD *v493; // rdx
  unsigned int v494; // ecx
  __int64 v495; // rdx
  __int64 v496; // rdi
  _DWORD *v497; // rbp
  __int64 v498; // rsi
  __int64 v499; // rdi
  _QWORD *v500; // rdx
  unsigned int v501; // ecx
  __int64 v502; // rdx
  __int64 v503; // rsi
  __int64 v504; // rbp
  _QWORD *v505; // rdx
  __int64 v506; // r12
  char v507; // dl
  unsigned int v508; // eax
  unsigned int v509; // ecx
  __int64 v510; // rdx
  __int64 v511; // rsi
  __int64 v512; // rdi
  unsigned int *v513; // rdx
  bool v514; // zf
  unsigned int v515; // edx
  _QWORD *v516; // rcx
  __int64 **v517; // rcx
  __int64 *v518; // rcx
  __int64 *v519; // rdx
  __int64 *v520; // rcx
  _QWORD **v521; // rdx
  _WORD **v522; // rcx
  __int64 *v523; // rcx
  __int64 *v524; // rdx
  unsigned int *v525; // rcx
  unsigned int *v526; // rdx
  __int64 *v527; // rcx
  __int64 *v528; // rcx
  _DWORD *v529; // rdx
  __int64 *v530; // rcx
  unsigned int **v531; // rdx
  _DWORD *v532; // rcx
  __int64 *v533; // rcx
  void **v534; // rdx
  _DWORD *v535; // rcx
  __int64 *v536; // rcx
  _QWORD *v537; // rdx
  __int64 v538; // rdx
  __int64 *v539; // rdx
  __int64 *v540; // rcx
  _QWORD *v541; // rdx
  _QWORD *v542; // rcx
  __int64 **v543; // rcx
  _DWORD *v544; // rdx
  __int64 (__fastcall **v545)(const char *, __int64, double); // rcx
  _QWORD *v546; // rcx
  __int64 *v547; // rcx
  __int64 *v548; // rcx
  __int64 *v549; // rcx
  __int64 *v550; // rdx
  __int64 *v551; // rdx
  _QWORD *v552; // rcx
  __int64 v553; // rcx
  __int64 v554; // rdx
  int **v555; // rcx
  const char **v556; // rcx
  const char **v557; // rdx
  _WORD **v558; // rcx
  __int64 **v559; // rdx
  _QWORD **v560; // rcx
  _QWORD *v561; // rdx
  _QWORD *v562; // rcx
  _BYTE **v563; // rdx
  __int64 *v564; // rcx
  __int64 *v565; // rdx
  _QWORD *v566; // rcx
  _DWORD **v567; // rdx
  __int64 *v568; // rcx
  _DWORD **v569; // rcx
  __int64 *v570; // rdx
  __int64 *v571; // rcx
  __int64 *v572; // rcx
  int *v573; // rcx
  const char **v574; // rdx
  int *v575; // rcx
  _QWORD **v576; // rdx
  _QWORD **v577; // rcx
  __int64 **v578; // rdx
  unsigned __int64 **v579; // rcx
  __int64 **v580; // rcx
  unsigned int *v581; // rdx
  unsigned __int64 *v582; // rcx
  _DWORD **v583; // rdx
  __int64 *v584; // rcx
  __int64 v585; // rcx
  __int64 v586; // rdx
  int v587; // ebp
  __int64 item_end; // rbp
  char v589; // al
  __int64 *v590; // rcx
  __int64 *v591; // rcx
  __int64 *v592; // rdx
  __int64 *v593; // rcx
  _WORD **v594; // rdx
  void ***v595; // rcx
  __int64 *v596; // rdx
  __int64 *v597; // rcx
  __int64 **v598; // rdx
  __int64 *v599; // rcx
  _QWORD **v600; // rcx
  _QWORD **v601; // rcx
  _DWORD **v602; // rcx
  __int64 *v603; // rcx
  _QWORD **v604; // rdx
  __int64 *v605; // rcx
  _DWORD *v606; // rdx
  __int64 (__fastcall **v607)(char *, __int64); // rcx
  __int64 *v608; // rdx
  _QWORD *v609; // rcx
  __int64 *v610; // rcx
  _QWORD *v611; // rcx
  _QWORD *v612; // rdx
  _DWORD **v613; // rcx
  __int64 *v614; // rcx
  _DWORD **v615; // rcx
  __int64 v616; // rdx
  const char *v617; // rsi
  const char *v618; // rbx
  __int64 **v619; // rdx
  __int64 **v620; // rcx
  __int64 **v621; // rdx
  __int64 *v622; // rdx
  __int64 *v623; // rcx
  __int64 *v624; // rcx
  __int64 *v625; // rcx
  __int64 *v626; // rcx
  __int64 *v627; // rdx
  _DWORD **v628; // rdx
  __int64 *v629; // rcx
  int v630; // eax
  void *v631; // rax
  char v632; // dl
  const void *v633; // r14
  const void *v634; // r14
  __int16 v635; // ax
  __m128i v636; // [rsp+0h] [rbp-248h] BYREF
  __m128i v637; // [rsp+10h] [rbp-238h] BYREF
  int v638; // [rsp+20h] [rbp-228h]
  char *v639; // [rsp+28h] [rbp-220h]
  __int64 v640; // [rsp+30h] [rbp-218h]
  unsigned __int64 v641; // [rsp+38h] [rbp-210h]
  void *s1[3]; // [rsp+40h] [rbp-208h] BYREF
  __int64 v643; // [rsp+58h] [rbp-1F0h]
  _BYTE v644[20]; // [rsp+60h] [rbp-1E8h]
  int v645; // [rsp+74h] [rbp-1D4h]
  __int64 v646; // [rsp+78h] [rbp-1D0h]
  __int128 v647; // [rsp+80h] [rbp-1C8h]
  __int64 v648; // [rsp+90h] [rbp-1B8h]
  __int64 v649; // [rsp+98h] [rbp-1B0h]
  __int64 v650; // [rsp+A0h] [rbp-1A8h]
  __int64 v651; // [rsp+A8h] [rbp-1A0h] BYREF
  int v652; // [rsp+B0h] [rbp-198h]
  int v653; // [rsp+B8h] [rbp-190h]
  int v654; // [rsp+C0h] [rbp-188h]
  __int64 v655; // [rsp+C8h] [rbp-180h]
  __int64 v656; // [rsp+D0h] [rbp-178h]
  int v657; // [rsp+D8h] [rbp-170h]
  int v658; // [rsp+E0h] [rbp-168h]
  int v659; // [rsp+E8h] [rbp-160h]
  __int64 v660; // [rsp+F0h] [rbp-158h]
  __int64 v661; // [rsp+F8h] [rbp-150h]
  int v662; // [rsp+100h] [rbp-148h]
  int v663; // [rsp+108h] [rbp-140h]
  int v664; // [rsp+110h] [rbp-138h]
  int v665; // [rsp+118h] [rbp-130h]
  int v666; // [rsp+120h] [rbp-128h]
  int v667; // [rsp+128h] [rbp-120h]
  int v668; // [rsp+130h] [rbp-118h]
  int v669; // [rsp+138h] [rbp-110h]
  __int64 v670; // [rsp+140h] [rbp-108h]
  char v671; // [rsp+1E8h] [rbp-60h] BYREF
  char s[24]; // [rsp+1F0h] [rbp-58h] BYREF
  unsigned __int64 v673; // [rsp+208h] [rbp-40h]

  v673 = __readfsqword(0x28u);
  v8 = a3;
  if ( a2 <= 100 )
  {
    if ( a2 < 0 )
      return 0;
    switch ( a2 )
    {
      case 0LL:
        v636 = _mm_unpacklo_epi64(
                 _mm_loadl_epi64((const __m128i *)off_A1AA8),
                 (__m128i)(unsigned __int64)"Force BL ~j~ump");
        v637 = _mm_unpacklo_epi64(
                 _mm_loadl_epi64((const __m128i *)off_A1AA0),
                 (__m128i)(unsigned __int64)"~F~orce BL call");
        netnode_check();
        sub_21940((_QWORD *)a1, a7);
        *(_QWORD *)(a1 + 616) = sub_81C80(a1, " $arm");
        sub_59150(a1);
        v337 = _mm_load_si128(&v636);
        HIDWORD(s1[0]) = 0;
        *(_OWORD *)&v644[4] = 0;
        v643 = a1 + 472;
        *(_DWORD *)(a1 + 512) = 8;
        v645 = 0;
        LODWORD(s1[0]) = 64;
        *(_QWORD *)v644 = a1;
        v646 = 0x8FFFFFFFFLL;
        *(__m128i *)&s1[1] = v337;
        if ( (unsigned __int8)callui(
                                127,
                                s1,
                                v338,
                                v339,
                                v340,
                                v341,
                                s1,
                                v636.m128i_i64[1],
                                v637.m128i_i64[0],
                                v637.m128i_i64[1])
          && !(unsigned __int8)callui(
                                 129,
                                 "Edit/Other/Create",
                                 "arm:ForceBLJump",
                                 0,
                                 v344,
                                 v345,
                                 v636.m128i_i64[0],
                                 v636.m128i_i64[1],
                                 v637.m128i_i64[0],
                                 v637.m128i_i64[1]) )
        {
          callui(
            128,
            "arm:ForceBLJump",
            v342,
            v343,
            v344,
            v345,
            v636.m128i_i64[0],
            v636.m128i_i64[1],
            v637.m128i_i64[0],
            v637.m128i_i64[1]);
        }
        v346 = _mm_load_si128(&v637);
        v645 = 0;
        v643 = a1 + 488;
        *(_OWORD *)&v644[4] = 0;
        s1[0] = &dword_40;
        *(_QWORD *)v644 = a1;
        v646 = 0x8FFFFFFFFLL;
        *(__m128i *)&s1[1] = v346;
        if ( (unsigned __int8)callui(
                                127,
                                v636.m128i_i64[0],
                                v342,
                                v343,
                                v344,
                                v345,
                                v636.m128i_i64[0],
                                v636.m128i_i64[1],
                                v637.m128i_i64[0],
                                v637.m128i_i64[1]) )
        {
          if ( !(unsigned __int8)callui(
                                   129,
                                   "Edit/Other/Create",
                                   "arm:ForceBLCall",
                                   0,
                                   v347,
                                   v348,
                                   v636.m128i_i64[0],
                                   v636.m128i_i64[1],
                                   v637.m128i_i64[0],
                                   v637.m128i_i64[1]) )
            callui(
              128,
              "arm:ForceBLCall",
              v349,
              v350,
              v351,
              v352,
              v636.m128i_i64[0],
              v636.m128i_i64[1],
              v637.m128i_i64[0],
              v637.m128i_i64[1]);
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
          v314,
          v315,
          v316,
          v317,
          v636.m128i_i64[0],
          v636.m128i_i64[1],
          v637.m128i_i64[0],
          v637.m128i_i64[1]);
        callui(
          128,
          "arm:ForceBLCall",
          v318,
          v319,
          v320,
          v321,
          v636.m128i_i64[0],
          v636.m128i_i64[1],
          v637.m128i_i64[0],
          v637.m128i_i64[1]);
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
        v272 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v573 = *(int **)(a3 + 8);
          v276 = v573 + 2;
          *(_QWORD *)(v8 + 8) = v573 + 2;
          v275 = *v573;
        }
        else
        {
          v273 = *(_QWORD *)(a3 + 16);
          v274 = v272 + 8;
          *(_DWORD *)v8 = v274;
          v275 = *(_DWORD *)(v273 + v272);
          if ( (unsigned int)v274 <= 0x2F )
          {
            v276 = (int *)(v274 + v273);
            *(_DWORD *)v8 = v272 + 16;
            goto LABEL_295;
          }
          v276 = *(int **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v276 + 2;
LABEL_295:
        v277 = *v276;
        if ( !*v276 )
          setinf_flag();
        if ( (unsigned __int8)getinf_flag() || (getinf() & 0x1006) == 0x1002 )
        {
          v278 = nullptr;
        }
        else
        {
          v514 = (unsigned __int8)getinf_flag() == 0;
          v278 = &unk_A1A80;
          if ( !v514 )
            v278 = &unk_A1A40;
        }
        a3 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a3 + 88) = v278;
        if ( !v275 || v275 > 2 )
        {
          v617 = "ARMv4T";
          if ( v275 )
            v617 = "XScale";
          if ( (unsigned __int8)sub_56980(a1 + 192, v617) )
            sub_55330(a1 + 192);
          if ( !v277 )
          {
            v618 = "ARMB";
            if ( !(unsigned __int8)getinf_flag() )
              v618 = "ARM";
            strlen(v618);
            setinf_buf();
          }
          return 0;
        }
        if ( !*(_BYTE *)(a1 + 516) )
          return 0;
        goto LABEL_302;
      case 4LL:
        v238 = *(_DWORD *)a3;
        if ( v238 > 0x2F )
          *(_QWORD *)(v8 + 8) += 8LL;
        else
          *(_DWORD *)v8 = v238 + 8;
        v239 = *(_QWORD *)(a1 + 16);
        if ( (unsigned int)getinf() == 2 )
        {
          if ( get_last_seg() )
          {
            if ( (*(_BYTE *)(v239 + 9) & 0x20) != 0 )
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
        if ( (unsigned int)getinf() == 2 )
        {
          if ( (unsigned __int8)getinf_flag() || (getinf() & 0x1006) == 0x1002 )
          {
            v631 = nullptr;
          }
          else
          {
            v632 = getinf_flag();
            v631 = &unk_A1A80;
            if ( v632 )
              v631 = &unk_A1A40;
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL) = v631;
        }
        if ( (getinf() & 2) != 0 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL) && !(unsigned __int8)is_debugger_on() )
        {
          v240 = *(unsigned __int8 **)(*(_QWORD *)(a1 + 16) + 88LL);
          v636.m128i_i64[0] = (__int64)s1;
          if ( !*v240 )
          {
LABEL_553:
            sub_331D0();
            goto LABEL_554;
          }
LABEL_255:
          getinf();
          while ( 1 )
          {
            v241 = *v240;
            v242 = *((char **)v240 + 1);
            getinf();
            memset(s1, 0, sizeof(s1));
            s1[0] = (void *)qvector_reserve();
            v243 = (char *)s1[0] + 80 * (__int64)s1[1];
            *(_QWORD *)v243 = 0;
            *((_QWORD *)v243 + 3) = 0;
            *((_QWORD *)v243 + 6) = 0;
            *((_DWORD *)v243 + 18) = -1;
            *(_OWORD *)(v243 + 8) = 0;
            *((_OWORD *)v243 + 2) = 0;
            *(_OWORD *)(v243 + 56) = 0;
            ++s1[1];
            if ( !v241 )
              goto LABEL_263;
            v244 = *((_QWORD *)v243 + 1);
            v245 = v244 + v241;
            if ( __CFADD__(v244, v241) )
            {
              if ( v244 > 0x7FFFFFFFFFFFFFFELL )
              {
                if ( v244 != 0x7FFFFFFFFFFFFFFFLL )
                  *((_QWORD *)v243 + 1) = 0x7FFFFFFFFFFFFFFFLL;
                goto LABEL_259;
              }
              v245 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v641 = *((_QWORD *)v243 + 1);
            v640 = v245;
            v637.m128i_i64[0] = (__int64)v243;
            v246 = qvector_reserve();
            v247 = v637.m128i_i64[0];
            v248 = v640;
            v249 = *(_QWORD *)(v637.m128i_i64[0] + 8);
            v250 = v640;
            *(_QWORD *)v637.m128i_i64[0] = v246;
            v639 = (char *)v247;
            v637.m128i_i64[0] = v248;
            memset((void *)(v246 + v249), 0, v250 - v249);
            v243 = v639;
            v244 = v641;
            *((_QWORD *)v639 + 1) = v637.m128i_i64[0];
LABEL_259:
            v251 = (_QWORD *)(*(_QWORD *)v243 + v244);
            if ( (unsigned int)v241 >= 8 )
            {
              *v251 = *(_QWORD *)v242;
              *(_QWORD *)((char *)v251 + v241 - 8) = *(_QWORD *)&v242[v241 - 8];
              qmemcpy(
                (void *)((unsigned __int64)(v251 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                (const void *)(v242 - ((char *)v251 - ((unsigned __int64)(v251 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                8LL * (((unsigned int)v241 + (_DWORD)v251 - (((_DWORD)v251 + 8) & 0xFFFFFFF8)) >> 3));
            }
            else if ( (v241 & 4) != 0 )
            {
              *(_DWORD *)v251 = *(_DWORD *)v242;
              *(_DWORD *)((char *)v251 + v241 - 4) = *(_DWORD *)&v242[v241 - 4];
            }
            else
            {
              *(_BYTE *)v251 = *v242;
              if ( (v241 & 2) != 0 )
                *(_WORD *)((char *)v251 + v241 - 2) = *(_WORD *)&v242[v241 - 2];
            }
LABEL_263:
            v252 = bin_search();
            v253 = (char *)s1[0];
            v254 = v252;
            if ( s1[0] )
            {
              v255 = s1[1];
              if ( s1[1] )
              {
                v256 = nullptr;
                do
                {
                  v257 = &v253[80 * (_QWORD)v256];
                  if ( *((_QWORD *)v257 + 6) )
                  {
                    *((_QWORD *)v257 + 7) = 0;
                    qfree();
                  }
                  if ( *((_QWORD *)v257 + 3) )
                  {
                    *((_QWORD *)v257 + 4) = 0;
                    qfree();
                  }
                  if ( *(_QWORD *)v257 )
                  {
                    *((_QWORD *)v257 + 1) = 0;
                    qfree();
                  }
                  v256 = (char *)v256 + 1;
                  v253 = (char *)s1[0];
                }
                while ( v255 != v256 );
              }
              s1[1] = nullptr;
              qfree();
            }
            if ( v254 >= getinf() )
            {
              v240 += 16;
              if ( !*v240 )
                goto LABEL_553;
              goto LABEL_255;
            }
            split_sreg_range();
          }
        }
        v636.m128i_i64[0] = (__int64)s1;
LABEL_554:
        if ( !(unsigned __int8)getinf_flag() && (getinf() & 0x1006) != 0x1002 )
          sub_437F0((__int64)&unk_88760, 4);
        *(_BYTE *)(a1 + 516) = 1;
        netnode_supdel_all();
        s1[0] = (void *)*(unsigned __int16 *)(a1 + 184);
        netnode_supset();
        sub_47200(a1, -1);
        return 0;
      case 5LL:
        goto LABEL_15;
      case 8LL:
        v171 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v574 = *(const char ***)(a3 + 8);
          v575 = (int *)(v574 + 1);
          *(_QWORD *)(v8 + 8) = v574 + 1;
          v174 = *v574;
        }
        else
        {
          v172 = *(_QWORD *)(a3 + 16);
          v173 = v171 + 8;
          *(_DWORD *)v8 = v173;
          v174 = *(const char **)(v172 + v171);
          if ( (unsigned int)v173 <= 0x2F )
          {
            v175 = v171 + 16;
            *(_DWORD *)v8 = v175;
            v176 = *(_DWORD *)(v172 + v173);
            if ( (unsigned int)v175 <= 0x2F )
            {
              v177 = v171 + 24;
              *(_DWORD *)v8 = v177;
              v178 = *(_QWORD **)(v172 + v175);
              if ( (unsigned int)v177 <= 0x2F )
              {
                v179 = v171 + 32;
                *(_DWORD *)v8 = v179;
                v180 = *(__int64 **)(v172 + v177);
                if ( (unsigned int)v179 <= 0x2F )
                {
                  v181 = (_DWORD *)(v179 + v172);
                  *(_DWORD *)v8 = v171 + 40;
                  goto LABEL_180;
                }
                v181 = *(_DWORD **)(v8 + 8);
LABEL_667:
                *(_QWORD *)(v8 + 8) = v181 + 2;
LABEL_180:
                v182 = sub_46B10(a1, v174, v176, v178, *v181 != 0);
                if ( v182 )
                {
                  if ( v180 )
                    *v180 = v182;
                  return -1;
                }
                return 1;
              }
              v577 = *(_QWORD ***)(v8 + 8);
LABEL_666:
              v181 = v577 + 1;
              *(_QWORD *)(v8 + 8) = v577 + 1;
              v180 = *v577;
              goto LABEL_667;
            }
            v576 = *(_QWORD ***)(v8 + 8);
LABEL_665:
            v577 = v576 + 1;
            *(_QWORD *)(v8 + 8) = v576 + 1;
            v178 = *v576;
            goto LABEL_666;
          }
          v575 = *(int **)(v8 + 8);
        }
        v576 = (_QWORD **)(v575 + 2);
        *(_QWORD *)(v8 + 8) = v575 + 2;
        v176 = *v575;
        goto LABEL_665;
      case 9LL:
        v235 = *(_DWORD *)a3;
        if ( v235 > 0x2F )
        {
          v556 = *(const char ***)(v8 + 8);
          v557 = v556 + 1;
          *(_QWORD *)(v8 + 8) = v556 + 1;
          v237 = *v556;
        }
        else
        {
          v236 = (const char **)(*(_QWORD *)(v8 + 16) + v235);
          *(_DWORD *)v8 = v235 + 8;
          v237 = *v236;
          if ( v235 + 8 <= 0x2F )
          {
            *(_DWORD *)v8 = v235 + 16;
            goto LABEL_239;
          }
          v557 = *(const char ***)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v557 + 1;
LABEL_239:
        if ( !(unsigned __int8)sub_570D0(a1 + 192, v237) )
          return -1;
        sub_55330(a1 + 192);
        if ( *(int *)(a1 + 192) <= 13 || *(_DWORD *)(a1 + 196) == 77 )
        {
          setinf_flag();
          *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) &= 0xEFFFDFFF;
        }
        if ( !strcmp(v237, "ARMv7") && ((unsigned int)getinf() == 11 || (unsigned int)getinf() == 10) )
          setinf_flag();
        return 0;
      case 10LL:
        v263 = *(_DWORD *)a3;
        if ( v263 > 0x2F )
        {
          v264 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v264 + 1;
        }
        else
        {
          v264 = (__int64 *)(*(_QWORD *)(v8 + 16) + v263);
          *(_DWORD *)v8 = v263 + 8;
        }
        return (int)sub_21660(a1, *v264);
      case 11LL:
        v335 = *(_DWORD *)a3;
        if ( v335 > 0x2F )
        {
          v336 = *(unsigned __int16 ***)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v336 + 1;
        }
        else
        {
          v336 = (unsigned __int16 **)(*(_QWORD *)(v8 + 16) + v335);
          *(_DWORD *)v8 = v335 + 8;
        }
        if ( !(unsigned int)sub_364C0(a1, *v336) )
          return -1;
        return 1;
      case 12LL:
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
        sub_3B760(a1, *v170);
        return 1;
      case 13LL:
        v167 = *(_DWORD *)a3;
        if ( v167 > 0x2F )
        {
          v168 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v168 + 1;
        }
        else
        {
          v168 = (__int64 *)(*(_QWORD *)(v8 + 16) + v167);
          *(_DWORD *)v8 = v167 + 8;
        }
        sub_3B7D0(a1, *v168);
        return 1;
      case 14LL:
        v258 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v603 = *(__int64 **)(a3 + 8);
          v262 = (__int64 **)(v603 + 1);
          *(_QWORD *)(v8 + 8) = v603 + 1;
          v261 = *v603;
        }
        else
        {
          v259 = *(_QWORD *)(a3 + 16);
          v260 = v258 + 8;
          *(_DWORD *)v8 = v260;
          v261 = *(_QWORD *)(v259 + v258);
          if ( (unsigned int)v260 <= 0x2F )
          {
            v262 = (__int64 **)(v260 + v259);
            *(_DWORD *)v8 = v258 + 16;
            goto LABEL_279;
          }
          v262 = *(__int64 ***)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v262 + 1;
LABEL_279:
        sub_3AF50(a1, v261, *v262);
        return 1;
      case 15LL:
        v164 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v549 = *(__int64 **)(a3 + 8);
          v550 = v549 + 1;
          *(_QWORD *)(v8 + 8) = v549 + 1;
          v166 = *v549;
        }
        else
        {
          v165 = *(_QWORD *)(a3 + 16);
          *(_DWORD *)v8 = v164 + 8;
          v166 = *(_QWORD *)(v165 + v164);
          if ( v164 + 8 <= 0x2F )
          {
            *(_DWORD *)v8 = v164 + 16;
            goto LABEL_167;
          }
          v550 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v550 + 1;
LABEL_167:
        sub_3B480(a1, v166);
        return 1;
      case 16LL:
        v389 = *(_DWORD *)a3;
        if ( v389 > 0x2F )
        {
          v390 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v390 + 1;
        }
        else
        {
          v390 = (__int64 *)(*(_QWORD *)(v8 + 16) + v389);
          *(_DWORD *)v8 = v389 + 8;
        }
        sub_3B590(a1, *v390);
        return 1;
      case 17LL:
        v387 = *(_DWORD *)a3;
        if ( v387 > 0x2F )
        {
          v388 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v388 + 1;
        }
        else
        {
          v388 = (__int64 *)(*(_QWORD *)(v8 + 16) + v387);
          *(_DWORD *)v8 = v387 + 8;
        }
        sub_3E390(*v388);
        return 1;
      case 18LL:
        v400 = *(_DWORD *)a3;
        if ( v400 > 0x2F )
        {
          v401 = *(__int64 ***)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v401 + 1;
        }
        else
        {
          v401 = (__int64 **)(*(_QWORD *)(v8 + 16) + v400);
          *(_DWORD *)v8 = v400 + 8;
        }
        sub_40130(*v401);
        return 1;
      case 19LL:
        v209 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v558 = *(_WORD ***)(a3 + 8);
          v213 = (__int64 *)(v558 + 1);
          *(_QWORD *)(v8 + 8) = v558 + 1;
          v212 = *v558;
        }
        else
        {
          v210 = *(_QWORD *)(a3 + 16);
          v211 = v209 + 8;
          *(_DWORD *)v8 = v211;
          v212 = *(_WORD **)(v210 + v209);
          if ( (unsigned int)v211 <= 0x2F )
          {
            v213 = (__int64 *)(v211 + v210);
            *(_DWORD *)v8 = v209 + 16;
            goto LABEL_217;
          }
          v213 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v213 + 1;
LABEL_217:
        if ( !(unsigned __int8)sub_3D540(v212, *v213, a7) )
          return -1;
        return 1;
      case 22LL:
        v402 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v590 = *(__int64 **)(a3 + 8);
          v406 = (unsigned __int8 *)(v590 + 1);
          *(_QWORD *)(v8 + 8) = v590 + 1;
          v405 = *v590;
        }
        else
        {
          v403 = *(_QWORD *)(a3 + 16);
          v404 = v402 + 8;
          *(_DWORD *)v8 = v404;
          v405 = *(_QWORD *)(v403 + v402);
          if ( (unsigned int)v404 <= 0x2F )
          {
            v406 = (unsigned __int8 *)(v404 + v403);
            *(_DWORD *)v8 = v402 + 16;
            goto LABEL_432;
          }
          v406 = *(unsigned __int8 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v406 + 8;
LABEL_432:
        sub_3B890(a1, v405, *v406);
        return 1;
      case 25LL:
        v369 = *(_DWORD *)a3;
        if ( v369 > 0x2F )
        {
          v370 = *(__int64 ***)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v370 + 1;
        }
        else
        {
          v370 = (__int64 **)(*(_QWORD *)(v8 + 16) + v369);
          *(_DWORD *)v8 = v369 + 8;
        }
        v371 = *v370;
        v372 = **v370;
        sreg = get_sreg();
        if ( !(unsigned __int8)is_loaded() )
          sreg = 0;
        if ( *((_BYTE *)v371 + 43) == 2 || !*(_DWORD *)(a1 + 216) )
          goto LABEL_402;
        if ( *(_DWORD *)(a1 + 212) )
        {
          if ( sreg == -1 )
          {
            if ( !v372 || (sreg = get_sreg(), sreg == -1) )
LABEL_402:
              sreg = 0;
          }
        }
        else
        {
          sreg = 1;
        }
        v371[20 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL) + 7] = sreg;
        return 0;
      case 27LL:
        v374 = *(_DWORD *)a3;
        if ( v374 > 0x2F )
        {
          v375 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v375 + 1;
        }
        else
        {
          v375 = (__int64 *)(*(_QWORD *)(v8 + 16) + v374);
          *(_DWORD *)v8 = v374 + 8;
        }
        v376 = *v375;
        flags = get_flags_ex();
        if ( (flags & 0x600) != 0 )
          return get_item_end() - v376;
        v587 = sub_28410(a1, v376);
        if ( !v587 || (flags & 0x1000) != 0 || (unsigned __int8)create_align() )
          goto LABEL_687;
        if ( v587 == 4 )
        {
          if ( (unsigned int)get_dword() )
            return (int)create_insn();
        }
        else if ( (unsigned __int16)get_word() )
        {
          return (int)create_insn();
        }
LABEL_687:
        item_end = v376;
        while ( 1 )
        {
          v589 = is_loaded();
          if ( flags || !v589 || !(unsigned __int8)sub_36530(a1, item_end) )
            break;
          item_end = get_item_end();
          flags = get_flags_ex();
        }
        return item_end - v376;
      case 28LL:
        v312 = *(_DWORD *)a3;
        if ( v312 > 0x2F )
        {
          v313 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v313 + 1;
        }
        else
        {
          v313 = (__int64 *)(*(_QWORD *)(v8 + 16) + v312);
          *(_DWORD *)v8 = v312 + 8;
        }
        sub_1E3E0((_QWORD *)a1, *v313);
        return 1;
      case 29LL:
        v200 = *(_DWORD *)a3;
        if ( v200 > 0x2F )
        {
          v626 = (__int64 *)(*(_QWORD *)(v8 + 8) + 8LL);
          *(_QWORD *)(v8 + 8) = v626;
        }
        else
        {
          v201 = *(_QWORD *)(v8 + 16);
          v202 = v200 + 8;
          *(_DWORD *)v8 = v202;
          if ( (unsigned int)v202 <= 0x2F )
          {
            v203 = v200 + 16;
            *(_DWORD *)v8 = v203;
            v204 = *(_QWORD *)(v201 + v202);
            if ( (unsigned int)v203 <= 0x2F )
            {
              v205 = v200 + 24;
              *(_DWORD *)v8 = v205;
              v206 = *(_QWORD *)(v201 + v203);
              if ( (unsigned int)v205 <= 0x2F )
              {
                v207 = (__int64 *)(v205 + v201);
                *(_DWORD *)v8 = v200 + 32;
                goto LABEL_211;
              }
              v207 = *(__int64 **)(v8 + 8);
LABEL_767:
              *(_QWORD *)(v8 + 8) = v207 + 1;
LABEL_211:
              if ( !v204 )
              {
                v208 = *v207;
                if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
                  return -(__int64)(v206 + v208 >= (unsigned __int64)get_item_end());
              }
              return 0;
            }
            v627 = *(__int64 **)(v8 + 8);
LABEL_766:
            v207 = v627 + 1;
            *(_QWORD *)(v8 + 8) = v627 + 1;
            v206 = *v627;
            goto LABEL_767;
          }
          v626 = *(__int64 **)(v8 + 8);
        }
        v627 = v626 + 1;
        *(_QWORD *)(v8 + 8) = v626 + 1;
        v204 = *v626;
        goto LABEL_766;
      case 30LL:
        v188 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v548 = *(__int64 **)(a3 + 8);
          v192 = (const char **)(v548 + 1);
          *(_QWORD *)(v8 + 8) = v548 + 1;
          v191 = *v548;
        }
        else
        {
          v189 = *(_QWORD *)(a3 + 16);
          v190 = v188 + 8;
          *(_DWORD *)v8 = v190;
          v191 = *(_QWORD *)(v189 + v188);
          if ( (unsigned int)v190 <= 0x2F )
          {
            v192 = (const char **)(v190 + v189);
            *(_DWORD *)v8 = v188 + 16;
            goto LABEL_195;
          }
          v192 = *(const char ***)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v192 + 1;
LABEL_195:
        v193 = *v192;
        if ( (unsigned __int8)segtype() != 10 && !strcmp(v193, "_GLOBAL_OFFSET_TABLE_") )
          sub_43C00(a1, v191);
        return 0;
      case 32LL:
        v194 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v547 = *(__int64 **)(a3 + 8);
          v198 = v547 + 1;
          *(_QWORD *)(v8 + 8) = v547 + 1;
          v197 = *v547;
        }
        else
        {
          v195 = *(_QWORD *)(a3 + 16);
          v196 = v194 + 8;
          *(_DWORD *)v8 = v196;
          v197 = *(_QWORD *)(v195 + v194);
          if ( (unsigned int)v196 <= 0x2F )
          {
            v198 = (_DWORD *)(v196 + v195);
            *(_DWORD *)v8 = v194 + 16;
            goto LABEL_201;
          }
          v198 = *(_DWORD **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v198 + 2;
LABEL_201:
        v199 = 4 - ((*v198 == 0) - 1);
        if ( !*(_DWORD *)(a1 + 212) || (unsigned __int64)(get_sreg() - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          v199 |= 2u;
        if ( !sub_28040(a1, v197, v199) )
          return -1;
        return 1;
      case 33LL:
        v185 = *(_DWORD *)a3;
        if ( v185 > 0x2F )
        {
          v186 = *(_QWORD *)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v186 + 8;
        }
        else
        {
          v186 = *(_QWORD *)(v8 + 16) + v185;
          *(_DWORD *)v8 = v185 + 8;
        }
        if ( (*(_BYTE *)(*(_QWORD *)v186 + 32LL) & 0xF) != 0xE )
          return 1;
        v187 = *(_WORD *)(*(_QWORD *)v186 + 24LL);
        if ( (unsigned __int16)(v187 - 282) <= 1u || (unsigned __int16)(v187 - 468) <= 1u )
          return 1;
        return -1;
      case 34LL:
        v360 = *(_DWORD *)a3;
        if ( v360 > 0x2F )
        {
          v361 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v361 + 1;
        }
        else
        {
          v361 = (__int64 *)(*(_QWORD *)(v8 + 16) + v360);
          *(_DWORD *)v8 = v360 + 8;
        }
        if ( !sub_2CF00(a1, *v361) )
          return -1;
        return 1;
      case 35LL:
        v331 = *(_DWORD *)a3;
        if ( v331 > 0x2F )
        {
          v332 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v332 + 1;
        }
        else
        {
          v332 = (__int64 *)(*(_QWORD *)(v8 + 16) + v331);
          *(_DWORD *)v8 = v331 + 8;
        }
        if ( !sub_312C0(a1, *v332, 0) )
          return -1;
        return 1;
      case 36LL:
        v333 = *(_DWORD *)a3;
        if ( v333 > 0x2F )
        {
          v334 = *(_QWORD ***)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v334 + 1;
        }
        else
        {
          v334 = (_QWORD **)(*(_QWORD *)(v8 + 16) + v333);
          *(_DWORD *)v8 = v333 + 8;
        }
        return (int)sub_32CE0(a1, *v334, 1);
      case 37LL:
        v183 = *(_DWORD *)a3;
        if ( v183 > 0x2F )
        {
          v184 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v184 + 1;
        }
        else
        {
          v184 = (__int64 *)(*(_QWORD *)(v8 + 16) + v183);
          *(_DWORD *)v8 = v183 + 8;
        }
        return (unsigned __int8)sub_312C0(a1, *v184, 0);
      case 38LL:
        v418 = *(_DWORD *)a3;
        if ( v418 > 0x2F )
        {
          v419 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v419 + 1;
        }
        else
        {
          v419 = (__int64 *)(*(_QWORD *)(v8 + 16) + v418);
          *(_DWORD *)v8 = v418 + 8;
        }
        v420 = *v419;
        if ( (*(_WORD *)(*v419 + 24) & 0xFFFD) != 0xC || *(_BYTE *)(v420 + 41) != 1 )
          return 0;
        return 2LL * (*(_WORD *)(v420 + 46) == 15);
      case 41LL:
        v391 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v518 = *(__int64 **)(a3 + 8);
          v519 = v518 + 1;
          *(_QWORD *)(v8 + 8) = v518 + 1;
          v394 = *v518;
        }
        else
        {
          v392 = *(_QWORD *)(a3 + 16);
          v393 = v391 + 8;
          *(_DWORD *)v8 = v393;
          v394 = *(_QWORD *)(v392 + v391);
          if ( (unsigned int)v393 <= 0x2F )
          {
            v395 = v391 + 16;
            *(_DWORD *)v8 = v395;
            v396 = *(_QWORD *)(v392 + v393);
            if ( (unsigned int)v395 <= 0x2F )
            {
              v397 = v391 + 24;
              *(_DWORD *)v8 = v397;
              v398 = *(_QWORD *)(v392 + v395);
              if ( (unsigned int)v397 <= 0x2F )
              {
                v399 = (_QWORD *)(v397 + v392);
                *(_DWORD *)v8 = v391 + 32;
                return (int)sub_6F600(v394, v396, v398, *v399);
              }
              v399 = *(_QWORD **)(v8 + 8);
LABEL_568:
              *(_QWORD *)(v8 + 8) = v399 + 1;
              return (int)sub_6F600(v394, v396, v398, *v399);
            }
            v520 = *(__int64 **)(v8 + 8);
LABEL_567:
            v399 = v520 + 1;
            *(_QWORD *)(v8 + 8) = v520 + 1;
            v398 = *v520;
            goto LABEL_568;
          }
          v519 = *(__int64 **)(v8 + 8);
        }
        v520 = v519 + 1;
        *(_QWORD *)(v8 + 8) = v519 + 1;
        v396 = *v519;
        goto LABEL_567;
      case 42LL:
        v411 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v591 = *(__int64 **)(a3 + 8);
          v415 = v591 + 1;
          *(_QWORD *)(v8 + 8) = v591 + 1;
          v414 = *v591;
        }
        else
        {
          v412 = *(_QWORD *)(a3 + 16);
          v413 = v411 + 8;
          *(_DWORD *)v8 = v413;
          v414 = *(_QWORD *)(v412 + v411);
          if ( (unsigned int)v413 <= 0x2F )
          {
            v415 = (_QWORD *)(v413 + v412);
            *(_DWORD *)v8 = v411 + 16;
            return (int)sub_6F440(v414, *v415);
          }
          v415 = *(_QWORD **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v415 + 1;
        return (int)sub_6F440(v414, *v415);
      case 43LL:
        v416 = *(_DWORD *)a3;
        if ( v416 > 0x2F )
        {
          v417 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v417 + 1;
        }
        else
        {
          v417 = (__int64 *)(*(_QWORD *)(v8 + 16) + v416);
          *(_DWORD *)v8 = v416 + 8;
        }
        return (int)sub_28410(a1, *v417);
      case 46LL:
        v362 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v583 = *(_DWORD ***)(a3 + 8);
          v584 = (__int64 *)(v583 + 1);
          *(_QWORD *)(v8 + 8) = v583 + 1;
          v365 = *v583;
        }
        else
        {
          v363 = *(_QWORD *)(a3 + 16);
          v364 = v362 + 8;
          *(_DWORD *)v8 = v364;
          v365 = *(_DWORD **)(v363 + v362);
          if ( (unsigned int)v364 <= 0x2F )
          {
            v366 = v362 + 16;
            *(_DWORD *)v8 = v366;
            v367 = *(_QWORD *)(v363 + v364);
            if ( (unsigned int)v366 <= 0x2F )
            {
              v368 = (__int64 *)(v366 + v363);
              *(_DWORD *)v8 = v362 + 24;
              goto LABEL_392;
            }
            v368 = *(__int64 **)(v8 + 8);
LABEL_678:
            *(_QWORD *)(v8 + 8) = v368 + 1;
LABEL_392:
            *v365 = sub_2F920((_QWORD *)a1, v367, *v368);
            return 1;
          }
          v584 = *(__int64 **)(v8 + 8);
        }
        v368 = v584 + 1;
        *(_QWORD *)(v8 + 8) = v584 + 1;
        v367 = *v584;
        goto LABEL_678;
      case 47LL:
        v407 = *(_DWORD *)a3;
        if ( v407 > 0x2F )
        {
          v408 = *(_QWORD *)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v408 + 8;
        }
        else
        {
          v408 = *(_QWORD *)(v8 + 16) + v407;
          *(_DWORD *)v8 = v407 + 8;
        }
        v409 = *(unsigned __int8 *)(*(_QWORD *)v408 + 1LL);
        if ( (unsigned __int8)v409 > 0xDu )
          return 1;
        v410 = 16139;
        if ( !_bittest64(&v410, v409) )
          return 1;
        return -1;
      case 48LL:
        v265 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v610 = *(__int64 **)(a3 + 8);
          v269 = v610 + 1;
          *(_QWORD *)(v8 + 8) = v610 + 1;
          v268 = *v610;
        }
        else
        {
          v266 = *(_QWORD *)(a3 + 16);
          v267 = v265 + 8;
          *(_DWORD *)v8 = v267;
          v268 = *(_QWORD *)(v266 + v265);
          if ( (unsigned int)v267 <= 0x2F )
          {
            v269 = (__int64 *)(v267 + v266);
            *(_DWORD *)v8 = v265 + 16;
            goto LABEL_286;
          }
          v269 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v269 + 1;
LABEL_286:
        if ( !(unsigned __int8)sub_2A020(v268, *v269) )
          return -1;
        return 1;
      case 51LL:
        v378 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v580 = *(__int64 ***)(a3 + 8);
          v581 = (unsigned int *)(v580 + 1);
          *(_QWORD *)(v8 + 8) = v580 + 1;
          v381 = *v580;
        }
        else
        {
          v379 = *(_QWORD *)(a3 + 16);
          v380 = v378 + 8;
          *(_DWORD *)v8 = v380;
          v381 = *(__int64 **)(v379 + v378);
          if ( (unsigned int)v380 <= 0x2F )
          {
            v382 = v378 + 16;
            *(_DWORD *)v8 = v382;
            v383 = *(_DWORD *)(v379 + v380);
            if ( (unsigned int)v382 <= 0x2F )
            {
              v384 = v378 + 24;
              *(_DWORD *)v8 = v384;
              v385 = *(_QWORD *)(v379 + v382);
              if ( (unsigned int)v384 <= 0x2F )
              {
                v386 = (unsigned int *)(v384 + v379);
                *(_DWORD *)v8 = v378 + 32;
                return (int)sub_24EC0(v381, v383, v385, *v386);
              }
              v386 = *(unsigned int **)(v8 + 8);
LABEL_675:
              *(_QWORD *)(v8 + 8) = v386 + 2;
              return (int)sub_24EC0(v381, v383, v385, *v386);
            }
            v582 = *(unsigned __int64 **)(v8 + 8);
LABEL_674:
            v386 = (unsigned int *)(v582 + 1);
            *(_QWORD *)(v8 + 8) = v582 + 1;
            v385 = *v582;
            goto LABEL_675;
          }
          v581 = *(unsigned int **)(v8 + 8);
        }
        v582 = (unsigned __int64 *)(v581 + 2);
        *(_QWORD *)(v8 + 8) = v581 + 2;
        v383 = *v581;
        goto LABEL_674;
      case 52LL:
        v355 = *(_DWORD *)a3;
        if ( v355 > 0x2F )
        {
          v356 = *(char ***)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v356 + 1;
        }
        else
        {
          v356 = (char **)(*(_QWORD *)(v8 + 16) + v355);
          *(_DWORD *)v8 = v355 + 8;
        }
        v357 = *v356;
        v358 = getinf_flag();
        v359 = 1;
        if ( !v358 )
          v359 = (getinf() & 0x1006) == 4098;
        return (int)(sub_36610(v357, 0, nullptr, v359) + 1);
      case 55LL:
        v324 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v578 = *(__int64 ***)(a3 + 8);
          v579 = (unsigned __int64 **)(v578 + 1);
          *(_QWORD *)(v8 + 8) = v578 + 1;
          v327 = *v578;
        }
        else
        {
          v325 = *(_QWORD *)(a3 + 16);
          v326 = v324 + 8;
          *(_DWORD *)v8 = v326;
          v327 = *(__int64 **)(v325 + v324);
          if ( (unsigned int)v326 <= 0x2F )
          {
            v328 = v324 + 16;
            *(_DWORD *)v8 = v328;
            v329 = *(unsigned __int64 **)(v325 + v326);
            if ( (unsigned int)v328 <= 0x2F )
            {
              v330 = (__int64 **)(v328 + v325);
              *(_DWORD *)v8 = v324 + 24;
              return (int)sub_28B80(a1, v327, v329, *v330);
            }
            v330 = *(__int64 ***)(v8 + 8);
LABEL_670:
            *(_QWORD *)(v8 + 8) = v330 + 1;
            return (int)sub_28B80(a1, v327, v329, *v330);
          }
          v579 = *(unsigned __int64 ***)(v8 + 8);
        }
        v330 = (__int64 **)(v579 + 1);
        *(_QWORD *)(v8 + 8) = v579 + 1;
        v329 = *v579;
        goto LABEL_670;
      case 57LL:
        v322 = *(_DWORD *)a3;
        if ( v322 > 0x2F )
        {
          v323 = *(_QWORD **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v323 + 1;
        }
        else
        {
          v323 = (_QWORD *)(*(_QWORD *)(v8 + 16) + v322);
          *(_DWORD *)v8 = v322 + 8;
        }
        if ( !*v323 )
          return -1;
        return (unsigned __int8)sub_29E80(a1) - 1LL;
      case 59LL:
        v353 = *(_DWORD *)a3;
        if ( v353 > 0x2F )
        {
          v354 = *(_QWORD ***)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v354 + 1;
        }
        else
        {
          v354 = (_QWORD **)(*(_QWORD *)(v8 + 16) + v353);
          *(_DWORD *)v8 = v353 + 8;
        }
        sub_30260(
          a1,
          *v354,
          0,
          (__int64)v354,
          a5,
          a6,
          v636.m128i_i32[0],
          v636.m128i_i64[1],
          v637.m128i_i64[0],
          v637.m128i_i32[2],
          v638,
          (int)v639,
          v640,
          v641,
          (int)s1[0],
          (int)s1[1],
          (int)s1[2],
          v643,
          *(int *)v644,
          *(int *)&v644[8],
          *(int *)&v644[16],
          v646,
          v647,
          SDWORD2(v647),
          v648,
          v649,
          v650,
          v651,
          v652,
          v653,
          v654,
          v655,
          v656,
          v657,
          v658,
          v659,
          v660,
          v661,
          v662,
          v663,
          v664,
          v665,
          v666,
          v667,
          v668,
          v669,
          v670);
        return 1;
      case 60LL:
        v144 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v615 = *(_DWORD ***)(a3 + 8);
          v148 = v615 + 1;
          *(_QWORD *)(v8 + 8) = v615 + 1;
          v147 = *v615;
        }
        else
        {
          v145 = *(_QWORD *)(a3 + 16);
          v146 = v144 + 8;
          *(_DWORD *)v8 = v146;
          v147 = *(_DWORD **)(v145 + v144);
          if ( (unsigned int)v146 <= 0x2F )
          {
            v148 = (_QWORD *)(v146 + v145);
            *(_DWORD *)v8 = v144 + 16;
            goto LABEL_151;
          }
          v148 = *(_QWORD **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v148 + 1;
LABEL_151:
        *v147 = sub_302A0(*v148);
        return 1;
      case 63LL:
        v143 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v585 = *(_QWORD *)(a3 + 8) + 8LL;
          *(_QWORD *)(a3 + 8) = v585;
        }
        else
        {
          *(_DWORD *)a3 = v143 + 8;
          if ( v143 + 8 <= 0x2F )
          {
            *(_DWORD *)a3 = v143 + 16;
            if ( v143 + 16 <= 0x2F )
            {
              *(_DWORD *)a3 = v143 + 24;
              goto LABEL_147;
            }
            v586 = *(_QWORD *)(a3 + 8);
LABEL_683:
            *(_QWORD *)(v8 + 8) = v586 + 8;
LABEL_147:
            invalidate_regfinder_cache();
            return 0;
          }
          v585 = *(_QWORD *)(a3 + 8);
        }
        v586 = v585 + 8;
        *(_QWORD *)(v8 + 8) = v585 + 8;
        goto LABEL_683;
      case 64LL:
        v142 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v553 = *(_QWORD *)(a3 + 8) + 8LL;
        }
        else
        {
          *(_DWORD *)a3 = v142 + 8;
          if ( v142 + 8 <= 0x2F )
          {
            *(_DWORD *)a3 = v142 + 16;
            if ( v142 + 16 <= 0x2F )
            {
              *(_DWORD *)a3 = v142 + 24;
              goto LABEL_142;
            }
            v554 = *(_QWORD *)(a3 + 8);
LABEL_623:
            *(_QWORD *)(v8 + 8) = v554 + 8;
LABEL_142:
            invalidate_regfinder_xrefs_cache();
            return 0;
          }
          v553 = *(_QWORD *)(a3 + 8);
        }
        v554 = v553 + 8;
        *(_QWORD *)(v8 + 8) = v553 + 8;
        goto LABEL_623;
      case 65LL:
        v301 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v616 = *(_QWORD *)(a3 + 8) + 8LL;
          *(_QWORD *)(v8 + 8) = v616;
        }
        else
        {
          *(_DWORD *)a3 = v301 + 8;
          if ( v301 + 8 <= 0x2F )
          {
            *(_DWORD *)a3 = v301 + 16;
            goto LABEL_147;
          }
          v616 = *(_QWORD *)(a3 + 8);
        }
        *(_QWORD *)(v8 + 8) = v616 + 8;
        goto LABEL_147;
      case 66LL:
        v300 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v538 = *(_QWORD *)(a3 + 8) + 8LL;
        }
        else
        {
          *(_DWORD *)a3 = v300 + 8;
          if ( v300 + 8 <= 0x2F )
          {
            *(_DWORD *)a3 = v300 + 16;
            goto LABEL_142;
          }
          v538 = *(_QWORD *)(a3 + 8);
        }
        *(_QWORD *)(v8 + 8) = v538 + 8;
        goto LABEL_142;
      case 67LL:
        v290 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v533 = *(__int64 **)(a3 + 8);
          v534 = (void **)(v533 + 1);
          *(_QWORD *)(v8 + 8) = v533 + 1;
          v293 = *v533;
        }
        else
        {
          v291 = *(_QWORD *)(a3 + 16);
          v292 = v290 + 8;
          *(_DWORD *)v8 = v292;
          v293 = *(_QWORD *)(v291 + v290);
          if ( (unsigned int)v292 <= 0x2F )
          {
            v294 = v290 + 16;
            *(_DWORD *)v8 = v294;
            v295 = *(void **)(v291 + v292);
            if ( (unsigned int)v294 <= 0x2F )
            {
              v296 = v290 + 24;
              *(_DWORD *)v8 = v296;
              v297 = *(_DWORD *)(v291 + v294) != 0;
              if ( (unsigned int)v296 <= 0x2F )
              {
                v298 = (_QWORD **)(v296 + v291);
                *(_DWORD *)v8 = v290 + 32;
                goto LABEL_325;
              }
              v298 = *(_QWORD ***)(v8 + 8);
LABEL_592:
              *(_QWORD *)(v8 + 8) = v298 + 1;
LABEL_325:
              v299 = *v298;
              if ( (unsigned __int8)segtype() == 2 )
              {
                if ( v293 != -1 )
                {
                  v630 = get_flags_ex();
                  if ( (~(_WORD)v630 & 0x600) == 0
                    && (v630 & 0xF000000) == 0x5000000
                    && (unsigned __int8)get_refinfo()
                    && s1[1] == v295 )
                  {
                    return -1;
                  }
                  *v299 &= ~1uLL;
                  return v297 && (get_flags_ex() & 0x600) == 0 && sub_33E80(a1, v293, (__int64)v295, 1);
                }
                *v299 &= ~1uLL;
                if ( v297 )
                {
                  if ( (get_flags_ex() & 0x600) == 0 && sub_33E80(a1, -1, (__int64)v295, 0) )
                    return 1;
LABEL_328:
                  if ( (unsigned __int8)is_loaded() && (get_flags_ex() & 0x600) == 0 )
                    return (unsigned __int8)sub_36530(a1, (__int64)v295);
                }
              }
              else if ( v293 == -1 && v297 )
              {
                goto LABEL_328;
              }
              return 0;
            }
            v535 = *(_DWORD **)(v8 + 8);
LABEL_591:
            v298 = (_QWORD **)(v535 + 2);
            *(_QWORD *)(v8 + 8) = v535 + 2;
            v297 = *v535 != 0;
            goto LABEL_592;
          }
          v534 = *(void ***)(v8 + 8);
        }
        v535 = v534 + 1;
        *(_QWORD *)(v8 + 8) = v534 + 1;
        v295 = *v534;
        goto LABEL_591;
      case 72LL:
        v279 = *(_DWORD *)a3;
        if ( v279 > 0x2F )
        {
          v536 = *(__int64 **)(v8 + 8);
          v537 = v536 + 1;
          *(_QWORD *)(v8 + 8) = v536 + 1;
          v282 = *v536;
        }
        else
        {
          v280 = *(_QWORD *)(v8 + 16);
          v281 = v279 + 8;
          *(_DWORD *)v8 = v281;
          v282 = *(_QWORD *)(v280 + v279);
          if ( (unsigned int)v281 <= 0x2F )
          {
            v283 = v279 + 16;
            *(_DWORD *)v8 = v283;
            v284 = *(_QWORD *)(v280 + v281);
            if ( (unsigned int)v283 <= 0x2F )
            {
              v285 = (_QWORD **)(v283 + v280);
              *(_DWORD *)v8 = v279 + 24;
              goto LABEL_308;
            }
            v285 = *(_QWORD ***)(v8 + 8);
LABEL_595:
            *(_QWORD *)(v8 + 8) = v285 + 1;
LABEL_308:
            if ( *(_BYTE *)(v282 + 6) > 7u )
            {
              **v285 += *(int *)(v284 + 24) & 0xFFFFFFFFFFFFFFFELL;
              v286 = *(_DWORD *)(v284 + 24) & 1;
              if ( v286 != get_sreg() )
              {
                v648 = -1;
                v287 = &v651;
                v647 = -1;
                v649 = 0;
                v650 = 0;
                do
                {
                  *(_WORD *)v287 = 0;
                  v287 += 5;
                  *((_WORD *)v287 - 19) = 0;
                  *((_WORD *)v287 - 18) = 0;
                  *((_DWORD *)v287 - 2) = 0;
                  *((_WORD *)v287 - 17) = 0;
                  *((_OWORD *)v287 - 2) = 0;
                  *(v287 - 2) = 0;
                }
                while ( v287 != (__int64 *)&v671 );
                v288 = -1;
                while ( (int)decode_insn() > 0 )
                {
                  v289 = get_item_end();
                  if ( (unsigned __int8)is_basic_block_end() )
                    goto LABEL_317;
                  v288 = v289;
                }
                v289 = v288;
LABEL_317:
                if ( v289 != -1 )
                  del_items();
                sub_23880();
              }
              return 1;
            }
            return 0;
          }
          v537 = *(_QWORD **)(v8 + 8);
        }
        v285 = (_QWORD **)(v537 + 1);
        *(_QWORD *)(v8 + 8) = v537 + 1;
        v284 = *v537;
        goto LABEL_595;
      case 80LL:
        v307 = *(_DWORD *)a3;
        if ( v307 > 0x2F )
          *(_QWORD *)(v8 + 8) += 8LL;
        else
          *(_DWORD *)v8 = v307 + 8;
        func = (_QWORD *)get_func();
        if ( func )
          sub_30260(
            a1,
            func,
            1u,
            v309,
            v310,
            v311,
            v636.m128i_i32[0],
            v636.m128i_i64[1],
            v637.m128i_i64[0],
            v637.m128i_i32[2],
            v638,
            (int)v639,
            v640,
            v641,
            (int)s1[0],
            (int)s1[1],
            (int)s1[2],
            v643,
            *(int *)v644,
            *(int *)&v644[8],
            *(int *)&v644[16],
            v646,
            v647,
            SDWORD2(v647),
            v648,
            v649,
            v650,
            v651,
            v652,
            v653,
            v654,
            v655,
            v656,
            v657,
            v658,
            v659,
            v660,
            v661,
            v662,
            v663,
            v664,
            v665,
            v666,
            v667,
            v668,
            v669,
            v670);
        return 1;
      case 81LL:
        v302 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v517 = *(__int64 ***)(a3 + 8);
          v306 = (__int64 *)(v517 + 1);
          *(_QWORD *)(v8 + 8) = v517 + 1;
          v305 = *v517;
        }
        else
        {
          v303 = *(_QWORD *)(a3 + 16);
          v304 = v302 + 8;
          *(_DWORD *)v8 = v304;
          v305 = *(__int64 **)(v303 + v302);
          if ( (unsigned int)v304 <= 0x2F )
          {
            v306 = (__int64 *)(v304 + v303);
            *(_DWORD *)v8 = v302 + 16;
            return (unsigned __int8)sub_30100(a1, v305, *v306);
          }
          v306 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v306 + 1;
        return (unsigned __int8)sub_30100(a1, v305, *v306);
      case 82LL:
        v157 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v559 = *(__int64 ***)(a3 + 8);
          v560 = v559 + 1;
          *(_QWORD *)(v8 + 8) = v559 + 1;
          v160 = *v559;
        }
        else
        {
          v158 = *(_QWORD *)(a3 + 16);
          v159 = v157 + 8;
          *(_DWORD *)v8 = v159;
          v160 = *(__int64 **)(v158 + v157);
          if ( (unsigned int)v159 <= 0x2F )
          {
            v161 = v157 + 16;
            *(_DWORD *)v8 = v161;
            v162 = *(_QWORD **)(v158 + v159);
            if ( (unsigned int)v161 <= 0x2F )
            {
              v163 = (__int64 *)(v161 + v158);
              *(_DWORD *)v8 = v157 + 24;
              return sub_383C0(v160, v162, *v163);
            }
            v163 = *(__int64 **)(v8 + 8);
LABEL_633:
            *(_QWORD *)(v8 + 8) = v163 + 1;
            return sub_383C0(v160, v162, *v163);
          }
          v560 = *(_QWORD ***)(v8 + 8);
        }
        v163 = (__int64 *)(v560 + 1);
        *(_QWORD *)(v8 + 8) = v560 + 1;
        v162 = *v560;
        goto LABEL_633;
      case 84LL:
        v149 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v551 = *(__int64 **)(a3 + 8);
          v552 = v551 + 1;
          *(_QWORD *)(v8 + 8) = v551 + 1;
          v152 = *v551;
        }
        else
        {
          v150 = *(_QWORD *)(a3 + 16);
          v151 = v149 + 8;
          *(_DWORD *)v8 = v151;
          v152 = *(_QWORD *)(v150 + v149);
          if ( (unsigned int)v151 <= 0x2F )
          {
            v153 = v149 + 16;
            *(_DWORD *)v8 = v153;
            v154 = *(_QWORD *)(v150 + v151);
            if ( (unsigned int)v153 <= 0x2F )
            {
              v155 = (int *)(v153 + v150);
              *(_DWORD *)v8 = v149 + 24;
              goto LABEL_156;
            }
            v155 = *(int **)(v8 + 8);
LABEL_620:
            *(_QWORD *)(v8 + 8) = v155 + 2;
LABEL_156:
            v156 = *v155;
            if ( (unsigned int)v156 > 4 || !(unsigned __int8)sub_839C0(a1, v152, v154, v154 + 8 * (5 * v156 + 5), 0) )
              return -1;
            return 1;
          }
          v552 = *(_QWORD **)(v8 + 8);
        }
        v155 = (int *)(v552 + 1);
        *(_QWORD *)(v8 + 8) = v552 + 1;
        v154 = *v552;
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
        *(_OWORD *)&s1[1] = 0;
        v10 = strlen(s);
        v11 = (void *)(v10 + 1);
        v12 = v10;
        s1[0] = (void *)qvector_reserve();
        s1[1] = v11;
        memmove(s1[0], s, v12);
        *((_BYTE *)s1[0] + v12) = 0;
        v13 = *(_BYTE ***)(v9 + 24);
        v14 = *v13;
        if ( !*v13 )
          goto LABEL_819;
        v15 = &::s1;
        if ( s1[1] )
          v15 = (const char *)s1[0];
        v16 = 0;
        do
        {
          if ( !strcmp(v15, &v14[*v14 == 45]) )
          {
            if ( s1[0] )
            {
              s1[1] = nullptr;
              qfree();
            }
            setinf_flag();
LABEL_15:
            sub_47270(a1);
            sub_445D0(a1, 0);
            return 0;
          }
          v14 = v13[++v16];
        }
        while ( v14 );
LABEL_819:
        if ( under_debugger )
          BUG();
        v8 = interr();
LABEL_821:
        v445 = *(unsigned int **)(v8 + 8);
LABEL_644:
        *(_QWORD *)(v8 + 8) = v445 + 2;
        goto LABEL_475;
      case 87LL:
        v421 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v611 = *(_QWORD **)(a3 + 8);
          v612 = v611 + 1;
          *(_QWORD *)(v8 + 8) = v611 + 1;
          v423 = *v611 & 0xFFFFFFFFFFFFFFFELL;
        }
        else
        {
          v422 = *(_QWORD *)(a3 + 16);
          *(_DWORD *)v8 = v421 + 8;
          v423 = *(_QWORD *)(v422 + v421) & 0xFFFFFFFFFFFFFFFELL;
          if ( v421 + 8 <= 0x2F )
          {
            *(_DWORD *)v8 = v421 + 16;
            goto LABEL_453;
          }
          v612 = *(_QWORD **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v612 + 1;
LABEL_453:
        if ( !(unsigned __int8)sub_55C30(v423) )
          goto LABEL_559;
        return 0;
      case 88LL:
        goto LABEL_46;
      case 91LL:
        v433 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v614 = *(__int64 **)(a3 + 8);
          v437 = v614 + 1;
          *(_QWORD *)(v8 + 8) = v614 + 1;
          v436 = *v614;
        }
        else
        {
          v434 = *(_QWORD *)(a3 + 16);
          v435 = v433 + 8;
          *(_DWORD *)v8 = v435;
          v436 = *(_QWORD *)(v434 + v433);
          if ( (unsigned int)v435 <= 0x2F )
          {
            v437 = (__int64 *)(v435 + v434);
            *(_DWORD *)v8 = v433 + 16;
            goto LABEL_469;
          }
          v437 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v437 + 1;
LABEL_469:
        v438 = *v437;
        if ( !v436 )
          return -1;
        sub_372A0(a1, v436, v438);
        return 1;
      case 92LL:
        v428 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v613 = *(_DWORD ***)(a3 + 8);
          v432 = (__int64 *)(v613 + 1);
          *(_QWORD *)(v8 + 8) = v613 + 1;
          v431 = *v613;
        }
        else
        {
          v429 = *(_QWORD *)(a3 + 16);
          v430 = v428 + 8;
          *(_DWORD *)v8 = v430;
          v431 = *(_DWORD **)(v429 + v428);
          if ( (unsigned int)v430 <= 0x2F )
          {
            v432 = (__int64 *)(v430 + v429);
            *(_DWORD *)v8 = v428 + 16;
            goto LABEL_464;
          }
          v432 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v432 + 1;
LABEL_464:
        LODWORD(result) = sub_37C40(a1, *v432, v431);
        if ( !(_DWORD)result )
          return -1;
        return (int)result;
      case 93LL:
        v424 = *(_DWORD *)a3;
        if ( v424 > 0x2F )
        {
          v561 = *(_QWORD **)(v8 + 8);
          v427 = v561 + 1;
          *(_QWORD *)(v8 + 8) = v561 + 1;
          if ( *v561 != 0x45485F5041525345LL )
            return 0;
        }
        else
        {
          v425 = *(_QWORD *)(v8 + 16);
          v426 = v424 + 8;
          *(_DWORD *)v8 = v426;
          if ( *(_QWORD *)(v425 + v424) != 0x45485F5041525345LL )
            return 0;
          if ( (unsigned int)v426 <= 0x2F )
          {
            v427 = (_QWORD *)(v426 + v425);
            *(_DWORD *)v8 = v424 + 16;
            goto LABEL_459;
          }
          v427 = *(_QWORD **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v427 + 1;
LABEL_459:
        if ( *v427 )
          *(_QWORD *)(a1 + 168) = *v427;
        return 0;
      case 94LL:
        v270 = *(_DWORD *)a3;
        if ( v270 > 0x2F )
        {
          v271 = *(_QWORD **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v271 + 1;
        }
        else
        {
          v271 = (_QWORD *)(*(_QWORD *)(v8 + 16) + v270);
          *(_DWORD *)v8 = v270 + 8;
        }
        sub_61450(*v271);
        return 0;
      case 95LL:
        netnode_check();
        return 0;
      case 96LL:
        v222 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v528 = *(__int64 **)(a3 + 8);
          v529 = v528 + 1;
          *(_QWORD *)(v8 + 8) = v528 + 1;
          v225 = *v528;
        }
        else
        {
          v223 = *(_QWORD *)(a3 + 16);
          v224 = v222 + 8;
          *(_DWORD *)v8 = v224;
          v225 = *(_QWORD *)(v223 + v222);
          if ( (unsigned int)v224 <= 0x2F )
          {
            v226 = v222 + 16;
            *(_DWORD *)v8 = v226;
            v227 = *(_DWORD *)(v223 + v224);
            if ( (unsigned int)v226 <= 0x2F )
            {
              v228 = v222 + 24;
              *(_DWORD *)v8 = v228;
              v229 = *(_QWORD *)(v223 + v226);
              if ( (unsigned int)v228 <= 0x2F )
              {
                v230 = v222 + 32;
                *(_DWORD *)v8 = v230;
                v231 = *(unsigned int **)(v223 + v228);
                if ( (unsigned int)v230 <= 0x2F )
                {
                  v232 = v222 + 40;
                  *(_DWORD *)v8 = v232;
                  v233 = *(_DWORD *)(v223 + v230);
                  if ( (unsigned int)v232 <= 0x2F )
                  {
                    v234 = (__int64 **)(v232 + v223);
                    *(_DWORD *)v8 = v222 + 48;
                    return (int)sub_1CDE0(a1, *v234, v225, v227, v229, v231, v233);
                  }
                  v234 = *(__int64 ***)(v8 + 8);
LABEL_583:
                  *(_QWORD *)(v8 + 8) = v234 + 1;
                  return (int)sub_1CDE0(a1, *v234, v225, v227, v229, v231, v233);
                }
                v532 = *(_DWORD **)(v8 + 8);
LABEL_582:
                v234 = (__int64 **)(v532 + 2);
                *(_QWORD *)(v8 + 8) = v532 + 2;
                v233 = *v532;
                goto LABEL_583;
              }
              v531 = *(unsigned int ***)(v8 + 8);
LABEL_581:
              v532 = v531 + 1;
              *(_QWORD *)(v8 + 8) = v531 + 1;
              v231 = *v531;
              goto LABEL_582;
            }
            v530 = *(__int64 **)(v8 + 8);
LABEL_580:
            v531 = (unsigned int **)(v530 + 1);
            *(_QWORD *)(v8 + 8) = v530 + 1;
            v229 = *v530;
            goto LABEL_581;
          }
          v529 = *(_DWORD **)(v8 + 8);
        }
        v530 = (__int64 *)(v529 + 2);
        *(_QWORD *)(v8 + 8) = v529 + 2;
        v227 = *v529;
        goto LABEL_580;
      case 98LL:
        return *(_QWORD *)(a1 + 616);
      case 100LL:
        v214 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v555 = *(int ***)(a3 + 8);
          v218 = v555 + 1;
          *(_QWORD *)(v8 + 8) = v555 + 1;
          v217 = *v555;
        }
        else
        {
          v215 = *(_QWORD *)(a3 + 16);
          v216 = v214 + 8;
          *(_DWORD *)v8 = v216;
          v217 = *(int **)(v215 + v214);
          if ( (unsigned int)v216 <= 0x2F )
          {
            v218 = (_DWORD **)(v216 + v215);
            *(_DWORD *)v8 = v214 + 16;
            goto LABEL_222;
          }
          v218 = *(_DWORD ***)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v218 + 1;
LABEL_222:
        v219 = *v218;
        v220 = *((_WORD *)*v218 + 12);
        if ( v220 == 12 )
        {
          v221 = 2;
        }
        else
        {
          if ( v220 != 14 )
            return 0;
          v221 = 0;
        }
        *v217 = v221;
        if ( *((_BYTE *)v219 + 121) == 5 )
          return 3;
        else
          return 2LL * (*((_BYTE *)v219 + 81) == 5);
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
          v482 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v619 = *(__int64 ***)(a3 + 8);
            v620 = v619 + 1;
            *(_QWORD *)(v8 + 8) = v619 + 1;
            v485 = *v619;
          }
          else
          {
            v483 = *(_QWORD *)(a3 + 16);
            v484 = v482 + 8;
            *(_DWORD *)v8 = v484;
            v485 = *(__int64 **)(v483 + v482);
            if ( (unsigned int)v484 <= 0x2F )
            {
              *(_DWORD *)v8 = v482 + 16;
              v486 = *(__int64 **)(v483 + v484);
              if ( v482 + 16 <= 0x2F )
              {
                *(_DWORD *)v8 = v482 + 24;
                goto LABEL_518;
              }
              v621 = *(__int64 ***)(v8 + 8);
LABEL_756:
              *(_QWORD *)(v8 + 8) = v621 + 1;
LABEL_518:
              sub_43D80(a1, v485, v486);
              return 1;
            }
            v620 = *(__int64 ***)(v8 + 8);
          }
          v621 = v620 + 1;
          *(_QWORD *)(v8 + 8) = v620 + 1;
          v486 = *v620;
          goto LABEL_756;
        case 2004LL:
          v509 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v546 = *(_QWORD **)(a3 + 8);
            v513 = (unsigned int *)(v546 + 1);
            *(_QWORD *)(v8 + 8) = v546 + 1;
            v512 = *v546;
          }
          else
          {
            v510 = *(_QWORD *)(a3 + 16);
            v511 = v509 + 8;
            *(_DWORD *)v8 = v511;
            v512 = *(_QWORD *)(v510 + v509);
            if ( (unsigned int)v511 <= 0x2F )
            {
              v513 = (unsigned int *)(v511 + v510);
              *(_DWORD *)v8 = v509 + 16;
              return (unsigned __int8)sub_78800(a1, v512, *v513);
            }
            v513 = *(unsigned int **)(v8 + 8);
          }
          *(_QWORD *)(v8 + 8) = v513 + 2;
          return (unsigned __int8)sub_78800(a1, v512, *v513);
        case 2005LL:
          v473 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v564 = *(__int64 **)(a3 + 8);
            v565 = v564 + 1;
            *(_QWORD *)(v8 + 8) = v564 + 1;
            v476 = *v564;
          }
          else
          {
            v474 = *(_QWORD *)(a3 + 16);
            v475 = v473 + 8;
            *(_DWORD *)v8 = v475;
            v476 = *(_QWORD *)(v474 + v473);
            if ( (unsigned int)v475 <= 0x2F )
            {
              v477 = v473 + 16;
              *(_DWORD *)v8 = v477;
              v478 = *(_QWORD *)(v474 + v475);
              if ( (unsigned int)v477 <= 0x2F )
              {
                v479 = v473 + 24;
                *(_DWORD *)v8 = v479;
                v480 = *(_QWORD *)(v474 + v477);
                if ( (unsigned int)v479 <= 0x2F )
                {
                  v481 = (_DWORD *)(v479 + v474);
                  *(_DWORD *)v8 = v473 + 32;
                  return (int)sub_7D180(a1, v476, v478, v480, *v481 != 0);
                }
                v481 = *(_DWORD **)(v8 + 8);
LABEL_650:
                *(_QWORD *)(v8 + 8) = v481 + 2;
                return (int)sub_7D180(a1, v476, v478, v480, *v481 != 0);
              }
              v566 = *(_QWORD **)(v8 + 8);
LABEL_649:
              v481 = v566 + 1;
              *(_QWORD *)(v8 + 8) = v566 + 1;
              v480 = *v566;
              goto LABEL_650;
            }
            v565 = *(__int64 **)(v8 + 8);
          }
          v566 = v565 + 1;
          *(_QWORD *)(v8 + 8) = v565 + 1;
          v478 = *v565;
          goto LABEL_649;
        case 2008LL:
          v459 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v608 = *(__int64 **)(a3 + 8);
            v609 = v608 + 1;
            *(_QWORD *)(v8 + 8) = v608 + 1;
            v462 = *v608;
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
              v464 = *(_QWORD *)(v460 + v461);
              if ( (unsigned int)v463 <= 0x2F )
              {
                v465 = (_DWORD *)(v463 + v460);
                *(_DWORD *)v8 = v459 + 24;
                goto LABEL_500;
              }
              v465 = *(_DWORD **)(v8 + 8);
LABEL_733:
              *(_QWORD *)(v8 + 8) = v465 + 2;
LABEL_500:
              if ( !(unsigned __int8)sub_7DEC0(
                                       a1,
                                       v462,
                                       v464,
                                       *v465,
                                       v462,
                                       a6,
                                       v636.m128i_i32[0],
                                       v636.m128i_i32[2],
                                       v637.m128i_i32[0],
                                       v637.m128i_i32[2],
                                       v638,
                                       (_DWORD)v639,
                                       v640,
                                       v641,
                                       s1[0],
                                       s1[1],
                                       s1[2],
                                       v643,
                                       *(_DWORD *)v644,
                                       *(_DWORD *)&v644[8],
                                       *(_DWORD *)&v644[16],
                                       v646,
                                       v647,
                                       DWORD2(v647),
                                       v648,
                                       v649,
                                       v650) )
                return -1;
              return 1;
            }
            v609 = *(_QWORD **)(v8 + 8);
          }
          v465 = v609 + 1;
          *(_QWORD *)(v8 + 8) = v609 + 1;
          v464 = *v609;
          goto LABEL_733;
        case 2009LL:
          v454 = *(_DWORD *)a3;
          if ( v454 > 0x2F )
          {
            v455 = *(__int64 **)(v8 + 8);
            *(_QWORD *)(v8 + 8) = v455 + 1;
          }
          else
          {
            v455 = (__int64 *)(*(_QWORD *)(v8 + 16) + v454);
            *(_DWORD *)v8 = v454 + 8;
          }
          v456 = *v455;
          v457 = *(_BYTE *)(*v455 + 88);
          v458 = v457 & 0xF0;
          if ( (v457 & 0xF0) == 0xC0 )
            v458 = *(_DWORD *)(v456 + 28);
          if ( v458 <= 0x10 )
            v458 = getinf();
          if ( v458 == 144 )
            return 0;
          if ( !(unsigned __int8)sub_80000(a1, v456) )
            return -1;
          return 1;
        case 2010LL:
          v447 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v539 = *(__int64 **)(a3 + 8);
            v540 = v539 + 1;
            *(_QWORD *)(v8 + 8) = v539 + 1;
            v450 = *v539;
          }
          else
          {
            v448 = *(_QWORD *)(a3 + 16);
            v449 = v447 + 8;
            *(_DWORD *)v8 = v449;
            v450 = *(_QWORD *)(v448 + v447);
            if ( (unsigned int)v449 <= 0x2F )
            {
              *(_DWORD *)v8 = v447 + 16;
              v451 = *(_QWORD *)(v448 + v449);
              if ( v447 + 16 <= 0x2F )
              {
                v452 = v447 + 24;
                *(_DWORD *)v8 = v452;
                if ( (unsigned int)v452 <= 0x2F )
                {
                  v453 = (unsigned int *)(v452 + v448);
                  *(_DWORD *)v8 = v447 + 32;
                  goto LABEL_485;
                }
                v453 = *(unsigned int **)(v8 + 8);
LABEL_601:
                *(_QWORD *)(v8 + 8) = v453 + 2;
LABEL_485:
                if ( !(unsigned __int8)sub_80010(a1, v450, v451, *v453) )
                  return -1;
                return 1;
              }
              v541 = *(_QWORD **)(v8 + 8);
LABEL_600:
              v453 = (unsigned int *)(v541 + 1);
              goto LABEL_601;
            }
            v540 = *(__int64 **)(v8 + 8);
          }
          v541 = v540 + 1;
          *(_QWORD *)(v8 + 8) = v540 + 1;
          v451 = *v540;
          goto LABEL_600;
        case 2011LL:
          v439 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v562 = *(_QWORD **)(a3 + 8);
            v563 = (_BYTE **)(v562 + 1);
            *(_QWORD *)(v8 + 8) = v562 + 1;
            v442 = *v562;
          }
          else
          {
            v440 = *(_QWORD *)(a3 + 16);
            v441 = v439 + 8;
            *(_DWORD *)v8 = v441;
            v442 = *(_QWORD *)(v440 + v439);
            if ( (unsigned int)v441 <= 0x2F )
            {
              v443 = v439 + 16;
              *(_DWORD *)v8 = v443;
              v444 = *(_BYTE **)(v440 + v441);
              if ( (unsigned int)v443 > 0x2F )
                goto LABEL_821;
              v445 = (unsigned int *)(v443 + v440);
              *(_DWORD *)v8 = v439 + 24;
LABEL_475:
              v446 = *v445;
              if ( v444 && !*v444 )
                v444 = nullptr;
              if ( !(unsigned __int8)sub_7A320(a1, v442, v444, v446) )
                return -1;
              return 1;
            }
            v563 = *(_BYTE ***)(v8 + 8);
          }
          v445 = (unsigned int *)(v563 + 1);
          *(_QWORD *)(v8 + 8) = v563 + 1;
          v444 = *v563;
          goto LABEL_644;
        case 2012LL:
          v501 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v572 = *(__int64 **)(a3 + 8);
            v505 = v572 + 1;
            *(_QWORD *)(v8 + 8) = v572 + 1;
            v504 = *v572;
          }
          else
          {
            v502 = *(_QWORD *)(a3 + 16);
            v503 = v501 + 8;
            *(_DWORD *)v8 = v503;
            v504 = *(_QWORD *)(v502 + v501);
            if ( (unsigned int)v503 <= 0x2F )
            {
              v505 = (_QWORD *)(v503 + v502);
              *(_DWORD *)v8 = v501 + 16;
              goto LABEL_532;
            }
            v505 = *(_QWORD **)(v8 + 8);
          }
          *(_QWORD *)(v8 + 8) = v505 + 1;
LABEL_532:
          v506 = *v505;
          v507 = *(_BYTE *)(*v505 + 88LL);
          v508 = v507 & 0xF0;
          if ( (v507 & 0xF0) == 0xC0 )
            v508 = *(_DWORD *)(v506 + 28);
          if ( v508 <= 0x10 )
            v508 = getinf();
          if ( v508 == 144 )
            return 0;
          sub_7AAA0(a1, v504, v506);
          return 1;
        case 2015LL:
          v494 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v567 = *(_DWORD ***)(a3 + 8);
            v568 = (__int64 *)(v567 + 1);
            *(_QWORD *)(v8 + 8) = v567 + 1;
            v497 = *v567;
          }
          else
          {
            v495 = *(_QWORD *)(a3 + 16);
            v496 = v494 + 8;
            *(_DWORD *)v8 = v496;
            v497 = *(_DWORD **)(v495 + v494);
            if ( (unsigned int)v496 <= 0x2F )
            {
              v498 = v494 + 16;
              *(_DWORD *)v8 = v498;
              v499 = *(_QWORD *)(v495 + v496);
              if ( (unsigned int)v498 <= 0x2F )
              {
                v500 = (_QWORD *)(v498 + v495);
                *(_DWORD *)v8 = v494 + 24;
                goto LABEL_528;
              }
              v500 = *(_QWORD **)(v8 + 8);
LABEL_653:
              *(_QWORD *)(v8 + 8) = v500 + 1;
LABEL_528:
              *v497 = sub_7B2C0(a1, v499, *v500);
              return 1;
            }
            v568 = *(__int64 **)(v8 + 8);
          }
          v500 = v568 + 1;
          *(_QWORD *)(v8 + 8) = v568 + 1;
          v499 = *v568;
          goto LABEL_653;
        case 2016LL:
          v487 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v570 = *(__int64 **)(a3 + 8);
            v571 = v570 + 1;
            *(_QWORD *)(v8 + 8) = v570 + 1;
            v490 = *v570;
          }
          else
          {
            v488 = *(_QWORD *)(a3 + 16);
            v489 = v487 + 8;
            *(_DWORD *)v8 = v489;
            v490 = *(_QWORD *)(v488 + v487);
            if ( (unsigned int)v489 <= 0x2F )
            {
              v491 = v487 + 16;
              *(_DWORD *)v8 = v491;
              v492 = *(_QWORD *)(v488 + v489);
              if ( (unsigned int)v491 <= 0x2F )
              {
                v493 = (_QWORD *)(v491 + v488);
                *(_DWORD *)v8 = v487 + 24;
                goto LABEL_523;
              }
              v493 = *(_QWORD **)(v8 + 8);
LABEL_658:
              *(_QWORD *)(v8 + 8) = v493 + 1;
LABEL_523:
              sub_7C0A0(a1, v490, v492, *v493);
              return 1;
            }
            v571 = *(__int64 **)(v8 + 8);
          }
          v493 = v571 + 1;
          *(_QWORD *)(v8 + 8) = v571 + 1;
          v492 = *v571;
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
                                   v636.m128i_i32[0],
                                   v636.m128i_i32[2],
                                   v637.m128i_i32[0],
                                   v637.m128i_i32[2],
                                   v638,
                                   (__int64)v639,
                                   v640,
                                   v641,
                                   (__int64)s1[0]) )
            sub_45D00(a1);
          return 0;
        case 2020LL:
          v466 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v542 = *(_QWORD **)(a3 + 8);
            v470 = (int *)(v542 + 1);
            *(_QWORD *)(v8 + 8) = v542 + 1;
            v469 = *v542;
          }
          else
          {
            v467 = *(_QWORD *)(a3 + 16);
            v468 = v466 + 8;
            *(_DWORD *)v8 = v468;
            v469 = *(_QWORD *)(v467 + v466);
            if ( (unsigned int)v468 <= 0x2F )
            {
              v470 = (int *)(v468 + v467);
              *(_DWORD *)v8 = v466 + 16;
              goto LABEL_505;
            }
            v470 = *(int **)(v8 + 8);
          }
          *(_QWORD *)(v8 + 8) = v470 + 2;
LABEL_505:
          v471 = *v470;
          if ( *v470 == 176 || (v472 = 0, v471 == 256) )
          {
            if ( (unsigned __int8)getinf_flag() || (v635 = getinf(), v472 = 4, (v635 & 0x1006) == 0x1002) )
              v472 = 8;
          }
          *(_QWORD *)(v469 + 8) = v472;
          return 1;
        default:
          return 0;
      }
    }
    switch ( a2 )
    {
      case 1000LL:
        v101 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v604 = *(_QWORD ***)(a3 + 8);
          v605 = (__int64 *)(v604 + 1);
          *(_QWORD *)(v8 + 8) = v604 + 1;
          v104 = *v604;
        }
        else
        {
          v102 = *(_QWORD *)(a3 + 16);
          v103 = v101 + 8;
          *(_DWORD *)v8 = v103;
          v104 = *(unsigned __int64 **)(v102 + v101);
          if ( (unsigned int)v103 <= 0x2F )
          {
            v105 = v101 + 16;
            *(_DWORD *)v8 = v105;
            v106 = *(_QWORD *)(v102 + v103);
            if ( (unsigned int)v105 <= 0x2F )
            {
              v107 = v101 + 24;
              *(_DWORD *)v8 = v107;
              v108 = *(_DWORD *)(v102 + v105);
              if ( (unsigned int)v107 <= 0x2F )
              {
                v109 = v101 + 32;
                *(_DWORD *)v8 = v109;
                v110 = *(__int64 (__fastcall **)(char *, __int64))(v102 + v107);
                if ( (unsigned int)v109 <= 0x2F )
                {
                  v111 = (__int64 *)(v109 + v102);
                  *(_DWORD *)v8 = v101 + 40;
                  goto LABEL_115;
                }
                v111 = *(__int64 **)(v8 + 8);
LABEL_730:
                *(_QWORD *)(v8 + 8) = v111 + 1;
LABEL_115:
                *v104 = sub_30A00((_DWORD *)a1, v106, v108, v110, *v111);
                return 1;
              }
              v607 = *(__int64 (__fastcall ***)(char *, __int64))(v8 + 8);
LABEL_729:
              v111 = (__int64 *)(v607 + 1);
              *(_QWORD *)(v8 + 8) = v607 + 1;
              v110 = *v607;
              goto LABEL_730;
            }
            v606 = *(_DWORD **)(v8 + 8);
LABEL_728:
            v607 = (__int64 (__fastcall **)(char *, __int64))(v606 + 2);
            *(_QWORD *)(v8 + 8) = v606 + 2;
            v108 = *v606;
            goto LABEL_729;
          }
          v605 = *(__int64 **)(v8 + 8);
        }
        v606 = v605 + 1;
        *(_QWORD *)(v8 + 8) = v605 + 1;
        v106 = *v605;
        goto LABEL_728;
      case 1001LL:
        v96 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v601 = *(_QWORD ***)(a3 + 8);
          v100 = (__int64 *)(v601 + 1);
          *(_QWORD *)(v8 + 8) = v601 + 1;
          v99 = *v601;
        }
        else
        {
          v97 = *(_QWORD *)(a3 + 16);
          v98 = v96 + 8;
          *(_DWORD *)v8 = v98;
          v99 = *(__int64 **)(v97 + v96);
          if ( (unsigned int)v98 <= 0x2F )
          {
            v100 = (__int64 *)(v98 + v97);
            *(_DWORD *)v8 = v96 + 16;
            goto LABEL_108;
          }
          v100 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v100 + 1;
LABEL_108:
        *v99 = sub_30340(*v100);
        return 1;
      case 1002LL:
        v89 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v598 = *(__int64 ***)(a3 + 8);
          v599 = (__int64 *)(v598 + 1);
          *(_QWORD *)(v8 + 8) = v598 + 1;
          v92 = *v598;
        }
        else
        {
          v90 = *(_QWORD *)(a3 + 16);
          v91 = v89 + 8;
          *(_DWORD *)v8 = v91;
          v92 = *(__int64 **)(v90 + v89);
          if ( (unsigned int)v91 <= 0x2F )
          {
            v93 = v89 + 16;
            *(_DWORD *)v8 = v93;
            v94 = *(_QWORD *)(v90 + v91);
            if ( (unsigned int)v93 <= 0x2F )
            {
              v95 = (_DWORD *)(v93 + v90);
              *(_DWORD *)v8 = v89 + 24;
              return (int)sub_304A0(a1, v92, v94, *v95 != 0);
            }
            v95 = *(_DWORD **)(v8 + 8);
LABEL_716:
            *(_QWORD *)(v8 + 8) = v95 + 2;
            return (int)sub_304A0(a1, v92, v94, *v95 != 0);
          }
          v599 = *(__int64 **)(v8 + 8);
        }
        v95 = v599 + 1;
        *(_QWORD *)(v8 + 8) = v599 + 1;
        v94 = *v599;
        goto LABEL_716;
      case 1003LL:
        v137 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v600 = *(_QWORD ***)(a3 + 8);
          v141 = (__int64 *)(v600 + 1);
          *(_QWORD *)(v8 + 8) = v600 + 1;
          v140 = *v600;
        }
        else
        {
          v138 = *(_QWORD *)(a3 + 16);
          v139 = v137 + 8;
          *(_DWORD *)v8 = v139;
          v140 = *(__int64 **)(v138 + v137);
          if ( (unsigned int)v139 <= 0x2F )
          {
            v141 = (__int64 *)(v139 + v138);
            *(_DWORD *)v8 = v137 + 16;
            goto LABEL_137;
          }
          v141 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v141 + 1;
LABEL_137:
        *v140 = sub_302F0(*v141);
        return 1;
      case 1004LL:
        v119 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v569 = *(_DWORD ***)(a3 + 8);
          v123 = (_BYTE **)(v569 + 1);
          *(_QWORD *)(v8 + 8) = v569 + 1;
          v122 = *v569;
        }
        else
        {
          v120 = *(_QWORD *)(a3 + 16);
          v121 = v119 + 8;
          *(_DWORD *)v8 = v121;
          v122 = *(_DWORD **)(v120 + v119);
          if ( (unsigned int)v121 <= 0x2F )
          {
            v123 = (_BYTE **)(v121 + v120);
            *(_DWORD *)v8 = v119 + 16;
            goto LABEL_125;
          }
          v123 = *(_BYTE ***)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v123 + 1;
LABEL_125:
        *v122 = sub_302B0(*v123);
        return 1;
      case 1007LL:
        v124 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v523 = *(__int64 **)(a3 + 8);
          v524 = v523 + 1;
          *(_QWORD *)(v8 + 8) = v523 + 1;
          v127 = *v523;
        }
        else
        {
          v125 = *(_QWORD *)(a3 + 16);
          v126 = v124 + 8;
          *(_DWORD *)v8 = v126;
          v127 = *(_QWORD *)(v125 + v124);
          if ( (unsigned int)v126 <= 0x2F )
          {
            v128 = v124 + 16;
            *(_DWORD *)v8 = v128;
            v129 = *(_QWORD *)(v125 + v126);
            if ( (unsigned int)v128 <= 0x2F )
            {
              v130 = v124 + 24;
              *(_DWORD *)v8 = v130;
              v131 = *(_DWORD *)(v125 + v128);
              if ( (unsigned int)v130 <= 0x2F )
              {
                v132 = v124 + 32;
                *(_DWORD *)v8 = v132;
                v133 = *(unsigned int *)(v125 + v130);
                if ( (unsigned int)v132 <= 0x2F )
                {
                  v134 = v124 + 40;
                  *(_DWORD *)v8 = v134;
                  v135 = *(_QWORD *)(v125 + v132);
                  if ( (unsigned int)v134 <= 0x2F )
                  {
                    v136 = (__int64 *)(v134 + v125);
                    *(_DWORD *)v8 = v124 + 48;
                    return (unsigned __int8)sub_30880(a1, v127, v129, v131, v133, v135, *v136);
                  }
                  v136 = *(__int64 **)(v8 + 8);
LABEL_577:
                  *(_QWORD *)(v8 + 8) = v136 + 1;
                  return (unsigned __int8)sub_30880(a1, v127, v129, v131, v133, v135, *v136);
                }
                v527 = *(__int64 **)(v8 + 8);
LABEL_576:
                v136 = v527 + 1;
                *(_QWORD *)(v8 + 8) = v527 + 1;
                v135 = *v527;
                goto LABEL_577;
              }
              v526 = *(unsigned int **)(v8 + 8);
LABEL_575:
              v527 = (__int64 *)(v526 + 2);
              *(_QWORD *)(v8 + 8) = v526 + 2;
              v133 = *v526;
              goto LABEL_576;
            }
            v525 = *(unsigned int **)(v8 + 8);
LABEL_574:
            v526 = v525 + 2;
            *(_QWORD *)(v8 + 8) = v525 + 2;
            v131 = *v525;
            goto LABEL_575;
          }
          v524 = *(__int64 **)(v8 + 8);
        }
        v525 = (unsigned int *)(v524 + 1);
        *(_QWORD *)(v8 + 8) = v524 + 1;
        v129 = *v524;
        goto LABEL_574;
      case 1008LL:
        v112 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v521 = *(_QWORD ***)(a3 + 8);
          v522 = (_WORD **)(v521 + 1);
          *(_QWORD *)(v8 + 8) = v521 + 1;
          v115 = *v521;
        }
        else
        {
          v113 = *(_QWORD *)(a3 + 16);
          v114 = v112 + 8;
          *(_DWORD *)v8 = v114;
          v115 = *(_QWORD **)(v113 + v112);
          if ( (unsigned int)v114 <= 0x2F )
          {
            v116 = v112 + 16;
            *(_DWORD *)v8 = v116;
            v117 = *(_WORD **)(v113 + v114);
            if ( (unsigned int)v116 <= 0x2F )
            {
              v118 = (char **)(v116 + v113);
              *(_DWORD *)v8 = v112 + 24;
              goto LABEL_120;
            }
            v118 = *(char ***)(v8 + 8);
LABEL_571:
            *(_QWORD *)(v8 + 8) = v118 + 1;
LABEL_120:
            if ( !(unsigned __int8)sub_37A40(a1, v115, v117, *v118) )
              return -1;
            return 1;
          }
          v522 = *(_WORD ***)(v8 + 8);
        }
        v118 = (char **)(v522 + 1);
        *(_QWORD *)(v8 + 8) = v522 + 1;
        v117 = *v522;
        goto LABEL_571;
      case 1009LL:
        v80 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v543 = *(__int64 ***)(a3 + 8);
          v544 = v543 + 1;
          *(_QWORD *)(v8 + 8) = v543 + 1;
          v83 = *v543;
        }
        else
        {
          v81 = *(_QWORD *)(a3 + 16);
          v82 = v80 + 8;
          *(_DWORD *)v8 = v82;
          v83 = *(__int64 **)(v81 + v80);
          if ( (unsigned int)v82 <= 0x2F )
          {
            v84 = v80 + 16;
            *(_DWORD *)v8 = v84;
            v85 = *(_DWORD *)(v81 + v82);
            if ( (unsigned int)v84 <= 0x2F )
            {
              v86 = v80 + 24;
              *(_DWORD *)v8 = v86;
              v87 = *(__int64 (__fastcall **)(const char *, __int64, double))(v81 + v84);
              if ( (unsigned int)v86 <= 0x2F )
              {
                v88 = (__int64 *)(v86 + v81);
                *(_DWORD *)v8 = v80 + 32;
                goto LABEL_98;
              }
              v88 = *(__int64 **)(v8 + 8);
LABEL_607:
              *(_QWORD *)(v8 + 8) = v88 + 1;
LABEL_98:
              if ( !(unsigned __int8)sub_30CC0(a1, v83, v85, v87, *v88) )
                return -1;
              return 1;
            }
            v545 = *(__int64 (__fastcall ***)(const char *, __int64, double))(v8 + 8);
LABEL_606:
            v88 = (__int64 *)(v545 + 1);
            *(_QWORD *)(v8 + 8) = v545 + 1;
            v87 = *v545;
            goto LABEL_607;
          }
          v544 = *(_DWORD **)(v8 + 8);
        }
        v545 = (__int64 (__fastcall **)(const char *, __int64, double))(v544 + 2);
        *(_QWORD *)(v8 + 8) = v544 + 2;
        v85 = *v544;
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
      if ( (unsigned __int8)sub_55C30(*v38 & 0xFFFFFFFFFFFFFFFELL) )
        return 0;
      goto LABEL_559;
    case 3002LL:
LABEL_46:
      v36 = *(_DWORD *)a3;
      if ( *(_DWORD *)v8 > 0x2Fu )
        *(_QWORD *)(v8 + 8) += 8LL;
      else
        *(_DWORD *)v8 = v36 + 8;
      return get_sreg() == 1;
    case 3003LL:
      v70 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v625 = *(__int64 **)(a3 + 8);
        v74 = v625 + 1;
        *(_QWORD *)(v8 + 8) = v625 + 1;
        v73 = *v625;
      }
      else
      {
        v71 = *(_QWORD *)(a3 + 16);
        v72 = v70 + 8;
        *(_DWORD *)v8 = v72;
        v73 = *(_QWORD *)(v71 + v70);
        if ( (unsigned int)v72 <= 0x2F )
        {
          v74 = (_QWORD *)(v72 + v71);
          *(_DWORD *)v8 = v70 + 16;
          return (unsigned __int8)sub_5A510(v73, a1, *v74);
        }
        v74 = *(_QWORD **)(v8 + 8);
      }
      *(_QWORD *)(v8 + 8) = v74 + 1;
      return (unsigned __int8)sub_5A510(v73, a1, *v74);
    case 3004LL:
      v65 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v624 = *(__int64 **)(a3 + 8);
        v69 = v624 + 1;
        *(_QWORD *)(v8 + 8) = v624 + 1;
        v68 = *v624;
      }
      else
      {
        v66 = *(_QWORD *)(a3 + 16);
        v67 = v65 + 8;
        *(_DWORD *)v8 = v67;
        v68 = *(_QWORD *)(v66 + v65);
        if ( (unsigned int)v67 <= 0x2F )
        {
          v69 = (_QWORD *)(v67 + v66);
          *(_DWORD *)v8 = v65 + 16;
          goto LABEL_83;
        }
        v69 = *(_QWORD **)(v8 + 8);
      }
      *(_QWORD *)(v8 + 8) = v69 + 1;
LABEL_83:
      sub_5A480(*v69, a1, v68);
      return 1;
    case 3005LL:
      v75 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v602 = *(_DWORD ***)(a3 + 8);
        v79 = (__int64 *)(v602 + 1);
        *(_QWORD *)(v8 + 8) = v602 + 1;
        v78 = *v602;
      }
      else
      {
        v76 = *(_QWORD *)(a3 + 16);
        v77 = v75 + 8;
        *(_DWORD *)v8 = v77;
        v78 = *(_DWORD **)(v76 + v75);
        if ( (unsigned int)v77 <= 0x2F )
        {
          v79 = (__int64 *)(v77 + v76);
          *(_DWORD *)v8 = v75 + 16;
          goto LABEL_91;
        }
        v79 = *(__int64 **)(v8 + 8);
      }
      *(_QWORD *)(v8 + 8) = v79 + 1;
LABEL_91:
      if ( !sub_29790(*v79, v78) )
        return -1;
      return 1;
    case 3006LL:
      v39 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v628 = *(_DWORD ***)(a3 + 8);
        v629 = (__int64 *)(v628 + 1);
        *(_QWORD *)(v8 + 8) = v628 + 1;
        v42 = *v628;
      }
      else
      {
        v40 = *(_QWORD *)(a3 + 16);
        v41 = v39 + 8;
        *(_DWORD *)v8 = v41;
        v42 = *(_DWORD **)(v40 + v39);
        if ( (unsigned int)v41 <= 0x2F )
        {
          v43 = v39 + 16;
          *(_DWORD *)v8 = v43;
          v44 = *(_QWORD *)(v40 + v41);
          if ( (unsigned int)v43 <= 0x2F )
          {
            v45 = (_DWORD *)(v43 + v40);
            *(_DWORD *)v8 = v39 + 24;
            goto LABEL_57;
          }
          v45 = *(_DWORD **)(v8 + 8);
LABEL_770:
          *(_QWORD *)(v8 + 8) = v45 + 2;
LABEL_57:
          if ( !(unsigned __int8)sub_29880(v44, v42, *v45 != 0) )
            return -1;
          return 1;
        }
        v629 = *(__int64 **)(v8 + 8);
      }
      v45 = v629 + 1;
      *(_QWORD *)(v8 + 8) = v629 + 1;
      v44 = *v629;
      goto LABEL_770;
    case 3007LL:
      v35 = *(_DWORD *)a3;
      if ( *(_DWORD *)v8 > 0x2Fu )
        *(_QWORD *)(v8 + 8) += 8LL;
      else
        *(_DWORD *)v8 = v35 + 8;
      if ( !sub_25150() )
        return -1;
      return 1;
    case 3008LL:
      v33 = *(_DWORD *)a3;
      if ( *(_DWORD *)v8 > 0x2Fu )
      {
        v34 = *(__int64 **)(v8 + 8);
        *(_QWORD *)(v8 + 8) = v34 + 1;
      }
      else
      {
        v34 = (__int64 *)(*(_QWORD *)(v8 + 16) + v33);
        *(_DWORD *)v8 = v33 + 8;
      }
      return (unsigned int)sub_37FF0(a1, *v34);
    case 3009LL:
      v60 = *(_DWORD *)a3;
      if ( *(_DWORD *)v8 > 0x2Fu )
      {
        v61 = *(__int64 **)(v8 + 8);
        *(_QWORD *)(v8 + 8) = v61 + 1;
      }
      else
      {
        v61 = (__int64 *)(*(_QWORD *)(v8 + 16) + v60);
        *(_DWORD *)v8 = v60 + 8;
      }
      v62 = *v61;
      *(_DWORD *)v62 = *(_DWORD *)(a1 + 192);
      *(_DWORD *)(v62 + 4) = *(_DWORD *)(a1 + 196);
      *(_DWORD *)(v62 + 8) = *(_DWORD *)(a1 + 200);
      *(_DWORD *)(v62 + 12) = *(_DWORD *)(a1 + 204);
      *(_DWORD *)(v62 + 16) = *(_DWORD *)(a1 + 208);
      *(_DWORD *)(v62 + 20) = *(_DWORD *)(a1 + 212);
      *(_DWORD *)(v62 + 24) = *(_DWORD *)(a1 + 216);
      *(_DWORD *)(v62 + 28) = *(_DWORD *)(a1 + 220);
      *(_DWORD *)(v62 + 32) = *(_DWORD *)(a1 + 224);
      *(_DWORD *)(v62 + 36) = *(_DWORD *)(a1 + 228);
      *(_DWORD *)(v62 + 40) = *(_DWORD *)(a1 + 232);
      if ( v62 + 48 != a1 + 240 )
      {
        v63 = *(_QWORD *)(a1 + 248);
        if ( v63 > 1 )
        {
          v634 = *(const void **)(a1 + 240);
          if ( *(_QWORD *)(v62 + 64) < v63 )
            *(_QWORD *)(v62 + 48) = qvector_reserve();
          *(_QWORD *)(v62 + 56) = v63;
          memmove(*(void **)(v62 + 48), v634, v63 - 1);
          *(_BYTE *)(*(_QWORD *)(v62 + 48) + v63 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v62 + 56) = 0;
        }
      }
      if ( v62 + 72 != a1 + 264 )
      {
        v64 = *(_QWORD *)(a1 + 272);
        if ( v64 > 1 )
        {
          v633 = *(const void **)(a1 + 264);
          if ( *(_QWORD *)(v62 + 88) < v64 )
            *(_QWORD *)(v62 + 72) = qvector_reserve();
          *(_QWORD *)(v62 + 80) = v64;
          memmove(*(void **)(v62 + 72), v633, v64 - 1);
          *(_BYTE *)(*(_QWORD *)(v62 + 72) + v64 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v62 + 80) = 0;
        }
      }
      *(_BYTE *)(v62 + 96) = *(_BYTE *)(a1 + 288);
      *(_BYTE *)(v62 + 97) = *(_BYTE *)(a1 + 289);
      return 1;
    case 3010LL:
      v25 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v594 = *(_WORD ***)(a3 + 8);
        v595 = (void ***)(v594 + 1);
        *(_QWORD *)(v8 + 8) = v594 + 1;
        v28 = *v594;
LABEL_707:
        v31 = (__int64 *)(v595 + 1);
        *(_QWORD *)(v8 + 8) = v595 + 1;
        v30 = *v595;
        goto LABEL_708;
      }
      v26 = *(_QWORD *)(a3 + 16);
      v27 = v25 + 8;
      *(_DWORD *)v8 = v27;
      v28 = *(_WORD **)(v26 + v25);
      if ( (unsigned int)v27 > 0x2F )
      {
        v595 = *(void ****)(v8 + 8);
        goto LABEL_707;
      }
      v29 = v25 + 16;
      *(_DWORD *)v8 = v29;
      v30 = *(void ***)(v26 + v27);
      if ( (unsigned int)v29 <= 0x2F )
      {
        v31 = (__int64 *)(v29 + v26);
        *(_DWORD *)v8 = v25 + 24;
        goto LABEL_34;
      }
      v31 = *(__int64 **)(v8 + 8);
LABEL_708:
      *(_QWORD *)(v8 + 8) = v31 + 1;
LABEL_34:
      v32 = sub_2F860(a1, (__int64)s1, *v31);
      result = -1;
      if ( v32 )
      {
        if ( v28 )
          *v28 = s1[1];
        if ( v30 )
          *v30 = s1[0];
        return 1;
      }
      return result;
    case 3011LL:
      v18 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v596 = *(__int64 **)(a3 + 8);
        v597 = v596 + 1;
        *(_QWORD *)(v8 + 8) = v596 + 1;
        v21 = *v596;
      }
      else
      {
        v19 = *(_QWORD *)(a3 + 16);
        v20 = v18 + 8;
        *(_DWORD *)v8 = v20;
        v21 = *(_QWORD *)(v19 + v18);
        if ( (unsigned int)v20 <= 0x2F )
        {
          v22 = v18 + 16;
          *(_DWORD *)v8 = v22;
          v23 = *(_QWORD *)(v19 + v20);
          if ( (unsigned int)v22 <= 0x2F )
          {
            v24 = (_QWORD *)(v22 + v19);
            *(_DWORD *)v8 = v18 + 24;
            goto LABEL_28;
          }
          v24 = *(_QWORD **)(v8 + 8);
LABEL_713:
          *(_QWORD *)(v8 + 8) = v24 + 1;
LABEL_28:
          sub_59BD0(*v24, v21, v23);
          return 1;
        }
        v597 = *(__int64 **)(v8 + 8);
      }
      v24 = v597 + 1;
      *(_QWORD *)(v8 + 8) = v597 + 1;
      v23 = *v597;
      goto LABEL_713;
    case 3012LL:
      v53 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v622 = *(__int64 **)(a3 + 8);
        v623 = v622 + 1;
        *(_QWORD *)(v8 + 8) = v622 + 1;
        v56 = *v622;
      }
      else
      {
        v54 = *(_QWORD *)(a3 + 16);
        v55 = v53 + 8;
        *(_DWORD *)v8 = v55;
        v56 = *(_QWORD *)(v54 + v53);
        if ( (unsigned int)v55 <= 0x2F )
        {
          v57 = v53 + 16;
          *(_DWORD *)v8 = v57;
          v58 = *(_QWORD *)(v54 + v55);
          if ( (unsigned int)v57 <= 0x2F )
          {
            v59 = (_QWORD *)(v57 + v54);
            *(_DWORD *)v8 = v53 + 24;
            return (unsigned __int8)sub_59F50(v56, v58, *v59);
          }
          v59 = *(_QWORD **)(v8 + 8);
LABEL_759:
          *(_QWORD *)(v8 + 8) = v59 + 1;
          return (unsigned __int8)sub_59F50(v56, v58, *v59);
        }
        v623 = *(__int64 **)(v8 + 8);
      }
      v59 = v623 + 1;
      *(_QWORD *)(v8 + 8) = v623 + 1;
      v58 = *v623;
      goto LABEL_759;
    case 3013LL:
      v46 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v592 = *(__int64 **)(a3 + 8);
        v593 = v592 + 1;
        *(_QWORD *)(v8 + 8) = v592 + 1;
        v49 = *v592;
      }
      else
      {
        v47 = *(_QWORD *)(a3 + 16);
        v48 = v46 + 8;
        *(_DWORD *)v8 = v48;
        v49 = *(_QWORD *)(v47 + v46);
        if ( (unsigned int)v48 <= 0x2F )
        {
          v50 = v46 + 16;
          *(_DWORD *)v8 = v50;
          v51 = *(_QWORD *)(v47 + v48);
          if ( (unsigned int)v50 <= 0x2F )
          {
            v52 = (_DWORD *)(v50 + v47);
            *(_DWORD *)v8 = v46 + 24;
            goto LABEL_63;
          }
          v52 = *(_DWORD **)(v8 + 8);
LABEL_705:
          *(_QWORD *)(v8 + 8) = v52 + 2;
LABEL_63:
          if ( *v52 || !(unsigned __int8)sub_3AC40(a1, v49, v51) )
            return -1;
          return 1;
        }
        v593 = *(__int64 **)(v8 + 8);
      }
      v52 = v593 + 1;
      *(_QWORD *)(v8 + 8) = v593 + 1;
      v51 = *v593;
      goto LABEL_705;
    default:
      v515 = *(_DWORD *)a3;
      if ( *(_DWORD *)v8 > 0x2Fu )
      {
        v516 = *(_QWORD **)(v8 + 8);
        *(_QWORD *)(v8 + 8) = v516 + 1;
      }
      else
      {
        v516 = (_QWORD *)(*(_QWORD *)(v8 + 16) + v515);
        *(_DWORD *)v8 = v515 + 8;
      }
      if ( (unsigned __int8)sub_55C30(*v516 & 0xFFFFFFFFFFFFFFFELL) )
        return 0;
LABEL_559:
      split_sreg_range();
      return 0;
  }
}

