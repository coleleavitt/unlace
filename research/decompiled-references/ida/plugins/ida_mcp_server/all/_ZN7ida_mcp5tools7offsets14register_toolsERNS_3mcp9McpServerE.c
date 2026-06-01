unsigned __int64 __fastcall ida_mcp::tools::offsets::register_tools(
        ida_mcp::tools::offsets *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  const __m128i *v13; // rsi
  __int64 *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 *v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *v38; // rbp
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rbp
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __m128i v48; // xmm0
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  void **v53; // rbp
  __int64 *v54; // rbp
  char *v55; // rbp
  __m128i si128; // xmm2
  __int64 *v57; // rbp
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // rbp
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 *v68; // rbp
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 *v77; // rbp
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 *v97; // rbp
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __m128i v102; // xmm0
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  char v109; // si
  __int64 v110; // rax
  void **v111; // rbp
  __m128i v112; // xmm3
  __int64 *v113; // rbp
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 *v121; // rbp
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  __int64 v127; // rsi
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 *v130; // rbp
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rax
  __int64 v145; // rsi
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 *v148; // rbp
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 *v162; // rbp
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rax
  __int64 v168; // rsi
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 *v171; // rbp
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
  __int64 *v185; // rbp
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 v190; // rax
  __int64 *v191; // rsi
  __int64 *v192; // rdi
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 *v195; // rbp
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 v203; // rcx
  __int64 v204; // r8
  __int64 v205; // r9
  __int64 v206; // rcx
  __int64 v207; // r8
  __int64 v208; // r9
  __int64 *v209; // rbp
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  __int64 v213; // r9
  __int64 v214; // rax
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 *v217; // rbp
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // r8
  __int64 v221; // r9
  __int64 v222; // rcx
  __int64 v223; // r8
  __int64 v224; // r9
  __int64 v225; // rcx
  __int64 v226; // r8
  __int64 v227; // r9
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  __int64 *v231; // rbp
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  __int64 v236; // rax
  __int64 v237; // rcx
  __int64 v238; // r8
  __int64 *v239; // rbp
  __int64 v240; // rdx
  __int64 v241; // rcx
  __int64 v242; // r8
  __int64 v243; // r9
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  __int64 v247; // rcx
  __int64 v248; // r8
  __int64 v249; // r9
  char *v250; // rbp
  __int64 v251; // rcx
  __int64 v252; // r8
  __int64 v253; // r9
  __int64 v254; // rcx
  __int64 v255; // r8
  __int64 v256; // r9
  __int64 v257; // rcx
  __int64 v258; // r8
  __int64 v259; // r9
  __int64 *v260; // r14
  __int64 v261; // rdx
  __int64 v262; // rcx
  __int64 v263; // r8
  __int64 v264; // r9
  __int64 *v265; // r14
  __int64 v266; // rdx
  __int64 v267; // rcx
  __int64 v268; // r8
  __int64 v269; // r9
  __int64 *v270; // r14
  __int64 v271; // rdx
  __int64 v272; // rcx
  __int64 v273; // r8
  __int64 v274; // r9
  __int64 *v275; // r14
  __int64 v276; // rdx
  __int64 v277; // rcx
  __int64 v278; // r8
  __int64 v279; // r9
  __int64 *v280; // r14
  __int64 v281; // rdx
  __int64 v282; // rcx
  __int64 v283; // r8
  __int64 v284; // r9
  __m128i v285; // xmm0
  __int64 v286; // rcx
  __int64 v287; // r8
  __int64 v288; // r9
  __int64 v289; // rcx
  __int64 v290; // r8
  __int64 v291; // r9
  __int64 *v292; // r14
  __int64 v293; // rax
  char *v294; // r15
  __m128i v295; // xmm4
  __int64 *v296; // rbp
  __int64 v297; // rdx
  __int64 v298; // rcx
  __int64 v299; // r8
  __int64 v300; // r9
  __int64 v301; // rcx
  __int64 v302; // r8
  __int64 v303; // r9
  __int64 *v304; // rbp
  __int64 v305; // rdx
  __int64 v306; // rcx
  __int64 v307; // r8
  __int64 v308; // r9
  __int64 v309; // rax
  __int64 v310; // rcx
  __int64 v311; // r8
  __int64 *v312; // rbp
  __int64 v313; // rdx
  __int64 v314; // rcx
  __int64 v315; // r8
  __int64 v316; // r9
  __int64 v317; // rcx
  __int64 v318; // r8
  __int64 v319; // r9
  __int64 v320; // rcx
  __int64 v321; // r8
  __int64 v322; // r9
  __int64 v323; // rcx
  __int64 v324; // r8
  __int64 v325; // r9
  __int64 v326; // rax
  __int64 v327; // rcx
  __int64 v328; // r8
  __int64 *v329; // rbp
  __int64 v330; // rdx
  __int64 v331; // rcx
  __int64 v332; // r8
  __int64 v333; // r9
  __int64 v334; // rcx
  __int64 v335; // r8
  __int64 v336; // r9
  __int64 v337; // rcx
  __int64 v338; // r8
  __int64 v339; // r9
  __int64 v340; // rcx
  __int64 v341; // r8
  __int64 v342; // r9
  __int64 v343; // rcx
  __int64 v344; // r8
  __int64 v345; // r9
  __int64 v346; // rcx
  __int64 v347; // r8
  __int64 v348; // r9
  __int64 *v349; // rbp
  __int64 v350; // rdx
  __int64 v351; // rcx
  __int64 v352; // r8
  __int64 v353; // r9
  __m128i v354; // xmm0
  __int64 v355; // rcx
  __int64 v356; // r8
  __int64 v357; // r9
  __int64 v358; // rcx
  __int64 v359; // r8
  __int64 v360; // r9
  char v361; // si
  __int64 v362; // rax
  void **v363; // rbp
  __m128i v364; // xmm5
  __int64 *v365; // rbp
  __int64 v366; // rdx
  __int64 v367; // rcx
  __int64 v368; // r8
  __int64 v369; // r9
  __int64 v370; // rcx
  __int64 v371; // r8
  __int64 v372; // r9
  __int64 *v373; // rbp
  __int64 v374; // rdx
  __int64 v375; // rcx
  __int64 v376; // r8
  __int64 v377; // r9
  __int64 v378; // rax
  __int64 v379; // rcx
  __int64 v380; // r8
  __int64 v381; // r9
  __int64 *v382; // rbp
  __int64 v383; // rdx
  __int64 v384; // rcx
  __int64 v385; // r8
  __int64 v386; // r9
  __int64 v387; // rcx
  __int64 v388; // r8
  __int64 v389; // r9
  __int64 v390; // rcx
  __int64 v391; // r8
  __int64 v392; // r9
  __int64 v393; // rcx
  __int64 v394; // r8
  __int64 v395; // r9
  __int64 v396; // rax
  __int64 v397; // rcx
  __int64 v398; // r8
  __int64 v399; // r9
  __int64 *v400; // rbp
  __int64 v401; // rdx
  __int64 v402; // rcx
  __int64 v403; // r8
  __int64 v404; // r9
  __int64 v405; // rcx
  __int64 v406; // r8
  __int64 v407; // r9
  __int64 v408; // rcx
  __int64 v409; // r8
  __int64 v410; // r9
  __int64 v411; // rcx
  __int64 v412; // r8
  __int64 v413; // r9
  __int64 v414; // rcx
  __int64 v415; // r8
  __int64 v416; // r9
  __int64 v417; // rcx
  __int64 v418; // r8
  __int64 v419; // r9
  __int64 *v420; // rbp
  __int64 v421; // rdx
  __int64 v422; // rcx
  __int64 v423; // r8
  __int64 v424; // r9
  __m128i v425; // xmm0
  __int64 v426; // rcx
  __int64 v427; // r8
  __int64 v428; // r9
  __int64 v429; // rcx
  __int64 v430; // r8
  __int64 v431; // r9
  char v432; // si
  __int64 v433; // rax
  void **v434; // rbp
  __m128i v435; // xmm6
  __int64 *v436; // rbp
  __int64 v437; // rdx
  __int64 v438; // rcx
  __int64 v439; // r8
  __int64 v440; // r9
  __int64 v441; // rcx
  __int64 v442; // r8
  __int64 v443; // r9
  __int64 *v444; // rbp
  __int64 v445; // rdx
  __int64 v446; // rcx
  __int64 v447; // r8
  __int64 v448; // r9
  __int64 v449; // rax
  __int64 v450; // rcx
  __int64 v451; // r8
  __int64 *v452; // rbp
  __int64 v453; // rdx
  __int64 v454; // rcx
  __int64 v455; // r8
  __int64 v456; // r9
  __int64 v457; // rcx
  __int64 v458; // r8
  __int64 v459; // r9
  __int64 v460; // rcx
  __int64 v461; // r8
  __int64 v462; // r9
  __int64 v463; // rcx
  __int64 v464; // r8
  __int64 v465; // r9
  __int64 v466; // rax
  __int64 v467; // rcx
  __int64 v468; // r8
  __int64 v469; // r9
  __int64 *v470; // rbp
  __int64 v471; // rdx
  __int64 v472; // rcx
  __int64 v473; // r8
  __int64 v474; // r9
  __int64 v475; // rcx
  __int64 v476; // r8
  __int64 v477; // r9
  __int64 v478; // rcx
  __int64 v479; // r8
  __int64 v480; // r9
  __int64 v481; // rcx
  __int64 v482; // r8
  __int64 v483; // r9
  __int64 v484; // rcx
  __int64 v485; // r8
  __int64 v486; // r9
  __int64 v487; // rcx
  __int64 v488; // r8
  __int64 v489; // r9
  __int64 *v490; // rbp
  __int64 v491; // rdx
  __int64 v492; // rcx
  __int64 v493; // r8
  __int64 v494; // r9
  __m128i v495; // xmm0
  __int64 v496; // rcx
  __int64 v497; // r8
  __int64 v498; // r9
  __int64 v499; // rcx
  __int64 v500; // r8
  __int64 v501; // r9
  char v502; // si
  __int64 v503; // rax
  void **v504; // rbp
  __m128i v505; // xmm7
  __int64 *v506; // rbp
  __int64 v507; // rdx
  __int64 v508; // rcx
  __int64 v509; // r8
  __int64 v510; // r9
  __int64 v511; // rcx
  __int64 v512; // r8
  __int64 v513; // r9
  __int64 *v514; // rbp
  __int64 v515; // rdx
  __int64 v516; // rcx
  __int64 v517; // r8
  __int64 v518; // r9
  __int64 v519; // rax
  __int64 v520; // rcx
  __int64 v521; // r8
  __int64 v522; // r9
  __int64 *v523; // rbp
  __int64 v524; // rdx
  __int64 v525; // rcx
  __int64 v526; // r8
  __int64 v527; // r9
  __int64 v528; // rcx
  __int64 v529; // r8
  __int64 v530; // r9
  __int64 v531; // rcx
  __int64 v532; // r8
  __int64 v533; // r9
  __int64 v534; // rcx
  __int64 v535; // r8
  __int64 v536; // r9
  __int64 v537; // rax
  __int64 v538; // rcx
  __int64 v539; // r8
  __int64 v540; // r9
  __int64 *v541; // rbp
  __int64 v542; // rdx
  __int64 v543; // rcx
  __int64 v544; // r8
  __int64 v545; // r9
  __int64 v546; // rcx
  __int64 v547; // r8
  __int64 v548; // r9
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
  __int64 *v561; // rbp
  __int64 v562; // rdx
  __int64 v563; // rcx
  __int64 v564; // r8
  __int64 v565; // r9
  __m128i v566; // xmm0
  __int64 v567; // rcx
  __int64 v568; // r8
  __int64 v569; // r9
  __int64 v570; // rcx
  __int64 v571; // r8
  __int64 v572; // r9
  char v573; // si
  __int64 v574; // rax
  void **v575; // rbp
  __m128i v576; // xmm2
  int v578; // [rsp+0h] [rbp-A58h]
  int v579; // [rsp+0h] [rbp-A58h]
  int v580; // [rsp+0h] [rbp-A58h]
  const __m128i *v581; // [rsp+0h] [rbp-A58h]
  int v582; // [rsp+0h] [rbp-A58h]
  int v583; // [rsp+0h] [rbp-A58h]
  int v584; // [rsp+0h] [rbp-A58h]
  int v585; // [rsp+0h] [rbp-A58h]
  int v586; // [rsp+0h] [rbp-A58h]
  int v587; // [rsp+0h] [rbp-A58h]
  int v588; // [rsp+0h] [rbp-A58h]
  _QWORD *v589; // [rsp+0h] [rbp-A58h]
  const __m128i *v590; // [rsp+0h] [rbp-A58h]
  int v591; // [rsp+0h] [rbp-A58h]
  int v592; // [rsp+0h] [rbp-A58h]
  int v593; // [rsp+0h] [rbp-A58h]
  int v594; // [rsp+0h] [rbp-A58h]
  int v595; // [rsp+0h] [rbp-A58h]
  int v596; // [rsp+0h] [rbp-A58h]
  int v597; // [rsp+0h] [rbp-A58h]
  int v598; // [rsp+0h] [rbp-A58h]
  int v599; // [rsp+0h] [rbp-A58h]
  int v600; // [rsp+0h] [rbp-A58h]
  int v601; // [rsp+0h] [rbp-A58h]
  int v602; // [rsp+0h] [rbp-A58h]
  int v603; // [rsp+0h] [rbp-A58h]
  int v604; // [rsp+0h] [rbp-A58h]
  int v605; // [rsp+0h] [rbp-A58h]
  int v606; // [rsp+0h] [rbp-A58h]
  int v607; // [rsp+0h] [rbp-A58h]
  int v608; // [rsp+0h] [rbp-A58h]
  int v609; // [rsp+0h] [rbp-A58h]
  int v610; // [rsp+0h] [rbp-A58h]
  int v611; // [rsp+0h] [rbp-A58h]
  int v612; // [rsp+0h] [rbp-A58h]
  int v613; // [rsp+0h] [rbp-A58h]
  int v614; // [rsp+0h] [rbp-A58h]
  int v615; // [rsp+0h] [rbp-A58h]
  int v616; // [rsp+0h] [rbp-A58h]
  int v617; // [rsp+0h] [rbp-A58h]
  int v618; // [rsp+0h] [rbp-A58h]
  int v619; // [rsp+0h] [rbp-A58h]
  int v620; // [rsp+0h] [rbp-A58h]
  int v621; // [rsp+0h] [rbp-A58h]
  int v622; // [rsp+0h] [rbp-A58h]
  int v623; // [rsp+0h] [rbp-A58h]
  int v624; // [rsp+0h] [rbp-A58h]
  int v625; // [rsp+0h] [rbp-A58h]
  _QWORD *v626; // [rsp+0h] [rbp-A58h]
  int v627; // [rsp+0h] [rbp-A58h]
  int v628; // [rsp+0h] [rbp-A58h]
  __int64 v629; // [rsp+0h] [rbp-A58h]
  int v630; // [rsp+0h] [rbp-A58h]
  int v631; // [rsp+0h] [rbp-A58h]
  int v632; // [rsp+0h] [rbp-A58h]
  int v633; // [rsp+0h] [rbp-A58h]
  int v634; // [rsp+0h] [rbp-A58h]
  int v635; // [rsp+0h] [rbp-A58h]
  int v636; // [rsp+0h] [rbp-A58h]
  int v637; // [rsp+0h] [rbp-A58h]
  int v638; // [rsp+0h] [rbp-A58h]
  int v639; // [rsp+0h] [rbp-A58h]
  int v640; // [rsp+0h] [rbp-A58h]
  int v641; // [rsp+0h] [rbp-A58h]
  int v642; // [rsp+0h] [rbp-A58h]
  int v643; // [rsp+0h] [rbp-A58h]
  int v644; // [rsp+0h] [rbp-A58h]
  int v645; // [rsp+0h] [rbp-A58h]
  int v646; // [rsp+0h] [rbp-A58h]
  int v647; // [rsp+0h] [rbp-A58h]
  int v648; // [rsp+0h] [rbp-A58h]
  int v649; // [rsp+0h] [rbp-A58h]
  _QWORD *v650; // [rsp+0h] [rbp-A58h]
  __int64 v651; // [rsp+0h] [rbp-A58h]
  int v652; // [rsp+0h] [rbp-A58h]
  int v653; // [rsp+0h] [rbp-A58h]
  int v654; // [rsp+0h] [rbp-A58h]
  int v655; // [rsp+0h] [rbp-A58h]
  int v656; // [rsp+0h] [rbp-A58h]
  int v657; // [rsp+0h] [rbp-A58h]
  int v658; // [rsp+0h] [rbp-A58h]
  int v659; // [rsp+0h] [rbp-A58h]
  int v660; // [rsp+0h] [rbp-A58h]
  int v661; // [rsp+0h] [rbp-A58h]
  int v662; // [rsp+0h] [rbp-A58h]
  int v663; // [rsp+0h] [rbp-A58h]
  int v664; // [rsp+0h] [rbp-A58h]
  int v665; // [rsp+0h] [rbp-A58h]
  int v666; // [rsp+0h] [rbp-A58h]
  int v667; // [rsp+0h] [rbp-A58h]
  _QWORD *v668; // [rsp+0h] [rbp-A58h]
  __int64 v669; // [rsp+0h] [rbp-A58h]
  int v670; // [rsp+0h] [rbp-A58h]
  int v671; // [rsp+0h] [rbp-A58h]
  int v672; // [rsp+0h] [rbp-A58h]
  int v673; // [rsp+0h] [rbp-A58h]
  int v674; // [rsp+0h] [rbp-A58h]
  int v675; // [rsp+0h] [rbp-A58h]
  int v676; // [rsp+0h] [rbp-A58h]
  int v677; // [rsp+0h] [rbp-A58h]
  int v678; // [rsp+0h] [rbp-A58h]
  int v679; // [rsp+0h] [rbp-A58h]
  int v680; // [rsp+0h] [rbp-A58h]
  int v681; // [rsp+0h] [rbp-A58h]
  int v682; // [rsp+0h] [rbp-A58h]
  int v683; // [rsp+0h] [rbp-A58h]
  int v684; // [rsp+0h] [rbp-A58h]
  int v685; // [rsp+0h] [rbp-A58h]
  _QWORD *v686; // [rsp+0h] [rbp-A58h]
  __int64 v687; // [rsp+0h] [rbp-A58h]
  int v688; // [rsp+0h] [rbp-A58h]
  int v689; // [rsp+0h] [rbp-A58h]
  int v690; // [rsp+0h] [rbp-A58h]
  int v691; // [rsp+0h] [rbp-A58h]
  int v692; // [rsp+0h] [rbp-A58h]
  int v693; // [rsp+0h] [rbp-A58h]
  int v694; // [rsp+0h] [rbp-A58h]
  int v695; // [rsp+0h] [rbp-A58h]
  int v696; // [rsp+0h] [rbp-A58h]
  int v697; // [rsp+0h] [rbp-A58h]
  int v698; // [rsp+0h] [rbp-A58h]
  int v699; // [rsp+0h] [rbp-A58h]
  int v700; // [rsp+0h] [rbp-A58h]
  int v701; // [rsp+0h] [rbp-A58h]
  int v702; // [rsp+0h] [rbp-A58h]
  int v703; // [rsp+0h] [rbp-A58h]
  _QWORD *v704; // [rsp+0h] [rbp-A58h]
  __int64 v705; // [rsp+0h] [rbp-A58h]
  int v706; // [rsp+0h] [rbp-A58h]
  int v707; // [rsp+0h] [rbp-A58h]
  int v708; // [rsp+0h] [rbp-A58h]
  int v709; // [rsp+0h] [rbp-A58h]
  int v710; // [rsp+0h] [rbp-A58h]
  int v711; // [rsp+0h] [rbp-A58h]
  int v712; // [rsp+0h] [rbp-A58h]
  int v713; // [rsp+0h] [rbp-A58h]
  int v714; // [rsp+0h] [rbp-A58h]
  int v715; // [rsp+0h] [rbp-A58h]
  int v716; // [rsp+0h] [rbp-A58h]
  int v717; // [rsp+0h] [rbp-A58h]
  int v718; // [rsp+8h] [rbp-A50h]
  int v719; // [rsp+8h] [rbp-A50h]
  int v720; // [rsp+8h] [rbp-A50h]
  int v721; // [rsp+8h] [rbp-A50h]
  int v722; // [rsp+8h] [rbp-A50h]
  const __m128i *v723; // [rsp+8h] [rbp-A50h]
  int v724; // [rsp+8h] [rbp-A50h]
  int v725; // [rsp+8h] [rbp-A50h]
  __int64 v726; // [rsp+8h] [rbp-A50h]
  int v727; // [rsp+8h] [rbp-A50h]
  int v728; // [rsp+8h] [rbp-A50h]
  int v729; // [rsp+8h] [rbp-A50h]
  __int64 v730; // [rsp+8h] [rbp-A50h]
  _QWORD *v731; // [rsp+8h] [rbp-A50h]
  __int64 v732; // [rsp+8h] [rbp-A50h]
  __int64 v733; // [rsp+8h] [rbp-A50h]
  __int64 v734; // [rsp+8h] [rbp-A50h]
  __int64 v735; // [rsp+8h] [rbp-A50h]
  __int64 v736; // [rsp+8h] [rbp-A50h]
  int v737; // [rsp+8h] [rbp-A50h]
  __int64 v738; // [rsp+8h] [rbp-A50h]
  __int64 v739; // [rsp+8h] [rbp-A50h]
  int v740; // [rsp+8h] [rbp-A50h]
  __int64 v741; // [rsp+8h] [rbp-A50h]
  int v742; // [rsp+8h] [rbp-A50h]
  __int64 v743; // [rsp+8h] [rbp-A50h]
  int v744; // [rsp+8h] [rbp-A50h]
  __int64 v745; // [rsp+8h] [rbp-A50h]
  __int64 v746; // [rsp+8h] [rbp-A50h]
  __int64 v747; // [rsp+8h] [rbp-A50h]
  __int64 v748; // [rsp+8h] [rbp-A50h]
  int v749; // [rsp+8h] [rbp-A50h]
  __int64 v750; // [rsp+8h] [rbp-A50h]
  __int64 v751; // [rsp+8h] [rbp-A50h]
  __int64 v752; // [rsp+8h] [rbp-A50h]
  int v753; // [rsp+8h] [rbp-A50h]
  __int64 v754; // [rsp+8h] [rbp-A50h]
  int v755; // [rsp+8h] [rbp-A50h]
  __int64 v756; // [rsp+8h] [rbp-A50h]
  __int64 v757; // [rsp+8h] [rbp-A50h]
  __int64 v758; // [rsp+8h] [rbp-A50h]
  int v759; // [rsp+8h] [rbp-A50h]
  __int64 v760; // [rsp+8h] [rbp-A50h]
  int v761; // [rsp+8h] [rbp-A50h]
  __int64 v762; // [rsp+8h] [rbp-A50h]
  __int64 v763; // [rsp+8h] [rbp-A50h]
  __int64 v764; // [rsp+8h] [rbp-A50h]
  int v765; // [rsp+8h] [rbp-A50h]
  __int64 v766; // [rsp+8h] [rbp-A50h]
  int v767; // [rsp+8h] [rbp-A50h]
  __int64 v768; // [rsp+8h] [rbp-A50h]
  __int64 v769; // [rsp+8h] [rbp-A50h]
  __int64 v770; // [rsp+8h] [rbp-A50h]
  int v771; // [rsp+8h] [rbp-A50h]
  _QWORD *v772; // [rsp+8h] [rbp-A50h]
  int v773; // [rsp+8h] [rbp-A50h]
  __int64 v774; // [rsp+8h] [rbp-A50h]
  __int64 v775; // [rsp+8h] [rbp-A50h]
  __int64 v776; // [rsp+8h] [rbp-A50h]
  __int64 v777; // [rsp+8h] [rbp-A50h]
  __int64 v778; // [rsp+8h] [rbp-A50h]
  int v779; // [rsp+8h] [rbp-A50h]
  int v780; // [rsp+8h] [rbp-A50h]
  int v781; // [rsp+8h] [rbp-A50h]
  int v782; // [rsp+8h] [rbp-A50h]
  int v783; // [rsp+8h] [rbp-A50h]
  __int64 v784; // [rsp+8h] [rbp-A50h]
  __int64 v785; // [rsp+8h] [rbp-A50h]
  int v786; // [rsp+8h] [rbp-A50h]
  __int64 v787; // [rsp+8h] [rbp-A50h]
  int v788; // [rsp+8h] [rbp-A50h]
  __int64 v789; // [rsp+8h] [rbp-A50h]
  int v790; // [rsp+8h] [rbp-A50h]
  __int64 v791; // [rsp+8h] [rbp-A50h]
  __int64 v792; // [rsp+8h] [rbp-A50h]
  __int64 v793; // [rsp+8h] [rbp-A50h]
  __int64 v794; // [rsp+8h] [rbp-A50h]
  _QWORD *v795; // [rsp+8h] [rbp-A50h]
  __int64 v796; // [rsp+8h] [rbp-A50h]
  __int64 v797; // [rsp+8h] [rbp-A50h]
  __int64 v798; // [rsp+8h] [rbp-A50h]
  __int64 v799; // [rsp+8h] [rbp-A50h]
  __int64 v800; // [rsp+8h] [rbp-A50h]
  int v801; // [rsp+8h] [rbp-A50h]
  __int64 v802; // [rsp+8h] [rbp-A50h]
  __int64 v803; // [rsp+8h] [rbp-A50h]
  int v804; // [rsp+8h] [rbp-A50h]
  __int64 v805; // [rsp+8h] [rbp-A50h]
  int v806; // [rsp+8h] [rbp-A50h]
  __int64 v807; // [rsp+8h] [rbp-A50h]
  int v808; // [rsp+8h] [rbp-A50h]
  __int64 v809; // [rsp+8h] [rbp-A50h]
  __int64 v810; // [rsp+8h] [rbp-A50h]
  __int64 v811; // [rsp+8h] [rbp-A50h]
  __int64 v812; // [rsp+8h] [rbp-A50h]
  _QWORD *v813; // [rsp+8h] [rbp-A50h]
  __int64 v814; // [rsp+8h] [rbp-A50h]
  __int64 v815; // [rsp+8h] [rbp-A50h]
  __int64 v816; // [rsp+8h] [rbp-A50h]
  __int64 v817; // [rsp+8h] [rbp-A50h]
  __int64 v818; // [rsp+8h] [rbp-A50h]
  int v819; // [rsp+8h] [rbp-A50h]
  __int64 v820; // [rsp+8h] [rbp-A50h]
  __int64 v821; // [rsp+8h] [rbp-A50h]
  int v822; // [rsp+8h] [rbp-A50h]
  __int64 v823; // [rsp+8h] [rbp-A50h]
  int v824; // [rsp+8h] [rbp-A50h]
  __int64 v825; // [rsp+8h] [rbp-A50h]
  int v826; // [rsp+8h] [rbp-A50h]
  __int64 v827; // [rsp+8h] [rbp-A50h]
  __int64 v828; // [rsp+8h] [rbp-A50h]
  __int64 v829; // [rsp+8h] [rbp-A50h]
  __int64 v830; // [rsp+8h] [rbp-A50h]
  _QWORD *v831; // [rsp+8h] [rbp-A50h]
  __int64 v832; // [rsp+8h] [rbp-A50h]
  __int64 v833; // [rsp+8h] [rbp-A50h]
  __int64 v834; // [rsp+8h] [rbp-A50h]
  __int64 v835; // [rsp+8h] [rbp-A50h]
  __int64 v836; // [rsp+8h] [rbp-A50h]
  int v837; // [rsp+8h] [rbp-A50h]
  __int64 v838; // [rsp+8h] [rbp-A50h]
  __int64 v839; // [rsp+8h] [rbp-A50h]
  int v840; // [rsp+8h] [rbp-A50h]
  __int64 v841; // [rsp+8h] [rbp-A50h]
  int v842; // [rsp+8h] [rbp-A50h]
  __int64 v843; // [rsp+8h] [rbp-A50h]
  int v844; // [rsp+8h] [rbp-A50h]
  __int64 v845; // [rsp+8h] [rbp-A50h]
  __int64 v846; // [rsp+8h] [rbp-A50h]
  __int64 v847; // [rsp+8h] [rbp-A50h]
  __int64 v848; // [rsp+8h] [rbp-A50h]
  _QWORD *v849; // [rsp+8h] [rbp-A50h]
  __int64 v850; // [rsp+8h] [rbp-A50h]
  __int64 v851; // [rsp+8h] [rbp-A50h]
  __int64 v852; // [rsp+8h] [rbp-A50h]
  __int64 v853; // [rsp+8h] [rbp-A50h]
  __int64 v854; // [rsp+8h] [rbp-A50h]
  int v855; // [rsp+8h] [rbp-A50h]
  __int64 v856; // [rsp+8h] [rbp-A50h]
  __int64 v857; // [rsp+8h] [rbp-A50h]
  __int64 v858; // [rsp+10h] [rbp-A48h]
  __int64 v859; // [rsp+10h] [rbp-A48h]
  __int64 v860; // [rsp+10h] [rbp-A48h]
  __int64 v861; // [rsp+10h] [rbp-A48h]
  __int64 v862; // [rsp+10h] [rbp-A48h]
  int v863; // [rsp+10h] [rbp-A48h]
  __int64 v864; // [rsp+10h] [rbp-A48h]
  __int64 v865; // [rsp+10h] [rbp-A48h]
  int v866; // [rsp+10h] [rbp-A48h]
  _QWORD *v867; // [rsp+10h] [rbp-A48h]
  const __m128i *v868; // [rsp+10h] [rbp-A48h]
  __int64 v869; // [rsp+10h] [rbp-A48h]
  int v870; // [rsp+10h] [rbp-A48h]
  __int64 v871; // [rsp+10h] [rbp-A48h]
  int v872; // [rsp+10h] [rbp-A48h]
  int v873; // [rsp+10h] [rbp-A48h]
  int v874; // [rsp+10h] [rbp-A48h]
  int v875; // [rsp+10h] [rbp-A48h]
  int v876; // [rsp+10h] [rbp-A48h]
  __int64 v877; // [rsp+10h] [rbp-A48h]
  int v878; // [rsp+10h] [rbp-A48h]
  int v879; // [rsp+10h] [rbp-A48h]
  __int64 v880; // [rsp+10h] [rbp-A48h]
  int v881; // [rsp+10h] [rbp-A48h]
  __int64 v882; // [rsp+10h] [rbp-A48h]
  int v883; // [rsp+10h] [rbp-A48h]
  __int64 v884; // [rsp+10h] [rbp-A48h]
  int v885; // [rsp+10h] [rbp-A48h]
  int v886; // [rsp+10h] [rbp-A48h]
  int v887; // [rsp+10h] [rbp-A48h]
  int v888; // [rsp+10h] [rbp-A48h]
  __int64 v889; // [rsp+10h] [rbp-A48h]
  int v890; // [rsp+10h] [rbp-A48h]
  int v891; // [rsp+10h] [rbp-A48h]
  int v892; // [rsp+10h] [rbp-A48h]
  __int64 v893; // [rsp+10h] [rbp-A48h]
  int v894; // [rsp+10h] [rbp-A48h]
  __int64 v895; // [rsp+10h] [rbp-A48h]
  int v896; // [rsp+10h] [rbp-A48h]
  int v897; // [rsp+10h] [rbp-A48h]
  int v898; // [rsp+10h] [rbp-A48h]
  __int64 v899; // [rsp+10h] [rbp-A48h]
  int v900; // [rsp+10h] [rbp-A48h]
  __int64 v901; // [rsp+10h] [rbp-A48h]
  int v902; // [rsp+10h] [rbp-A48h]
  int v903; // [rsp+10h] [rbp-A48h]
  int v904; // [rsp+10h] [rbp-A48h]
  __int64 v905; // [rsp+10h] [rbp-A48h]
  _QWORD *v906; // [rsp+10h] [rbp-A48h]
  __int64 v907; // [rsp+10h] [rbp-A48h]
  int v908; // [rsp+10h] [rbp-A48h]
  int v909; // [rsp+10h] [rbp-A48h]
  int v910; // [rsp+10h] [rbp-A48h]
  __int64 v911; // [rsp+10h] [rbp-A48h]
  int v912; // [rsp+10h] [rbp-A48h]
  __int64 v913; // [rsp+10h] [rbp-A48h]
  int v914; // [rsp+10h] [rbp-A48h]
  int v915; // [rsp+10h] [rbp-A48h]
  int v916; // [rsp+10h] [rbp-A48h]
  int v917; // [rsp+10h] [rbp-A48h]
  int v918; // [rsp+10h] [rbp-A48h]
  __int64 v919; // [rsp+10h] [rbp-A48h]
  __int64 v920; // [rsp+10h] [rbp-A48h]
  __int64 v921; // [rsp+10h] [rbp-A48h]
  __int64 v922; // [rsp+10h] [rbp-A48h]
  __int64 v923; // [rsp+10h] [rbp-A48h]
  int v924; // [rsp+10h] [rbp-A48h]
  int v925; // [rsp+10h] [rbp-A48h]
  _QWORD *v926; // [rsp+10h] [rbp-A48h]
  __int64 v927; // [rsp+10h] [rbp-A48h]
  __int64 v928; // [rsp+10h] [rbp-A48h]
  int v929; // [rsp+10h] [rbp-A48h]
  __int64 v930; // [rsp+10h] [rbp-A48h]
  int v931; // [rsp+10h] [rbp-A48h]
  int v932; // [rsp+10h] [rbp-A48h]
  int v933; // [rsp+10h] [rbp-A48h]
  int v934; // [rsp+10h] [rbp-A48h]
  __int64 v935; // [rsp+10h] [rbp-A48h]
  int v936; // [rsp+10h] [rbp-A48h]
  int v937; // [rsp+10h] [rbp-A48h]
  int v938; // [rsp+10h] [rbp-A48h]
  int v939; // [rsp+10h] [rbp-A48h]
  int v940; // [rsp+10h] [rbp-A48h]
  __int64 v941; // [rsp+10h] [rbp-A48h]
  int v942; // [rsp+10h] [rbp-A48h]
  int v943; // [rsp+10h] [rbp-A48h]
  _QWORD *v944; // [rsp+10h] [rbp-A48h]
  __int64 v945; // [rsp+10h] [rbp-A48h]
  __int64 v946; // [rsp+10h] [rbp-A48h]
  int v947; // [rsp+10h] [rbp-A48h]
  __int64 v948; // [rsp+10h] [rbp-A48h]
  int v949; // [rsp+10h] [rbp-A48h]
  int v950; // [rsp+10h] [rbp-A48h]
  int v951; // [rsp+10h] [rbp-A48h]
  int v952; // [rsp+10h] [rbp-A48h]
  __int64 v953; // [rsp+10h] [rbp-A48h]
  int v954; // [rsp+10h] [rbp-A48h]
  int v955; // [rsp+10h] [rbp-A48h]
  int v956; // [rsp+10h] [rbp-A48h]
  int v957; // [rsp+10h] [rbp-A48h]
  int v958; // [rsp+10h] [rbp-A48h]
  __int64 v959; // [rsp+10h] [rbp-A48h]
  int v960; // [rsp+10h] [rbp-A48h]
  int v961; // [rsp+10h] [rbp-A48h]
  _QWORD *v962; // [rsp+10h] [rbp-A48h]
  __int64 v963; // [rsp+10h] [rbp-A48h]
  __int64 v964; // [rsp+10h] [rbp-A48h]
  int v965; // [rsp+10h] [rbp-A48h]
  __int64 v966; // [rsp+10h] [rbp-A48h]
  int v967; // [rsp+10h] [rbp-A48h]
  int v968; // [rsp+10h] [rbp-A48h]
  int v969; // [rsp+10h] [rbp-A48h]
  int v970; // [rsp+10h] [rbp-A48h]
  __int64 v971; // [rsp+10h] [rbp-A48h]
  int v972; // [rsp+10h] [rbp-A48h]
  int v973; // [rsp+10h] [rbp-A48h]
  int v974; // [rsp+10h] [rbp-A48h]
  int v975; // [rsp+10h] [rbp-A48h]
  int v976; // [rsp+10h] [rbp-A48h]
  __int64 v977; // [rsp+10h] [rbp-A48h]
  int v978; // [rsp+10h] [rbp-A48h]
  int v979; // [rsp+10h] [rbp-A48h]
  _QWORD *v980; // [rsp+10h] [rbp-A48h]
  __int64 v981; // [rsp+10h] [rbp-A48h]
  __int64 v982; // [rsp+10h] [rbp-A48h]
  int v983; // [rsp+10h] [rbp-A48h]
  __int64 v984; // [rsp+10h] [rbp-A48h]
  int v985; // [rsp+10h] [rbp-A48h]
  int v986; // [rsp+10h] [rbp-A48h]
  int v987; // [rsp+10h] [rbp-A48h]
  int v988; // [rsp+10h] [rbp-A48h]
  __int64 v989; // [rsp+10h] [rbp-A48h]
  int v990; // [rsp+10h] [rbp-A48h]
  int v991; // [rsp+10h] [rbp-A48h]
  int v992; // [rsp+10h] [rbp-A48h]
  int v993; // [rsp+10h] [rbp-A48h]
  int v994; // [rsp+10h] [rbp-A48h]
  __int64 v995; // [rsp+10h] [rbp-A48h]
  int v996; // [rsp+10h] [rbp-A48h]
  int v997; // [rsp+10h] [rbp-A48h]
  int v998; // [rsp+18h] [rbp-A40h]
  int v999; // [rsp+18h] [rbp-A40h]
  int v1000; // [rsp+18h] [rbp-A40h]
  int v1001; // [rsp+18h] [rbp-A40h]
  int v1002; // [rsp+18h] [rbp-A40h]
  int v1003; // [rsp+18h] [rbp-A40h]
  int v1004; // [rsp+18h] [rbp-A40h]
  int v1005; // [rsp+18h] [rbp-A40h]
  int v1006; // [rsp+18h] [rbp-A40h]
  int v1007; // [rsp+18h] [rbp-A40h]
  int v1008; // [rsp+18h] [rbp-A40h]
  int v1009; // [rsp+18h] [rbp-A40h]
  int v1010; // [rsp+18h] [rbp-A40h]
  int v1011; // [rsp+18h] [rbp-A40h]
  int v1012; // [rsp+18h] [rbp-A40h]
  int v1013; // [rsp+18h] [rbp-A40h]
  int v1014; // [rsp+18h] [rbp-A40h]
  int v1015; // [rsp+18h] [rbp-A40h]
  int v1016; // [rsp+18h] [rbp-A40h]
  int v1017; // [rsp+18h] [rbp-A40h]
  int v1018; // [rsp+18h] [rbp-A40h]
  int v1019; // [rsp+18h] [rbp-A40h]
  int v1020; // [rsp+18h] [rbp-A40h]
  int v1021; // [rsp+18h] [rbp-A40h]
  int v1022; // [rsp+18h] [rbp-A40h]
  int v1023; // [rsp+18h] [rbp-A40h]
  int v1024; // [rsp+18h] [rbp-A40h]
  int v1025; // [rsp+18h] [rbp-A40h]
  int v1026; // [rsp+18h] [rbp-A40h]
  int v1027; // [rsp+18h] [rbp-A40h]
  int v1028; // [rsp+18h] [rbp-A40h]
  int v1029; // [rsp+18h] [rbp-A40h]
  int v1030; // [rsp+18h] [rbp-A40h]
  int v1031; // [rsp+18h] [rbp-A40h]
  int v1032; // [rsp+18h] [rbp-A40h]
  int v1033; // [rsp+18h] [rbp-A40h]
  int v1034; // [rsp+18h] [rbp-A40h]
  int v1035; // [rsp+18h] [rbp-A40h]
  int v1036; // [rsp+18h] [rbp-A40h]
  int v1037; // [rsp+18h] [rbp-A40h]
  int v1038; // [rsp+18h] [rbp-A40h]
  int v1039; // [rsp+18h] [rbp-A40h]
  int v1040; // [rsp+18h] [rbp-A40h]
  int v1041; // [rsp+18h] [rbp-A40h]
  int v1042; // [rsp+18h] [rbp-A40h]
  int v1043; // [rsp+18h] [rbp-A40h]
  int v1044; // [rsp+18h] [rbp-A40h]
  int v1045; // [rsp+18h] [rbp-A40h]
  int v1046; // [rsp+18h] [rbp-A40h]
  int v1047; // [rsp+18h] [rbp-A40h]
  int v1048; // [rsp+18h] [rbp-A40h]
  int v1049; // [rsp+18h] [rbp-A40h]
  int v1050; // [rsp+18h] [rbp-A40h]
  int v1051; // [rsp+18h] [rbp-A40h]
  int v1052; // [rsp+18h] [rbp-A40h]
  int v1053; // [rsp+18h] [rbp-A40h]
  int v1054; // [rsp+18h] [rbp-A40h]
  int v1055; // [rsp+18h] [rbp-A40h]
  int v1056; // [rsp+18h] [rbp-A40h]
  int v1057; // [rsp+18h] [rbp-A40h]
  int v1058; // [rsp+18h] [rbp-A40h]
  int v1059; // [rsp+18h] [rbp-A40h]
  int v1060; // [rsp+18h] [rbp-A40h]
  int v1061; // [rsp+18h] [rbp-A40h]
  int v1062; // [rsp+18h] [rbp-A40h]
  int v1063; // [rsp+18h] [rbp-A40h]
  int v1064; // [rsp+18h] [rbp-A40h]
  int v1065; // [rsp+18h] [rbp-A40h]
  int v1066; // [rsp+18h] [rbp-A40h]
  int v1067; // [rsp+18h] [rbp-A40h]
  int v1068; // [rsp+18h] [rbp-A40h]
  int v1069; // [rsp+18h] [rbp-A40h]
  int v1070; // [rsp+18h] [rbp-A40h]
  int v1071; // [rsp+18h] [rbp-A40h]
  int v1072; // [rsp+18h] [rbp-A40h]
  int v1073; // [rsp+18h] [rbp-A40h]
  int v1074; // [rsp+18h] [rbp-A40h]
  int v1075; // [rsp+18h] [rbp-A40h]
  int v1076; // [rsp+18h] [rbp-A40h]
  int v1077; // [rsp+18h] [rbp-A40h]
  int v1078; // [rsp+18h] [rbp-A40h]
  int v1079; // [rsp+18h] [rbp-A40h]
  int v1080; // [rsp+18h] [rbp-A40h]
  int v1081; // [rsp+18h] [rbp-A40h]
  int v1082; // [rsp+18h] [rbp-A40h]
  int v1083; // [rsp+18h] [rbp-A40h]
  int v1084; // [rsp+18h] [rbp-A40h]
  int v1085; // [rsp+18h] [rbp-A40h]
  int v1086; // [rsp+18h] [rbp-A40h]
  int v1087; // [rsp+18h] [rbp-A40h]
  int v1088; // [rsp+20h] [rbp-A38h]
  __m128i *v1089; // [rsp+20h] [rbp-A38h]
  int v1090; // [rsp+20h] [rbp-A38h]
  int v1091; // [rsp+20h] [rbp-A38h]
  int v1092; // [rsp+20h] [rbp-A38h]
  int v1093; // [rsp+20h] [rbp-A38h]
  int v1094; // [rsp+20h] [rbp-A38h]
  int v1095; // [rsp+20h] [rbp-A38h]
  int v1096; // [rsp+20h] [rbp-A38h]
  int v1097; // [rsp+20h] [rbp-A38h]
  int v1098; // [rsp+20h] [rbp-A38h]
  int v1099; // [rsp+20h] [rbp-A38h]
  int v1100; // [rsp+20h] [rbp-A38h]
  int v1101; // [rsp+20h] [rbp-A38h]
  int v1102; // [rsp+20h] [rbp-A38h]
  int v1103; // [rsp+20h] [rbp-A38h]
  int v1104; // [rsp+20h] [rbp-A38h]
  int v1105; // [rsp+20h] [rbp-A38h]
  int v1106; // [rsp+20h] [rbp-A38h]
  int v1107; // [rsp+20h] [rbp-A38h]
  int v1108; // [rsp+20h] [rbp-A38h]
  int v1109; // [rsp+20h] [rbp-A38h]
  int v1110; // [rsp+20h] [rbp-A38h]
  int v1111; // [rsp+20h] [rbp-A38h]
  int v1112; // [rsp+20h] [rbp-A38h]
  int v1113; // [rsp+20h] [rbp-A38h]
  int v1114; // [rsp+20h] [rbp-A38h]
  _QWORD *v1115; // [rsp+20h] [rbp-A38h]
  int v1116; // [rsp+20h] [rbp-A38h]
  int v1117; // [rsp+20h] [rbp-A38h]
  int v1118; // [rsp+20h] [rbp-A38h]
  int v1119; // [rsp+20h] [rbp-A38h]
  int v1120; // [rsp+20h] [rbp-A38h]
  int v1121; // [rsp+20h] [rbp-A38h]
  int v1122; // [rsp+20h] [rbp-A38h]
  int v1123; // [rsp+20h] [rbp-A38h]
  int v1124; // [rsp+20h] [rbp-A38h]
  int v1125; // [rsp+20h] [rbp-A38h]
  int v1126; // [rsp+20h] [rbp-A38h]
  _QWORD *v1127; // [rsp+20h] [rbp-A38h]
  int v1128; // [rsp+20h] [rbp-A38h]
  int v1129; // [rsp+20h] [rbp-A38h]
  int v1130; // [rsp+20h] [rbp-A38h]
  int v1131; // [rsp+20h] [rbp-A38h]
  int v1132; // [rsp+20h] [rbp-A38h]
  int v1133; // [rsp+20h] [rbp-A38h]
  int v1134; // [rsp+20h] [rbp-A38h]
  int v1135; // [rsp+20h] [rbp-A38h]
  int v1136; // [rsp+20h] [rbp-A38h]
  int v1137; // [rsp+20h] [rbp-A38h]
  int v1138; // [rsp+20h] [rbp-A38h]
  int v1139; // [rsp+20h] [rbp-A38h]
  _QWORD *v1140; // [rsp+20h] [rbp-A38h]
  int v1141; // [rsp+20h] [rbp-A38h]
  int v1142; // [rsp+20h] [rbp-A38h]
  int v1143; // [rsp+20h] [rbp-A38h]
  int v1144; // [rsp+20h] [rbp-A38h]
  int v1145; // [rsp+20h] [rbp-A38h]
  int v1146; // [rsp+20h] [rbp-A38h]
  int v1147; // [rsp+20h] [rbp-A38h]
  int v1148; // [rsp+20h] [rbp-A38h]
  int v1149; // [rsp+20h] [rbp-A38h]
  int v1150; // [rsp+20h] [rbp-A38h]
  int v1151; // [rsp+20h] [rbp-A38h]
  int v1152; // [rsp+20h] [rbp-A38h]
  _QWORD *v1153; // [rsp+20h] [rbp-A38h]
  int v1154; // [rsp+20h] [rbp-A38h]
  int v1155; // [rsp+20h] [rbp-A38h]
  int v1156; // [rsp+20h] [rbp-A38h]
  int v1157; // [rsp+20h] [rbp-A38h]
  int v1158; // [rsp+20h] [rbp-A38h]
  int v1159; // [rsp+20h] [rbp-A38h]
  int v1160; // [rsp+20h] [rbp-A38h]
  int v1161; // [rsp+20h] [rbp-A38h]
  int v1162; // [rsp+20h] [rbp-A38h]
  int v1163; // [rsp+20h] [rbp-A38h]
  int v1164; // [rsp+20h] [rbp-A38h]
  int v1165; // [rsp+20h] [rbp-A38h]
  _QWORD *v1166; // [rsp+20h] [rbp-A38h]
  int v1167; // [rsp+20h] [rbp-A38h]
  int v1168; // [rsp+20h] [rbp-A38h]
  int v1169; // [rsp+20h] [rbp-A38h]
  int v1170; // [rsp+20h] [rbp-A38h]
  int v1171; // [rsp+20h] [rbp-A38h]
  int v1172; // [rsp+20h] [rbp-A38h]
  int v1173; // [rsp+20h] [rbp-A38h]
  int v1174; // [rsp+20h] [rbp-A38h]
  int v1175; // [rsp+20h] [rbp-A38h]
  int v1176; // [rsp+20h] [rbp-A38h]
  int v1177; // [rsp+20h] [rbp-A38h]
  int v1178; // [rsp+28h] [rbp-A30h]
  int v1179; // [rsp+28h] [rbp-A30h]
  int v1180; // [rsp+28h] [rbp-A30h]
  int v1181; // [rsp+28h] [rbp-A30h]
  int v1182; // [rsp+28h] [rbp-A30h]
  int v1183; // [rsp+28h] [rbp-A30h]
  int v1184; // [rsp+28h] [rbp-A30h]
  int v1185; // [rsp+28h] [rbp-A30h]
  int v1186; // [rsp+28h] [rbp-A30h]
  int v1187; // [rsp+28h] [rbp-A30h]
  int v1188; // [rsp+28h] [rbp-A30h]
  int v1189; // [rsp+28h] [rbp-A30h]
  int v1190; // [rsp+28h] [rbp-A30h]
  int v1191; // [rsp+28h] [rbp-A30h]
  int v1192; // [rsp+28h] [rbp-A30h]
  int v1193; // [rsp+28h] [rbp-A30h]
  int v1194; // [rsp+28h] [rbp-A30h]
  int v1195; // [rsp+28h] [rbp-A30h]
  int v1196; // [rsp+28h] [rbp-A30h]
  int v1197; // [rsp+28h] [rbp-A30h]
  int v1198; // [rsp+28h] [rbp-A30h]
  int v1199; // [rsp+28h] [rbp-A30h]
  int v1200; // [rsp+28h] [rbp-A30h]
  int v1201; // [rsp+28h] [rbp-A30h]
  int v1202; // [rsp+28h] [rbp-A30h]
  int v1203; // [rsp+28h] [rbp-A30h]
  int v1204; // [rsp+28h] [rbp-A30h]
  int v1205; // [rsp+28h] [rbp-A30h]
  int v1206; // [rsp+28h] [rbp-A30h]
  int v1207; // [rsp+28h] [rbp-A30h]
  int v1208; // [rsp+28h] [rbp-A30h]
  int v1209; // [rsp+28h] [rbp-A30h]
  int v1210; // [rsp+28h] [rbp-A30h]
  int v1211; // [rsp+28h] [rbp-A30h]
  int v1212; // [rsp+28h] [rbp-A30h]
  int v1213; // [rsp+28h] [rbp-A30h]
  int v1214; // [rsp+28h] [rbp-A30h]
  int v1215; // [rsp+28h] [rbp-A30h]
  int v1216; // [rsp+28h] [rbp-A30h]
  int v1217; // [rsp+28h] [rbp-A30h]
  int v1218; // [rsp+28h] [rbp-A30h]
  int v1219; // [rsp+28h] [rbp-A30h]
  int v1220; // [rsp+28h] [rbp-A30h]
  int v1221; // [rsp+28h] [rbp-A30h]
  int v1222; // [rsp+28h] [rbp-A30h]
  int v1223; // [rsp+28h] [rbp-A30h]
  int v1224; // [rsp+28h] [rbp-A30h]
  int v1225; // [rsp+28h] [rbp-A30h]
  int v1226; // [rsp+28h] [rbp-A30h]
  int v1227; // [rsp+28h] [rbp-A30h]
  int v1228; // [rsp+28h] [rbp-A30h]
  int v1229; // [rsp+28h] [rbp-A30h]
  int v1230; // [rsp+28h] [rbp-A30h]
  int v1231; // [rsp+28h] [rbp-A30h]
  int v1232; // [rsp+28h] [rbp-A30h]
  int v1233; // [rsp+28h] [rbp-A30h]
  int v1234; // [rsp+28h] [rbp-A30h]
  int v1235; // [rsp+28h] [rbp-A30h]
  int v1236; // [rsp+28h] [rbp-A30h]
  int v1237; // [rsp+28h] [rbp-A30h]
  int v1238; // [rsp+28h] [rbp-A30h]
  int v1239; // [rsp+28h] [rbp-A30h]
  int v1240; // [rsp+28h] [rbp-A30h]
  int v1241; // [rsp+28h] [rbp-A30h]
  int v1242; // [rsp+28h] [rbp-A30h]
  int v1243; // [rsp+28h] [rbp-A30h]
  int v1244; // [rsp+28h] [rbp-A30h]
  int v1245; // [rsp+28h] [rbp-A30h]
  int v1246; // [rsp+28h] [rbp-A30h]
  int v1247; // [rsp+28h] [rbp-A30h]
  int v1248; // [rsp+28h] [rbp-A30h]
  int v1249; // [rsp+28h] [rbp-A30h]
  int v1250; // [rsp+28h] [rbp-A30h]
  int v1251; // [rsp+28h] [rbp-A30h]
  int v1252; // [rsp+28h] [rbp-A30h]
  int v1253; // [rsp+28h] [rbp-A30h]
  int v1254; // [rsp+28h] [rbp-A30h]
  int v1255; // [rsp+28h] [rbp-A30h]
  int v1256; // [rsp+28h] [rbp-A30h]
  int v1257; // [rsp+28h] [rbp-A30h]
  int v1258; // [rsp+28h] [rbp-A30h]
  int v1259; // [rsp+28h] [rbp-A30h]
  int v1260; // [rsp+28h] [rbp-A30h]
  int v1261; // [rsp+28h] [rbp-A30h]
  int v1262; // [rsp+28h] [rbp-A30h]
  int v1263; // [rsp+28h] [rbp-A30h]
  int v1264; // [rsp+28h] [rbp-A30h]
  int v1265; // [rsp+28h] [rbp-A30h]
  int v1266; // [rsp+28h] [rbp-A30h]
  int v1267; // [rsp+28h] [rbp-A30h]
  __int64 v1268; // [rsp+30h] [rbp-A28h]
  __m128i *v1269; // [rsp+30h] [rbp-A28h]
  __int64 v1270; // [rsp+30h] [rbp-A28h]
  __int64 v1271; // [rsp+30h] [rbp-A28h]
  __int64 v1272; // [rsp+30h] [rbp-A28h]
  __int64 v1273; // [rsp+30h] [rbp-A28h]
  __int64 v1274; // [rsp+30h] [rbp-A28h]
  __int64 v1275; // [rsp+30h] [rbp-A28h]
  __int64 v1276; // [rsp+30h] [rbp-A28h]
  __int64 v1277; // [rsp+30h] [rbp-A28h]
  __int64 v1278; // [rsp+30h] [rbp-A28h]
  __int64 v1279; // [rsp+30h] [rbp-A28h]
  __int64 v1280; // [rsp+30h] [rbp-A28h]
  __int64 v1281; // [rsp+30h] [rbp-A28h]
  __int64 v1282; // [rsp+30h] [rbp-A28h]
  __int64 v1283; // [rsp+30h] [rbp-A28h]
  __int64 v1284; // [rsp+30h] [rbp-A28h]
  __int64 v1285; // [rsp+30h] [rbp-A28h]
  __int64 v1286; // [rsp+30h] [rbp-A28h]
  __int64 v1287; // [rsp+30h] [rbp-A28h]
  __int64 v1288; // [rsp+30h] [rbp-A28h]
  __int64 v1289; // [rsp+30h] [rbp-A28h]
  __int64 v1290; // [rsp+30h] [rbp-A28h]
  __int64 v1291; // [rsp+30h] [rbp-A28h]
  __int64 v1292; // [rsp+30h] [rbp-A28h]
  __int64 v1293; // [rsp+30h] [rbp-A28h]
  __int64 v1294; // [rsp+30h] [rbp-A28h]
  __int64 v1295; // [rsp+30h] [rbp-A28h]
  __int64 v1296; // [rsp+30h] [rbp-A28h]
  __int64 v1297; // [rsp+30h] [rbp-A28h]
  _QWORD *v1298; // [rsp+30h] [rbp-A28h]
  __int64 v1299; // [rsp+30h] [rbp-A28h]
  __int64 v1300; // [rsp+30h] [rbp-A28h]
  __int64 v1301; // [rsp+30h] [rbp-A28h]
  __int64 v1302; // [rsp+30h] [rbp-A28h]
  __int64 v1303; // [rsp+30h] [rbp-A28h]
  __int64 v1304; // [rsp+30h] [rbp-A28h]
  __int64 v1305; // [rsp+30h] [rbp-A28h]
  __int64 v1306; // [rsp+30h] [rbp-A28h]
  _QWORD *v1307; // [rsp+30h] [rbp-A28h]
  __int64 v1308; // [rsp+30h] [rbp-A28h]
  __int64 v1309; // [rsp+30h] [rbp-A28h]
  __int64 v1310; // [rsp+30h] [rbp-A28h]
  __int64 v1311; // [rsp+30h] [rbp-A28h]
  __int64 v1312; // [rsp+30h] [rbp-A28h]
  __int64 v1313; // [rsp+30h] [rbp-A28h]
  __int64 v1314; // [rsp+30h] [rbp-A28h]
  __int64 v1315; // [rsp+30h] [rbp-A28h]
  __int64 v1316; // [rsp+30h] [rbp-A28h]
  __int64 v1317; // [rsp+30h] [rbp-A28h]
  __int64 v1318; // [rsp+30h] [rbp-A28h]
  __int64 v1319; // [rsp+30h] [rbp-A28h]
  _QWORD *v1320; // [rsp+30h] [rbp-A28h]
  __int64 v1321; // [rsp+30h] [rbp-A28h]
  __int64 v1322; // [rsp+30h] [rbp-A28h]
  __int64 v1323; // [rsp+30h] [rbp-A28h]
  __int64 v1324; // [rsp+30h] [rbp-A28h]
  __int64 v1325; // [rsp+30h] [rbp-A28h]
  __int64 v1326; // [rsp+30h] [rbp-A28h]
  __int64 v1327; // [rsp+30h] [rbp-A28h]
  __int64 v1328; // [rsp+30h] [rbp-A28h]
  __int64 v1329; // [rsp+30h] [rbp-A28h]
  __int64 v1330; // [rsp+30h] [rbp-A28h]
  __int64 v1331; // [rsp+30h] [rbp-A28h]
  __int64 v1332; // [rsp+30h] [rbp-A28h]
  _QWORD *v1333; // [rsp+30h] [rbp-A28h]
  __int64 v1334; // [rsp+30h] [rbp-A28h]
  __int64 v1335; // [rsp+30h] [rbp-A28h]
  __int64 v1336; // [rsp+30h] [rbp-A28h]
  __int64 v1337; // [rsp+30h] [rbp-A28h]
  __int64 v1338; // [rsp+30h] [rbp-A28h]
  __int64 v1339; // [rsp+30h] [rbp-A28h]
  __int64 v1340; // [rsp+30h] [rbp-A28h]
  __int64 v1341; // [rsp+30h] [rbp-A28h]
  __int64 v1342; // [rsp+30h] [rbp-A28h]
  __int64 v1343; // [rsp+30h] [rbp-A28h]
  __int64 v1344; // [rsp+30h] [rbp-A28h]
  __int64 v1345; // [rsp+30h] [rbp-A28h]
  _QWORD *v1346; // [rsp+30h] [rbp-A28h]
  __int64 v1347; // [rsp+30h] [rbp-A28h]
  __int64 v1348; // [rsp+30h] [rbp-A28h]
  __int64 v1349; // [rsp+30h] [rbp-A28h]
  __int64 v1350; // [rsp+30h] [rbp-A28h]
  __int64 v1351; // [rsp+30h] [rbp-A28h]
  __int64 v1352; // [rsp+30h] [rbp-A28h]
  __int64 v1353; // [rsp+30h] [rbp-A28h]
  __int64 v1354; // [rsp+30h] [rbp-A28h]
  __int64 v1355; // [rsp+30h] [rbp-A28h]
  __int64 v1356; // [rsp+30h] [rbp-A28h]
  __int64 v1357; // [rsp+30h] [rbp-A28h]
  int v1358; // [rsp+38h] [rbp-A20h]
  _QWORD *v1359; // [rsp+38h] [rbp-A20h]
  int v1360; // [rsp+38h] [rbp-A20h]
  int v1361; // [rsp+38h] [rbp-A20h]
  int v1362; // [rsp+38h] [rbp-A20h]
  int v1363; // [rsp+38h] [rbp-A20h]
  int v1364; // [rsp+38h] [rbp-A20h]
  int v1365; // [rsp+38h] [rbp-A20h]
  int v1366; // [rsp+38h] [rbp-A20h]
  int v1367; // [rsp+38h] [rbp-A20h]
  int v1368; // [rsp+38h] [rbp-A20h]
  int v1369; // [rsp+38h] [rbp-A20h]
  int v1370; // [rsp+38h] [rbp-A20h]
  int v1371; // [rsp+38h] [rbp-A20h]
  int v1372; // [rsp+38h] [rbp-A20h]
  int v1373; // [rsp+38h] [rbp-A20h]
  int v1374; // [rsp+38h] [rbp-A20h]
  int v1375; // [rsp+38h] [rbp-A20h]
  int v1376; // [rsp+38h] [rbp-A20h]
  int v1377; // [rsp+38h] [rbp-A20h]
  int v1378; // [rsp+38h] [rbp-A20h]
  int v1379; // [rsp+38h] [rbp-A20h]
  int v1380; // [rsp+38h] [rbp-A20h]
  int v1381; // [rsp+38h] [rbp-A20h]
  int v1382; // [rsp+38h] [rbp-A20h]
  int v1383; // [rsp+38h] [rbp-A20h]
  int v1384; // [rsp+38h] [rbp-A20h]
  int v1385; // [rsp+38h] [rbp-A20h]
  int v1386; // [rsp+38h] [rbp-A20h]
  int v1387; // [rsp+38h] [rbp-A20h]
  int v1388; // [rsp+38h] [rbp-A20h]
  _QWORD *v1389; // [rsp+38h] [rbp-A20h]
  int v1390; // [rsp+38h] [rbp-A20h]
  int v1391; // [rsp+38h] [rbp-A20h]
  int v1392; // [rsp+38h] [rbp-A20h]
  int v1393; // [rsp+38h] [rbp-A20h]
  int v1394; // [rsp+38h] [rbp-A20h]
  int v1395; // [rsp+38h] [rbp-A20h]
  int v1396; // [rsp+38h] [rbp-A20h]
  int v1397; // [rsp+38h] [rbp-A20h]
  int v1398; // [rsp+38h] [rbp-A20h]
  int v1399; // [rsp+38h] [rbp-A20h]
  int v1400; // [rsp+38h] [rbp-A20h]
  _QWORD *v1401; // [rsp+38h] [rbp-A20h]
  int v1402; // [rsp+38h] [rbp-A20h]
  int v1403; // [rsp+38h] [rbp-A20h]
  int v1404; // [rsp+38h] [rbp-A20h]
  int v1405; // [rsp+38h] [rbp-A20h]
  int v1406; // [rsp+38h] [rbp-A20h]
  int v1407; // [rsp+38h] [rbp-A20h]
  int v1408; // [rsp+38h] [rbp-A20h]
  int v1409; // [rsp+38h] [rbp-A20h]
  int v1410; // [rsp+38h] [rbp-A20h]
  int v1411; // [rsp+38h] [rbp-A20h]
  int v1412; // [rsp+38h] [rbp-A20h]
  int v1413; // [rsp+38h] [rbp-A20h]
  _QWORD *v1414; // [rsp+38h] [rbp-A20h]
  int v1415; // [rsp+38h] [rbp-A20h]
  int v1416; // [rsp+38h] [rbp-A20h]
  int v1417; // [rsp+38h] [rbp-A20h]
  int v1418; // [rsp+38h] [rbp-A20h]
  int v1419; // [rsp+38h] [rbp-A20h]
  int v1420; // [rsp+38h] [rbp-A20h]
  int v1421; // [rsp+38h] [rbp-A20h]
  int v1422; // [rsp+38h] [rbp-A20h]
  int v1423; // [rsp+38h] [rbp-A20h]
  int v1424; // [rsp+38h] [rbp-A20h]
  int v1425; // [rsp+38h] [rbp-A20h]
  int v1426; // [rsp+38h] [rbp-A20h]
  _QWORD *v1427; // [rsp+38h] [rbp-A20h]
  int v1428; // [rsp+38h] [rbp-A20h]
  int v1429; // [rsp+38h] [rbp-A20h]
  int v1430; // [rsp+38h] [rbp-A20h]
  int v1431; // [rsp+38h] [rbp-A20h]
  int v1432; // [rsp+38h] [rbp-A20h]
  int v1433; // [rsp+38h] [rbp-A20h]
  int v1434; // [rsp+38h] [rbp-A20h]
  int v1435; // [rsp+38h] [rbp-A20h]
  int v1436; // [rsp+38h] [rbp-A20h]
  int v1437; // [rsp+38h] [rbp-A20h]
  int v1438; // [rsp+38h] [rbp-A20h]
  int v1439; // [rsp+38h] [rbp-A20h]
  _QWORD *v1440; // [rsp+38h] [rbp-A20h]
  int v1441; // [rsp+38h] [rbp-A20h]
  int v1442; // [rsp+38h] [rbp-A20h]
  int v1443; // [rsp+38h] [rbp-A20h]
  int v1444; // [rsp+38h] [rbp-A20h]
  int v1445; // [rsp+38h] [rbp-A20h]
  int v1446; // [rsp+38h] [rbp-A20h]
  int v1447; // [rsp+38h] [rbp-A20h]
  int v1448; // [rsp+40h] [rbp-A18h]
  int v1449; // [rsp+40h] [rbp-A18h]
  int v1450; // [rsp+40h] [rbp-A18h]
  int v1451; // [rsp+40h] [rbp-A18h]
  int v1452; // [rsp+40h] [rbp-A18h]
  int v1453; // [rsp+40h] [rbp-A18h]
  int v1454; // [rsp+40h] [rbp-A18h]
  int v1455; // [rsp+40h] [rbp-A18h]
  int v1456; // [rsp+40h] [rbp-A18h]
  int v1457; // [rsp+40h] [rbp-A18h]
  int v1458; // [rsp+40h] [rbp-A18h]
  int v1459; // [rsp+40h] [rbp-A18h]
  int v1460; // [rsp+40h] [rbp-A18h]
  int v1461; // [rsp+40h] [rbp-A18h]
  int v1462; // [rsp+40h] [rbp-A18h]
  int v1463; // [rsp+40h] [rbp-A18h]
  int v1464; // [rsp+40h] [rbp-A18h]
  int v1465; // [rsp+40h] [rbp-A18h]
  int v1466; // [rsp+40h] [rbp-A18h]
  int v1467; // [rsp+40h] [rbp-A18h]
  int v1468; // [rsp+40h] [rbp-A18h]
  int v1469; // [rsp+40h] [rbp-A18h]
  int v1470; // [rsp+40h] [rbp-A18h]
  int v1471; // [rsp+40h] [rbp-A18h]
  int v1472; // [rsp+40h] [rbp-A18h]
  int v1473; // [rsp+40h] [rbp-A18h]
  int v1474; // [rsp+40h] [rbp-A18h]
  int v1475; // [rsp+40h] [rbp-A18h]
  int v1476; // [rsp+40h] [rbp-A18h]
  int v1477; // [rsp+40h] [rbp-A18h]
  int v1478; // [rsp+40h] [rbp-A18h]
  int v1479; // [rsp+40h] [rbp-A18h]
  int v1480; // [rsp+40h] [rbp-A18h]
  int v1481; // [rsp+40h] [rbp-A18h]
  int v1482; // [rsp+40h] [rbp-A18h]
  int v1483; // [rsp+40h] [rbp-A18h]
  int v1484; // [rsp+40h] [rbp-A18h]
  int v1485; // [rsp+40h] [rbp-A18h]
  int v1486; // [rsp+40h] [rbp-A18h]
  int v1487; // [rsp+40h] [rbp-A18h]
  int v1488; // [rsp+40h] [rbp-A18h]
  int v1489; // [rsp+40h] [rbp-A18h]
  int v1490; // [rsp+40h] [rbp-A18h]
  int v1491; // [rsp+40h] [rbp-A18h]
  int v1492; // [rsp+40h] [rbp-A18h]
  int v1493; // [rsp+40h] [rbp-A18h]
  int v1494; // [rsp+40h] [rbp-A18h]
  int v1495; // [rsp+40h] [rbp-A18h]
  int v1496; // [rsp+40h] [rbp-A18h]
  int v1497; // [rsp+40h] [rbp-A18h]
  int v1498; // [rsp+40h] [rbp-A18h]
  int v1499; // [rsp+40h] [rbp-A18h]
  int v1500; // [rsp+40h] [rbp-A18h]
  int v1501; // [rsp+40h] [rbp-A18h]
  int v1502; // [rsp+40h] [rbp-A18h]
  int v1503; // [rsp+40h] [rbp-A18h]
  int v1504; // [rsp+40h] [rbp-A18h]
  int v1505; // [rsp+40h] [rbp-A18h]
  int v1506; // [rsp+40h] [rbp-A18h]
  int v1507; // [rsp+40h] [rbp-A18h]
  int v1508; // [rsp+40h] [rbp-A18h]
  int v1509; // [rsp+40h] [rbp-A18h]
  int v1510; // [rsp+40h] [rbp-A18h]
  int v1511; // [rsp+40h] [rbp-A18h]
  int v1512; // [rsp+40h] [rbp-A18h]
  int v1513; // [rsp+40h] [rbp-A18h]
  int v1514; // [rsp+40h] [rbp-A18h]
  int v1515; // [rsp+40h] [rbp-A18h]
  int v1516; // [rsp+40h] [rbp-A18h]
  int v1517; // [rsp+40h] [rbp-A18h]
  int v1518; // [rsp+40h] [rbp-A18h]
  int v1519; // [rsp+40h] [rbp-A18h]
  int v1520; // [rsp+40h] [rbp-A18h]
  int v1521; // [rsp+40h] [rbp-A18h]
  int v1522; // [rsp+40h] [rbp-A18h]
  int v1523; // [rsp+40h] [rbp-A18h]
  int v1524; // [rsp+40h] [rbp-A18h]
  int v1525; // [rsp+40h] [rbp-A18h]
  int v1526; // [rsp+40h] [rbp-A18h]
  int v1527; // [rsp+40h] [rbp-A18h]
  int v1528; // [rsp+40h] [rbp-A18h]
  int v1529; // [rsp+40h] [rbp-A18h]
  int v1530; // [rsp+40h] [rbp-A18h]
  int v1531; // [rsp+40h] [rbp-A18h]
  int v1532; // [rsp+40h] [rbp-A18h]
  int v1533; // [rsp+40h] [rbp-A18h]
  int v1534; // [rsp+40h] [rbp-A18h]
  int v1535; // [rsp+40h] [rbp-A18h]
  int v1536; // [rsp+40h] [rbp-A18h]
  int v1537; // [rsp+40h] [rbp-A18h]
  int v1538; // [rsp+48h] [rbp-A10h]
  char *v1539; // [rsp+48h] [rbp-A10h]
  int v1540; // [rsp+48h] [rbp-A10h]
  int v1541; // [rsp+48h] [rbp-A10h]
  int v1542; // [rsp+48h] [rbp-A10h]
  int v1543; // [rsp+48h] [rbp-A10h]
  int v1544; // [rsp+48h] [rbp-A10h]
  __int64 v1545; // [rsp+48h] [rbp-A10h]
  int v1546; // [rsp+48h] [rbp-A10h]
  int v1547; // [rsp+48h] [rbp-A10h]
  int v1548; // [rsp+48h] [rbp-A10h]
  int v1549; // [rsp+48h] [rbp-A10h]
  int v1550; // [rsp+48h] [rbp-A10h]
  int v1551; // [rsp+48h] [rbp-A10h]
  int v1552; // [rsp+48h] [rbp-A10h]
  int v1553; // [rsp+48h] [rbp-A10h]
  int v1554; // [rsp+48h] [rbp-A10h]
  int v1555; // [rsp+48h] [rbp-A10h]
  int v1556; // [rsp+48h] [rbp-A10h]
  int v1557; // [rsp+48h] [rbp-A10h]
  int v1558; // [rsp+48h] [rbp-A10h]
  int v1559; // [rsp+48h] [rbp-A10h]
  int v1560; // [rsp+48h] [rbp-A10h]
  int v1561; // [rsp+48h] [rbp-A10h]
  int v1562; // [rsp+48h] [rbp-A10h]
  int v1563; // [rsp+48h] [rbp-A10h]
  int v1564; // [rsp+48h] [rbp-A10h]
  int v1565; // [rsp+48h] [rbp-A10h]
  int v1566; // [rsp+48h] [rbp-A10h]
  int v1567; // [rsp+48h] [rbp-A10h]
  int v1568; // [rsp+48h] [rbp-A10h]
  int v1569; // [rsp+48h] [rbp-A10h]
  int v1570; // [rsp+48h] [rbp-A10h]
  int v1571; // [rsp+48h] [rbp-A10h]
  int v1572; // [rsp+48h] [rbp-A10h]
  int v1573; // [rsp+48h] [rbp-A10h]
  _QWORD *v1574; // [rsp+48h] [rbp-A10h]
  int v1575; // [rsp+48h] [rbp-A10h]
  __int64 v1576; // [rsp+48h] [rbp-A10h]
  int v1577; // [rsp+48h] [rbp-A10h]
  int v1578; // [rsp+48h] [rbp-A10h]
  int v1579; // [rsp+48h] [rbp-A10h]
  int v1580; // [rsp+48h] [rbp-A10h]
  int v1581; // [rsp+48h] [rbp-A10h]
  int v1582; // [rsp+48h] [rbp-A10h]
  int v1583; // [rsp+48h] [rbp-A10h]
  int v1584; // [rsp+48h] [rbp-A10h]
  int v1585; // [rsp+48h] [rbp-A10h]
  int v1586; // [rsp+48h] [rbp-A10h]
  __int64 v1587; // [rsp+48h] [rbp-A10h]
  int v1588; // [rsp+48h] [rbp-A10h]
  int v1589; // [rsp+48h] [rbp-A10h]
  int v1590; // [rsp+48h] [rbp-A10h]
  int v1591; // [rsp+48h] [rbp-A10h]
  int v1592; // [rsp+48h] [rbp-A10h]
  int v1593; // [rsp+48h] [rbp-A10h]
  int v1594; // [rsp+48h] [rbp-A10h]
  int v1595; // [rsp+48h] [rbp-A10h]
  int v1596; // [rsp+48h] [rbp-A10h]
  int v1597; // [rsp+48h] [rbp-A10h]
  int v1598; // [rsp+48h] [rbp-A10h]
  int v1599; // [rsp+48h] [rbp-A10h]
  __int64 v1600; // [rsp+48h] [rbp-A10h]
  int v1601; // [rsp+48h] [rbp-A10h]
  int v1602; // [rsp+48h] [rbp-A10h]
  int v1603; // [rsp+48h] [rbp-A10h]
  int v1604; // [rsp+48h] [rbp-A10h]
  int v1605; // [rsp+48h] [rbp-A10h]
  int v1606; // [rsp+48h] [rbp-A10h]
  int v1607; // [rsp+48h] [rbp-A10h]
  int v1608; // [rsp+48h] [rbp-A10h]
  int v1609; // [rsp+48h] [rbp-A10h]
  int v1610; // [rsp+48h] [rbp-A10h]
  int v1611; // [rsp+48h] [rbp-A10h]
  int v1612; // [rsp+48h] [rbp-A10h]
  __int64 v1613; // [rsp+48h] [rbp-A10h]
  int v1614; // [rsp+48h] [rbp-A10h]
  int v1615; // [rsp+48h] [rbp-A10h]
  int v1616; // [rsp+48h] [rbp-A10h]
  int v1617; // [rsp+48h] [rbp-A10h]
  int v1618; // [rsp+48h] [rbp-A10h]
  int v1619; // [rsp+48h] [rbp-A10h]
  int v1620; // [rsp+48h] [rbp-A10h]
  int v1621; // [rsp+48h] [rbp-A10h]
  int v1622; // [rsp+48h] [rbp-A10h]
  int v1623; // [rsp+48h] [rbp-A10h]
  int v1624; // [rsp+48h] [rbp-A10h]
  int v1625; // [rsp+48h] [rbp-A10h]
  __int64 v1626; // [rsp+48h] [rbp-A10h]
  int v1627; // [rsp+48h] [rbp-A10h]
  int v1628; // [rsp+50h] [rbp-A08h]
  int v1629; // [rsp+50h] [rbp-A08h]
  int v1630; // [rsp+50h] [rbp-A08h]
  int v1631; // [rsp+50h] [rbp-A08h]
  int v1632; // [rsp+50h] [rbp-A08h]
  int v1633; // [rsp+50h] [rbp-A08h]
  int v1634; // [rsp+50h] [rbp-A08h]
  _QWORD *v1635; // [rsp+50h] [rbp-A08h]
  int v1636; // [rsp+50h] [rbp-A08h]
  int v1637; // [rsp+50h] [rbp-A08h]
  int v1638; // [rsp+50h] [rbp-A08h]
  int v1639; // [rsp+50h] [rbp-A08h]
  int v1640; // [rsp+50h] [rbp-A08h]
  int v1641; // [rsp+50h] [rbp-A08h]
  int v1642; // [rsp+50h] [rbp-A08h]
  int v1643; // [rsp+50h] [rbp-A08h]
  int v1644; // [rsp+50h] [rbp-A08h]
  int v1645; // [rsp+50h] [rbp-A08h]
  int v1646; // [rsp+50h] [rbp-A08h]
  int v1647; // [rsp+50h] [rbp-A08h]
  int v1648; // [rsp+50h] [rbp-A08h]
  int v1649; // [rsp+50h] [rbp-A08h]
  int v1650; // [rsp+50h] [rbp-A08h]
  int v1651; // [rsp+50h] [rbp-A08h]
  int v1652; // [rsp+50h] [rbp-A08h]
  __int64 v1653; // [rsp+50h] [rbp-A08h]
  int v1654; // [rsp+50h] [rbp-A08h]
  int v1655; // [rsp+50h] [rbp-A08h]
  int v1656; // [rsp+50h] [rbp-A08h]
  int v1657; // [rsp+50h] [rbp-A08h]
  int v1658; // [rsp+50h] [rbp-A08h]
  int v1659; // [rsp+50h] [rbp-A08h]
  int v1660; // [rsp+50h] [rbp-A08h]
  int v1661; // [rsp+50h] [rbp-A08h]
  int v1662; // [rsp+50h] [rbp-A08h]
  int v1663; // [rsp+50h] [rbp-A08h]
  int v1664; // [rsp+50h] [rbp-A08h]
  int v1665; // [rsp+50h] [rbp-A08h]
  int v1666; // [rsp+50h] [rbp-A08h]
  int v1667; // [rsp+50h] [rbp-A08h]
  int v1668; // [rsp+50h] [rbp-A08h]
  int v1669; // [rsp+50h] [rbp-A08h]
  int v1670; // [rsp+50h] [rbp-A08h]
  int v1671; // [rsp+50h] [rbp-A08h]
  int v1672; // [rsp+50h] [rbp-A08h]
  int v1673; // [rsp+50h] [rbp-A08h]
  int v1674; // [rsp+50h] [rbp-A08h]
  int v1675; // [rsp+50h] [rbp-A08h]
  int v1676; // [rsp+50h] [rbp-A08h]
  _QWORD *v1677; // [rsp+50h] [rbp-A08h]
  int v1678; // [rsp+50h] [rbp-A08h]
  int v1679; // [rsp+50h] [rbp-A08h]
  int v1680; // [rsp+50h] [rbp-A08h]
  int v1681; // [rsp+50h] [rbp-A08h]
  int v1682; // [rsp+50h] [rbp-A08h]
  int v1683; // [rsp+50h] [rbp-A08h]
  int v1684; // [rsp+50h] [rbp-A08h]
  int v1685; // [rsp+50h] [rbp-A08h]
  int v1686; // [rsp+50h] [rbp-A08h]
  int v1687; // [rsp+50h] [rbp-A08h]
  int v1688; // [rsp+50h] [rbp-A08h]
  int v1689; // [rsp+50h] [rbp-A08h]
  _QWORD *v1690; // [rsp+50h] [rbp-A08h]
  int v1691; // [rsp+50h] [rbp-A08h]
  int v1692; // [rsp+50h] [rbp-A08h]
  int v1693; // [rsp+50h] [rbp-A08h]
  int v1694; // [rsp+50h] [rbp-A08h]
  int v1695; // [rsp+50h] [rbp-A08h]
  int v1696; // [rsp+50h] [rbp-A08h]
  int v1697; // [rsp+50h] [rbp-A08h]
  int v1698; // [rsp+50h] [rbp-A08h]
  int v1699; // [rsp+50h] [rbp-A08h]
  int v1700; // [rsp+50h] [rbp-A08h]
  int v1701; // [rsp+50h] [rbp-A08h]
  int v1702; // [rsp+50h] [rbp-A08h]
  _QWORD *v1703; // [rsp+50h] [rbp-A08h]
  int v1704; // [rsp+50h] [rbp-A08h]
  int v1705; // [rsp+50h] [rbp-A08h]
  int v1706; // [rsp+50h] [rbp-A08h]
  int v1707; // [rsp+50h] [rbp-A08h]
  int v1708; // [rsp+50h] [rbp-A08h]
  int v1709; // [rsp+50h] [rbp-A08h]
  int v1710; // [rsp+50h] [rbp-A08h]
  int v1711; // [rsp+50h] [rbp-A08h]
  int v1712; // [rsp+50h] [rbp-A08h]
  int v1713; // [rsp+50h] [rbp-A08h]
  int v1714; // [rsp+50h] [rbp-A08h]
  int v1715; // [rsp+50h] [rbp-A08h]
  _QWORD *v1716; // [rsp+50h] [rbp-A08h]
  int v1717; // [rsp+50h] [rbp-A08h]
  char v1718; // [rsp+58h] [rbp-A00h]
  __m128i *v1719; // [rsp+58h] [rbp-A00h]
  char v1720; // [rsp+58h] [rbp-A00h]
  char v1721; // [rsp+58h] [rbp-A00h]
  char v1722; // [rsp+58h] [rbp-A00h]
  char v1723; // [rsp+58h] [rbp-A00h]
  char v1724; // [rsp+58h] [rbp-A00h]
  char v1725; // [rsp+58h] [rbp-A00h]
  char v1726; // [rsp+58h] [rbp-A00h]
  char v1727; // [rsp+58h] [rbp-A00h]
  char v1728; // [rsp+58h] [rbp-A00h]
  char v1729; // [rsp+58h] [rbp-A00h]
  char v1730; // [rsp+58h] [rbp-A00h]
  char v1731; // [rsp+58h] [rbp-A00h]
  char v1732; // [rsp+58h] [rbp-A00h]
  char v1733; // [rsp+58h] [rbp-A00h]
  char v1734; // [rsp+58h] [rbp-A00h]
  char v1735; // [rsp+58h] [rbp-A00h]
  char v1736; // [rsp+58h] [rbp-A00h]
  char v1737; // [rsp+58h] [rbp-A00h]
  char v1738; // [rsp+58h] [rbp-A00h]
  char v1739; // [rsp+58h] [rbp-A00h]
  char v1740; // [rsp+58h] [rbp-A00h]
  char v1741; // [rsp+58h] [rbp-A00h]
  char v1742; // [rsp+58h] [rbp-A00h]
  char v1743; // [rsp+58h] [rbp-A00h]
  char v1744; // [rsp+58h] [rbp-A00h]
  char v1745; // [rsp+58h] [rbp-A00h]
  char v1746; // [rsp+58h] [rbp-A00h]
  __int64 v1747; // [rsp+58h] [rbp-A00h]
  char v1748; // [rsp+58h] [rbp-A00h]
  char v1749; // [rsp+58h] [rbp-A00h]
  char v1750; // [rsp+58h] [rbp-A00h]
  char v1751; // [rsp+58h] [rbp-A00h]
  char v1752; // [rsp+58h] [rbp-A00h]
  char v1753; // [rsp+58h] [rbp-A00h]
  char v1754; // [rsp+58h] [rbp-A00h]
  char v1755; // [rsp+58h] [rbp-A00h]
  char v1756; // [rsp+58h] [rbp-A00h]
  _QWORD *v1757; // [rsp+58h] [rbp-A00h]
  char v1758; // [rsp+58h] [rbp-A00h]
  __int64 v1759; // [rsp+58h] [rbp-A00h]
  char v1760; // [rsp+58h] [rbp-A00h]
  char v1761; // [rsp+58h] [rbp-A00h]
  char v1762; // [rsp+58h] [rbp-A00h]
  char v1763; // [rsp+58h] [rbp-A00h]
  char v1764; // [rsp+58h] [rbp-A00h]
  char v1765; // [rsp+58h] [rbp-A00h]
  char v1766; // [rsp+58h] [rbp-A00h]
  char v1767; // [rsp+58h] [rbp-A00h]
  char v1768; // [rsp+58h] [rbp-A00h]
  char v1769; // [rsp+58h] [rbp-A00h]
  _QWORD *v1770; // [rsp+58h] [rbp-A00h]
  char v1771; // [rsp+58h] [rbp-A00h]
  __int64 v1772; // [rsp+58h] [rbp-A00h]
  char v1773; // [rsp+58h] [rbp-A00h]
  char v1774; // [rsp+58h] [rbp-A00h]
  char v1775; // [rsp+58h] [rbp-A00h]
  char v1776; // [rsp+58h] [rbp-A00h]
  char v1777; // [rsp+58h] [rbp-A00h]
  char v1778; // [rsp+58h] [rbp-A00h]
  char v1779; // [rsp+58h] [rbp-A00h]
  char v1780; // [rsp+58h] [rbp-A00h]
  char v1781; // [rsp+58h] [rbp-A00h]
  char v1782; // [rsp+58h] [rbp-A00h]
  _QWORD *v1783; // [rsp+58h] [rbp-A00h]
  char v1784; // [rsp+58h] [rbp-A00h]
  __int64 v1785; // [rsp+58h] [rbp-A00h]
  char v1786; // [rsp+58h] [rbp-A00h]
  char v1787; // [rsp+58h] [rbp-A00h]
  char v1788; // [rsp+58h] [rbp-A00h]
  char v1789; // [rsp+58h] [rbp-A00h]
  char v1790; // [rsp+58h] [rbp-A00h]
  char v1791; // [rsp+58h] [rbp-A00h]
  char v1792; // [rsp+58h] [rbp-A00h]
  char v1793; // [rsp+58h] [rbp-A00h]
  char v1794; // [rsp+58h] [rbp-A00h]
  char v1795; // [rsp+58h] [rbp-A00h]
  _QWORD *v1796; // [rsp+58h] [rbp-A00h]
  char v1797; // [rsp+58h] [rbp-A00h]
  __int64 v1798; // [rsp+58h] [rbp-A00h]
  char v1799; // [rsp+58h] [rbp-A00h]
  char v1800; // [rsp+58h] [rbp-A00h]
  char v1801; // [rsp+58h] [rbp-A00h]
  char v1802; // [rsp+58h] [rbp-A00h]
  char v1803; // [rsp+58h] [rbp-A00h]
  char v1804; // [rsp+58h] [rbp-A00h]
  char v1805; // [rsp+58h] [rbp-A00h]
  char v1806; // [rsp+58h] [rbp-A00h]
  char v1807; // [rsp+58h] [rbp-A00h]
  __int64 v1808; // [rsp+60h] [rbp-9F8h]
  _QWORD *v1809; // [rsp+60h] [rbp-9F8h]
  __int64 v1810; // [rsp+60h] [rbp-9F8h]
  __int64 v1811; // [rsp+60h] [rbp-9F8h]
  __int64 v1812; // [rsp+60h] [rbp-9F8h]
  __int64 v1813; // [rsp+60h] [rbp-9F8h]
  __int64 v1814; // [rsp+60h] [rbp-9F8h]
  __int64 v1815; // [rsp+60h] [rbp-9F8h]
  __int64 v1816; // [rsp+60h] [rbp-9F8h]
  __int64 v1817; // [rsp+60h] [rbp-9F8h]
  __int64 v1818; // [rsp+60h] [rbp-9F8h]
  __int64 v1819; // [rsp+60h] [rbp-9F8h]
  __int64 v1820; // [rsp+60h] [rbp-9F8h]
  __int64 v1821; // [rsp+60h] [rbp-9F8h]
  __int64 v1822; // [rsp+60h] [rbp-9F8h]
  __int64 v1823; // [rsp+60h] [rbp-9F8h]
  __int64 v1824; // [rsp+60h] [rbp-9F8h]
  __int64 v1825; // [rsp+60h] [rbp-9F8h]
  __int64 v1826; // [rsp+60h] [rbp-9F8h]
  __int64 v1827; // [rsp+60h] [rbp-9F8h]
  __int64 v1828; // [rsp+60h] [rbp-9F8h]
  __int64 v1829; // [rsp+60h] [rbp-9F8h]
  __int64 v1830; // [rsp+60h] [rbp-9F8h]
  __int64 v1831; // [rsp+60h] [rbp-9F8h]
  __int64 v1832; // [rsp+60h] [rbp-9F8h]
  __int64 v1833; // [rsp+60h] [rbp-9F8h]
  __int64 v1834; // [rsp+60h] [rbp-9F8h]
  __int64 v1835; // [rsp+60h] [rbp-9F8h]
  __int64 v1836; // [rsp+60h] [rbp-9F8h]
  __int64 v1837; // [rsp+60h] [rbp-9F8h]
  __int64 v1838; // [rsp+60h] [rbp-9F8h]
  __int64 v1839; // [rsp+60h] [rbp-9F8h]
  __int64 v1840; // [rsp+60h] [rbp-9F8h]
  __int64 v1841; // [rsp+60h] [rbp-9F8h]
  __int64 v1842; // [rsp+60h] [rbp-9F8h]
  __int64 v1843; // [rsp+60h] [rbp-9F8h]
  __int64 v1844; // [rsp+60h] [rbp-9F8h]
  __int64 v1845; // [rsp+60h] [rbp-9F8h]
  __int64 v1846; // [rsp+60h] [rbp-9F8h]
  __int64 v1847; // [rsp+60h] [rbp-9F8h]
  __int64 v1848; // [rsp+60h] [rbp-9F8h]
  __int64 v1849; // [rsp+60h] [rbp-9F8h]
  __int64 v1850; // [rsp+60h] [rbp-9F8h]
  _QWORD *v1851; // [rsp+60h] [rbp-9F8h]
  __int64 v1852; // [rsp+60h] [rbp-9F8h]
  __int64 v1853; // [rsp+60h] [rbp-9F8h]
  __int64 v1854; // [rsp+60h] [rbp-9F8h]
  __int64 v1855; // [rsp+60h] [rbp-9F8h]
  __int64 v1856; // [rsp+60h] [rbp-9F8h]
  __int64 v1857; // [rsp+60h] [rbp-9F8h]
  __int64 v1858; // [rsp+60h] [rbp-9F8h]
  __int64 v1859; // [rsp+60h] [rbp-9F8h]
  __int64 v1860; // [rsp+60h] [rbp-9F8h]
  __int64 v1861; // [rsp+60h] [rbp-9F8h]
  __int64 v1862; // [rsp+60h] [rbp-9F8h]
  __int64 v1863; // [rsp+60h] [rbp-9F8h]
  _QWORD *v1864; // [rsp+60h] [rbp-9F8h]
  __int64 v1865; // [rsp+60h] [rbp-9F8h]
  __int64 v1866; // [rsp+60h] [rbp-9F8h]
  __int64 v1867; // [rsp+60h] [rbp-9F8h]
  __int64 v1868; // [rsp+60h] [rbp-9F8h]
  __int64 v1869; // [rsp+60h] [rbp-9F8h]
  __int64 v1870; // [rsp+60h] [rbp-9F8h]
  __int64 v1871; // [rsp+60h] [rbp-9F8h]
  __int64 v1872; // [rsp+60h] [rbp-9F8h]
  __int64 v1873; // [rsp+60h] [rbp-9F8h]
  __int64 v1874; // [rsp+60h] [rbp-9F8h]
  __int64 v1875; // [rsp+60h] [rbp-9F8h]
  __int64 v1876; // [rsp+60h] [rbp-9F8h]
  _QWORD *v1877; // [rsp+60h] [rbp-9F8h]
  __int64 v1878; // [rsp+60h] [rbp-9F8h]
  __int64 v1879; // [rsp+60h] [rbp-9F8h]
  __int64 v1880; // [rsp+60h] [rbp-9F8h]
  __int64 v1881; // [rsp+60h] [rbp-9F8h]
  __int64 v1882; // [rsp+60h] [rbp-9F8h]
  __int64 v1883; // [rsp+60h] [rbp-9F8h]
  __int64 v1884; // [rsp+60h] [rbp-9F8h]
  __int64 v1885; // [rsp+60h] [rbp-9F8h]
  __int64 v1886; // [rsp+60h] [rbp-9F8h]
  __int64 v1887; // [rsp+60h] [rbp-9F8h]
  __int64 v1888; // [rsp+60h] [rbp-9F8h]
  __int64 v1889; // [rsp+60h] [rbp-9F8h]
  _QWORD *v1890; // [rsp+60h] [rbp-9F8h]
  __int64 v1891; // [rsp+60h] [rbp-9F8h]
  __int64 v1892; // [rsp+60h] [rbp-9F8h]
  __int64 v1893; // [rsp+60h] [rbp-9F8h]
  __int64 v1894; // [rsp+60h] [rbp-9F8h]
  __int64 v1895; // [rsp+60h] [rbp-9F8h]
  __int64 v1896; // [rsp+60h] [rbp-9F8h]
  __int64 v1897; // [rsp+60h] [rbp-9F8h]
  int v1898; // [rsp+68h] [rbp-9F0h]
  _QWORD *v1899; // [rsp+68h] [rbp-9F0h]
  int v1900; // [rsp+68h] [rbp-9F0h]
  __int64 v1901; // [rsp+68h] [rbp-9F0h]
  int v1902; // [rsp+68h] [rbp-9F0h]
  int v1903; // [rsp+68h] [rbp-9F0h]
  int v1904; // [rsp+68h] [rbp-9F0h]
  int v1905; // [rsp+68h] [rbp-9F0h]
  int v1906; // [rsp+68h] [rbp-9F0h]
  int v1907; // [rsp+68h] [rbp-9F0h]
  int v1908; // [rsp+68h] [rbp-9F0h]
  int v1909; // [rsp+68h] [rbp-9F0h]
  int v1910; // [rsp+68h] [rbp-9F0h]
  int v1911; // [rsp+68h] [rbp-9F0h]
  int v1912; // [rsp+68h] [rbp-9F0h]
  int v1913; // [rsp+68h] [rbp-9F0h]
  int v1914; // [rsp+68h] [rbp-9F0h]
  int v1915; // [rsp+68h] [rbp-9F0h]
  int v1916; // [rsp+68h] [rbp-9F0h]
  int v1917; // [rsp+68h] [rbp-9F0h]
  int v1918; // [rsp+68h] [rbp-9F0h]
  int v1919; // [rsp+68h] [rbp-9F0h]
  int v1920; // [rsp+68h] [rbp-9F0h]
  int v1921; // [rsp+68h] [rbp-9F0h]
  int v1922; // [rsp+68h] [rbp-9F0h]
  int v1923; // [rsp+68h] [rbp-9F0h]
  int v1924; // [rsp+68h] [rbp-9F0h]
  int v1925; // [rsp+68h] [rbp-9F0h]
  int v1926; // [rsp+68h] [rbp-9F0h]
  int v1927; // [rsp+68h] [rbp-9F0h]
  int v1928; // [rsp+68h] [rbp-9F0h]
  int v1929; // [rsp+68h] [rbp-9F0h]
  int v1930; // [rsp+68h] [rbp-9F0h]
  __int64 v1931; // [rsp+68h] [rbp-9F0h]
  int v1932; // [rsp+68h] [rbp-9F0h]
  int v1933; // [rsp+68h] [rbp-9F0h]
  int v1934; // [rsp+68h] [rbp-9F0h]
  int v1935; // [rsp+68h] [rbp-9F0h]
  int v1936; // [rsp+68h] [rbp-9F0h]
  int v1937; // [rsp+68h] [rbp-9F0h]
  int v1938; // [rsp+68h] [rbp-9F0h]
  int v1939; // [rsp+68h] [rbp-9F0h]
  int v1940; // [rsp+68h] [rbp-9F0h]
  _QWORD *v1941; // [rsp+68h] [rbp-9F0h]
  int v1942; // [rsp+68h] [rbp-9F0h]
  __int64 v1943; // [rsp+68h] [rbp-9F0h]
  int v1944; // [rsp+68h] [rbp-9F0h]
  int v1945; // [rsp+68h] [rbp-9F0h]
  int v1946; // [rsp+68h] [rbp-9F0h]
  int v1947; // [rsp+68h] [rbp-9F0h]
  int v1948; // [rsp+68h] [rbp-9F0h]
  int v1949; // [rsp+68h] [rbp-9F0h]
  int v1950; // [rsp+68h] [rbp-9F0h]
  int v1951; // [rsp+68h] [rbp-9F0h]
  int v1952; // [rsp+68h] [rbp-9F0h]
  int v1953; // [rsp+68h] [rbp-9F0h]
  _QWORD *v1954; // [rsp+68h] [rbp-9F0h]
  int v1955; // [rsp+68h] [rbp-9F0h]
  __int64 v1956; // [rsp+68h] [rbp-9F0h]
  int v1957; // [rsp+68h] [rbp-9F0h]
  int v1958; // [rsp+68h] [rbp-9F0h]
  int v1959; // [rsp+68h] [rbp-9F0h]
  int v1960; // [rsp+68h] [rbp-9F0h]
  int v1961; // [rsp+68h] [rbp-9F0h]
  int v1962; // [rsp+68h] [rbp-9F0h]
  int v1963; // [rsp+68h] [rbp-9F0h]
  int v1964; // [rsp+68h] [rbp-9F0h]
  int v1965; // [rsp+68h] [rbp-9F0h]
  int v1966; // [rsp+68h] [rbp-9F0h]
  _QWORD *v1967; // [rsp+68h] [rbp-9F0h]
  int v1968; // [rsp+68h] [rbp-9F0h]
  __int64 v1969; // [rsp+68h] [rbp-9F0h]
  int v1970; // [rsp+68h] [rbp-9F0h]
  int v1971; // [rsp+68h] [rbp-9F0h]
  int v1972; // [rsp+68h] [rbp-9F0h]
  int v1973; // [rsp+68h] [rbp-9F0h]
  int v1974; // [rsp+68h] [rbp-9F0h]
  int v1975; // [rsp+68h] [rbp-9F0h]
  int v1976; // [rsp+68h] [rbp-9F0h]
  int v1977; // [rsp+68h] [rbp-9F0h]
  int v1978; // [rsp+68h] [rbp-9F0h]
  int v1979; // [rsp+68h] [rbp-9F0h]
  _QWORD *v1980; // [rsp+68h] [rbp-9F0h]
  int v1981; // [rsp+68h] [rbp-9F0h]
  __int64 v1982; // [rsp+68h] [rbp-9F0h]
  int v1983; // [rsp+68h] [rbp-9F0h]
  int v1984; // [rsp+68h] [rbp-9F0h]
  int v1985; // [rsp+68h] [rbp-9F0h]
  int v1986; // [rsp+68h] [rbp-9F0h]
  int v1987; // [rsp+68h] [rbp-9F0h]
  __int64 v1988; // [rsp+70h] [rbp-9E8h]
  _QWORD *v1989; // [rsp+70h] [rbp-9E8h]
  __int64 v1990; // [rsp+70h] [rbp-9E8h]
  __int64 v1991; // [rsp+70h] [rbp-9E8h]
  __int64 v1992; // [rsp+70h] [rbp-9E8h]
  __int64 v1993; // [rsp+70h] [rbp-9E8h]
  __int64 v1994; // [rsp+70h] [rbp-9E8h]
  __int64 v1995; // [rsp+70h] [rbp-9E8h]
  __int64 v1996; // [rsp+70h] [rbp-9E8h]
  __int64 v1997; // [rsp+70h] [rbp-9E8h]
  __int64 v1998; // [rsp+70h] [rbp-9E8h]
  __int64 v1999; // [rsp+70h] [rbp-9E8h]
  __int64 v2000; // [rsp+70h] [rbp-9E8h]
  __int64 v2001; // [rsp+70h] [rbp-9E8h]
  __int64 v2002; // [rsp+70h] [rbp-9E8h]
  __int64 v2003; // [rsp+70h] [rbp-9E8h]
  __int64 v2004; // [rsp+70h] [rbp-9E8h]
  __int64 v2005; // [rsp+70h] [rbp-9E8h]
  __int64 v2006; // [rsp+70h] [rbp-9E8h]
  __int64 v2007; // [rsp+70h] [rbp-9E8h]
  __int64 v2008; // [rsp+70h] [rbp-9E8h]
  __int64 v2009; // [rsp+70h] [rbp-9E8h]
  __int64 v2010; // [rsp+70h] [rbp-9E8h]
  __int64 v2011; // [rsp+70h] [rbp-9E8h]
  __int64 v2012; // [rsp+70h] [rbp-9E8h]
  __int64 v2013; // [rsp+70h] [rbp-9E8h]
  __int64 v2014; // [rsp+70h] [rbp-9E8h]
  __int64 v2015; // [rsp+70h] [rbp-9E8h]
  __int64 v2016; // [rsp+70h] [rbp-9E8h]
  __int64 v2017; // [rsp+70h] [rbp-9E8h]
  __int64 v2018; // [rsp+70h] [rbp-9E8h]
  __int64 v2019; // [rsp+70h] [rbp-9E8h]
  __int64 v2020; // [rsp+70h] [rbp-9E8h]
  __int64 v2021; // [rsp+70h] [rbp-9E8h]
  __int64 v2022; // [rsp+70h] [rbp-9E8h]
  __int64 v2023; // [rsp+70h] [rbp-9E8h]
  __int64 v2024; // [rsp+70h] [rbp-9E8h]
  __int64 v2025; // [rsp+70h] [rbp-9E8h]
  __int64 v2026; // [rsp+70h] [rbp-9E8h]
  __int64 v2027; // [rsp+70h] [rbp-9E8h]
  __int64 v2028; // [rsp+70h] [rbp-9E8h]
  __int64 v2029; // [rsp+70h] [rbp-9E8h]
  _QWORD *v2030; // [rsp+70h] [rbp-9E8h]
  __int64 v2031; // [rsp+70h] [rbp-9E8h]
  __int64 v2032; // [rsp+70h] [rbp-9E8h]
  __int64 v2033; // [rsp+70h] [rbp-9E8h]
  __int64 v2034; // [rsp+70h] [rbp-9E8h]
  __int64 v2035; // [rsp+70h] [rbp-9E8h]
  __int64 v2036; // [rsp+70h] [rbp-9E8h]
  __int64 v2037; // [rsp+70h] [rbp-9E8h]
  __int64 v2038; // [rsp+70h] [rbp-9E8h]
  __int64 v2039; // [rsp+70h] [rbp-9E8h]
  __int64 v2040; // [rsp+70h] [rbp-9E8h]
  __int64 v2041; // [rsp+70h] [rbp-9E8h]
  __int64 v2042; // [rsp+70h] [rbp-9E8h]
  _QWORD *v2043; // [rsp+70h] [rbp-9E8h]
  __int64 v2044; // [rsp+70h] [rbp-9E8h]
  __int64 v2045; // [rsp+70h] [rbp-9E8h]
  __int64 v2046; // [rsp+70h] [rbp-9E8h]
  __int64 v2047; // [rsp+70h] [rbp-9E8h]
  __int64 v2048; // [rsp+70h] [rbp-9E8h]
  __int64 v2049; // [rsp+70h] [rbp-9E8h]
  __int64 v2050; // [rsp+70h] [rbp-9E8h]
  __int64 v2051; // [rsp+70h] [rbp-9E8h]
  __int64 v2052; // [rsp+70h] [rbp-9E8h]
  __int64 v2053; // [rsp+70h] [rbp-9E8h]
  __int64 v2054; // [rsp+70h] [rbp-9E8h]
  __int64 v2055; // [rsp+70h] [rbp-9E8h]
  _QWORD *v2056; // [rsp+70h] [rbp-9E8h]
  __int64 v2057; // [rsp+70h] [rbp-9E8h]
  __int64 v2058; // [rsp+70h] [rbp-9E8h]
  __int64 v2059; // [rsp+70h] [rbp-9E8h]
  __int64 v2060; // [rsp+70h] [rbp-9E8h]
  __int64 v2061; // [rsp+70h] [rbp-9E8h]
  __int64 v2062; // [rsp+70h] [rbp-9E8h]
  __int64 v2063; // [rsp+70h] [rbp-9E8h]
  __int64 v2064; // [rsp+70h] [rbp-9E8h]
  __int64 v2065; // [rsp+70h] [rbp-9E8h]
  __int64 v2066; // [rsp+70h] [rbp-9E8h]
  __int64 v2067; // [rsp+70h] [rbp-9E8h]
  __int64 v2068; // [rsp+70h] [rbp-9E8h]
  _QWORD *v2069; // [rsp+70h] [rbp-9E8h]
  __int64 v2070; // [rsp+70h] [rbp-9E8h]
  __int64 v2071; // [rsp+70h] [rbp-9E8h]
  __int64 v2072; // [rsp+70h] [rbp-9E8h]
  __int64 v2073; // [rsp+70h] [rbp-9E8h]
  __int64 v2074; // [rsp+70h] [rbp-9E8h]
  __int64 v2075; // [rsp+70h] [rbp-9E8h]
  __int64 v2076; // [rsp+70h] [rbp-9E8h]
  __int64 v2077; // [rsp+70h] [rbp-9E8h]
  __m128 v2078; // [rsp+C0h] [rbp-998h] BYREF
  __int128 *v2079; // [rsp+D0h] [rbp-988h]
  ida_mcp::tools::offsets *v2080; // [rsp+D8h] [rbp-980h]
  char *v2081; // [rsp+E0h] [rbp-978h]
  __int64 *v2082; // [rsp+E8h] [rbp-970h]
  __int64 *v2083; // [rsp+F0h] [rbp-968h]
  char *v2084; // [rsp+F8h] [rbp-960h]
  char *v2085; // [rsp+100h] [rbp-958h]
  __int64 *v2086; // [rsp+108h] [rbp-950h]
  __int64 *v2087; // [rsp+110h] [rbp-948h]
  char *v2088; // [rsp+118h] [rbp-940h]
  char *v2089; // [rsp+120h] [rbp-938h]
  char *v2090; // [rsp+128h] [rbp-930h]
  __int8 *v2091; // [rsp+130h] [rbp-928h]
  void **v2092; // [rsp+138h] [rbp-920h]
  __int64 *v2093; // [rsp+140h] [rbp-918h]
  __int64 *v2094; // [rsp+148h] [rbp-910h]
  __int64 *v2095; // [rsp+150h] [rbp-908h]
  __int64 *v2096; // [rsp+158h] [rbp-900h]
  __int64 *v2097; // [rsp+160h] [rbp-8F8h]
  __int64 *v2098; // [rsp+168h] [rbp-8F0h]
  _QWORD *v2099; // [rsp+170h] [rbp-8E8h]
  _BYTE *v2100; // [rsp+178h] [rbp-8E0h]
  _BYTE **v2101; // [rsp+180h] [rbp-8D8h]
  _BYTE *v2102; // [rsp+188h] [rbp-8D0h]
  __m128i *v2103; // [rsp+190h] [rbp-8C8h]
  __int64 *v2104; // [rsp+198h] [rbp-8C0h]
  __int64 *v2105; // [rsp+1A0h] [rbp-8B8h]
  __int64 *v2106; // [rsp+1A8h] [rbp-8B0h]
  char *v2107; // [rsp+1B0h] [rbp-8A8h]
  __int8 *v2108; // [rsp+1B8h] [rbp-8A0h]
  __m128i *v2109; // [rsp+1C0h] [rbp-898h]
  __m128i *v2110; // [rsp+1C8h] [rbp-890h]
  __m128i *v2111; // [rsp+1D0h] [rbp-888h]
  __int128 *v2112; // [rsp+1D8h] [rbp-880h]
  __m128i *v2113; // [rsp+1E0h] [rbp-878h]
  __int128 *v2114; // [rsp+1E8h] [rbp-870h]
  __int64 *v2115; // [rsp+1F0h] [rbp-868h]
  __int128 *v2116; // [rsp+1F8h] [rbp-860h]
  __int128 *v2117; // [rsp+200h] [rbp-858h]
  _QWORD *v2118; // [rsp+208h] [rbp-850h]
  _QWORD *v2119; // [rsp+210h] [rbp-848h]
  _QWORD *v2120; // [rsp+218h] [rbp-840h]
  _QWORD *v2121; // [rsp+220h] [rbp-838h]
  __int128 *v2122; // [rsp+228h] [rbp-830h]
  _QWORD *v2123; // [rsp+230h] [rbp-828h]
  __int128 *v2124; // [rsp+238h] [rbp-820h]
  _QWORD *v2125; // [rsp+240h] [rbp-818h]
  __int128 *v2126; // [rsp+248h] [rbp-810h]
  _QWORD *v2127; // [rsp+250h] [rbp-808h]
  _QWORD *v2128; // [rsp+258h] [rbp-800h]
  __int128 *v2129; // [rsp+260h] [rbp-7F8h]
  _QWORD *v2130; // [rsp+268h] [rbp-7F0h]
  __int128 *v2131; // [rsp+270h] [rbp-7E8h]
  _QWORD *v2132; // [rsp+278h] [rbp-7E0h]
  _QWORD *v2133; // [rsp+280h] [rbp-7D8h]
  __int128 *v2134; // [rsp+288h] [rbp-7D0h]
  _QWORD *v2135; // [rsp+290h] [rbp-7C8h]
  __int128 *v2136; // [rsp+298h] [rbp-7C0h]
  char *v2137; // [rsp+2A0h] [rbp-7B8h]
  __int64 *v2138; // [rsp+2A8h] [rbp-7B0h]
  __int64 *v2139; // [rsp+2B0h] [rbp-7A8h]
  char *v2140; // [rsp+2B8h] [rbp-7A0h]
  __int64 *v2141; // [rsp+2C0h] [rbp-798h]
  __m128i *v2142; // [rsp+2C8h] [rbp-790h]
  __m128i v2143; // [rsp+2D0h] [rbp-788h] BYREF
  __int64 v2144; // [rsp+2E0h] [rbp-778h] BYREF
  __int64 v2145; // [rsp+2E8h] [rbp-770h] BYREF
  _QWORD v2146[3]; // [rsp+2F0h] [rbp-768h] BYREF
  char v2147; // [rsp+308h] [rbp-750h]
  __int128 v2148; // [rsp+310h] [rbp-748h] BYREF
  _QWORD v2149[3]; // [rsp+320h] [rbp-738h] BYREF
  char v2150; // [rsp+338h] [rbp-720h]
  __int128 v2151; // [rsp+340h] [rbp-718h] BYREF
  _QWORD v2152[3]; // [rsp+350h] [rbp-708h] BYREF
  char v2153; // [rsp+368h] [rbp-6F0h]
  __int128 v2154; // [rsp+370h] [rbp-6E8h] BYREF
  _QWORD v2155[3]; // [rsp+380h] [rbp-6D8h] BYREF
  _QWORD v2156[3]; // [rsp+398h] [rbp-6C0h] BYREF
  _QWORD v2157[3]; // [rsp+3B0h] [rbp-6A8h] BYREF
  _QWORD v2158[3]; // [rsp+3C8h] [rbp-690h] BYREF
  _QWORD v2159[3]; // [rsp+3E0h] [rbp-678h] BYREF
  char v2160; // [rsp+3F8h] [rbp-660h]
  __int128 v2161; // [rsp+400h] [rbp-658h] BYREF
  _QWORD v2162[3]; // [rsp+410h] [rbp-648h] BYREF
  char v2163; // [rsp+428h] [rbp-630h]
  __int128 v2164; // [rsp+430h] [rbp-628h] BYREF
  _QWORD v2165[3]; // [rsp+440h] [rbp-618h] BYREF
  _QWORD v2166[3]; // [rsp+458h] [rbp-600h] BYREF
  _QWORD v2167[3]; // [rsp+470h] [rbp-5E8h] BYREF
  _QWORD v2168[3]; // [rsp+488h] [rbp-5D0h] BYREF
  _QWORD v2169[3]; // [rsp+4A0h] [rbp-5B8h] BYREF
  char v2170; // [rsp+4B8h] [rbp-5A0h]
  __int128 v2171; // [rsp+4C0h] [rbp-598h] BYREF
  _QWORD v2172[3]; // [rsp+4D0h] [rbp-588h] BYREF
  char v2173; // [rsp+4E8h] [rbp-570h]
  __int128 v2174; // [rsp+4F0h] [rbp-568h] BYREF
  _QWORD v2175[3]; // [rsp+500h] [rbp-558h] BYREF
  _QWORD v2176[3]; // [rsp+518h] [rbp-540h] BYREF
  __int64 v2177; // [rsp+530h] [rbp-528h] BYREF
  __int128 v2178; // [rsp+538h] [rbp-520h] BYREF
  __int64 v2179; // [rsp+548h] [rbp-510h] BYREF
  __int128 v2180; // [rsp+550h] [rbp-508h] BYREF
  __int64 v2181; // [rsp+560h] [rbp-4F8h] BYREF
  char v2182; // [rsp+568h] [rbp-4F0h] BYREF
  __int64 v2183; // [rsp+570h] [rbp-4E8h]
  char v2184; // [rsp+578h] [rbp-4E0h]
  __int128 v2185; // [rsp+580h] [rbp-4D8h] BYREF
  __m128i v2186; // [rsp+590h] [rbp-4C8h] BYREF
  __int64 v2187; // [rsp+5A0h] [rbp-4B8h]
  char v2188; // [rsp+5A8h] [rbp-4B0h]
  __int128 v2189; // [rsp+5B0h] [rbp-4A8h] BYREF
  __m128i v2190; // [rsp+5C0h] [rbp-498h] BYREF
  __int64 v2191; // [rsp+5D0h] [rbp-488h]
  __int64 v2192; // [rsp+5D8h] [rbp-480h] BYREF
  char v2193; // [rsp+5E0h] [rbp-478h] BYREF
  __int64 v2194; // [rsp+5E8h] [rbp-470h]
  __int64 v2195; // [rsp+5F0h] [rbp-468h] BYREF
  __int128 v2196; // [rsp+5F8h] [rbp-460h]
  __int64 v2197; // [rsp+608h] [rbp-450h] BYREF
  char v2198; // [rsp+610h] [rbp-448h] BYREF
  __int64 v2199; // [rsp+618h] [rbp-440h]
  __m128i v2200; // [rsp+620h] [rbp-438h] BYREF
  __int64 v2201; // [rsp+630h] [rbp-428h]
  char v2202; // [rsp+638h] [rbp-420h]
  __int128 v2203; // [rsp+640h] [rbp-418h] BYREF
  __m128i v2204; // [rsp+650h] [rbp-408h] BYREF
  __int64 v2205; // [rsp+660h] [rbp-3F8h]
  char v2206; // [rsp+668h] [rbp-3F0h]
  __int128 v2207; // [rsp+670h] [rbp-3E8h] BYREF
  __int64 v2208; // [rsp+680h] [rbp-3D8h] BYREF
  char v2209; // [rsp+688h] [rbp-3D0h] BYREF
  __int64 v2210; // [rsp+690h] [rbp-3C8h]
  __int64 v2211; // [rsp+698h] [rbp-3C0h] BYREF
  __int128 v2212; // [rsp+6A0h] [rbp-3B8h]
  __int64 v2213; // [rsp+6B0h] [rbp-3A8h] BYREF
  __int128 v2214; // [rsp+6B8h] [rbp-3A0h]
  __int64 v2215; // [rsp+6C8h] [rbp-390h] BYREF
  char v2216; // [rsp+6D0h] [rbp-388h] BYREF
  __int64 v2217; // [rsp+6D8h] [rbp-380h]
  __m128i v2218; // [rsp+6E0h] [rbp-378h] BYREF
  __int64 v2219; // [rsp+6F0h] [rbp-368h]
  __int64 v2220; // [rsp+6F8h] [rbp-360h] BYREF
  __int128 v2221; // [rsp+700h] [rbp-358h] BYREF
  __m128i v2222; // [rsp+710h] [rbp-348h] BYREF
  __int64 v2223; // [rsp+720h] [rbp-338h]
  char v2224; // [rsp+728h] [rbp-330h]
  __int128 v2225; // [rsp+730h] [rbp-328h] BYREF
  __int64 v2226; // [rsp+740h] [rbp-318h] BYREF
  char v2227; // [rsp+748h] [rbp-310h] BYREF
  __int64 v2228; // [rsp+750h] [rbp-308h]
  __int64 v2229; // [rsp+758h] [rbp-300h] BYREF
  __int128 v2230; // [rsp+760h] [rbp-2F8h]
  char v2231; // [rsp+770h] [rbp-2E8h] BYREF
  __int128 v2232; // [rsp+778h] [rbp-2E0h]
  __int64 v2233; // [rsp+788h] [rbp-2D0h] BYREF
  char v2234; // [rsp+790h] [rbp-2C8h] BYREF
  __int64 v2235; // [rsp+798h] [rbp-2C0h]
  char v2236; // [rsp+7A0h] [rbp-2B8h] BYREF
  __int128 v2237; // [rsp+7A8h] [rbp-2B0h]
  __int64 v2238; // [rsp+7B8h] [rbp-2A0h] BYREF
  char v2239; // [rsp+7C0h] [rbp-298h] BYREF
  __int64 v2240; // [rsp+7C8h] [rbp-290h]
  char v2241; // [rsp+7D0h] [rbp-288h] BYREF
  __int128 v2242; // [rsp+7D8h] [rbp-280h]
  __m128i v2243; // [rsp+7E8h] [rbp-270h] BYREF
  __int64 v2244; // [rsp+7F8h] [rbp-260h]
  __int64 v2245; // [rsp+800h] [rbp-258h] BYREF
  __int128 v2246; // [rsp+808h] [rbp-250h]
  __int64 v2247; // [rsp+818h] [rbp-240h] BYREF
  char v2248; // [rsp+820h] [rbp-238h] BYREF
  __int64 v2249; // [rsp+828h] [rbp-230h]
  __int64 v2250; // [rsp+830h] [rbp-228h] BYREF
  __int128 v2251; // [rsp+838h] [rbp-220h]
  char v2252; // [rsp+848h] [rbp-210h] BYREF
  __int64 v2253; // [rsp+850h] [rbp-208h] BYREF
  __int128 v2254; // [rsp+858h] [rbp-200h]
  __m128i v2255; // [rsp+868h] [rbp-1F0h] BYREF
  __int64 v2256; // [rsp+878h] [rbp-1E0h]
  __int64 v2257; // [rsp+880h] [rbp-1D8h] BYREF
  __int128 v2258; // [rsp+888h] [rbp-1D0h]
  char v2259; // [rsp+898h] [rbp-1C0h] BYREF
  __int128 v2260; // [rsp+8A0h] [rbp-1B8h]
  char v2261; // [rsp+8B0h] [rbp-1A8h]
  __int128 v2262; // [rsp+8B8h] [rbp-1A0h]
  char v2263; // [rsp+8C8h] [rbp-190h] BYREF
  __int128 v2264; // [rsp+8D0h] [rbp-188h]
  void *v2265; // [rsp+8E0h] [rbp-178h] BYREF
  __int64 v2266; // [rsp+8E8h] [rbp-170h]
  __m128i v2267; // [rsp+8F0h] [rbp-168h] BYREF
  __int64 v2268; // [rsp+908h] [rbp-150h]
  _QWORD v2269[2]; // [rsp+910h] [rbp-148h] BYREF
  __int64 v2270; // [rsp+920h] [rbp-138h]
  _BYTE v2271[16]; // [rsp+928h] [rbp-130h] BYREF
  __int64 v2272; // [rsp+938h] [rbp-120h]
  _QWORD v2273[3]; // [rsp+940h] [rbp-118h] BYREF
  _QWORD v2274[3]; // [rsp+958h] [rbp-100h] BYREF
  _BYTE *v2275; // [rsp+970h] [rbp-E8h] BYREF
  __int64 v2276; // [rsp+978h] [rbp-E0h]
  _BYTE v2277[16]; // [rsp+980h] [rbp-D8h] BYREF
  _BYTE *v2278; // [rsp+990h] [rbp-C8h] BYREF
  __int64 v2279; // [rsp+998h] [rbp-C0h]
  _BYTE v2280[16]; // [rsp+9A0h] [rbp-B8h] BYREF
  char v2281; // [rsp+9B0h] [rbp-A8h]
  __int64 v2282; // [rsp+9B8h] [rbp-A0h]
  char v2283; // [rsp+9D0h] [rbp-88h]
  char v2284; // [rsp+A08h] [rbp-50h]
  unsigned __int64 v2285; // [rsp+A18h] [rbp-40h]

  v2080 = this;
  v2285 = __readfsqword(0x28u);
  v2100 = v2277;
  v2275 = v2277;
  v2276 = 0;
  v2277[0] = 0;
  v2102 = v2280;
  v2278 = v2280;
  v2280[0] = 0;
  v2279 = 0;
  v2281 = 0;
  v2282 = 0;
  v2283 = 0;
  v2284 = 0;
  std::string::_M_replace();
  v2101 = &v2278;
  std::string::_M_replace();
  v2115 = &v2177;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2177);
  *((_QWORD *)&v2178 + 1) = 0;
  LOBYTE(v2179) = 0;
  *(_QWORD *)&v2180 = 0;
  v2116 = &v2180;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2179) = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "object", v3, v4, v5, v6, v578, v718, v858);
  v2180 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2265,
    (const __m128i *)&v2177);
  v2267.m128i_i64[0] = 0;
  v2236 = 0;
  *(_QWORD *)&v2237 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2236 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "properties", v8, v9, v10, v11, v579, v719, v859);
  v2237 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v2195);
  *((_QWORD *)&v2196 + 1) = 0;
  v2111 = (__m128i *)&v2181;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2181);
  v2183 = 0;
  v2184 = 0;
  *(_QWORD *)&v2185 = 0;
  v2112 = &v2185;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2184 = 3;
  v12 = operator new(0x20u);
  *(_QWORD *)v12 = v12 + 16;
  v13 = v2111;
  strcpy((char *)(v12 + 16), "string");
  *(_QWORD *)(v12 + 8) = 6;
  v2110 = &v2190;
  v2185 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2190,
    v13);
  v2191 = 0;
  v2113 = &v2186;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2186);
  v2187 = 0;
  v2188 = 0;
  *(_QWORD *)&v2189 = 0;
  v2114 = &v2189;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2188 = 3;
  v14 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v14, "Hex address", v15, v16, v17, v18, v580, v720, v860);
  v2189 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2192,
    &v2186);
  v2194 = 0;
  v2093 = &v2197;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2197,
    &v2190);
  v2199 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2253,
    (const __m128i *)&v2195);
  *((_QWORD *)&v2254 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v2213);
  *((_QWORD *)&v2214 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2200);
  v2201 = 0;
  v2202 = 0;
  *(_QWORD *)&v2203 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2202 = 3;
  v19 = operator new(0x20u);
  strcpy((char *)(v19 + 16), "number");
  *(_QWORD *)v19 = v19 + 16;
  *(_QWORD *)(v19 + 8) = 6;
  v2203 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2208,
    &v2200);
  v2210 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2204);
  v2205 = 0;
  v2206 = 0;
  *(_QWORD *)&v2207 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2206 = 3;
  v20 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v20,
    "Operand number",
    v21,
    v22,
    v23,
    v24,
    (int)&v2208,
    v721,
    (__int64)&v2200);
  v2141 = &v2211;
  v2207 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2211,
    &v2204);
  *((_QWORD *)&v2212 + 1) = 0;
  v2094 = &v2215;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2215,
    v581);
  v2217 = 0;
  v2142 = &v2255;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2255,
    (const __m128i *)&v2213);
  v2256 = 0;
  v2231 = 0;
  *(_QWORD *)&v2232 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2231 = 3;
  v25 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v25, "target", v26, v27, v28, v29, (int)v581, v722, v861);
  v2232 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2218);
  v2219 = 0;
  v2106 = &v2220;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2220);
  *((_QWORD *)&v2221 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2226,
    &v2218);
  v2228 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2222);
  v2223 = 0;
  v2224 = 0;
  *(_QWORD *)&v2225 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2224 = 3;
  v30 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v30,
    "Target hex address",
    v31,
    v32,
    v33,
    v34,
    v582,
    (int)&v2226,
    v862);
  v2225 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2229,
    &v2222);
  *((_QWORD *)&v2230 + 1) = 0;
  v2095 = &v2233;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2233,
    v723);
  v2235 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2257,
    (const __m128i *)&v2231);
  *((_QWORD *)&v2258 + 1) = 0;
  v2096 = &v2238;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2238,
    (__int64)&v2253,
    3,
    v35,
    v36,
    v37,
    v583,
    (__int64)v723,
    v863,
    (int)&v2203,
    (int)&v2204,
    (int)&v2207,
    (__int64)&v2218,
    (int)&v2222,
    (int)&v2225,
    (int)&v2253,
    (int)&v2195,
    (char)&v2213,
    v1808,
    (int)&v2231,
    v1988);
  v2240 = 0;
  v2098 = &v2267.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2267.m128i_i64[1],
    (const __m128i *)&v2236);
  v2268 = 0;
  v2241 = 0;
  *(_QWORD *)&v2242 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2241 = 3;
  v38 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v38, "required", v39, v40, v41, v42, v584, v724, v864);
  v2242 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v2245);
  *((_QWORD *)&v2246 + 1) = 0;
  v2097 = &v2247;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v2247);
  v2249 = 0;
  LOBYTE(v2250) = 0;
  *(_QWORD *)&v2251 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2250) = 3;
  v43 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v43, "target", v44, v45, v46, v47, v585, v725, v865);
  v2251 = (unsigned __int64)v43;
  v2103 = &v2143;
  v2078 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v48 = _mm_load_si128(&v2143);
  v2244 = 0;
  v2099 = v2269;
  v2243 = v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2269,
    (const __m128i *)&v2241);
  v2270 = 0;
  LOBYTE(v2144) = 0;
  v2104 = &v2144;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2144,
    (__int64)&v2265,
    3,
    v49,
    v50,
    v51,
    v586,
    v726,
    v866,
    v998,
    v1088,
    v1178,
    v1268,
    v1358,
    v1448,
    v1538,
    v1628,
    v1718,
    (__int64)&v2236,
    v1898,
    (__int64)&v2241);
  LOBYTE(v13) = v2281;
  v52 = v2145;
  v2281 = v2144;
  LOBYTE(v2144) = (_BYTE)v13;
  v2145 = v2282;
  v2105 = &v2145;
  v2282 = v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2092 = (void **)v2271;
  v53 = (void **)v2271;
  do
  {
    v53 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v53 != &v2265 );
  v54 = (__int64 *)&v2252;
  v2091 = &v2243.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v54 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v54 != &v2245 );
  v55 = &v2259;
  v2090 = &v2239;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v55 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v55 != v1539 );
  v2089 = &v2234;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2088 = &v2227;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2087 = &v2222.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2079 = &v2221;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2086 = &v2218.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2085 = &v2216;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2084 = &v2209;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2083 = &v2204.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2082 = &v2200.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2081 = &v2198;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2140 = &v2193;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2139 = &v2190.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2138 = &v2186.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2137 = &v2182;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2117 = &v2178;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v2078);
  v2266 = 0;
  v2265 = ida_mcp::tools::offsets::`anonymous namespace'::handle_apply_offset;
  v2267 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2267.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2267.m128i_i64[0])(&v2265, &v2265, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2275);
  v2276 = 0;
  v2277[0] = 0;
  v2275 = v2100;
  v2279 = 0;
  v2278 = v2102;
  v2280[0] = 0;
  v2281 = 0;
  v2282 = 0;
  v2283 = 0;
  v2284 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v867);
  v2201 = 0;
  v2202 = 0;
  *(_QWORD *)&v2203 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2202 = 3;
  v57 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v57, "object", v58, v59, v60, v61, v587, v727, (__int64)v867);
  v2203 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2265,
    v868);
  v2267.m128i_i64[0] = 0;
  LOBYTE(v2245) = 0;
  *(_QWORD *)&v2246 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2245) = 3;
  v62 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v62, "properties", v63, v64, v65, v66, v588, v728, (__int64)v868);
  v2246 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1269);
  v2219 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1089);
  v2205 = 0;
  v2206 = 0;
  *(_QWORD *)&v2207 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2206 = 3;
  v67 = operator new(0x20u);
  *(_QWORD *)v67 = v67 + 16;
  strcpy((char *)(v67 + 16), "string");
  *(_QWORD *)(v67 + 8) = 6;
  v2207 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1719,
    v1089);
  *((_QWORD *)&v2214 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v589);
  v2210 = 0;
  LOBYTE(v2211) = 0;
  *(_QWORD *)&v2212 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2211) = 3;
  v68 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v68, "Hex address", v69, v70, v71, v72, (int)v589, v729, v869);
  v2212 = (unsigned __int64)v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2094,
    v590);
  v2217 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2106,
    v1719);
  *((_QWORD *)&v2221 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1989,
    v1269);
  *((_QWORD *)&v2242 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1809);
  *((_QWORD *)&v2237 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1359);
  v2223 = 0;
  v2224 = 0;
  *(_QWORD *)&v2225 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2224 = 3;
  v73 = operator new(0x20u);
  *(_QWORD *)v73 = v73 + 16;
  strcpy((char *)(v73 + 16), "number");
  *(_QWORD *)(v73 + 8) = 6;
  v2225 = (unsigned __int64)v73;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1899,
    (__int64)v1359,
    2,
    v74,
    v75,
    v76,
    (int)v590,
    v730,
    v870,
    v999,
    (int)v1089,
    v1179,
    (__int64)v1269,
    (int)v1359,
    v1449,
    (int)v1539,
    v1629,
    (char)v1719,
    (__int64)v1809,
    (int)v1899,
    (__int64)v1989);
  *((_QWORD *)&v2232 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v731);
  v2228 = 0;
  LOBYTE(v2229) = 0;
  *(_QWORD *)&v2230 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2229) = 3;
  v77 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v77, "Operand number", v78, v79, v80, v81, v591, (int)v731, v871);
  v2230 = (unsigned __int64)v77;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2095,
    v732,
    2,
    v82,
    v83,
    v84,
    v592,
    v732,
    v872,
    v1000,
    v1090,
    v1180,
    v1270,
    v1360,
    v1450,
    v1540,
    v1630,
    v1720,
    v1810,
    v1900,
    v1990);
  v2235 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2096,
    v1901,
    2,
    v85,
    v86,
    v87,
    v593,
    v733,
    v873,
    v1001,
    v1091,
    v1181,
    v1271,
    v1361,
    v1451,
    v1541,
    v1631,
    v1721,
    v1811,
    v1901,
    v1991);
  v2240 = 0;
  v2109 = &v2243;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2243,
    v1812,
    2,
    v88,
    v89,
    v90,
    v594,
    v734,
    v874,
    v1002,
    v1092,
    v1182,
    v1272,
    v1362,
    v1452,
    v1542,
    v1632,
    v1722,
    v1812,
    v1902,
    v1992);
  v2244 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2097,
    v1993,
    2,
    v91,
    v92,
    v93,
    v595,
    v735,
    v875,
    v1003,
    v1093,
    v1183,
    v1273,
    v1363,
    v1453,
    v1543,
    v1633,
    v1723,
    v1813,
    v1903,
    v1993);
  v2249 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2098,
    (__int64)&v2245,
    2,
    v94,
    v95,
    v96,
    v596,
    v736,
    v876,
    v1004,
    v1094,
    v1184,
    v1274,
    v1364,
    v1454,
    v1544,
    v1634,
    v1724,
    v1814,
    v1904,
    v1994);
  v2268 = 0;
  LOBYTE(v2253) = 0;
  *(_QWORD *)&v2254 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2253) = 3;
  v97 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v97, "required", v98, v99, v100, v101, v597, v737, v877);
  v2254 = (unsigned __int64)v97;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1635);
  *((_QWORD *)&v2196 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v2093);
  v2199 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v102 = _mm_load_si128(&v2143);
  v2256 = 0;
  v2255 = v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2099,
    v1545,
    2,
    v103,
    v104,
    v105,
    v598,
    v738,
    v878,
    v1005,
    v1095,
    v1185,
    v1275,
    v1365,
    v1455,
    v1545,
    (int)v1635,
    v1725,
    v1815,
    v1905,
    v1995);
  v2270 = 0;
  LOBYTE(v2144) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2104,
    (__int64)&v2265,
    3,
    v106,
    v107,
    v108,
    v599,
    v739,
    v879,
    v1006,
    v1096,
    v1186,
    v1276,
    v1366,
    v1456,
    v1546,
    v1636,
    v1726,
    v1816,
    v1906,
    v1996);
  v109 = v2281;
  v2281 = v2144;
  v110 = v2282;
  LOBYTE(v2144) = v109;
  v2282 = v2145;
  v2145 = v110;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v111 = v2092;
  do
  {
    v111 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v111 != &v2265 );
  v2108 = &v2255.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2107 = &v2248;
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
  v112 = _mm_load_si128((const __m128i *)&v2078);
  v2266 = 0;
  v2265 = ida_mcp::tools::offsets::`anonymous namespace'::handle_get_offset_expression;
  v2267 = v112;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2267.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2267.m128i_i64[0])(&v2265, &v2265, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2275);
  v2276 = 0;
  v2277[0] = 0;
  v2275 = v2100;
  v2279 = 0;
  v2278 = v2102;
  v2280[0] = 0;
  v2281 = 0;
  v2282 = 0;
  v2283 = 0;
  v2284 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v2121 = v2146;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v2146);
  v2146[2] = 0;
  v2147 = 0;
  *(_QWORD *)&v2148 = 0;
  v2122 = &v2148;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2147 = 3;
  v113 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v113, "object", v114, v115, v116, v117, v600, v740, v880);
  v2148 = (unsigned __int64)v113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2245,
    (__int64)v2121,
    2,
    v118,
    v119,
    v120,
    v601,
    v741,
    v881,
    v1007,
    v1097,
    v1187,
    v1277,
    v1367,
    v1457,
    v1547,
    v1637,
    v1727,
    v1817,
    v1907,
    v1997);
  *((_QWORD *)&v2246 + 1) = 0;
  v2236 = 0;
  *(_QWORD *)&v2237 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2236 = 3;
  v121 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v121, "properties", v122, v123, v124, v125, v602, v742, v882);
  v2127 = v2157;
  v2237 = (unsigned __int64)v121;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v2157);
  v2157[2] = 0;
  v2123 = v2149;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v2149);
  v2149[2] = 0;
  v2150 = 0;
  *(_QWORD *)&v2151 = 0;
  v2124 = &v2151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2150 = 3;
  v126 = operator new(0x20u);
  *(_QWORD *)v126 = v126 + 16;
  v127 = (__int64)v2123;
  strcpy((char *)(v126 + 16), "string");
  *(_QWORD *)(v126 + 8) = 6;
  v2118 = v2155;
  v2151 = (unsigned __int64)v126;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2155,
    v127,
    2,
    v128,
    v129,
    26478,
    v603,
    v743,
    v883,
    v1008,
    v1098,
    v1188,
    v1278,
    v1368,
    v1458,
    v1548,
    v1638,
    v1728,
    v1818,
    v1908,
    v1998);
  v2155[2] = 0;
  v2125 = v2152;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v2152);
  v2152[2] = 0;
  v2153 = 0;
  *(_QWORD *)&v2154 = 0;
  v2126 = &v2154;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2153 = 3;
  v130 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v130, "Hex address", v131, v132, v133, v134, v604, v744, v884);
  v2154 = (unsigned __int64)v130;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2156,
    (__int64)v2125,
    2,
    v135,
    v136,
    v137,
    v605,
    v745,
    v885,
    v1009,
    v1099,
    v1189,
    v1279,
    v1369,
    v1459,
    v1549,
    v1639,
    v1729,
    v1819,
    v1909,
    v1999);
  v2156[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2158,
    (__int64)v2118,
    2,
    v138,
    v139,
    v140,
    v606,
    v746,
    v886,
    v1010,
    v1100,
    v1190,
    v1280,
    v1370,
    v1460,
    v1550,
    v1640,
    v1730,
    v1820,
    v1910,
    v2000);
  v2158[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2265,
    (__int64)v2127,
    2,
    v141,
    v142,
    v143,
    v607,
    v747,
    v887,
    v1011,
    v1101,
    v1191,
    v1281,
    v1371,
    v1461,
    v1551,
    v1641,
    v1731,
    v1821,
    v1911,
    v2001);
  v2267.m128i_i64[0] = 0;
  v2132 = v2167;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v2167);
  v2167[2] = 0;
  v2128 = v2159;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v2159);
  v2159[2] = 0;
  v2160 = 0;
  *(_QWORD *)&v2161 = 0;
  v2129 = &v2161;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2160 = 3;
  v144 = operator new(0x20u);
  *(_QWORD *)v144 = v144 + 16;
  v145 = (__int64)v2128;
  strcpy((char *)(v144 + 16), "number");
  *(_QWORD *)(v144 + 8) = 6;
  v2119 = v2165;
  v2161 = (unsigned __int64)v144;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2165,
    v145,
    2,
    v146,
    v147,
    29285,
    v608,
    v748,
    v888,
    v1012,
    v1102,
    v1192,
    v1282,
    v1372,
    v1462,
    v1552,
    v1642,
    v1732,
    v1822,
    v1912,
    v2002);
  v2165[2] = 0;
  v2130 = v2162;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v2162);
  v2162[2] = 0;
  v2163 = 0;
  *(_QWORD *)&v2164 = 0;
  v2131 = &v2164;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2163 = 3;
  v148 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v148, "Operand number", v149, v150, v151, v152, v609, v749, v889);
  v2164 = (unsigned __int64)v148;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2166,
    (__int64)v2130,
    2,
    v153,
    v154,
    v155,
    v610,
    v750,
    v890,
    v1013,
    v1103,
    v1193,
    v1283,
    v1373,
    v1463,
    v1553,
    v1643,
    v1733,
    v1823,
    v1913,
    v2003);
  v2166[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2168,
    (__int64)v2119,
    2,
    v156,
    v157,
    v158,
    v611,
    v751,
    v891,
    v1014,
    v1104,
    v1194,
    v1284,
    v1374,
    v1464,
    v1554,
    v1644,
    v1734,
    v1824,
    v1914,
    v2004);
  v2168[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2098,
    (__int64)v2132,
    2,
    v159,
    v160,
    v161,
    v612,
    v752,
    v892,
    v1015,
    v1105,
    v1195,
    v1285,
    v1375,
    v1465,
    v1555,
    v1645,
    v1735,
    v1825,
    v1915,
    v2005);
  v2268 = 0;
  LOBYTE(v2177) = 0;
  *(_QWORD *)&v2178 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2177) = 3;
  v162 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v162, "reftype", v163, v164, v165, v166, v613, v753, v893);
  v2133 = v2169;
  v2178 = (unsigned __int64)v162;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v2169);
  v2169[2] = 0;
  v2170 = 0;
  *(_QWORD *)&v2171 = 0;
  v2134 = &v2171;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2170 = 3;
  v167 = operator new(0x20u);
  *(_QWORD *)v167 = v167 + 16;
  v168 = (__int64)v2133;
  strcpy((char *)(v167 + 16), "number");
  *(_QWORD *)(v167 + 8) = 6;
  v2120 = v2175;
  v2171 = (unsigned __int64)v167;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2175,
    v168,
    2,
    v169,
    v170,
    29285,
    v614,
    v754,
    v894,
    v1016,
    v1106,
    v1196,
    v1286,
    v1376,
    v1466,
    v1556,
    v1646,
    v1736,
    v1826,
    v1916,
    v2006);
  v2175[2] = 0;
  v2135 = v2172;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v2172);
  v2172[2] = 0;
  v2173 = 0;
  *(_QWORD *)&v2174 = 0;
  v2136 = &v2174;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2173 = 3;
  v171 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v171, "Reference type", v172, v173, v174, v175, v615, v755, v895);
  v2174 = (unsigned __int64)v171;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2176,
    (__int64)v2135,
    2,
    v176,
    v177,
    v178,
    v616,
    v756,
    v896,
    v1017,
    v1107,
    v1197,
    v1287,
    v1377,
    v1467,
    v1557,
    v1647,
    v1737,
    v1827,
    v1917,
    v2007);
  v2176[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2179,
    (__int64)v2120,
    2,
    v179,
    v180,
    v181,
    v617,
    v757,
    v897,
    v1018,
    v1108,
    v1198,
    v1288,
    v1378,
    v1468,
    v1558,
    v1648,
    v1738,
    v1828,
    v1918,
    v2008);
  *((_QWORD *)&v2180 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2099,
    (__int64)v2115,
    2,
    v182,
    v183,
    v184,
    v618,
    v758,
    v898,
    v1019,
    v1109,
    v1199,
    v1289,
    v1379,
    v1469,
    v1559,
    v1649,
    v1739,
    v1829,
    v1919,
    v2009);
  v2270 = 0;
  LOBYTE(v2195) = 0;
  *(_QWORD *)&v2196 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2195) = 3;
  v185 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v185, "target", v186, v187, v188, v189, v619, v759, v899);
  v2196 = (unsigned __int64)v185;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v2111);
  v2183 = 0;
  v2184 = 0;
  *(_QWORD *)&v2185 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2184 = 3;
  v190 = operator new(0x20u);
  v191 = (__int64 *)v2111;
  *(_QWORD *)v190 = v190 + 16;
  v192 = (__int64 *)v2110;
  strcpy((char *)(v190 + 16), "string");
  *(_QWORD *)(v190 + 8) = 6;
  v2185 = (unsigned __int64)v190;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v192,
    (__int64)v191,
    2,
    v193,
    v194,
    26478,
    v620,
    v760,
    v900,
    v1020,
    v1110,
    v1200,
    v1290,
    v1380,
    v1470,
    v1560,
    v1650,
    v1740,
    v1830,
    v1920,
    v2010);
  v2191 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v2113);
  v2187 = 0;
  v2188 = 0;
  *(_QWORD *)&v2189 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2188 = 3;
  v195 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v195, "Target hex address", v196, v197, v198, v199, v621, v761, v901);
  v2189 = (unsigned __int64)v195;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2192,
    (__int64)v2113,
    2,
    v200,
    v201,
    v202,
    v622,
    v762,
    v902,
    v1021,
    v1111,
    v1201,
    v1291,
    v1381,
    v1471,
    v1561,
    v1651,
    v1741,
    v1831,
    v1921,
    v2011);
  v2194 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2093,
    (__int64)v2110,
    2,
    v203,
    v204,
    v205,
    v623,
    v763,
    v903,
    v1022,
    v1112,
    v1202,
    v1292,
    v1382,
    v1472,
    v1562,
    v1652,
    v1742,
    v1832,
    v1922,
    v2012);
  v2199 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2092,
    v1653,
    2,
    v206,
    v207,
    v208,
    v624,
    v764,
    v904,
    v1023,
    v1113,
    v1203,
    v1293,
    v1383,
    v1473,
    v1563,
    v1653,
    v1743,
    v1833,
    v1923,
    v2013);
  v2272 = 0;
  LOBYTE(v2213) = 0;
  *(_QWORD *)&v2214 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2213) = 3;
  v209 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v209, "base", v210, v211, v212, v213, v625, v765, v905);
  v2214 = (unsigned __int64)v209;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v906);
  v2201 = 0;
  v2202 = 0;
  *(_QWORD *)&v2203 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2202 = 3;
  v214 = operator new(0x20u);
  *(_QWORD *)v214 = v214 + 16;
  strcpy((char *)(v214 + 16), "string");
  *(_QWORD *)(v214 + 8) = 6;
  v2203 = (unsigned __int64)v214;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v626,
    (__int64)v906,
    2,
    v215,
    v216,
    26478,
    (int)v626,
    v766,
    (int)v906,
    v1024,
    v1114,
    v1204,
    v1294,
    v1384,
    v1474,
    v1564,
    v1654,
    v1744,
    v1834,
    v1924,
    v2014);
  v2210 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1115);
  v2205 = 0;
  v2206 = 0;
  *(_QWORD *)&v2207 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2206 = 3;
  v217 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v217, "Base hex address", v218, v219, v220, v221, v627, v767, v907);
  v2207 = (unsigned __int64)v217;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2141,
    (__int64)v1115,
    2,
    v222,
    v223,
    v224,
    v628,
    v768,
    v908,
    v1025,
    (int)v1115,
    v1205,
    v1295,
    v1385,
    v1475,
    v1565,
    v1655,
    v1745,
    v1835,
    v1925,
    v2015);
  *((_QWORD *)&v2212 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2094,
    v629,
    2,
    v225,
    v226,
    v227,
    v629,
    v769,
    v909,
    v1026,
    v1116,
    v1206,
    v1296,
    v1386,
    v1476,
    v1566,
    v1656,
    v1746,
    v1836,
    v1926,
    v2016);
  v2217 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2273,
    v1747,
    2,
    v228,
    v229,
    v230,
    v630,
    v770,
    v910,
    v1027,
    v1117,
    v1207,
    v1297,
    v1387,
    v1477,
    v1567,
    v1657,
    v1747,
    v1837,
    v1927,
    v2017);
  v2273[2] = 0;
  v2231 = 0;
  *(_QWORD *)&v2232 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2231 = 3;
  v231 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v231, "tdelta", v232, v233, v234, v235, v631, v771, v911);
  v2232 = (unsigned __int64)v231;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1298);
  v2219 = 0;
  LOBYTE(v2220) = 0;
  *(_QWORD *)&v2221 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2220) = 3;
  v236 = operator new(0x20u);
  *(_QWORD *)v236 = v236 + 16;
  strcpy((char *)(v236 + 16), "number");
  *(_QWORD *)(v236 + 8) = 6;
  v2221 = (unsigned __int64)v236;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v772,
    (__int64)v1298,
    2,
    v237,
    v238,
    29285,
    v632,
    (__int64)v772,
    v912,
    v1028,
    v1118,
    v1208,
    (__int64)v1298,
    v1388,
    v1478,
    v1568,
    v1658,
    v1748,
    v1838,
    v1928,
    v2018);
  v2228 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1389);
  v2223 = 0;
  v2224 = 0;
  *(_QWORD *)&v2225 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2224 = 3;
  v239 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v239, "Target delta", v240, v241, v242, v243, v633, v773, v913);
  v2225 = (unsigned __int64)v239;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2229,
    (__int64)v1389,
    2,
    v244,
    v245,
    v246,
    v634,
    v774,
    v914,
    v1029,
    v1119,
    v1209,
    v1299,
    (int)v1389,
    v1479,
    v1569,
    v1659,
    v1749,
    v1839,
    v1929,
    v2019);
  *((_QWORD *)&v2230 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2095,
    v775,
    2,
    v247,
    v248,
    v249,
    v635,
    v775,
    v915,
    v1030,
    v1120,
    v1210,
    v1300,
    v1390,
    v1480,
    v1570,
    v1660,
    v1750,
    v1840,
    v1930,
    v2020);
  v250 = (char *)v2274;
  v2235 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2274,
    v1931,
    2,
    v251,
    v252,
    v253,
    v636,
    v776,
    v916,
    v1031,
    v1121,
    v1211,
    v1301,
    v1391,
    v1481,
    v1571,
    v1661,
    v1751,
    v1841,
    v1931,
    v2021);
  v2274[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2096,
    (__int64)&v2265,
    6,
    v254,
    v255,
    v256,
    v637,
    v777,
    v917,
    v1032,
    v1122,
    v1212,
    v1302,
    v1392,
    v1482,
    v1572,
    v1662,
    v1752,
    v1842,
    v1932,
    v2022);
  v2240 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2097,
    v1843,
    2,
    v257,
    v258,
    v259,
    v638,
    v778,
    v918,
    v1033,
    v1123,
    v1213,
    v1303,
    v1393,
    v1483,
    v1573,
    v1663,
    v1753,
    v1843,
    v1933,
    v2023);
  v2249 = 0;
  v2241 = 0;
  *(_QWORD *)&v2242 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2241 = 3;
  v260 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v260, "required", v261, v262, v263, v264, v639, v779, v919);
  v2242 = (unsigned __int64)v260;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1574);
  *((_QWORD *)&v2254 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v2142);
  v2256 = 0;
  LOBYTE(v2257) = 0;
  *(_QWORD *)&v2258 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2257) = 3;
  v265 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v265, "reftype", v266, v267, v268, v269, v640, v780, v920);
  v2259 = 0;
  *(_QWORD *)&v2260 = 0;
  v2258 = (unsigned __int64)v265;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2259 = 3;
  v270 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v270, "target", v271, v272, v273, v274, v641, v781, v921);
  v2261 = 0;
  *(_QWORD *)&v2262 = 0;
  v2260 = (unsigned __int64)v270;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2261 = 3;
  v275 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v275, "base", v276, v277, v278, v279, v642, v782, v922);
  v2263 = 0;
  *(_QWORD *)&v2264 = 0;
  v2262 = (unsigned __int64)v275;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2263 = 3;
  v280 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v280, "tdelta", v281, v282, v283, v284, v643, v783, v923);
  v2264 = (unsigned __int64)v280;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v285 = _mm_load_si128(&v2143);
  v2244 = 0;
  v2243 = v285;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2250,
    v2024,
    2,
    v286,
    v287,
    v288,
    v644,
    v784,
    v924,
    v1034,
    v1124,
    v1214,
    v1304,
    v1394,
    v1484,
    (int)v1574,
    v1664,
    v1754,
    v1844,
    v1934,
    v2024);
  *((_QWORD *)&v2251 + 1) = 0;
  LOBYTE(v2144) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2104,
    (__int64)&v2245,
    3,
    v289,
    v290,
    v291,
    v645,
    v785,
    v925,
    v1035,
    v1125,
    v1215,
    v1305,
    v1395,
    v1485,
    v1575,
    v1665,
    v1755,
    v1845,
    v1935,
    v2025);
  LOBYTE(v191) = v2281;
  v292 = (__int64 *)&v2252;
  v2281 = v2144;
  v293 = v2282;
  LOBYTE(v2144) = (_BYTE)v191;
  v2282 = v2145;
  v2145 = v293;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v292 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v292 != &v2245 );
  v294 = &v2263;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v294 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v294 != (char *)(v1576 - 24) );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v250 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v250 != &v2263 );
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
  v295 = _mm_load_si128((const __m128i *)&v2078);
  v2266 = 0;
  v2265 = ida_mcp::tools::offsets::`anonymous namespace'::handle_apply_offset_ex;
  v2267 = v295;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2267.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2267.m128i_i64[0])(&v2265, &v2265, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2275);
  v2276 = 0;
  v2277[0] = 0;
  v2275 = v2100;
  v2279 = 0;
  v2278 = v2102;
  v2280[0] = 0;
  v2281 = 0;
  v2282 = 0;
  v2283 = 0;
  v2284 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v926);
  v2201 = 0;
  v2202 = 0;
  *(_QWORD *)&v2203 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2202 = 3;
  v296 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v296, "object", v297, v298, v299, v300, v646, v786, (__int64)v926);
  v2203 = (unsigned __int64)v296;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2265,
    v927,
    2,
    v301,
    v302,
    v303,
    v647,
    v787,
    v927,
    v1036,
    v1126,
    v1216,
    v1306,
    v1396,
    v1486,
    v1576,
    v1666,
    v1756,
    v1846,
    v1936,
    v2026);
  v2267.m128i_i64[0] = 0;
  LOBYTE(v2245) = 0;
  *(_QWORD *)&v2246 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2245) = 3;
  v304 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v304, "properties", v305, v306, v307, v308, v648, v788, v928);
  v2246 = (unsigned __int64)v304;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1307);
  v2219 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1127);
  v2205 = 0;
  v2206 = 0;
  *(_QWORD *)&v2207 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2206 = 3;
  v309 = operator new(0x20u);
  *(_QWORD *)v309 = v309 + 16;
  strcpy((char *)(v309 + 16), "string");
  *(_QWORD *)(v309 + 8) = 6;
  v2207 = (unsigned __int64)v309;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1757,
    (__int64)v1127,
    2,
    v310,
    v311,
    26478,
    v649,
    v789,
    v929,
    v1037,
    (int)v1127,
    v1217,
    (__int64)v1307,
    v1397,
    v1487,
    v1577,
    v1667,
    (char)v1757,
    v1847,
    v1937,
    v2027);
  *((_QWORD *)&v2214 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v650);
  v2210 = 0;
  LOBYTE(v2211) = 0;
  *(_QWORD *)&v2212 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2211) = 3;
  v312 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v312, "Hex address", v313, v314, v315, v316, (int)v650, v790, v930);
  v2212 = (unsigned __int64)v312;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2094,
    v651,
    2,
    v317,
    v318,
    v319,
    v651,
    v791,
    v931,
    v1038,
    v1128,
    v1218,
    v1308,
    v1398,
    v1488,
    v1578,
    v1668,
    v1758,
    v1848,
    v1938,
    v2028);
  v2217 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2106,
    v1759,
    2,
    v320,
    v321,
    v322,
    v652,
    v792,
    v932,
    v1039,
    v1129,
    v1219,
    v1309,
    v1399,
    v1489,
    v1579,
    v1669,
    v1759,
    v1849,
    v1939,
    v2029);
  *((_QWORD *)&v2221 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2030,
    v1310,
    2,
    v323,
    v324,
    v325,
    v653,
    v793,
    v933,
    v1040,
    v1130,
    v1220,
    v1310,
    v1400,
    v1490,
    v1580,
    v1670,
    v1760,
    v1850,
    v1940,
    (__int64)v2030);
  *((_QWORD *)&v2242 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1851);
  *((_QWORD *)&v2237 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1401);
  v2223 = 0;
  v2224 = 0;
  *(_QWORD *)&v2225 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2224 = 3;
  v326 = operator new(0x20u);
  *(_QWORD *)v326 = v326 + 16;
  strcpy((char *)(v326 + 16), "number");
  *(_QWORD *)(v326 + 8) = 6;
  v2225 = (unsigned __int64)v326;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1941,
    (__int64)v1401,
    2,
    v327,
    v328,
    29285,
    v654,
    v794,
    v934,
    v1041,
    v1131,
    v1221,
    v1311,
    (int)v1401,
    v1491,
    v1581,
    v1671,
    v1761,
    (__int64)v1851,
    (int)v1941,
    v2031);
  *((_QWORD *)&v2232 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v795);
  v2228 = 0;
  LOBYTE(v2229) = 0;
  *(_QWORD *)&v2230 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2229) = 3;
  v329 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v329, "Operand number", v330, v331, v332, v333, v655, (int)v795, v935);
  v2230 = (unsigned __int64)v329;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2095,
    v796,
    2,
    v334,
    v335,
    v336,
    v656,
    v796,
    v936,
    v1042,
    v1132,
    v1222,
    v1312,
    v1402,
    v1492,
    v1582,
    v1672,
    v1762,
    v1852,
    v1942,
    v2032);
  v2235 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2096,
    v1943,
    2,
    v337,
    v338,
    v339,
    v657,
    v797,
    v937,
    v1043,
    v1133,
    v1223,
    v1313,
    v1403,
    v1493,
    v1583,
    v1673,
    v1763,
    v1853,
    v1943,
    v2033);
  v2240 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2109,
    v1854,
    2,
    v340,
    v341,
    v342,
    v658,
    v798,
    v938,
    v1044,
    v1134,
    v1224,
    v1314,
    v1404,
    v1494,
    v1584,
    v1674,
    v1764,
    v1854,
    v1944,
    v2034);
  v2244 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2097,
    v2035,
    2,
    v343,
    v344,
    v345,
    v659,
    v799,
    v939,
    v1045,
    v1135,
    v1225,
    v1315,
    v1405,
    v1495,
    v1585,
    v1675,
    v1765,
    v1855,
    v1945,
    v2035);
  v2249 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2098,
    (__int64)&v2245,
    2,
    v346,
    v347,
    v348,
    v660,
    v800,
    v940,
    v1046,
    v1136,
    v1226,
    v1316,
    v1406,
    v1496,
    v1586,
    v1676,
    v1766,
    v1856,
    v1946,
    v2036);
  v2268 = 0;
  LOBYTE(v2253) = 0;
  *(_QWORD *)&v2254 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2253) = 3;
  v349 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v349, "required", v350, v351, v352, v353, v661, v801, v941);
  v2254 = (unsigned __int64)v349;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1677);
  *((_QWORD *)&v2196 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v2093);
  v2199 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v354 = _mm_load_si128(&v2143);
  v2256 = 0;
  v2255 = v354;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2099,
    v1587,
    2,
    v355,
    v356,
    v357,
    v662,
    v802,
    v942,
    v1047,
    v1137,
    v1227,
    v1317,
    v1407,
    v1497,
    v1587,
    (int)v1677,
    v1767,
    v1857,
    v1947,
    v2037);
  v2270 = 0;
  LOBYTE(v2144) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2104,
    (__int64)&v2265,
    3,
    v358,
    v359,
    v360,
    v663,
    v803,
    v943,
    v1048,
    v1138,
    v1228,
    v1318,
    v1408,
    v1498,
    v1588,
    v1678,
    v1768,
    v1858,
    v1948,
    v2038);
  v361 = v2281;
  v2281 = v2144;
  v362 = v2282;
  LOBYTE(v2144) = v361;
  v2282 = v2145;
  v2145 = v362;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v363 = v2092;
  do
  {
    v363 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v363 != &v2265 );
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
  v364 = _mm_load_si128((const __m128i *)&v2078);
  v2266 = 0;
  v2265 = ida_mcp::tools::offsets::`anonymous namespace'::handle_calc_offset_base;
  v2267 = v364;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2267.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2267.m128i_i64[0])(&v2265, &v2265, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2275);
  v2276 = 0;
  v2277[0] = 0;
  v2275 = v2100;
  v2279 = 0;
  v2278 = v2102;
  v2280[0] = 0;
  v2281 = 0;
  v2282 = 0;
  v2283 = 0;
  v2284 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v944);
  v2201 = 0;
  v2202 = 0;
  *(_QWORD *)&v2203 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2202 = 3;
  v365 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v365, "object", v366, v367, v368, v369, v664, v804, (__int64)v944);
  v2203 = (unsigned __int64)v365;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2265,
    v945,
    2,
    v370,
    v371,
    v372,
    v665,
    v805,
    v945,
    v1049,
    v1139,
    v1229,
    v1319,
    v1409,
    v1499,
    v1589,
    v1679,
    v1769,
    v1859,
    v1949,
    v2039);
  v2267.m128i_i64[0] = 0;
  LOBYTE(v2245) = 0;
  *(_QWORD *)&v2246 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2245) = 3;
  v373 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v373, "properties", v374, v375, v376, v377, v666, v806, v946);
  v2246 = (unsigned __int64)v373;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1320);
  v2219 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1140);
  v2205 = 0;
  v2206 = 0;
  *(_QWORD *)&v2207 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2206 = 3;
  v378 = operator new(0x20u);
  *(_QWORD *)v378 = v378 + 16;
  strcpy((char *)(v378 + 16), "string");
  *(_QWORD *)(v378 + 8) = 6;
  v2207 = (unsigned __int64)v378;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1770,
    (__int64)v1140,
    2,
    v379,
    v380,
    v381,
    v667,
    v807,
    v947,
    v1050,
    (int)v1140,
    v1230,
    (__int64)v1320,
    v1410,
    v1500,
    v1590,
    v1680,
    (char)v1770,
    v1860,
    v1950,
    v2040);
  *((_QWORD *)&v2214 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v668);
  v2210 = 0;
  LOBYTE(v2211) = 0;
  *(_QWORD *)&v2212 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2211) = 3;
  v382 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v382, "Hex address", v383, v384, v385, v386, (int)v668, v808, v948);
  v2212 = (unsigned __int64)v382;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2094,
    v669,
    2,
    v387,
    v388,
    v389,
    v669,
    v809,
    v949,
    v1051,
    v1141,
    v1231,
    v1321,
    v1411,
    v1501,
    v1591,
    v1681,
    v1771,
    v1861,
    v1951,
    v2041);
  v2217 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2106,
    v1772,
    2,
    v390,
    v391,
    v392,
    v670,
    v810,
    v950,
    v1052,
    v1142,
    v1232,
    v1322,
    v1412,
    v1502,
    v1592,
    v1682,
    v1772,
    v1862,
    v1952,
    v2042);
  *((_QWORD *)&v2221 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2043,
    v1323,
    2,
    v393,
    v394,
    v395,
    v671,
    v811,
    v951,
    v1053,
    v1143,
    v1233,
    v1323,
    v1413,
    v1503,
    v1593,
    v1683,
    v1773,
    v1863,
    v1953,
    (__int64)v2043);
  *((_QWORD *)&v2242 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1864);
  *((_QWORD *)&v2237 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1414);
  v2223 = 0;
  v2224 = 0;
  *(_QWORD *)&v2225 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2224 = 3;
  v396 = operator new(0x20u);
  *(_QWORD *)v396 = v396 + 16;
  strcpy((char *)(v396 + 16), "number");
  *(_QWORD *)(v396 + 8) = 6;
  v2225 = (unsigned __int64)v396;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1954,
    (__int64)v1414,
    2,
    v397,
    v398,
    v399,
    v672,
    v812,
    v952,
    v1054,
    v1144,
    v1234,
    v1324,
    (int)v1414,
    v1504,
    v1594,
    v1684,
    v1774,
    (__int64)v1864,
    (int)v1954,
    v2044);
  *((_QWORD *)&v2232 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v813);
  v2228 = 0;
  LOBYTE(v2229) = 0;
  *(_QWORD *)&v2230 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2229) = 3;
  v400 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v400, "Operand number", v401, v402, v403, v404, v673, (int)v813, v953);
  v2230 = (unsigned __int64)v400;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2095,
    v814,
    2,
    v405,
    v406,
    v407,
    v674,
    v814,
    v954,
    v1055,
    v1145,
    v1235,
    v1325,
    v1415,
    v1505,
    v1595,
    v1685,
    v1775,
    v1865,
    v1955,
    v2045);
  v2235 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2096,
    v1956,
    2,
    v408,
    v409,
    v410,
    v675,
    v815,
    v955,
    v1056,
    v1146,
    v1236,
    v1326,
    v1416,
    v1506,
    v1596,
    v1686,
    v1776,
    v1866,
    v1956,
    v2046);
  v2240 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2109,
    v1867,
    2,
    v411,
    v412,
    v413,
    v676,
    v816,
    v956,
    v1057,
    v1147,
    v1237,
    v1327,
    v1417,
    v1507,
    v1597,
    v1687,
    v1777,
    v1867,
    v1957,
    v2047);
  v2244 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2097,
    v2048,
    2,
    v414,
    v415,
    v416,
    v677,
    v817,
    v957,
    v1058,
    v1148,
    v1238,
    v1328,
    v1418,
    v1508,
    v1598,
    v1688,
    v1778,
    v1868,
    v1958,
    v2048);
  v2249 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2098,
    (__int64)&v2245,
    2,
    v417,
    v418,
    v419,
    v678,
    v818,
    v958,
    v1059,
    v1149,
    v1239,
    v1329,
    v1419,
    v1509,
    v1599,
    v1689,
    v1779,
    v1869,
    v1959,
    v2049);
  v2268 = 0;
  LOBYTE(v2253) = 0;
  *(_QWORD *)&v2254 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2253) = 3;
  v420 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v420, "required", v421, v422, v423, v424, v679, v819, v959);
  v2254 = (unsigned __int64)v420;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1690);
  *((_QWORD *)&v2196 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v2093);
  v2199 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v425 = _mm_load_si128(&v2143);
  v2256 = 0;
  v2255 = v425;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2099,
    v1600,
    2,
    v426,
    v427,
    v428,
    v680,
    v820,
    v960,
    v1060,
    v1150,
    v1240,
    v1330,
    v1420,
    v1510,
    v1600,
    (int)v1690,
    v1780,
    v1870,
    v1960,
    v2050);
  v2270 = 0;
  LOBYTE(v2144) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2104,
    (__int64)&v2265,
    3,
    v429,
    v430,
    v431,
    v681,
    v821,
    v961,
    v1061,
    v1151,
    v1241,
    v1331,
    v1421,
    v1511,
    v1601,
    v1691,
    v1781,
    v1871,
    v1961,
    v2051);
  v432 = v2281;
  v2281 = v2144;
  v433 = v2282;
  LOBYTE(v2144) = v432;
  v2282 = v2145;
  v2145 = v433;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v434 = v2092;
  do
  {
    v434 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v434 != &v2265 );
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
  v435 = _mm_load_si128((const __m128i *)&v2078);
  v2266 = 0;
  v2265 = ida_mcp::tools::offsets::`anonymous namespace'::handle_calc_reference_target;
  v2267 = v435;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2267.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2267.m128i_i64[0])(&v2265, &v2265, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2275);
  v2276 = 0;
  v2277[0] = 0;
  v2275 = v2100;
  v2279 = 0;
  v2278 = v2102;
  v2280[0] = 0;
  v2281 = 0;
  v2282 = 0;
  v2283 = 0;
  v2284 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v962);
  v2201 = 0;
  v2202 = 0;
  *(_QWORD *)&v2203 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2202 = 3;
  v436 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v436, "object", v437, v438, v439, v440, v682, v822, (__int64)v962);
  v2203 = (unsigned __int64)v436;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2265,
    v963,
    2,
    v441,
    v442,
    v443,
    v683,
    v823,
    v963,
    v1062,
    v1152,
    v1242,
    v1332,
    v1422,
    v1512,
    v1602,
    v1692,
    v1782,
    v1872,
    v1962,
    v2052);
  v2267.m128i_i64[0] = 0;
  LOBYTE(v2245) = 0;
  *(_QWORD *)&v2246 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2245) = 3;
  v444 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v444, "properties", v445, v446, v447, v448, v684, v824, v964);
  v2246 = (unsigned __int64)v444;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1333);
  v2219 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1153);
  v2205 = 0;
  v2206 = 0;
  *(_QWORD *)&v2207 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2206 = 3;
  v449 = operator new(0x20u);
  *(_QWORD *)v449 = v449 + 16;
  strcpy((char *)(v449 + 16), "string");
  *(_QWORD *)(v449 + 8) = 6;
  v2207 = (unsigned __int64)v449;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1783,
    (__int64)v1153,
    2,
    v450,
    v451,
    26478,
    v685,
    v825,
    v965,
    v1063,
    (int)v1153,
    v1243,
    (__int64)v1333,
    v1423,
    v1513,
    v1603,
    v1693,
    (char)v1783,
    v1873,
    v1963,
    v2053);
  *((_QWORD *)&v2214 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v686);
  v2210 = 0;
  LOBYTE(v2211) = 0;
  *(_QWORD *)&v2212 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2211) = 3;
  v452 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v452, "Hex address", v453, v454, v455, v456, (int)v686, v826, v966);
  v2212 = (unsigned __int64)v452;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2094,
    v687,
    2,
    v457,
    v458,
    v459,
    v687,
    v827,
    v967,
    v1064,
    v1154,
    v1244,
    v1334,
    v1424,
    v1514,
    v1604,
    v1694,
    v1784,
    v1874,
    v1964,
    v2054);
  v2217 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2106,
    v1785,
    2,
    v460,
    v461,
    v462,
    v688,
    v828,
    v968,
    v1065,
    v1155,
    v1245,
    v1335,
    v1425,
    v1515,
    v1605,
    v1695,
    v1785,
    v1875,
    v1965,
    v2055);
  *((_QWORD *)&v2221 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2056,
    v1336,
    2,
    v463,
    v464,
    v465,
    v689,
    v829,
    v969,
    v1066,
    v1156,
    v1246,
    v1336,
    v1426,
    v1516,
    v1606,
    v1696,
    v1786,
    v1876,
    v1966,
    (__int64)v2056);
  *((_QWORD *)&v2242 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1877);
  *((_QWORD *)&v2237 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1427);
  v2223 = 0;
  v2224 = 0;
  *(_QWORD *)&v2225 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2224 = 3;
  v466 = operator new(0x20u);
  *(_QWORD *)v466 = v466 + 16;
  strcpy((char *)(v466 + 16), "number");
  *(_QWORD *)(v466 + 8) = 6;
  v2225 = (unsigned __int64)v466;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1967,
    (__int64)v1427,
    2,
    v467,
    v468,
    v469,
    v690,
    v830,
    v970,
    v1067,
    v1157,
    v1247,
    v1337,
    (int)v1427,
    v1517,
    v1607,
    v1697,
    v1787,
    (__int64)v1877,
    (int)v1967,
    v2057);
  *((_QWORD *)&v2232 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v831);
  v2228 = 0;
  LOBYTE(v2229) = 0;
  *(_QWORD *)&v2230 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2229) = 3;
  v470 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v470, "Operand number", v471, v472, v473, v474, v691, (int)v831, v971);
  v2230 = (unsigned __int64)v470;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2095,
    v832,
    2,
    v475,
    v476,
    v477,
    v692,
    v832,
    v972,
    v1068,
    v1158,
    v1248,
    v1338,
    v1428,
    v1518,
    v1608,
    v1698,
    v1788,
    v1878,
    v1968,
    v2058);
  v2235 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2096,
    v1969,
    2,
    v478,
    v479,
    v480,
    v693,
    v833,
    v973,
    v1069,
    v1159,
    v1249,
    v1339,
    v1429,
    v1519,
    v1609,
    v1699,
    v1789,
    v1879,
    v1969,
    v2059);
  v2240 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2109,
    v1880,
    2,
    v481,
    v482,
    v483,
    v694,
    v834,
    v974,
    v1070,
    v1160,
    v1250,
    v1340,
    v1430,
    v1520,
    v1610,
    v1700,
    v1790,
    v1880,
    v1970,
    v2060);
  v2244 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2097,
    v2061,
    2,
    v484,
    v485,
    v486,
    v695,
    v835,
    v975,
    v1071,
    v1161,
    v1251,
    v1341,
    v1431,
    v1521,
    v1611,
    v1701,
    v1791,
    v1881,
    v1971,
    v2061);
  v2249 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2098,
    (__int64)&v2245,
    2,
    v487,
    v488,
    v489,
    v696,
    v836,
    v976,
    v1072,
    v1162,
    v1252,
    v1342,
    v1432,
    v1522,
    v1612,
    v1702,
    v1792,
    v1882,
    v1972,
    v2062);
  v2268 = 0;
  LOBYTE(v2253) = 0;
  *(_QWORD *)&v2254 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2253) = 3;
  v490 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v490, "required", v491, v492, v493, v494, v697, v837, v977);
  v2254 = (unsigned __int64)v490;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1703);
  *((_QWORD *)&v2196 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v2093);
  v2199 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v495 = _mm_load_si128(&v2143);
  v2256 = 0;
  v2255 = v495;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2099,
    v1613,
    2,
    v496,
    v497,
    v498,
    v698,
    v838,
    v978,
    v1073,
    v1163,
    v1253,
    v1343,
    v1433,
    v1523,
    v1613,
    (int)v1703,
    v1793,
    v1883,
    v1973,
    v2063);
  v2270 = 0;
  LOBYTE(v2144) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2104,
    (__int64)&v2265,
    3,
    v499,
    v500,
    v501,
    v699,
    v839,
    v979,
    v1074,
    v1164,
    v1254,
    v1344,
    v1434,
    v1524,
    v1614,
    v1704,
    v1794,
    v1884,
    v1974,
    v2064);
  v502 = v2281;
  v2281 = v2144;
  v503 = v2282;
  LOBYTE(v2144) = v502;
  v2282 = v2145;
  v2145 = v503;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v504 = v2092;
  do
  {
    v504 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v504 != &v2265 );
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
  v505 = _mm_load_si128((const __m128i *)&v2078);
  v2266 = 0;
  v2265 = ida_mcp::tools::offsets::`anonymous namespace'::handle_calc_reference_base;
  v2267 = v505;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2267.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2267.m128i_i64[0])(&v2265, &v2265, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2275);
  v2276 = 0;
  v2277[0] = 0;
  v2275 = v2100;
  v2279 = 0;
  v2278 = v2102;
  v2280[0] = 0;
  v2281 = 0;
  v2282 = 0;
  v2283 = 0;
  v2284 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v980);
  v2201 = 0;
  v2202 = 0;
  *(_QWORD *)&v2203 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2202 = 3;
  v506 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v506, "object", v507, v508, v509, v510, v700, v840, (__int64)v980);
  v2203 = (unsigned __int64)v506;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2265,
    v981,
    2,
    v511,
    v512,
    v513,
    v701,
    v841,
    v981,
    v1075,
    v1165,
    v1255,
    v1345,
    v1435,
    v1525,
    v1615,
    v1705,
    v1795,
    v1885,
    v1975,
    v2065);
  v2267.m128i_i64[0] = 0;
  LOBYTE(v2245) = 0;
  *(_QWORD *)&v2246 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2245) = 3;
  v514 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v514, "properties", v515, v516, v517, v518, v702, v842, v982);
  v2246 = (unsigned __int64)v514;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1346);
  v2219 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1166);
  v2205 = 0;
  v2206 = 0;
  *(_QWORD *)&v2207 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2206 = 3;
  v519 = operator new(0x20u);
  *(_QWORD *)v519 = v519 + 16;
  strcpy((char *)(v519 + 16), "string");
  *(_QWORD *)(v519 + 8) = 6;
  v2207 = (unsigned __int64)v519;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1796,
    (__int64)v1166,
    2,
    v520,
    v521,
    v522,
    v703,
    v843,
    v983,
    v1076,
    (int)v1166,
    v1256,
    (__int64)v1346,
    v1436,
    v1526,
    v1616,
    v1706,
    (char)v1796,
    v1886,
    v1976,
    v2066);
  *((_QWORD *)&v2214 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v704);
  v2210 = 0;
  LOBYTE(v2211) = 0;
  *(_QWORD *)&v2212 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2211) = 3;
  v523 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v523, "Hex address", v524, v525, v526, v527, (int)v704, v844, v984);
  v2212 = (unsigned __int64)v523;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2094,
    v705,
    2,
    v528,
    v529,
    v530,
    v705,
    v845,
    v985,
    v1077,
    v1167,
    v1257,
    v1347,
    v1437,
    v1527,
    v1617,
    v1707,
    v1797,
    v1887,
    v1977,
    v2067);
  v2217 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2106,
    v1798,
    2,
    v531,
    v532,
    v533,
    v706,
    v846,
    v986,
    v1078,
    v1168,
    v1258,
    v1348,
    v1438,
    v1528,
    v1618,
    v1708,
    v1798,
    v1888,
    v1978,
    v2068);
  *((_QWORD *)&v2221 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2069,
    v1349,
    2,
    v534,
    v535,
    v536,
    v707,
    v847,
    v987,
    v1079,
    v1169,
    v1259,
    v1349,
    v1439,
    v1529,
    v1619,
    v1709,
    v1799,
    v1889,
    v1979,
    (__int64)v2069);
  *((_QWORD *)&v2242 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1890);
  *((_QWORD *)&v2237 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1440);
  v2223 = 0;
  v2224 = 0;
  *(_QWORD *)&v2225 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2224 = 3;
  v537 = operator new(0x20u);
  *(_QWORD *)v537 = v537 + 16;
  strcpy((char *)(v537 + 16), "number");
  *(_QWORD *)(v537 + 8) = 6;
  v2225 = (unsigned __int64)v537;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1980,
    (__int64)v1440,
    2,
    v538,
    v539,
    v540,
    v708,
    v848,
    v988,
    v1080,
    v1170,
    v1260,
    v1350,
    (int)v1440,
    v1530,
    v1620,
    v1710,
    v1800,
    (__int64)v1890,
    (int)v1980,
    v2070);
  *((_QWORD *)&v2232 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v849);
  v2228 = 0;
  LOBYTE(v2229) = 0;
  *(_QWORD *)&v2230 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2229) = 3;
  v541 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v541, "Operand number", v542, v543, v544, v545, v709, (int)v849, v989);
  v2230 = (unsigned __int64)v541;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2095,
    v850,
    2,
    v546,
    v547,
    v548,
    v710,
    v850,
    v990,
    v1081,
    v1171,
    v1261,
    v1351,
    v1441,
    v1531,
    v1621,
    v1711,
    v1801,
    v1891,
    v1981,
    v2071);
  v2235 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2096,
    v1982,
    2,
    v549,
    v550,
    v551,
    v711,
    v851,
    v991,
    v1082,
    v1172,
    v1262,
    v1352,
    v1442,
    v1532,
    v1622,
    v1712,
    v1802,
    v1892,
    v1982,
    v2072);
  v2240 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2109,
    v1893,
    2,
    v552,
    v553,
    v554,
    v712,
    v852,
    v992,
    v1083,
    v1173,
    v1263,
    v1353,
    v1443,
    v1533,
    v1623,
    v1713,
    v1803,
    v1893,
    v1983,
    v2073);
  v2244 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2097,
    v2074,
    2,
    v555,
    v556,
    v557,
    v713,
    v853,
    v993,
    v1084,
    v1174,
    v1264,
    v1354,
    v1444,
    v1534,
    v1624,
    v1714,
    v1804,
    v1894,
    v1984,
    v2074);
  v2249 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2098,
    (__int64)&v2245,
    2,
    v558,
    v559,
    v560,
    v714,
    v854,
    v994,
    v1085,
    v1175,
    v1265,
    v1355,
    v1445,
    v1535,
    v1625,
    v1715,
    v1805,
    v1895,
    v1985,
    v2075);
  v2268 = 0;
  LOBYTE(v2253) = 0;
  *(_QWORD *)&v2254 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2253) = 3;
  v561 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v561, "required", v562, v563, v564, v565, v715, v855, v995);
  v2254 = (unsigned __int64)v561;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1716);
  *((_QWORD *)&v2196 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v2093);
  v2199 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v566 = _mm_load_si128(&v2143);
  v2256 = 0;
  v2255 = v566;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2099,
    v1626,
    2,
    v567,
    v568,
    v569,
    v716,
    v856,
    v996,
    v1086,
    v1176,
    v1266,
    v1356,
    v1446,
    v1536,
    v1626,
    (int)v1716,
    v1806,
    v1896,
    v1986,
    v2076);
  v2270 = 0;
  LOBYTE(v2144) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2104,
    (__int64)&v2265,
    3,
    v570,
    v571,
    v572,
    v717,
    v857,
    v997,
    v1087,
    v1177,
    v1267,
    v1357,
    v1447,
    v1537,
    v1627,
    v1717,
    v1807,
    v1897,
    v1987,
    v2077);
  v573 = v2281;
  v2281 = v2144;
  v574 = v2282;
  LOBYTE(v2144) = v573;
  v2282 = v2145;
  v2145 = v574;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v575 = v2092;
  do
  {
    v575 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v575 != &v2265 );
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
  v576 = _mm_load_si128((const __m128i *)&v2078);
  v2266 = 0;
  v2265 = ida_mcp::tools::offsets::`anonymous namespace'::handle_get_default_reftype;
  v2267 = v576;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2267.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2267.m128i_i64[0])(&v2265, &v2265, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2275);
  return v2285 - __readfsqword(0x28u);
}

