unsigned __int64 __fastcall ida_mcp::tools::navigation::register_tools(
        ida_mcp::tools::navigation *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i v27; // xmm0
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // si
  void **v32; // r15
  __int64 v33; // rdx
  __m128i si128; // xmm2
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 *v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 *v55; // r15
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __m128i v60; // xmm0
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  char v64; // si
  void **v65; // r15
  __int64 v66; // rax
  __m128i v67; // xmm3
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 *v70; // r15
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 *v78; // r15
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 *v83; // r15
  __int64 v84; // rdx
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
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 *v103; // r15
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __m128i v108; // xmm0
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  char v115; // si
  void **v116; // r15
  __int64 v117; // rax
  __m128i v118; // xmm4
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rax
  __int64 *v124; // r15
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 *v132; // r15
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 *v137; // r15
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 *v157; // r15
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __m128i v162; // xmm0
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  char v169; // si
  void **v170; // r15
  __int64 v171; // rax
  __m128i v172; // xmm5
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 v177; // rax
  __int64 *v178; // r15
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 *v186; // r15
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 *v191; // r15
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
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
  __int64 *v211; // r15
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  __m128i v216; // xmm0
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r9
  __int64 v220; // rcx
  __int64 v221; // r8
  __int64 v222; // r9
  char v223; // si
  void **v224; // r15
  __int64 v225; // rax
  __m128i v226; // xmm6
  __int64 v227; // rax
  __int64 v228; // r8
  __int64 v229; // r9
  __int64 v230; // rax
  __int64 *v231; // r15
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  __int64 v236; // rcx
  __int64 v237; // r8
  __int64 v238; // r9
  __int64 *v239; // r15
  __int64 v240; // rdx
  __int64 v241; // rcx
  __int64 v242; // r8
  __int64 v243; // r9
  __int64 *v244; // r15
  __int64 v245; // rdx
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 v248; // r9
  __int64 v249; // rcx
  __int64 v250; // r8
  __int64 v251; // r9
  __int64 v252; // rcx
  __int64 v253; // r8
  __int64 v254; // r9
  __int64 v255; // rcx
  __int64 v256; // r8
  __int64 v257; // r9
  __int64 v258; // rcx
  __int64 v259; // r8
  __int64 v260; // r9
  __int64 v261; // rcx
  __int64 v262; // r8
  __int64 v263; // r9
  __int64 *v264; // r15
  __int64 v265; // rdx
  __int64 v266; // rcx
  __int64 v267; // r8
  __int64 v268; // r9
  __m128i v269; // xmm0
  __int64 v270; // rcx
  __int64 v271; // r8
  __int64 v272; // r9
  __int64 v273; // rcx
  __int64 v274; // r8
  __int64 v275; // r9
  char v276; // si
  void **v277; // r15
  __int64 v278; // rax
  __m128i v279; // xmm7
  __int64 v280; // rax
  __int64 v281; // rcx
  __int64 v282; // r8
  __int64 v283; // r9
  __int64 v284; // rax
  __int64 *v285; // r15
  __int64 v286; // rdx
  __int64 v287; // rcx
  __int64 v288; // r8
  __int64 v289; // r9
  __int64 v290; // rcx
  __int64 v291; // r8
  __int64 v292; // r9
  __int64 *v293; // r15
  __int64 v294; // rdx
  __int64 v295; // rcx
  __int64 v296; // r8
  __int64 v297; // r9
  __int64 *v298; // r15
  __int64 v299; // rdx
  __int64 v300; // rcx
  __int64 v301; // r8
  __int64 v302; // r9
  __int64 v303; // rcx
  __int64 v304; // r8
  __int64 v305; // r9
  __int64 v306; // rcx
  __int64 v307; // r8
  __int64 v308; // r9
  __int64 v309; // rcx
  __int64 v310; // r8
  __int64 v311; // r9
  __int64 v312; // rcx
  __int64 v313; // r8
  __int64 v314; // r9
  __int64 v315; // rcx
  __int64 v316; // r8
  __int64 v317; // r9
  __int64 *v318; // r15
  __int64 v319; // rdx
  __int64 v320; // rcx
  __int64 v321; // r8
  __int64 v322; // r9
  __m128i v323; // xmm0
  __int64 v324; // rcx
  __int64 v325; // r8
  __int64 v326; // r9
  __int64 v327; // rcx
  __int64 v328; // r8
  __int64 v329; // r9
  char v330; // si
  void **v331; // r15
  __int64 v332; // rax
  __m128i v333; // xmm2
  __int64 v334; // rax
  __int64 v335; // rcx
  __int64 v336; // r8
  __int64 v337; // r9
  __int64 v338; // rax
  __m128i v339; // xmm0
  __int64 v340; // rcx
  __int64 v341; // r8
  __int64 v342; // r9
  __int64 v343; // rcx
  __int64 v344; // r8
  __int64 v345; // r9
  char v346; // si
  __int64 v347; // rax
  __m128i v348; // xmm3
  __int64 v349; // rax
  __int64 v350; // rcx
  __int64 v351; // r8
  __int64 v352; // r9
  __int64 v353; // rax
  __int64 *v354; // r15
  __int64 v355; // rdx
  __int64 v356; // rcx
  __int64 v357; // r8
  __int64 v358; // r9
  __int64 v359; // rcx
  __int64 v360; // r8
  __int64 v361; // r9
  __int64 *v362; // r15
  __int64 v363; // rdx
  __int64 v364; // rcx
  __int64 v365; // r8
  __int64 v366; // r9
  __int64 *v367; // r15
  __int64 v368; // rdx
  __int64 v369; // rcx
  __int64 v370; // r8
  __int64 v371; // r9
  __int64 v372; // rcx
  __int64 v373; // r8
  __int64 v374; // r9
  __int64 v375; // rcx
  __int64 v376; // r8
  __int64 v377; // r9
  __int64 v378; // rcx
  __int64 v379; // r8
  __int64 v380; // r9
  __int64 v381; // rcx
  __int64 v382; // r8
  __int64 v383; // r9
  __int64 v384; // rcx
  __int64 v385; // r8
  __int64 v386; // r9
  __int64 *v387; // r15
  __int64 v388; // rdx
  __int64 v389; // rcx
  __int64 v390; // r8
  __int64 v391; // r9
  __m128i v392; // xmm0
  __int64 v393; // rcx
  __int64 v394; // r8
  __int64 v395; // r9
  __int64 v396; // rcx
  __int64 v397; // r8
  __int64 v398; // r9
  char v399; // si
  void **v400; // r15
  __int64 v401; // rax
  __m128i v402; // xmm4
  __int64 v403; // rax
  __int64 v404; // rcx
  __int64 v405; // r9
  __int64 v406; // rax
  __int64 *v407; // r15
  __int64 v408; // rdx
  __int64 v409; // rcx
  __int64 v410; // r8
  __int64 v411; // r9
  __int64 v412; // rcx
  __int64 v413; // r8
  __int64 v414; // r9
  __int64 *v415; // r15
  __int64 v416; // rdx
  __int64 v417; // rcx
  __int64 v418; // r8
  __int64 v419; // r9
  __int64 *v420; // r15
  __int64 v421; // rdx
  __int64 v422; // rcx
  __int64 v423; // r8
  __int64 v424; // r9
  __int64 v425; // rcx
  __int64 v426; // r8
  __int64 v427; // r9
  __int64 v428; // rcx
  __int64 v429; // r8
  __int64 v430; // r9
  __int64 v431; // rcx
  __int64 v432; // r8
  __int64 v433; // r9
  __int64 v434; // rcx
  __int64 v435; // r8
  __int64 v436; // r9
  __int64 v437; // rcx
  __int64 v438; // r8
  __int64 v439; // r9
  __int64 *v440; // r13
  __int64 v441; // rdx
  __int64 v442; // rcx
  __int64 v443; // r8
  __int64 v444; // r9
  __m128i v445; // xmm0
  __int64 v446; // rcx
  __int64 v447; // r8
  __int64 v448; // r9
  __int64 v449; // rcx
  __int64 v450; // r8
  __int64 v451; // r9
  char v452; // si
  void **v453; // r12
  __int64 v454; // rax
  __m128i v455; // xmm5
  int v457; // [rsp+0h] [rbp-408h]
  int v458; // [rsp+0h] [rbp-408h]
  int v459; // [rsp+0h] [rbp-408h]
  int v460; // [rsp+0h] [rbp-408h]
  int v461; // [rsp+0h] [rbp-408h]
  int v462; // [rsp+0h] [rbp-408h]
  int v463; // [rsp+0h] [rbp-408h]
  int v464; // [rsp+0h] [rbp-408h]
  int v465; // [rsp+0h] [rbp-408h]
  int v466; // [rsp+0h] [rbp-408h]
  int v467; // [rsp+0h] [rbp-408h]
  int v468; // [rsp+0h] [rbp-408h]
  int v469; // [rsp+0h] [rbp-408h]
  int v470; // [rsp+0h] [rbp-408h]
  int v471; // [rsp+0h] [rbp-408h]
  int v472; // [rsp+0h] [rbp-408h]
  int v473; // [rsp+0h] [rbp-408h]
  int v474; // [rsp+0h] [rbp-408h]
  int v475; // [rsp+0h] [rbp-408h]
  int v476; // [rsp+0h] [rbp-408h]
  int v477; // [rsp+0h] [rbp-408h]
  int v478; // [rsp+0h] [rbp-408h]
  int v479; // [rsp+0h] [rbp-408h]
  int v480; // [rsp+0h] [rbp-408h]
  int v481; // [rsp+0h] [rbp-408h]
  int v482; // [rsp+0h] [rbp-408h]
  int v483; // [rsp+0h] [rbp-408h]
  int v484; // [rsp+0h] [rbp-408h]
  int v485; // [rsp+0h] [rbp-408h]
  int v486; // [rsp+0h] [rbp-408h]
  int v487; // [rsp+0h] [rbp-408h]
  int v488; // [rsp+0h] [rbp-408h]
  int v489; // [rsp+0h] [rbp-408h]
  int v490; // [rsp+0h] [rbp-408h]
  int v491; // [rsp+0h] [rbp-408h]
  int v492; // [rsp+0h] [rbp-408h]
  int v493; // [rsp+0h] [rbp-408h]
  int v494; // [rsp+0h] [rbp-408h]
  int v495; // [rsp+0h] [rbp-408h]
  int v496; // [rsp+0h] [rbp-408h]
  int v497; // [rsp+0h] [rbp-408h]
  int v498; // [rsp+0h] [rbp-408h]
  int v499; // [rsp+0h] [rbp-408h]
  int v500; // [rsp+0h] [rbp-408h]
  int v501; // [rsp+0h] [rbp-408h]
  int v502; // [rsp+0h] [rbp-408h]
  int v503; // [rsp+0h] [rbp-408h]
  int v504; // [rsp+0h] [rbp-408h]
  int v505; // [rsp+0h] [rbp-408h]
  int v506; // [rsp+0h] [rbp-408h]
  int v507; // [rsp+0h] [rbp-408h]
  int v508; // [rsp+0h] [rbp-408h]
  int v509; // [rsp+0h] [rbp-408h]
  int v510; // [rsp+0h] [rbp-408h]
  int v511; // [rsp+0h] [rbp-408h]
  int v512; // [rsp+0h] [rbp-408h]
  int v513; // [rsp+0h] [rbp-408h]
  int v514; // [rsp+0h] [rbp-408h]
  int v515; // [rsp+0h] [rbp-408h]
  int v516; // [rsp+0h] [rbp-408h]
  int v517; // [rsp+0h] [rbp-408h]
  int v518; // [rsp+0h] [rbp-408h]
  int v519; // [rsp+0h] [rbp-408h]
  int v520; // [rsp+0h] [rbp-408h]
  int v521; // [rsp+0h] [rbp-408h]
  int v522; // [rsp+0h] [rbp-408h]
  int v523; // [rsp+0h] [rbp-408h]
  int v524; // [rsp+0h] [rbp-408h]
  int v525; // [rsp+0h] [rbp-408h]
  int v526; // [rsp+0h] [rbp-408h]
  int v527; // [rsp+0h] [rbp-408h]
  int v528; // [rsp+0h] [rbp-408h]
  int v529; // [rsp+0h] [rbp-408h]
  int v530; // [rsp+0h] [rbp-408h]
  int v531; // [rsp+0h] [rbp-408h]
  int v532; // [rsp+0h] [rbp-408h]
  int v533; // [rsp+0h] [rbp-408h]
  int v534; // [rsp+0h] [rbp-408h]
  int v535; // [rsp+0h] [rbp-408h]
  int v536; // [rsp+0h] [rbp-408h]
  int v537; // [rsp+0h] [rbp-408h]
  int v538; // [rsp+0h] [rbp-408h]
  int v539; // [rsp+0h] [rbp-408h]
  int v540; // [rsp+0h] [rbp-408h]
  int v541; // [rsp+0h] [rbp-408h]
  int v542; // [rsp+0h] [rbp-408h]
  int v543; // [rsp+0h] [rbp-408h]
  int v544; // [rsp+0h] [rbp-408h]
  int v545; // [rsp+0h] [rbp-408h]
  int v546; // [rsp+0h] [rbp-408h]
  int v547; // [rsp+0h] [rbp-408h]
  int v548; // [rsp+0h] [rbp-408h]
  int v549; // [rsp+0h] [rbp-408h]
  int v550; // [rsp+0h] [rbp-408h]
  int v551; // [rsp+0h] [rbp-408h]
  int v552; // [rsp+0h] [rbp-408h]
  int v553; // [rsp+0h] [rbp-408h]
  int v554; // [rsp+0h] [rbp-408h]
  int v555; // [rsp+0h] [rbp-408h]
  int v556; // [rsp+0h] [rbp-408h]
  int v557; // [rsp+0h] [rbp-408h]
  int v558; // [rsp+0h] [rbp-408h]
  int v559; // [rsp+0h] [rbp-408h]
  int v560; // [rsp+0h] [rbp-408h]
  int v561; // [rsp+8h] [rbp-400h]
  int v562; // [rsp+8h] [rbp-400h]
  const __m128i *v563; // [rsp+8h] [rbp-400h]
  int v564; // [rsp+8h] [rbp-400h]
  __int64 v565; // [rsp+8h] [rbp-400h]
  int v566; // [rsp+8h] [rbp-400h]
  _QWORD *v567; // [rsp+8h] [rbp-400h]
  int v568; // [rsp+8h] [rbp-400h]
  const __m128i *v569; // [rsp+8h] [rbp-400h]
  int v570; // [rsp+8h] [rbp-400h]
  __int64 v571; // [rsp+8h] [rbp-400h]
  int v572; // [rsp+8h] [rbp-400h]
  _QWORD *v573; // [rsp+8h] [rbp-400h]
  int v574; // [rsp+8h] [rbp-400h]
  int v575; // [rsp+8h] [rbp-400h]
  __int64 v576; // [rsp+8h] [rbp-400h]
  __int64 v577; // [rsp+8h] [rbp-400h]
  __int64 v578; // [rsp+8h] [rbp-400h]
  __int64 v579; // [rsp+8h] [rbp-400h]
  __int64 v580; // [rsp+8h] [rbp-400h]
  int v581; // [rsp+8h] [rbp-400h]
  __int64 v582; // [rsp+8h] [rbp-400h]
  __int64 v583; // [rsp+8h] [rbp-400h]
  __int64 v584; // [rsp+8h] [rbp-400h]
  int v585; // [rsp+8h] [rbp-400h]
  _QWORD *v586; // [rsp+8h] [rbp-400h]
  int v587; // [rsp+8h] [rbp-400h]
  int v588; // [rsp+8h] [rbp-400h]
  __int64 v589; // [rsp+8h] [rbp-400h]
  __int64 v590; // [rsp+8h] [rbp-400h]
  __int64 v591; // [rsp+8h] [rbp-400h]
  __int64 v592; // [rsp+8h] [rbp-400h]
  __int64 v593; // [rsp+8h] [rbp-400h]
  int v594; // [rsp+8h] [rbp-400h]
  __int64 v595; // [rsp+8h] [rbp-400h]
  __int64 v596; // [rsp+8h] [rbp-400h]
  __int64 v597; // [rsp+8h] [rbp-400h]
  int v598; // [rsp+8h] [rbp-400h]
  _QWORD *v599; // [rsp+8h] [rbp-400h]
  int v600; // [rsp+8h] [rbp-400h]
  int v601; // [rsp+8h] [rbp-400h]
  __int64 v602; // [rsp+8h] [rbp-400h]
  __int64 v603; // [rsp+8h] [rbp-400h]
  __int64 v604; // [rsp+8h] [rbp-400h]
  __int64 v605; // [rsp+8h] [rbp-400h]
  __int64 v606; // [rsp+8h] [rbp-400h]
  int v607; // [rsp+8h] [rbp-400h]
  __int64 v608; // [rsp+8h] [rbp-400h]
  __int64 v609; // [rsp+8h] [rbp-400h]
  __int64 v610; // [rsp+8h] [rbp-400h]
  int v611; // [rsp+8h] [rbp-400h]
  _QWORD *v612; // [rsp+8h] [rbp-400h]
  int v613; // [rsp+8h] [rbp-400h]
  int v614; // [rsp+8h] [rbp-400h]
  __int64 v615; // [rsp+8h] [rbp-400h]
  __int64 v616; // [rsp+8h] [rbp-400h]
  __int64 v617; // [rsp+8h] [rbp-400h]
  __int64 v618; // [rsp+8h] [rbp-400h]
  __int64 v619; // [rsp+8h] [rbp-400h]
  int v620; // [rsp+8h] [rbp-400h]
  __int64 v621; // [rsp+8h] [rbp-400h]
  __int64 v622; // [rsp+8h] [rbp-400h]
  __int64 v623; // [rsp+8h] [rbp-400h]
  int v624; // [rsp+8h] [rbp-400h]
  _QWORD *v625; // [rsp+8h] [rbp-400h]
  int v626; // [rsp+8h] [rbp-400h]
  int v627; // [rsp+8h] [rbp-400h]
  __int64 v628; // [rsp+8h] [rbp-400h]
  __int64 v629; // [rsp+8h] [rbp-400h]
  __int64 v630; // [rsp+8h] [rbp-400h]
  __int64 v631; // [rsp+8h] [rbp-400h]
  __int64 v632; // [rsp+8h] [rbp-400h]
  int v633; // [rsp+8h] [rbp-400h]
  __int64 v634; // [rsp+8h] [rbp-400h]
  __int64 v635; // [rsp+8h] [rbp-400h]
  __int64 v636; // [rsp+8h] [rbp-400h]
  __int64 v637; // [rsp+8h] [rbp-400h]
  __int64 v638; // [rsp+8h] [rbp-400h]
  __int64 v639; // [rsp+8h] [rbp-400h]
  int v640; // [rsp+8h] [rbp-400h]
  _QWORD *v641; // [rsp+8h] [rbp-400h]
  int v642; // [rsp+8h] [rbp-400h]
  int v643; // [rsp+8h] [rbp-400h]
  __int64 v644; // [rsp+8h] [rbp-400h]
  __int64 v645; // [rsp+8h] [rbp-400h]
  __int64 v646; // [rsp+8h] [rbp-400h]
  __int64 v647; // [rsp+8h] [rbp-400h]
  __int64 v648; // [rsp+8h] [rbp-400h]
  int v649; // [rsp+8h] [rbp-400h]
  __int64 v650; // [rsp+8h] [rbp-400h]
  __int64 v651; // [rsp+8h] [rbp-400h]
  __int64 v652; // [rsp+8h] [rbp-400h]
  int v653; // [rsp+8h] [rbp-400h]
  _QWORD *v654; // [rsp+8h] [rbp-400h]
  int v655; // [rsp+8h] [rbp-400h]
  int v656; // [rsp+8h] [rbp-400h]
  __int64 v657; // [rsp+8h] [rbp-400h]
  __int64 v658; // [rsp+8h] [rbp-400h]
  __int64 v659; // [rsp+8h] [rbp-400h]
  __int64 v660; // [rsp+8h] [rbp-400h]
  __int64 v661; // [rsp+8h] [rbp-400h]
  int v662; // [rsp+8h] [rbp-400h]
  __int64 v663; // [rsp+8h] [rbp-400h]
  __int64 v664; // [rsp+8h] [rbp-400h]
  __int64 v665; // [rsp+10h] [rbp-3F8h]
  __int64 v666; // [rsp+10h] [rbp-3F8h]
  int v667; // [rsp+10h] [rbp-3F8h]
  __int64 v668; // [rsp+10h] [rbp-3F8h]
  int v669; // [rsp+10h] [rbp-3F8h]
  __m128i *v670; // [rsp+10h] [rbp-3F8h]
  __int64 v671; // [rsp+10h] [rbp-3F8h]
  __int64 v672; // [rsp+10h] [rbp-3F8h]
  int v673; // [rsp+10h] [rbp-3F8h]
  __int64 v674; // [rsp+10h] [rbp-3F8h]
  int v675; // [rsp+10h] [rbp-3F8h]
  __m128i *v676; // [rsp+10h] [rbp-3F8h]
  int v677; // [rsp+10h] [rbp-3F8h]
  __int64 v678; // [rsp+10h] [rbp-3F8h]
  __int64 v679; // [rsp+10h] [rbp-3F8h]
  int v680; // [rsp+10h] [rbp-3F8h]
  int v681; // [rsp+10h] [rbp-3F8h]
  int v682; // [rsp+10h] [rbp-3F8h]
  int v683; // [rsp+10h] [rbp-3F8h]
  int v684; // [rsp+10h] [rbp-3F8h]
  __int64 v685; // [rsp+10h] [rbp-3F8h]
  int v686; // [rsp+10h] [rbp-3F8h]
  int v687; // [rsp+10h] [rbp-3F8h]
  _QWORD *v688; // [rsp+10h] [rbp-3F8h]
  __int64 v689; // [rsp+10h] [rbp-3F8h]
  int v690; // [rsp+10h] [rbp-3F8h]
  __int64 v691; // [rsp+10h] [rbp-3F8h]
  __int64 v692; // [rsp+10h] [rbp-3F8h]
  int v693; // [rsp+10h] [rbp-3F8h]
  int v694; // [rsp+10h] [rbp-3F8h]
  int v695; // [rsp+10h] [rbp-3F8h]
  int v696; // [rsp+10h] [rbp-3F8h]
  int v697; // [rsp+10h] [rbp-3F8h]
  __int64 v698; // [rsp+10h] [rbp-3F8h]
  int v699; // [rsp+10h] [rbp-3F8h]
  int v700; // [rsp+10h] [rbp-3F8h]
  _QWORD *v701; // [rsp+10h] [rbp-3F8h]
  __int64 v702; // [rsp+10h] [rbp-3F8h]
  int v703; // [rsp+10h] [rbp-3F8h]
  __int64 v704; // [rsp+10h] [rbp-3F8h]
  __int64 v705; // [rsp+10h] [rbp-3F8h]
  int v706; // [rsp+10h] [rbp-3F8h]
  int v707; // [rsp+10h] [rbp-3F8h]
  int v708; // [rsp+10h] [rbp-3F8h]
  int v709; // [rsp+10h] [rbp-3F8h]
  int v710; // [rsp+10h] [rbp-3F8h]
  __int64 v711; // [rsp+10h] [rbp-3F8h]
  int v712; // [rsp+10h] [rbp-3F8h]
  int v713; // [rsp+10h] [rbp-3F8h]
  _QWORD *v714; // [rsp+10h] [rbp-3F8h]
  __int64 v715; // [rsp+10h] [rbp-3F8h]
  int v716; // [rsp+10h] [rbp-3F8h]
  __int64 v717; // [rsp+10h] [rbp-3F8h]
  __int64 v718; // [rsp+10h] [rbp-3F8h]
  int v719; // [rsp+10h] [rbp-3F8h]
  int v720; // [rsp+10h] [rbp-3F8h]
  int v721; // [rsp+10h] [rbp-3F8h]
  int v722; // [rsp+10h] [rbp-3F8h]
  int v723; // [rsp+10h] [rbp-3F8h]
  __int64 v724; // [rsp+10h] [rbp-3F8h]
  int v725; // [rsp+10h] [rbp-3F8h]
  int v726; // [rsp+10h] [rbp-3F8h]
  _QWORD *v727; // [rsp+10h] [rbp-3F8h]
  __int64 v728; // [rsp+10h] [rbp-3F8h]
  int v729; // [rsp+10h] [rbp-3F8h]
  __int64 v730; // [rsp+10h] [rbp-3F8h]
  __int64 v731; // [rsp+10h] [rbp-3F8h]
  int v732; // [rsp+10h] [rbp-3F8h]
  int v733; // [rsp+10h] [rbp-3F8h]
  int v734; // [rsp+10h] [rbp-3F8h]
  int v735; // [rsp+10h] [rbp-3F8h]
  int v736; // [rsp+10h] [rbp-3F8h]
  __int64 v737; // [rsp+10h] [rbp-3F8h]
  int v738; // [rsp+10h] [rbp-3F8h]
  int v739; // [rsp+10h] [rbp-3F8h]
  int v740; // [rsp+10h] [rbp-3F8h]
  int v741; // [rsp+10h] [rbp-3F8h]
  int v742; // [rsp+10h] [rbp-3F8h]
  _QWORD *v743; // [rsp+10h] [rbp-3F8h]
  __int64 v744; // [rsp+10h] [rbp-3F8h]
  int v745; // [rsp+10h] [rbp-3F8h]
  __int64 v746; // [rsp+10h] [rbp-3F8h]
  __int64 v747; // [rsp+10h] [rbp-3F8h]
  int v748; // [rsp+10h] [rbp-3F8h]
  int v749; // [rsp+10h] [rbp-3F8h]
  int v750; // [rsp+10h] [rbp-3F8h]
  int v751; // [rsp+10h] [rbp-3F8h]
  int v752; // [rsp+10h] [rbp-3F8h]
  __int64 v753; // [rsp+10h] [rbp-3F8h]
  int v754; // [rsp+10h] [rbp-3F8h]
  int v755; // [rsp+10h] [rbp-3F8h]
  _QWORD *v756; // [rsp+10h] [rbp-3F8h]
  __int64 v757; // [rsp+10h] [rbp-3F8h]
  int v758; // [rsp+10h] [rbp-3F8h]
  __int64 v759; // [rsp+10h] [rbp-3F8h]
  __int64 v760; // [rsp+10h] [rbp-3F8h]
  int v761; // [rsp+10h] [rbp-3F8h]
  int v762; // [rsp+10h] [rbp-3F8h]
  int v763; // [rsp+10h] [rbp-3F8h]
  int v764; // [rsp+10h] [rbp-3F8h]
  int v765; // [rsp+10h] [rbp-3F8h]
  __int64 v766; // [rsp+10h] [rbp-3F8h]
  int v767; // [rsp+10h] [rbp-3F8h]
  int v768; // [rsp+10h] [rbp-3F8h]
  int v769; // [rsp+18h] [rbp-3F0h]
  int v770; // [rsp+18h] [rbp-3F0h]
  int v771; // [rsp+18h] [rbp-3F0h]
  int v772; // [rsp+18h] [rbp-3F0h]
  int v773; // [rsp+18h] [rbp-3F0h]
  int v774; // [rsp+18h] [rbp-3F0h]
  int v775; // [rsp+18h] [rbp-3F0h]
  int v776; // [rsp+18h] [rbp-3F0h]
  int v777; // [rsp+18h] [rbp-3F0h]
  int v778; // [rsp+18h] [rbp-3F0h]
  int v779; // [rsp+18h] [rbp-3F0h]
  int v780; // [rsp+18h] [rbp-3F0h]
  int v781; // [rsp+18h] [rbp-3F0h]
  int v782; // [rsp+18h] [rbp-3F0h]
  int v783; // [rsp+18h] [rbp-3F0h]
  int v784; // [rsp+18h] [rbp-3F0h]
  int v785; // [rsp+18h] [rbp-3F0h]
  int v786; // [rsp+18h] [rbp-3F0h]
  int v787; // [rsp+18h] [rbp-3F0h]
  int v788; // [rsp+18h] [rbp-3F0h]
  int v789; // [rsp+18h] [rbp-3F0h]
  int v790; // [rsp+18h] [rbp-3F0h]
  int v791; // [rsp+18h] [rbp-3F0h]
  int v792; // [rsp+18h] [rbp-3F0h]
  int v793; // [rsp+18h] [rbp-3F0h]
  int v794; // [rsp+18h] [rbp-3F0h]
  int v795; // [rsp+18h] [rbp-3F0h]
  int v796; // [rsp+18h] [rbp-3F0h]
  int v797; // [rsp+18h] [rbp-3F0h]
  int v798; // [rsp+18h] [rbp-3F0h]
  int v799; // [rsp+18h] [rbp-3F0h]
  int v800; // [rsp+18h] [rbp-3F0h]
  int v801; // [rsp+18h] [rbp-3F0h]
  int v802; // [rsp+18h] [rbp-3F0h]
  int v803; // [rsp+18h] [rbp-3F0h]
  int v804; // [rsp+18h] [rbp-3F0h]
  int v805; // [rsp+18h] [rbp-3F0h]
  int v806; // [rsp+18h] [rbp-3F0h]
  int v807; // [rsp+18h] [rbp-3F0h]
  int v808; // [rsp+18h] [rbp-3F0h]
  int v809; // [rsp+18h] [rbp-3F0h]
  int v810; // [rsp+18h] [rbp-3F0h]
  int v811; // [rsp+18h] [rbp-3F0h]
  int v812; // [rsp+18h] [rbp-3F0h]
  int v813; // [rsp+18h] [rbp-3F0h]
  int v814; // [rsp+18h] [rbp-3F0h]
  int v815; // [rsp+18h] [rbp-3F0h]
  int v816; // [rsp+18h] [rbp-3F0h]
  int v817; // [rsp+18h] [rbp-3F0h]
  int v818; // [rsp+18h] [rbp-3F0h]
  int v819; // [rsp+18h] [rbp-3F0h]
  int v820; // [rsp+18h] [rbp-3F0h]
  int v821; // [rsp+18h] [rbp-3F0h]
  int v822; // [rsp+18h] [rbp-3F0h]
  int v823; // [rsp+18h] [rbp-3F0h]
  int v824; // [rsp+18h] [rbp-3F0h]
  int v825; // [rsp+18h] [rbp-3F0h]
  int v826; // [rsp+18h] [rbp-3F0h]
  int v827; // [rsp+18h] [rbp-3F0h]
  int v828; // [rsp+18h] [rbp-3F0h]
  int v829; // [rsp+18h] [rbp-3F0h]
  int v830; // [rsp+18h] [rbp-3F0h]
  int v831; // [rsp+18h] [rbp-3F0h]
  int v832; // [rsp+18h] [rbp-3F0h]
  int v833; // [rsp+18h] [rbp-3F0h]
  int v834; // [rsp+18h] [rbp-3F0h]
  int v835; // [rsp+18h] [rbp-3F0h]
  int v836; // [rsp+18h] [rbp-3F0h]
  int v837; // [rsp+20h] [rbp-3E8h]
  __m128i *v838; // [rsp+20h] [rbp-3E8h]
  int v839; // [rsp+20h] [rbp-3E8h]
  _QWORD *v840; // [rsp+20h] [rbp-3E8h]
  int v841; // [rsp+20h] [rbp-3E8h]
  int v842; // [rsp+20h] [rbp-3E8h]
  int v843; // [rsp+20h] [rbp-3E8h]
  int v844; // [rsp+20h] [rbp-3E8h]
  int v845; // [rsp+20h] [rbp-3E8h]
  int v846; // [rsp+20h] [rbp-3E8h]
  int v847; // [rsp+20h] [rbp-3E8h]
  int v848; // [rsp+20h] [rbp-3E8h]
  _QWORD *v849; // [rsp+20h] [rbp-3E8h]
  int v850; // [rsp+20h] [rbp-3E8h]
  int v851; // [rsp+20h] [rbp-3E8h]
  int v852; // [rsp+20h] [rbp-3E8h]
  int v853; // [rsp+20h] [rbp-3E8h]
  int v854; // [rsp+20h] [rbp-3E8h]
  int v855; // [rsp+20h] [rbp-3E8h]
  int v856; // [rsp+20h] [rbp-3E8h]
  int v857; // [rsp+20h] [rbp-3E8h]
  _QWORD *v858; // [rsp+20h] [rbp-3E8h]
  int v859; // [rsp+20h] [rbp-3E8h]
  int v860; // [rsp+20h] [rbp-3E8h]
  int v861; // [rsp+20h] [rbp-3E8h]
  int v862; // [rsp+20h] [rbp-3E8h]
  int v863; // [rsp+20h] [rbp-3E8h]
  int v864; // [rsp+20h] [rbp-3E8h]
  int v865; // [rsp+20h] [rbp-3E8h]
  int v866; // [rsp+20h] [rbp-3E8h]
  _QWORD *v867; // [rsp+20h] [rbp-3E8h]
  int v868; // [rsp+20h] [rbp-3E8h]
  int v869; // [rsp+20h] [rbp-3E8h]
  int v870; // [rsp+20h] [rbp-3E8h]
  int v871; // [rsp+20h] [rbp-3E8h]
  int v872; // [rsp+20h] [rbp-3E8h]
  int v873; // [rsp+20h] [rbp-3E8h]
  int v874; // [rsp+20h] [rbp-3E8h]
  int v875; // [rsp+20h] [rbp-3E8h]
  _QWORD *v876; // [rsp+20h] [rbp-3E8h]
  int v877; // [rsp+20h] [rbp-3E8h]
  int v878; // [rsp+20h] [rbp-3E8h]
  int v879; // [rsp+20h] [rbp-3E8h]
  int v880; // [rsp+20h] [rbp-3E8h]
  int v881; // [rsp+20h] [rbp-3E8h]
  int v882; // [rsp+20h] [rbp-3E8h]
  int v883; // [rsp+20h] [rbp-3E8h]
  int v884; // [rsp+20h] [rbp-3E8h]
  int v885; // [rsp+20h] [rbp-3E8h]
  int v886; // [rsp+20h] [rbp-3E8h]
  int v887; // [rsp+20h] [rbp-3E8h]
  _QWORD *v888; // [rsp+20h] [rbp-3E8h]
  int v889; // [rsp+20h] [rbp-3E8h]
  int v890; // [rsp+20h] [rbp-3E8h]
  int v891; // [rsp+20h] [rbp-3E8h]
  int v892; // [rsp+20h] [rbp-3E8h]
  int v893; // [rsp+20h] [rbp-3E8h]
  int v894; // [rsp+20h] [rbp-3E8h]
  int v895; // [rsp+20h] [rbp-3E8h]
  int v896; // [rsp+20h] [rbp-3E8h]
  _QWORD *v897; // [rsp+20h] [rbp-3E8h]
  int v898; // [rsp+20h] [rbp-3E8h]
  int v899; // [rsp+20h] [rbp-3E8h]
  int v900; // [rsp+20h] [rbp-3E8h]
  int v901; // [rsp+20h] [rbp-3E8h]
  int v902; // [rsp+20h] [rbp-3E8h]
  int v903; // [rsp+20h] [rbp-3E8h]
  int v904; // [rsp+20h] [rbp-3E8h]
  int v905; // [rsp+28h] [rbp-3E0h]
  int v906; // [rsp+28h] [rbp-3E0h]
  int v907; // [rsp+28h] [rbp-3E0h]
  int v908; // [rsp+28h] [rbp-3E0h]
  int v909; // [rsp+28h] [rbp-3E0h]
  int v910; // [rsp+28h] [rbp-3E0h]
  int v911; // [rsp+28h] [rbp-3E0h]
  int v912; // [rsp+28h] [rbp-3E0h]
  int v913; // [rsp+28h] [rbp-3E0h]
  int v914; // [rsp+28h] [rbp-3E0h]
  int v915; // [rsp+28h] [rbp-3E0h]
  int v916; // [rsp+28h] [rbp-3E0h]
  int v917; // [rsp+28h] [rbp-3E0h]
  int v918; // [rsp+28h] [rbp-3E0h]
  int v919; // [rsp+28h] [rbp-3E0h]
  int v920; // [rsp+28h] [rbp-3E0h]
  int v921; // [rsp+28h] [rbp-3E0h]
  int v922; // [rsp+28h] [rbp-3E0h]
  int v923; // [rsp+28h] [rbp-3E0h]
  int v924; // [rsp+28h] [rbp-3E0h]
  int v925; // [rsp+28h] [rbp-3E0h]
  int v926; // [rsp+28h] [rbp-3E0h]
  int v927; // [rsp+28h] [rbp-3E0h]
  int v928; // [rsp+28h] [rbp-3E0h]
  int v929; // [rsp+28h] [rbp-3E0h]
  int v930; // [rsp+28h] [rbp-3E0h]
  int v931; // [rsp+28h] [rbp-3E0h]
  int v932; // [rsp+28h] [rbp-3E0h]
  int v933; // [rsp+28h] [rbp-3E0h]
  int v934; // [rsp+28h] [rbp-3E0h]
  int v935; // [rsp+28h] [rbp-3E0h]
  int v936; // [rsp+28h] [rbp-3E0h]
  int v937; // [rsp+28h] [rbp-3E0h]
  int v938; // [rsp+28h] [rbp-3E0h]
  int v939; // [rsp+28h] [rbp-3E0h]
  int v940; // [rsp+28h] [rbp-3E0h]
  int v941; // [rsp+28h] [rbp-3E0h]
  int v942; // [rsp+28h] [rbp-3E0h]
  int v943; // [rsp+28h] [rbp-3E0h]
  int v944; // [rsp+28h] [rbp-3E0h]
  int v945; // [rsp+28h] [rbp-3E0h]
  int v946; // [rsp+28h] [rbp-3E0h]
  int v947; // [rsp+28h] [rbp-3E0h]
  int v948; // [rsp+28h] [rbp-3E0h]
  int v949; // [rsp+28h] [rbp-3E0h]
  int v950; // [rsp+28h] [rbp-3E0h]
  int v951; // [rsp+28h] [rbp-3E0h]
  int v952; // [rsp+28h] [rbp-3E0h]
  int v953; // [rsp+28h] [rbp-3E0h]
  int v954; // [rsp+28h] [rbp-3E0h]
  int v955; // [rsp+28h] [rbp-3E0h]
  int v956; // [rsp+28h] [rbp-3E0h]
  int v957; // [rsp+28h] [rbp-3E0h]
  int v958; // [rsp+28h] [rbp-3E0h]
  int v959; // [rsp+28h] [rbp-3E0h]
  int v960; // [rsp+28h] [rbp-3E0h]
  int v961; // [rsp+28h] [rbp-3E0h]
  int v962; // [rsp+28h] [rbp-3E0h]
  int v963; // [rsp+28h] [rbp-3E0h]
  int v964; // [rsp+28h] [rbp-3E0h]
  int v965; // [rsp+28h] [rbp-3E0h]
  int v966; // [rsp+28h] [rbp-3E0h]
  int v967; // [rsp+28h] [rbp-3E0h]
  int v968; // [rsp+28h] [rbp-3E0h]
  int v969; // [rsp+28h] [rbp-3E0h]
  int v970; // [rsp+28h] [rbp-3E0h]
  int v971; // [rsp+28h] [rbp-3E0h]
  int v972; // [rsp+28h] [rbp-3E0h]
  __int64 v973; // [rsp+30h] [rbp-3D8h]
  __int64 v974; // [rsp+30h] [rbp-3D8h]
  __int64 v975; // [rsp+30h] [rbp-3D8h]
  __int64 v976; // [rsp+30h] [rbp-3D8h]
  __int64 v977; // [rsp+30h] [rbp-3D8h]
  __int64 v978; // [rsp+30h] [rbp-3D8h]
  __int64 v979; // [rsp+30h] [rbp-3D8h]
  __int64 v980; // [rsp+30h] [rbp-3D8h]
  __int64 v981; // [rsp+30h] [rbp-3D8h]
  __int64 v982; // [rsp+30h] [rbp-3D8h]
  __int64 v983; // [rsp+30h] [rbp-3D8h]
  __int64 v984; // [rsp+30h] [rbp-3D8h]
  __int64 v985; // [rsp+30h] [rbp-3D8h]
  __int64 v986; // [rsp+30h] [rbp-3D8h]
  __int64 v987; // [rsp+30h] [rbp-3D8h]
  __int64 v988; // [rsp+30h] [rbp-3D8h]
  __int64 v989; // [rsp+30h] [rbp-3D8h]
  __int64 v990; // [rsp+30h] [rbp-3D8h]
  __int64 v991; // [rsp+30h] [rbp-3D8h]
  __int64 v992; // [rsp+30h] [rbp-3D8h]
  __int64 v993; // [rsp+30h] [rbp-3D8h]
  __int64 v994; // [rsp+30h] [rbp-3D8h]
  __int64 v995; // [rsp+30h] [rbp-3D8h]
  __int64 v996; // [rsp+30h] [rbp-3D8h]
  __int64 v997; // [rsp+30h] [rbp-3D8h]
  __int64 v998; // [rsp+30h] [rbp-3D8h]
  __int64 v999; // [rsp+30h] [rbp-3D8h]
  __int64 v1000; // [rsp+30h] [rbp-3D8h]
  __int64 v1001; // [rsp+30h] [rbp-3D8h]
  __int64 v1002; // [rsp+30h] [rbp-3D8h]
  __int64 v1003; // [rsp+30h] [rbp-3D8h]
  __int64 v1004; // [rsp+30h] [rbp-3D8h]
  __int64 v1005; // [rsp+30h] [rbp-3D8h]
  __int64 v1006; // [rsp+30h] [rbp-3D8h]
  __int64 v1007; // [rsp+30h] [rbp-3D8h]
  __int64 v1008; // [rsp+30h] [rbp-3D8h]
  __int64 v1009; // [rsp+30h] [rbp-3D8h]
  __int64 v1010; // [rsp+30h] [rbp-3D8h]
  __int64 v1011; // [rsp+30h] [rbp-3D8h]
  __int64 v1012; // [rsp+30h] [rbp-3D8h]
  __int64 v1013; // [rsp+30h] [rbp-3D8h]
  __int64 v1014; // [rsp+30h] [rbp-3D8h]
  __int64 v1015; // [rsp+30h] [rbp-3D8h]
  __int64 v1016; // [rsp+30h] [rbp-3D8h]
  __int64 v1017; // [rsp+30h] [rbp-3D8h]
  __int64 v1018; // [rsp+30h] [rbp-3D8h]
  __int64 v1019; // [rsp+30h] [rbp-3D8h]
  __int64 v1020; // [rsp+30h] [rbp-3D8h]
  __int64 v1021; // [rsp+30h] [rbp-3D8h]
  __int64 v1022; // [rsp+30h] [rbp-3D8h]
  __int64 v1023; // [rsp+30h] [rbp-3D8h]
  __int64 v1024; // [rsp+30h] [rbp-3D8h]
  __int64 v1025; // [rsp+30h] [rbp-3D8h]
  __int64 v1026; // [rsp+30h] [rbp-3D8h]
  __int64 v1027; // [rsp+30h] [rbp-3D8h]
  __int64 v1028; // [rsp+30h] [rbp-3D8h]
  __int64 v1029; // [rsp+30h] [rbp-3D8h]
  __int64 v1030; // [rsp+30h] [rbp-3D8h]
  __int64 v1031; // [rsp+30h] [rbp-3D8h]
  __int64 v1032; // [rsp+30h] [rbp-3D8h]
  __int64 v1033; // [rsp+30h] [rbp-3D8h]
  __int64 v1034; // [rsp+30h] [rbp-3D8h]
  __int64 v1035; // [rsp+30h] [rbp-3D8h]
  __int64 v1036; // [rsp+30h] [rbp-3D8h]
  __int64 v1037; // [rsp+30h] [rbp-3D8h]
  __int64 v1038; // [rsp+30h] [rbp-3D8h]
  __int64 v1039; // [rsp+30h] [rbp-3D8h]
  __int64 v1040; // [rsp+30h] [rbp-3D8h]
  int v1041; // [rsp+38h] [rbp-3D0h]
  int v1042; // [rsp+38h] [rbp-3D0h]
  int v1043; // [rsp+38h] [rbp-3D0h]
  int v1044; // [rsp+38h] [rbp-3D0h]
  int v1045; // [rsp+38h] [rbp-3D0h]
  int v1046; // [rsp+38h] [rbp-3D0h]
  int v1047; // [rsp+38h] [rbp-3D0h]
  int v1048; // [rsp+38h] [rbp-3D0h]
  int v1049; // [rsp+38h] [rbp-3D0h]
  int v1050; // [rsp+38h] [rbp-3D0h]
  int v1051; // [rsp+38h] [rbp-3D0h]
  int v1052; // [rsp+38h] [rbp-3D0h]
  int v1053; // [rsp+38h] [rbp-3D0h]
  int v1054; // [rsp+38h] [rbp-3D0h]
  int v1055; // [rsp+38h] [rbp-3D0h]
  int v1056; // [rsp+38h] [rbp-3D0h]
  int v1057; // [rsp+38h] [rbp-3D0h]
  int v1058; // [rsp+38h] [rbp-3D0h]
  int v1059; // [rsp+38h] [rbp-3D0h]
  int v1060; // [rsp+38h] [rbp-3D0h]
  int v1061; // [rsp+38h] [rbp-3D0h]
  int v1062; // [rsp+38h] [rbp-3D0h]
  int v1063; // [rsp+38h] [rbp-3D0h]
  int v1064; // [rsp+38h] [rbp-3D0h]
  int v1065; // [rsp+38h] [rbp-3D0h]
  int v1066; // [rsp+38h] [rbp-3D0h]
  int v1067; // [rsp+38h] [rbp-3D0h]
  int v1068; // [rsp+38h] [rbp-3D0h]
  int v1069; // [rsp+38h] [rbp-3D0h]
  int v1070; // [rsp+38h] [rbp-3D0h]
  int v1071; // [rsp+38h] [rbp-3D0h]
  int v1072; // [rsp+38h] [rbp-3D0h]
  int v1073; // [rsp+38h] [rbp-3D0h]
  int v1074; // [rsp+38h] [rbp-3D0h]
  int v1075; // [rsp+38h] [rbp-3D0h]
  int v1076; // [rsp+38h] [rbp-3D0h]
  int v1077; // [rsp+38h] [rbp-3D0h]
  int v1078; // [rsp+38h] [rbp-3D0h]
  int v1079; // [rsp+38h] [rbp-3D0h]
  int v1080; // [rsp+38h] [rbp-3D0h]
  int v1081; // [rsp+38h] [rbp-3D0h]
  int v1082; // [rsp+38h] [rbp-3D0h]
  int v1083; // [rsp+38h] [rbp-3D0h]
  int v1084; // [rsp+38h] [rbp-3D0h]
  int v1085; // [rsp+38h] [rbp-3D0h]
  int v1086; // [rsp+38h] [rbp-3D0h]
  int v1087; // [rsp+38h] [rbp-3D0h]
  int v1088; // [rsp+38h] [rbp-3D0h]
  int v1089; // [rsp+38h] [rbp-3D0h]
  int v1090; // [rsp+38h] [rbp-3D0h]
  int v1091; // [rsp+38h] [rbp-3D0h]
  int v1092; // [rsp+38h] [rbp-3D0h]
  int v1093; // [rsp+38h] [rbp-3D0h]
  int v1094; // [rsp+38h] [rbp-3D0h]
  int v1095; // [rsp+38h] [rbp-3D0h]
  int v1096; // [rsp+38h] [rbp-3D0h]
  int v1097; // [rsp+38h] [rbp-3D0h]
  int v1098; // [rsp+38h] [rbp-3D0h]
  int v1099; // [rsp+38h] [rbp-3D0h]
  int v1100; // [rsp+38h] [rbp-3D0h]
  int v1101; // [rsp+38h] [rbp-3D0h]
  int v1102; // [rsp+38h] [rbp-3D0h]
  int v1103; // [rsp+38h] [rbp-3D0h]
  int v1104; // [rsp+38h] [rbp-3D0h]
  int v1105; // [rsp+38h] [rbp-3D0h]
  int v1106; // [rsp+38h] [rbp-3D0h]
  int v1107; // [rsp+38h] [rbp-3D0h]
  int v1108; // [rsp+38h] [rbp-3D0h]
  int v1109; // [rsp+40h] [rbp-3C8h]
  __m128i *v1110; // [rsp+40h] [rbp-3C8h]
  int v1111; // [rsp+40h] [rbp-3C8h]
  _QWORD *v1112; // [rsp+40h] [rbp-3C8h]
  int v1113; // [rsp+40h] [rbp-3C8h]
  int v1114; // [rsp+40h] [rbp-3C8h]
  __int64 v1115; // [rsp+40h] [rbp-3C8h]
  int v1116; // [rsp+40h] [rbp-3C8h]
  int v1117; // [rsp+40h] [rbp-3C8h]
  int v1118; // [rsp+40h] [rbp-3C8h]
  int v1119; // [rsp+40h] [rbp-3C8h]
  int v1120; // [rsp+40h] [rbp-3C8h]
  _QWORD *v1121; // [rsp+40h] [rbp-3C8h]
  int v1122; // [rsp+40h] [rbp-3C8h]
  int v1123; // [rsp+40h] [rbp-3C8h]
  __int64 v1124; // [rsp+40h] [rbp-3C8h]
  int v1125; // [rsp+40h] [rbp-3C8h]
  int v1126; // [rsp+40h] [rbp-3C8h]
  int v1127; // [rsp+40h] [rbp-3C8h]
  int v1128; // [rsp+40h] [rbp-3C8h]
  int v1129; // [rsp+40h] [rbp-3C8h]
  _QWORD *v1130; // [rsp+40h] [rbp-3C8h]
  int v1131; // [rsp+40h] [rbp-3C8h]
  int v1132; // [rsp+40h] [rbp-3C8h]
  __int64 v1133; // [rsp+40h] [rbp-3C8h]
  int v1134; // [rsp+40h] [rbp-3C8h]
  int v1135; // [rsp+40h] [rbp-3C8h]
  int v1136; // [rsp+40h] [rbp-3C8h]
  int v1137; // [rsp+40h] [rbp-3C8h]
  int v1138; // [rsp+40h] [rbp-3C8h]
  _QWORD *v1139; // [rsp+40h] [rbp-3C8h]
  int v1140; // [rsp+40h] [rbp-3C8h]
  int v1141; // [rsp+40h] [rbp-3C8h]
  __int64 v1142; // [rsp+40h] [rbp-3C8h]
  int v1143; // [rsp+40h] [rbp-3C8h]
  int v1144; // [rsp+40h] [rbp-3C8h]
  int v1145; // [rsp+40h] [rbp-3C8h]
  int v1146; // [rsp+40h] [rbp-3C8h]
  int v1147; // [rsp+40h] [rbp-3C8h]
  _QWORD *v1148; // [rsp+40h] [rbp-3C8h]
  int v1149; // [rsp+40h] [rbp-3C8h]
  int v1150; // [rsp+40h] [rbp-3C8h]
  __int64 v1151; // [rsp+40h] [rbp-3C8h]
  int v1152; // [rsp+40h] [rbp-3C8h]
  int v1153; // [rsp+40h] [rbp-3C8h]
  int v1154; // [rsp+40h] [rbp-3C8h]
  int v1155; // [rsp+40h] [rbp-3C8h]
  int v1156; // [rsp+40h] [rbp-3C8h]
  int v1157; // [rsp+40h] [rbp-3C8h]
  int v1158; // [rsp+40h] [rbp-3C8h]
  int v1159; // [rsp+40h] [rbp-3C8h]
  _QWORD *v1160; // [rsp+40h] [rbp-3C8h]
  int v1161; // [rsp+40h] [rbp-3C8h]
  int v1162; // [rsp+40h] [rbp-3C8h]
  __int64 v1163; // [rsp+40h] [rbp-3C8h]
  int v1164; // [rsp+40h] [rbp-3C8h]
  int v1165; // [rsp+40h] [rbp-3C8h]
  int v1166; // [rsp+40h] [rbp-3C8h]
  int v1167; // [rsp+40h] [rbp-3C8h]
  int v1168; // [rsp+40h] [rbp-3C8h]
  _QWORD *v1169; // [rsp+40h] [rbp-3C8h]
  int v1170; // [rsp+40h] [rbp-3C8h]
  int v1171; // [rsp+40h] [rbp-3C8h]
  __int64 v1172; // [rsp+40h] [rbp-3C8h]
  int v1173; // [rsp+40h] [rbp-3C8h]
  int v1174; // [rsp+40h] [rbp-3C8h]
  int v1175; // [rsp+40h] [rbp-3C8h]
  int v1176; // [rsp+40h] [rbp-3C8h]
  int v1177; // [rsp+48h] [rbp-3C0h]
  int v1178; // [rsp+48h] [rbp-3C0h]
  const __m128i *v1179; // [rsp+48h] [rbp-3C0h]
  int v1180; // [rsp+48h] [rbp-3C0h]
  int v1181; // [rsp+48h] [rbp-3C0h]
  int v1182; // [rsp+48h] [rbp-3C0h]
  int v1183; // [rsp+48h] [rbp-3C0h]
  int v1184; // [rsp+48h] [rbp-3C0h]
  __int64 v1185; // [rsp+48h] [rbp-3C0h]
  int v1186; // [rsp+48h] [rbp-3C0h]
  int v1187; // [rsp+48h] [rbp-3C0h]
  int v1188; // [rsp+48h] [rbp-3C0h]
  int v1189; // [rsp+48h] [rbp-3C0h]
  int v1190; // [rsp+48h] [rbp-3C0h]
  int v1191; // [rsp+48h] [rbp-3C0h]
  int v1192; // [rsp+48h] [rbp-3C0h]
  int v1193; // [rsp+48h] [rbp-3C0h]
  __int64 v1194; // [rsp+48h] [rbp-3C0h]
  int v1195; // [rsp+48h] [rbp-3C0h]
  int v1196; // [rsp+48h] [rbp-3C0h]
  int v1197; // [rsp+48h] [rbp-3C0h]
  int v1198; // [rsp+48h] [rbp-3C0h]
  int v1199; // [rsp+48h] [rbp-3C0h]
  int v1200; // [rsp+48h] [rbp-3C0h]
  int v1201; // [rsp+48h] [rbp-3C0h]
  int v1202; // [rsp+48h] [rbp-3C0h]
  __int64 v1203; // [rsp+48h] [rbp-3C0h]
  int v1204; // [rsp+48h] [rbp-3C0h]
  int v1205; // [rsp+48h] [rbp-3C0h]
  int v1206; // [rsp+48h] [rbp-3C0h]
  int v1207; // [rsp+48h] [rbp-3C0h]
  int v1208; // [rsp+48h] [rbp-3C0h]
  int v1209; // [rsp+48h] [rbp-3C0h]
  int v1210; // [rsp+48h] [rbp-3C0h]
  int v1211; // [rsp+48h] [rbp-3C0h]
  __int64 v1212; // [rsp+48h] [rbp-3C0h]
  int v1213; // [rsp+48h] [rbp-3C0h]
  int v1214; // [rsp+48h] [rbp-3C0h]
  int v1215; // [rsp+48h] [rbp-3C0h]
  int v1216; // [rsp+48h] [rbp-3C0h]
  int v1217; // [rsp+48h] [rbp-3C0h]
  int v1218; // [rsp+48h] [rbp-3C0h]
  int v1219; // [rsp+48h] [rbp-3C0h]
  int v1220; // [rsp+48h] [rbp-3C0h]
  __int64 v1221; // [rsp+48h] [rbp-3C0h]
  int v1222; // [rsp+48h] [rbp-3C0h]
  int v1223; // [rsp+48h] [rbp-3C0h]
  _QWORD *v1224; // [rsp+48h] [rbp-3C0h]
  int v1225; // [rsp+48h] [rbp-3C0h]
  int v1226; // [rsp+48h] [rbp-3C0h]
  int v1227; // [rsp+48h] [rbp-3C0h]
  int v1228; // [rsp+48h] [rbp-3C0h]
  int v1229; // [rsp+48h] [rbp-3C0h]
  int v1230; // [rsp+48h] [rbp-3C0h]
  int v1231; // [rsp+48h] [rbp-3C0h]
  int v1232; // [rsp+48h] [rbp-3C0h]
  __int64 v1233; // [rsp+48h] [rbp-3C0h]
  int v1234; // [rsp+48h] [rbp-3C0h]
  int v1235; // [rsp+48h] [rbp-3C0h]
  int v1236; // [rsp+48h] [rbp-3C0h]
  int v1237; // [rsp+48h] [rbp-3C0h]
  int v1238; // [rsp+48h] [rbp-3C0h]
  int v1239; // [rsp+48h] [rbp-3C0h]
  int v1240; // [rsp+48h] [rbp-3C0h]
  int v1241; // [rsp+48h] [rbp-3C0h]
  __int64 v1242; // [rsp+48h] [rbp-3C0h]
  int v1243; // [rsp+48h] [rbp-3C0h]
  int v1244; // [rsp+48h] [rbp-3C0h]
  __m128 v1245; // [rsp+50h] [rbp-3B8h] BYREF
  __int128 *v1246; // [rsp+60h] [rbp-3A8h]
  __int64 v1247; // [rsp+68h] [rbp-3A0h]
  const __m128i *v1248; // [rsp+70h] [rbp-398h]
  __int8 *v1249; // [rsp+78h] [rbp-390h]
  __m128i *v1250; // [rsp+80h] [rbp-388h]
  __int64 *v1251; // [rsp+88h] [rbp-380h]
  __int64 *v1252; // [rsp+90h] [rbp-378h]
  __int64 *v1253; // [rsp+98h] [rbp-370h]
  _BYTE *v1254; // [rsp+A0h] [rbp-368h]
  _QWORD *v1255; // [rsp+A8h] [rbp-360h]
  _BYTE *v1256; // [rsp+B0h] [rbp-358h]
  const __m128i *v1257; // [rsp+B8h] [rbp-350h]
  char *v1258; // [rsp+C0h] [rbp-348h]
  char *v1259; // [rsp+C8h] [rbp-340h]
  __int64 *v1260; // [rsp+D0h] [rbp-338h]
  __int64 *v1261; // [rsp+D8h] [rbp-330h]
  char *v1262; // [rsp+E0h] [rbp-328h]
  char *v1263; // [rsp+E8h] [rbp-320h]
  __int64 *v1264; // [rsp+F0h] [rbp-318h]
  char *v1265; // [rsp+F8h] [rbp-310h]
  __int64 *v1266; // [rsp+100h] [rbp-308h]
  __int64 *v1267; // [rsp+108h] [rbp-300h]
  __int64 *v1268; // [rsp+110h] [rbp-2F8h]
  _QWORD *v1269; // [rsp+118h] [rbp-2F0h]
  __m128i v1270; // [rsp+120h] [rbp-2E8h] BYREF
  __int64 v1271; // [rsp+130h] [rbp-2D8h] BYREF
  __int64 v1272; // [rsp+138h] [rbp-2D0h] BYREF
  __int64 v1273; // [rsp+140h] [rbp-2C8h] BYREF
  char v1274; // [rsp+148h] [rbp-2C0h] BYREF
  __int64 v1275; // [rsp+150h] [rbp-2B8h]
  __int64 v1276; // [rsp+160h] [rbp-2A8h] BYREF
  char v1277; // [rsp+168h] [rbp-2A0h] BYREF
  __int64 v1278; // [rsp+170h] [rbp-298h]
  __m128i v1279; // [rsp+180h] [rbp-288h] BYREF
  __int64 v1280; // [rsp+190h] [rbp-278h]
  char v1281; // [rsp+198h] [rbp-270h]
  __int128 v1282; // [rsp+1A0h] [rbp-268h] BYREF
  __m128i v1283; // [rsp+1B0h] [rbp-258h] BYREF
  __int64 v1284; // [rsp+1C0h] [rbp-248h]
  char v1285; // [rsp+1C8h] [rbp-240h]
  __int128 v1286; // [rsp+1D0h] [rbp-238h] BYREF
  char v1287; // [rsp+1E0h] [rbp-228h] BYREF
  __int128 v1288; // [rsp+1E8h] [rbp-220h] BYREF
  char v1289; // [rsp+1F8h] [rbp-210h]
  __int128 v1290; // [rsp+200h] [rbp-208h] BYREF
  __int64 v1291; // [rsp+210h] [rbp-1F8h] BYREF
  char v1292; // [rsp+218h] [rbp-1F0h] BYREF
  __int64 v1293; // [rsp+220h] [rbp-1E8h]
  __int64 v1294; // [rsp+228h] [rbp-1E0h] BYREF
  char v1295; // [rsp+230h] [rbp-1D8h] BYREF
  __int64 v1296; // [rsp+238h] [rbp-1D0h]
  __m128i v1297; // [rsp+240h] [rbp-1C8h] BYREF
  __int64 v1298; // [rsp+250h] [rbp-1B8h]
  __int64 v1299; // [rsp+258h] [rbp-1B0h] BYREF
  char v1300; // [rsp+260h] [rbp-1A8h] BYREF
  __int64 v1301; // [rsp+268h] [rbp-1A0h]
  char v1302; // [rsp+270h] [rbp-198h] BYREF
  __int128 v1303; // [rsp+278h] [rbp-190h] BYREF
  __int64 v1304; // [rsp+288h] [rbp-180h] BYREF
  __int128 v1305; // [rsp+290h] [rbp-178h] BYREF
  char v1306; // [rsp+2A0h] [rbp-168h] BYREF
  __int128 v1307; // [rsp+2A8h] [rbp-160h]
  __m128i v1308; // [rsp+2B8h] [rbp-150h] BYREF
  __int64 v1309; // [rsp+2C8h] [rbp-140h]
  void *v1310; // [rsp+2D0h] [rbp-138h] BYREF
  __int64 v1311; // [rsp+2D8h] [rbp-130h]
  __m128i v1312; // [rsp+2E0h] [rbp-128h] BYREF
  __int64 v1313; // [rsp+2F8h] [rbp-110h]
  _QWORD v1314[2]; // [rsp+300h] [rbp-108h] BYREF
  __int64 v1315; // [rsp+310h] [rbp-F8h]
  char v1316; // [rsp+318h] [rbp-F0h] BYREF
  _BYTE *v1317; // [rsp+320h] [rbp-E8h] BYREF
  __int64 v1318; // [rsp+328h] [rbp-E0h]
  _BYTE v1319[16]; // [rsp+330h] [rbp-D8h] BYREF
  _BYTE *v1320; // [rsp+340h] [rbp-C8h] BYREF
  __int64 v1321; // [rsp+348h] [rbp-C0h]
  _BYTE v1322[16]; // [rsp+350h] [rbp-B8h] BYREF
  char v1323; // [rsp+360h] [rbp-A8h]
  __int64 v1324; // [rsp+368h] [rbp-A0h]
  char v1325; // [rsp+380h] [rbp-88h]
  char v1326; // [rsp+3B8h] [rbp-50h]
  unsigned __int64 v1327; // [rsp+3C8h] [rbp-40h]

  LODWORD(v1247) = (_DWORD)this;
  v1327 = __readfsqword(0x28u);
  v1254 = v1319;
  v1317 = v1319;
  v1318 = 0;
  v1319[0] = 0;
  v1256 = v1322;
  v1320 = v1322;
  v1322[0] = 0;
  v1321 = 0;
  v1323 = 0;
  v1324 = 0;
  v1325 = 0;
  v1326 = 0;
  std::string::assign((__int64)&v1317, "get_prev_head");
  v1255 = &v1320;
  std::string::assign((__int64)&v1320, "Get previous item address");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1279);
  v1280 = 0;
  v1281 = 0;
  *(_QWORD *)&v1282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1281 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "object");
  *(_QWORD *)(v2 + 8) = 6;
  v1282 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1310,
    &v1279);
  v1312.m128i_i64[0] = 0;
  v1302 = 0;
  *(_QWORD *)&v1303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1302 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)(v3 + 8) = 10;
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "properties");
  v1303 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1297);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1283);
  v1284 = 0;
  v1285 = 0;
  *(_QWORD *)&v1286 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1285 = 3;
  v4 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v4, "string", v5, v6, v7, v8, (int)&v1303, v561, (__int64)&v1279);
  v1286 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1291,
    &v1283);
  v1293 = 0;
  v1287 = 0;
  *(_QWORD *)&v1288 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1287 = 3;
  v9 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v9, "description", v10, v11, v12, v13, v457, (int)&v1291, v665);
  v1289 = 0;
  *(_QWORD *)&v1290 = 0;
  v1288 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1289 = 3;
  v14 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v14, "Hex address", v15, v16, v17, v18, v458, v562, v666);
  v1257 = (const __m128i *)&v1287;
  v1266 = &v1294;
  v1290 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1294,
    (const __m128i *)&v1287);
  v1296 = 0;
  v1267 = &v1299;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1299,
    v563);
  v1301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1276,
    &v1297);
  v1278 = 0;
  v1268 = &v1304;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1304,
    (__int64)&v1276,
    1,
    v19,
    v20,
    v21,
    v459,
    (__int64)v563,
    v667,
    (int)&v1282,
    (int)&v1283,
    (int)&v1286,
    (__int64)&v1288,
    (int)&v1290,
    (int)&v1297,
    v1177,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  *((_QWORD *)&v1305 + 1) = 0;
  v1253 = &v1312.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1312.m128i_i64[1],
    (const __m128i *)&v1302);
  v1313 = 0;
  v1306 = 0;
  *(_QWORD *)&v1307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1306 = 3;
  v22 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v22, "required", v23, v24, v25, v26, v460, v564, v668);
  v1245 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  v1307 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1273);
  v1275 = 0;
  v1250 = &v1270;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v27 = _mm_load_si128(&v1270);
  v1309 = 0;
  v1269 = v1314;
  v1308 = v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1314,
    (const __m128i *)&v1306);
  v1315 = 0;
  LOBYTE(v1271) = 0;
  v1251 = &v1271;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1271,
    (__int64)&v1310,
    3,
    v28,
    v29,
    v30,
    v461,
    v565,
    v669,
    v769,
    v837,
    v905,
    v973,
    v1041,
    v1109,
    (int)&v1302,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)&v1306);
  v31 = v1323;
  v32 = (void **)&v1316;
  v33 = v1272;
  v1323 = v1271;
  LOBYTE(v1271) = v31;
  v1272 = v1324;
  v1324 = v33;
  v1252 = &v1272;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v32 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v32 != &v1310 );
  v1249 = &v1308.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1258 = &v1274;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1246 = &v1305;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1259 = &v1277;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1265 = &v1300;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1264 = &v1297.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1263 = &v1295;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1262 = &v1292;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1261 = &v1283.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1260 = &v1279.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v1245);
  v1311 = 0;
  v1310 = ida_mcp::tools::navigation::get_prev_head;
  v1312 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1312.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1312.m128i_i64[0])(&v1310, &v1310, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1317);
  v1318 = 0;
  v1317 = v1254;
  v1319[0] = 0;
  v1320 = v1256;
  v1321 = 0;
  v1322[0] = 0;
  v1323 = 0;
  v1324 = 0;
  v1325 = 0;
  v1326 = 0;
  std::string::assign((__int64)&v1317, "get_next_head");
  std::string::assign((__int64)v1255, "Get next item address");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v670);
  v1280 = 0;
  v1281 = 0;
  *(_QWORD *)&v1282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1281 = 3;
  v35 = operator new(0x20u);
  *(_QWORD *)v35 = v35 + 16;
  strcpy((char *)(v35 + 16), "object");
  *(_QWORD *)(v35 + 8) = 6;
  v1282 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1310,
    v670);
  v1312.m128i_i64[0] = 0;
  v1302 = 0;
  *(_QWORD *)&v1303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1302 = 3;
  v36 = operator new(0x20u);
  *(_QWORD *)(v36 + 8) = 10;
  *(_QWORD *)v36 = v36 + 16;
  strcpy((char *)(v36 + 16), "properties");
  v1303 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1110);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v838);
  v1284 = 0;
  v1285 = 0;
  *(_QWORD *)&v1286 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1285 = 3;
  v37 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v37, "string", v38, v39, v40, v41, v462, v566, (__int64)v670);
  v1286 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v567,
    v838);
  v1293 = 0;
  v1287 = 0;
  *(_QWORD *)&v1288 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1287 = 3;
  v42 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v42, "description", v43, v44, v45, v46, v463, (int)v567, v671);
  v1289 = 0;
  *(_QWORD *)&v1290 = 0;
  v1288 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1289 = 3;
  v47 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v47, "Hex address", v48, v49, v50, v51, v464, v568, v672);
  v1290 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1266,
    v1257);
  v1296 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1267,
    v569);
  v1301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1276,
    v1110);
  v1278 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1268,
    (__int64)&v1276,
    1,
    v52,
    v53,
    v54,
    v465,
    (__int64)v569,
    v673,
    v770,
    (int)v838,
    v906,
    v974,
    v1042,
    (int)v1110,
    v1178,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  *((_QWORD *)&v1305 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    v1179);
  v1313 = 0;
  v1306 = 0;
  *(_QWORD *)&v1307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1306 = 3;
  v55 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v55, "required", v56, v57, v58, v59, v466, v570, v674);
  v1307 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1273);
  v1275 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v60 = _mm_load_si128(&v1270);
  v1309 = 0;
  v1308 = v60;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1269,
    v1248);
  v1315 = 0;
  LOBYTE(v1271) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1251,
    (__int64)&v1310,
    3,
    v61,
    v62,
    v63,
    v467,
    v571,
    v675,
    v771,
    v839,
    v907,
    v975,
    v1043,
    v1111,
    (int)v1179,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v64 = v1323;
  v65 = (void **)&v1316;
  v1323 = v1271;
  v66 = v1324;
  LOBYTE(v1271) = v64;
  v1324 = v1272;
  v1272 = v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v65 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v65 != &v1310 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v67 = _mm_load_si128((const __m128i *)&v1245);
  v1311 = 0;
  v1310 = ida_mcp::tools::navigation::get_next_head;
  v1312 = v67;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1312.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1312.m128i_i64[0])(&v1310, &v1310, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1317);
  v1318 = 0;
  v1317 = v1254;
  v1319[0] = 0;
  v1320 = v1256;
  v1321 = 0;
  v1322[0] = 0;
  v1323 = 0;
  v1324 = 0;
  v1325 = 0;
  v1326 = 0;
  std::string::assign((__int64)&v1317, "get_func_limits");
  std::string::assign((__int64)v1255, "Get function boundaries");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v676);
  v1280 = 0;
  v1281 = 0;
  *(_QWORD *)&v1282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1281 = 3;
  v68 = operator new(0x20u);
  *(_QWORD *)v68 = v68 + 16;
  strcpy((char *)(v68 + 16), "object");
  *(_QWORD *)(v68 + 8) = 6;
  v1282 = (unsigned __int64)v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1310,
    v676);
  v1312.m128i_i64[0] = 0;
  v1302 = 0;
  *(_QWORD *)&v1303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1302 = 3;
  v69 = operator new(0x20u);
  *(_QWORD *)(v69 + 8) = 10;
  *(_QWORD *)v69 = v69 + 16;
  strcpy((char *)(v69 + 16), "properties");
  v1303 = (unsigned __int64)v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1112);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v840);
  v1284 = 0;
  v1285 = 0;
  *(_QWORD *)&v1286 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1285 = 3;
  v70 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v70, "string", v71, v72, v73, v74, v468, v572, (__int64)v676);
  v1286 = (unsigned __int64)v70;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v573,
    (__int64)v840,
    2,
    v75,
    v76,
    v77,
    v469,
    (__int64)v573,
    v677,
    v772,
    (int)v840,
    v908,
    v976,
    v1044,
    (int)v1112,
    v1180,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1293 = 0;
  v1287 = 0;
  *(_QWORD *)&v1288 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1287 = 3;
  v78 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v78, "description", v79, v80, v81, v82, v470, v574, v678);
  v1289 = 0;
  *(_QWORD *)&v1290 = 0;
  v1288 = (unsigned __int64)v78;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1289 = 3;
  v83 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v83, "Hex address", v84, v85, v86, v87, v471, v575, v679);
  v1290 = (unsigned __int64)v83;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1266,
    (__int64)v1257,
    2,
    v88,
    v89,
    v90,
    v472,
    v576,
    v680,
    v773,
    v841,
    v909,
    v977,
    v1045,
    v1113,
    v1181,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1296 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1267,
    v577,
    2,
    v91,
    v92,
    v93,
    v473,
    v577,
    v681,
    v774,
    v842,
    v910,
    v978,
    v1046,
    v1114,
    v1182,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1276,
    v1115,
    2,
    v94,
    v95,
    v96,
    v474,
    v578,
    v682,
    v775,
    v843,
    v911,
    v979,
    v1047,
    v1115,
    v1183,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1278 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1268,
    (__int64)&v1276,
    1,
    v97,
    v98,
    v99,
    v475,
    v579,
    v683,
    v776,
    v844,
    v912,
    v980,
    v1048,
    v1116,
    v1184,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  *((_QWORD *)&v1305 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    v1185,
    2,
    v100,
    v101,
    v102,
    v476,
    v580,
    v684,
    v777,
    v845,
    v913,
    v981,
    v1049,
    v1117,
    v1185,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1313 = 0;
  v1306 = 0;
  *(_QWORD *)&v1307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1306 = 3;
  v103 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v103, "required", v104, v105, v106, v107, v477, v581, v685);
  v1307 = (unsigned __int64)v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1273);
  v1275 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v108 = _mm_load_si128(&v1270);
  v1309 = 0;
  v1308 = v108;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1269,
    (__int64)v1248,
    2,
    v109,
    v110,
    v111,
    v478,
    v582,
    v686,
    v778,
    v846,
    v914,
    v982,
    v1050,
    v1118,
    v1186,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1315 = 0;
  LOBYTE(v1271) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1251,
    (__int64)&v1310,
    3,
    v112,
    v113,
    v114,
    v479,
    v583,
    v687,
    v779,
    v847,
    v915,
    v983,
    v1051,
    v1119,
    v1187,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v115 = v1323;
  v116 = (void **)&v1316;
  v1323 = v1271;
  v117 = v1324;
  LOBYTE(v1271) = v115;
  v1324 = v1272;
  v1272 = v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v116 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v116 != &v1310 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = _mm_load_si128((const __m128i *)&v1245);
  v1311 = 0;
  v1310 = ida_mcp::tools::navigation::get_func_limits;
  v1312 = v118;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1312.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1312.m128i_i64[0])(&v1310, &v1310, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1317);
  v1318 = 0;
  v1317 = v1254;
  v1319[0] = 0;
  v1320 = v1256;
  v1321 = 0;
  v1322[0] = 0;
  v1323 = 0;
  v1324 = 0;
  v1325 = 0;
  v1326 = 0;
  std::string::assign((__int64)&v1317, "get_prev_not_tail");
  std::string::assign((__int64)v1255, "Get previous item skipping tail bytes");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v688);
  v1280 = 0;
  v1281 = 0;
  *(_QWORD *)&v1282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1281 = 3;
  v119 = operator new(0x20u);
  *(_QWORD *)v119 = v119 + 16;
  strcpy((char *)(v119 + 16), "object");
  *(_QWORD *)(v119 + 8) = 6;
  v1282 = (unsigned __int64)v119;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1310,
    (__int64)v688,
    2,
    v120,
    v121,
    v122,
    v480,
    v584,
    (int)v688,
    v780,
    v848,
    v916,
    v984,
    v1052,
    v1120,
    v1188,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1312.m128i_i64[0] = 0;
  v1302 = 0;
  *(_QWORD *)&v1303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1302 = 3;
  v123 = operator new(0x20u);
  *(_QWORD *)(v123 + 8) = 10;
  *(_QWORD *)v123 = v123 + 16;
  strcpy((char *)(v123 + 16), "properties");
  v1303 = (unsigned __int64)v123;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1121);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v849);
  v1284 = 0;
  v1285 = 0;
  *(_QWORD *)&v1286 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1285 = 3;
  v124 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v124, "string", v125, v126, v127, v128, v481, v585, v689);
  v1286 = (unsigned __int64)v124;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v586,
    (__int64)v849,
    2,
    v129,
    v130,
    v131,
    v482,
    (__int64)v586,
    v690,
    v781,
    (int)v849,
    v917,
    v985,
    v1053,
    (int)v1121,
    v1189,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1293 = 0;
  v1287 = 0;
  *(_QWORD *)&v1288 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1287 = 3;
  v132 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v132, "description", v133, v134, v135, v136, v483, v587, v691);
  v1289 = 0;
  *(_QWORD *)&v1290 = 0;
  v1288 = (unsigned __int64)v132;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1289 = 3;
  v137 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v137, "Hex address", v138, v139, v140, v141, v484, v588, v692);
  v1290 = (unsigned __int64)v137;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1266,
    (__int64)v1257,
    2,
    v142,
    v143,
    v144,
    v485,
    v589,
    v693,
    v782,
    v850,
    v918,
    v986,
    v1054,
    v1122,
    v1190,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1296 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1267,
    v590,
    2,
    v145,
    v146,
    v147,
    v486,
    v590,
    v694,
    v783,
    v851,
    v919,
    v987,
    v1055,
    v1123,
    v1191,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1276,
    v1124,
    2,
    v148,
    v149,
    v150,
    v487,
    v591,
    v695,
    v784,
    v852,
    v920,
    v988,
    v1056,
    v1124,
    v1192,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1278 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1268,
    (__int64)&v1276,
    1,
    v151,
    v152,
    v153,
    v488,
    v592,
    v696,
    v785,
    v853,
    v921,
    v989,
    v1057,
    v1125,
    v1193,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  *((_QWORD *)&v1305 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    v1194,
    2,
    v154,
    v155,
    v156,
    v489,
    v593,
    v697,
    v786,
    v854,
    v922,
    v990,
    v1058,
    v1126,
    v1194,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1313 = 0;
  v1306 = 0;
  *(_QWORD *)&v1307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1306 = 3;
  v157 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v157, "required", v158, v159, v160, v161, v490, v594, v698);
  v1307 = (unsigned __int64)v157;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1273);
  v1275 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v162 = _mm_load_si128(&v1270);
  v1309 = 0;
  v1308 = v162;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1269,
    (__int64)v1248,
    2,
    v163,
    v164,
    v165,
    v491,
    v595,
    v699,
    v787,
    v855,
    v923,
    v991,
    v1059,
    v1127,
    v1195,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1315 = 0;
  LOBYTE(v1271) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1251,
    (__int64)&v1310,
    3,
    v166,
    v167,
    v168,
    v492,
    v596,
    v700,
    v788,
    v856,
    v924,
    v992,
    v1060,
    v1128,
    v1196,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v169 = v1323;
  v170 = (void **)&v1316;
  v1323 = v1271;
  v171 = v1324;
  LOBYTE(v1271) = v169;
  v1324 = v1272;
  v1272 = v171;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v170 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v170 != &v1310 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v172 = _mm_load_si128((const __m128i *)&v1245);
  v1311 = 0;
  v1310 = ida_mcp::tools::navigation::get_prev_not_tail;
  v1312 = v172;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1312.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1312.m128i_i64[0])(&v1310, &v1310, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1317);
  v1318 = 0;
  v1317 = v1254;
  v1319[0] = 0;
  v1320 = v1256;
  v1321 = 0;
  v1322[0] = 0;
  v1323 = 0;
  v1324 = 0;
  v1325 = 0;
  v1326 = 0;
  std::string::assign((__int64)&v1317, "get_next_not_tail");
  std::string::assign((__int64)v1255, "Get next item skipping tail bytes");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v701);
  v1280 = 0;
  v1281 = 0;
  *(_QWORD *)&v1282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1281 = 3;
  v173 = operator new(0x20u);
  *(_QWORD *)v173 = v173 + 16;
  strcpy((char *)(v173 + 16), "object");
  *(_QWORD *)(v173 + 8) = 6;
  v1282 = (unsigned __int64)v173;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1310,
    (__int64)v701,
    2,
    v174,
    v175,
    v176,
    v493,
    v597,
    (int)v701,
    v789,
    v857,
    v925,
    v993,
    v1061,
    v1129,
    v1197,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1312.m128i_i64[0] = 0;
  v1302 = 0;
  *(_QWORD *)&v1303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1302 = 3;
  v177 = operator new(0x20u);
  *(_QWORD *)(v177 + 8) = 10;
  *(_QWORD *)v177 = v177 + 16;
  strcpy((char *)(v177 + 16), "properties");
  v1303 = (unsigned __int64)v177;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1130);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v858);
  v1284 = 0;
  v1285 = 0;
  *(_QWORD *)&v1286 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1285 = 3;
  v178 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v178, "string", v179, v180, v181, v182, v494, v598, v702);
  v1286 = (unsigned __int64)v178;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v599,
    (__int64)v858,
    2,
    v183,
    v184,
    v185,
    v495,
    (__int64)v599,
    v703,
    v790,
    (int)v858,
    v926,
    v994,
    v1062,
    (int)v1130,
    v1198,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1293 = 0;
  v1287 = 0;
  *(_QWORD *)&v1288 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1287 = 3;
  v186 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v186, "description", v187, v188, v189, v190, v496, v600, v704);
  v1289 = 0;
  *(_QWORD *)&v1290 = 0;
  v1288 = (unsigned __int64)v186;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1289 = 3;
  v191 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v191, "Hex address", v192, v193, v194, v195, v497, v601, v705);
  v1290 = (unsigned __int64)v191;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1266,
    (__int64)v1257,
    2,
    v196,
    v197,
    v198,
    v498,
    v602,
    v706,
    v791,
    v859,
    v927,
    v995,
    v1063,
    v1131,
    v1199,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1296 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1267,
    v603,
    2,
    v199,
    v200,
    v201,
    v499,
    v603,
    v707,
    v792,
    v860,
    v928,
    v996,
    v1064,
    v1132,
    v1200,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1276,
    v1133,
    2,
    v202,
    v203,
    v204,
    v500,
    v604,
    v708,
    v793,
    v861,
    v929,
    v997,
    v1065,
    v1133,
    v1201,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1278 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1268,
    (__int64)&v1276,
    1,
    v205,
    v206,
    v207,
    v501,
    v605,
    v709,
    v794,
    v862,
    v930,
    v998,
    v1066,
    v1134,
    v1202,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  *((_QWORD *)&v1305 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    v1203,
    2,
    v208,
    v209,
    v210,
    v502,
    v606,
    v710,
    v795,
    v863,
    v931,
    v999,
    v1067,
    v1135,
    v1203,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1313 = 0;
  v1306 = 0;
  *(_QWORD *)&v1307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1306 = 3;
  v211 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v211, "required", v212, v213, v214, v215, v503, v607, v711);
  v1307 = (unsigned __int64)v211;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1273);
  v1275 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v216 = _mm_load_si128(&v1270);
  v1309 = 0;
  v1308 = v216;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1269,
    (__int64)v1248,
    2,
    v217,
    v218,
    v219,
    v504,
    v608,
    v712,
    v796,
    v864,
    v932,
    v1000,
    v1068,
    v1136,
    v1204,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1315 = 0;
  LOBYTE(v1271) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1251,
    (__int64)&v1310,
    3,
    v220,
    v221,
    v222,
    v505,
    v609,
    v713,
    v797,
    v865,
    v933,
    v1001,
    v1069,
    v1137,
    v1205,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v223 = v1323;
  v224 = (void **)&v1316;
  v1323 = v1271;
  v225 = v1324;
  LOBYTE(v1271) = v223;
  v1324 = v1272;
  v1272 = v225;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v224 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v224 != &v1310 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v226 = _mm_load_si128((const __m128i *)&v1245);
  v1311 = 0;
  v1310 = ida_mcp::tools::navigation::get_next_not_tail;
  v1312 = v226;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1312.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1312.m128i_i64[0])(&v1310, &v1310, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1317);
  v1318 = 0;
  v1317 = v1254;
  v1319[0] = 0;
  v1320 = v1256;
  v1321 = 0;
  v1322[0] = 0;
  v1323 = 0;
  v1324 = 0;
  v1325 = 0;
  v1326 = 0;
  std::string::assign((__int64)&v1317, "get_prev_func");
  std::string::assign((__int64)v1255, "Get previous function");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v714);
  v1280 = 0;
  v1281 = 0;
  *(_QWORD *)&v1282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1281 = 3;
  v227 = operator new(0x20u);
  *(_QWORD *)v227 = v227 + 16;
  strcpy((char *)(v227 + 16), "object");
  *(_QWORD *)(v227 + 8) = 6;
  v1282 = (unsigned __int64)v227;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1310,
    (__int64)v714,
    2,
    29795,
    v228,
    v229,
    v506,
    v610,
    (int)v714,
    v798,
    v866,
    v934,
    v1002,
    v1070,
    v1138,
    v1206,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1312.m128i_i64[0] = 0;
  v1302 = 0;
  *(_QWORD *)&v1303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1302 = 3;
  v230 = operator new(0x20u);
  *(_QWORD *)v230 = v230 + 16;
  strcpy((char *)(v230 + 16), "properties");
  *(_QWORD *)(v230 + 8) = 10;
  v1303 = (unsigned __int64)v230;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1139);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v867);
  v1284 = 0;
  v1285 = 0;
  *(_QWORD *)&v1286 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1285 = 3;
  v231 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v231, "string", v232, v233, v234, v235, v507, v611, v715);
  v1286 = (unsigned __int64)v231;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v612,
    (__int64)v867,
    2,
    v236,
    v237,
    v238,
    v508,
    (__int64)v612,
    v716,
    v799,
    (int)v867,
    v935,
    v1003,
    v1071,
    (int)v1139,
    v1207,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1293 = 0;
  v1287 = 0;
  *(_QWORD *)&v1288 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1287 = 3;
  v239 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v239, "description", v240, v241, v242, v243, v509, v613, v717);
  v1289 = 0;
  *(_QWORD *)&v1290 = 0;
  v1288 = (unsigned __int64)v239;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1289 = 3;
  v244 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v244, "Hex address", v245, v246, v247, v248, v510, v614, v718);
  v1290 = (unsigned __int64)v244;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1266,
    (__int64)v1257,
    2,
    v249,
    v250,
    v251,
    v511,
    v615,
    v719,
    v800,
    v868,
    v936,
    v1004,
    v1072,
    v1140,
    v1208,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1296 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1267,
    v616,
    2,
    v252,
    v253,
    v254,
    v512,
    v616,
    v720,
    v801,
    v869,
    v937,
    v1005,
    v1073,
    v1141,
    v1209,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1276,
    v1142,
    2,
    v255,
    v256,
    v257,
    v513,
    v617,
    v721,
    v802,
    v870,
    v938,
    v1006,
    v1074,
    v1142,
    v1210,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1278 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1268,
    (__int64)&v1276,
    1,
    v258,
    v259,
    v260,
    v514,
    v618,
    v722,
    v803,
    v871,
    v939,
    v1007,
    v1075,
    v1143,
    v1211,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  *((_QWORD *)&v1305 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    v1212,
    2,
    v261,
    v262,
    v263,
    v515,
    v619,
    v723,
    v804,
    v872,
    v940,
    v1008,
    v1076,
    v1144,
    v1212,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1313 = 0;
  v1306 = 0;
  *(_QWORD *)&v1307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1306 = 3;
  v264 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v264, "required", v265, v266, v267, v268, v516, v620, v724);
  v1307 = (unsigned __int64)v264;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1273);
  v1275 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v269 = _mm_load_si128(&v1270);
  v1309 = 0;
  v1308 = v269;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1269,
    (__int64)v1248,
    2,
    v270,
    v271,
    v272,
    v517,
    v621,
    v725,
    v805,
    v873,
    v941,
    v1009,
    v1077,
    v1145,
    v1213,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1315 = 0;
  LOBYTE(v1271) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1251,
    (__int64)&v1310,
    3,
    v273,
    v274,
    v275,
    v518,
    v622,
    v726,
    v806,
    v874,
    v942,
    v1010,
    v1078,
    v1146,
    v1214,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v276 = v1323;
  v277 = (void **)&v1316;
  v1323 = v1271;
  v278 = v1324;
  LOBYTE(v1271) = v276;
  v1324 = v1272;
  v1272 = v278;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v277 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v277 != &v1310 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v279 = _mm_load_si128((const __m128i *)&v1245);
  v1311 = 0;
  v1310 = ida_mcp::tools::navigation::get_prev_func_nav;
  v1312 = v279;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1312.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1312.m128i_i64[0])(&v1310, &v1310, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1317);
  v1318 = 0;
  v1317 = v1254;
  v1319[0] = 0;
  v1320 = v1256;
  v1321 = 0;
  v1322[0] = 0;
  v1323 = 0;
  v1324 = 0;
  v1325 = 0;
  v1326 = 0;
  std::string::assign((__int64)&v1317, "get_next_func");
  std::string::assign((__int64)v1255, "Get next function");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v727);
  v1280 = 0;
  v1281 = 0;
  *(_QWORD *)&v1282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1281 = 3;
  v280 = operator new(0x20u);
  *(_QWORD *)v280 = v280 + 16;
  strcpy((char *)(v280 + 16), "object");
  *(_QWORD *)(v280 + 8) = 6;
  v1282 = (unsigned __int64)v280;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1310,
    (__int64)v727,
    2,
    v281,
    v282,
    v283,
    v519,
    v623,
    (int)v727,
    v807,
    v875,
    v943,
    v1011,
    v1079,
    v1147,
    v1215,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1312.m128i_i64[0] = 0;
  v1302 = 0;
  *(_QWORD *)&v1303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1302 = 3;
  v284 = operator new(0x20u);
  *(_QWORD *)(v284 + 8) = 10;
  *(_QWORD *)v284 = v284 + 16;
  strcpy((char *)(v284 + 16), "properties");
  v1303 = (unsigned __int64)v284;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1148);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v876);
  v1284 = 0;
  v1285 = 0;
  *(_QWORD *)&v1286 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1285 = 3;
  v285 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v285, "string", v286, v287, v288, v289, v520, v624, v728);
  v1286 = (unsigned __int64)v285;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v625,
    (__int64)v876,
    2,
    v290,
    v291,
    v292,
    v521,
    (__int64)v625,
    v729,
    v808,
    (int)v876,
    v944,
    v1012,
    v1080,
    (int)v1148,
    v1216,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1293 = 0;
  v1287 = 0;
  *(_QWORD *)&v1288 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1287 = 3;
  v293 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v293, "description", v294, v295, v296, v297, v522, v626, v730);
  v1289 = 0;
  *(_QWORD *)&v1290 = 0;
  v1288 = (unsigned __int64)v293;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1289 = 3;
  v298 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v298, "Hex address", v299, v300, v301, v302, v523, v627, v731);
  v1290 = (unsigned __int64)v298;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1266,
    (__int64)v1257,
    2,
    v303,
    v304,
    v305,
    v524,
    v628,
    v732,
    v809,
    v877,
    v945,
    v1013,
    v1081,
    v1149,
    v1217,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1296 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1267,
    v629,
    2,
    v306,
    v307,
    v308,
    v525,
    v629,
    v733,
    v810,
    v878,
    v946,
    v1014,
    v1082,
    v1150,
    v1218,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1276,
    v1151,
    2,
    v309,
    v310,
    v311,
    v526,
    v630,
    v734,
    v811,
    v879,
    v947,
    v1015,
    v1083,
    v1151,
    v1219,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1278 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1268,
    (__int64)&v1276,
    1,
    v312,
    v313,
    v314,
    v527,
    v631,
    v735,
    v812,
    v880,
    v948,
    v1016,
    v1084,
    v1152,
    v1220,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  *((_QWORD *)&v1305 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    v1221,
    2,
    v315,
    v316,
    v317,
    v528,
    v632,
    v736,
    v813,
    v881,
    v949,
    v1017,
    v1085,
    v1153,
    v1221,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1313 = 0;
  v1306 = 0;
  *(_QWORD *)&v1307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1306 = 3;
  v318 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v318, "required", v319, v320, v321, v322, v529, v633, v737);
  v1307 = (unsigned __int64)v318;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1273);
  v1275 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v323 = _mm_load_si128(&v1270);
  v1309 = 0;
  v1308 = v323;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1269,
    (__int64)v1248,
    2,
    v324,
    v325,
    v326,
    v530,
    v634,
    v738,
    v814,
    v882,
    v950,
    v1018,
    v1086,
    v1154,
    v1222,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1315 = 0;
  LOBYTE(v1271) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1251,
    (__int64)&v1310,
    3,
    v327,
    v328,
    v329,
    v531,
    v635,
    v739,
    v815,
    v883,
    v951,
    v1019,
    v1087,
    v1155,
    v1223,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v330 = v1323;
  v331 = (void **)&v1316;
  v1323 = v1271;
  v332 = v1324;
  LOBYTE(v1271) = v330;
  v1324 = v1272;
  v1272 = v332;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v331 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v331 != &v1310 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v333 = _mm_load_si128((const __m128i *)&v1245);
  v1311 = 0;
  v1310 = ida_mcp::tools::navigation::get_next_func_nav;
  v1312 = v333;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1312.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1312.m128i_i64[0])(&v1310, &v1310, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1317);
  v1318 = 0;
  v1317 = v1254;
  v1319[0] = 0;
  v1320 = v1256;
  v1321 = 0;
  v1322[0] = 0;
  v1323 = 0;
  v1324 = 0;
  v1325 = 0;
  v1326 = 0;
  std::string::assign((__int64)&v1317, "get_first_seg");
  std::string::assign((__int64)v1255, "Get first segment");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1224);
  *((_QWORD *)&v1303 + 1) = 0;
  LOBYTE(v1304) = 0;
  *(_QWORD *)&v1305 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1304) = 3;
  v334 = operator new(0x20u);
  *(_QWORD *)v334 = v334 + 16;
  strcpy((char *)(v334 + 16), "object");
  *(_QWORD *)(v334 + 8) = 6;
  v1305 = (unsigned __int64)v334;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1310,
    (__int64)v1224,
    2,
    v335,
    v336,
    v337,
    v532,
    v636,
    v740,
    v816,
    v884,
    v952,
    v1020,
    v1088,
    v1156,
    (int)v1224,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1312.m128i_i64[0] = 0;
  v1306 = 0;
  *(_QWORD *)&v1307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1306 = 3;
  v338 = operator new(0x20u);
  *(_QWORD *)v338 = v338 + 16;
  strcpy((char *)(v338 + 16), "properties");
  *(_QWORD *)(v338 + 8) = 10;
  v1307 = (unsigned __int64)v338;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v339 = _mm_load_si128(&v1270);
  v1309 = 0;
  v1308 = v339;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    (__int64)v1248,
    2,
    v340,
    v341,
    v342,
    v533,
    v637,
    v741,
    v817,
    v885,
    v953,
    v1021,
    v1089,
    v1157,
    v1225,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1313 = 0;
  LOBYTE(v1271) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1251,
    (__int64)&v1310,
    2,
    v343,
    v344,
    v345,
    v534,
    v638,
    v742,
    v818,
    v886,
    v954,
    v1022,
    v1090,
    v1158,
    v1226,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v346 = v1323;
  v1323 = v1271;
  v347 = v1324;
  LOBYTE(v1271) = v346;
  v1324 = v1272;
  v1272 = v347;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v348 = _mm_load_si128((const __m128i *)&v1245);
  v1311 = 0;
  v1310 = ida_mcp::tools::navigation::get_first_seg_nav;
  v1312 = v348;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1312.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1312.m128i_i64[0])(&v1310, &v1310, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1317);
  v1318 = 0;
  v1317 = v1254;
  v1319[0] = 0;
  v1320 = v1256;
  v1321 = 0;
  v1322[0] = 0;
  v1323 = 0;
  v1324 = 0;
  v1325 = 0;
  v1326 = 0;
  std::string::assign((__int64)&v1317, "get_prev_seg");
  std::string::assign((__int64)v1255, "Get previous segment");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v743);
  v1280 = 0;
  v1281 = 0;
  *(_QWORD *)&v1282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1281 = 3;
  v349 = operator new(0x20u);
  *(_QWORD *)v349 = v349 + 16;
  strcpy((char *)(v349 + 16), "object");
  *(_QWORD *)(v349 + 8) = 6;
  v1282 = (unsigned __int64)v349;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1310,
    (__int64)v743,
    2,
    v350,
    v351,
    v352,
    v535,
    v639,
    (int)v743,
    v819,
    v887,
    v955,
    v1023,
    v1091,
    v1159,
    v1227,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1312.m128i_i64[0] = 0;
  v1302 = 0;
  *(_QWORD *)&v1303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1302 = 3;
  v353 = operator new(0x20u);
  *(_QWORD *)(v353 + 8) = 10;
  *(_QWORD *)v353 = v353 + 16;
  strcpy((char *)(v353 + 16), "properties");
  v1303 = (unsigned __int64)v353;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1160);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v888);
  v1284 = 0;
  v1285 = 0;
  *(_QWORD *)&v1286 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1285 = 3;
  v354 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v354, "string", v355, v356, v357, v358, v536, v640, v744);
  v1286 = (unsigned __int64)v354;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v641,
    (__int64)v888,
    2,
    v359,
    v360,
    v361,
    v537,
    (__int64)v641,
    v745,
    v820,
    (int)v888,
    v956,
    v1024,
    v1092,
    (int)v1160,
    v1228,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1293 = 0;
  v1287 = 0;
  *(_QWORD *)&v1288 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1287 = 3;
  v362 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v362, "description", v363, v364, v365, v366, v538, v642, v746);
  v1289 = 0;
  *(_QWORD *)&v1290 = 0;
  v1288 = (unsigned __int64)v362;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1289 = 3;
  v367 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v367, "Hex address", v368, v369, v370, v371, v539, v643, v747);
  v1290 = (unsigned __int64)v367;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1266,
    (__int64)v1257,
    2,
    v372,
    v373,
    v374,
    v540,
    v644,
    v748,
    v821,
    v889,
    v957,
    v1025,
    v1093,
    v1161,
    v1229,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1296 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1267,
    v645,
    2,
    v375,
    v376,
    v377,
    v541,
    v645,
    v749,
    v822,
    v890,
    v958,
    v1026,
    v1094,
    v1162,
    v1230,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1276,
    v1163,
    2,
    v378,
    v379,
    v380,
    v542,
    v646,
    v750,
    v823,
    v891,
    v959,
    v1027,
    v1095,
    v1163,
    v1231,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1278 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1268,
    (__int64)&v1276,
    1,
    v381,
    v382,
    v383,
    v543,
    v647,
    v751,
    v824,
    v892,
    v960,
    v1028,
    v1096,
    v1164,
    v1232,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  *((_QWORD *)&v1305 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    v1233,
    2,
    v384,
    v385,
    v386,
    v544,
    v648,
    v752,
    v825,
    v893,
    v961,
    v1029,
    v1097,
    v1165,
    v1233,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1313 = 0;
  v1306 = 0;
  *(_QWORD *)&v1307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1306 = 3;
  v387 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v387, "required", v388, v389, v390, v391, v545, v649, v753);
  v1307 = (unsigned __int64)v387;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1273);
  v1275 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v392 = _mm_load_si128(&v1270);
  v1309 = 0;
  v1308 = v392;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1269,
    (__int64)v1248,
    2,
    v393,
    v394,
    v395,
    v546,
    v650,
    v754,
    v826,
    v894,
    v962,
    v1030,
    v1098,
    v1166,
    v1234,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1315 = 0;
  LOBYTE(v1271) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1251,
    (__int64)&v1310,
    3,
    v396,
    v397,
    v398,
    v547,
    v651,
    v755,
    v827,
    v895,
    v963,
    v1031,
    v1099,
    v1167,
    v1235,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v399 = v1323;
  v400 = (void **)&v1316;
  v1323 = v1271;
  v401 = v1324;
  LOBYTE(v1271) = v399;
  v1324 = v1272;
  v1272 = v401;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v400 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v400 != &v1310 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v402 = _mm_load_si128((const __m128i *)&v1245);
  v1311 = 0;
  v1310 = ida_mcp::tools::navigation::get_prev_seg_nav;
  v1312 = v402;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1312.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1312.m128i_i64[0])(&v1310, &v1310, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1317);
  v1318 = 0;
  v1317 = v1254;
  v1319[0] = 0;
  v1320 = v1256;
  v1321 = 0;
  v1322[0] = 0;
  v1323 = 0;
  v1324 = 0;
  v1325 = 0;
  v1326 = 0;
  std::string::assign((__int64)&v1317, "get_next_seg");
  std::string::assign((__int64)v1255, "Get next segment");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v756);
  v1280 = 0;
  v1281 = 0;
  *(_QWORD *)&v1282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1281 = 3;
  v403 = operator new(0x20u);
  *(_QWORD *)v403 = v403 + 16;
  strcpy((char *)(v403 + 16), "object");
  *(_QWORD *)(v403 + 8) = 6;
  v1282 = (unsigned __int64)v403;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1310,
    (__int64)v756,
    2,
    v404,
    29795,
    v405,
    v548,
    v652,
    (int)v756,
    v828,
    v896,
    v964,
    v1032,
    v1100,
    v1168,
    v1236,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1312.m128i_i64[0] = 0;
  v1302 = 0;
  *(_QWORD *)&v1303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1302 = 3;
  v406 = operator new(0x20u);
  *(_QWORD *)(v406 + 8) = 10;
  *(_QWORD *)v406 = v406 + 16;
  strcpy((char *)(v406 + 16), "properties");
  v1303 = (unsigned __int64)v406;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1169);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v897);
  v1284 = 0;
  v1285 = 0;
  *(_QWORD *)&v1286 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1285 = 3;
  v407 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v407, "string", v408, v409, v410, v411, v549, v653, v757);
  v1286 = (unsigned __int64)v407;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v654,
    (__int64)v897,
    2,
    v412,
    v413,
    v414,
    v550,
    (__int64)v654,
    v758,
    v829,
    (int)v897,
    v965,
    v1033,
    v1101,
    (int)v1169,
    v1237,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1293 = 0;
  v1287 = 0;
  *(_QWORD *)&v1288 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1287 = 3;
  v415 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v415, "description", v416, v417, v418, v419, v551, v655, v759);
  v1289 = 0;
  *(_QWORD *)&v1290 = 0;
  v1288 = (unsigned __int64)v415;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1289 = 3;
  v420 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v420, "Hex address", v421, v422, v423, v424, v552, v656, v760);
  v1290 = (unsigned __int64)v420;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1266,
    (__int64)v1257,
    2,
    v425,
    v426,
    v427,
    v553,
    v657,
    v761,
    v830,
    v898,
    v966,
    v1034,
    v1102,
    v1170,
    v1238,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1296 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1267,
    v658,
    2,
    v428,
    v429,
    v430,
    v554,
    v658,
    v762,
    v831,
    v899,
    v967,
    v1035,
    v1103,
    v1171,
    v1239,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1276,
    v1172,
    2,
    v431,
    v432,
    v433,
    v555,
    v659,
    v763,
    v832,
    v900,
    v968,
    v1036,
    v1104,
    v1172,
    v1240,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1278 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1268,
    (__int64)&v1276,
    1,
    v434,
    v435,
    v436,
    v556,
    v660,
    v764,
    v833,
    v901,
    v969,
    v1037,
    v1105,
    v1173,
    v1241,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  *((_QWORD *)&v1305 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    v1242,
    2,
    v437,
    v438,
    v439,
    v557,
    v661,
    v765,
    v834,
    v902,
    v970,
    v1038,
    v1106,
    v1174,
    v1242,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1313 = 0;
  v1306 = 0;
  *(_QWORD *)&v1307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1306 = 3;
  v440 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v440, "required", v441, v442, v443, v444, v558, v662, v766);
  v1307 = (unsigned __int64)v440;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1273);
  v1275 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v445 = _mm_load_si128(&v1270);
  v1309 = 0;
  v1308 = v445;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1269,
    (__int64)v1248,
    2,
    v446,
    v447,
    v448,
    v559,
    v663,
    v767,
    v835,
    v903,
    v971,
    v1039,
    v1107,
    v1175,
    v1243,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v1315 = 0;
  LOBYTE(v1271) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1251,
    (__int64)&v1310,
    3,
    v449,
    v450,
    v451,
    v560,
    v664,
    v768,
    v836,
    v904,
    v972,
    v1040,
    v1108,
    v1176,
    v1244,
    v1245.m128_i32[0],
    v1245.m128_i8[8],
    (__int64)v1246,
    v1247,
    (__int64)v1248);
  v452 = v1323;
  v453 = (void **)&v1316;
  v1323 = v1271;
  v454 = v1324;
  LOBYTE(v1271) = v452;
  v1324 = v1272;
  v1272 = v454;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v453 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v453 != &v1310 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v455 = _mm_load_si128((const __m128i *)&v1245);
  v1311 = 0;
  v1310 = ida_mcp::tools::navigation::get_next_seg_nav;
  v1312 = v455;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1312.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1312.m128i_i64[0])(&v1310, &v1310, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1317);
  return v1327 - __readfsqword(0x28u);
}

