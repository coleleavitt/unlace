unsigned __int64 __fastcall ida_mcp::tools::segment_manipulation::register_tools(
        ida_mcp::tools::segment_manipulation *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  const __m128i *v14; // rsi
  __int64 *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  const __m128i *v26; // rsi
  __int64 *v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  const __m128i *v38; // rsi
  __int64 *v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 *v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 *v56; // r13
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 *v64; // r13
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 *v70; // r13
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __m128i v75; // xmm0
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 *v79; // r13
  __int64 v80; // rdx
  void **v81; // r13
  __m128i si128; // xmm2
  __int64 *v83; // r13
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 *v91; // r13
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 *v100; // r13
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 *v118; // r13
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
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 *v138; // r14
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __m128i v143; // xmm0
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  char v150; // si
  __int64 v151; // rax
  void **v152; // r14
  __m128i v153; // xmm3
  __int64 *v154; // r14
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 *v162; // r14
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rax
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 *v171; // r14
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 *v185; // r14
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 v190; // rax
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 *v194; // r14
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // rcx
  __int64 v212; // r8
  __int64 v213; // r9
  __int64 *v214; // r14
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 *v219; // r14
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // r9
  __m128i v224; // xmm0
  __int64 v225; // rcx
  __int64 v226; // r8
  __int64 v227; // r9
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  char v231; // si
  __int64 v232; // rax
  void **v233; // r14
  __m128i v234; // xmm4
  __int64 *v235; // r14
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // r8
  __int64 v239; // r9
  __int64 v240; // rcx
  __int64 v241; // r8
  __int64 v242; // r9
  __int64 *v243; // r14
  __int64 v244; // rdx
  __int64 v245; // rcx
  __int64 v246; // r8
  __int64 v247; // r9
  __int64 v248; // rax
  __int64 v249; // rcx
  __int64 v250; // r8
  __int64 v251; // r9
  __int64 *v252; // r14
  __int64 v253; // rdx
  __int64 v254; // rcx
  __int64 v255; // r8
  __int64 v256; // r9
  __int64 v257; // rcx
  __int64 v258; // r8
  __int64 v259; // r9
  __int64 v260; // rcx
  __int64 v261; // r8
  __int64 v262; // r9
  __int64 v263; // rcx
  __int64 v264; // r8
  __int64 v265; // r9
  __int64 v266; // rax
  __int64 v267; // rax
  __int64 v268; // rcx
  __int64 v269; // r8
  __int64 v270; // r9
  __int64 *v271; // r14
  __int64 v272; // rdx
  __int64 v273; // rcx
  __int64 v274; // r8
  __int64 v275; // r9
  __int64 v276; // rcx
  __int64 v277; // r8
  __int64 v278; // r9
  __int64 v279; // rcx
  __int64 v280; // r8
  __int64 v281; // r9
  __int64 v282; // rcx
  __int64 v283; // r8
  __int64 v284; // r9
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // r9
  __int64 v288; // rcx
  __int64 v289; // r8
  __int64 v290; // r9
  __int64 *v291; // r14
  __int64 v292; // rdx
  __int64 v293; // rcx
  __int64 v294; // r8
  __int64 v295; // r9
  __int64 v296; // rax
  __m128i v297; // xmm0
  __int64 v298; // rcx
  __int64 v299; // r8
  __int64 v300; // r9
  __int64 v301; // rcx
  __int64 v302; // r8
  __int64 v303; // r9
  char v304; // si
  __int64 v305; // rax
  void **v306; // r14
  __m128i v307; // xmm5
  __int64 *v308; // r13
  __int64 v309; // rdx
  __int64 v310; // rcx
  __int64 v311; // r8
  __int64 v312; // r9
  __int64 v313; // rcx
  __int64 v314; // r8
  __int64 v315; // r9
  __int64 *v316; // r13
  __int64 v317; // rdx
  __int64 v318; // rcx
  __int64 v319; // r8
  __int64 v320; // r9
  __int64 v321; // rax
  __int64 *v322; // rsi
  __int64 v323; // rcx
  __int64 v324; // r8
  __int64 v325; // r9
  __int64 *v326; // r13
  __int64 v327; // rdx
  __int64 v328; // rcx
  __int64 v329; // r8
  __int64 v330; // r9
  __int64 v331; // rcx
  __int64 v332; // r8
  __int64 v333; // r9
  __int64 v334; // rcx
  __int64 v335; // r8
  __int64 v336; // r9
  __int64 v337; // rcx
  __int64 v338; // r8
  __int64 v339; // r9
  __int64 *v340; // r13
  __int64 v341; // rdx
  __int64 v342; // rcx
  __int64 v343; // r8
  __int64 v344; // r9
  __int64 v345; // rax
  __int64 v346; // rcx
  __int64 v347; // r9
  __int64 *v348; // r13
  __int64 v349; // rdx
  __int64 v350; // rcx
  __int64 v351; // r8
  __int64 v352; // r9
  __int64 v353; // rcx
  __int64 v354; // r8
  __int64 v355; // r9
  __int64 v356; // rcx
  __int64 v357; // r8
  __int64 v358; // r9
  __int64 v359; // rcx
  __int64 v360; // r8
  __int64 v361; // r9
  __int64 v362; // rcx
  __int64 v363; // r8
  __int64 v364; // r9
  __int64 *v365; // r13
  __int64 v366; // rdx
  __int64 v367; // rcx
  __int64 v368; // r8
  __int64 v369; // r9
  __int64 v370; // rcx
  __int64 v371; // r8
  __int64 v372; // r9
  __int64 v373; // rcx
  __int64 v374; // r8
  __int64 v375; // r9
  __int64 v376; // rcx
  __int64 v377; // r8
  __int64 v378; // r9
  __int64 v379; // rcx
  __int64 v380; // r8
  __int64 v381; // r9
  __int64 v382; // rcx
  __int64 v383; // r8
  __int64 v384; // r9
  __int64 *v385; // r13
  __int64 v386; // rdx
  __int64 v387; // rcx
  __int64 v388; // r8
  __int64 v389; // r9
  __m128i v390; // xmm0
  __int64 v391; // rcx
  __int64 v392; // r8
  __int64 v393; // r9
  __int64 v394; // rcx
  __int64 v395; // r8
  __int64 v396; // r9
  __int64 v397; // rax
  void **v398; // r13
  __int64 *v399; // r13
  __m128i v400; // xmm6
  __int64 *v401; // r13
  __int64 v402; // rdx
  __int64 v403; // rcx
  __int64 v404; // r8
  __int64 v405; // r9
  __int64 v406; // rcx
  __int64 v407; // r8
  __int64 v408; // r9
  __int64 *v409; // r13
  __int64 v410; // rdx
  __int64 v411; // rcx
  __int64 v412; // r8
  __int64 v413; // r9
  __int64 v414; // rcx
  __int64 v415; // r8
  __int64 v416; // r9
  __int64 *v417; // r13
  __int64 v418; // rdx
  __int64 v419; // rcx
  __int64 v420; // r8
  __int64 v421; // r9
  __int64 v422; // rcx
  __int64 v423; // r8
  __int64 v424; // r9
  __int64 v425; // rcx
  __int64 v426; // r8
  __int64 v427; // r9
  __int64 v428; // rcx
  __int64 v429; // r8
  __int64 v430; // r9
  __int64 *v431; // r13
  __int64 v432; // rdx
  __int64 v433; // rcx
  __int64 v434; // r8
  __int64 v435; // r9
  __int64 v436; // rcx
  __int64 v437; // r8
  __int64 v438; // r9
  __int64 *v439; // r13
  __int64 v440; // rdx
  __int64 v441; // rcx
  __int64 v442; // r8
  __int64 v443; // r9
  __int64 v444; // rcx
  __int64 v445; // r8
  __int64 v446; // r9
  __int64 v447; // rcx
  __int64 v448; // r8
  __int64 v449; // r9
  __int64 v450; // rcx
  __int64 v451; // r8
  __int64 v452; // r9
  __int64 v453; // rax
  __int64 v454; // rcx
  __int64 v455; // r8
  __int64 v456; // r9
  __int64 *v457; // r13
  __int64 v458; // rdx
  __int64 v459; // rcx
  __int64 v460; // r8
  __int64 v461; // r9
  __int64 v462; // rcx
  __int64 v463; // r8
  __int64 v464; // r9
  __int64 v465; // rcx
  __int64 v466; // r8
  __int64 v467; // r9
  __int64 v468; // rcx
  __int64 v469; // r8
  __int64 v470; // r9
  __int64 v471; // rcx
  __int64 v472; // r8
  __int64 v473; // r9
  __int64 *v474; // r13
  __int64 v475; // rdx
  __int64 v476; // rcx
  __int64 v477; // r8
  __int64 v478; // r9
  __int64 v479; // rcx
  __int64 v480; // r8
  __int64 v481; // r9
  __int64 v482; // rcx
  __int64 v483; // r8
  __int64 v484; // r9
  __int64 v485; // rcx
  __int64 v486; // r8
  __int64 v487; // r9
  __int64 v488; // rcx
  __int64 v489; // r8
  __int64 v490; // r9
  __int64 v491; // rcx
  __int64 v492; // r8
  __int64 v493; // r9
  __int64 *v494; // r13
  __int64 v495; // rdx
  __int64 v496; // rcx
  __int64 v497; // r8
  __int64 v498; // r9
  __m128i v499; // xmm0
  __int64 v500; // rcx
  __int64 v501; // r8
  __int64 v502; // r9
  __int64 v503; // rcx
  __int64 v504; // r8
  __int64 v505; // r9
  char v506; // si
  __int64 *v507; // r12
  __int64 v508; // rax
  void **v509; // rbp
  __m128i v510; // xmm7
  int v512; // [rsp+0h] [rbp-908h]
  int v513; // [rsp+0h] [rbp-908h]
  int v514; // [rsp+0h] [rbp-908h]
  int v515; // [rsp+0h] [rbp-908h]
  int v516; // [rsp+0h] [rbp-908h]
  int v517; // [rsp+0h] [rbp-908h]
  int v518; // [rsp+0h] [rbp-908h]
  const __m128i *v519; // [rsp+0h] [rbp-908h]
  int v520; // [rsp+0h] [rbp-908h]
  int v521; // [rsp+0h] [rbp-908h]
  int v522; // [rsp+0h] [rbp-908h]
  int v523; // [rsp+0h] [rbp-908h]
  int v524; // [rsp+0h] [rbp-908h]
  int v525; // [rsp+0h] [rbp-908h]
  int v526; // [rsp+0h] [rbp-908h]
  int v527; // [rsp+0h] [rbp-908h]
  _QWORD *v528; // [rsp+0h] [rbp-908h]
  int v529; // [rsp+0h] [rbp-908h]
  int v530; // [rsp+0h] [rbp-908h]
  __int64 v531; // [rsp+0h] [rbp-908h]
  int v532; // [rsp+0h] [rbp-908h]
  int v533; // [rsp+0h] [rbp-908h]
  int v534; // [rsp+0h] [rbp-908h]
  int v535; // [rsp+0h] [rbp-908h]
  int v536; // [rsp+0h] [rbp-908h]
  int v537; // [rsp+0h] [rbp-908h]
  int v538; // [rsp+0h] [rbp-908h]
  int v539; // [rsp+0h] [rbp-908h]
  int v540; // [rsp+0h] [rbp-908h]
  int v541; // [rsp+0h] [rbp-908h]
  int v542; // [rsp+0h] [rbp-908h]
  int v543; // [rsp+0h] [rbp-908h]
  int v544; // [rsp+0h] [rbp-908h]
  int v545; // [rsp+0h] [rbp-908h]
  _QWORD *v546; // [rsp+0h] [rbp-908h]
  int v547; // [rsp+0h] [rbp-908h]
  int v548; // [rsp+0h] [rbp-908h]
  __int64 v549; // [rsp+0h] [rbp-908h]
  int v550; // [rsp+0h] [rbp-908h]
  int v551; // [rsp+0h] [rbp-908h]
  int v552; // [rsp+0h] [rbp-908h]
  int v553; // [rsp+0h] [rbp-908h]
  int v554; // [rsp+0h] [rbp-908h]
  int v555; // [rsp+0h] [rbp-908h]
  int v556; // [rsp+0h] [rbp-908h]
  int v557; // [rsp+0h] [rbp-908h]
  int v558; // [rsp+0h] [rbp-908h]
  int v559; // [rsp+0h] [rbp-908h]
  int v560; // [rsp+0h] [rbp-908h]
  int v561; // [rsp+0h] [rbp-908h]
  int v562; // [rsp+0h] [rbp-908h]
  int v563; // [rsp+0h] [rbp-908h]
  int v564; // [rsp+0h] [rbp-908h]
  int v565; // [rsp+0h] [rbp-908h]
  _QWORD *v566; // [rsp+0h] [rbp-908h]
  int v567; // [rsp+0h] [rbp-908h]
  int v568; // [rsp+0h] [rbp-908h]
  __int64 v569; // [rsp+0h] [rbp-908h]
  int v570; // [rsp+0h] [rbp-908h]
  int v571; // [rsp+0h] [rbp-908h]
  int v572; // [rsp+0h] [rbp-908h]
  int v573; // [rsp+0h] [rbp-908h]
  int v574; // [rsp+0h] [rbp-908h]
  int v575; // [rsp+0h] [rbp-908h]
  int v576; // [rsp+0h] [rbp-908h]
  int v577; // [rsp+0h] [rbp-908h]
  int v578; // [rsp+0h] [rbp-908h]
  int v579; // [rsp+0h] [rbp-908h]
  int v580; // [rsp+0h] [rbp-908h]
  int v581; // [rsp+0h] [rbp-908h]
  int v582; // [rsp+0h] [rbp-908h]
  int v583; // [rsp+0h] [rbp-908h]
  int v584; // [rsp+0h] [rbp-908h]
  int v585; // [rsp+0h] [rbp-908h]
  int v586; // [rsp+0h] [rbp-908h]
  int v587; // [rsp+0h] [rbp-908h]
  int v588; // [rsp+0h] [rbp-908h]
  int v589; // [rsp+0h] [rbp-908h]
  _QWORD *v590; // [rsp+0h] [rbp-908h]
  int v591; // [rsp+0h] [rbp-908h]
  int v592; // [rsp+0h] [rbp-908h]
  __int64 v593; // [rsp+0h] [rbp-908h]
  int v594; // [rsp+0h] [rbp-908h]
  int v595; // [rsp+0h] [rbp-908h]
  int v596; // [rsp+0h] [rbp-908h]
  int v597; // [rsp+0h] [rbp-908h]
  int v598; // [rsp+0h] [rbp-908h]
  int v599; // [rsp+0h] [rbp-908h]
  int v600; // [rsp+0h] [rbp-908h]
  int v601; // [rsp+0h] [rbp-908h]
  int v602; // [rsp+0h] [rbp-908h]
  int v603; // [rsp+0h] [rbp-908h]
  int v604; // [rsp+0h] [rbp-908h]
  int v605; // [rsp+0h] [rbp-908h]
  int v606; // [rsp+0h] [rbp-908h]
  int v607; // [rsp+0h] [rbp-908h]
  int v608; // [rsp+0h] [rbp-908h]
  int v609; // [rsp+0h] [rbp-908h]
  int v610; // [rsp+0h] [rbp-908h]
  int v611; // [rsp+0h] [rbp-908h]
  int v612; // [rsp+0h] [rbp-908h]
  int v613; // [rsp+0h] [rbp-908h]
  int v614; // [rsp+0h] [rbp-908h]
  int v615; // [rsp+0h] [rbp-908h]
  int v616; // [rsp+0h] [rbp-908h]
  int v617; // [rsp+0h] [rbp-908h]
  int v618; // [rsp+0h] [rbp-908h]
  _QWORD *v619; // [rsp+0h] [rbp-908h]
  int v620; // [rsp+0h] [rbp-908h]
  int v621; // [rsp+0h] [rbp-908h]
  __int64 v622; // [rsp+0h] [rbp-908h]
  int v623; // [rsp+0h] [rbp-908h]
  int v624; // [rsp+0h] [rbp-908h]
  int v625; // [rsp+0h] [rbp-908h]
  int v626; // [rsp+0h] [rbp-908h]
  int v627; // [rsp+0h] [rbp-908h]
  int v628; // [rsp+0h] [rbp-908h]
  int v629; // [rsp+0h] [rbp-908h]
  int v630; // [rsp+0h] [rbp-908h]
  int v631; // [rsp+0h] [rbp-908h]
  int v632; // [rsp+0h] [rbp-908h]
  int v633; // [rsp+0h] [rbp-908h]
  int v634; // [rsp+8h] [rbp-900h]
  int v635; // [rsp+8h] [rbp-900h]
  int v636; // [rsp+8h] [rbp-900h]
  int v637; // [rsp+8h] [rbp-900h]
  int v638; // [rsp+8h] [rbp-900h]
  int v639; // [rsp+8h] [rbp-900h]
  const __m128i *v640; // [rsp+8h] [rbp-900h]
  int v641; // [rsp+8h] [rbp-900h]
  int v642; // [rsp+8h] [rbp-900h]
  __int64 v643; // [rsp+8h] [rbp-900h]
  int v644; // [rsp+8h] [rbp-900h]
  int v645; // [rsp+8h] [rbp-900h]
  __int64 v646; // [rsp+8h] [rbp-900h]
  int v647; // [rsp+8h] [rbp-900h]
  __int64 v648; // [rsp+8h] [rbp-900h]
  int v649; // [rsp+8h] [rbp-900h]
  __int64 v650; // [rsp+8h] [rbp-900h]
  int v651; // [rsp+8h] [rbp-900h]
  __int64 v652; // [rsp+8h] [rbp-900h]
  __int64 v653; // [rsp+8h] [rbp-900h]
  __int64 v654; // [rsp+8h] [rbp-900h]
  __int64 v655; // [rsp+8h] [rbp-900h]
  int v656; // [rsp+8h] [rbp-900h]
  __int64 v657; // [rsp+8h] [rbp-900h]
  __int64 v658; // [rsp+8h] [rbp-900h]
  __int64 v659; // [rsp+8h] [rbp-900h]
  __int64 v660; // [rsp+8h] [rbp-900h]
  __int64 v661; // [rsp+8h] [rbp-900h]
  int v662; // [rsp+8h] [rbp-900h]
  _QWORD *v663; // [rsp+8h] [rbp-900h]
  __int64 v664; // [rsp+8h] [rbp-900h]
  int v665; // [rsp+8h] [rbp-900h]
  __int64 v666; // [rsp+8h] [rbp-900h]
  int v667; // [rsp+8h] [rbp-900h]
  __int64 v668; // [rsp+8h] [rbp-900h]
  int v669; // [rsp+8h] [rbp-900h]
  __int64 v670; // [rsp+8h] [rbp-900h]
  __int64 v671; // [rsp+8h] [rbp-900h]
  __int64 v672; // [rsp+8h] [rbp-900h]
  int v673; // [rsp+8h] [rbp-900h]
  __int64 v674; // [rsp+8h] [rbp-900h]
  int v675; // [rsp+8h] [rbp-900h]
  __int64 v676; // [rsp+8h] [rbp-900h]
  __int64 v677; // [rsp+8h] [rbp-900h]
  __int64 v678; // [rsp+8h] [rbp-900h]
  __int64 v679; // [rsp+8h] [rbp-900h]
  __int64 v680; // [rsp+8h] [rbp-900h]
  int v681; // [rsp+8h] [rbp-900h]
  _QWORD *v682; // [rsp+8h] [rbp-900h]
  __int64 v683; // [rsp+8h] [rbp-900h]
  __int64 v684; // [rsp+8h] [rbp-900h]
  int v685; // [rsp+8h] [rbp-900h]
  __int64 v686; // [rsp+8h] [rbp-900h]
  int v687; // [rsp+8h] [rbp-900h]
  __int64 v688; // [rsp+8h] [rbp-900h]
  int v689; // [rsp+8h] [rbp-900h]
  __int64 v690; // [rsp+8h] [rbp-900h]
  __int64 v691; // [rsp+8h] [rbp-900h]
  __int64 v692; // [rsp+8h] [rbp-900h]
  __int64 v693; // [rsp+8h] [rbp-900h]
  int v694; // [rsp+8h] [rbp-900h]
  __int64 v695; // [rsp+8h] [rbp-900h]
  __int64 v696; // [rsp+8h] [rbp-900h]
  __int64 v697; // [rsp+8h] [rbp-900h]
  __int64 v698; // [rsp+8h] [rbp-900h]
  __int64 v699; // [rsp+8h] [rbp-900h]
  int v700; // [rsp+8h] [rbp-900h]
  _QWORD *v701; // [rsp+8h] [rbp-900h]
  __int64 v702; // [rsp+8h] [rbp-900h]
  int v703; // [rsp+8h] [rbp-900h]
  __int64 v704; // [rsp+8h] [rbp-900h]
  int v705; // [rsp+8h] [rbp-900h]
  _QWORD *v706; // [rsp+8h] [rbp-900h]
  int v707; // [rsp+8h] [rbp-900h]
  __int64 v708; // [rsp+8h] [rbp-900h]
  __int64 v709; // [rsp+8h] [rbp-900h]
  __int64 v710; // [rsp+8h] [rbp-900h]
  int v711; // [rsp+8h] [rbp-900h]
  __int64 v712; // [rsp+8h] [rbp-900h]
  int v713; // [rsp+8h] [rbp-900h]
  __int64 v714; // [rsp+8h] [rbp-900h]
  __int64 v715; // [rsp+8h] [rbp-900h]
  __int64 v716; // [rsp+8h] [rbp-900h]
  __int64 v717; // [rsp+8h] [rbp-900h]
  int v718; // [rsp+8h] [rbp-900h]
  __int64 v719; // [rsp+8h] [rbp-900h]
  __int64 v720; // [rsp+8h] [rbp-900h]
  __int64 v721; // [rsp+8h] [rbp-900h]
  __int64 v722; // [rsp+8h] [rbp-900h]
  __int64 v723; // [rsp+8h] [rbp-900h]
  int v724; // [rsp+8h] [rbp-900h]
  __int64 v725; // [rsp+8h] [rbp-900h]
  __int64 v726; // [rsp+8h] [rbp-900h]
  int v727; // [rsp+8h] [rbp-900h]
  __int64 v728; // [rsp+8h] [rbp-900h]
  int v729; // [rsp+8h] [rbp-900h]
  __int64 v730; // [rsp+8h] [rbp-900h]
  int v731; // [rsp+8h] [rbp-900h]
  __int64 v732; // [rsp+8h] [rbp-900h]
  __int64 v733; // [rsp+8h] [rbp-900h]
  __int64 v734; // [rsp+8h] [rbp-900h]
  int v735; // [rsp+8h] [rbp-900h]
  _QWORD *v736; // [rsp+8h] [rbp-900h]
  int v737; // [rsp+8h] [rbp-900h]
  __int64 v738; // [rsp+8h] [rbp-900h]
  __int64 v739; // [rsp+8h] [rbp-900h]
  __int64 v740; // [rsp+8h] [rbp-900h]
  __int64 v741; // [rsp+8h] [rbp-900h]
  int v742; // [rsp+8h] [rbp-900h]
  __int64 v743; // [rsp+8h] [rbp-900h]
  __int64 v744; // [rsp+8h] [rbp-900h]
  __int64 v745; // [rsp+8h] [rbp-900h]
  __int64 v746; // [rsp+8h] [rbp-900h]
  int v747; // [rsp+8h] [rbp-900h]
  __int64 v748; // [rsp+8h] [rbp-900h]
  __int64 v749; // [rsp+8h] [rbp-900h]
  __int64 v750; // [rsp+8h] [rbp-900h]
  __int64 v751; // [rsp+8h] [rbp-900h]
  __int64 v752; // [rsp+8h] [rbp-900h]
  int v753; // [rsp+8h] [rbp-900h]
  __int64 v754; // [rsp+8h] [rbp-900h]
  __int64 v755; // [rsp+8h] [rbp-900h]
  __int64 v756; // [rsp+10h] [rbp-8F8h]
  __int64 v757; // [rsp+10h] [rbp-8F8h]
  __int64 v758; // [rsp+10h] [rbp-8F8h]
  __int64 v759; // [rsp+10h] [rbp-8F8h]
  __int64 v760; // [rsp+10h] [rbp-8F8h]
  __int64 v761; // [rsp+10h] [rbp-8F8h]
  __int64 v762; // [rsp+10h] [rbp-8F8h]
  __int64 v763; // [rsp+10h] [rbp-8F8h]
  __int64 v764; // [rsp+10h] [rbp-8F8h]
  int v765; // [rsp+10h] [rbp-8F8h]
  __int64 v766; // [rsp+10h] [rbp-8F8h]
  __int64 v767; // [rsp+10h] [rbp-8F8h]
  int v768; // [rsp+10h] [rbp-8F8h]
  __int64 v769; // [rsp+10h] [rbp-8F8h]
  int v770; // [rsp+10h] [rbp-8F8h]
  __int64 v771; // [rsp+10h] [rbp-8F8h]
  _QWORD *v772; // [rsp+10h] [rbp-8F8h]
  __int64 v773; // [rsp+10h] [rbp-8F8h]
  int v774; // [rsp+10h] [rbp-8F8h]
  int v775; // [rsp+10h] [rbp-8F8h]
  int v776; // [rsp+10h] [rbp-8F8h]
  int v777; // [rsp+10h] [rbp-8F8h]
  __int64 v778; // [rsp+10h] [rbp-8F8h]
  int v779; // [rsp+10h] [rbp-8F8h]
  int v780; // [rsp+10h] [rbp-8F8h]
  int v781; // [rsp+10h] [rbp-8F8h]
  int v782; // [rsp+10h] [rbp-8F8h]
  int v783; // [rsp+10h] [rbp-8F8h]
  __int64 v784; // [rsp+10h] [rbp-8F8h]
  int v785; // [rsp+10h] [rbp-8F8h]
  int v786; // [rsp+10h] [rbp-8F8h]
  __int64 v787; // [rsp+10h] [rbp-8F8h]
  int v788; // [rsp+10h] [rbp-8F8h]
  __int64 v789; // [rsp+10h] [rbp-8F8h]
  _QWORD *v790; // [rsp+10h] [rbp-8F8h]
  __int64 v791; // [rsp+10h] [rbp-8F8h]
  int v792; // [rsp+10h] [rbp-8F8h]
  int v793; // [rsp+10h] [rbp-8F8h]
  int v794; // [rsp+10h] [rbp-8F8h]
  __int64 v795; // [rsp+10h] [rbp-8F8h]
  int v796; // [rsp+10h] [rbp-8F8h]
  __int64 v797; // [rsp+10h] [rbp-8F8h]
  int v798; // [rsp+10h] [rbp-8F8h]
  int v799; // [rsp+10h] [rbp-8F8h]
  int v800; // [rsp+10h] [rbp-8F8h]
  int v801; // [rsp+10h] [rbp-8F8h]
  int v802; // [rsp+10h] [rbp-8F8h]
  __int64 v803; // [rsp+10h] [rbp-8F8h]
  __int64 v804; // [rsp+10h] [rbp-8F8h]
  int v805; // [rsp+10h] [rbp-8F8h]
  int v806; // [rsp+10h] [rbp-8F8h]
  __int64 v807; // [rsp+10h] [rbp-8F8h]
  int v808; // [rsp+10h] [rbp-8F8h]
  __int64 v809; // [rsp+10h] [rbp-8F8h]
  _QWORD *v810; // [rsp+10h] [rbp-8F8h]
  __int64 v811; // [rsp+10h] [rbp-8F8h]
  int v812; // [rsp+10h] [rbp-8F8h]
  int v813; // [rsp+10h] [rbp-8F8h]
  int v814; // [rsp+10h] [rbp-8F8h]
  int v815; // [rsp+10h] [rbp-8F8h]
  __int64 v816; // [rsp+10h] [rbp-8F8h]
  int v817; // [rsp+10h] [rbp-8F8h]
  int v818; // [rsp+10h] [rbp-8F8h]
  int v819; // [rsp+10h] [rbp-8F8h]
  int v820; // [rsp+10h] [rbp-8F8h]
  int v821; // [rsp+10h] [rbp-8F8h]
  __int64 v822; // [rsp+10h] [rbp-8F8h]
  int v823; // [rsp+10h] [rbp-8F8h]
  int v824; // [rsp+10h] [rbp-8F8h]
  __int64 v825; // [rsp+10h] [rbp-8F8h]
  int v826; // [rsp+10h] [rbp-8F8h]
  __int64 v827; // [rsp+10h] [rbp-8F8h]
  int v828; // [rsp+10h] [rbp-8F8h]
  __int64 v829; // [rsp+10h] [rbp-8F8h]
  int v830; // [rsp+10h] [rbp-8F8h]
  int v831; // [rsp+10h] [rbp-8F8h]
  int v832; // [rsp+10h] [rbp-8F8h]
  __int64 v833; // [rsp+10h] [rbp-8F8h]
  _QWORD *v834; // [rsp+10h] [rbp-8F8h]
  __int64 v835; // [rsp+10h] [rbp-8F8h]
  int v836; // [rsp+10h] [rbp-8F8h]
  int v837; // [rsp+10h] [rbp-8F8h]
  int v838; // [rsp+10h] [rbp-8F8h]
  int v839; // [rsp+10h] [rbp-8F8h]
  __int64 v840; // [rsp+10h] [rbp-8F8h]
  int v841; // [rsp+10h] [rbp-8F8h]
  int v842; // [rsp+10h] [rbp-8F8h]
  int v843; // [rsp+10h] [rbp-8F8h]
  int v844; // [rsp+10h] [rbp-8F8h]
  int v845; // [rsp+10h] [rbp-8F8h]
  __int64 v846; // [rsp+10h] [rbp-8F8h]
  int v847; // [rsp+10h] [rbp-8F8h]
  int v848; // [rsp+10h] [rbp-8F8h]
  __int64 v849; // [rsp+10h] [rbp-8F8h]
  int v850; // [rsp+10h] [rbp-8F8h]
  __int64 v851; // [rsp+10h] [rbp-8F8h]
  int v852; // [rsp+10h] [rbp-8F8h]
  __int64 v853; // [rsp+10h] [rbp-8F8h]
  int v854; // [rsp+10h] [rbp-8F8h]
  int v855; // [rsp+10h] [rbp-8F8h]
  int v856; // [rsp+10h] [rbp-8F8h]
  __int64 v857; // [rsp+10h] [rbp-8F8h]
  int v858; // [rsp+10h] [rbp-8F8h]
  __int64 v859; // [rsp+10h] [rbp-8F8h]
  int v860; // [rsp+10h] [rbp-8F8h]
  int v861; // [rsp+10h] [rbp-8F8h]
  int v862; // [rsp+10h] [rbp-8F8h]
  _QWORD *v863; // [rsp+10h] [rbp-8F8h]
  __int64 v864; // [rsp+10h] [rbp-8F8h]
  int v865; // [rsp+10h] [rbp-8F8h]
  int v866; // [rsp+10h] [rbp-8F8h]
  int v867; // [rsp+10h] [rbp-8F8h]
  int v868; // [rsp+10h] [rbp-8F8h]
  __int64 v869; // [rsp+10h] [rbp-8F8h]
  int v870; // [rsp+10h] [rbp-8F8h]
  int v871; // [rsp+10h] [rbp-8F8h]
  int v872; // [rsp+10h] [rbp-8F8h]
  int v873; // [rsp+10h] [rbp-8F8h]
  int v874; // [rsp+10h] [rbp-8F8h]
  __int64 v875; // [rsp+10h] [rbp-8F8h]
  int v876; // [rsp+10h] [rbp-8F8h]
  int v877; // [rsp+10h] [rbp-8F8h]
  int v878; // [rsp+18h] [rbp-8F0h]
  int v879; // [rsp+18h] [rbp-8F0h]
  int v880; // [rsp+18h] [rbp-8F0h]
  _QWORD *v881; // [rsp+18h] [rbp-8F0h]
  int v882; // [rsp+18h] [rbp-8F0h]
  int v883; // [rsp+18h] [rbp-8F0h]
  int v884; // [rsp+18h] [rbp-8F0h]
  int v885; // [rsp+18h] [rbp-8F0h]
  int v886; // [rsp+18h] [rbp-8F0h]
  int v887; // [rsp+18h] [rbp-8F0h]
  int v888; // [rsp+18h] [rbp-8F0h]
  int v889; // [rsp+18h] [rbp-8F0h]
  int v890; // [rsp+18h] [rbp-8F0h]
  int v891; // [rsp+18h] [rbp-8F0h]
  int v892; // [rsp+18h] [rbp-8F0h]
  int v893; // [rsp+18h] [rbp-8F0h]
  _QWORD *v894; // [rsp+18h] [rbp-8F0h]
  int v895; // [rsp+18h] [rbp-8F0h]
  int v896; // [rsp+18h] [rbp-8F0h]
  int v897; // [rsp+18h] [rbp-8F0h]
  int v898; // [rsp+18h] [rbp-8F0h]
  int v899; // [rsp+18h] [rbp-8F0h]
  int v900; // [rsp+18h] [rbp-8F0h]
  int v901; // [rsp+18h] [rbp-8F0h]
  int v902; // [rsp+18h] [rbp-8F0h]
  int v903; // [rsp+18h] [rbp-8F0h]
  int v904; // [rsp+18h] [rbp-8F0h]
  int v905; // [rsp+18h] [rbp-8F0h]
  int v906; // [rsp+18h] [rbp-8F0h]
  _QWORD *v907; // [rsp+18h] [rbp-8F0h]
  int v908; // [rsp+18h] [rbp-8F0h]
  int v909; // [rsp+18h] [rbp-8F0h]
  int v910; // [rsp+18h] [rbp-8F0h]
  int v911; // [rsp+18h] [rbp-8F0h]
  int v912; // [rsp+18h] [rbp-8F0h]
  int v913; // [rsp+18h] [rbp-8F0h]
  int v914; // [rsp+18h] [rbp-8F0h]
  int v915; // [rsp+18h] [rbp-8F0h]
  int v916; // [rsp+18h] [rbp-8F0h]
  int v917; // [rsp+18h] [rbp-8F0h]
  int v918; // [rsp+18h] [rbp-8F0h]
  int v919; // [rsp+18h] [rbp-8F0h]
  int v920; // [rsp+18h] [rbp-8F0h]
  int v921; // [rsp+18h] [rbp-8F0h]
  int v922; // [rsp+18h] [rbp-8F0h]
  int v923; // [rsp+18h] [rbp-8F0h]
  _QWORD *v924; // [rsp+18h] [rbp-8F0h]
  int v925; // [rsp+18h] [rbp-8F0h]
  int v926; // [rsp+18h] [rbp-8F0h]
  int v927; // [rsp+18h] [rbp-8F0h]
  int v928; // [rsp+18h] [rbp-8F0h]
  int v929; // [rsp+18h] [rbp-8F0h]
  int v930; // [rsp+18h] [rbp-8F0h]
  int v931; // [rsp+18h] [rbp-8F0h]
  int v932; // [rsp+18h] [rbp-8F0h]
  int v933; // [rsp+18h] [rbp-8F0h]
  int v934; // [rsp+18h] [rbp-8F0h]
  int v935; // [rsp+18h] [rbp-8F0h]
  int v936; // [rsp+18h] [rbp-8F0h]
  int v937; // [rsp+18h] [rbp-8F0h]
  int v938; // [rsp+18h] [rbp-8F0h]
  int v939; // [rsp+18h] [rbp-8F0h]
  int v940; // [rsp+18h] [rbp-8F0h]
  int v941; // [rsp+18h] [rbp-8F0h]
  int v942; // [rsp+18h] [rbp-8F0h]
  int v943; // [rsp+18h] [rbp-8F0h]
  int v944; // [rsp+18h] [rbp-8F0h]
  _QWORD *v945; // [rsp+18h] [rbp-8F0h]
  int v946; // [rsp+18h] [rbp-8F0h]
  int v947; // [rsp+18h] [rbp-8F0h]
  int v948; // [rsp+18h] [rbp-8F0h]
  int v949; // [rsp+18h] [rbp-8F0h]
  int v950; // [rsp+18h] [rbp-8F0h]
  int v951; // [rsp+18h] [rbp-8F0h]
  int v952; // [rsp+18h] [rbp-8F0h]
  int v953; // [rsp+18h] [rbp-8F0h]
  int v954; // [rsp+18h] [rbp-8F0h]
  int v955; // [rsp+18h] [rbp-8F0h]
  int v956; // [rsp+20h] [rbp-8E8h]
  int v957; // [rsp+20h] [rbp-8E8h]
  int v958; // [rsp+20h] [rbp-8E8h]
  int v959; // [rsp+20h] [rbp-8E8h]
  int v960; // [rsp+20h] [rbp-8E8h]
  int v961; // [rsp+20h] [rbp-8E8h]
  int v962; // [rsp+20h] [rbp-8E8h]
  int v963; // [rsp+20h] [rbp-8E8h]
  int v964; // [rsp+20h] [rbp-8E8h]
  int v965; // [rsp+20h] [rbp-8E8h]
  int v966; // [rsp+20h] [rbp-8E8h]
  int v967; // [rsp+20h] [rbp-8E8h]
  int v968; // [rsp+20h] [rbp-8E8h]
  int v969; // [rsp+20h] [rbp-8E8h]
  int v970; // [rsp+20h] [rbp-8E8h]
  int v971; // [rsp+20h] [rbp-8E8h]
  int v972; // [rsp+20h] [rbp-8E8h]
  int v973; // [rsp+20h] [rbp-8E8h]
  int v974; // [rsp+20h] [rbp-8E8h]
  int v975; // [rsp+20h] [rbp-8E8h]
  int v976; // [rsp+20h] [rbp-8E8h]
  int v977; // [rsp+20h] [rbp-8E8h]
  int v978; // [rsp+20h] [rbp-8E8h]
  int v979; // [rsp+20h] [rbp-8E8h]
  int v980; // [rsp+20h] [rbp-8E8h]
  int v981; // [rsp+20h] [rbp-8E8h]
  int v982; // [rsp+20h] [rbp-8E8h]
  int v983; // [rsp+20h] [rbp-8E8h]
  int v984; // [rsp+20h] [rbp-8E8h]
  int v985; // [rsp+20h] [rbp-8E8h]
  int v986; // [rsp+20h] [rbp-8E8h]
  int v987; // [rsp+20h] [rbp-8E8h]
  int v988; // [rsp+20h] [rbp-8E8h]
  int v989; // [rsp+20h] [rbp-8E8h]
  int v990; // [rsp+20h] [rbp-8E8h]
  int v991; // [rsp+20h] [rbp-8E8h]
  int v992; // [rsp+20h] [rbp-8E8h]
  int v993; // [rsp+20h] [rbp-8E8h]
  int v994; // [rsp+20h] [rbp-8E8h]
  int v995; // [rsp+20h] [rbp-8E8h]
  int v996; // [rsp+20h] [rbp-8E8h]
  int v997; // [rsp+20h] [rbp-8E8h]
  int v998; // [rsp+20h] [rbp-8E8h]
  int v999; // [rsp+20h] [rbp-8E8h]
  int v1000; // [rsp+20h] [rbp-8E8h]
  int v1001; // [rsp+20h] [rbp-8E8h]
  int v1002; // [rsp+20h] [rbp-8E8h]
  int v1003; // [rsp+20h] [rbp-8E8h]
  int v1004; // [rsp+20h] [rbp-8E8h]
  int v1005; // [rsp+20h] [rbp-8E8h]
  int v1006; // [rsp+20h] [rbp-8E8h]
  int v1007; // [rsp+20h] [rbp-8E8h]
  int v1008; // [rsp+20h] [rbp-8E8h]
  int v1009; // [rsp+20h] [rbp-8E8h]
  int v1010; // [rsp+20h] [rbp-8E8h]
  int v1011; // [rsp+20h] [rbp-8E8h]
  int v1012; // [rsp+20h] [rbp-8E8h]
  int v1013; // [rsp+20h] [rbp-8E8h]
  int v1014; // [rsp+20h] [rbp-8E8h]
  int v1015; // [rsp+20h] [rbp-8E8h]
  int v1016; // [rsp+20h] [rbp-8E8h]
  int v1017; // [rsp+20h] [rbp-8E8h]
  int v1018; // [rsp+20h] [rbp-8E8h]
  int v1019; // [rsp+20h] [rbp-8E8h]
  int v1020; // [rsp+20h] [rbp-8E8h]
  int v1021; // [rsp+20h] [rbp-8E8h]
  int v1022; // [rsp+20h] [rbp-8E8h]
  int v1023; // [rsp+20h] [rbp-8E8h]
  int v1024; // [rsp+20h] [rbp-8E8h]
  int v1025; // [rsp+20h] [rbp-8E8h]
  int v1026; // [rsp+20h] [rbp-8E8h]
  int v1027; // [rsp+20h] [rbp-8E8h]
  int v1028; // [rsp+20h] [rbp-8E8h]
  int v1029; // [rsp+20h] [rbp-8E8h]
  int v1030; // [rsp+20h] [rbp-8E8h]
  int v1031; // [rsp+20h] [rbp-8E8h]
  int v1032; // [rsp+20h] [rbp-8E8h]
  int v1033; // [rsp+20h] [rbp-8E8h]
  int v1034; // [rsp+28h] [rbp-8E0h]
  int v1035; // [rsp+28h] [rbp-8E0h]
  int v1036; // [rsp+28h] [rbp-8E0h]
  int v1037; // [rsp+28h] [rbp-8E0h]
  int v1038; // [rsp+28h] [rbp-8E0h]
  int v1039; // [rsp+28h] [rbp-8E0h]
  _QWORD *v1040; // [rsp+28h] [rbp-8E0h]
  int v1041; // [rsp+28h] [rbp-8E0h]
  int v1042; // [rsp+28h] [rbp-8E0h]
  int v1043; // [rsp+28h] [rbp-8E0h]
  int v1044; // [rsp+28h] [rbp-8E0h]
  int v1045; // [rsp+28h] [rbp-8E0h]
  int v1046; // [rsp+28h] [rbp-8E0h]
  int v1047; // [rsp+28h] [rbp-8E0h]
  int v1048; // [rsp+28h] [rbp-8E0h]
  int v1049; // [rsp+28h] [rbp-8E0h]
  int v1050; // [rsp+28h] [rbp-8E0h]
  int v1051; // [rsp+28h] [rbp-8E0h]
  int v1052; // [rsp+28h] [rbp-8E0h]
  _QWORD *v1053; // [rsp+28h] [rbp-8E0h]
  int v1054; // [rsp+28h] [rbp-8E0h]
  int v1055; // [rsp+28h] [rbp-8E0h]
  int v1056; // [rsp+28h] [rbp-8E0h]
  int v1057; // [rsp+28h] [rbp-8E0h]
  int v1058; // [rsp+28h] [rbp-8E0h]
  int v1059; // [rsp+28h] [rbp-8E0h]
  int v1060; // [rsp+28h] [rbp-8E0h]
  int v1061; // [rsp+28h] [rbp-8E0h]
  int v1062; // [rsp+28h] [rbp-8E0h]
  int v1063; // [rsp+28h] [rbp-8E0h]
  int v1064; // [rsp+28h] [rbp-8E0h]
  int v1065; // [rsp+28h] [rbp-8E0h]
  _QWORD *v1066; // [rsp+28h] [rbp-8E0h]
  int v1067; // [rsp+28h] [rbp-8E0h]
  int v1068; // [rsp+28h] [rbp-8E0h]
  int v1069; // [rsp+28h] [rbp-8E0h]
  int v1070; // [rsp+28h] [rbp-8E0h]
  int v1071; // [rsp+28h] [rbp-8E0h]
  int v1072; // [rsp+28h] [rbp-8E0h]
  int v1073; // [rsp+28h] [rbp-8E0h]
  int v1074; // [rsp+28h] [rbp-8E0h]
  int v1075; // [rsp+28h] [rbp-8E0h]
  int v1076; // [rsp+28h] [rbp-8E0h]
  int v1077; // [rsp+28h] [rbp-8E0h]
  int v1078; // [rsp+28h] [rbp-8E0h]
  int v1079; // [rsp+28h] [rbp-8E0h]
  int v1080; // [rsp+28h] [rbp-8E0h]
  int v1081; // [rsp+28h] [rbp-8E0h]
  int v1082; // [rsp+28h] [rbp-8E0h]
  _QWORD *v1083; // [rsp+28h] [rbp-8E0h]
  int v1084; // [rsp+28h] [rbp-8E0h]
  int v1085; // [rsp+28h] [rbp-8E0h]
  int v1086; // [rsp+28h] [rbp-8E0h]
  int v1087; // [rsp+28h] [rbp-8E0h]
  int v1088; // [rsp+28h] [rbp-8E0h]
  int v1089; // [rsp+28h] [rbp-8E0h]
  int v1090; // [rsp+28h] [rbp-8E0h]
  int v1091; // [rsp+28h] [rbp-8E0h]
  int v1092; // [rsp+28h] [rbp-8E0h]
  int v1093; // [rsp+28h] [rbp-8E0h]
  int v1094; // [rsp+28h] [rbp-8E0h]
  int v1095; // [rsp+28h] [rbp-8E0h]
  int v1096; // [rsp+28h] [rbp-8E0h]
  int v1097; // [rsp+28h] [rbp-8E0h]
  int v1098; // [rsp+28h] [rbp-8E0h]
  int v1099; // [rsp+28h] [rbp-8E0h]
  int v1100; // [rsp+28h] [rbp-8E0h]
  int v1101; // [rsp+28h] [rbp-8E0h]
  int v1102; // [rsp+28h] [rbp-8E0h]
  int v1103; // [rsp+28h] [rbp-8E0h]
  _QWORD *v1104; // [rsp+28h] [rbp-8E0h]
  int v1105; // [rsp+28h] [rbp-8E0h]
  int v1106; // [rsp+28h] [rbp-8E0h]
  int v1107; // [rsp+28h] [rbp-8E0h]
  int v1108; // [rsp+28h] [rbp-8E0h]
  int v1109; // [rsp+28h] [rbp-8E0h]
  int v1110; // [rsp+28h] [rbp-8E0h]
  int v1111; // [rsp+28h] [rbp-8E0h]
  __int64 v1112; // [rsp+30h] [rbp-8D8h]
  __int64 v1113; // [rsp+30h] [rbp-8D8h]
  __int64 v1114; // [rsp+30h] [rbp-8D8h]
  __int64 v1115; // [rsp+30h] [rbp-8D8h]
  __int64 v1116; // [rsp+30h] [rbp-8D8h]
  __int64 v1117; // [rsp+30h] [rbp-8D8h]
  __int64 v1118; // [rsp+30h] [rbp-8D8h]
  _QWORD *v1119; // [rsp+30h] [rbp-8D8h]
  __int64 v1120; // [rsp+30h] [rbp-8D8h]
  __int64 v1121; // [rsp+30h] [rbp-8D8h]
  __int64 v1122; // [rsp+30h] [rbp-8D8h]
  __int64 v1123; // [rsp+30h] [rbp-8D8h]
  __int64 v1124; // [rsp+30h] [rbp-8D8h]
  __int64 v1125; // [rsp+30h] [rbp-8D8h]
  __int64 v1126; // [rsp+30h] [rbp-8D8h]
  __int64 v1127; // [rsp+30h] [rbp-8D8h]
  __int64 v1128; // [rsp+30h] [rbp-8D8h]
  __int64 v1129; // [rsp+30h] [rbp-8D8h]
  __int64 v1130; // [rsp+30h] [rbp-8D8h]
  __int64 v1131; // [rsp+30h] [rbp-8D8h]
  _QWORD *v1132; // [rsp+30h] [rbp-8D8h]
  __int64 v1133; // [rsp+30h] [rbp-8D8h]
  __int64 v1134; // [rsp+30h] [rbp-8D8h]
  __int64 v1135; // [rsp+30h] [rbp-8D8h]
  __int64 v1136; // [rsp+30h] [rbp-8D8h]
  __int64 v1137; // [rsp+30h] [rbp-8D8h]
  __int64 v1138; // [rsp+30h] [rbp-8D8h]
  __int64 v1139; // [rsp+30h] [rbp-8D8h]
  __int64 v1140; // [rsp+30h] [rbp-8D8h]
  __int64 v1141; // [rsp+30h] [rbp-8D8h]
  __int64 v1142; // [rsp+30h] [rbp-8D8h]
  __int64 v1143; // [rsp+30h] [rbp-8D8h]
  __int64 v1144; // [rsp+30h] [rbp-8D8h]
  _QWORD *v1145; // [rsp+30h] [rbp-8D8h]
  __int64 v1146; // [rsp+30h] [rbp-8D8h]
  __int64 v1147; // [rsp+30h] [rbp-8D8h]
  __int64 v1148; // [rsp+30h] [rbp-8D8h]
  __int64 v1149; // [rsp+30h] [rbp-8D8h]
  __int64 v1150; // [rsp+30h] [rbp-8D8h]
  __int64 v1151; // [rsp+30h] [rbp-8D8h]
  __int64 v1152; // [rsp+30h] [rbp-8D8h]
  __int64 v1153; // [rsp+30h] [rbp-8D8h]
  __int64 v1154; // [rsp+30h] [rbp-8D8h]
  __int64 v1155; // [rsp+30h] [rbp-8D8h]
  __int64 v1156; // [rsp+30h] [rbp-8D8h]
  __int64 v1157; // [rsp+30h] [rbp-8D8h]
  __int64 v1158; // [rsp+30h] [rbp-8D8h]
  __int64 v1159; // [rsp+30h] [rbp-8D8h]
  __int64 v1160; // [rsp+30h] [rbp-8D8h]
  __int64 v1161; // [rsp+30h] [rbp-8D8h]
  _QWORD *v1162; // [rsp+30h] [rbp-8D8h]
  __int64 v1163; // [rsp+30h] [rbp-8D8h]
  __int64 v1164; // [rsp+30h] [rbp-8D8h]
  __int64 v1165; // [rsp+30h] [rbp-8D8h]
  __int64 v1166; // [rsp+30h] [rbp-8D8h]
  __int64 v1167; // [rsp+30h] [rbp-8D8h]
  __int64 v1168; // [rsp+30h] [rbp-8D8h]
  __int64 v1169; // [rsp+30h] [rbp-8D8h]
  __int64 v1170; // [rsp+30h] [rbp-8D8h]
  __int64 v1171; // [rsp+30h] [rbp-8D8h]
  __int64 v1172; // [rsp+30h] [rbp-8D8h]
  __int64 v1173; // [rsp+30h] [rbp-8D8h]
  __int64 v1174; // [rsp+30h] [rbp-8D8h]
  __int64 v1175; // [rsp+30h] [rbp-8D8h]
  __int64 v1176; // [rsp+30h] [rbp-8D8h]
  __int64 v1177; // [rsp+30h] [rbp-8D8h]
  __int64 v1178; // [rsp+30h] [rbp-8D8h]
  __int64 v1179; // [rsp+30h] [rbp-8D8h]
  __int64 v1180; // [rsp+30h] [rbp-8D8h]
  __int64 v1181; // [rsp+30h] [rbp-8D8h]
  __int64 v1182; // [rsp+30h] [rbp-8D8h]
  _QWORD *v1183; // [rsp+30h] [rbp-8D8h]
  __int64 v1184; // [rsp+30h] [rbp-8D8h]
  __int64 v1185; // [rsp+30h] [rbp-8D8h]
  __int64 v1186; // [rsp+30h] [rbp-8D8h]
  __int64 v1187; // [rsp+30h] [rbp-8D8h]
  __int64 v1188; // [rsp+30h] [rbp-8D8h]
  __int64 v1189; // [rsp+30h] [rbp-8D8h]
  int v1190; // [rsp+38h] [rbp-8D0h]
  int v1191; // [rsp+38h] [rbp-8D0h]
  int v1192; // [rsp+38h] [rbp-8D0h]
  int v1193; // [rsp+38h] [rbp-8D0h]
  int v1194; // [rsp+38h] [rbp-8D0h]
  int v1195; // [rsp+38h] [rbp-8D0h]
  int v1196; // [rsp+38h] [rbp-8D0h]
  int v1197; // [rsp+38h] [rbp-8D0h]
  int v1198; // [rsp+38h] [rbp-8D0h]
  int v1199; // [rsp+38h] [rbp-8D0h]
  int v1200; // [rsp+38h] [rbp-8D0h]
  int v1201; // [rsp+38h] [rbp-8D0h]
  int v1202; // [rsp+38h] [rbp-8D0h]
  int v1203; // [rsp+38h] [rbp-8D0h]
  int v1204; // [rsp+38h] [rbp-8D0h]
  int v1205; // [rsp+38h] [rbp-8D0h]
  int v1206; // [rsp+38h] [rbp-8D0h]
  int v1207; // [rsp+38h] [rbp-8D0h]
  int v1208; // [rsp+38h] [rbp-8D0h]
  int v1209; // [rsp+38h] [rbp-8D0h]
  int v1210; // [rsp+38h] [rbp-8D0h]
  int v1211; // [rsp+38h] [rbp-8D0h]
  int v1212; // [rsp+38h] [rbp-8D0h]
  int v1213; // [rsp+38h] [rbp-8D0h]
  int v1214; // [rsp+38h] [rbp-8D0h]
  int v1215; // [rsp+38h] [rbp-8D0h]
  int v1216; // [rsp+38h] [rbp-8D0h]
  int v1217; // [rsp+38h] [rbp-8D0h]
  int v1218; // [rsp+38h] [rbp-8D0h]
  int v1219; // [rsp+38h] [rbp-8D0h]
  int v1220; // [rsp+38h] [rbp-8D0h]
  int v1221; // [rsp+38h] [rbp-8D0h]
  int v1222; // [rsp+38h] [rbp-8D0h]
  int v1223; // [rsp+38h] [rbp-8D0h]
  int v1224; // [rsp+38h] [rbp-8D0h]
  int v1225; // [rsp+38h] [rbp-8D0h]
  int v1226; // [rsp+38h] [rbp-8D0h]
  int v1227; // [rsp+38h] [rbp-8D0h]
  int v1228; // [rsp+38h] [rbp-8D0h]
  int v1229; // [rsp+38h] [rbp-8D0h]
  int v1230; // [rsp+38h] [rbp-8D0h]
  int v1231; // [rsp+38h] [rbp-8D0h]
  int v1232; // [rsp+38h] [rbp-8D0h]
  int v1233; // [rsp+38h] [rbp-8D0h]
  int v1234; // [rsp+38h] [rbp-8D0h]
  int v1235; // [rsp+38h] [rbp-8D0h]
  int v1236; // [rsp+38h] [rbp-8D0h]
  int v1237; // [rsp+38h] [rbp-8D0h]
  int v1238; // [rsp+38h] [rbp-8D0h]
  int v1239; // [rsp+38h] [rbp-8D0h]
  int v1240; // [rsp+38h] [rbp-8D0h]
  int v1241; // [rsp+38h] [rbp-8D0h]
  int v1242; // [rsp+38h] [rbp-8D0h]
  int v1243; // [rsp+38h] [rbp-8D0h]
  int v1244; // [rsp+38h] [rbp-8D0h]
  int v1245; // [rsp+38h] [rbp-8D0h]
  int v1246; // [rsp+38h] [rbp-8D0h]
  int v1247; // [rsp+38h] [rbp-8D0h]
  int v1248; // [rsp+38h] [rbp-8D0h]
  int v1249; // [rsp+38h] [rbp-8D0h]
  int v1250; // [rsp+38h] [rbp-8D0h]
  int v1251; // [rsp+38h] [rbp-8D0h]
  int v1252; // [rsp+38h] [rbp-8D0h]
  int v1253; // [rsp+38h] [rbp-8D0h]
  int v1254; // [rsp+38h] [rbp-8D0h]
  int v1255; // [rsp+38h] [rbp-8D0h]
  int v1256; // [rsp+38h] [rbp-8D0h]
  int v1257; // [rsp+38h] [rbp-8D0h]
  int v1258; // [rsp+38h] [rbp-8D0h]
  int v1259; // [rsp+38h] [rbp-8D0h]
  int v1260; // [rsp+38h] [rbp-8D0h]
  int v1261; // [rsp+38h] [rbp-8D0h]
  int v1262; // [rsp+38h] [rbp-8D0h]
  int v1263; // [rsp+38h] [rbp-8D0h]
  int v1264; // [rsp+38h] [rbp-8D0h]
  int v1265; // [rsp+38h] [rbp-8D0h]
  int v1266; // [rsp+38h] [rbp-8D0h]
  int v1267; // [rsp+38h] [rbp-8D0h]
  int v1268; // [rsp+40h] [rbp-8C8h]
  int v1269; // [rsp+40h] [rbp-8C8h]
  int v1270; // [rsp+40h] [rbp-8C8h]
  int v1271; // [rsp+40h] [rbp-8C8h]
  int v1272; // [rsp+40h] [rbp-8C8h]
  int v1273; // [rsp+40h] [rbp-8C8h]
  int v1274; // [rsp+40h] [rbp-8C8h]
  int v1275; // [rsp+40h] [rbp-8C8h]
  int v1276; // [rsp+40h] [rbp-8C8h]
  int v1277; // [rsp+40h] [rbp-8C8h]
  int v1278; // [rsp+40h] [rbp-8C8h]
  int v1279; // [rsp+40h] [rbp-8C8h]
  int v1280; // [rsp+40h] [rbp-8C8h]
  int v1281; // [rsp+40h] [rbp-8C8h]
  int v1282; // [rsp+40h] [rbp-8C8h]
  int v1283; // [rsp+40h] [rbp-8C8h]
  int v1284; // [rsp+40h] [rbp-8C8h]
  int v1285; // [rsp+40h] [rbp-8C8h]
  int v1286; // [rsp+40h] [rbp-8C8h]
  int v1287; // [rsp+40h] [rbp-8C8h]
  int v1288; // [rsp+40h] [rbp-8C8h]
  int v1289; // [rsp+40h] [rbp-8C8h]
  int v1290; // [rsp+40h] [rbp-8C8h]
  int v1291; // [rsp+40h] [rbp-8C8h]
  int v1292; // [rsp+40h] [rbp-8C8h]
  int v1293; // [rsp+40h] [rbp-8C8h]
  int v1294; // [rsp+40h] [rbp-8C8h]
  int v1295; // [rsp+40h] [rbp-8C8h]
  int v1296; // [rsp+40h] [rbp-8C8h]
  int v1297; // [rsp+40h] [rbp-8C8h]
  int v1298; // [rsp+40h] [rbp-8C8h]
  int v1299; // [rsp+40h] [rbp-8C8h]
  int v1300; // [rsp+40h] [rbp-8C8h]
  int v1301; // [rsp+40h] [rbp-8C8h]
  int v1302; // [rsp+40h] [rbp-8C8h]
  int v1303; // [rsp+40h] [rbp-8C8h]
  int v1304; // [rsp+40h] [rbp-8C8h]
  int v1305; // [rsp+40h] [rbp-8C8h]
  int v1306; // [rsp+40h] [rbp-8C8h]
  int v1307; // [rsp+40h] [rbp-8C8h]
  int v1308; // [rsp+40h] [rbp-8C8h]
  int v1309; // [rsp+40h] [rbp-8C8h]
  int v1310; // [rsp+40h] [rbp-8C8h]
  int v1311; // [rsp+40h] [rbp-8C8h]
  int v1312; // [rsp+40h] [rbp-8C8h]
  int v1313; // [rsp+40h] [rbp-8C8h]
  int v1314; // [rsp+40h] [rbp-8C8h]
  int v1315; // [rsp+40h] [rbp-8C8h]
  int v1316; // [rsp+40h] [rbp-8C8h]
  int v1317; // [rsp+40h] [rbp-8C8h]
  int v1318; // [rsp+40h] [rbp-8C8h]
  int v1319; // [rsp+40h] [rbp-8C8h]
  int v1320; // [rsp+40h] [rbp-8C8h]
  int v1321; // [rsp+40h] [rbp-8C8h]
  int v1322; // [rsp+40h] [rbp-8C8h]
  int v1323; // [rsp+40h] [rbp-8C8h]
  int v1324; // [rsp+40h] [rbp-8C8h]
  int v1325; // [rsp+40h] [rbp-8C8h]
  int v1326; // [rsp+40h] [rbp-8C8h]
  int v1327; // [rsp+40h] [rbp-8C8h]
  int v1328; // [rsp+40h] [rbp-8C8h]
  int v1329; // [rsp+40h] [rbp-8C8h]
  int v1330; // [rsp+40h] [rbp-8C8h]
  int v1331; // [rsp+40h] [rbp-8C8h]
  int v1332; // [rsp+40h] [rbp-8C8h]
  int v1333; // [rsp+40h] [rbp-8C8h]
  int v1334; // [rsp+40h] [rbp-8C8h]
  int v1335; // [rsp+40h] [rbp-8C8h]
  int v1336; // [rsp+40h] [rbp-8C8h]
  int v1337; // [rsp+40h] [rbp-8C8h]
  int v1338; // [rsp+40h] [rbp-8C8h]
  int v1339; // [rsp+40h] [rbp-8C8h]
  int v1340; // [rsp+40h] [rbp-8C8h]
  int v1341; // [rsp+40h] [rbp-8C8h]
  int v1342; // [rsp+40h] [rbp-8C8h]
  int v1343; // [rsp+40h] [rbp-8C8h]
  int v1344; // [rsp+40h] [rbp-8C8h]
  int v1345; // [rsp+40h] [rbp-8C8h]
  int v1346; // [rsp+48h] [rbp-8C0h]
  int v1347; // [rsp+48h] [rbp-8C0h]
  int v1348; // [rsp+48h] [rbp-8C0h]
  int v1349; // [rsp+48h] [rbp-8C0h]
  int v1350; // [rsp+48h] [rbp-8C0h]
  int v1351; // [rsp+48h] [rbp-8C0h]
  int v1352; // [rsp+48h] [rbp-8C0h]
  int v1353; // [rsp+48h] [rbp-8C0h]
  int v1354; // [rsp+48h] [rbp-8C0h]
  int v1355; // [rsp+48h] [rbp-8C0h]
  int v1356; // [rsp+48h] [rbp-8C0h]
  int v1357; // [rsp+48h] [rbp-8C0h]
  int v1358; // [rsp+48h] [rbp-8C0h]
  int v1359; // [rsp+48h] [rbp-8C0h]
  int v1360; // [rsp+48h] [rbp-8C0h]
  int v1361; // [rsp+48h] [rbp-8C0h]
  int v1362; // [rsp+48h] [rbp-8C0h]
  int v1363; // [rsp+48h] [rbp-8C0h]
  int v1364; // [rsp+48h] [rbp-8C0h]
  int v1365; // [rsp+48h] [rbp-8C0h]
  int v1366; // [rsp+48h] [rbp-8C0h]
  int v1367; // [rsp+48h] [rbp-8C0h]
  int v1368; // [rsp+48h] [rbp-8C0h]
  int v1369; // [rsp+48h] [rbp-8C0h]
  int v1370; // [rsp+48h] [rbp-8C0h]
  int v1371; // [rsp+48h] [rbp-8C0h]
  int v1372; // [rsp+48h] [rbp-8C0h]
  int v1373; // [rsp+48h] [rbp-8C0h]
  int v1374; // [rsp+48h] [rbp-8C0h]
  int v1375; // [rsp+48h] [rbp-8C0h]
  int v1376; // [rsp+48h] [rbp-8C0h]
  int v1377; // [rsp+48h] [rbp-8C0h]
  int v1378; // [rsp+48h] [rbp-8C0h]
  int v1379; // [rsp+48h] [rbp-8C0h]
  int v1380; // [rsp+48h] [rbp-8C0h]
  int v1381; // [rsp+48h] [rbp-8C0h]
  int v1382; // [rsp+48h] [rbp-8C0h]
  int v1383; // [rsp+48h] [rbp-8C0h]
  int v1384; // [rsp+48h] [rbp-8C0h]
  int v1385; // [rsp+48h] [rbp-8C0h]
  int v1386; // [rsp+48h] [rbp-8C0h]
  int v1387; // [rsp+48h] [rbp-8C0h]
  int v1388; // [rsp+48h] [rbp-8C0h]
  int v1389; // [rsp+48h] [rbp-8C0h]
  int v1390; // [rsp+48h] [rbp-8C0h]
  int v1391; // [rsp+48h] [rbp-8C0h]
  int v1392; // [rsp+48h] [rbp-8C0h]
  int v1393; // [rsp+48h] [rbp-8C0h]
  int v1394; // [rsp+48h] [rbp-8C0h]
  int v1395; // [rsp+48h] [rbp-8C0h]
  int v1396; // [rsp+48h] [rbp-8C0h]
  int v1397; // [rsp+48h] [rbp-8C0h]
  int v1398; // [rsp+48h] [rbp-8C0h]
  int v1399; // [rsp+48h] [rbp-8C0h]
  int v1400; // [rsp+48h] [rbp-8C0h]
  int v1401; // [rsp+48h] [rbp-8C0h]
  int v1402; // [rsp+48h] [rbp-8C0h]
  int v1403; // [rsp+48h] [rbp-8C0h]
  int v1404; // [rsp+48h] [rbp-8C0h]
  int v1405; // [rsp+48h] [rbp-8C0h]
  int v1406; // [rsp+48h] [rbp-8C0h]
  int v1407; // [rsp+48h] [rbp-8C0h]
  int v1408; // [rsp+48h] [rbp-8C0h]
  int v1409; // [rsp+48h] [rbp-8C0h]
  int v1410; // [rsp+48h] [rbp-8C0h]
  int v1411; // [rsp+48h] [rbp-8C0h]
  int v1412; // [rsp+48h] [rbp-8C0h]
  int v1413; // [rsp+48h] [rbp-8C0h]
  int v1414; // [rsp+48h] [rbp-8C0h]
  int v1415; // [rsp+48h] [rbp-8C0h]
  int v1416; // [rsp+48h] [rbp-8C0h]
  int v1417; // [rsp+48h] [rbp-8C0h]
  int v1418; // [rsp+48h] [rbp-8C0h]
  int v1419; // [rsp+48h] [rbp-8C0h]
  int v1420; // [rsp+48h] [rbp-8C0h]
  int v1421; // [rsp+48h] [rbp-8C0h]
  int v1422; // [rsp+48h] [rbp-8C0h]
  int v1423; // [rsp+48h] [rbp-8C0h]
  int v1424; // [rsp+50h] [rbp-8B8h]
  _QWORD *v1425; // [rsp+50h] [rbp-8B8h]
  int v1426; // [rsp+50h] [rbp-8B8h]
  int v1427; // [rsp+50h] [rbp-8B8h]
  int v1428; // [rsp+50h] [rbp-8B8h]
  int v1429; // [rsp+50h] [rbp-8B8h]
  int v1430; // [rsp+50h] [rbp-8B8h]
  int v1431; // [rsp+50h] [rbp-8B8h]
  int v1432; // [rsp+50h] [rbp-8B8h]
  int v1433; // [rsp+50h] [rbp-8B8h]
  int v1434; // [rsp+50h] [rbp-8B8h]
  int v1435; // [rsp+50h] [rbp-8B8h]
  int v1436; // [rsp+50h] [rbp-8B8h]
  int v1437; // [rsp+50h] [rbp-8B8h]
  _QWORD *v1438; // [rsp+50h] [rbp-8B8h]
  int v1439; // [rsp+50h] [rbp-8B8h]
  int v1440; // [rsp+50h] [rbp-8B8h]
  int v1441; // [rsp+50h] [rbp-8B8h]
  int v1442; // [rsp+50h] [rbp-8B8h]
  int v1443; // [rsp+50h] [rbp-8B8h]
  int v1444; // [rsp+50h] [rbp-8B8h]
  int v1445; // [rsp+50h] [rbp-8B8h]
  int v1446; // [rsp+50h] [rbp-8B8h]
  int v1447; // [rsp+50h] [rbp-8B8h]
  int v1448; // [rsp+50h] [rbp-8B8h]
  int v1449; // [rsp+50h] [rbp-8B8h]
  int v1450; // [rsp+50h] [rbp-8B8h]
  _QWORD *v1451; // [rsp+50h] [rbp-8B8h]
  int v1452; // [rsp+50h] [rbp-8B8h]
  int v1453; // [rsp+50h] [rbp-8B8h]
  int v1454; // [rsp+50h] [rbp-8B8h]
  int v1455; // [rsp+50h] [rbp-8B8h]
  int v1456; // [rsp+50h] [rbp-8B8h]
  int v1457; // [rsp+50h] [rbp-8B8h]
  int v1458; // [rsp+50h] [rbp-8B8h]
  int v1459; // [rsp+50h] [rbp-8B8h]
  int v1460; // [rsp+50h] [rbp-8B8h]
  int v1461; // [rsp+50h] [rbp-8B8h]
  int v1462; // [rsp+50h] [rbp-8B8h]
  int v1463; // [rsp+50h] [rbp-8B8h]
  int v1464; // [rsp+50h] [rbp-8B8h]
  _QWORD *v1465; // [rsp+50h] [rbp-8B8h]
  int v1466; // [rsp+50h] [rbp-8B8h]
  int v1467; // [rsp+50h] [rbp-8B8h]
  __int64 v1468; // [rsp+50h] [rbp-8B8h]
  int v1469; // [rsp+50h] [rbp-8B8h]
  int v1470; // [rsp+50h] [rbp-8B8h]
  int v1471; // [rsp+50h] [rbp-8B8h]
  int v1472; // [rsp+50h] [rbp-8B8h]
  int v1473; // [rsp+50h] [rbp-8B8h]
  int v1474; // [rsp+50h] [rbp-8B8h]
  int v1475; // [rsp+50h] [rbp-8B8h]
  int v1476; // [rsp+50h] [rbp-8B8h]
  int v1477; // [rsp+50h] [rbp-8B8h]
  int v1478; // [rsp+50h] [rbp-8B8h]
  int v1479; // [rsp+50h] [rbp-8B8h]
  int v1480; // [rsp+50h] [rbp-8B8h]
  int v1481; // [rsp+50h] [rbp-8B8h]
  int v1482; // [rsp+50h] [rbp-8B8h]
  int v1483; // [rsp+50h] [rbp-8B8h]
  int v1484; // [rsp+50h] [rbp-8B8h]
  int v1485; // [rsp+50h] [rbp-8B8h]
  int v1486; // [rsp+50h] [rbp-8B8h]
  int v1487; // [rsp+50h] [rbp-8B8h]
  int v1488; // [rsp+50h] [rbp-8B8h]
  __int64 v1489; // [rsp+50h] [rbp-8B8h]
  int v1490; // [rsp+50h] [rbp-8B8h]
  int v1491; // [rsp+50h] [rbp-8B8h]
  int v1492; // [rsp+50h] [rbp-8B8h]
  int v1493; // [rsp+50h] [rbp-8B8h]
  int v1494; // [rsp+50h] [rbp-8B8h]
  int v1495; // [rsp+50h] [rbp-8B8h]
  int v1496; // [rsp+50h] [rbp-8B8h]
  int v1497; // [rsp+50h] [rbp-8B8h]
  int v1498; // [rsp+50h] [rbp-8B8h]
  int v1499; // [rsp+50h] [rbp-8B8h]
  int v1500; // [rsp+50h] [rbp-8B8h]
  int v1501; // [rsp+50h] [rbp-8B8h]
  char v1502; // [rsp+58h] [rbp-8B0h]
  char v1503; // [rsp+58h] [rbp-8B0h]
  char v1504; // [rsp+58h] [rbp-8B0h]
  char v1505; // [rsp+58h] [rbp-8B0h]
  char v1506; // [rsp+58h] [rbp-8B0h]
  char v1507; // [rsp+58h] [rbp-8B0h]
  char v1508; // [rsp+58h] [rbp-8B0h]
  char v1509; // [rsp+58h] [rbp-8B0h]
  char v1510; // [rsp+58h] [rbp-8B0h]
  char v1511; // [rsp+58h] [rbp-8B0h]
  char v1512; // [rsp+58h] [rbp-8B0h]
  char v1513; // [rsp+58h] [rbp-8B0h]
  char v1514; // [rsp+58h] [rbp-8B0h]
  char v1515; // [rsp+58h] [rbp-8B0h]
  char v1516; // [rsp+58h] [rbp-8B0h]
  char v1517; // [rsp+58h] [rbp-8B0h]
  char v1518; // [rsp+58h] [rbp-8B0h]
  char v1519; // [rsp+58h] [rbp-8B0h]
  char v1520; // [rsp+58h] [rbp-8B0h]
  char v1521; // [rsp+58h] [rbp-8B0h]
  char v1522; // [rsp+58h] [rbp-8B0h]
  char v1523; // [rsp+58h] [rbp-8B0h]
  char v1524; // [rsp+58h] [rbp-8B0h]
  char v1525; // [rsp+58h] [rbp-8B0h]
  char v1526; // [rsp+58h] [rbp-8B0h]
  char v1527; // [rsp+58h] [rbp-8B0h]
  char v1528; // [rsp+58h] [rbp-8B0h]
  char v1529; // [rsp+58h] [rbp-8B0h]
  char v1530; // [rsp+58h] [rbp-8B0h]
  char v1531; // [rsp+58h] [rbp-8B0h]
  char v1532; // [rsp+58h] [rbp-8B0h]
  char v1533; // [rsp+58h] [rbp-8B0h]
  char v1534; // [rsp+58h] [rbp-8B0h]
  char v1535; // [rsp+58h] [rbp-8B0h]
  char v1536; // [rsp+58h] [rbp-8B0h]
  char v1537; // [rsp+58h] [rbp-8B0h]
  char v1538; // [rsp+58h] [rbp-8B0h]
  char v1539; // [rsp+58h] [rbp-8B0h]
  char v1540; // [rsp+58h] [rbp-8B0h]
  char v1541; // [rsp+58h] [rbp-8B0h]
  char v1542; // [rsp+58h] [rbp-8B0h]
  char v1543; // [rsp+58h] [rbp-8B0h]
  char v1544; // [rsp+58h] [rbp-8B0h]
  char v1545; // [rsp+58h] [rbp-8B0h]
  char v1546; // [rsp+58h] [rbp-8B0h]
  char v1547; // [rsp+58h] [rbp-8B0h]
  char v1548; // [rsp+58h] [rbp-8B0h]
  char v1549; // [rsp+58h] [rbp-8B0h]
  char v1550; // [rsp+58h] [rbp-8B0h]
  char v1551; // [rsp+58h] [rbp-8B0h]
  char v1552; // [rsp+58h] [rbp-8B0h]
  char v1553; // [rsp+58h] [rbp-8B0h]
  char v1554; // [rsp+58h] [rbp-8B0h]
  char v1555; // [rsp+58h] [rbp-8B0h]
  char v1556; // [rsp+58h] [rbp-8B0h]
  char v1557; // [rsp+58h] [rbp-8B0h]
  char v1558; // [rsp+58h] [rbp-8B0h]
  char v1559; // [rsp+58h] [rbp-8B0h]
  char v1560; // [rsp+58h] [rbp-8B0h]
  char v1561; // [rsp+58h] [rbp-8B0h]
  char v1562; // [rsp+58h] [rbp-8B0h]
  char v1563; // [rsp+58h] [rbp-8B0h]
  char v1564; // [rsp+58h] [rbp-8B0h]
  char v1565; // [rsp+58h] [rbp-8B0h]
  char v1566; // [rsp+58h] [rbp-8B0h]
  char v1567; // [rsp+58h] [rbp-8B0h]
  char v1568; // [rsp+58h] [rbp-8B0h]
  char v1569; // [rsp+58h] [rbp-8B0h]
  char v1570; // [rsp+58h] [rbp-8B0h]
  char v1571; // [rsp+58h] [rbp-8B0h]
  char v1572; // [rsp+58h] [rbp-8B0h]
  char v1573; // [rsp+58h] [rbp-8B0h]
  char v1574; // [rsp+58h] [rbp-8B0h]
  char v1575; // [rsp+58h] [rbp-8B0h]
  char v1576; // [rsp+58h] [rbp-8B0h]
  char v1577; // [rsp+58h] [rbp-8B0h]
  char v1578; // [rsp+58h] [rbp-8B0h]
  char v1579; // [rsp+58h] [rbp-8B0h]
  __int64 v1580; // [rsp+60h] [rbp-8A8h]
  __int64 v1581; // [rsp+60h] [rbp-8A8h]
  __int64 v1582; // [rsp+60h] [rbp-8A8h]
  __int64 v1583; // [rsp+60h] [rbp-8A8h]
  __int64 v1584; // [rsp+60h] [rbp-8A8h]
  _QWORD *v1585; // [rsp+60h] [rbp-8A8h]
  __int64 v1586; // [rsp+60h] [rbp-8A8h]
  __int64 v1587; // [rsp+60h] [rbp-8A8h]
  __int64 v1588; // [rsp+60h] [rbp-8A8h]
  __int64 v1589; // [rsp+60h] [rbp-8A8h]
  __int64 v1590; // [rsp+60h] [rbp-8A8h]
  __int64 v1591; // [rsp+60h] [rbp-8A8h]
  __int64 v1592; // [rsp+60h] [rbp-8A8h]
  __int64 v1593; // [rsp+60h] [rbp-8A8h]
  __int64 v1594; // [rsp+60h] [rbp-8A8h]
  __int64 v1595; // [rsp+60h] [rbp-8A8h]
  __int64 v1596; // [rsp+60h] [rbp-8A8h]
  __int64 v1597; // [rsp+60h] [rbp-8A8h]
  _QWORD *v1598; // [rsp+60h] [rbp-8A8h]
  __int64 v1599; // [rsp+60h] [rbp-8A8h]
  __int64 v1600; // [rsp+60h] [rbp-8A8h]
  __int64 v1601; // [rsp+60h] [rbp-8A8h]
  __int64 v1602; // [rsp+60h] [rbp-8A8h]
  __int64 v1603; // [rsp+60h] [rbp-8A8h]
  __int64 v1604; // [rsp+60h] [rbp-8A8h]
  __int64 v1605; // [rsp+60h] [rbp-8A8h]
  __int64 v1606; // [rsp+60h] [rbp-8A8h]
  __int64 v1607; // [rsp+60h] [rbp-8A8h]
  __int64 v1608; // [rsp+60h] [rbp-8A8h]
  __int64 v1609; // [rsp+60h] [rbp-8A8h]
  __int64 v1610; // [rsp+60h] [rbp-8A8h]
  _QWORD *v1611; // [rsp+60h] [rbp-8A8h]
  __int64 v1612; // [rsp+60h] [rbp-8A8h]
  __int64 v1613; // [rsp+60h] [rbp-8A8h]
  __int64 v1614; // [rsp+60h] [rbp-8A8h]
  __int64 v1615; // [rsp+60h] [rbp-8A8h]
  __int64 v1616; // [rsp+60h] [rbp-8A8h]
  __int64 v1617; // [rsp+60h] [rbp-8A8h]
  __int64 v1618; // [rsp+60h] [rbp-8A8h]
  __int64 v1619; // [rsp+60h] [rbp-8A8h]
  __int64 v1620; // [rsp+60h] [rbp-8A8h]
  __int64 v1621; // [rsp+60h] [rbp-8A8h]
  __int64 v1622; // [rsp+60h] [rbp-8A8h]
  __int64 v1623; // [rsp+60h] [rbp-8A8h]
  __int64 v1624; // [rsp+60h] [rbp-8A8h]
  __int64 v1625; // [rsp+60h] [rbp-8A8h]
  __int64 v1626; // [rsp+60h] [rbp-8A8h]
  __int64 v1627; // [rsp+60h] [rbp-8A8h]
  __int64 v1628; // [rsp+60h] [rbp-8A8h]
  __int64 v1629; // [rsp+60h] [rbp-8A8h]
  __int64 v1630; // [rsp+60h] [rbp-8A8h]
  __int64 v1631; // [rsp+60h] [rbp-8A8h]
  __int64 v1632; // [rsp+60h] [rbp-8A8h]
  __int64 v1633; // [rsp+60h] [rbp-8A8h]
  __int64 v1634; // [rsp+60h] [rbp-8A8h]
  __int64 v1635; // [rsp+60h] [rbp-8A8h]
  __int64 v1636; // [rsp+60h] [rbp-8A8h]
  __int64 v1637; // [rsp+60h] [rbp-8A8h]
  __int64 v1638; // [rsp+60h] [rbp-8A8h]
  __int64 v1639; // [rsp+60h] [rbp-8A8h]
  __int64 v1640; // [rsp+60h] [rbp-8A8h]
  __int64 v1641; // [rsp+60h] [rbp-8A8h]
  __int64 v1642; // [rsp+60h] [rbp-8A8h]
  __int64 v1643; // [rsp+60h] [rbp-8A8h]
  __int64 v1644; // [rsp+60h] [rbp-8A8h]
  __int64 v1645; // [rsp+60h] [rbp-8A8h]
  __int64 v1646; // [rsp+60h] [rbp-8A8h]
  __int64 v1647; // [rsp+60h] [rbp-8A8h]
  __int64 v1648; // [rsp+60h] [rbp-8A8h]
  __int64 v1649; // [rsp+60h] [rbp-8A8h]
  __int64 v1650; // [rsp+60h] [rbp-8A8h]
  __int64 v1651; // [rsp+60h] [rbp-8A8h]
  __int64 v1652; // [rsp+60h] [rbp-8A8h]
  __int64 v1653; // [rsp+60h] [rbp-8A8h]
  __int64 v1654; // [rsp+60h] [rbp-8A8h]
  __int64 v1655; // [rsp+60h] [rbp-8A8h]
  __int64 v1656; // [rsp+60h] [rbp-8A8h]
  __int64 v1657; // [rsp+60h] [rbp-8A8h]
  int v1658; // [rsp+68h] [rbp-8A0h]
  int v1659; // [rsp+68h] [rbp-8A0h]
  _QWORD *v1660; // [rsp+68h] [rbp-8A0h]
  int v1661; // [rsp+68h] [rbp-8A0h]
  int v1662; // [rsp+68h] [rbp-8A0h]
  __int64 v1663; // [rsp+68h] [rbp-8A0h]
  int v1664; // [rsp+68h] [rbp-8A0h]
  int v1665; // [rsp+68h] [rbp-8A0h]
  int v1666; // [rsp+68h] [rbp-8A0h]
  int v1667; // [rsp+68h] [rbp-8A0h]
  int v1668; // [rsp+68h] [rbp-8A0h]
  int v1669; // [rsp+68h] [rbp-8A0h]
  int v1670; // [rsp+68h] [rbp-8A0h]
  int v1671; // [rsp+68h] [rbp-8A0h]
  int v1672; // [rsp+68h] [rbp-8A0h]
  _QWORD *v1673; // [rsp+68h] [rbp-8A0h]
  int v1674; // [rsp+68h] [rbp-8A0h]
  int v1675; // [rsp+68h] [rbp-8A0h]
  __int64 v1676; // [rsp+68h] [rbp-8A0h]
  int v1677; // [rsp+68h] [rbp-8A0h]
  int v1678; // [rsp+68h] [rbp-8A0h]
  int v1679; // [rsp+68h] [rbp-8A0h]
  int v1680; // [rsp+68h] [rbp-8A0h]
  int v1681; // [rsp+68h] [rbp-8A0h]
  int v1682; // [rsp+68h] [rbp-8A0h]
  int v1683; // [rsp+68h] [rbp-8A0h]
  int v1684; // [rsp+68h] [rbp-8A0h]
  int v1685; // [rsp+68h] [rbp-8A0h]
  _QWORD *v1686; // [rsp+68h] [rbp-8A0h]
  int v1687; // [rsp+68h] [rbp-8A0h]
  int v1688; // [rsp+68h] [rbp-8A0h]
  __int64 v1689; // [rsp+68h] [rbp-8A0h]
  int v1690; // [rsp+68h] [rbp-8A0h]
  int v1691; // [rsp+68h] [rbp-8A0h]
  int v1692; // [rsp+68h] [rbp-8A0h]
  int v1693; // [rsp+68h] [rbp-8A0h]
  int v1694; // [rsp+68h] [rbp-8A0h]
  int v1695; // [rsp+68h] [rbp-8A0h]
  int v1696; // [rsp+68h] [rbp-8A0h]
  int v1697; // [rsp+68h] [rbp-8A0h]
  int v1698; // [rsp+68h] [rbp-8A0h]
  int v1699; // [rsp+68h] [rbp-8A0h]
  int v1700; // [rsp+68h] [rbp-8A0h]
  int v1701; // [rsp+68h] [rbp-8A0h]
  int v1702; // [rsp+68h] [rbp-8A0h]
  int v1703; // [rsp+68h] [rbp-8A0h]
  int v1704; // [rsp+68h] [rbp-8A0h]
  int v1705; // [rsp+68h] [rbp-8A0h]
  __int64 v1706; // [rsp+68h] [rbp-8A0h]
  int v1707; // [rsp+68h] [rbp-8A0h]
  int v1708; // [rsp+68h] [rbp-8A0h]
  int v1709; // [rsp+68h] [rbp-8A0h]
  int v1710; // [rsp+68h] [rbp-8A0h]
  int v1711; // [rsp+68h] [rbp-8A0h]
  int v1712; // [rsp+68h] [rbp-8A0h]
  int v1713; // [rsp+68h] [rbp-8A0h]
  int v1714; // [rsp+68h] [rbp-8A0h]
  int v1715; // [rsp+68h] [rbp-8A0h]
  int v1716; // [rsp+68h] [rbp-8A0h]
  int v1717; // [rsp+68h] [rbp-8A0h]
  int v1718; // [rsp+68h] [rbp-8A0h]
  int v1719; // [rsp+68h] [rbp-8A0h]
  int v1720; // [rsp+68h] [rbp-8A0h]
  int v1721; // [rsp+68h] [rbp-8A0h]
  int v1722; // [rsp+68h] [rbp-8A0h]
  int v1723; // [rsp+68h] [rbp-8A0h]
  int v1724; // [rsp+68h] [rbp-8A0h]
  int v1725; // [rsp+68h] [rbp-8A0h]
  int v1726; // [rsp+68h] [rbp-8A0h]
  __int64 v1727; // [rsp+68h] [rbp-8A0h]
  int v1728; // [rsp+68h] [rbp-8A0h]
  int v1729; // [rsp+68h] [rbp-8A0h]
  int v1730; // [rsp+68h] [rbp-8A0h]
  int v1731; // [rsp+68h] [rbp-8A0h]
  int v1732; // [rsp+68h] [rbp-8A0h]
  int v1733; // [rsp+68h] [rbp-8A0h]
  int v1734; // [rsp+68h] [rbp-8A0h]
  int v1735; // [rsp+68h] [rbp-8A0h]
  __int64 v1736; // [rsp+70h] [rbp-898h]
  __int64 v1737; // [rsp+70h] [rbp-898h]
  __int64 v1738; // [rsp+70h] [rbp-898h]
  __int64 v1739; // [rsp+70h] [rbp-898h]
  __int64 v1740; // [rsp+70h] [rbp-898h]
  __int64 v1741; // [rsp+70h] [rbp-898h]
  __int64 v1742; // [rsp+70h] [rbp-898h]
  __int64 v1743; // [rsp+70h] [rbp-898h]
  __int64 v1744; // [rsp+70h] [rbp-898h]
  __int64 v1745; // [rsp+70h] [rbp-898h]
  __int64 v1746; // [rsp+70h] [rbp-898h]
  __int64 v1747; // [rsp+70h] [rbp-898h]
  __int64 v1748; // [rsp+70h] [rbp-898h]
  __int64 v1749; // [rsp+70h] [rbp-898h]
  __int64 v1750; // [rsp+70h] [rbp-898h]
  __int64 v1751; // [rsp+70h] [rbp-898h]
  __int64 v1752; // [rsp+70h] [rbp-898h]
  __int64 v1753; // [rsp+70h] [rbp-898h]
  __int64 v1754; // [rsp+70h] [rbp-898h]
  __int64 v1755; // [rsp+70h] [rbp-898h]
  __int64 v1756; // [rsp+70h] [rbp-898h]
  __int64 v1757; // [rsp+70h] [rbp-898h]
  __int64 v1758; // [rsp+70h] [rbp-898h]
  __int64 v1759; // [rsp+70h] [rbp-898h]
  __int64 v1760; // [rsp+70h] [rbp-898h]
  __int64 v1761; // [rsp+70h] [rbp-898h]
  __int64 v1762; // [rsp+70h] [rbp-898h]
  __int64 v1763; // [rsp+70h] [rbp-898h]
  __int64 v1764; // [rsp+70h] [rbp-898h]
  __int64 v1765; // [rsp+70h] [rbp-898h]
  __int64 v1766; // [rsp+70h] [rbp-898h]
  __int64 v1767; // [rsp+70h] [rbp-898h]
  __int64 v1768; // [rsp+70h] [rbp-898h]
  __int64 v1769; // [rsp+70h] [rbp-898h]
  __int64 v1770; // [rsp+70h] [rbp-898h]
  __int64 v1771; // [rsp+70h] [rbp-898h]
  __int64 v1772; // [rsp+70h] [rbp-898h]
  __int64 v1773; // [rsp+70h] [rbp-898h]
  __int64 v1774; // [rsp+70h] [rbp-898h]
  __int64 v1775; // [rsp+70h] [rbp-898h]
  __int64 v1776; // [rsp+70h] [rbp-898h]
  __int64 v1777; // [rsp+70h] [rbp-898h]
  __int64 v1778; // [rsp+70h] [rbp-898h]
  __int64 v1779; // [rsp+70h] [rbp-898h]
  __int64 v1780; // [rsp+70h] [rbp-898h]
  __int64 v1781; // [rsp+70h] [rbp-898h]
  __int64 v1782; // [rsp+70h] [rbp-898h]
  __int64 v1783; // [rsp+70h] [rbp-898h]
  __int64 v1784; // [rsp+70h] [rbp-898h]
  __int64 v1785; // [rsp+70h] [rbp-898h]
  __int64 v1786; // [rsp+70h] [rbp-898h]
  __int64 v1787; // [rsp+70h] [rbp-898h]
  __int64 v1788; // [rsp+70h] [rbp-898h]
  __int64 v1789; // [rsp+70h] [rbp-898h]
  __int64 v1790; // [rsp+70h] [rbp-898h]
  __int64 v1791; // [rsp+70h] [rbp-898h]
  __int64 v1792; // [rsp+70h] [rbp-898h]
  __int64 v1793; // [rsp+70h] [rbp-898h]
  __int64 v1794; // [rsp+70h] [rbp-898h]
  __int64 v1795; // [rsp+70h] [rbp-898h]
  __int64 v1796; // [rsp+70h] [rbp-898h]
  __int64 v1797; // [rsp+70h] [rbp-898h]
  __int64 v1798; // [rsp+70h] [rbp-898h]
  __int64 v1799; // [rsp+70h] [rbp-898h]
  __int64 v1800; // [rsp+70h] [rbp-898h]
  __int64 v1801; // [rsp+70h] [rbp-898h]
  __int64 v1802; // [rsp+70h] [rbp-898h]
  __int64 v1803; // [rsp+70h] [rbp-898h]
  __int64 v1804; // [rsp+70h] [rbp-898h]
  __int64 v1805; // [rsp+70h] [rbp-898h]
  __int64 v1806; // [rsp+70h] [rbp-898h]
  __int64 v1807; // [rsp+70h] [rbp-898h]
  __int64 v1808; // [rsp+70h] [rbp-898h]
  __int64 v1809; // [rsp+70h] [rbp-898h]
  __int64 v1810; // [rsp+70h] [rbp-898h]
  __int64 v1811; // [rsp+70h] [rbp-898h]
  __int64 v1812; // [rsp+70h] [rbp-898h]
  __int64 v1813; // [rsp+70h] [rbp-898h]
  __m128 v1814; // [rsp+A0h] [rbp-868h] BYREF
  const __m128i *v1815; // [rsp+B0h] [rbp-858h]
  ida_mcp::tools::segment_manipulation *v1816; // [rsp+B8h] [rbp-850h]
  char *v1817; // [rsp+C0h] [rbp-848h]
  __m128i *v1818; // [rsp+C8h] [rbp-840h]
  __m128i *v1819; // [rsp+D0h] [rbp-838h]
  __m128i *v1820; // [rsp+D8h] [rbp-830h]
  __int128 *v1821; // [rsp+E0h] [rbp-828h]
  char *v1822; // [rsp+E8h] [rbp-820h]
  __int64 *v1823; // [rsp+F0h] [rbp-818h]
  __int64 *v1824; // [rsp+F8h] [rbp-810h]
  char *v1825; // [rsp+100h] [rbp-808h]
  char *v1826; // [rsp+108h] [rbp-800h]
  char *v1827; // [rsp+110h] [rbp-7F8h]
  __int64 *v1828; // [rsp+118h] [rbp-7F0h]
  __int64 *v1829; // [rsp+120h] [rbp-7E8h]
  __int64 *v1830; // [rsp+128h] [rbp-7E0h]
  char *v1831; // [rsp+130h] [rbp-7D8h]
  char *v1832; // [rsp+138h] [rbp-7D0h]
  char *v1833; // [rsp+140h] [rbp-7C8h]
  __int8 *v1834; // [rsp+148h] [rbp-7C0h]
  void **v1835; // [rsp+150h] [rbp-7B8h]
  __m128i *v1836; // [rsp+158h] [rbp-7B0h]
  __int64 *v1837; // [rsp+160h] [rbp-7A8h]
  __int64 *v1838; // [rsp+168h] [rbp-7A0h]
  __int64 *v1839; // [rsp+170h] [rbp-798h]
  __int64 *v1840; // [rsp+178h] [rbp-790h]
  __int64 *v1841; // [rsp+180h] [rbp-788h]
  __int64 *v1842; // [rsp+188h] [rbp-780h]
  __int64 *v1843; // [rsp+190h] [rbp-778h]
  __int64 *v1844; // [rsp+198h] [rbp-770h]
  _QWORD *v1845; // [rsp+1A0h] [rbp-768h]
  _BYTE *v1846; // [rsp+1A8h] [rbp-760h]
  _BYTE **v1847; // [rsp+1B0h] [rbp-758h]
  _BYTE *v1848; // [rsp+1B8h] [rbp-750h]
  char *v1849; // [rsp+1C0h] [rbp-748h]
  __int128 *v1850; // [rsp+1C8h] [rbp-740h]
  __m128i *v1851; // [rsp+1D0h] [rbp-738h]
  __m128i *v1852; // [rsp+1D8h] [rbp-730h]
  __m128i *v1853; // [rsp+1E0h] [rbp-728h]
  __int128 *v1854; // [rsp+1E8h] [rbp-720h]
  __int128 *v1855; // [rsp+1F0h] [rbp-718h]
  __int128 *v1856; // [rsp+1F8h] [rbp-710h]
  char *v1857; // [rsp+200h] [rbp-708h]
  char *v1858; // [rsp+208h] [rbp-700h]
  __int128 *v1859; // [rsp+210h] [rbp-6F8h]
  __int128 *v1860; // [rsp+218h] [rbp-6F0h]
  __int128 *v1861; // [rsp+220h] [rbp-6E8h]
  __int64 *v1862; // [rsp+228h] [rbp-6E0h]
  char *v1863; // [rsp+230h] [rbp-6D8h]
  __int64 *v1864; // [rsp+238h] [rbp-6D0h]
  __int8 *v1865; // [rsp+240h] [rbp-6C8h]
  __int64 *v1866; // [rsp+248h] [rbp-6C0h]
  __int64 *v1867; // [rsp+250h] [rbp-6B8h]
  __m128i *v1868; // [rsp+258h] [rbp-6B0h]
  __m128i *v1869; // [rsp+260h] [rbp-6A8h]
  _QWORD *v1870; // [rsp+268h] [rbp-6A0h]
  __int128 *v1871; // [rsp+270h] [rbp-698h]
  __int64 *v1872; // [rsp+278h] [rbp-690h]
  char *v1873; // [rsp+280h] [rbp-688h]
  __int64 *v1874; // [rsp+288h] [rbp-680h]
  char *v1875; // [rsp+290h] [rbp-678h]
  void **v1876; // [rsp+298h] [rbp-670h]
  __int64 *v1877; // [rsp+2A0h] [rbp-668h]
  __int64 *v1878; // [rsp+2A8h] [rbp-660h]
  __m128i v1879; // [rsp+2B0h] [rbp-658h] BYREF
  __int64 v1880; // [rsp+2C0h] [rbp-648h] BYREF
  __int64 v1881; // [rsp+2C8h] [rbp-640h] BYREF
  char v1882; // [rsp+2D0h] [rbp-638h] BYREF
  __int128 v1883; // [rsp+2D8h] [rbp-630h]
  char v1884; // [rsp+2E8h] [rbp-620h]
  __int128 v1885; // [rsp+2F0h] [rbp-618h]
  __m128i v1886; // [rsp+300h] [rbp-608h] BYREF
  __int64 v1887; // [rsp+310h] [rbp-5F8h]
  char v1888; // [rsp+318h] [rbp-5F0h]
  __int128 v1889; // [rsp+320h] [rbp-5E8h] BYREF
  _QWORD v1890[3]; // [rsp+330h] [rbp-5D8h] BYREF
  char v1891; // [rsp+348h] [rbp-5C0h]
  __int128 v1892; // [rsp+350h] [rbp-5B8h] BYREF
  __m128i v1893; // [rsp+360h] [rbp-5A8h] BYREF
  __int64 v1894; // [rsp+370h] [rbp-598h]
  char v1895; // [rsp+378h] [rbp-590h]
  __int128 v1896; // [rsp+380h] [rbp-588h] BYREF
  __m128i v1897; // [rsp+390h] [rbp-578h] BYREF
  __int64 v1898; // [rsp+3A0h] [rbp-568h]
  _QWORD v1899[3]; // [rsp+3A8h] [rbp-560h] BYREF
  char v1900; // [rsp+3C0h] [rbp-548h] BYREF
  __int128 v1901; // [rsp+3C8h] [rbp-540h] BYREF
  __int64 v1902; // [rsp+3D8h] [rbp-530h] BYREF
  __int128 v1903; // [rsp+3E0h] [rbp-528h] BYREF
  __int64 v1904; // [rsp+3F0h] [rbp-518h] BYREF
  char v1905; // [rsp+3F8h] [rbp-510h] BYREF
  __int64 v1906; // [rsp+400h] [rbp-508h]
  __int64 v1907; // [rsp+408h] [rbp-500h] BYREF
  __int128 v1908; // [rsp+410h] [rbp-4F8h] BYREF
  __m128i v1909; // [rsp+420h] [rbp-4E8h] BYREF
  __int64 v1910; // [rsp+430h] [rbp-4D8h]
  char v1911; // [rsp+438h] [rbp-4D0h]
  __int128 v1912; // [rsp+440h] [rbp-4C8h] BYREF
  __m128i v1913; // [rsp+450h] [rbp-4B8h] BYREF
  __int64 v1914; // [rsp+460h] [rbp-4A8h]
  __int64 v1915; // [rsp+468h] [rbp-4A0h] BYREF
  char v1916; // [rsp+470h] [rbp-498h] BYREF
  __int64 v1917; // [rsp+478h] [rbp-490h]
  char v1918; // [rsp+480h] [rbp-488h] BYREF
  __int128 v1919; // [rsp+488h] [rbp-480h] BYREF
  __int64 v1920; // [rsp+498h] [rbp-470h] BYREF
  __int128 v1921; // [rsp+4A0h] [rbp-468h] BYREF
  __int64 v1922; // [rsp+4B0h] [rbp-458h] BYREF
  char v1923; // [rsp+4B8h] [rbp-450h] BYREF
  __int64 v1924; // [rsp+4C0h] [rbp-448h]
  char v1925; // [rsp+4C8h] [rbp-440h]
  __int128 v1926; // [rsp+4D0h] [rbp-438h] BYREF
  __m128i v1927; // [rsp+4E0h] [rbp-428h] BYREF
  __int64 v1928; // [rsp+4F0h] [rbp-418h]
  char v1929; // [rsp+4F8h] [rbp-410h]
  __int128 v1930; // [rsp+500h] [rbp-408h] BYREF
  __int64 v1931; // [rsp+510h] [rbp-3F8h] BYREF
  char v1932; // [rsp+518h] [rbp-3F0h] BYREF
  __int64 v1933; // [rsp+520h] [rbp-3E8h]
  __int64 v1934; // [rsp+528h] [rbp-3E0h] BYREF
  __int128 v1935; // [rsp+530h] [rbp-3D8h] BYREF
  char v1936; // [rsp+540h] [rbp-3C8h] BYREF
  __int128 v1937; // [rsp+548h] [rbp-3C0h]
  __int64 v1938; // [rsp+558h] [rbp-3B0h] BYREF
  __int128 v1939; // [rsp+560h] [rbp-3A8h]
  __m128i v1940; // [rsp+570h] [rbp-398h] BYREF
  __int64 v1941; // [rsp+580h] [rbp-388h]
  char v1942; // [rsp+588h] [rbp-380h]
  __int128 v1943; // [rsp+590h] [rbp-378h] BYREF
  __m128i v1944; // [rsp+5A0h] [rbp-368h] BYREF
  __int64 v1945; // [rsp+5B0h] [rbp-358h]
  char v1946; // [rsp+5B8h] [rbp-350h]
  __int128 v1947; // [rsp+5C0h] [rbp-348h] BYREF
  __int64 v1948; // [rsp+5D0h] [rbp-338h] BYREF
  char v1949; // [rsp+5D8h] [rbp-330h] BYREF
  __int64 v1950; // [rsp+5E0h] [rbp-328h]
  __int64 v1951; // [rsp+5E8h] [rbp-320h] BYREF
  char v1952; // [rsp+5F0h] [rbp-318h] BYREF
  __int64 v1953; // [rsp+5F8h] [rbp-310h]
  char v1954; // [rsp+600h] [rbp-308h] BYREF
  __int128 v1955; // [rsp+608h] [rbp-300h] BYREF
  __int64 v1956; // [rsp+618h] [rbp-2F0h] BYREF
  char v1957; // [rsp+620h] [rbp-2E8h] BYREF
  __int64 v1958; // [rsp+628h] [rbp-2E0h]
  __m128i v1959; // [rsp+630h] [rbp-2D8h] BYREF
  __int64 v1960; // [rsp+640h] [rbp-2C8h]
  char v1961; // [rsp+648h] [rbp-2C0h] BYREF
  __int128 v1962; // [rsp+650h] [rbp-2B8h]
  __m128i v1963; // [rsp+660h] [rbp-2A8h] BYREF
  __int64 v1964; // [rsp+670h] [rbp-298h]
  char v1965; // [rsp+678h] [rbp-290h]
  __int128 v1966; // [rsp+680h] [rbp-288h] BYREF
  __m128i v1967; // [rsp+690h] [rbp-278h] BYREF
  __int64 v1968; // [rsp+6A0h] [rbp-268h]
  __int64 v1969; // [rsp+6A8h] [rbp-260h] BYREF
  char v1970; // [rsp+6B0h] [rbp-258h] BYREF
  __int64 v1971; // [rsp+6B8h] [rbp-250h]
  char v1972; // [rsp+6C0h] [rbp-248h] BYREF
  __int128 v1973; // [rsp+6C8h] [rbp-240h] BYREF
  __int64 v1974; // [rsp+6D8h] [rbp-230h] BYREF
  char v1975; // [rsp+6E0h] [rbp-228h] BYREF
  __int64 v1976; // [rsp+6E8h] [rbp-220h]
  char v1977; // [rsp+6F0h] [rbp-218h] BYREF
  __int128 v1978; // [rsp+6F8h] [rbp-210h]
  __int64 v1979; // [rsp+708h] [rbp-200h] BYREF
  char v1980; // [rsp+710h] [rbp-1F8h] BYREF
  __int64 v1981; // [rsp+718h] [rbp-1F0h]
  char v1982; // [rsp+720h] [rbp-1E8h] BYREF
  __int128 v1983; // [rsp+728h] [rbp-1E0h] BYREF
  __m128i v1984; // [rsp+738h] [rbp-1D0h] BYREF
  __int64 v1985; // [rsp+748h] [rbp-1C0h]
  __int64 v1986; // [rsp+750h] [rbp-1B8h] BYREF
  __int128 v1987; // [rsp+758h] [rbp-1B0h]
  __m128i v1988; // [rsp+768h] [rbp-1A0h] BYREF
  __int64 v1989; // [rsp+778h] [rbp-190h]
  _QWORD v1990[2]; // [rsp+780h] [rbp-188h] BYREF
  __int64 v1991; // [rsp+790h] [rbp-178h]
  char v1992; // [rsp+798h] [rbp-170h] BYREF
  void *v1993; // [rsp+7A0h] [rbp-168h] BYREF
  __int64 v1994; // [rsp+7A8h] [rbp-160h]
  __m128i v1995; // [rsp+7B0h] [rbp-158h] BYREF
  __int64 v1996; // [rsp+7C8h] [rbp-140h]
  _QWORD v1997[2]; // [rsp+7D0h] [rbp-138h] BYREF
  __int64 v1998; // [rsp+7E0h] [rbp-128h]
  _QWORD v1999[2]; // [rsp+7E8h] [rbp-120h] BYREF
  __int64 v2000; // [rsp+7F8h] [rbp-110h]
  _QWORD v2001[3]; // [rsp+800h] [rbp-108h] BYREF
  char v2002; // [rsp+818h] [rbp-F0h] BYREF
  _BYTE *v2003; // [rsp+820h] [rbp-E8h] BYREF
  __int64 v2004; // [rsp+828h] [rbp-E0h]
  _BYTE v2005[16]; // [rsp+830h] [rbp-D8h] BYREF
  _BYTE *v2006; // [rsp+840h] [rbp-C8h] BYREF
  __int64 v2007; // [rsp+848h] [rbp-C0h]
  _BYTE v2008[16]; // [rsp+850h] [rbp-B8h] BYREF
  char v2009; // [rsp+860h] [rbp-A8h]
  __int64 v2010; // [rsp+868h] [rbp-A0h]
  char v2011; // [rsp+880h] [rbp-88h]
  char v2012; // [rsp+8B8h] [rbp-50h]
  unsigned __int64 v2013; // [rsp+8C8h] [rbp-40h]

  v1816 = this;
  v2013 = __readfsqword(0x28u);
  v1846 = v2005;
  v2003 = v2005;
  v2004 = 0;
  v2005[0] = 0;
  v1848 = v2008;
  v2006 = v2008;
  v2008[0] = 0;
  v2007 = 0;
  v2009 = 0;
  v2010 = 0;
  v2011 = 0;
  v2012 = 0;
  std::string::_M_replace();
  v1847 = &v2006;
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1886);
  v1887 = 0;
  v1888 = 0;
  *(_QWORD *)&v1889 = 0;
  v1865 = (__int8 *)&v1889;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1888 = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "object", v3, v4, v5, v6, v512, v634, v756);
  v1889 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1986,
    &v1886,
    2,
    1);
  *((_QWORD *)&v1987 + 1) = 0;
  v1977 = 0;
  *(_QWORD *)&v1978 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1977 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "properties", v8, v9, v10, v11, v513, v635, v757);
  v1900 = 0;
  v1859 = &v1901;
  *(_QWORD *)&v1901 = 0;
  v1978 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1900 = 3;
  v12 = operator new(0x20u);
  *(_DWORD *)(v12 + 16) = 1918989427;
  *(_QWORD *)v12 = v12 + 16;
  *(_BYTE *)(v12 + 20) = 116;
  *(_QWORD *)(v12 + 8) = 5;
  *(_BYTE *)(v12 + 21) = 0;
  v1815 = (const __m128i *)v1890;
  v1901 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1890);
  v1890[2] = 0;
  v1891 = 0;
  *(_QWORD *)&v1892 = 0;
  v1868 = (__m128i *)&v1892;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1891 = 3;
  v13 = operator new(0x20u);
  *(_QWORD *)v13 = v13 + 16;
  v14 = v1815;
  strcpy((char *)(v13 + 16), "string");
  *(_QWORD *)(v13 + 8) = 6;
  v1851 = &v1897;
  v1892 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1897,
    v14,
    2,
    1);
  v1898 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1893);
  v1894 = 0;
  v1895 = 0;
  *(_QWORD *)&v1896 = 0;
  v1871 = &v1896;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1895 = 3;
  v15 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v15,
    "Segment start address (hex)",
    v16,
    v17,
    v18,
    v19,
    v514,
    v636,
    v758);
  v1896 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1899,
    &v1893,
    2,
    1);
  v1899[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1902,
    &v1897,
    2,
    1);
  *((_QWORD *)&v1903 + 1) = 0;
  v1858 = &v1900;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1993,
    (const __m128i *)&v1900,
    2,
    1);
  v1995.m128i_i64[0] = 0;
  v1918 = 0;
  *(_QWORD *)&v1919 = 0;
  v1855 = &v1919;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1918 = 3;
  v20 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v20, "end", v21, v22, v23, v24, v515, v637, v759);
  v1852 = (__m128i *)&v1904;
  v1919 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1904);
  v1906 = 0;
  LOBYTE(v1907) = 0;
  *(_QWORD *)&v1908 = 0;
  v1860 = &v1908;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1907) = 3;
  v25 = operator new(0x20u);
  *(_QWORD *)v25 = v25 + 16;
  v26 = v1852;
  strcpy((char *)(v25 + 16), "string");
  *(_QWORD *)(v25 + 8) = 6;
  v1818 = &v1913;
  v1908 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1913,
    v26,
    2,
    1);
  v1914 = 0;
  v1853 = &v1909;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1909);
  v1910 = 0;
  v1911 = 0;
  *(_QWORD *)&v1912 = 0;
  v1854 = &v1912;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1911 = 3;
  v27 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v27,
    "Segment end address (hex)",
    v28,
    v29,
    v30,
    v31,
    v516,
    v638,
    v760);
  v1912 = (unsigned __int64)v27;
  v1877 = &v1915;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1915,
    &v1909,
    2,
    1);
  v1878 = &v1920;
  v1917 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1920,
    &v1913,
    2,
    1);
  *((_QWORD *)&v1921 + 1) = 0;
  v1849 = &v1918;
  v1844 = &v1995.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1995.m128i_i64[1],
    (const __m128i *)&v1918,
    2,
    1);
  v1996 = 0;
  v1936 = 0;
  *(_QWORD *)&v1937 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1936 = 3;
  v32 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v32, "name", v33, v34, v35, v36, v517, v639, v761);
  v1819 = (__m128i *)&v1922;
  v1937 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1922);
  v1924 = 0;
  v1925 = 0;
  *(_QWORD *)&v1926 = 0;
  v1850 = &v1926;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1925 = 3;
  v37 = operator new(0x20u);
  *(_QWORD *)v37 = v37 + 16;
  v38 = v1819;
  strcpy((char *)(v37 + 16), "string");
  *(_QWORD *)(v37 + 8) = 6;
  v1926 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1931,
    v38,
    2,
    1);
  v1933 = 0;
  v1820 = &v1927;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1927);
  v1928 = 0;
  v1929 = 0;
  *(_QWORD *)&v1930 = 0;
  v1821 = &v1930;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1929 = 3;
  v39 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v39, "Segment name", v40, v41, v42, v43, v518, (int)&v1931, v762);
  v1930 = (unsigned __int64)v39;
  v1866 = &v1934;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1934,
    &v1927,
    2,
    1);
  v1867 = &v1938;
  *((_QWORD *)&v1935 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1938,
    v640,
    2,
    1);
  *((_QWORD *)&v1939 + 1) = 0;
  v1845 = v1997;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1997,
    (const __m128i *)&v1936,
    2,
    1);
  v1998 = 0;
  v1954 = 0;
  *(_QWORD *)&v1955 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1954 = 3;
  v44 = operator new(0x20u);
  *(_DWORD *)(v44 + 16) = 1935764579;
  *(_QWORD *)v44 = v44 + 16;
  *(_BYTE *)(v44 + 20) = 115;
  *(_QWORD *)(v44 + 8) = 5;
  *(_BYTE *)(v44 + 21) = 0;
  v1955 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1940);
  v1941 = 0;
  v1942 = 0;
  *(_QWORD *)&v1943 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1942 = 3;
  v45 = operator new(0x20u);
  *(_QWORD *)v45 = v45 + 16;
  strcpy((char *)(v45 + 16), "string");
  *(_QWORD *)(v45 + 8) = 6;
  v1943 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1948,
    &v1940,
    2,
    1);
  v1950 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1944);
  v1945 = 0;
  v1946 = 0;
  *(_QWORD *)&v1947 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1946 = 3;
  v46 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v46,
    "Segment class: CODE/DATA/BSS/NORM",
    v47,
    v48,
    v49,
    v50,
    (int)&v1948,
    (int)v640,
    (__int64)&v1940);
  v1839 = &v1951;
  v1947 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1951,
    &v1944,
    2,
    1);
  v1840 = &v1956;
  v1953 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1956,
    v519,
    2,
    1);
  v1958 = 0;
  v1835 = (void **)v1999;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1999,
    (const __m128i *)&v1954,
    2,
    1);
  v2000 = 0;
  v1972 = 0;
  *(_QWORD *)&v1973 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1972 = 3;
  v51 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v51, "permissions", v52, v53, v54, v55, (int)v519, v641, v763);
  v1973 = (unsigned __int64)v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1959);
  v1960 = 0;
  v1857 = &v1961;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1962 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1967,
    &v1959,
    2,
    1);
  v1968 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1963);
  v1964 = 0;
  v1965 = 0;
  *(_QWORD *)&v1966 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1965 = 3;
  v56 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v56,
    "Permission flags (1=R, 2=W, 4=X, combine with |)",
    v57,
    v58,
    v59,
    v60,
    v520,
    v642,
    v764);
  v1841 = &v1969;
  v1966 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1969,
    &v1963,
    2,
    1);
  v1842 = &v1974;
  v1971 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1974,
    &v1967,
    2,
    1);
  v1976 = 0;
  v1876 = (void **)v2001;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2001,
    (const __m128i *)&v1972,
    2,
    1);
  v2001[2] = 0;
  v1843 = &v1979;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1979,
    (__int64)&v1993,
    5,
    v61,
    v62,
    v63,
    v521,
    v643,
    v765,
    (int)&v1944,
    (int)&v1947,
    (int)&v1959,
    (__int64)&v1963,
    (int)&v1966,
    v1268,
    (int)&v1943,
    (int)&v1936,
    (char)&v1973,
    v1580,
    (int)&v1954,
    (__int64)&v1955);
  v1981 = 0;
  v1869 = &v1988;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1988,
    (const __m128i *)&v1977,
    2,
    1);
  v1989 = 0;
  v1982 = 0;
  *(_QWORD *)&v1983 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1982 = 3;
  v64 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v64, "required", v65, v66, v67, v68, v522, v644, v766);
  v1983 = (unsigned __int64)v64;
  *(_QWORD *)&v1883 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1882 = 3;
  v69 = operator new(0x20u);
  *(_DWORD *)(v69 + 16) = 1918989427;
  *(_QWORD *)v69 = v69 + 16;
  *(_BYTE *)(v69 + 20) = 116;
  *(_QWORD *)(v69 + 8) = 5;
  *(_BYTE *)(v69 + 21) = 0;
  v1884 = 0;
  *(_QWORD *)&v1885 = 0;
  v1883 = (unsigned __int64)v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1884 = 3;
  v70 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v70, "end", v71, v72, v73, v74, v523, v645, v767);
  v1885 = (unsigned __int64)v70;
  v1836 = &v1879;
  v1814 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1879,
    (const __m128i *)&v1882,
    2,
    0);
  v75 = _mm_load_si128(&v1879);
  v1817 = &v1982;
  v1870 = v1990;
  v1985 = 0;
  v1984 = v75;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1990,
    (const __m128i *)&v1982,
    2,
    1);
  v1991 = 0;
  LOBYTE(v1880) = 0;
  v1837 = &v1880;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1880,
    (__int64)&v1986,
    3,
    v76,
    v77,
    v78,
    v524,
    v646,
    v768,
    v878,
    v956,
    v1034,
    v1112,
    v1190,
    (int)&v1983,
    v1346,
    v1424,
    v1502,
    (__int64)&v1977,
    v1658,
    v1736);
  LOBYTE(v38) = v2009;
  v79 = (__int64 *)&v1992;
  v80 = v1881;
  v2009 = v1880;
  LOBYTE(v1880) = (_BYTE)v38;
  v1881 = v2010;
  v2010 = v80;
  v1838 = &v1881;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v79 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v79 != &v1986 );
  v81 = (void **)&v2002;
  v1834 = &v1984.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1833 = &v1980;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v81 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v81 != &v1993 );
  v1832 = &v1975;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1831 = &v1970;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1830 = &v1967.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1829 = &v1963.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1828 = &v1959.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1827 = &v1957;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1826 = &v1952;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1825 = &v1949;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1824 = &v1944.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1823 = &v1940.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1815 = (const __m128i *)&v1935;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1822 = &v1932;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1864 = &v1927.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1863 = &v1923;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1856 = &v1921;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1875 = &v1916;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1862 = &v1913.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1874 = &v1909.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1873 = &v1905;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1861 = &v1903;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1872 = &v1897.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v1814);
  v1994 = 0;
  v1993 = ida_mcp::tools::segment_manipulation::`anonymous namespace'::handle_add_segment;
  v1995 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1995.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1995.m128i_i64[0])(&v1993, &v1993, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2003);
  v2004 = 0;
  v2005[0] = 0;
  v2003 = v1846;
  v2007 = 0;
  v2006 = v1848;
  v2008[0] = 0;
  v2009 = 0;
  v2010 = 0;
  v2011 = 0;
  v2012 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1425);
  *((_QWORD *)&v1937 + 1) = 0;
  LOBYTE(v1938) = 0;
  *(_QWORD *)&v1939 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1938) = 3;
  v83 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v83, "object", v84, v85, v86, v87, v525, v647, v769);
  v1939 = (unsigned __int64)v83;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1993,
    (__int64)v1425,
    2,
    v88,
    v89,
    v90,
    v526,
    v648,
    v770,
    v879,
    v957,
    v1035,
    v1113,
    v1191,
    v1269,
    v1347,
    (int)v1425,
    v1503,
    v1581,
    v1659,
    v1737);
  v1995.m128i_i64[0] = 0;
  v1982 = 0;
  *(_QWORD *)&v1983 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1982 = 3;
  v91 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v91, "properties", v92, v93, v94, v95, v527, v649, v771);
  v1983 = (unsigned __int64)v91;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1660);
  *((_QWORD *)&v1955 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v772);
  v1941 = 0;
  v1942 = 0;
  *(_QWORD *)&v1943 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1942 = 3;
  v96 = operator new(0x20u);
  strcpy((char *)(v96 + 16), "string");
  *(_QWORD *)v96 = v96 + 16;
  *(_QWORD *)(v96 + 8) = 6;
  v1943 = (unsigned __int64)v96;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v528,
    (__int64)v772,
    2,
    v97,
    v98,
    v99,
    (int)v528,
    v650,
    (int)v772,
    v880,
    v958,
    v1036,
    v1114,
    v1192,
    v1270,
    v1348,
    v1426,
    v1504,
    v1582,
    (int)v1660,
    v1738);
  v1950 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v881);
  v1945 = 0;
  v1946 = 0;
  *(_QWORD *)&v1947 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1946 = 3;
  v100 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v100,
    "Address within segment to delete",
    v101,
    v102,
    v103,
    v104,
    v529,
    v651,
    v773);
  v1947 = (unsigned __int64)v100;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1839,
    (__int64)v881,
    2,
    v105,
    v106,
    v107,
    v530,
    v652,
    v774,
    (int)v881,
    v959,
    v1037,
    v1115,
    v1193,
    v1271,
    v1349,
    v1427,
    v1505,
    v1583,
    v1661,
    v1739);
  v1953 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1840,
    v531,
    2,
    v108,
    v109,
    v110,
    v531,
    v653,
    v775,
    v882,
    v960,
    v1038,
    v1116,
    v1194,
    v1272,
    v1350,
    v1428,
    v1506,
    v1584,
    v1662,
    v1740);
  v1958 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1585,
    v1663,
    2,
    v111,
    v112,
    v113,
    v532,
    v654,
    v776,
    v883,
    v961,
    v1039,
    v1117,
    v1195,
    v1273,
    v1351,
    v1429,
    v1507,
    (__int64)v1585,
    v1663,
    v1741);
  *((_QWORD *)&v1978 + 1) = 0;
  v1972 = 0;
  *(_QWORD *)&v1973 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1972 = 3;
  v114 = operator new(0x20u);
  *(_DWORD *)(v114 + 16) = 1734437990;
  *(_QWORD *)v114 = v114 + 16;
  *(_BYTE *)(v114 + 20) = 115;
  *(_QWORD *)(v114 + 8) = 5;
  *(_BYTE *)(v114 + 21) = 0;
  v1973 = (unsigned __int64)v114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1040);
  v1960 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1962 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1967,
    (__int64)v1040,
    2,
    v115,
    v116,
    v117,
    v533,
    v655,
    v777,
    v884,
    v962,
    (int)v1040,
    v1118,
    v1196,
    v1274,
    v1352,
    v1430,
    v1508,
    v1586,
    v1664,
    v1742);
  v1968 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1119);
  v1964 = 0;
  v1965 = 0;
  *(_QWORD *)&v1966 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1965 = 3;
  v118 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v118,
    "Deletion flags (0=default)",
    v119,
    v120,
    v121,
    v122,
    v534,
    v656,
    v778);
  v1966 = (unsigned __int64)v118;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1841,
    (__int64)v1119,
    2,
    v123,
    v124,
    v125,
    v535,
    v657,
    v779,
    v885,
    v963,
    v1041,
    (__int64)v1119,
    v1197,
    v1275,
    v1353,
    v1431,
    v1509,
    v1587,
    v1665,
    v1743);
  v1971 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1842,
    (__int64)&v1967,
    2,
    v126,
    v127,
    v128,
    v536,
    v658,
    v780,
    v886,
    v964,
    v1042,
    v1120,
    v1198,
    v1276,
    v1354,
    v1432,
    v1510,
    v1588,
    v1666,
    v1744);
  v1976 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1843,
    (__int64)&v1972,
    2,
    v129,
    v130,
    v131,
    v537,
    v659,
    v781,
    v887,
    v965,
    v1043,
    v1121,
    v1199,
    v1277,
    v1355,
    v1433,
    v1511,
    v1589,
    v1667,
    v1745);
  v1981 = 0;
  v1868 = &v1984;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1984,
    v1590,
    2,
    v132,
    v133,
    v134,
    v538,
    v660,
    v782,
    v888,
    v966,
    v1044,
    v1122,
    v1200,
    v1278,
    v1356,
    v1434,
    v1512,
    v1590,
    v1668,
    v1746);
  v1985 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1844,
    (__int64)v1817,
    2,
    v135,
    v136,
    v137,
    v539,
    v661,
    v783,
    v889,
    v967,
    v1045,
    v1123,
    v1201,
    v1279,
    v1357,
    v1435,
    v1513,
    v1591,
    v1669,
    v1747);
  v1996 = 0;
  LOBYTE(v1986) = 0;
  *(_QWORD *)&v1987 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1986) = 3;
  v138 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v138, "required", v139, v140, v141, v142, v540, v662, v784);
  v1987 = (unsigned __int64)v138;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v663);
  v1933 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v143 = _mm_load_si128(&v1879);
  v1989 = 0;
  v1988 = v143;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1845,
    (__int64)&v1986,
    2,
    v144,
    v145,
    v146,
    v541,
    (__int64)v663,
    v785,
    v890,
    v968,
    v1046,
    v1124,
    v1202,
    v1280,
    v1358,
    v1436,
    v1514,
    v1592,
    v1670,
    v1748);
  v1998 = 0;
  LOBYTE(v1880) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1837,
    (__int64)&v1993,
    3,
    v147,
    v148,
    v149,
    v542,
    v664,
    v786,
    v891,
    v969,
    v1047,
    v1125,
    v1203,
    v1281,
    v1359,
    v1437,
    v1515,
    v1593,
    v1671,
    v1749);
  v150 = v2009;
  v2009 = v1880;
  v151 = v2010;
  LOBYTE(v1880) = v150;
  v2010 = v1881;
  v1881 = v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v152 = v1835;
  do
  {
    v152 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v152 != &v1993 );
  v1865 = &v1988.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v153 = _mm_load_si128((const __m128i *)&v1814);
  v1994 = 0;
  v1993 = ida_mcp::tools::segment_manipulation::`anonymous namespace'::handle_del_segment;
  v1995 = v153;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1995.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1995.m128i_i64[0])(&v1993, &v1993, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2003);
  v2004 = 0;
  v2005[0] = 0;
  v2003 = v1846;
  v2007 = 0;
  v2006 = v1848;
  v2008[0] = 0;
  v2009 = 0;
  v2010 = 0;
  v2011 = 0;
  v2012 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1438);
  *((_QWORD *)&v1937 + 1) = 0;
  LOBYTE(v1938) = 0;
  *(_QWORD *)&v1939 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1938) = 3;
  v154 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v154, "object", v155, v156, v157, v158, v543, v665, v787);
  v1939 = (unsigned __int64)v154;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1993,
    (__int64)v1438,
    2,
    v159,
    v160,
    v161,
    v544,
    v666,
    v788,
    v892,
    v970,
    v1048,
    v1126,
    v1204,
    v1282,
    v1360,
    (int)v1438,
    v1516,
    v1594,
    v1672,
    v1750);
  v1995.m128i_i64[0] = 0;
  v1982 = 0;
  *(_QWORD *)&v1983 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1982 = 3;
  v162 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v162, "properties", v163, v164, v165, v166, v545, v667, v789);
  v1983 = (unsigned __int64)v162;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1673);
  *((_QWORD *)&v1955 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v790);
  v1941 = 0;
  v1942 = 0;
  *(_QWORD *)&v1943 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1942 = 3;
  v167 = operator new(0x20u);
  strcpy((char *)(v167 + 16), "string");
  *(_QWORD *)v167 = v167 + 16;
  *(_QWORD *)(v167 + 8) = 6;
  v1943 = (unsigned __int64)v167;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v546,
    (__int64)v790,
    2,
    v168,
    v169,
    v170,
    (int)v546,
    v668,
    (int)v790,
    v893,
    v971,
    v1049,
    v1127,
    v1205,
    v1283,
    v1361,
    v1439,
    v1517,
    v1595,
    (int)v1673,
    v1751);
  v1950 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v894);
  v1945 = 0;
  v1946 = 0;
  *(_QWORD *)&v1947 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1946 = 3;
  v171 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v171,
    "Address within segment",
    v172,
    v173,
    v174,
    v175,
    v547,
    v669,
    v791);
  v1947 = (unsigned __int64)v171;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1839,
    (__int64)v894,
    2,
    v176,
    v177,
    v178,
    v548,
    v670,
    v792,
    (int)v894,
    v972,
    v1050,
    v1128,
    v1206,
    v1284,
    v1362,
    v1440,
    v1518,
    v1596,
    v1674,
    v1752);
  v1953 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1840,
    v549,
    2,
    v179,
    v180,
    v181,
    v549,
    v671,
    v793,
    v895,
    v973,
    v1051,
    v1129,
    v1207,
    v1285,
    v1363,
    v1441,
    v1519,
    v1597,
    v1675,
    v1753);
  v1958 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1598,
    v1676,
    2,
    v182,
    v183,
    v184,
    v550,
    v672,
    v794,
    v896,
    v974,
    v1052,
    v1130,
    v1208,
    v1286,
    v1364,
    v1442,
    v1520,
    (__int64)v1598,
    v1676,
    v1754);
  *((_QWORD *)&v1978 + 1) = 0;
  v1972 = 0;
  *(_QWORD *)&v1973 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1972 = 3;
  v185 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v185, "name", v186, v187, v188, v189, v551, v673, v795);
  v1973 = (unsigned __int64)v185;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1053);
  v1960 = 0;
  v1961 = 0;
  *(_QWORD *)&v1962 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1961 = 3;
  v190 = operator new(0x20u);
  *(_QWORD *)v190 = v190 + 16;
  strcpy((char *)(v190 + 16), "string");
  *(_QWORD *)(v190 + 8) = 6;
  v1962 = (unsigned __int64)v190;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1967,
    (__int64)v1053,
    2,
    v191,
    v192,
    v193,
    v552,
    v674,
    v796,
    v897,
    v975,
    (int)v1053,
    v1131,
    v1209,
    v1287,
    v1365,
    v1443,
    v1521,
    v1599,
    v1677,
    v1755);
  v1968 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1132);
  v1964 = 0;
  v1965 = 0;
  *(_QWORD *)&v1966 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1965 = 3;
  v194 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v194, "New segment name", v195, v196, v197, v198, v553, v675, v797);
  v1966 = (unsigned __int64)v194;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1841,
    (__int64)v1132,
    2,
    v199,
    v200,
    v201,
    v554,
    v676,
    v798,
    v898,
    v976,
    v1054,
    (__int64)v1132,
    v1210,
    v1288,
    v1366,
    v1444,
    v1522,
    v1600,
    v1678,
    v1756);
  v1971 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1842,
    (__int64)&v1967,
    2,
    v202,
    v203,
    v204,
    v555,
    v677,
    v799,
    v899,
    v977,
    v1055,
    v1133,
    v1211,
    v1289,
    v1367,
    v1445,
    v1523,
    v1601,
    v1679,
    v1757);
  v1976 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1843,
    (__int64)&v1972,
    2,
    v205,
    v206,
    v207,
    v556,
    v678,
    v800,
    v900,
    v978,
    v1056,
    v1134,
    v1212,
    v1290,
    v1368,
    v1446,
    v1524,
    v1602,
    v1680,
    v1758);
  v1981 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1868,
    v1603,
    2,
    v208,
    v209,
    v210,
    v557,
    v679,
    v801,
    v901,
    v979,
    v1057,
    v1135,
    v1213,
    v1291,
    v1369,
    v1447,
    v1525,
    v1603,
    v1681,
    v1759);
  v1985 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1844,
    (__int64)v1817,
    2,
    v211,
    v212,
    v213,
    v558,
    v680,
    v802,
    v902,
    v980,
    v1058,
    v1136,
    v1214,
    v1292,
    v1370,
    v1448,
    v1526,
    v1604,
    v1682,
    v1760);
  v1996 = 0;
  LOBYTE(v1986) = 0;
  *(_QWORD *)&v1987 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1986) = 3;
  v214 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v214, "required", v215, v216, v217, v218, v559, v681, v803);
  v1987 = (unsigned __int64)v214;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v682);
  v1933 = 0;
  LOBYTE(v1934) = 0;
  *(_QWORD *)&v1935 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1934) = 3;
  v219 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v219, "name", v220, v221, v222, v223, v560, (int)v682, v804);
  v1935 = (unsigned __int64)v219;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v224 = _mm_load_si128(&v1879);
  v1989 = 0;
  v1988 = v224;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1845,
    (__int64)&v1986,
    2,
    v225,
    v226,
    v227,
    v561,
    v683,
    v805,
    v903,
    v981,
    v1059,
    v1137,
    v1215,
    v1293,
    v1371,
    v1449,
    v1527,
    v1605,
    v1683,
    v1761);
  v1998 = 0;
  LOBYTE(v1880) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1837,
    (__int64)&v1993,
    3,
    v228,
    v229,
    v230,
    v562,
    v684,
    v806,
    v904,
    v982,
    v1060,
    v1138,
    v1216,
    v1294,
    v1372,
    v1450,
    v1528,
    v1606,
    v1684,
    v1762);
  v231 = v2009;
  v2009 = v1880;
  v232 = v2010;
  LOBYTE(v1880) = v231;
  v2010 = v1881;
  v1881 = v232;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v233 = v1835;
  do
  {
    v233 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v233 != &v1993 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v234 = _mm_load_si128((const __m128i *)&v1814);
  v1994 = 0;
  v1993 = ida_mcp::tools::segment_manipulation::`anonymous namespace'::handle_set_segment_name;
  v1995 = v234;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1995.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1995.m128i_i64[0])(&v1993, &v1993, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2003);
  v2004 = 0;
  v2005[0] = 0;
  v2003 = v1846;
  v2007 = 0;
  v2006 = v1848;
  v2008[0] = 0;
  v2009 = 0;
  v2010 = 0;
  v2011 = 0;
  v2012 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1451);
  *((_QWORD *)&v1937 + 1) = 0;
  LOBYTE(v1938) = 0;
  *(_QWORD *)&v1939 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1938) = 3;
  v235 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v235, "object", v236, v237, v238, v239, v563, v685, v807);
  v1939 = (unsigned __int64)v235;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1993,
    (__int64)v1451,
    2,
    v240,
    v241,
    v242,
    v564,
    v686,
    v808,
    v905,
    v983,
    v1061,
    v1139,
    v1217,
    v1295,
    v1373,
    (int)v1451,
    v1529,
    v1607,
    v1685,
    v1763);
  v1995.m128i_i64[0] = 0;
  v1982 = 0;
  *(_QWORD *)&v1983 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1982 = 3;
  v243 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v243, "properties", v244, v245, v246, v247, v565, v687, v809);
  v1983 = (unsigned __int64)v243;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1686);
  *((_QWORD *)&v1955 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v810);
  v1941 = 0;
  v1942 = 0;
  *(_QWORD *)&v1943 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1942 = 3;
  v248 = operator new(0x20u);
  strcpy((char *)(v248 + 16), "string");
  *(_QWORD *)v248 = v248 + 16;
  *(_QWORD *)(v248 + 8) = 6;
  v1943 = (unsigned __int64)v248;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v566,
    (__int64)v810,
    2,
    v249,
    v250,
    v251,
    (int)v566,
    v688,
    (int)v810,
    v906,
    v984,
    v1062,
    v1140,
    v1218,
    v1296,
    v1374,
    v1452,
    v1530,
    v1608,
    (int)v1686,
    v1764);
  v1950 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v907);
  v1945 = 0;
  v1946 = 0;
  *(_QWORD *)&v1947 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1946 = 3;
  v252 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v252,
    "Address within segment",
    v253,
    v254,
    v255,
    v256,
    v567,
    v689,
    v811);
  v1947 = (unsigned __int64)v252;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1839,
    (__int64)v907,
    2,
    v257,
    v258,
    v259,
    v568,
    v690,
    v812,
    (int)v907,
    v985,
    v1063,
    v1141,
    v1219,
    v1297,
    v1375,
    v1453,
    v1531,
    v1609,
    v1687,
    v1765);
  v1953 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1840,
    v569,
    2,
    v260,
    v261,
    v262,
    v569,
    v691,
    v813,
    v908,
    v986,
    v1064,
    v1142,
    v1220,
    v1298,
    v1376,
    v1454,
    v1532,
    v1610,
    v1688,
    v1766);
  v1958 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1611,
    v1689,
    2,
    v263,
    v264,
    v265,
    v570,
    v692,
    v814,
    v909,
    v987,
    v1065,
    v1143,
    v1221,
    v1299,
    v1377,
    v1455,
    v1533,
    (__int64)v1611,
    v1689,
    v1767);
  *((_QWORD *)&v1978 + 1) = 0;
  v1972 = 0;
  *(_QWORD *)&v1973 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1972 = 3;
  v266 = operator new(0x20u);
  *(_DWORD *)(v266 + 16) = 1935764579;
  *(_QWORD *)v266 = v266 + 16;
  *(_BYTE *)(v266 + 20) = 115;
  *(_QWORD *)(v266 + 8) = 5;
  *(_BYTE *)(v266 + 21) = 0;
  v1973 = (unsigned __int64)v266;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1066);
  v1960 = 0;
  v1961 = 0;
  *(_QWORD *)&v1962 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1961 = 3;
  v267 = operator new(0x20u);
  *(_QWORD *)v267 = v267 + 16;
  strcpy((char *)(v267 + 16), "string");
  *(_QWORD *)(v267 + 8) = 6;
  v1962 = (unsigned __int64)v267;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1967,
    (__int64)v1066,
    2,
    v268,
    v269,
    v270,
    v571,
    v693,
    v815,
    v910,
    v988,
    (int)v1066,
    v1144,
    v1222,
    v1300,
    v1378,
    v1456,
    v1534,
    v1612,
    v1690,
    v1768);
  v1968 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1145);
  v1964 = 0;
  v1965 = 0;
  *(_QWORD *)&v1966 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1965 = 3;
  v271 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v271, "New segment class", v272, v273, v274, v275, v572, v694, v816);
  v1966 = (unsigned __int64)v271;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1841,
    (__int64)v1145,
    2,
    v276,
    v277,
    v278,
    v573,
    v695,
    v817,
    v911,
    v989,
    v1067,
    (__int64)v1145,
    v1223,
    v1301,
    v1379,
    v1457,
    v1535,
    v1613,
    v1691,
    v1769);
  v1971 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1842,
    (__int64)&v1967,
    2,
    v279,
    v280,
    v281,
    v574,
    v696,
    v818,
    v912,
    v990,
    v1068,
    v1146,
    v1224,
    v1302,
    v1380,
    v1458,
    v1536,
    v1614,
    v1692,
    v1770);
  v1976 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1843,
    (__int64)&v1972,
    2,
    v282,
    v283,
    v284,
    v575,
    v697,
    v819,
    v913,
    v991,
    v1069,
    v1147,
    v1225,
    v1303,
    v1381,
    v1459,
    v1537,
    v1615,
    v1693,
    v1771);
  v1981 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1868,
    v1616,
    2,
    v285,
    v286,
    v287,
    v576,
    v698,
    v820,
    v914,
    v992,
    v1070,
    v1148,
    v1226,
    v1304,
    v1382,
    v1460,
    v1538,
    v1616,
    v1694,
    v1772);
  v1985 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1844,
    (__int64)v1817,
    2,
    v288,
    v289,
    v290,
    v577,
    v699,
    v821,
    v915,
    v993,
    v1071,
    v1149,
    v1227,
    v1305,
    v1383,
    v1461,
    v1539,
    v1617,
    v1695,
    v1773);
  v1996 = 0;
  LOBYTE(v1986) = 0;
  *(_QWORD *)&v1987 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1986) = 3;
  v291 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v291, "required", v292, v293, v294, v295, v578, v700, v822);
  v1987 = (unsigned __int64)v291;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v701);
  v1933 = 0;
  LOBYTE(v1934) = 0;
  *(_QWORD *)&v1935 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1934) = 3;
  v296 = operator new(0x20u);
  *(_BYTE *)(v296 + 20) = 115;
  *(_QWORD *)v296 = v296 + 16;
  *(_DWORD *)(v296 + 16) = 1935764579;
  *(_QWORD *)(v296 + 8) = 5;
  *(_BYTE *)(v296 + 21) = 0;
  v1935 = (unsigned __int64)v296;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v297 = _mm_load_si128(&v1879);
  v1989 = 0;
  v1988 = v297;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1845,
    (__int64)&v1986,
    2,
    v298,
    v299,
    v300,
    v579,
    (__int64)v701,
    v823,
    v916,
    v994,
    v1072,
    v1150,
    v1228,
    v1306,
    v1384,
    v1462,
    v1540,
    v1618,
    v1696,
    v1774);
  v1998 = 0;
  LOBYTE(v1880) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1837,
    (__int64)&v1993,
    3,
    v301,
    v302,
    v303,
    v580,
    v702,
    v824,
    v917,
    v995,
    v1073,
    v1151,
    v1229,
    v1307,
    v1385,
    v1463,
    v1541,
    v1619,
    v1697,
    v1775);
  v304 = v2009;
  v2009 = v1880;
  v305 = v2010;
  LOBYTE(v1880) = v304;
  v2010 = v1881;
  v1881 = v305;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v306 = v1835;
  do
  {
    v306 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v306 != &v1993 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v307 = _mm_load_si128((const __m128i *)&v1814);
  v1994 = 0;
  v1993 = ida_mcp::tools::segment_manipulation::`anonymous namespace'::handle_set_segment_class;
  v1995 = v307;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1995.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1995.m128i_i64[0])(&v1993, &v1993, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2003);
  v2004 = 0;
  v2005[0] = 0;
  v2003 = v1846;
  v2007 = 0;
  v2006 = v1848;
  v2008[0] = 0;
  v2009 = 0;
  v2010 = 0;
  v2011 = 0;
  v2012 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1849);
  *((_QWORD *)&v1919 + 1) = 0;
  LOBYTE(v1920) = 0;
  *(_QWORD *)&v1921 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1920) = 3;
  v308 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v308, "object", v309, v310, v311, v312, v581, v703, v825);
  v1921 = (unsigned __int64)v308;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1993,
    (__int64)v1849,
    2,
    v313,
    v314,
    v315,
    v582,
    v704,
    v826,
    v918,
    v996,
    v1074,
    v1152,
    v1230,
    v1308,
    v1386,
    v1464,
    v1542,
    v1620,
    v1698,
    v1776);
  v1995.m128i_i64[0] = 0;
  v1977 = 0;
  *(_QWORD *)&v1978 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1977 = 3;
  v316 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v316, "properties", v317, v318, v319, v320, v583, v705, v827);
  v1978 = (unsigned __int64)v316;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1465);
  *((_QWORD *)&v1937 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1819);
  v1924 = 0;
  v1925 = 0;
  *(_QWORD *)&v1926 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1925 = 3;
  v321 = operator new(0x20u);
  strcpy((char *)(v321 + 16), "string");
  v322 = (__int64 *)v1819;
  *(_QWORD *)v321 = v321 + 16;
  *(_QWORD *)(v321 + 8) = 6;
  v1926 = (unsigned __int64)v321;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v706,
    (__int64)v322,
    2,
    v323,
    v324,
    v325,
    v584,
    (__int64)v706,
    v828,
    v919,
    v997,
    v1075,
    v1153,
    v1231,
    v1309,
    v1387,
    (int)v1465,
    v1543,
    v1621,
    v1699,
    v1777);
  v1933 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1820);
  v1928 = 0;
  v1929 = 0;
  *(_QWORD *)&v1930 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1929 = 3;
  v326 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v326,
    "Address within segment",
    v327,
    v328,
    v329,
    v330,
    v585,
    v707,
    v829);
  v1930 = (unsigned __int64)v326;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1866,
    (__int64)v1820,
    2,
    v331,
    v332,
    v333,
    v586,
    v708,
    v830,
    v920,
    v998,
    v1076,
    v1154,
    v1232,
    v1310,
    v1388,
    v1466,
    v1544,
    v1622,
    v1700,
    v1778);
  *((_QWORD *)&v1935 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1867,
    v709,
    2,
    v334,
    v335,
    v336,
    v587,
    v709,
    v831,
    v921,
    v999,
    v1077,
    v1155,
    v1233,
    v1311,
    v1389,
    v1467,
    v1545,
    v1623,
    v1701,
    v1779);
  *((_QWORD *)&v1939 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1986,
    v1468,
    2,
    v337,
    v338,
    v339,
    v588,
    v710,
    v832,
    v922,
    v1000,
    v1078,
    v1156,
    v1234,
    v1312,
    v1390,
    v1468,
    v1546,
    v1624,
    v1702,
    v1780);
  *((_QWORD *)&v1987 + 1) = 0;
  v1954 = 0;
  *(_QWORD *)&v1955 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1954 = 3;
  v340 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v340, "new_start", v341, v342, v343, v344, v589, v711, v833);
  v1955 = (unsigned __int64)v340;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v834);
  v1941 = 0;
  v1942 = 0;
  *(_QWORD *)&v1943 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1942 = 3;
  v345 = operator new(0x20u);
  *(_QWORD *)v345 = v345 + 16;
  strcpy((char *)(v345 + 16), "string");
  *(_QWORD *)(v345 + 8) = 6;
  v1943 = (unsigned __int64)v345;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v590,
    (__int64)v834,
    2,
    v346,
    26478,
    v347,
    (int)v590,
    v712,
    (int)v834,
    v923,
    v1001,
    v1079,
    v1157,
    v1235,
    v1313,
    v1391,
    v1469,
    v1547,
    v1625,
    v1703,
    v1781);
  v1950 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v924);
  v1945 = 0;
  v1946 = 0;
  *(_QWORD *)&v1947 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1946 = 3;
  v348 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v348, "New start address", v349, v350, v351, v352, v591, v713, v835);
  v1947 = (unsigned __int64)v348;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1839,
    (__int64)v924,
    2,
    v353,
    v354,
    v355,
    v592,
    v714,
    v836,
    (int)v924,
    v1002,
    v1080,
    v1158,
    v1236,
    v1314,
    v1392,
    v1470,
    v1548,
    v1626,
    v1704,
    v1782);
  v1953 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1840,
    v593,
    2,
    v356,
    v357,
    v358,
    v593,
    v715,
    v837,
    v925,
    v1003,
    v1081,
    v1159,
    v1237,
    v1315,
    v1393,
    v1471,
    v1549,
    v1627,
    v1705,
    v1783);
  v1958 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1869,
    v1706,
    2,
    v359,
    v360,
    v361,
    v594,
    v716,
    v838,
    v926,
    v1004,
    v1082,
    v1160,
    v1238,
    v1316,
    v1394,
    v1472,
    v1550,
    v1628,
    v1706,
    v1784);
  v1989 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1973 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1083);
  v1960 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1857);
  *((_QWORD *)&v1962 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1967,
    (__int64)v1083,
    2,
    v362,
    v363,
    v364,
    v595,
    v717,
    v839,
    v927,
    v1005,
    (int)v1083,
    v1161,
    v1239,
    v1317,
    v1395,
    v1473,
    v1551,
    v1629,
    v1707,
    v1785);
  v1968 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1162);
  v1964 = 0;
  v1965 = 0;
  *(_QWORD *)&v1966 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1965 = 3;
  v365 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v365, "New end address", v366, v367, v368, v369, v596, v718, v840);
  v1966 = (unsigned __int64)v365;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1841,
    (__int64)v1162,
    2,
    v370,
    v371,
    v372,
    v597,
    v719,
    v841,
    v928,
    v1006,
    v1084,
    (__int64)v1162,
    v1240,
    v1318,
    v1396,
    v1474,
    v1552,
    v1630,
    v1708,
    v1786);
  v1971 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1842,
    (__int64)&v1967,
    2,
    v373,
    v374,
    v375,
    v598,
    v720,
    v842,
    v929,
    v1007,
    v1085,
    v1163,
    v1241,
    v1319,
    v1397,
    v1475,
    v1553,
    v1631,
    v1709,
    v1787);
  v1976 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1870,
    (__int64)&v1972,
    2,
    v376,
    v377,
    v378,
    v599,
    v721,
    v843,
    v930,
    v1008,
    v1086,
    v1164,
    v1242,
    v1320,
    v1398,
    v1476,
    v1554,
    v1632,
    v1710,
    v1788);
  v1991 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1843,
    (__int64)&v1986,
    3,
    v379,
    v380,
    v381,
    v600,
    v722,
    v844,
    v931,
    v1009,
    v1087,
    v1165,
    v1243,
    v1321,
    v1399,
    v1477,
    v1555,
    v1633,
    v1711,
    v1789);
  v1981 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1844,
    v1634,
    2,
    v382,
    v383,
    v384,
    v601,
    v723,
    v845,
    v932,
    v1010,
    v1088,
    v1166,
    v1244,
    v1322,
    v1400,
    v1478,
    v1556,
    v1634,
    v1712,
    v1790);
  v1996 = 0;
  v1982 = 0;
  *(_QWORD *)&v1983 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1982 = 3;
  v385 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v385, "required", v386, v387, v388, v389, v602, v724, v846);
  v1983 = (unsigned __int64)v385;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1818);
  v1914 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v390 = _mm_load_si128(&v1879);
  v1985 = 0;
  v1984 = v390;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1845,
    (__int64)v1817,
    2,
    v391,
    v392,
    v393,
    v603,
    v725,
    v847,
    v933,
    v1011,
    v1089,
    v1167,
    v1245,
    v1323,
    v1401,
    v1479,
    v1557,
    v1635,
    v1713,
    v1791);
  v1998 = 0;
  LOBYTE(v1880) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1837,
    (__int64)&v1993,
    3,
    v394,
    v395,
    v396,
    v604,
    v726,
    v848,
    v934,
    v1012,
    v1090,
    v1168,
    v1246,
    v1324,
    v1402,
    v1480,
    v1558,
    v1636,
    v1714,
    v1792);
  LOBYTE(v322) = v2009;
  v2009 = v1880;
  v397 = v2010;
  LOBYTE(v1880) = (_BYTE)v322;
  v2010 = v1881;
  v1881 = v397;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v398 = v1835;
  do
  {
    v398 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v398 != &v1993 );
  v399 = (__int64 *)&v1992;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v399 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v399 != &v1986 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v400 = _mm_load_si128((const __m128i *)&v1814);
  v1994 = 0;
  v1993 = ida_mcp::tools::segment_manipulation::`anonymous namespace'::handle_set_segment_bounds;
  v1995 = v400;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1995.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1995.m128i_i64[0])(&v1993, &v1993, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2003);
  v2004 = 0;
  v2005[0] = 0;
  v2003 = v1846;
  v2007 = 0;
  v2006 = v1848;
  v2008[0] = 0;
  v2009 = 0;
  v2010 = 0;
  v2011 = 0;
  v2012 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1858);
  *((_QWORD *)&v1901 + 1) = 0;
  LOBYTE(v1902) = 0;
  *(_QWORD *)&v1903 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1902) = 3;
  v401 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v401, "object", v402, v403, v404, v405, v605, v727, v849);
  v1903 = (unsigned __int64)v401;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1986,
    (__int64)v1858,
    2,
    v406,
    v407,
    v408,
    v606,
    v728,
    v850,
    v935,
    v1013,
    v1091,
    v1169,
    v1247,
    v1325,
    v1403,
    v1481,
    v1559,
    v1637,
    v1715,
    v1793);
  *((_QWORD *)&v1987 + 1) = 0;
  v1977 = 0;
  *(_QWORD *)&v1978 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1977 = 3;
  v409 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v409, "properties", v410, v411, v412, v413, v607, v729, v851);
  v1978 = (unsigned __int64)v409;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1849);
  *((_QWORD *)&v1919 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1852);
  v1906 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v1907);
  *((_QWORD *)&v1908 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1818,
    (__int64)v1852,
    2,
    v414,
    v415,
    v416,
    v608,
    v730,
    v852,
    v936,
    v1014,
    v1092,
    v1170,
    v1248,
    v1326,
    v1404,
    v1482,
    v1560,
    v1638,
    v1716,
    v1794);
  v1914 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1853);
  v1910 = 0;
  v1911 = 0;
  *(_QWORD *)&v1912 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1911 = 3;
  v417 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v417,
    "Address within segment",
    v418,
    v419,
    v420,
    v421,
    v609,
    v731,
    v853);
  v1912 = (unsigned __int64)v417;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1877,
    (__int64)v1853,
    2,
    v422,
    v423,
    v424,
    v610,
    v732,
    v854,
    v937,
    v1015,
    v1093,
    v1171,
    v1249,
    v1327,
    v1405,
    v1483,
    v1561,
    v1639,
    v1717,
    v1795);
  v1917 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1878,
    (__int64)v1818,
    2,
    v425,
    v426,
    v427,
    v611,
    v733,
    v855,
    v938,
    v1016,
    v1094,
    v1172,
    v1250,
    v1328,
    v1406,
    v1484,
    v1562,
    v1640,
    v1718,
    v1796);
  *((_QWORD *)&v1921 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1993,
    (__int64)v1849,
    2,
    v428,
    v429,
    v430,
    v612,
    v734,
    v856,
    v939,
    v1017,
    v1095,
    v1173,
    v1251,
    v1329,
    v1407,
    v1485,
    v1563,
    v1641,
    v1719,
    v1797);
  v1995.m128i_i64[0] = 0;
  v1936 = 0;
  *(_QWORD *)&v1937 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1936 = 3;
  v431 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v431, "read", v432, v433, v434, v435, v613, v735, v857);
  v1937 = (unsigned __int64)v431;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1819);
  v1924 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1926 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v736,
    (__int64)v1819,
    2,
    v436,
    v437,
    v438,
    v614,
    (__int64)v736,
    v858,
    v940,
    v1018,
    v1096,
    v1174,
    v1252,
    v1330,
    v1408,
    v1486,
    v1564,
    v1642,
    v1720,
    v1798);
  v1933 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1820);
  v1928 = 0;
  v1929 = 0;
  *(_QWORD *)&v1930 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1929 = 3;
  v439 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v439,
    "Readable (default true)",
    v440,
    v441,
    v442,
    v443,
    v615,
    v737,
    v859);
  v1930 = (unsigned __int64)v439;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1866,
    (__int64)v1820,
    2,
    v444,
    v445,
    v446,
    v616,
    v738,
    v860,
    v941,
    v1019,
    v1097,
    v1175,
    v1253,
    v1331,
    v1409,
    v1487,
    v1565,
    v1643,
    v1721,
    v1799);
  *((_QWORD *)&v1935 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1867,
    v739,
    2,
    v447,
    v448,
    v449,
    v617,
    v739,
    v861,
    v942,
    v1020,
    v1098,
    v1176,
    v1254,
    v1332,
    v1410,
    v1488,
    v1566,
    v1644,
    v1722,
    v1800);
  *((_QWORD *)&v1939 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1844,
    v1489,
    2,
    v450,
    v451,
    v452,
    v618,
    v740,
    v862,
    v943,
    v1021,
    v1099,
    v1177,
    v1255,
    v1333,
    v1411,
    v1489,
    v1567,
    v1645,
    v1723,
    v1801);
  v1996 = 0;
  v1954 = 0;
  *(_QWORD *)&v1955 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1954 = 3;
  v453 = operator new(0x20u);
  *(_DWORD *)(v453 + 16) = 1953067639;
  *(_QWORD *)v453 = v453 + 16;
  *(_BYTE *)(v453 + 20) = 101;
  *(_QWORD *)(v453 + 8) = 5;
  *(_BYTE *)(v453 + 21) = 0;
  v1955 = (unsigned __int64)v453;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v863);
  v1941 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1943 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v619,
    (__int64)v863,
    2,
    v454,
    v455,
    v456,
    (int)v619,
    v741,
    (int)v863,
    v944,
    v1022,
    v1100,
    v1178,
    v1256,
    v1334,
    v1412,
    v1490,
    v1568,
    v1646,
    v1724,
    v1802);
  v1950 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v945);
  v1945 = 0;
  v1946 = 0;
  *(_QWORD *)&v1947 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1946 = 3;
  v457 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v457,
    "Writable (default false)",
    v458,
    v459,
    v460,
    v461,
    v620,
    v742,
    v864);
  v1947 = (unsigned __int64)v457;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1839,
    (__int64)v945,
    2,
    v462,
    v463,
    v464,
    v621,
    v743,
    v865,
    (int)v945,
    v1023,
    v1101,
    v1179,
    v1257,
    v1335,
    v1413,
    v1491,
    v1569,
    v1647,
    v1725,
    v1803);
  v1953 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1840,
    v622,
    2,
    v465,
    v466,
    v467,
    v622,
    v744,
    v866,
    v946,
    v1024,
    v1102,
    v1180,
    v1258,
    v1336,
    v1414,
    v1492,
    v1570,
    v1648,
    v1726,
    v1804);
  v1958 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1845,
    v1727,
    2,
    v468,
    v469,
    v470,
    v623,
    v745,
    v867,
    v947,
    v1025,
    v1103,
    v1181,
    v1259,
    v1337,
    v1415,
    v1493,
    v1571,
    v1649,
    v1727,
    v1805);
  v1998 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1973 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1104);
  v1960 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1962 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1967,
    (__int64)v1104,
    2,
    v471,
    v472,
    v473,
    v624,
    v746,
    v868,
    v948,
    v1026,
    (int)v1104,
    v1182,
    v1260,
    v1338,
    v1416,
    v1494,
    v1572,
    v1650,
    v1728,
    v1806);
  v1968 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1183);
  v1964 = 0;
  v1965 = 0;
  *(_QWORD *)&v1966 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1965 = 3;
  v474 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v474,
    "Executable (default false)",
    v475,
    v476,
    v477,
    v478,
    v625,
    v747,
    v869);
  v1966 = (unsigned __int64)v474;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1841,
    (__int64)v1183,
    2,
    v479,
    v480,
    v481,
    v626,
    v748,
    v870,
    v949,
    v1027,
    v1105,
    (__int64)v1183,
    v1261,
    v1339,
    v1417,
    v1495,
    v1573,
    v1651,
    v1729,
    v1807);
  v1971 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1842,
    (__int64)&v1967,
    2,
    v482,
    v483,
    v484,
    v627,
    v749,
    v871,
    v950,
    v1028,
    v1106,
    v1184,
    v1262,
    v1340,
    v1418,
    v1496,
    v1574,
    v1652,
    v1730,
    v1808);
  v1976 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1835,
    (__int64)&v1972,
    2,
    v485,
    v486,
    v487,
    v628,
    v750,
    v872,
    v951,
    v1029,
    v1107,
    v1185,
    v1263,
    v1341,
    v1419,
    v1497,
    v1575,
    v1653,
    v1731,
    v1809);
  v2000 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1843,
    (__int64)&v1993,
    4,
    v488,
    v489,
    v490,
    v629,
    v751,
    v873,
    v952,
    v1030,
    v1108,
    v1186,
    v1264,
    v1342,
    v1420,
    v1498,
    v1576,
    v1654,
    v1732,
    v1810);
  v1981 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1869,
    v1655,
    2,
    v491,
    v492,
    v493,
    v630,
    v752,
    v874,
    v953,
    v1031,
    v1109,
    v1187,
    v1265,
    v1343,
    v1421,
    v1499,
    v1577,
    v1655,
    v1733,
    v1811);
  v1989 = 0;
  v1982 = 0;
  *(_QWORD *)&v1983 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1982 = 3;
  v494 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v494, "required", v495, v496, v497, v498, v631, v753, v875);
  v1983 = (unsigned __int64)v494;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1851);
  v1898 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v499 = _mm_load_si128(&v1879);
  v1985 = 0;
  v1984 = v499;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1870,
    (__int64)v1817,
    2,
    v500,
    v501,
    v502,
    v632,
    v754,
    v876,
    v954,
    v1032,
    v1110,
    v1188,
    v1266,
    v1344,
    v1422,
    v1500,
    v1578,
    v1656,
    v1734,
    v1812);
  v1991 = 0;
  LOBYTE(v1880) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1837,
    (__int64)&v1986,
    3,
    v503,
    v504,
    v505,
    v633,
    v755,
    v877,
    v955,
    v1033,
    v1111,
    v1189,
    v1267,
    v1345,
    v1423,
    v1501,
    v1579,
    v1657,
    v1735,
    v1813);
  v506 = v2009;
  v507 = (__int64 *)&v1992;
  v2009 = v1880;
  v508 = v2010;
  LOBYTE(v1880) = v506;
  v2010 = v1881;
  v1881 = v508;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v507 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v507 != &v1986 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v509 = v1876;
  do
  {
    v509 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v509 != &v1993 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v510 = _mm_load_si128((const __m128i *)&v1814);
  v1994 = 0;
  v1993 = ida_mcp::tools::segment_manipulation::`anonymous namespace'::handle_set_segment_permissions;
  v1995 = v510;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1995.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1995.m128i_i64[0])(&v1993, &v1993, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2003);
  return v2013 - __readfsqword(0x28u);
}

