unsigned __int64 __fastcall ida_mcp::tools::debugger::register_tools(
        ida_mcp::tools::debugger *this,
        ida_mcp::mcp::McpServer *a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // si
  char *v8; // r14
  __int64 v9; // rdx
  __m128i si128; // xmm2
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // si
  char *v17; // r14
  __int64 v18; // rax
  __m128i v19; // xmm3
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // si
  char *v26; // r14
  __int64 v27; // rax
  __m128i v28; // xmm4
  __int64 *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 *v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 *v60; // r14
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __m128i v65; // xmm0
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  char *v72; // r14
  __int64 v73; // rax
  __m128i v74; // xmm5
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __m128i v78; // xmm0
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __m128i v82; // xmm0
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  char v89; // si
  char *v90; // r14
  __int64 v91; // rax
  __m128i v92; // xmm6
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 *v97; // rsi
  __int64 *v98; // rdi
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 *v101; // r14
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __m128i v121; // xmm0
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  char *v128; // r14
  __int64 v129; // rax
  __m128i v130; // xmm7
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __m128i v134; // xmm0
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __m128i v138; // xmm0
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  char v145; // si
  char *v146; // r14
  __int64 v147; // rax
  __m128i v148; // xmm2
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rax
  __int64 *v153; // rsi
  __int64 *v154; // rdi
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 *v157; // r14
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __m128i v177; // xmm0
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  char *v184; // r14
  __int64 v185; // rax
  __m128i v186; // xmm3
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 *v190; // r14
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rax
  __int64 *v196; // rsi
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 *v200; // r14
  __int64 v201; // rdx
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
  __int64 v219; // rax
  __int64 v220; // rsi
  __int64 *v221; // rdi
  __int64 v222; // rcx
  __int64 v223; // r9
  __int64 *v224; // r14
  __int64 v225; // rdx
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 *v238; // r14
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // r8
  __int64 v242; // r9
  __int64 v243; // rax
  __int64 *v244; // rsi
  char *v245; // rdi
  __int64 v246; // rcx
  __int64 v247; // r9
  __int64 *v248; // r14
  __int64 v249; // rdx
  __int64 v250; // rcx
  __int64 v251; // r8
  __int64 v252; // r9
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  __int64 v256; // rcx
  __int64 v257; // r8
  __int64 v258; // r9
  __int64 v259; // rcx
  __int64 v260; // r8
  __int64 v261; // r9
  __int64 v262; // rcx
  __int64 v263; // r8
  __int64 v264; // r9
  __int64 v265; // rcx
  __int64 v266; // r8
  __int64 v267; // r9
  __m128i v268; // xmm0
  __int64 v269; // rcx
  __int64 v270; // r8
  __int64 v271; // r9
  __int64 v272; // rcx
  __int64 v273; // r8
  __int64 v274; // r9
  char *v275; // r14
  __int64 v276; // rax
  __m128i *v277; // r14
  __m128i v278; // xmm4
  __int64 v279; // rcx
  __int64 v280; // r8
  __int64 v281; // r9
  __m128i v282; // xmm0
  __int64 v283; // rcx
  __int64 v284; // r8
  __int64 v285; // r9
  __m128i v286; // xmm0
  __int64 v287; // rcx
  __int64 v288; // r8
  __int64 v289; // r9
  __int64 v290; // rcx
  __int64 v291; // r8
  __int64 v292; // r9
  char v293; // si
  char *v294; // r14
  __int64 v295; // rax
  __m128i v296; // xmm5
  __int64 v297; // rcx
  __int64 v298; // r8
  __int64 v299; // r9
  __m128i v300; // xmm0
  __int64 v301; // rcx
  __int64 v302; // r8
  __int64 v303; // r9
  __m128i v304; // xmm0
  __int64 v305; // rcx
  __int64 v306; // r8
  __int64 v307; // r9
  __int64 v308; // rcx
  __int64 v309; // r8
  __int64 v310; // r9
  char v311; // si
  char *v312; // r14
  __int64 v313; // rax
  __m128i v314; // xmm6
  __int64 v315; // rcx
  __int64 v316; // r8
  __int64 v317; // r9
  __m128i v318; // xmm0
  __int64 v319; // rcx
  __int64 v320; // r8
  __int64 v321; // r9
  __m128i v322; // xmm0
  __int64 v323; // rcx
  __int64 v324; // r8
  __int64 v325; // r9
  __int64 v326; // rcx
  __int64 v327; // r8
  __int64 v328; // r9
  char v329; // si
  char *v330; // r14
  __int64 v331; // rax
  __m128i v332; // xmm7
  __int64 v333; // rcx
  __int64 v334; // r8
  __int64 v335; // r9
  __m128i v336; // xmm0
  __int64 v337; // rcx
  __int64 v338; // r8
  __int64 v339; // r9
  __m128i v340; // xmm0
  __int64 v341; // rcx
  __int64 v342; // r8
  __int64 v343; // r9
  __int64 v344; // rcx
  __int64 v345; // r8
  __int64 v346; // r9
  char v347; // si
  char *v348; // r14
  __int64 v349; // rax
  __m128i v350; // xmm2
  __int64 v351; // rcx
  __int64 v352; // r8
  __int64 v353; // r9
  __m128i v354; // xmm0
  __int64 v355; // rcx
  __int64 v356; // r8
  __int64 v357; // r9
  __m128i v358; // xmm0
  __int64 v359; // rcx
  __int64 v360; // r8
  __int64 v361; // r9
  __int64 v362; // rcx
  __int64 v363; // r8
  __int64 v364; // r9
  char v365; // si
  char *v366; // r14
  __int64 v367; // rax
  __m128i v368; // xmm3
  __int64 v369; // rcx
  __int64 v370; // r8
  __int64 v371; // r9
  __int64 v372; // rax
  __int64 *v373; // rdi
  __int64 *v374; // rsi
  __int64 v375; // rcx
  __int64 v376; // r8
  __int64 v377; // r9
  __int64 *v378; // r14
  __int64 v379; // rdx
  __int64 v380; // rcx
  __int64 v381; // r8
  __int64 v382; // r9
  __int64 v383; // rcx
  __int64 v384; // r8
  __int64 v385; // r9
  __int64 v386; // rcx
  __int64 v387; // r8
  __int64 v388; // r9
  __int64 v389; // rcx
  __int64 v390; // r8
  __int64 v391; // r9
  __int64 v392; // rcx
  __int64 v393; // r8
  __int64 v394; // r9
  __int64 v395; // rcx
  __int64 v396; // r8
  __int64 v397; // r9
  __m128i v398; // xmm0
  __int64 v399; // rcx
  __int64 v400; // r8
  __int64 v401; // r9
  __int64 v402; // rcx
  __int64 v403; // r8
  __int64 v404; // r9
  char *v405; // r14
  __int64 v406; // rax
  __m128i v407; // xmm4
  __int64 v408; // rcx
  __int64 v409; // r8
  __int64 v410; // r9
  __m128i v411; // xmm0
  __int64 v412; // rcx
  __int64 v413; // r8
  __int64 v414; // r9
  __m128i v415; // xmm0
  __int64 v416; // rcx
  __int64 v417; // r8
  __int64 v418; // r9
  __int64 v419; // rcx
  __int64 v420; // r8
  __int64 v421; // r9
  char v422; // si
  char *v423; // r14
  __int64 v424; // rax
  __m128i v425; // xmm5
  __int64 v426; // rcx
  __int64 v427; // r8
  __int64 v428; // r9
  __int64 v429; // rax
  __int64 *v430; // rdi
  __int64 *v431; // rsi
  __int64 v432; // rcx
  __int64 v433; // r8
  __int64 v434; // r9
  __int64 *v435; // r14
  __int64 v436; // rdx
  __int64 v437; // rcx
  __int64 v438; // r8
  __int64 v439; // r9
  __int64 v440; // rcx
  __int64 v441; // r8
  __int64 v442; // r9
  __int64 v443; // rcx
  __int64 v444; // r8
  __int64 v445; // r9
  __int64 v446; // rcx
  __int64 v447; // r8
  __int64 v448; // r9
  __int64 v449; // rax
  __int64 *v450; // rsi
  __int64 v451; // rcx
  __int64 v452; // r8
  __int64 v453; // r9
  __int64 v454; // rax
  __int64 *v455; // r14
  __int64 v456; // rdx
  __int64 v457; // rcx
  __int64 v458; // r8
  __int64 v459; // r9
  __int64 v460; // rcx
  __int64 v461; // r8
  __int64 v462; // r9
  __int64 *v463; // r14
  __int64 v464; // rdx
  __int64 v465; // rcx
  __int64 v466; // r8
  __int64 v467; // r9
  __int64 *v468; // r14
  __int64 v469; // rdx
  __int64 v470; // rcx
  __int64 v471; // r8
  __int64 v472; // r9
  __int64 *v473; // r14
  __int64 v474; // rdx
  __int64 v475; // rcx
  __int64 v476; // r8
  __int64 v477; // r9
  __int64 *v478; // r14
  __int64 v479; // rdx
  __int64 v480; // rcx
  __int64 v481; // r8
  __int64 v482; // r9
  __int64 *v483; // r14
  __int64 v484; // rdx
  __int64 v485; // rcx
  __int64 v486; // r8
  __int64 v487; // r9
  __m128i v488; // xmm0
  __int64 v489; // rcx
  __int64 v490; // r8
  __int64 v491; // r9
  __int64 v492; // rcx
  __int64 v493; // r8
  __int64 v494; // r9
  __int64 v495; // rcx
  __int64 v496; // r8
  __int64 v497; // r9
  __int64 v498; // rcx
  __int64 v499; // r8
  __int64 v500; // r9
  __int64 v501; // rcx
  __int64 v502; // r8
  __int64 v503; // r9
  __m128i v504; // xmm0
  __int64 v505; // rcx
  __int64 v506; // r8
  __int64 v507; // r9
  __int64 v508; // rcx
  __int64 v509; // r8
  __int64 v510; // r9
  __m128i *v511; // r14
  __int64 v512; // rax
  __m128i *v513; // r14
  void **v514; // r14
  __m128i v515; // xmm6
  __int64 v516; // rcx
  __int64 v517; // r8
  __int64 v518; // r9
  __int64 v519; // rax
  __int64 *v520; // rsi
  __int64 *v521; // rdi
  __int64 v522; // rcx
  __int64 v523; // r8
  __int64 v524; // rax
  __int64 *v525; // r14
  __int64 v526; // rdx
  __int64 v527; // rcx
  __int64 v528; // r8
  __int64 v529; // r9
  __int64 v530; // rcx
  __int64 v531; // r8
  __int64 v532; // r9
  __int64 v533; // rcx
  __int64 v534; // r8
  __int64 v535; // r9
  __int64 v536; // rcx
  __int64 v537; // r8
  __int64 v538; // r9
  __int64 v539; // rcx
  __int64 v540; // r8
  __int64 v541; // r9
  __int64 v542; // rcx
  __int64 v543; // r8
  __int64 v544; // r9
  __m128i v545; // xmm0
  __int64 v546; // rcx
  __int64 v547; // r8
  __int64 v548; // r9
  __int64 v549; // rcx
  __int64 v550; // r8
  __int64 v551; // r9
  char *v552; // r14
  __int64 v553; // rax
  __m128i v554; // xmm7
  __int64 v555; // rcx
  __int64 v556; // r8
  __int64 v557; // r9
  __int64 v558; // rax
  __int64 *v559; // rsi
  __int64 *v560; // rdi
  __int64 v561; // rcx
  __int64 v562; // r8
  __int64 v563; // rax
  __int64 *v564; // r14
  __int64 v565; // rdx
  __int64 v566; // rcx
  __int64 v567; // r8
  __int64 v568; // r9
  __int64 v569; // rcx
  __int64 v570; // r8
  __int64 v571; // r9
  __int64 v572; // rcx
  __int64 v573; // r8
  __int64 v574; // r9
  __int64 v575; // rcx
  __int64 v576; // r8
  __int64 v577; // r9
  __int64 v578; // rcx
  __int64 v579; // r8
  __int64 v580; // r9
  __int64 v581; // rcx
  __int64 v582; // r8
  __int64 v583; // r9
  __m128i v584; // xmm0
  __int64 v585; // rcx
  __int64 v586; // r8
  __int64 v587; // r9
  __int64 v588; // rcx
  __int64 v589; // r8
  __int64 v590; // r9
  char *v591; // r14
  __int64 v592; // rax
  __m128i v593; // xmm1
  __int64 v594; // rcx
  __int64 v595; // r8
  __int64 v596; // r9
  __int64 v597; // rax
  __int64 *v598; // rsi
  __int64 *v599; // rdi
  __int64 v600; // rcx
  __int64 v601; // r8
  __int64 v602; // rax
  __int64 *v603; // r14
  __int64 v604; // rdx
  __int64 v605; // rcx
  __int64 v606; // r8
  __int64 v607; // r9
  __int64 v608; // rcx
  __int64 v609; // r8
  __int64 v610; // r9
  __int64 v611; // rcx
  __int64 v612; // r8
  __int64 v613; // r9
  __int64 v614; // rcx
  __int64 v615; // r8
  __int64 v616; // r9
  __int64 v617; // rcx
  __int64 v618; // r8
  __int64 v619; // r9
  __int64 v620; // rcx
  __int64 v621; // r8
  __int64 v622; // r9
  __m128i v623; // xmm0
  __int64 v624; // rcx
  __int64 v625; // r8
  __int64 v626; // r9
  __int64 v627; // rcx
  __int64 v628; // r8
  __int64 v629; // r9
  char *v630; // r14
  __int64 v631; // rax
  __m128i v632; // xmm2
  __int64 v633; // rcx
  __int64 v634; // r8
  __int64 v635; // r9
  __int64 *v636; // r14
  __int64 v637; // rdx
  __int64 v638; // rcx
  __int64 v639; // r8
  __int64 v640; // r9
  __int64 *v641; // r14
  __int64 v642; // rdx
  __int64 v643; // rcx
  __int64 v644; // r8
  __int64 v645; // r9
  __int64 v646; // rcx
  __int64 v647; // r8
  __int64 v648; // r9
  __int64 v649; // rax
  __int64 *v650; // r14
  __int64 v651; // rdx
  __int64 v652; // rcx
  __int64 v653; // r8
  __int64 v654; // r9
  __int64 v655; // rcx
  __int64 v656; // r8
  __int64 v657; // r9
  __int64 v658; // rcx
  __int64 v659; // r8
  __int64 v660; // r9
  __int64 v661; // rcx
  __int64 v662; // r8
  __int64 v663; // r9
  __int64 v664; // rcx
  __int64 v665; // r8
  __int64 v666; // r9
  __int64 v667; // rcx
  __int64 v668; // r8
  __int64 v669; // r9
  __int64 *v670; // r14
  __int64 v671; // rdx
  __int64 v672; // rcx
  __int64 v673; // r8
  __int64 v674; // r9
  __m128i v675; // xmm0
  __int64 v676; // rcx
  __int64 v677; // r8
  __int64 v678; // r9
  __int64 v679; // rcx
  __int64 v680; // r8
  __int64 v681; // r9
  char v682; // si
  char *v683; // r12
  __int64 v684; // rax
  __m128i v685; // xmm3
  int v687; // [rsp+0h] [rbp-6A8h]
  int v688; // [rsp+0h] [rbp-6A8h]
  int v689; // [rsp+0h] [rbp-6A8h]
  int v690; // [rsp+0h] [rbp-6A8h]
  int v691; // [rsp+0h] [rbp-6A8h]
  int v692; // [rsp+0h] [rbp-6A8h]
  int v693; // [rsp+0h] [rbp-6A8h]
  int v694; // [rsp+0h] [rbp-6A8h]
  int v695; // [rsp+0h] [rbp-6A8h]
  int v696; // [rsp+0h] [rbp-6A8h]
  int v697; // [rsp+0h] [rbp-6A8h]
  int v698; // [rsp+0h] [rbp-6A8h]
  int v699; // [rsp+0h] [rbp-6A8h]
  int v700; // [rsp+0h] [rbp-6A8h]
  int v701; // [rsp+0h] [rbp-6A8h]
  int v702; // [rsp+0h] [rbp-6A8h]
  int v703; // [rsp+0h] [rbp-6A8h]
  int v704; // [rsp+0h] [rbp-6A8h]
  int v705; // [rsp+0h] [rbp-6A8h]
  int v706; // [rsp+0h] [rbp-6A8h]
  int v707; // [rsp+0h] [rbp-6A8h]
  int v708; // [rsp+0h] [rbp-6A8h]
  int v709; // [rsp+0h] [rbp-6A8h]
  int v710; // [rsp+0h] [rbp-6A8h]
  int v711; // [rsp+0h] [rbp-6A8h]
  int v712; // [rsp+0h] [rbp-6A8h]
  int v713; // [rsp+0h] [rbp-6A8h]
  int v714; // [rsp+0h] [rbp-6A8h]
  int v715; // [rsp+0h] [rbp-6A8h]
  int v716; // [rsp+0h] [rbp-6A8h]
  int v717; // [rsp+0h] [rbp-6A8h]
  int v718; // [rsp+0h] [rbp-6A8h]
  int v719; // [rsp+0h] [rbp-6A8h]
  int v720; // [rsp+0h] [rbp-6A8h]
  int v721; // [rsp+0h] [rbp-6A8h]
  int v722; // [rsp+0h] [rbp-6A8h]
  int v723; // [rsp+0h] [rbp-6A8h]
  int v724; // [rsp+0h] [rbp-6A8h]
  int v725; // [rsp+0h] [rbp-6A8h]
  int v726; // [rsp+0h] [rbp-6A8h]
  int v727; // [rsp+0h] [rbp-6A8h]
  int v728; // [rsp+0h] [rbp-6A8h]
  int v729; // [rsp+0h] [rbp-6A8h]
  int v730; // [rsp+0h] [rbp-6A8h]
  int v731; // [rsp+0h] [rbp-6A8h]
  int v732; // [rsp+0h] [rbp-6A8h]
  int v733; // [rsp+0h] [rbp-6A8h]
  int v734; // [rsp+0h] [rbp-6A8h]
  int v735; // [rsp+0h] [rbp-6A8h]
  int v736; // [rsp+0h] [rbp-6A8h]
  int v737; // [rsp+0h] [rbp-6A8h]
  int v738; // [rsp+0h] [rbp-6A8h]
  int v739; // [rsp+0h] [rbp-6A8h]
  int v740; // [rsp+0h] [rbp-6A8h]
  int v741; // [rsp+0h] [rbp-6A8h]
  int v742; // [rsp+0h] [rbp-6A8h]
  int v743; // [rsp+0h] [rbp-6A8h]
  int v744; // [rsp+0h] [rbp-6A8h]
  int v745; // [rsp+0h] [rbp-6A8h]
  int v746; // [rsp+0h] [rbp-6A8h]
  int v747; // [rsp+0h] [rbp-6A8h]
  int v748; // [rsp+0h] [rbp-6A8h]
  int v749; // [rsp+0h] [rbp-6A8h]
  int v750; // [rsp+0h] [rbp-6A8h]
  int v751; // [rsp+0h] [rbp-6A8h]
  int v752; // [rsp+0h] [rbp-6A8h]
  int v753; // [rsp+0h] [rbp-6A8h]
  int v754; // [rsp+0h] [rbp-6A8h]
  int v755; // [rsp+0h] [rbp-6A8h]
  int v756; // [rsp+0h] [rbp-6A8h]
  int v757; // [rsp+0h] [rbp-6A8h]
  int v758; // [rsp+0h] [rbp-6A8h]
  int v759; // [rsp+0h] [rbp-6A8h]
  int v760; // [rsp+0h] [rbp-6A8h]
  int v761; // [rsp+0h] [rbp-6A8h]
  int v762; // [rsp+0h] [rbp-6A8h]
  int v763; // [rsp+0h] [rbp-6A8h]
  int v764; // [rsp+0h] [rbp-6A8h]
  int v765; // [rsp+0h] [rbp-6A8h]
  int v766; // [rsp+0h] [rbp-6A8h]
  int v767; // [rsp+0h] [rbp-6A8h]
  int v768; // [rsp+0h] [rbp-6A8h]
  int v769; // [rsp+0h] [rbp-6A8h]
  int v770; // [rsp+0h] [rbp-6A8h]
  int v771; // [rsp+0h] [rbp-6A8h]
  int v772; // [rsp+0h] [rbp-6A8h]
  int v773; // [rsp+0h] [rbp-6A8h]
  int v774; // [rsp+0h] [rbp-6A8h]
  int v775; // [rsp+0h] [rbp-6A8h]
  int v776; // [rsp+0h] [rbp-6A8h]
  int v777; // [rsp+0h] [rbp-6A8h]
  int v778; // [rsp+0h] [rbp-6A8h]
  int v779; // [rsp+0h] [rbp-6A8h]
  int v780; // [rsp+0h] [rbp-6A8h]
  int v781; // [rsp+0h] [rbp-6A8h]
  int v782; // [rsp+0h] [rbp-6A8h]
  int v783; // [rsp+0h] [rbp-6A8h]
  int v784; // [rsp+0h] [rbp-6A8h]
  int v785; // [rsp+0h] [rbp-6A8h]
  int v786; // [rsp+0h] [rbp-6A8h]
  int v787; // [rsp+0h] [rbp-6A8h]
  int v788; // [rsp+0h] [rbp-6A8h]
  int v789; // [rsp+0h] [rbp-6A8h]
  int v790; // [rsp+0h] [rbp-6A8h]
  int v791; // [rsp+0h] [rbp-6A8h]
  int v792; // [rsp+0h] [rbp-6A8h]
  int v793; // [rsp+0h] [rbp-6A8h]
  int v794; // [rsp+0h] [rbp-6A8h]
  int v795; // [rsp+0h] [rbp-6A8h]
  int v796; // [rsp+0h] [rbp-6A8h]
  int v797; // [rsp+0h] [rbp-6A8h]
  int v798; // [rsp+0h] [rbp-6A8h]
  int v799; // [rsp+0h] [rbp-6A8h]
  int v800; // [rsp+0h] [rbp-6A8h]
  int v801; // [rsp+0h] [rbp-6A8h]
  int v802; // [rsp+0h] [rbp-6A8h]
  int v803; // [rsp+0h] [rbp-6A8h]
  int v804; // [rsp+0h] [rbp-6A8h]
  int v805; // [rsp+0h] [rbp-6A8h]
  int v806; // [rsp+0h] [rbp-6A8h]
  int v807; // [rsp+0h] [rbp-6A8h]
  int v808; // [rsp+0h] [rbp-6A8h]
  int v809; // [rsp+0h] [rbp-6A8h]
  int v810; // [rsp+0h] [rbp-6A8h]
  int v811; // [rsp+0h] [rbp-6A8h]
  int v812; // [rsp+0h] [rbp-6A8h]
  int v813; // [rsp+0h] [rbp-6A8h]
  int v814; // [rsp+0h] [rbp-6A8h]
  int v815; // [rsp+0h] [rbp-6A8h]
  int v816; // [rsp+0h] [rbp-6A8h]
  int v817; // [rsp+0h] [rbp-6A8h]
  int v818; // [rsp+0h] [rbp-6A8h]
  int v819; // [rsp+0h] [rbp-6A8h]
  int v820; // [rsp+0h] [rbp-6A8h]
  int v821; // [rsp+0h] [rbp-6A8h]
  int v822; // [rsp+0h] [rbp-6A8h]
  int v823; // [rsp+0h] [rbp-6A8h]
  int v824; // [rsp+0h] [rbp-6A8h]
  int v825; // [rsp+0h] [rbp-6A8h]
  int v826; // [rsp+0h] [rbp-6A8h]
  int v827; // [rsp+0h] [rbp-6A8h]
  int v828; // [rsp+0h] [rbp-6A8h]
  int v829; // [rsp+0h] [rbp-6A8h]
  int v830; // [rsp+0h] [rbp-6A8h]
  int v831; // [rsp+0h] [rbp-6A8h]
  int v832; // [rsp+0h] [rbp-6A8h]
  int v833; // [rsp+0h] [rbp-6A8h]
  int v834; // [rsp+0h] [rbp-6A8h]
  int v835; // [rsp+0h] [rbp-6A8h]
  int v836; // [rsp+0h] [rbp-6A8h]
  int v837; // [rsp+0h] [rbp-6A8h]
  int v838; // [rsp+0h] [rbp-6A8h]
  int v839; // [rsp+0h] [rbp-6A8h]
  int v840; // [rsp+0h] [rbp-6A8h]
  int v841; // [rsp+0h] [rbp-6A8h]
  int v842; // [rsp+0h] [rbp-6A8h]
  int v843; // [rsp+0h] [rbp-6A8h]
  int v844; // [rsp+0h] [rbp-6A8h]
  int v845; // [rsp+0h] [rbp-6A8h]
  int v846; // [rsp+0h] [rbp-6A8h]
  int v847; // [rsp+0h] [rbp-6A8h]
  int v848; // [rsp+0h] [rbp-6A8h]
  int v849; // [rsp+0h] [rbp-6A8h]
  __int64 v850; // [rsp+8h] [rbp-6A0h]
  __int64 v851; // [rsp+8h] [rbp-6A0h]
  int v852; // [rsp+8h] [rbp-6A0h]
  __int64 v853; // [rsp+8h] [rbp-6A0h]
  int v854; // [rsp+8h] [rbp-6A0h]
  __int64 v855; // [rsp+8h] [rbp-6A0h]
  __int64 v856; // [rsp+8h] [rbp-6A0h]
  __int64 v857; // [rsp+8h] [rbp-6A0h]
  __int64 v858; // [rsp+8h] [rbp-6A0h]
  __int64 v859; // [rsp+8h] [rbp-6A0h]
  int v860; // [rsp+8h] [rbp-6A0h]
  __int64 v861; // [rsp+8h] [rbp-6A0h]
  __int64 v862; // [rsp+8h] [rbp-6A0h]
  __int64 v863; // [rsp+8h] [rbp-6A0h]
  __int64 v864; // [rsp+8h] [rbp-6A0h]
  __int64 v865; // [rsp+8h] [rbp-6A0h]
  __int64 v866; // [rsp+8h] [rbp-6A0h]
  __int64 v867; // [rsp+8h] [rbp-6A0h]
  __int64 v868; // [rsp+8h] [rbp-6A0h]
  int v869; // [rsp+8h] [rbp-6A0h]
  __int64 v870; // [rsp+8h] [rbp-6A0h]
  __int64 v871; // [rsp+8h] [rbp-6A0h]
  __int64 v872; // [rsp+8h] [rbp-6A0h]
  __int64 v873; // [rsp+8h] [rbp-6A0h]
  __int64 v874; // [rsp+8h] [rbp-6A0h]
  __int64 v875; // [rsp+8h] [rbp-6A0h]
  __int64 v876; // [rsp+8h] [rbp-6A0h]
  __int64 v877; // [rsp+8h] [rbp-6A0h]
  __int64 v878; // [rsp+8h] [rbp-6A0h]
  __int64 v879; // [rsp+8h] [rbp-6A0h]
  __int64 v880; // [rsp+8h] [rbp-6A0h]
  __int64 v881; // [rsp+8h] [rbp-6A0h]
  __int64 v882; // [rsp+8h] [rbp-6A0h]
  int v883; // [rsp+8h] [rbp-6A0h]
  __int64 v884; // [rsp+8h] [rbp-6A0h]
  __int64 v885; // [rsp+8h] [rbp-6A0h]
  __int64 v886; // [rsp+8h] [rbp-6A0h]
  __int64 v887; // [rsp+8h] [rbp-6A0h]
  __int64 v888; // [rsp+8h] [rbp-6A0h]
  __int64 v889; // [rsp+8h] [rbp-6A0h]
  __int64 v890; // [rsp+8h] [rbp-6A0h]
  __int64 v891; // [rsp+8h] [rbp-6A0h]
  int v892; // [rsp+8h] [rbp-6A0h]
  __int64 v893; // [rsp+8h] [rbp-6A0h]
  int v894; // [rsp+8h] [rbp-6A0h]
  __int64 v895; // [rsp+8h] [rbp-6A0h]
  __int64 v896; // [rsp+8h] [rbp-6A0h]
  __int64 v897; // [rsp+8h] [rbp-6A0h]
  int v898; // [rsp+8h] [rbp-6A0h]
  __int64 v899; // [rsp+8h] [rbp-6A0h]
  int v900; // [rsp+8h] [rbp-6A0h]
  __int64 v901; // [rsp+8h] [rbp-6A0h]
  __int64 v902; // [rsp+8h] [rbp-6A0h]
  __int64 v903; // [rsp+8h] [rbp-6A0h]
  int v904; // [rsp+8h] [rbp-6A0h]
  __int64 v905; // [rsp+8h] [rbp-6A0h]
  int v906; // [rsp+8h] [rbp-6A0h]
  __int64 v907; // [rsp+8h] [rbp-6A0h]
  __int64 v908; // [rsp+8h] [rbp-6A0h]
  __int64 v909; // [rsp+8h] [rbp-6A0h]
  __int64 v910; // [rsp+8h] [rbp-6A0h]
  __int64 v911; // [rsp+8h] [rbp-6A0h]
  __int64 v912; // [rsp+8h] [rbp-6A0h]
  __int64 v913; // [rsp+8h] [rbp-6A0h]
  __int64 v914; // [rsp+8h] [rbp-6A0h]
  __int64 v915; // [rsp+8h] [rbp-6A0h]
  __int64 v916; // [rsp+8h] [rbp-6A0h]
  __int64 v917; // [rsp+8h] [rbp-6A0h]
  __int64 v918; // [rsp+8h] [rbp-6A0h]
  __int64 v919; // [rsp+8h] [rbp-6A0h]
  __int64 v920; // [rsp+8h] [rbp-6A0h]
  __int64 v921; // [rsp+8h] [rbp-6A0h]
  __int64 v922; // [rsp+8h] [rbp-6A0h]
  __int64 v923; // [rsp+8h] [rbp-6A0h]
  __int64 v924; // [rsp+8h] [rbp-6A0h]
  __int64 v925; // [rsp+8h] [rbp-6A0h]
  __int64 v926; // [rsp+8h] [rbp-6A0h]
  __int64 v927; // [rsp+8h] [rbp-6A0h]
  __int64 v928; // [rsp+8h] [rbp-6A0h]
  __int64 v929; // [rsp+8h] [rbp-6A0h]
  __int64 v930; // [rsp+8h] [rbp-6A0h]
  __int64 v931; // [rsp+8h] [rbp-6A0h]
  __int64 v932; // [rsp+8h] [rbp-6A0h]
  __int64 v933; // [rsp+8h] [rbp-6A0h]
  __int64 v934; // [rsp+8h] [rbp-6A0h]
  __int64 v935; // [rsp+8h] [rbp-6A0h]
  int v936; // [rsp+8h] [rbp-6A0h]
  __int64 v937; // [rsp+8h] [rbp-6A0h]
  __int64 v938; // [rsp+8h] [rbp-6A0h]
  __int64 v939; // [rsp+8h] [rbp-6A0h]
  __int64 v940; // [rsp+8h] [rbp-6A0h]
  __int64 v941; // [rsp+8h] [rbp-6A0h]
  __int64 v942; // [rsp+8h] [rbp-6A0h]
  __int64 v943; // [rsp+8h] [rbp-6A0h]
  __int64 v944; // [rsp+8h] [rbp-6A0h]
  __int64 v945; // [rsp+8h] [rbp-6A0h]
  __int64 v946; // [rsp+8h] [rbp-6A0h]
  __int64 v947; // [rsp+8h] [rbp-6A0h]
  __int64 v948; // [rsp+8h] [rbp-6A0h]
  __int64 v949; // [rsp+8h] [rbp-6A0h]
  int v950; // [rsp+8h] [rbp-6A0h]
  __int64 v951; // [rsp+8h] [rbp-6A0h]
  __int64 v952; // [rsp+8h] [rbp-6A0h]
  __int64 v953; // [rsp+8h] [rbp-6A0h]
  __int64 v954; // [rsp+8h] [rbp-6A0h]
  int v955; // [rsp+8h] [rbp-6A0h]
  __int64 v956; // [rsp+8h] [rbp-6A0h]
  int v957; // [rsp+8h] [rbp-6A0h]
  int v958; // [rsp+8h] [rbp-6A0h]
  int v959; // [rsp+8h] [rbp-6A0h]
  int v960; // [rsp+8h] [rbp-6A0h]
  int v961; // [rsp+8h] [rbp-6A0h]
  __int64 v962; // [rsp+8h] [rbp-6A0h]
  __int64 v963; // [rsp+8h] [rbp-6A0h]
  __int64 v964; // [rsp+8h] [rbp-6A0h]
  __int64 v965; // [rsp+8h] [rbp-6A0h]
  __int64 v966; // [rsp+8h] [rbp-6A0h]
  __int64 v967; // [rsp+8h] [rbp-6A0h]
  __int64 v968; // [rsp+8h] [rbp-6A0h]
  __int64 v969; // [rsp+8h] [rbp-6A0h]
  __int64 v970; // [rsp+8h] [rbp-6A0h]
  int v971; // [rsp+8h] [rbp-6A0h]
  __int64 v972; // [rsp+8h] [rbp-6A0h]
  __int64 v973; // [rsp+8h] [rbp-6A0h]
  __int64 v974; // [rsp+8h] [rbp-6A0h]
  __int64 v975; // [rsp+8h] [rbp-6A0h]
  __int64 v976; // [rsp+8h] [rbp-6A0h]
  __int64 v977; // [rsp+8h] [rbp-6A0h]
  __int64 v978; // [rsp+8h] [rbp-6A0h]
  __int64 v979; // [rsp+8h] [rbp-6A0h]
  __int64 v980; // [rsp+8h] [rbp-6A0h]
  int v981; // [rsp+8h] [rbp-6A0h]
  __int64 v982; // [rsp+8h] [rbp-6A0h]
  __int64 v983; // [rsp+8h] [rbp-6A0h]
  __int64 v984; // [rsp+8h] [rbp-6A0h]
  __int64 v985; // [rsp+8h] [rbp-6A0h]
  __int64 v986; // [rsp+8h] [rbp-6A0h]
  __int64 v987; // [rsp+8h] [rbp-6A0h]
  __int64 v988; // [rsp+8h] [rbp-6A0h]
  __int64 v989; // [rsp+8h] [rbp-6A0h]
  __int64 v990; // [rsp+8h] [rbp-6A0h]
  int v991; // [rsp+8h] [rbp-6A0h]
  __int64 v992; // [rsp+8h] [rbp-6A0h]
  __int64 v993; // [rsp+8h] [rbp-6A0h]
  __int64 v994; // [rsp+8h] [rbp-6A0h]
  __int64 v995; // [rsp+8h] [rbp-6A0h]
  __int64 v996; // [rsp+8h] [rbp-6A0h]
  __int64 v997; // [rsp+8h] [rbp-6A0h]
  __int64 v998; // [rsp+8h] [rbp-6A0h]
  __int64 v999; // [rsp+8h] [rbp-6A0h]
  int v1000; // [rsp+8h] [rbp-6A0h]
  int v1001; // [rsp+8h] [rbp-6A0h]
  __int64 v1002; // [rsp+8h] [rbp-6A0h]
  int v1003; // [rsp+8h] [rbp-6A0h]
  __int64 v1004; // [rsp+8h] [rbp-6A0h]
  __int64 v1005; // [rsp+8h] [rbp-6A0h]
  __int64 v1006; // [rsp+8h] [rbp-6A0h]
  __int64 v1007; // [rsp+8h] [rbp-6A0h]
  __int64 v1008; // [rsp+8h] [rbp-6A0h]
  int v1009; // [rsp+8h] [rbp-6A0h]
  __int64 v1010; // [rsp+8h] [rbp-6A0h]
  __int64 v1011; // [rsp+8h] [rbp-6A0h]
  __m128 v1012; // [rsp+10h] [rbp-698h] BYREF
  __int64 v1013; // [rsp+20h] [rbp-688h]
  __int8 *v1014; // [rsp+28h] [rbp-680h]
  _QWORD *v1015; // [rsp+30h] [rbp-678h]
  _QWORD *v1016; // [rsp+38h] [rbp-670h]
  __int64 *v1017; // [rsp+40h] [rbp-668h]
  _BYTE *v1018; // [rsp+48h] [rbp-660h]
  __int64 v1019; // [rsp+50h] [rbp-658h]
  _BYTE *v1020; // [rsp+58h] [rbp-650h]
  __int64 *v1021; // [rsp+60h] [rbp-648h]
  __int64 *v1022; // [rsp+68h] [rbp-640h]
  __int64 *v1023; // [rsp+70h] [rbp-638h]
  __m128i *v1024; // [rsp+78h] [rbp-630h]
  _QWORD *v1025; // [rsp+80h] [rbp-628h]
  __int64 *v1026; // [rsp+88h] [rbp-620h]
  __int64 *v1027; // [rsp+90h] [rbp-618h]
  __m128i *v1028; // [rsp+98h] [rbp-610h]
  __int128 *v1029; // [rsp+A0h] [rbp-608h]
  __int64 *v1030; // [rsp+A8h] [rbp-600h]
  __int8 *v1031; // [rsp+B0h] [rbp-5F8h]
  __int128 *v1032; // [rsp+B8h] [rbp-5F0h]
  __m128i *v1033; // [rsp+C0h] [rbp-5E8h]
  __int64 *v1034; // [rsp+C8h] [rbp-5E0h]
  char *v1035; // [rsp+D0h] [rbp-5D8h]
  __int128 *v1036; // [rsp+D8h] [rbp-5D0h]
  __int128 *v1037; // [rsp+E0h] [rbp-5C8h]
  __int128 *v1038; // [rsp+E8h] [rbp-5C0h]
  __m128i *v1039; // [rsp+F0h] [rbp-5B8h]
  __int128 *v1040; // [rsp+F8h] [rbp-5B0h]
  _BYTE *v1041; // [rsp+100h] [rbp-5A8h]
  __int128 *v1042; // [rsp+108h] [rbp-5A0h]
  char *v1043; // [rsp+110h] [rbp-598h]
  char *v1044; // [rsp+118h] [rbp-590h]
  __int64 *v1045; // [rsp+120h] [rbp-588h]
  __m128i *v1046; // [rsp+128h] [rbp-580h]
  _QWORD *v1047; // [rsp+130h] [rbp-578h]
  __int64 *v1048; // [rsp+138h] [rbp-570h]
  __int64 *v1049; // [rsp+140h] [rbp-568h]
  __int64 *v1050; // [rsp+148h] [rbp-560h]
  __int64 *v1051; // [rsp+150h] [rbp-558h]
  __m128i *v1052; // [rsp+158h] [rbp-550h]
  char *v1053; // [rsp+160h] [rbp-548h]
  __int128 *v1054; // [rsp+168h] [rbp-540h]
  __int128 *v1055; // [rsp+170h] [rbp-538h]
  __int128 *v1056; // [rsp+178h] [rbp-530h]
  __int128 *v1057; // [rsp+180h] [rbp-528h]
  __int128 *v1058; // [rsp+188h] [rbp-520h]
  __int128 *v1059; // [rsp+190h] [rbp-518h]
  __int128 *v1060; // [rsp+198h] [rbp-510h]
  __int128 *v1061; // [rsp+1A0h] [rbp-508h]
  __int128 *v1062; // [rsp+1A8h] [rbp-500h]
  char *v1063; // [rsp+1B0h] [rbp-4F8h]
  char *v1064; // [rsp+1B8h] [rbp-4F0h]
  char *v1065; // [rsp+1C0h] [rbp-4E8h]
  char *v1066; // [rsp+1C8h] [rbp-4E0h]
  __int64 *v1067; // [rsp+1D0h] [rbp-4D8h]
  __m128i *v1068; // [rsp+1D8h] [rbp-4D0h]
  _QWORD *v1069; // [rsp+1E0h] [rbp-4C8h]
  __int128 *v1070; // [rsp+1E8h] [rbp-4C0h]
  __m128i v1071; // [rsp+1F0h] [rbp-4B8h] BYREF
  __m128i v1072; // [rsp+200h] [rbp-4A8h] BYREF
  __int64 v1073; // [rsp+210h] [rbp-498h] BYREF
  __int64 v1074; // [rsp+218h] [rbp-490h] BYREF
  _QWORD v1075[3]; // [rsp+220h] [rbp-488h] BYREF
  _QWORD v1076[3]; // [rsp+238h] [rbp-470h] BYREF
  __int64 v1077; // [rsp+250h] [rbp-458h] BYREF
  char v1078; // [rsp+258h] [rbp-450h] BYREF
  __int64 v1079; // [rsp+260h] [rbp-448h]
  char v1080; // [rsp+268h] [rbp-440h]
  __int128 v1081; // [rsp+270h] [rbp-438h] BYREF
  __int64 v1082; // [rsp+280h] [rbp-428h] BYREF
  char v1083; // [rsp+288h] [rbp-420h] BYREF
  __int64 v1084; // [rsp+290h] [rbp-418h]
  __int64 v1085; // [rsp+298h] [rbp-410h] BYREF
  __int128 v1086; // [rsp+2A0h] [rbp-408h] BYREF
  __int64 v1087; // [rsp+2B0h] [rbp-3F8h] BYREF
  char v1088; // [rsp+2B8h] [rbp-3F0h] BYREF
  __int64 v1089; // [rsp+2C0h] [rbp-3E8h]
  __int64 v1090; // [rsp+2C8h] [rbp-3E0h] BYREF
  __int128 v1091; // [rsp+2D0h] [rbp-3D8h] BYREF
  char v1092[8]; // [rsp+2E0h] [rbp-3C8h] BYREF
  __int128 v1093; // [rsp+2E8h] [rbp-3C0h] BYREF
  __int64 v1094; // [rsp+2F8h] [rbp-3B0h] BYREF
  __int128 v1095; // [rsp+300h] [rbp-3A8h] BYREF
  __int64 v1096; // [rsp+310h] [rbp-398h] BYREF
  char v1097; // [rsp+318h] [rbp-390h] BYREF
  __int64 v1098; // [rsp+320h] [rbp-388h]
  __int64 v1099; // [rsp+328h] [rbp-380h] BYREF
  __int128 v1100; // [rsp+330h] [rbp-378h] BYREF
  __int64 v1101; // [rsp+340h] [rbp-368h] BYREF
  char v1102; // [rsp+348h] [rbp-360h] BYREF
  __int64 v1103; // [rsp+350h] [rbp-358h]
  __int64 v1104; // [rsp+358h] [rbp-350h] BYREF
  __int128 v1105; // [rsp+360h] [rbp-348h] BYREF
  char v1106; // [rsp+370h] [rbp-338h] BYREF
  __int128 v1107; // [rsp+378h] [rbp-330h] BYREF
  __int64 v1108; // [rsp+388h] [rbp-320h] BYREF
  __int128 v1109; // [rsp+390h] [rbp-318h] BYREF
  __int64 v1110; // [rsp+3A0h] [rbp-308h] BYREF
  __int128 v1111; // [rsp+3A8h] [rbp-300h] BYREF
  __int64 v1112; // [rsp+3B8h] [rbp-2F0h] BYREF
  __int128 v1113; // [rsp+3C0h] [rbp-2E8h] BYREF
  __int64 v1114; // [rsp+3D0h] [rbp-2D8h] BYREF
  __int128 v1115; // [rsp+3D8h] [rbp-2D0h] BYREF
  _BYTE v1116[24]; // [rsp+3E8h] [rbp-2C0h] BYREF
  __int64 v1117; // [rsp+400h] [rbp-2A8h] BYREF
  char v1118; // [rsp+408h] [rbp-2A0h] BYREF
  __int64 v1119; // [rsp+410h] [rbp-298h]
  __int64 v1120; // [rsp+418h] [rbp-290h] BYREF
  __int128 v1121; // [rsp+420h] [rbp-288h] BYREF
  char v1122[8]; // [rsp+430h] [rbp-278h] BYREF
  __int128 v1123; // [rsp+438h] [rbp-270h] BYREF
  __int64 v1124; // [rsp+448h] [rbp-260h] BYREF
  __int128 v1125; // [rsp+450h] [rbp-258h] BYREF
  __int64 v1126; // [rsp+460h] [rbp-248h] BYREF
  __int128 v1127; // [rsp+468h] [rbp-240h] BYREF
  __int64 v1128; // [rsp+478h] [rbp-230h] BYREF
  char v1129; // [rsp+480h] [rbp-228h] BYREF
  __int64 v1130; // [rsp+488h] [rbp-220h]
  __int64 v1131; // [rsp+490h] [rbp-218h] BYREF
  __int128 v1132; // [rsp+498h] [rbp-210h] BYREF
  __m128i v1133; // [rsp+4A8h] [rbp-200h] BYREF
  __int64 v1134; // [rsp+4B8h] [rbp-1F0h]
  __m128i v1135; // [rsp+4C0h] [rbp-1E8h] BYREF
  __int64 v1136; // [rsp+4D0h] [rbp-1D8h]
  __m128i v1137; // [rsp+4D8h] [rbp-1D0h] BYREF
  __int64 v1138; // [rsp+4E8h] [rbp-1C0h]
  _QWORD v1139[3]; // [rsp+4F0h] [rbp-1B8h] BYREF
  char v1140; // [rsp+508h] [rbp-1A0h] BYREF
  __m128i v1141; // [rsp+510h] [rbp-198h] BYREF
  __int64 v1142; // [rsp+520h] [rbp-188h]
  __m128i v1143; // [rsp+528h] [rbp-180h] BYREF
  __int64 v1144; // [rsp+538h] [rbp-170h]
  _QWORD v1145[2]; // [rsp+540h] [rbp-168h] BYREF
  __int64 v1146; // [rsp+550h] [rbp-158h]
  char v1147; // [rsp+558h] [rbp-150h] BYREF
  void *v1148; // [rsp+560h] [rbp-148h] BYREF
  _BYTE v1149[24]; // [rsp+568h] [rbp-140h] BYREF
  __int128 v1150; // [rsp+580h] [rbp-128h] BYREF
  __int64 v1151; // [rsp+590h] [rbp-118h] BYREF
  __int128 v1152; // [rsp+598h] [rbp-110h] BYREF
  char v1153; // [rsp+5A8h] [rbp-100h] BYREF
  __int128 v1154; // [rsp+5B0h] [rbp-F8h] BYREF
  _BYTE *v1155; // [rsp+5C0h] [rbp-E8h] BYREF
  __int64 v1156; // [rsp+5C8h] [rbp-E0h]
  _BYTE v1157[16]; // [rsp+5D0h] [rbp-D8h] BYREF
  _BYTE *v1158; // [rsp+5E0h] [rbp-C8h] BYREF
  __int64 v1159; // [rsp+5E8h] [rbp-C0h]
  _BYTE v1160[16]; // [rsp+5F0h] [rbp-B8h] BYREF
  char v1161; // [rsp+600h] [rbp-A8h]
  __int64 v1162; // [rsp+608h] [rbp-A0h]
  char v1163; // [rsp+620h] [rbp-88h]
  char v1164; // [rsp+658h] [rbp-50h]
  unsigned __int64 v1165; // [rsp+668h] [rbp-40h]

  v1165 = __readfsqword(0x28u);
  v1012 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  v1155 = v1157;
  v1156 = 0;
  v1157[0] = 0;
  v1158 = v1160;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "is_debugger_active");
  std::string::assign((__int64)&v1158, "Check if debugger is active");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  v1024 = &v1133;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v1133);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (const __m128i *)&v1131);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  v1039 = &v1071;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1071,
    nullptr,
    0,
    1);
  v2 = _mm_load_si128(&v1071);
  v1025 = &v1149[16];
  v1138 = 0;
  v1137 = v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1149[16],
    &v1135);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1072,
    nullptr,
    0,
    2);
  v3 = _mm_load_si128(&v1072);
  v1026 = &v1151;
  v1144 = 0;
  v1143 = v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1151,
    &v1141);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1073,
    (__int64)&v1148,
    3,
    v4,
    v5,
    v6,
    v687,
    v850,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    (int)this,
    (int)v1014,
    (__int64)&v1072,
    (int)&v1073,
    (int)v1017,
    (int)v1157,
    (int)&v1158,
    (char)v1160,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v7 = v1161;
  v8 = &v1153;
  v9 = v1074;
  v1161 = v1073;
  LOBYTE(v1073) = v7;
  v1074 = v1162;
  v1162 = v9;
  v1017 = &v1074;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v8 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v8 != (char *)&v1148 );
  v1031 = &v1143.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1030 = &v1141.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1023 = &v1137.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1022 = &v1135.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1014 = &v1133.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::is_debugger_active;
  *(__m128i *)&v1149[8] = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "get_debug_status");
  std::string::assign(v1019, "Get debugger status");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1024);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (const __m128i *)&v1131);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    nullptr,
    0,
    1);
  v11 = _mm_load_si128(&v1071);
  v1138 = 0;
  v1137 = v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    &v1135);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    nullptr,
    0,
    2);
  v12 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    &v1141);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v13,
    v14,
    v15,
    v688,
    (__int64)&v1132,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v16 = v1161;
  v17 = &v1153;
  v1161 = v1073;
  v18 = v1162;
  LOBYTE(v1073) = v16;
  v1162 = v1074;
  v1074 = v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v17 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v17 != (char *)&v1148 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v19 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::get_debug_status;
  *(__m128i *)&v1149[8] = v19;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "list_threads");
  std::string::assign(v1019, "List threads in process");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1024);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (const __m128i *)&v1131);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    nullptr,
    0,
    1);
  v20 = _mm_load_si128(&v1071);
  v1138 = 0;
  v1137 = v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    &v1135);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    nullptr,
    0,
    2);
  v21 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    &v1141);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v22,
    v23,
    v24,
    v689,
    v851,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v25 = v1161;
  v26 = &v1153;
  v1161 = v1073;
  v27 = v1162;
  LOBYTE(v1073) = v25;
  v1162 = v1074;
  v1074 = v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v26 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v26 != (char *)&v1148 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v28 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::list_threads;
  *(__m128i *)&v1149[8] = v28;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "get_register_value");
  std::string::assign(v1019, "Read CPU register value");
  v1028 = (__m128i *)&v1114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1114);
  *((_QWORD *)&v1115 + 1) = 0;
  v1047 = v1116;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1116);
  *(_QWORD *)&v1116[16] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    v1028);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  LOBYTE(v1131) = 0;
  *(_QWORD *)&v1132 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1131) = 3;
  v29 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v29, "register", v30, v31, v32, v33, v690, v852, v1012.m128_i64[0]);
  v1021 = &v1117;
  v1132 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1117);
  v1119 = 0;
  LOBYTE(v1120) = 0;
  *(_QWORD *)&v1121 = 0;
  v1029 = &v1121;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1120) = 3;
  v34 = operator new(0x20u);
  *(_QWORD *)v34 = v34 + 16;
  v35 = v1021;
  strcpy((char *)(v34 + 16), "string");
  *(_QWORD *)(v34 + 8) = 6;
  v1027 = &v1126;
  v1121 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1126,
    (__int64)v35,
    2,
    v36,
    v37,
    v38,
    v691,
    v853,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1127 + 1) = 0;
  v1122[0] = 0;
  *(_QWORD *)&v1123 = 0;
  v1036 = &v1123;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1122[0] = 3;
  v39 = operator new(0x20u);
  *(_QWORD *)v39 = v39 + 16;
  strcpy((char *)(v39 + 16), "description");
  *(_QWORD *)(v39 + 8) = 11;
  LOBYTE(v1124) = 0;
  *(_QWORD *)&v1125 = 0;
  v1032 = &v1125;
  v1123 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1124) = 3;
  v40 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v40,
    "Register name",
    v41,
    v42,
    v43,
    v44,
    v692,
    v854,
    v1012.m128_i64[0]);
  v1035 = v1122;
  v1045 = &v1128;
  v1125 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1128,
    (__int64)v1122,
    2,
    v45,
    v46,
    v47,
    v693,
    v855,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1024,
    (__int64)v1027,
    2,
    v48,
    v49,
    v50,
    v694,
    v856,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1134 = 0;
  v1034 = &v1110;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1110,
    (__int64)&v1131,
    2,
    v51,
    v52,
    v53,
    v695,
    v857,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1111 + 1) = 0;
  v1046 = &v1137;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1137,
    (__int64)v1034,
    1,
    v54,
    v55,
    v56,
    v696,
    v858,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1138 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v57,
    v58,
    v59,
    v697,
    v859,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  v1106 = 0;
  *(_QWORD *)&v1107 = 0;
  v1037 = &v1107;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1106 = 3;
  v60 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v60, "register", v61, v62, v63, v64, v698, v860, v1012.m128_i64[0]);
  v1033 = (__m128i *)&v1106;
  v1107 = (unsigned __int64)v60;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    (const __m128i *)&v1106,
    1,
    2);
  v65 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v65;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v66,
    v67,
    v68,
    v699,
    v861,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v69,
    v70,
    v71,
    v700,
    v862,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  LOBYTE(v35) = v1161;
  v72 = &v1153;
  v1161 = v1073;
  v73 = v1162;
  LOBYTE(v1073) = (_BYTE)v35;
  v1162 = v1074;
  v1074 = v73;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v72 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v72 != (char *)&v1148 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1038 = &v1111;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1044 = &v1129;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1042 = &v1127;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1043 = &v1118;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1041 = &v1116[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1040 = &v1115;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v74 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::get_register_value;
  *(__m128i *)&v1149[8] = v74;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "list_breakpoints");
  std::string::assign(v1019, "List all breakpoints");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1024);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)&v1131,
    2,
    v75,
    v76,
    v77,
    v701,
    v863,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    nullptr,
    0,
    1);
  v78 = _mm_load_si128(&v1071);
  v1138 = 0;
  v1137 = v78;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v79,
    v80,
    v81,
    v702,
    v864,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    nullptr,
    0,
    2);
  v82 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v82;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v83,
    v84,
    v85,
    v703,
    v865,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v86,
    v87,
    v88,
    v704,
    v866,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v89 = v1161;
  v90 = &v1153;
  v1161 = v1073;
  v91 = v1162;
  LOBYTE(v1073) = v89;
  v1162 = v1074;
  v1074 = v91;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v90 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v90 != (char *)&v1148 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v92 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::list_breakpoints;
  *(__m128i *)&v1149[8] = v92;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "get_breakpoint");
  std::string::assign(v1019, "Get breakpoint at address");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1028);
  *((_QWORD *)&v1115 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1047);
  *(_QWORD *)&v1116[16] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)v1028,
    2,
    v93,
    v94,
    v95,
    v705,
    v867,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1021);
  v1119 = 0;
  LOBYTE(v1120) = 0;
  *(_QWORD *)&v1121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1120) = 3;
  v96 = operator new(0x20u);
  v97 = v1021;
  *(_QWORD *)v96 = v96 + 16;
  v98 = v1027;
  strcpy((char *)(v96 + 16), "string");
  *(_QWORD *)(v96 + 8) = 6;
  v1121 = (unsigned __int64)v96;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v98,
    (__int64)v97,
    2,
    v99,
    v100,
    26478,
    v706,
    v868,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1127 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1035);
  *((_QWORD *)&v1123 + 1) = 0;
  LOBYTE(v1124) = 0;
  *(_QWORD *)&v1125 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1124) = 3;
  v101 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v101,
    "Hex address",
    v102,
    v103,
    v104,
    v105,
    v707,
    v869,
    v1012.m128_i64[0]);
  v1125 = (unsigned __int64)v101;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1045,
    (__int64)v1035,
    2,
    v106,
    v107,
    v108,
    v708,
    v870,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1024,
    (__int64)v1027,
    2,
    v109,
    v110,
    v111,
    v709,
    v871,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1034,
    (__int64)&v1131,
    2,
    v112,
    v113,
    v114,
    v710,
    v872,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1111 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1046,
    (__int64)v1034,
    1,
    v115,
    v116,
    v117,
    v711,
    v873,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1138 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v118,
    v119,
    v120,
    v712,
    v874,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1033);
  *((_QWORD *)&v1107 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    v1033,
    1,
    2);
  v121 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v121;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v122,
    v123,
    v124,
    v713,
    v875,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v125,
    v126,
    v127,
    v714,
    v876,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  LOBYTE(v97) = v1161;
  v128 = &v1153;
  v1161 = v1073;
  v129 = v1162;
  LOBYTE(v1073) = (_BYTE)v97;
  v1162 = v1074;
  v1074 = v129;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v128 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v128 != (char *)&v1148 );
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
  v130 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::get_breakpoint;
  *(__m128i *)&v1149[8] = v130;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "list_modules");
  std::string::assign(v1019, "List loaded modules/DLLs");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1024);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)&v1131,
    2,
    v131,
    v132,
    v133,
    v715,
    v877,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    nullptr,
    0,
    1);
  v134 = _mm_load_si128(&v1071);
  v1138 = 0;
  v1137 = v134;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v135,
    v136,
    v137,
    v716,
    v878,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    nullptr,
    0,
    2);
  v138 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v138;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v139,
    v140,
    v141,
    v717,
    v879,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v142,
    v143,
    v144,
    v718,
    v880,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v145 = v1161;
  v146 = &v1153;
  v1161 = v1073;
  v147 = v1162;
  LOBYTE(v1073) = v145;
  v1162 = v1074;
  v1074 = v147;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v146 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v146 != (char *)&v1148 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::list_modules;
  *(__m128i *)&v1149[8] = v148;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "is_debug_memory");
  std::string::assign(v1019, "Check if address in debug memory");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1028);
  *((_QWORD *)&v1115 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1047);
  *(_QWORD *)&v1116[16] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)v1028,
    2,
    v149,
    v150,
    v151,
    v719,
    v881,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1021);
  v1119 = 0;
  LOBYTE(v1120) = 0;
  *(_QWORD *)&v1121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1120) = 3;
  v152 = operator new(0x20u);
  v153 = v1021;
  *(_QWORD *)v152 = v152 + 16;
  v154 = v1027;
  strcpy((char *)(v152 + 16), "string");
  *(_QWORD *)(v152 + 8) = 6;
  v1121 = (unsigned __int64)v152;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v154,
    (__int64)v153,
    2,
    v155,
    v156,
    26478,
    v720,
    v882,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1127 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1035);
  *((_QWORD *)&v1123 + 1) = 0;
  LOBYTE(v1124) = 0;
  *(_QWORD *)&v1125 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1124) = 3;
  v157 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v157,
    "Hex address",
    v158,
    v159,
    v160,
    v161,
    v721,
    v883,
    v1012.m128_i64[0]);
  v1125 = (unsigned __int64)v157;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1045,
    (__int64)v1035,
    2,
    v162,
    v163,
    v164,
    v722,
    v884,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1024,
    (__int64)v1027,
    2,
    v165,
    v166,
    v167,
    v723,
    v885,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1034,
    (__int64)&v1131,
    2,
    v168,
    v169,
    v170,
    v724,
    v886,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1111 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1046,
    (__int64)v1034,
    1,
    v171,
    v172,
    v173,
    v725,
    v887,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1138 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v174,
    v175,
    v176,
    v726,
    v888,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1033);
  *((_QWORD *)&v1107 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    v1033,
    1,
    2);
  v177 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v177;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v178,
    v179,
    v180,
    v727,
    v889,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v181,
    v182,
    v183,
    v728,
    v890,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  LOBYTE(v153) = v1161;
  v184 = &v1153;
  v1161 = v1073;
  v185 = v1162;
  LOBYTE(v1073) = (_BYTE)v153;
  v1162 = v1074;
  v1074 = v185;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v184 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v184 != (char *)&v1148 );
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
  v186 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::is_debug_memory;
  *(__m128i *)&v1149[8] = v186;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "start_debug_process");
  std::string::assign(v1019, "Start debugging process");
  v1058 = (__int128 *)v1075;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1075);
  v1075[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1076);
  v1076[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)v1058,
    2,
    v187,
    v188,
    v189,
    v729,
    v891,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  v1092[0] = 0;
  *(_QWORD *)&v1093 = 0;
  v1055 = &v1093;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1092[0] = 3;
  v190 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v190, "path", v191, v192, v193, v194, v730, v892, v1012.m128_i64[0]);
  v1052 = (__m128i *)&v1077;
  v1093 = (unsigned __int64)v190;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1077);
  v1079 = 0;
  v1080 = 0;
  *(_QWORD *)&v1081 = 0;
  v1062 = &v1081;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1080 = 3;
  v195 = operator new(0x20u);
  *(_QWORD *)v195 = v195 + 16;
  v196 = (__int64 *)v1052;
  strcpy((char *)(v195 + 16), "string");
  *(_QWORD *)(v195 + 8) = 6;
  v1048 = &v1087;
  v1081 = (unsigned __int64)v195;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1087,
    (__int64)v196,
    2,
    v197,
    v198,
    v199,
    v731,
    v893,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1089 = 0;
  v1049 = &v1082;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1082);
  v1084 = 0;
  LOBYTE(v1085) = 0;
  *(_QWORD *)&v1086 = 0;
  v1054 = &v1086;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1085) = 3;
  v200 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v200,
    "Executable path",
    v201,
    v202,
    v203,
    v204,
    v732,
    v894,
    v1012.m128_i64[0]);
  v1086 = (unsigned __int64)v200;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1090,
    (__int64)v1049,
    2,
    v205,
    v206,
    v207,
    v733,
    v895,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1091 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1094,
    (__int64)v1048,
    2,
    v208,
    v209,
    v210,
    v734,
    v896,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1095 + 1) = 0;
  v1053 = v1092;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1141,
    (__int64)v1092,
    2,
    v211,
    v212,
    v213,
    v735,
    v897,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1142 = 0;
  LOBYTE(v1110) = 0;
  *(_QWORD *)&v1111 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1110) = 3;
  v214 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v214, "args", v215, v216, v217, v218, v736, v898, v1012.m128_i64[0]);
  v1050 = &v1096;
  v1111 = (unsigned __int64)v214;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1096);
  v1098 = 0;
  LOBYTE(v1099) = 0;
  *(_QWORD *)&v1100 = 0;
  v1056 = &v1100;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1099) = 3;
  v219 = operator new(0x20u);
  v220 = (__int64)v1050;
  *(_QWORD *)v219 = v219 + 16;
  v221 = (__int64 *)v1033;
  strcpy((char *)(v219 + 16), "string");
  *(_QWORD *)(v219 + 8) = 6;
  v1100 = (unsigned __int64)v219;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v221,
    v220,
    2,
    v222,
    26478,
    v223,
    v737,
    v899,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1107 + 1) = 0;
  v1051 = &v1101;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1101);
  v1103 = 0;
  LOBYTE(v1104) = 0;
  *(_QWORD *)&v1105 = 0;
  v1057 = &v1105;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1104) = 3;
  v224 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v224,
    "Command args",
    v225,
    v226,
    v227,
    v228,
    v738,
    v900,
    v1012.m128_i64[0]);
  v1105 = (unsigned __int64)v224;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1108,
    (__int64)v1051,
    2,
    v229,
    v230,
    v231,
    v739,
    v901,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1109 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1112,
    (__int64)v1033,
    2,
    v232,
    v233,
    v234,
    v740,
    v902,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1113 + 1) = 0;
  v1068 = &v1143;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1143,
    (__int64)v1034,
    2,
    v235,
    v236,
    v237,
    v741,
    v903,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1144 = 0;
  LOBYTE(v1126) = 0;
  *(_QWORD *)&v1127 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1126) = 3;
  v238 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v238,
    "start_dir",
    v239,
    v240,
    v241,
    v242,
    v742,
    v904,
    v1012.m128_i64[0]);
  v1127 = (unsigned __int64)v238;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1028);
  *((_QWORD *)&v1115 + 1) = 0;
  v1116[0] = 0;
  *(_QWORD *)&v1116[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1116[0] = 3;
  v243 = operator new(0x20u);
  v244 = (__int64 *)v1028;
  *(_QWORD *)v243 = v243 + 16;
  v245 = v1035;
  strcpy((char *)(v243 + 16), "string");
  *(_QWORD *)(v243 + 8) = 6;
  *(_OWORD *)&v1116[8] = (unsigned __int64)v243;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v245,
    (__int64)v244,
    2,
    v246,
    26478,
    v247,
    v743,
    v905,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1123 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1021);
  v1119 = 0;
  LOBYTE(v1120) = 0;
  *(_QWORD *)&v1121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1120) = 3;
  v248 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v248,
    "Start directory",
    v249,
    v250,
    v251,
    v252,
    v744,
    v906,
    v1012.m128_i64[0]);
  v1067 = &v1124;
  v1121 = (unsigned __int64)v248;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1124,
    (__int64)v1021,
    2,
    v253,
    v254,
    v255,
    v745,
    v907,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1125 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1045,
    (__int64)v1035,
    2,
    v256,
    v257,
    v258,
    v746,
    v908,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1130 = 0;
  v1069 = v1145;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1145,
    (__int64)v1027,
    2,
    v259,
    v260,
    v261,
    v747,
    v909,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1146 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1024,
    (__int64)&v1141,
    3,
    v262,
    v263,
    v264,
    v748,
    v910,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1131,
    2,
    v265,
    v266,
    v267,
    v749,
    v911,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    nullptr,
    0,
    2);
  v268 = _mm_load_si128(&v1072);
  v1138 = 0;
  v1137 = v268;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1135,
    2,
    v269,
    v270,
    v271,
    v750,
    v912,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v272,
    v273,
    v274,
    v751,
    v913,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  LOBYTE(v244) = v1161;
  v275 = &v1153;
  v1161 = v1073;
  v276 = v1162;
  LOBYTE(v1073) = (_BYTE)v244;
  v1162 = v1074;
  v1074 = v276;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v275 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v275 != (char *)&v1148 );
  v277 = (__m128i *)&v1147;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v277 = (__m128i *)((char *)v277 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v277 != &v1141 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1061 = &v1113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1060 = &v1109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1066 = &v1102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1065 = &v1097;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1059 = &v1095;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1058 = &v1091;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1064 = &v1088;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1063 = &v1083;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1062 = (__int128 *)&v1078;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v278 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::start_debug_process;
  *(__m128i *)&v1149[8] = v278;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "continue_process");
  std::string::assign(v1019, "Continue process execution");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1024);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)&v1131,
    2,
    v279,
    v280,
    v281,
    v752,
    v914,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    nullptr,
    0,
    1);
  v282 = _mm_load_si128(&v1071);
  v1138 = 0;
  v1137 = v282;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v283,
    v284,
    v285,
    v753,
    v915,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    nullptr,
    0,
    2);
  v286 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v286;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v287,
    v288,
    v289,
    v754,
    v916,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v290,
    v291,
    v292,
    v755,
    v917,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v293 = v1161;
  v294 = &v1153;
  v1161 = v1073;
  v295 = v1162;
  LOBYTE(v1073) = v293;
  v1162 = v1074;
  v1074 = v295;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v294 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v294 != (char *)&v1148 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v296 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::continue_process_exec;
  *(__m128i *)&v1149[8] = v296;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "suspend_process");
  std::string::assign(v1019, "Suspend process execution");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1024);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)&v1131,
    2,
    v297,
    v298,
    v299,
    v756,
    v918,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    nullptr,
    0,
    1);
  v300 = _mm_load_si128(&v1071);
  v1138 = 0;
  v1137 = v300;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v301,
    v302,
    v303,
    v757,
    v919,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    nullptr,
    0,
    2);
  v304 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v304;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v305,
    v306,
    v307,
    v758,
    v920,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v308,
    v309,
    v310,
    v759,
    v921,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v311 = v1161;
  v312 = &v1153;
  v1161 = v1073;
  v313 = v1162;
  LOBYTE(v1073) = v311;
  v1162 = v1074;
  v1074 = v313;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v312 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v312 != (char *)&v1148 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v314 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::suspend_process_exec;
  *(__m128i *)&v1149[8] = v314;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "step_into");
  std::string::assign(v1019, "Step into instruction");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1024);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)&v1131,
    2,
    v315,
    v316,
    v317,
    v760,
    v922,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    nullptr,
    0,
    1);
  v318 = _mm_load_si128(&v1071);
  v1138 = 0;
  v1137 = v318;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v319,
    v320,
    v321,
    v761,
    v923,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    nullptr,
    0,
    2);
  v322 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v322;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v323,
    v324,
    v325,
    v762,
    v924,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v326,
    v327,
    v328,
    v763,
    v925,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v329 = v1161;
  v330 = &v1153;
  v1161 = v1073;
  v331 = v1162;
  LOBYTE(v1073) = v329;
  v1162 = v1074;
  v1074 = v331;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v330 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v330 != (char *)&v1148 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v332 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::step_into_exec;
  *(__m128i *)&v1149[8] = v332;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "step_over");
  std::string::assign(v1019, "Step over instruction");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1024);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)&v1131,
    2,
    v333,
    v334,
    v335,
    v764,
    v926,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    nullptr,
    0,
    1);
  v336 = _mm_load_si128(&v1071);
  v1138 = 0;
  v1137 = v336;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v337,
    v338,
    v339,
    v765,
    v927,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    nullptr,
    0,
    2);
  v340 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v340;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v341,
    v342,
    v343,
    v766,
    v928,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v344,
    v345,
    v346,
    v767,
    v929,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v347 = v1161;
  v348 = &v1153;
  v1161 = v1073;
  v349 = v1162;
  LOBYTE(v1073) = v347;
  v1162 = v1074;
  v1074 = v349;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v348 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v348 != (char *)&v1148 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v350 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::step_over_exec;
  *(__m128i *)&v1149[8] = v350;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "step_until_ret");
  std::string::assign(v1019, "Execute until return");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1024);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)&v1131,
    2,
    v351,
    v352,
    v353,
    v768,
    v930,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    nullptr,
    0,
    1);
  v354 = _mm_load_si128(&v1071);
  v1138 = 0;
  v1137 = v354;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v355,
    v356,
    v357,
    v769,
    v931,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    nullptr,
    0,
    2);
  v358 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v358;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v359,
    v360,
    v361,
    v770,
    v932,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v362,
    v363,
    v364,
    v771,
    v933,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v365 = v1161;
  v366 = &v1153;
  v1161 = v1073;
  v367 = v1162;
  LOBYTE(v1073) = v365;
  v1162 = v1074;
  v1074 = v367;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v366 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v366 != (char *)&v1148 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v368 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::step_until_ret_exec;
  *(__m128i *)&v1149[8] = v368;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "run_to");
  std::string::assign(v1019, "Run to address");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1028);
  *((_QWORD *)&v1115 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1047);
  *(_QWORD *)&v1116[16] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)v1028,
    2,
    v369,
    v370,
    v371,
    v772,
    v934,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1021);
  v1119 = 0;
  LOBYTE(v1120) = 0;
  *(_QWORD *)&v1121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1120) = 3;
  v372 = operator new(0x20u);
  v373 = v1027;
  *(_QWORD *)v372 = v372 + 16;
  v374 = v1021;
  strcpy((char *)(v372 + 16), "string");
  *(_QWORD *)(v372 + 8) = 6;
  v1121 = (unsigned __int64)v372;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v373,
    (__int64)v374,
    2,
    v375,
    v376,
    v377,
    v773,
    v935,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1127 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1035);
  *((_QWORD *)&v1123 + 1) = 0;
  LOBYTE(v1124) = 0;
  *(_QWORD *)&v1125 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1124) = 3;
  v378 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v378,
    "Target hex address",
    v379,
    v380,
    v381,
    v382,
    v774,
    v936,
    v1012.m128_i64[0]);
  v1125 = (unsigned __int64)v378;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1045,
    (__int64)v1035,
    2,
    v383,
    v384,
    v385,
    v775,
    v937,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1024,
    (__int64)v1027,
    2,
    v386,
    v387,
    v388,
    v776,
    v938,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1034,
    (__int64)&v1131,
    2,
    v389,
    v390,
    v391,
    v777,
    v939,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1111 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1046,
    (__int64)v1034,
    1,
    v392,
    v393,
    v394,
    v778,
    v940,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1138 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v395,
    v396,
    v397,
    v779,
    v941,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1033);
  *((_QWORD *)&v1107 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    v1033,
    1,
    2);
  v398 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v398;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v399,
    v400,
    v401,
    v780,
    v942,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v402,
    v403,
    v404,
    v781,
    v943,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  LOBYTE(v374) = v1161;
  v405 = &v1153;
  v1161 = v1073;
  v406 = v1162;
  LOBYTE(v1073) = (_BYTE)v374;
  v1162 = v1074;
  v1074 = v406;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v405 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v405 != (char *)&v1148 );
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
  v407 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::run_to_address;
  *(__m128i *)&v1149[8] = v407;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "exit_process");
  std::string::assign(v1019, "Terminate debugged process");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1024);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)&v1131,
    2,
    v408,
    v409,
    v410,
    v782,
    v944,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    nullptr,
    0,
    1);
  v411 = _mm_load_si128(&v1071);
  v1138 = 0;
  v1137 = v411;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v412,
    v413,
    v414,
    v783,
    v945,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    nullptr,
    0,
    2);
  v415 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v415;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v416,
    v417,
    v418,
    v784,
    v946,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v419,
    v420,
    v421,
    v785,
    v947,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v422 = v1161;
  v423 = &v1153;
  v1161 = v1073;
  v424 = v1162;
  LOBYTE(v1073) = v422;
  v1162 = v1074;
  v1074 = v424;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v423 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v423 != (char *)&v1148 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v425 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::exit_debug_process;
  *(__m128i *)&v1149[8] = v425;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "add_breakpoint");
  std::string::assign(v1019, "Add breakpoint at address");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1049);
  v1084 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v1085);
  *((_QWORD *)&v1086 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1141,
    (__int64)v1049,
    2,
    v426,
    v427,
    v428,
    v786,
    v948,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(v1027);
  *((_QWORD *)&v1127 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1051);
  v1103 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1048);
  v1089 = 0;
  LOBYTE(v1090) = 0;
  *(_QWORD *)&v1091 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1090) = 3;
  v429 = operator new(0x20u);
  v430 = v1050;
  *(_QWORD *)v429 = v429 + 16;
  v431 = v1048;
  strcpy((char *)(v429 + 16), "string");
  *(_QWORD *)(v429 + 8) = 6;
  v1091 = (unsigned __int64)v429;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v430,
    (__int64)v431,
    2,
    v432,
    v433,
    v434,
    v787,
    v949,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1098 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1053);
  *((_QWORD *)&v1093 + 1) = 0;
  LOBYTE(v1094) = 0;
  *(_QWORD *)&v1095 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1094) = 3;
  v435 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v435,
    "Hex address",
    v436,
    v437,
    v438,
    v439,
    v788,
    v950,
    v1012.m128_i64[0]);
  v1095 = (unsigned __int64)v435;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1099,
    (__int64)v1053,
    2,
    v440,
    v441,
    v442,
    v789,
    v951,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1100 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1104,
    (__int64)v1050,
    2,
    v443,
    v444,
    v445,
    v790,
    v952,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1105 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1035,
    (__int64)v1051,
    2,
    v446,
    v447,
    v448,
    v791,
    v953,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1123 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1021);
  v1119 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1033);
  *((_QWORD *)&v1107 + 1) = 0;
  LOBYTE(v1108) = 0;
  *(_QWORD *)&v1109 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1108) = 3;
  v449 = operator new(0x20u);
  *(_QWORD *)v449 = v449 + 16;
  v450 = (__int64 *)v1033;
  strcpy((char *)(v449 + 16), "string");
  *(_QWORD *)(v449 + 8) = 6;
  v1109 = (unsigned __int64)v449;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1135,
    (__int64)v450,
    2,
    v451,
    v452,
    v453,
    v792,
    v954,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1136 = 0;
  LOBYTE(v1110) = 0;
  *(_QWORD *)&v1111 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1110) = 3;
  v454 = operator new(0x20u);
  *(_QWORD *)v454 = v454 + 16;
  strcpy((char *)(v454 + 16), "description");
  *(_QWORD *)(v454 + 8) = 11;
  LOBYTE(v1112) = 0;
  *(_QWORD *)&v1113 = 0;
  v1111 = (unsigned __int64)v454;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1112) = 3;
  v455 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v455,
    "Breakpoint type",
    v456,
    v457,
    v458,
    v459,
    v793,
    v955,
    v1012.m128_i64[0]);
  v1113 = (unsigned __int64)v455;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1046,
    (__int64)v1034,
    2,
    v460,
    v461,
    v462,
    v794,
    v956,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1138 = 0;
  LOBYTE(v1114) = 0;
  *(_QWORD *)&v1115 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1114) = 3;
  v463 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v463, "enum", v464, v465, v466, v467, v795, v957, v1012.m128_i64[0]);
  LOBYTE(v1148) = 0;
  v1070 = (__int128 *)v1149;
  *(_QWORD *)v1149 = 0;
  v1115 = (unsigned __int64)v463;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1148) = 3;
  v468 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v468,
    "software",
    v469,
    v470,
    v471,
    v472,
    v796,
    v958,
    v1012.m128_i64[0]);
  v1149[16] = 0;
  v1070 = &v1150;
  *(_QWORD *)&v1150 = 0;
  *(_OWORD *)v1149 = (unsigned __int64)v468;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1149[16] = 3;
  v473 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v473,
    "hardware_exec",
    v474,
    v475,
    v476,
    v477,
    v797,
    v959,
    v1012.m128_i64[0]);
  LOBYTE(v1151) = 0;
  v1070 = &v1152;
  *(_QWORD *)&v1152 = 0;
  v1150 = (unsigned __int64)v473;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1151) = 3;
  v478 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v478,
    "hardware_write",
    v479,
    v480,
    v481,
    v482,
    v798,
    v960,
    v1012.m128_i64[0]);
  v1153 = 0;
  v1070 = &v1154;
  *(_QWORD *)&v1154 = 0;
  v1152 = (unsigned __int64)v478;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1153 = 3;
  v483 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v483,
    "hardware_readwrite",
    v484,
    v485,
    v486,
    v487,
    v799,
    v961,
    v1012.m128_i64[0]);
  v1154 = (unsigned __int64)v483;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    (const __m128i *)&v1148,
    4,
    2);
  v488 = _mm_load_si128(&v1071);
  *(_QWORD *)&v1116[16] = 0;
  *(__m128i *)v1116 = v488;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1139,
    (__int64)v1028,
    2,
    v489,
    v490,
    v491,
    v800,
    v962,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1139[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1120,
    (__int64)&v1135,
    3,
    v492,
    v493,
    v494,
    v801,
    v963,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1121 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1067,
    (__int64)v1021,
    2,
    v495,
    v496,
    v497,
    v802,
    v964,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1125 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1045,
    (__int64)v1035,
    2,
    v498,
    v499,
    v500,
    v803,
    v965,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1068,
    (__int64)v1027,
    2,
    v501,
    v502,
    v503,
    v804,
    v966,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1144 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1052);
  v1079 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    v1052,
    1,
    2);
  v504 = _mm_load_si128(&v1072);
  v1134 = 0;
  v1133 = v504;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1069,
    (__int64)&v1131,
    2,
    v505,
    v506,
    v507,
    v805,
    v967,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1146 = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1141,
    3,
    v508,
    v509,
    v510,
    v806,
    v968,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  LOBYTE(v450) = v1161;
  v511 = (__m128i *)&v1147;
  v1161 = v1073;
  v512 = v1162;
  LOBYTE(v1073) = (_BYTE)v450;
  v1162 = v1074;
  v1074 = v512;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v511 = (__m128i *)((char *)v511 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v511 != &v1141 );
  v513 = (__m128i *)&v1140;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
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
    v513 = (__m128i *)((char *)v513 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v513 != &v1135 );
  v514 = (void **)&v1155;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v514 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v514 != &v1148 );
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
  v515 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::add_breakpoint;
  *(__m128i *)&v1149[8] = v515;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "delete_breakpoint");
  std::string::assign(v1019, "Remove breakpoint");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1028);
  *((_QWORD *)&v1115 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1047);
  *(_QWORD *)&v1116[16] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)v1028,
    2,
    v516,
    v517,
    v518,
    v807,
    v969,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1021);
  v1119 = 0;
  LOBYTE(v1120) = 0;
  *(_QWORD *)&v1121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1120) = 3;
  v519 = operator new(0x20u);
  v520 = v1021;
  *(_QWORD *)v519 = v519 + 16;
  v521 = v1027;
  strcpy((char *)(v519 + 16), "string");
  *(_QWORD *)(v519 + 8) = 6;
  v1121 = (unsigned __int64)v519;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v521,
    (__int64)v520,
    2,
    v522,
    v523,
    26478,
    v808,
    v970,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1127 + 1) = 0;
  v1122[0] = 0;
  *(_QWORD *)&v1123 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1122[0] = 3;
  v524 = operator new(0x20u);
  *(_QWORD *)v524 = v524 + 16;
  strcpy((char *)(v524 + 16), "description");
  *(_QWORD *)(v524 + 8) = 11;
  LOBYTE(v1124) = 0;
  *(_QWORD *)&v1125 = 0;
  v1123 = (unsigned __int64)v524;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1124) = 3;
  v525 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v525,
    "Hex address",
    v526,
    v527,
    v528,
    v529,
    v809,
    v971,
    v1012.m128_i64[0]);
  v1125 = (unsigned __int64)v525;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1045,
    (__int64)v1035,
    2,
    v530,
    v531,
    v532,
    v810,
    v972,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1024,
    (__int64)v1027,
    2,
    v533,
    v534,
    v535,
    v811,
    v973,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1034,
    (__int64)&v1131,
    2,
    v536,
    v537,
    v538,
    v812,
    v974,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1111 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1046,
    (__int64)v1034,
    1,
    v539,
    v540,
    v541,
    v813,
    v975,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1138 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v542,
    v543,
    v544,
    v814,
    v976,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1033);
  *((_QWORD *)&v1107 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    v1033,
    1,
    2);
  v545 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v545;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v546,
    v547,
    v548,
    v815,
    v977,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v549,
    v550,
    v551,
    v816,
    v978,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  LOBYTE(v520) = v1161;
  v552 = &v1153;
  v1161 = v1073;
  v553 = v1162;
  LOBYTE(v1073) = (_BYTE)v520;
  v1162 = v1074;
  v1074 = v553;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v552 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v552 != (char *)&v1148 );
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
  v554 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::delete_breakpoint;
  *(__m128i *)&v1149[8] = v554;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "enable_breakpoint");
  std::string::assign(v1019, "Enable breakpoint");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1028);
  *((_QWORD *)&v1115 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1047);
  *(_QWORD *)&v1116[16] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)v1028,
    2,
    v555,
    v556,
    v557,
    v817,
    v979,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1021);
  v1119 = 0;
  LOBYTE(v1120) = 0;
  *(_QWORD *)&v1121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1120) = 3;
  v558 = operator new(0x20u);
  v559 = v1021;
  *(_QWORD *)v558 = v558 + 16;
  v560 = v1027;
  strcpy((char *)(v558 + 16), "string");
  *(_QWORD *)(v558 + 8) = 6;
  v1121 = (unsigned __int64)v558;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v560,
    (__int64)v559,
    2,
    v561,
    v562,
    26478,
    v818,
    v980,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1127 + 1) = 0;
  v1122[0] = 0;
  *(_QWORD *)&v1123 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1122[0] = 3;
  v563 = operator new(0x20u);
  *(_QWORD *)v563 = v563 + 16;
  strcpy((char *)(v563 + 16), "description");
  *(_QWORD *)(v563 + 8) = 11;
  LOBYTE(v1124) = 0;
  *(_QWORD *)&v1125 = 0;
  v1123 = (unsigned __int64)v563;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1124) = 3;
  v564 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v564,
    "Hex address",
    v565,
    v566,
    v567,
    v568,
    v819,
    v981,
    v1012.m128_i64[0]);
  v1125 = (unsigned __int64)v564;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1045,
    (__int64)v1035,
    2,
    v569,
    v570,
    v571,
    v820,
    v982,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1024,
    (__int64)v1027,
    2,
    v572,
    v573,
    v574,
    v821,
    v983,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1034,
    (__int64)&v1131,
    2,
    v575,
    v576,
    v577,
    v822,
    v984,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1111 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1046,
    (__int64)v1034,
    1,
    v578,
    v579,
    v580,
    v823,
    v985,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1138 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v581,
    v582,
    v583,
    v824,
    v986,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1033);
  *((_QWORD *)&v1107 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    v1033,
    1,
    2);
  v584 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v584;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v585,
    v586,
    v587,
    v825,
    v987,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v588,
    v589,
    v590,
    v826,
    v988,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  LOBYTE(v559) = v1161;
  v591 = &v1153;
  v1161 = v1073;
  v592 = v1162;
  LOBYTE(v1073) = (_BYTE)v559;
  v1162 = v1074;
  v1074 = v592;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v591 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v591 != (char *)&v1148 );
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
  v593 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::enable_breakpoint;
  *(__m128i *)&v1149[8] = v593;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "disable_breakpoint");
  std::string::assign(v1019, "Disable breakpoint");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1028);
  *((_QWORD *)&v1115 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1047);
  *(_QWORD *)&v1116[16] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)v1028,
    2,
    v594,
    v595,
    v596,
    v827,
    v989,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1131);
  *((_QWORD *)&v1132 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1021);
  v1119 = 0;
  LOBYTE(v1120) = 0;
  *(_QWORD *)&v1121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1120) = 3;
  v597 = operator new(0x20u);
  v598 = v1021;
  *(_QWORD *)v597 = v597 + 16;
  v599 = v1027;
  strcpy((char *)(v597 + 16), "string");
  *(_QWORD *)(v597 + 8) = 6;
  v1121 = (unsigned __int64)v597;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v599,
    (__int64)v598,
    2,
    v600,
    v601,
    26478,
    v828,
    v990,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1127 + 1) = 0;
  v1122[0] = 0;
  *(_QWORD *)&v1123 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1122[0] = 3;
  v602 = operator new(0x20u);
  *(_QWORD *)v602 = v602 + 16;
  strcpy((char *)(v602 + 16), "description");
  *(_QWORD *)(v602 + 8) = 11;
  LOBYTE(v1124) = 0;
  *(_QWORD *)&v1125 = 0;
  v1123 = (unsigned __int64)v602;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1124) = 3;
  v603 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v603,
    "Hex address",
    v604,
    v605,
    v606,
    v607,
    v829,
    v991,
    v1012.m128_i64[0]);
  v1125 = (unsigned __int64)v603;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1045,
    (__int64)v1035,
    2,
    v608,
    v609,
    v610,
    v830,
    v992,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1024,
    (__int64)v1027,
    2,
    v611,
    v612,
    v613,
    v831,
    v993,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1034,
    (__int64)&v1131,
    2,
    v614,
    v615,
    v616,
    v832,
    v994,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1111 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1046,
    (__int64)v1034,
    1,
    v617,
    v618,
    v619,
    v833,
    v995,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1138 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v620,
    v621,
    v622,
    v834,
    v996,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1033);
  *((_QWORD *)&v1107 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    v1033,
    1,
    2);
  v623 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v623;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v624,
    v625,
    v626,
    v835,
    v997,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v627,
    v628,
    v629,
    v836,
    v998,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  LOBYTE(v598) = v1161;
  v630 = &v1153;
  v1161 = v1073;
  v631 = v1162;
  LOBYTE(v1073) = (_BYTE)v598;
  v1162 = v1074;
  v1074 = v631;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v630 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v630 != (char *)&v1148 );
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
  v632 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::disable_breakpoint;
  *(__m128i *)&v1149[8] = v632;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  v1156 = 0;
  v1155 = v1018;
  v1157[0] = 0;
  v1158 = v1020;
  v1159 = 0;
  v1160[0] = 0;
  v1161 = 0;
  v1162 = 0;
  v1163 = 0;
  v1164 = 0;
  std::string::assign((__int64)&v1155, "select_thread");
  std::string::assign(v1019, "Switch to different thread");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1028);
  *((_QWORD *)&v1115 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1047);
  *(_QWORD *)&v1116[16] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1148,
    (__int64)v1028,
    2,
    v633,
    v634,
    v635,
    v837,
    v999,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *(_QWORD *)&v1149[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(&v1135);
  v1136 = 0;
  LOBYTE(v1131) = 0;
  *(_QWORD *)&v1132 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1131) = 3;
  v636 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v636,
    "thread_id",
    v637,
    v638,
    v639,
    v640,
    v838,
    v1000,
    v1012.m128_i64[0]);
  v1132 = (unsigned __int64)v636;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1021);
  v1119 = 0;
  LOBYTE(v1120) = 0;
  *(_QWORD *)&v1121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1120) = 3;
  v641 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v641,
    "integer",
    v642,
    v643,
    v644,
    v645,
    v839,
    v1001,
    v1012.m128_i64[0]);
  v1121 = (unsigned __int64)v641;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1027,
    (__int64)v1021,
    2,
    v646,
    v647,
    v648,
    v840,
    v1002,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1127 + 1) = 0;
  v1122[0] = 0;
  *(_QWORD *)&v1123 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1122[0] = 3;
  v649 = operator new(0x20u);
  *(_QWORD *)v649 = v649 + 16;
  strcpy((char *)(v649 + 16), "description");
  *(_QWORD *)(v649 + 8) = 11;
  LOBYTE(v1124) = 0;
  *(_QWORD *)&v1125 = 0;
  v1123 = (unsigned __int64)v649;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1124) = 3;
  v650 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v650,
    "Thread ID to select",
    v651,
    v652,
    v653,
    v654,
    v841,
    v1003,
    v1012.m128_i64[0]);
  v1125 = (unsigned __int64)v650;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1045,
    (__int64)v1035,
    2,
    v655,
    v656,
    v657,
    v842,
    v1004,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1024,
    (__int64)v1027,
    2,
    v658,
    v659,
    v660,
    v843,
    v1005,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1034,
    (__int64)&v1131,
    2,
    v661,
    v662,
    v663,
    v844,
    v1006,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1111 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1046,
    (__int64)v1034,
    1,
    v664,
    v665,
    v666,
    v845,
    v1007,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v1138 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (__int64)&v1135,
    2,
    v667,
    v668,
    v669,
    v846,
    v1008,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1150 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>(&v1141);
  v1142 = 0;
  v1106 = 0;
  *(_QWORD *)&v1107 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1106 = 3;
  v670 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v670,
    "thread_id",
    v671,
    v672,
    v673,
    v674,
    v847,
    v1009,
    v1012.m128_i64[0]);
  v1107 = (unsigned __int64)v670;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    v1033,
    1,
    2);
  v675 = _mm_load_si128(&v1072);
  v1144 = 0;
  v1143 = v675;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    (__int64)&v1141,
    2,
    v676,
    v677,
    v678,
    v848,
    v1010,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  *((_QWORD *)&v1152 + 1) = 0;
  LOBYTE(v1073) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)&v1148,
    3,
    v679,
    v680,
    v681,
    v849,
    v1011,
    v1012.m128_i32[0],
    v1012.m128_i32[2],
    v1013,
    (int)v1014,
    (__int64)v1015,
    (int)v1016,
    (int)v1017,
    (int)v1018,
    v1019,
    (char)v1020,
    (__int64)v1021,
    (int)v1022,
    (__int64)v1023);
  v682 = v1161;
  v683 = &v1153;
  v1161 = v1073;
  v684 = v1162;
  LOBYTE(v1073) = v682;
  v1162 = v1074;
  v1074 = v684;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v683 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v683 != (char *)&v1148 );
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
  v685 = _mm_load_si128((const __m128i *)&v1012);
  *(_QWORD *)v1149 = 0;
  v1148 = ida_mcp::tools::debugger::`anonymous namespace'::select_debug_thread;
  *(__m128i *)&v1149[8] = v685;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)&v1149[8] )
    (*(void (__fastcall **)(void **, void **, __int64))&v1149[8])(&v1148, &v1148, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1155);
  return v1165 - __readfsqword(0x28u);
}

