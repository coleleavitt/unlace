unsigned __int64 __fastcall ida_mcp::tools::patching::register_tools(
        ida_mcp::tools::patching *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 *v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __m128 v37; // xmm1
  __m128i v38; // xmm0
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  char v42; // si
  void **v43; // r15
  __int64 v44; // rdx
  __m128i v45; // xmm2
  __int64 *v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 *v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 *v62; // r15
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 *v70; // r15
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 *v75; // r15
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  __m128i v81; // xmm0
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  char v88; // si
  void **v89; // r15
  __int64 v90; // rax
  __m128i v91; // xmm3
  __int64 *v92; // r15
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 *v100; // r15
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 *v105; // r15
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rax
  __int64 *v114; // r15
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rax
  __int64 *v134; // r15
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
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
  __int64 *v154; // r15
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rax
  __m128i v160; // xmm0
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  char v167; // si
  void **v168; // r15
  __int64 v169; // rax
  __m128i v170; // xmm4
  __int64 *v171; // r15
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 *v179; // r15
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  __int64 *v184; // r15
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // rax
  __int64 *v193; // r15
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // r9
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r9
  __int64 v212; // rax
  __int64 *v213; // r15
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // r9
  __int64 v224; // rcx
  __int64 v225; // r8
  __int64 v226; // r9
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // r9
  __int64 v230; // rcx
  __int64 v231; // r8
  __int64 v232; // r9
  __int64 *v233; // r15
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 v238; // rax
  __m128i v239; // xmm0
  __int64 v240; // rcx
  __int64 v241; // r8
  __int64 v242; // r9
  __int64 v243; // rcx
  __int64 v244; // r8
  __int64 v245; // r9
  char v246; // si
  void **v247; // r15
  __int64 v248; // rax
  __m128i v249; // xmm5
  __int64 *v250; // r15
  __int64 v251; // rdx
  __int64 v252; // rcx
  __int64 v253; // r8
  __int64 v254; // r9
  __int64 v255; // rcx
  __int64 v256; // r8
  __int64 v257; // r9
  __int64 *v258; // r15
  __int64 v259; // rdx
  __int64 v260; // rcx
  __int64 v261; // r8
  __int64 v262; // r9
  __int64 *v263; // r15
  __int64 v264; // rdx
  __int64 v265; // rcx
  __int64 v266; // r8
  __int64 v267; // r9
  __int64 v268; // rcx
  __int64 v269; // r8
  __int64 v270; // r9
  __int64 v271; // rax
  __int64 *v272; // r15
  __int64 v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // r8
  __int64 v276; // r9
  __int64 v277; // rcx
  __int64 v278; // r8
  __int64 v279; // r9
  __int64 v280; // rcx
  __int64 v281; // r8
  __int64 v282; // r9
  __int64 v283; // rcx
  __int64 v284; // r8
  __int64 v285; // r9
  __int64 *v286; // r15
  __int64 v287; // rdx
  __int64 v288; // rcx
  __int64 v289; // r8
  __int64 v290; // r9
  __int64 *v291; // r15
  __int64 v292; // rdx
  __int64 v293; // rcx
  __int64 v294; // r8
  __int64 v295; // r9
  __int64 v296; // rcx
  __int64 v297; // r8
  __int64 v298; // r9
  __int64 v299; // rax
  __int64 *v300; // r15
  __int64 v301; // rdx
  __int64 v302; // rcx
  __int64 v303; // r8
  __int64 v304; // r9
  __int64 v305; // rcx
  __int64 v306; // r8
  __int64 v307; // r9
  __int64 v308; // rcx
  __int64 v309; // r8
  __int64 v310; // r9
  __int64 v311; // rcx
  __int64 v312; // r8
  __int64 v313; // r9
  __int64 v314; // rcx
  __int64 v315; // r8
  __int64 v316; // r9
  __int64 v317; // rcx
  __int64 v318; // r8
  __int64 v319; // r9
  __int64 *v320; // r15
  __int64 v321; // rdx
  __int64 v322; // rcx
  __int64 v323; // r8
  __int64 v324; // r9
  __int64 *v325; // r15
  __int64 v326; // rdx
  __int64 v327; // rcx
  __int64 v328; // r8
  __int64 v329; // r9
  __m128i v330; // xmm0
  __int64 v331; // rcx
  __int64 v332; // r8
  __int64 v333; // r9
  __int64 v334; // rcx
  __int64 v335; // r8
  __int64 v336; // r9
  char v337; // si
  void **v338; // r14
  __int64 v339; // rax
  __m128i v340; // xmm6
  __int64 *v341; // r14
  __int64 v342; // rdx
  __int64 v343; // rcx
  __int64 v344; // r8
  __int64 v345; // r9
  __int64 v346; // rcx
  __int64 v347; // r8
  __int64 v348; // r9
  __int64 *v349; // r14
  __int64 v350; // rdx
  __int64 v351; // rcx
  __int64 v352; // r8
  __int64 v353; // r9
  __int64 *v354; // r14
  __int64 v355; // rdx
  __int64 v356; // rcx
  __int64 v357; // r8
  __int64 v358; // r9
  __int64 v359; // rcx
  __int64 v360; // r8
  __int64 v361; // r9
  __int64 v362; // rax
  __int64 *v363; // r14
  __int64 v364; // rdx
  __int64 v365; // rcx
  __int64 v366; // r8
  __int64 v367; // r9
  __int64 v368; // rcx
  __int64 v369; // r8
  __int64 v370; // r9
  __int64 v371; // rcx
  __int64 v372; // r8
  __int64 v373; // r9
  __int64 v374; // rcx
  __int64 v375; // r8
  __int64 v376; // r9
  __int64 v377; // rcx
  __int64 v378; // r8
  __int64 v379; // r9
  __int64 v380; // rcx
  __int64 v381; // r8
  __int64 v382; // r9
  __int64 *v383; // r14
  __int64 v384; // rdx
  __int64 v385; // rcx
  __int64 v386; // r8
  __int64 v387; // r9
  __m128i v388; // xmm0
  __int64 v389; // rcx
  __int64 v390; // r8
  __int64 v391; // r9
  __int64 v392; // rcx
  __int64 v393; // r8
  __int64 v394; // r9
  char v395; // si
  void **v396; // r14
  __int64 v397; // rax
  __m128i v398; // xmm7
  __int64 *v399; // r14
  __int64 v400; // rdx
  __int64 v401; // rcx
  __int64 v402; // r8
  __int64 v403; // r9
  __int64 v404; // rcx
  __int64 v405; // r8
  __int64 v406; // r9
  __int64 *v407; // r14
  __int64 v408; // rdx
  __int64 v409; // rcx
  __int64 v410; // r8
  __int64 v411; // r9
  __int64 *v412; // r14
  __int64 v413; // rdx
  __int64 v414; // rcx
  __int64 v415; // r8
  __int64 v416; // r9
  __int64 v417; // rcx
  __int64 v418; // r8
  __int64 v419; // r9
  __int64 v420; // rax
  __int64 *v421; // r14
  __int64 v422; // rdx
  __int64 v423; // rcx
  __int64 v424; // r8
  __int64 v425; // r9
  __int64 v426; // rcx
  __int64 v427; // r8
  __int64 v428; // r9
  __int64 v429; // rcx
  __int64 v430; // r8
  __int64 v431; // r9
  __int64 v432; // rcx
  __int64 v433; // r8
  __int64 v434; // r9
  __int64 v435; // rcx
  __int64 v436; // r8
  __int64 v437; // r9
  __int64 v438; // rcx
  __int64 v439; // r8
  __int64 v440; // r9
  __int64 *v441; // r14
  __int64 v442; // rdx
  __int64 v443; // rcx
  __int64 v444; // r8
  __int64 v445; // r9
  __m128i v446; // xmm0
  __int64 v447; // rcx
  __int64 v448; // r8
  __int64 v449; // r9
  __int64 v450; // rcx
  __int64 v451; // r8
  __int64 v452; // r9
  char v453; // si
  void **v454; // r14
  __int64 v455; // rax
  __m128i v456; // xmm2
  int v458; // [rsp+0h] [rbp-578h]
  int v459; // [rsp+0h] [rbp-578h]
  int v460; // [rsp+0h] [rbp-578h]
  int v461; // [rsp+0h] [rbp-578h]
  int v462; // [rsp+0h] [rbp-578h]
  int v463; // [rsp+0h] [rbp-578h]
  int v464; // [rsp+0h] [rbp-578h]
  int v465; // [rsp+0h] [rbp-578h]
  int v466; // [rsp+0h] [rbp-578h]
  int v467; // [rsp+0h] [rbp-578h]
  int v468; // [rsp+0h] [rbp-578h]
  int v469; // [rsp+0h] [rbp-578h]
  int v470; // [rsp+0h] [rbp-578h]
  int v471; // [rsp+0h] [rbp-578h]
  int v472; // [rsp+0h] [rbp-578h]
  int v473; // [rsp+0h] [rbp-578h]
  int v474; // [rsp+0h] [rbp-578h]
  int v475; // [rsp+0h] [rbp-578h]
  int v476; // [rsp+0h] [rbp-578h]
  int v477; // [rsp+0h] [rbp-578h]
  int v478; // [rsp+0h] [rbp-578h]
  int v479; // [rsp+0h] [rbp-578h]
  int v480; // [rsp+0h] [rbp-578h]
  int v481; // [rsp+0h] [rbp-578h]
  int v482; // [rsp+0h] [rbp-578h]
  int v483; // [rsp+0h] [rbp-578h]
  int v484; // [rsp+0h] [rbp-578h]
  int v485; // [rsp+0h] [rbp-578h]
  int v486; // [rsp+0h] [rbp-578h]
  int v487; // [rsp+0h] [rbp-578h]
  int v488; // [rsp+0h] [rbp-578h]
  int v489; // [rsp+0h] [rbp-578h]
  int v490; // [rsp+0h] [rbp-578h]
  int v491; // [rsp+0h] [rbp-578h]
  int v492; // [rsp+0h] [rbp-578h]
  int v493; // [rsp+0h] [rbp-578h]
  int v494; // [rsp+0h] [rbp-578h]
  int v495; // [rsp+0h] [rbp-578h]
  int v496; // [rsp+0h] [rbp-578h]
  int v497; // [rsp+0h] [rbp-578h]
  int v498; // [rsp+0h] [rbp-578h]
  int v499; // [rsp+0h] [rbp-578h]
  int v500; // [rsp+0h] [rbp-578h]
  int v501; // [rsp+0h] [rbp-578h]
  int v502; // [rsp+0h] [rbp-578h]
  int v503; // [rsp+0h] [rbp-578h]
  int v504; // [rsp+0h] [rbp-578h]
  int v505; // [rsp+0h] [rbp-578h]
  int v506; // [rsp+0h] [rbp-578h]
  int v507; // [rsp+0h] [rbp-578h]
  int v508; // [rsp+0h] [rbp-578h]
  int v509; // [rsp+0h] [rbp-578h]
  int v510; // [rsp+0h] [rbp-578h]
  int v511; // [rsp+0h] [rbp-578h]
  int v512; // [rsp+0h] [rbp-578h]
  int v513; // [rsp+0h] [rbp-578h]
  int v514; // [rsp+0h] [rbp-578h]
  int v515; // [rsp+0h] [rbp-578h]
  int v516; // [rsp+0h] [rbp-578h]
  int v517; // [rsp+0h] [rbp-578h]
  int v518; // [rsp+0h] [rbp-578h]
  int v519; // [rsp+0h] [rbp-578h]
  int v520; // [rsp+0h] [rbp-578h]
  int v521; // [rsp+0h] [rbp-578h]
  int v522; // [rsp+0h] [rbp-578h]
  int v523; // [rsp+0h] [rbp-578h]
  int v524; // [rsp+0h] [rbp-578h]
  int v525; // [rsp+0h] [rbp-578h]
  int v526; // [rsp+0h] [rbp-578h]
  int v527; // [rsp+0h] [rbp-578h]
  int v528; // [rsp+0h] [rbp-578h]
  int v529; // [rsp+0h] [rbp-578h]
  int v530; // [rsp+0h] [rbp-578h]
  int v531; // [rsp+0h] [rbp-578h]
  int v532; // [rsp+0h] [rbp-578h]
  int v533; // [rsp+0h] [rbp-578h]
  int v534; // [rsp+0h] [rbp-578h]
  int v535; // [rsp+0h] [rbp-578h]
  int v536; // [rsp+0h] [rbp-578h]
  int v537; // [rsp+0h] [rbp-578h]
  int v538; // [rsp+0h] [rbp-578h]
  int v539; // [rsp+0h] [rbp-578h]
  int v540; // [rsp+0h] [rbp-578h]
  int v541; // [rsp+0h] [rbp-578h]
  int v542; // [rsp+0h] [rbp-578h]
  int v543; // [rsp+0h] [rbp-578h]
  int v544; // [rsp+0h] [rbp-578h]
  int v545; // [rsp+0h] [rbp-578h]
  int v546; // [rsp+0h] [rbp-578h]
  int v547; // [rsp+0h] [rbp-578h]
  int v548; // [rsp+0h] [rbp-578h]
  int v549; // [rsp+0h] [rbp-578h]
  int v550; // [rsp+0h] [rbp-578h]
  int v551; // [rsp+0h] [rbp-578h]
  int v552; // [rsp+0h] [rbp-578h]
  int v553; // [rsp+0h] [rbp-578h]
  int v554; // [rsp+0h] [rbp-578h]
  int v555; // [rsp+0h] [rbp-578h]
  int v556; // [rsp+0h] [rbp-578h]
  int v557; // [rsp+0h] [rbp-578h]
  int v558; // [rsp+0h] [rbp-578h]
  int v559; // [rsp+0h] [rbp-578h]
  int v560; // [rsp+0h] [rbp-578h]
  int v561; // [rsp+8h] [rbp-570h]
  int v562; // [rsp+8h] [rbp-570h]
  int v563; // [rsp+8h] [rbp-570h]
  int v564; // [rsp+8h] [rbp-570h]
  const __m128i *v565; // [rsp+8h] [rbp-570h]
  __int64 v566; // [rsp+8h] [rbp-570h]
  int v567; // [rsp+8h] [rbp-570h]
  int v568; // [rsp+8h] [rbp-570h]
  int v569; // [rsp+8h] [rbp-570h]
  int v570; // [rsp+8h] [rbp-570h]
  _QWORD *v571; // [rsp+8h] [rbp-570h]
  const __m128i *v572; // [rsp+8h] [rbp-570h]
  __int64 v573; // [rsp+8h] [rbp-570h]
  __int64 v574; // [rsp+8h] [rbp-570h]
  int v575; // [rsp+8h] [rbp-570h]
  __int64 v576; // [rsp+8h] [rbp-570h]
  int v577; // [rsp+8h] [rbp-570h]
  int v578; // [rsp+8h] [rbp-570h]
  __int64 v579; // [rsp+8h] [rbp-570h]
  int v580; // [rsp+8h] [rbp-570h]
  __int64 v581; // [rsp+8h] [rbp-570h]
  __int64 v582; // [rsp+8h] [rbp-570h]
  _QWORD *v583; // [rsp+8h] [rbp-570h]
  __int64 v584; // [rsp+8h] [rbp-570h]
  int v585; // [rsp+8h] [rbp-570h]
  __int64 v586; // [rsp+8h] [rbp-570h]
  __int64 v587; // [rsp+8h] [rbp-570h]
  __int64 v588; // [rsp+8h] [rbp-570h]
  __int64 v589; // [rsp+8h] [rbp-570h]
  __int64 v590; // [rsp+8h] [rbp-570h]
  int v591; // [rsp+8h] [rbp-570h]
  __int64 v592; // [rsp+8h] [rbp-570h]
  __int64 v593; // [rsp+8h] [rbp-570h]
  int v594; // [rsp+8h] [rbp-570h]
  __int64 v595; // [rsp+8h] [rbp-570h]
  int v596; // [rsp+8h] [rbp-570h]
  int v597; // [rsp+8h] [rbp-570h]
  __int64 v598; // [rsp+8h] [rbp-570h]
  int v599; // [rsp+8h] [rbp-570h]
  __int64 v600; // [rsp+8h] [rbp-570h]
  __int64 v601; // [rsp+8h] [rbp-570h]
  _QWORD *v602; // [rsp+8h] [rbp-570h]
  __int64 v603; // [rsp+8h] [rbp-570h]
  int v604; // [rsp+8h] [rbp-570h]
  __int64 v605; // [rsp+8h] [rbp-570h]
  __int64 v606; // [rsp+8h] [rbp-570h]
  __int64 v607; // [rsp+8h] [rbp-570h]
  __int64 v608; // [rsp+8h] [rbp-570h]
  __int64 v609; // [rsp+8h] [rbp-570h]
  int v610; // [rsp+8h] [rbp-570h]
  __int64 v611; // [rsp+8h] [rbp-570h]
  __int64 v612; // [rsp+8h] [rbp-570h]
  int v613; // [rsp+8h] [rbp-570h]
  __int64 v614; // [rsp+8h] [rbp-570h]
  int v615; // [rsp+8h] [rbp-570h]
  int v616; // [rsp+8h] [rbp-570h]
  __int64 v617; // [rsp+8h] [rbp-570h]
  int v618; // [rsp+8h] [rbp-570h]
  __int64 v619; // [rsp+8h] [rbp-570h]
  __int64 v620; // [rsp+8h] [rbp-570h]
  _QWORD *v621; // [rsp+8h] [rbp-570h]
  int v622; // [rsp+8h] [rbp-570h]
  int v623; // [rsp+8h] [rbp-570h]
  __int64 v624; // [rsp+8h] [rbp-570h]
  int v625; // [rsp+8h] [rbp-570h]
  __int64 v626; // [rsp+8h] [rbp-570h]
  __int64 v627; // [rsp+8h] [rbp-570h]
  __int64 v628; // [rsp+8h] [rbp-570h]
  __int64 v629; // [rsp+8h] [rbp-570h]
  __int64 v630; // [rsp+8h] [rbp-570h]
  int v631; // [rsp+8h] [rbp-570h]
  int v632; // [rsp+8h] [rbp-570h]
  __int64 v633; // [rsp+8h] [rbp-570h]
  __int64 v634; // [rsp+8h] [rbp-570h]
  int v635; // [rsp+8h] [rbp-570h]
  __int64 v636; // [rsp+8h] [rbp-570h]
  int v637; // [rsp+8h] [rbp-570h]
  _QWORD *v638; // [rsp+8h] [rbp-570h]
  __int64 v639; // [rsp+8h] [rbp-570h]
  int v640; // [rsp+8h] [rbp-570h]
  __int64 v641; // [rsp+8h] [rbp-570h]
  __int64 v642; // [rsp+8h] [rbp-570h]
  __int64 v643; // [rsp+8h] [rbp-570h]
  __int64 v644; // [rsp+8h] [rbp-570h]
  __int64 v645; // [rsp+8h] [rbp-570h]
  int v646; // [rsp+8h] [rbp-570h]
  __int64 v647; // [rsp+8h] [rbp-570h]
  __int64 v648; // [rsp+8h] [rbp-570h]
  int v649; // [rsp+8h] [rbp-570h]
  __int64 v650; // [rsp+8h] [rbp-570h]
  int v651; // [rsp+8h] [rbp-570h]
  _QWORD *v652; // [rsp+8h] [rbp-570h]
  __int64 v653; // [rsp+8h] [rbp-570h]
  int v654; // [rsp+8h] [rbp-570h]
  __int64 v655; // [rsp+8h] [rbp-570h]
  __int64 v656; // [rsp+8h] [rbp-570h]
  __int64 v657; // [rsp+8h] [rbp-570h]
  __int64 v658; // [rsp+8h] [rbp-570h]
  __int64 v659; // [rsp+8h] [rbp-570h]
  int v660; // [rsp+8h] [rbp-570h]
  __int64 v661; // [rsp+8h] [rbp-570h]
  __int64 v662; // [rsp+8h] [rbp-570h]
  __int64 v663; // [rsp+10h] [rbp-568h]
  __int64 v664; // [rsp+10h] [rbp-568h]
  __int64 v665; // [rsp+10h] [rbp-568h]
  __int64 v666; // [rsp+10h] [rbp-568h]
  __int64 v667; // [rsp+10h] [rbp-568h]
  int v668; // [rsp+10h] [rbp-568h]
  __int64 v669; // [rsp+10h] [rbp-568h]
  __int64 v670; // [rsp+10h] [rbp-568h]
  __int64 v671; // [rsp+10h] [rbp-568h]
  __int64 v672; // [rsp+10h] [rbp-568h]
  __int64 v673; // [rsp+10h] [rbp-568h]
  __int64 v674; // [rsp+10h] [rbp-568h]
  int v675; // [rsp+10h] [rbp-568h]
  int v676; // [rsp+10h] [rbp-568h]
  __int64 v677; // [rsp+10h] [rbp-568h]
  int v678; // [rsp+10h] [rbp-568h]
  __int64 v679; // [rsp+10h] [rbp-568h]
  __int64 v680; // [rsp+10h] [rbp-568h]
  int v681; // [rsp+10h] [rbp-568h]
  __int64 v682; // [rsp+10h] [rbp-568h]
  int v683; // [rsp+10h] [rbp-568h]
  int v684; // [rsp+10h] [rbp-568h]
  int v685; // [rsp+10h] [rbp-568h]
  int v686; // [rsp+10h] [rbp-568h]
  __int64 v687; // [rsp+10h] [rbp-568h]
  int v688; // [rsp+10h] [rbp-568h]
  int v689; // [rsp+10h] [rbp-568h]
  int v690; // [rsp+10h] [rbp-568h]
  int v691; // [rsp+10h] [rbp-568h]
  int v692; // [rsp+10h] [rbp-568h]
  __int64 v693; // [rsp+10h] [rbp-568h]
  int v694; // [rsp+10h] [rbp-568h]
  int v695; // [rsp+10h] [rbp-568h]
  __int64 v696; // [rsp+10h] [rbp-568h]
  int v697; // [rsp+10h] [rbp-568h]
  __int64 v698; // [rsp+10h] [rbp-568h]
  __int64 v699; // [rsp+10h] [rbp-568h]
  int v700; // [rsp+10h] [rbp-568h]
  __int64 v701; // [rsp+10h] [rbp-568h]
  int v702; // [rsp+10h] [rbp-568h]
  int v703; // [rsp+10h] [rbp-568h]
  int v704; // [rsp+10h] [rbp-568h]
  int v705; // [rsp+10h] [rbp-568h]
  __int64 v706; // [rsp+10h] [rbp-568h]
  int v707; // [rsp+10h] [rbp-568h]
  int v708; // [rsp+10h] [rbp-568h]
  int v709; // [rsp+10h] [rbp-568h]
  int v710; // [rsp+10h] [rbp-568h]
  int v711; // [rsp+10h] [rbp-568h]
  __int64 v712; // [rsp+10h] [rbp-568h]
  int v713; // [rsp+10h] [rbp-568h]
  int v714; // [rsp+10h] [rbp-568h]
  __int64 v715; // [rsp+10h] [rbp-568h]
  int v716; // [rsp+10h] [rbp-568h]
  __int64 v717; // [rsp+10h] [rbp-568h]
  __int64 v718; // [rsp+10h] [rbp-568h]
  int v719; // [rsp+10h] [rbp-568h]
  __int64 v720; // [rsp+10h] [rbp-568h]
  int v721; // [rsp+10h] [rbp-568h]
  int v722; // [rsp+10h] [rbp-568h]
  int v723; // [rsp+10h] [rbp-568h]
  __int64 v724; // [rsp+10h] [rbp-568h]
  __int64 v725; // [rsp+10h] [rbp-568h]
  int v726; // [rsp+10h] [rbp-568h]
  __int64 v727; // [rsp+10h] [rbp-568h]
  int v728; // [rsp+10h] [rbp-568h]
  int v729; // [rsp+10h] [rbp-568h]
  int v730; // [rsp+10h] [rbp-568h]
  int v731; // [rsp+10h] [rbp-568h]
  int v732; // [rsp+10h] [rbp-568h]
  __int64 v733; // [rsp+10h] [rbp-568h]
  __int64 v734; // [rsp+10h] [rbp-568h]
  int v735; // [rsp+10h] [rbp-568h]
  int v736; // [rsp+10h] [rbp-568h]
  __int64 v737; // [rsp+10h] [rbp-568h]
  int v738; // [rsp+10h] [rbp-568h]
  __int64 v739; // [rsp+10h] [rbp-568h]
  __int64 v740; // [rsp+10h] [rbp-568h]
  int v741; // [rsp+10h] [rbp-568h]
  __int64 v742; // [rsp+10h] [rbp-568h]
  int v743; // [rsp+10h] [rbp-568h]
  int v744; // [rsp+10h] [rbp-568h]
  int v745; // [rsp+10h] [rbp-568h]
  int v746; // [rsp+10h] [rbp-568h]
  int v747; // [rsp+10h] [rbp-568h]
  __int64 v748; // [rsp+10h] [rbp-568h]
  int v749; // [rsp+10h] [rbp-568h]
  int v750; // [rsp+10h] [rbp-568h]
  __int64 v751; // [rsp+10h] [rbp-568h]
  int v752; // [rsp+10h] [rbp-568h]
  __int64 v753; // [rsp+10h] [rbp-568h]
  __int64 v754; // [rsp+10h] [rbp-568h]
  int v755; // [rsp+10h] [rbp-568h]
  __int64 v756; // [rsp+10h] [rbp-568h]
  int v757; // [rsp+10h] [rbp-568h]
  int v758; // [rsp+10h] [rbp-568h]
  int v759; // [rsp+10h] [rbp-568h]
  int v760; // [rsp+10h] [rbp-568h]
  int v761; // [rsp+10h] [rbp-568h]
  __int64 v762; // [rsp+10h] [rbp-568h]
  int v763; // [rsp+10h] [rbp-568h]
  int v764; // [rsp+10h] [rbp-568h]
  __m128i *v765; // [rsp+18h] [rbp-560h]
  int v766; // [rsp+18h] [rbp-560h]
  int v767; // [rsp+18h] [rbp-560h]
  int v768; // [rsp+18h] [rbp-560h]
  int v769; // [rsp+18h] [rbp-560h]
  int v770; // [rsp+18h] [rbp-560h]
  int v771; // [rsp+18h] [rbp-560h]
  _QWORD *v772; // [rsp+18h] [rbp-560h]
  int v773; // [rsp+18h] [rbp-560h]
  int v774; // [rsp+18h] [rbp-560h]
  int v775; // [rsp+18h] [rbp-560h]
  int v776; // [rsp+18h] [rbp-560h]
  int v777; // [rsp+18h] [rbp-560h]
  int v778; // [rsp+18h] [rbp-560h]
  int v779; // [rsp+18h] [rbp-560h]
  int v780; // [rsp+18h] [rbp-560h]
  int v781; // [rsp+18h] [rbp-560h]
  int v782; // [rsp+18h] [rbp-560h]
  int v783; // [rsp+18h] [rbp-560h]
  int v784; // [rsp+18h] [rbp-560h]
  _QWORD *v785; // [rsp+18h] [rbp-560h]
  int v786; // [rsp+18h] [rbp-560h]
  int v787; // [rsp+18h] [rbp-560h]
  int v788; // [rsp+18h] [rbp-560h]
  int v789; // [rsp+18h] [rbp-560h]
  int v790; // [rsp+18h] [rbp-560h]
  int v791; // [rsp+18h] [rbp-560h]
  int v792; // [rsp+18h] [rbp-560h]
  int v793; // [rsp+18h] [rbp-560h]
  int v794; // [rsp+18h] [rbp-560h]
  int v795; // [rsp+18h] [rbp-560h]
  int v796; // [rsp+18h] [rbp-560h]
  int v797; // [rsp+18h] [rbp-560h]
  _QWORD *v798; // [rsp+18h] [rbp-560h]
  int v799; // [rsp+18h] [rbp-560h]
  int v800; // [rsp+18h] [rbp-560h]
  int v801; // [rsp+18h] [rbp-560h]
  int v802; // [rsp+18h] [rbp-560h]
  int v803; // [rsp+18h] [rbp-560h]
  int v804; // [rsp+18h] [rbp-560h]
  int v805; // [rsp+18h] [rbp-560h]
  _QWORD *v806; // [rsp+18h] [rbp-560h]
  int v807; // [rsp+18h] [rbp-560h]
  int v808; // [rsp+18h] [rbp-560h]
  int v809; // [rsp+18h] [rbp-560h]
  int v810; // [rsp+18h] [rbp-560h]
  int v811; // [rsp+18h] [rbp-560h]
  int v812; // [rsp+18h] [rbp-560h]
  int v813; // [rsp+18h] [rbp-560h]
  int v814; // [rsp+18h] [rbp-560h]
  _QWORD *v815; // [rsp+18h] [rbp-560h]
  int v816; // [rsp+18h] [rbp-560h]
  int v817; // [rsp+18h] [rbp-560h]
  int v818; // [rsp+18h] [rbp-560h]
  int v819; // [rsp+18h] [rbp-560h]
  int v820; // [rsp+18h] [rbp-560h]
  int v821; // [rsp+18h] [rbp-560h]
  int v822; // [rsp+18h] [rbp-560h]
  int v823; // [rsp+18h] [rbp-560h]
  int v824; // [rsp+20h] [rbp-558h]
  int v825; // [rsp+20h] [rbp-558h]
  int v826; // [rsp+20h] [rbp-558h]
  int v827; // [rsp+20h] [rbp-558h]
  int v828; // [rsp+20h] [rbp-558h]
  int v829; // [rsp+20h] [rbp-558h]
  int v830; // [rsp+20h] [rbp-558h]
  int v831; // [rsp+20h] [rbp-558h]
  int v832; // [rsp+20h] [rbp-558h]
  int v833; // [rsp+20h] [rbp-558h]
  int v834; // [rsp+20h] [rbp-558h]
  int v835; // [rsp+20h] [rbp-558h]
  int v836; // [rsp+20h] [rbp-558h]
  int v837; // [rsp+20h] [rbp-558h]
  int v838; // [rsp+20h] [rbp-558h]
  int v839; // [rsp+20h] [rbp-558h]
  int v840; // [rsp+20h] [rbp-558h]
  int v841; // [rsp+20h] [rbp-558h]
  int v842; // [rsp+20h] [rbp-558h]
  int v843; // [rsp+20h] [rbp-558h]
  int v844; // [rsp+20h] [rbp-558h]
  int v845; // [rsp+20h] [rbp-558h]
  int v846; // [rsp+20h] [rbp-558h]
  int v847; // [rsp+20h] [rbp-558h]
  int v848; // [rsp+20h] [rbp-558h]
  int v849; // [rsp+20h] [rbp-558h]
  int v850; // [rsp+20h] [rbp-558h]
  int v851; // [rsp+20h] [rbp-558h]
  int v852; // [rsp+20h] [rbp-558h]
  int v853; // [rsp+20h] [rbp-558h]
  int v854; // [rsp+20h] [rbp-558h]
  int v855; // [rsp+20h] [rbp-558h]
  int v856; // [rsp+20h] [rbp-558h]
  int v857; // [rsp+20h] [rbp-558h]
  int v858; // [rsp+20h] [rbp-558h]
  int v859; // [rsp+20h] [rbp-558h]
  int v860; // [rsp+20h] [rbp-558h]
  int v861; // [rsp+20h] [rbp-558h]
  int v862; // [rsp+20h] [rbp-558h]
  int v863; // [rsp+20h] [rbp-558h]
  int v864; // [rsp+20h] [rbp-558h]
  int v865; // [rsp+20h] [rbp-558h]
  int v866; // [rsp+20h] [rbp-558h]
  int v867; // [rsp+20h] [rbp-558h]
  int v868; // [rsp+20h] [rbp-558h]
  int v869; // [rsp+20h] [rbp-558h]
  int v870; // [rsp+20h] [rbp-558h]
  int v871; // [rsp+20h] [rbp-558h]
  int v872; // [rsp+20h] [rbp-558h]
  int v873; // [rsp+20h] [rbp-558h]
  int v874; // [rsp+20h] [rbp-558h]
  int v875; // [rsp+20h] [rbp-558h]
  int v876; // [rsp+20h] [rbp-558h]
  int v877; // [rsp+20h] [rbp-558h]
  int v878; // [rsp+20h] [rbp-558h]
  int v879; // [rsp+20h] [rbp-558h]
  int v880; // [rsp+20h] [rbp-558h]
  int v881; // [rsp+20h] [rbp-558h]
  int v882; // [rsp+20h] [rbp-558h]
  __m128i *v883; // [rsp+28h] [rbp-550h]
  int v884; // [rsp+28h] [rbp-550h]
  int v885; // [rsp+28h] [rbp-550h]
  _QWORD *v886; // [rsp+28h] [rbp-550h]
  int v887; // [rsp+28h] [rbp-550h]
  __int64 v888; // [rsp+28h] [rbp-550h]
  int v889; // [rsp+28h] [rbp-550h]
  int v890; // [rsp+28h] [rbp-550h]
  int v891; // [rsp+28h] [rbp-550h]
  int v892; // [rsp+28h] [rbp-550h]
  int v893; // [rsp+28h] [rbp-550h]
  int v894; // [rsp+28h] [rbp-550h]
  int v895; // [rsp+28h] [rbp-550h]
  int v896; // [rsp+28h] [rbp-550h]
  int v897; // [rsp+28h] [rbp-550h]
  int v898; // [rsp+28h] [rbp-550h]
  _QWORD *v899; // [rsp+28h] [rbp-550h]
  int v900; // [rsp+28h] [rbp-550h]
  __int64 v901; // [rsp+28h] [rbp-550h]
  int v902; // [rsp+28h] [rbp-550h]
  int v903; // [rsp+28h] [rbp-550h]
  int v904; // [rsp+28h] [rbp-550h]
  int v905; // [rsp+28h] [rbp-550h]
  int v906; // [rsp+28h] [rbp-550h]
  int v907; // [rsp+28h] [rbp-550h]
  int v908; // [rsp+28h] [rbp-550h]
  int v909; // [rsp+28h] [rbp-550h]
  int v910; // [rsp+28h] [rbp-550h]
  int v911; // [rsp+28h] [rbp-550h]
  _QWORD *v912; // [rsp+28h] [rbp-550h]
  int v913; // [rsp+28h] [rbp-550h]
  __int64 v914; // [rsp+28h] [rbp-550h]
  int v915; // [rsp+28h] [rbp-550h]
  int v916; // [rsp+28h] [rbp-550h]
  int v917; // [rsp+28h] [rbp-550h]
  int v918; // [rsp+28h] [rbp-550h]
  int v919; // [rsp+28h] [rbp-550h]
  int v920; // [rsp+28h] [rbp-550h]
  int v921; // [rsp+28h] [rbp-550h]
  int v922; // [rsp+28h] [rbp-550h]
  int v923; // [rsp+28h] [rbp-550h]
  int v924; // [rsp+28h] [rbp-550h]
  int v925; // [rsp+28h] [rbp-550h]
  int v926; // [rsp+28h] [rbp-550h]
  int v927; // [rsp+28h] [rbp-550h]
  int v928; // [rsp+28h] [rbp-550h]
  int v929; // [rsp+28h] [rbp-550h]
  int v930; // [rsp+28h] [rbp-550h]
  _QWORD *v931; // [rsp+28h] [rbp-550h]
  int v932; // [rsp+28h] [rbp-550h]
  int v933; // [rsp+28h] [rbp-550h]
  int v934; // [rsp+28h] [rbp-550h]
  int v935; // [rsp+28h] [rbp-550h]
  int v936; // [rsp+28h] [rbp-550h]
  int v937; // [rsp+28h] [rbp-550h]
  int v938; // [rsp+28h] [rbp-550h]
  int v939; // [rsp+28h] [rbp-550h]
  _QWORD *v940; // [rsp+28h] [rbp-550h]
  int v941; // [rsp+28h] [rbp-550h]
  __m128i *v942; // [rsp+30h] [rbp-548h]
  __int64 v943; // [rsp+30h] [rbp-548h]
  __int64 v944; // [rsp+30h] [rbp-548h]
  _QWORD *v945; // [rsp+30h] [rbp-548h]
  __int64 v946; // [rsp+30h] [rbp-548h]
  __int64 v947; // [rsp+30h] [rbp-548h]
  __int64 v948; // [rsp+30h] [rbp-548h]
  __int64 v949; // [rsp+30h] [rbp-548h]
  __int64 v950; // [rsp+30h] [rbp-548h]
  __int64 v951; // [rsp+30h] [rbp-548h]
  __int64 v952; // [rsp+30h] [rbp-548h]
  __int64 v953; // [rsp+30h] [rbp-548h]
  __int64 v954; // [rsp+30h] [rbp-548h]
  __int64 v955; // [rsp+30h] [rbp-548h]
  __int64 v956; // [rsp+30h] [rbp-548h]
  __int64 v957; // [rsp+30h] [rbp-548h]
  _QWORD *v958; // [rsp+30h] [rbp-548h]
  __int64 v959; // [rsp+30h] [rbp-548h]
  __int64 v960; // [rsp+30h] [rbp-548h]
  __int64 v961; // [rsp+30h] [rbp-548h]
  __int64 v962; // [rsp+30h] [rbp-548h]
  __int64 v963; // [rsp+30h] [rbp-548h]
  __int64 v964; // [rsp+30h] [rbp-548h]
  __int64 v965; // [rsp+30h] [rbp-548h]
  __int64 v966; // [rsp+30h] [rbp-548h]
  __int64 v967; // [rsp+30h] [rbp-548h]
  __int64 v968; // [rsp+30h] [rbp-548h]
  __int64 v969; // [rsp+30h] [rbp-548h]
  __int64 v970; // [rsp+30h] [rbp-548h]
  _QWORD *v971; // [rsp+30h] [rbp-548h]
  __int64 v972; // [rsp+30h] [rbp-548h]
  __int64 v973; // [rsp+30h] [rbp-548h]
  __int64 v974; // [rsp+30h] [rbp-548h]
  __int64 v975; // [rsp+30h] [rbp-548h]
  __int64 v976; // [rsp+30h] [rbp-548h]
  __int64 v977; // [rsp+30h] [rbp-548h]
  __int64 v978; // [rsp+30h] [rbp-548h]
  __int64 v979; // [rsp+30h] [rbp-548h]
  __int64 v980; // [rsp+30h] [rbp-548h]
  __int64 v981; // [rsp+30h] [rbp-548h]
  __int64 v982; // [rsp+30h] [rbp-548h]
  __int64 v983; // [rsp+30h] [rbp-548h]
  __int64 v984; // [rsp+30h] [rbp-548h]
  __int64 v985; // [rsp+30h] [rbp-548h]
  __int64 v986; // [rsp+30h] [rbp-548h]
  _QWORD *v987; // [rsp+30h] [rbp-548h]
  __int64 v988; // [rsp+30h] [rbp-548h]
  __int64 v989; // [rsp+30h] [rbp-548h]
  __int64 v990; // [rsp+30h] [rbp-548h]
  __int64 v991; // [rsp+30h] [rbp-548h]
  __int64 v992; // [rsp+30h] [rbp-548h]
  __int64 v993; // [rsp+30h] [rbp-548h]
  __int64 v994; // [rsp+30h] [rbp-548h]
  __int64 v995; // [rsp+30h] [rbp-548h]
  _QWORD *v996; // [rsp+30h] [rbp-548h]
  __int64 v997; // [rsp+30h] [rbp-548h]
  __int64 v998; // [rsp+30h] [rbp-548h]
  __int64 v999; // [rsp+30h] [rbp-548h]
  __int64 v1000; // [rsp+30h] [rbp-548h]
  __m128i *v1001; // [rsp+38h] [rbp-540h]
  int v1002; // [rsp+38h] [rbp-540h]
  int v1003; // [rsp+38h] [rbp-540h]
  int v1004; // [rsp+38h] [rbp-540h]
  int v1005; // [rsp+38h] [rbp-540h]
  int v1006; // [rsp+38h] [rbp-540h]
  int v1007; // [rsp+38h] [rbp-540h]
  _QWORD *v1008; // [rsp+38h] [rbp-540h]
  int v1009; // [rsp+38h] [rbp-540h]
  __int64 v1010; // [rsp+38h] [rbp-540h]
  int v1011; // [rsp+38h] [rbp-540h]
  int v1012; // [rsp+38h] [rbp-540h]
  int v1013; // [rsp+38h] [rbp-540h]
  int v1014; // [rsp+38h] [rbp-540h]
  int v1015; // [rsp+38h] [rbp-540h]
  int v1016; // [rsp+38h] [rbp-540h]
  int v1017; // [rsp+38h] [rbp-540h]
  int v1018; // [rsp+38h] [rbp-540h]
  int v1019; // [rsp+38h] [rbp-540h]
  int v1020; // [rsp+38h] [rbp-540h]
  _QWORD *v1021; // [rsp+38h] [rbp-540h]
  int v1022; // [rsp+38h] [rbp-540h]
  __int64 v1023; // [rsp+38h] [rbp-540h]
  int v1024; // [rsp+38h] [rbp-540h]
  int v1025; // [rsp+38h] [rbp-540h]
  int v1026; // [rsp+38h] [rbp-540h]
  int v1027; // [rsp+38h] [rbp-540h]
  int v1028; // [rsp+38h] [rbp-540h]
  int v1029; // [rsp+38h] [rbp-540h]
  int v1030; // [rsp+38h] [rbp-540h]
  int v1031; // [rsp+38h] [rbp-540h]
  int v1032; // [rsp+38h] [rbp-540h]
  int v1033; // [rsp+38h] [rbp-540h]
  _QWORD *v1034; // [rsp+38h] [rbp-540h]
  int v1035; // [rsp+38h] [rbp-540h]
  __int64 v1036; // [rsp+38h] [rbp-540h]
  int v1037; // [rsp+38h] [rbp-540h]
  int v1038; // [rsp+38h] [rbp-540h]
  int v1039; // [rsp+38h] [rbp-540h]
  int v1040; // [rsp+38h] [rbp-540h]
  int v1041; // [rsp+38h] [rbp-540h]
  int v1042; // [rsp+38h] [rbp-540h]
  int v1043; // [rsp+38h] [rbp-540h]
  __int64 v1044; // [rsp+38h] [rbp-540h]
  int v1045; // [rsp+38h] [rbp-540h]
  int v1046; // [rsp+38h] [rbp-540h]
  int v1047; // [rsp+38h] [rbp-540h]
  int v1048; // [rsp+38h] [rbp-540h]
  int v1049; // [rsp+38h] [rbp-540h]
  int v1050; // [rsp+38h] [rbp-540h]
  int v1051; // [rsp+38h] [rbp-540h]
  int v1052; // [rsp+38h] [rbp-540h]
  __int64 v1053; // [rsp+38h] [rbp-540h]
  int v1054; // [rsp+38h] [rbp-540h]
  int v1055; // [rsp+38h] [rbp-540h]
  int v1056; // [rsp+38h] [rbp-540h]
  int v1057; // [rsp+38h] [rbp-540h]
  int v1058; // [rsp+38h] [rbp-540h]
  int v1059; // [rsp+38h] [rbp-540h]
  int v1060; // [rsp+40h] [rbp-538h]
  int v1061; // [rsp+40h] [rbp-538h]
  int v1062; // [rsp+40h] [rbp-538h]
  int v1063; // [rsp+40h] [rbp-538h]
  int v1064; // [rsp+40h] [rbp-538h]
  int v1065; // [rsp+40h] [rbp-538h]
  int v1066; // [rsp+40h] [rbp-538h]
  int v1067; // [rsp+40h] [rbp-538h]
  int v1068; // [rsp+40h] [rbp-538h]
  int v1069; // [rsp+40h] [rbp-538h]
  int v1070; // [rsp+40h] [rbp-538h]
  int v1071; // [rsp+40h] [rbp-538h]
  int v1072; // [rsp+40h] [rbp-538h]
  int v1073; // [rsp+40h] [rbp-538h]
  int v1074; // [rsp+40h] [rbp-538h]
  int v1075; // [rsp+40h] [rbp-538h]
  int v1076; // [rsp+40h] [rbp-538h]
  int v1077; // [rsp+40h] [rbp-538h]
  int v1078; // [rsp+40h] [rbp-538h]
  int v1079; // [rsp+40h] [rbp-538h]
  int v1080; // [rsp+40h] [rbp-538h]
  int v1081; // [rsp+40h] [rbp-538h]
  int v1082; // [rsp+40h] [rbp-538h]
  int v1083; // [rsp+40h] [rbp-538h]
  int v1084; // [rsp+40h] [rbp-538h]
  int v1085; // [rsp+40h] [rbp-538h]
  int v1086; // [rsp+40h] [rbp-538h]
  int v1087; // [rsp+40h] [rbp-538h]
  int v1088; // [rsp+40h] [rbp-538h]
  int v1089; // [rsp+40h] [rbp-538h]
  int v1090; // [rsp+40h] [rbp-538h]
  int v1091; // [rsp+40h] [rbp-538h]
  int v1092; // [rsp+40h] [rbp-538h]
  int v1093; // [rsp+40h] [rbp-538h]
  int v1094; // [rsp+40h] [rbp-538h]
  int v1095; // [rsp+40h] [rbp-538h]
  int v1096; // [rsp+40h] [rbp-538h]
  int v1097; // [rsp+40h] [rbp-538h]
  int v1098; // [rsp+40h] [rbp-538h]
  int v1099; // [rsp+40h] [rbp-538h]
  int v1100; // [rsp+40h] [rbp-538h]
  int v1101; // [rsp+40h] [rbp-538h]
  int v1102; // [rsp+40h] [rbp-538h]
  int v1103; // [rsp+40h] [rbp-538h]
  int v1104; // [rsp+40h] [rbp-538h]
  int v1105; // [rsp+40h] [rbp-538h]
  int v1106; // [rsp+40h] [rbp-538h]
  int v1107; // [rsp+40h] [rbp-538h]
  int v1108; // [rsp+40h] [rbp-538h]
  int v1109; // [rsp+40h] [rbp-538h]
  int v1110; // [rsp+40h] [rbp-538h]
  int v1111; // [rsp+40h] [rbp-538h]
  int v1112; // [rsp+40h] [rbp-538h]
  int v1113; // [rsp+40h] [rbp-538h]
  int v1114; // [rsp+40h] [rbp-538h]
  int v1115; // [rsp+40h] [rbp-538h]
  int v1116; // [rsp+40h] [rbp-538h]
  int v1117; // [rsp+40h] [rbp-538h]
  int v1118; // [rsp+40h] [rbp-538h]
  int v1119; // [rsp+48h] [rbp-530h]
  int v1120; // [rsp+48h] [rbp-530h]
  int v1121; // [rsp+48h] [rbp-530h]
  int v1122; // [rsp+48h] [rbp-530h]
  int v1123; // [rsp+48h] [rbp-530h]
  int v1124; // [rsp+48h] [rbp-530h]
  int v1125; // [rsp+48h] [rbp-530h]
  int v1126; // [rsp+48h] [rbp-530h]
  int v1127; // [rsp+48h] [rbp-530h]
  int v1128; // [rsp+48h] [rbp-530h]
  int v1129; // [rsp+48h] [rbp-530h]
  int v1130; // [rsp+48h] [rbp-530h]
  int v1131; // [rsp+48h] [rbp-530h]
  int v1132; // [rsp+48h] [rbp-530h]
  int v1133; // [rsp+48h] [rbp-530h]
  int v1134; // [rsp+48h] [rbp-530h]
  int v1135; // [rsp+48h] [rbp-530h]
  int v1136; // [rsp+48h] [rbp-530h]
  int v1137; // [rsp+48h] [rbp-530h]
  int v1138; // [rsp+48h] [rbp-530h]
  int v1139; // [rsp+48h] [rbp-530h]
  int v1140; // [rsp+48h] [rbp-530h]
  int v1141; // [rsp+48h] [rbp-530h]
  int v1142; // [rsp+48h] [rbp-530h]
  int v1143; // [rsp+48h] [rbp-530h]
  int v1144; // [rsp+48h] [rbp-530h]
  int v1145; // [rsp+48h] [rbp-530h]
  int v1146; // [rsp+48h] [rbp-530h]
  int v1147; // [rsp+48h] [rbp-530h]
  int v1148; // [rsp+48h] [rbp-530h]
  int v1149; // [rsp+48h] [rbp-530h]
  int v1150; // [rsp+48h] [rbp-530h]
  int v1151; // [rsp+48h] [rbp-530h]
  int v1152; // [rsp+48h] [rbp-530h]
  int v1153; // [rsp+48h] [rbp-530h]
  int v1154; // [rsp+48h] [rbp-530h]
  int v1155; // [rsp+48h] [rbp-530h]
  int v1156; // [rsp+48h] [rbp-530h]
  int v1157; // [rsp+48h] [rbp-530h]
  int v1158; // [rsp+48h] [rbp-530h]
  int v1159; // [rsp+48h] [rbp-530h]
  int v1160; // [rsp+48h] [rbp-530h]
  int v1161; // [rsp+48h] [rbp-530h]
  int v1162; // [rsp+48h] [rbp-530h]
  int v1163; // [rsp+48h] [rbp-530h]
  int v1164; // [rsp+48h] [rbp-530h]
  int v1165; // [rsp+48h] [rbp-530h]
  int v1166; // [rsp+48h] [rbp-530h]
  int v1167; // [rsp+48h] [rbp-530h]
  int v1168; // [rsp+48h] [rbp-530h]
  int v1169; // [rsp+48h] [rbp-530h]
  int v1170; // [rsp+48h] [rbp-530h]
  int v1171; // [rsp+48h] [rbp-530h]
  int v1172; // [rsp+48h] [rbp-530h]
  int v1173; // [rsp+48h] [rbp-530h]
  int v1174; // [rsp+48h] [rbp-530h]
  int v1175; // [rsp+48h] [rbp-530h]
  int v1176; // [rsp+48h] [rbp-530h]
  int v1177; // [rsp+48h] [rbp-530h]
  int v1178; // [rsp+50h] [rbp-528h]
  int v1179; // [rsp+50h] [rbp-528h]
  int v1180; // [rsp+50h] [rbp-528h]
  int v1181; // [rsp+50h] [rbp-528h]
  int v1182; // [rsp+50h] [rbp-528h]
  int v1183; // [rsp+50h] [rbp-528h]
  int v1184; // [rsp+50h] [rbp-528h]
  int v1185; // [rsp+50h] [rbp-528h]
  int v1186; // [rsp+50h] [rbp-528h]
  int v1187; // [rsp+50h] [rbp-528h]
  int v1188; // [rsp+50h] [rbp-528h]
  int v1189; // [rsp+50h] [rbp-528h]
  int v1190; // [rsp+50h] [rbp-528h]
  int v1191; // [rsp+50h] [rbp-528h]
  int v1192; // [rsp+50h] [rbp-528h]
  int v1193; // [rsp+50h] [rbp-528h]
  int v1194; // [rsp+50h] [rbp-528h]
  int v1195; // [rsp+50h] [rbp-528h]
  int v1196; // [rsp+50h] [rbp-528h]
  int v1197; // [rsp+50h] [rbp-528h]
  int v1198; // [rsp+50h] [rbp-528h]
  int v1199; // [rsp+50h] [rbp-528h]
  int v1200; // [rsp+50h] [rbp-528h]
  int v1201; // [rsp+50h] [rbp-528h]
  int v1202; // [rsp+50h] [rbp-528h]
  int v1203; // [rsp+50h] [rbp-528h]
  int v1204; // [rsp+50h] [rbp-528h]
  int v1205; // [rsp+50h] [rbp-528h]
  int v1206; // [rsp+50h] [rbp-528h]
  int v1207; // [rsp+50h] [rbp-528h]
  int v1208; // [rsp+50h] [rbp-528h]
  int v1209; // [rsp+50h] [rbp-528h]
  int v1210; // [rsp+50h] [rbp-528h]
  int v1211; // [rsp+50h] [rbp-528h]
  int v1212; // [rsp+50h] [rbp-528h]
  int v1213; // [rsp+50h] [rbp-528h]
  int v1214; // [rsp+50h] [rbp-528h]
  int v1215; // [rsp+50h] [rbp-528h]
  int v1216; // [rsp+50h] [rbp-528h]
  int v1217; // [rsp+50h] [rbp-528h]
  int v1218; // [rsp+50h] [rbp-528h]
  int v1219; // [rsp+50h] [rbp-528h]
  int v1220; // [rsp+50h] [rbp-528h]
  int v1221; // [rsp+50h] [rbp-528h]
  int v1222; // [rsp+50h] [rbp-528h]
  int v1223; // [rsp+50h] [rbp-528h]
  int v1224; // [rsp+50h] [rbp-528h]
  int v1225; // [rsp+50h] [rbp-528h]
  int v1226; // [rsp+50h] [rbp-528h]
  int v1227; // [rsp+50h] [rbp-528h]
  int v1228; // [rsp+50h] [rbp-528h]
  int v1229; // [rsp+50h] [rbp-528h]
  int v1230; // [rsp+50h] [rbp-528h]
  int v1231; // [rsp+50h] [rbp-528h]
  int v1232; // [rsp+50h] [rbp-528h]
  int v1233; // [rsp+50h] [rbp-528h]
  int v1234; // [rsp+50h] [rbp-528h]
  int v1235; // [rsp+50h] [rbp-528h]
  int v1236; // [rsp+50h] [rbp-528h]
  __m128i *v1237; // [rsp+58h] [rbp-520h]
  char v1238; // [rsp+58h] [rbp-520h]
  _QWORD *v1239; // [rsp+58h] [rbp-520h]
  char v1240; // [rsp+58h] [rbp-520h]
  char v1241; // [rsp+58h] [rbp-520h]
  char v1242; // [rsp+58h] [rbp-520h]
  char v1243; // [rsp+58h] [rbp-520h]
  char v1244; // [rsp+58h] [rbp-520h]
  char v1245; // [rsp+58h] [rbp-520h]
  char v1246; // [rsp+58h] [rbp-520h]
  char v1247; // [rsp+58h] [rbp-520h]
  char v1248; // [rsp+58h] [rbp-520h]
  char v1249; // [rsp+58h] [rbp-520h]
  char v1250; // [rsp+58h] [rbp-520h]
  char v1251; // [rsp+58h] [rbp-520h]
  _QWORD *v1252; // [rsp+58h] [rbp-520h]
  char v1253; // [rsp+58h] [rbp-520h]
  char v1254; // [rsp+58h] [rbp-520h]
  char v1255; // [rsp+58h] [rbp-520h]
  char v1256; // [rsp+58h] [rbp-520h]
  char v1257; // [rsp+58h] [rbp-520h]
  char v1258; // [rsp+58h] [rbp-520h]
  char v1259; // [rsp+58h] [rbp-520h]
  char v1260; // [rsp+58h] [rbp-520h]
  char v1261; // [rsp+58h] [rbp-520h]
  char v1262; // [rsp+58h] [rbp-520h]
  char v1263; // [rsp+58h] [rbp-520h]
  char v1264; // [rsp+58h] [rbp-520h]
  _QWORD *v1265; // [rsp+58h] [rbp-520h]
  char v1266; // [rsp+58h] [rbp-520h]
  char v1267; // [rsp+58h] [rbp-520h]
  char v1268; // [rsp+58h] [rbp-520h]
  char v1269; // [rsp+58h] [rbp-520h]
  char v1270; // [rsp+58h] [rbp-520h]
  char v1271; // [rsp+58h] [rbp-520h]
  char v1272; // [rsp+58h] [rbp-520h]
  char v1273; // [rsp+58h] [rbp-520h]
  char v1274; // [rsp+58h] [rbp-520h]
  char v1275; // [rsp+58h] [rbp-520h]
  char v1276; // [rsp+58h] [rbp-520h]
  char v1277; // [rsp+58h] [rbp-520h]
  char v1278; // [rsp+58h] [rbp-520h]
  char v1279; // [rsp+58h] [rbp-520h]
  char v1280; // [rsp+58h] [rbp-520h]
  char v1281; // [rsp+58h] [rbp-520h]
  char v1282; // [rsp+58h] [rbp-520h]
  char v1283; // [rsp+58h] [rbp-520h]
  char v1284; // [rsp+58h] [rbp-520h]
  char v1285; // [rsp+58h] [rbp-520h]
  char v1286; // [rsp+58h] [rbp-520h]
  char v1287; // [rsp+58h] [rbp-520h]
  char v1288; // [rsp+58h] [rbp-520h]
  char v1289; // [rsp+58h] [rbp-520h]
  char v1290; // [rsp+58h] [rbp-520h]
  char v1291; // [rsp+58h] [rbp-520h]
  char v1292; // [rsp+58h] [rbp-520h]
  char v1293; // [rsp+58h] [rbp-520h]
  char v1294; // [rsp+58h] [rbp-520h]
  char v1295; // [rsp+58h] [rbp-520h]
  __int64 v1296; // [rsp+60h] [rbp-518h]
  __int64 v1297; // [rsp+60h] [rbp-518h]
  __int64 v1298; // [rsp+60h] [rbp-518h]
  __int64 v1299; // [rsp+60h] [rbp-518h]
  __int64 v1300; // [rsp+60h] [rbp-518h]
  __int64 v1301; // [rsp+60h] [rbp-518h]
  __int64 v1302; // [rsp+60h] [rbp-518h]
  __int64 v1303; // [rsp+60h] [rbp-518h]
  __int64 v1304; // [rsp+60h] [rbp-518h]
  __int64 v1305; // [rsp+60h] [rbp-518h]
  __int64 v1306; // [rsp+60h] [rbp-518h]
  __int64 v1307; // [rsp+60h] [rbp-518h]
  __int64 v1308; // [rsp+60h] [rbp-518h]
  __int64 v1309; // [rsp+60h] [rbp-518h]
  __int64 v1310; // [rsp+60h] [rbp-518h]
  __int64 v1311; // [rsp+60h] [rbp-518h]
  __int64 v1312; // [rsp+60h] [rbp-518h]
  __int64 v1313; // [rsp+60h] [rbp-518h]
  __int64 v1314; // [rsp+60h] [rbp-518h]
  __int64 v1315; // [rsp+60h] [rbp-518h]
  __int64 v1316; // [rsp+60h] [rbp-518h]
  __int64 v1317; // [rsp+60h] [rbp-518h]
  __int64 v1318; // [rsp+60h] [rbp-518h]
  __int64 v1319; // [rsp+60h] [rbp-518h]
  __int64 v1320; // [rsp+60h] [rbp-518h]
  __int64 v1321; // [rsp+60h] [rbp-518h]
  __int64 v1322; // [rsp+60h] [rbp-518h]
  __int64 v1323; // [rsp+60h] [rbp-518h]
  __int64 v1324; // [rsp+60h] [rbp-518h]
  __int64 v1325; // [rsp+60h] [rbp-518h]
  __int64 v1326; // [rsp+60h] [rbp-518h]
  __int64 v1327; // [rsp+60h] [rbp-518h]
  __int64 v1328; // [rsp+60h] [rbp-518h]
  __int64 v1329; // [rsp+60h] [rbp-518h]
  __int64 v1330; // [rsp+60h] [rbp-518h]
  __int64 v1331; // [rsp+60h] [rbp-518h]
  __int64 v1332; // [rsp+60h] [rbp-518h]
  __int64 v1333; // [rsp+60h] [rbp-518h]
  __int64 v1334; // [rsp+60h] [rbp-518h]
  __int64 v1335; // [rsp+60h] [rbp-518h]
  __int64 v1336; // [rsp+60h] [rbp-518h]
  __int64 v1337; // [rsp+60h] [rbp-518h]
  __int64 v1338; // [rsp+60h] [rbp-518h]
  __int64 v1339; // [rsp+60h] [rbp-518h]
  __int64 v1340; // [rsp+60h] [rbp-518h]
  __int64 v1341; // [rsp+60h] [rbp-518h]
  __int64 v1342; // [rsp+60h] [rbp-518h]
  __int64 v1343; // [rsp+60h] [rbp-518h]
  __int64 v1344; // [rsp+60h] [rbp-518h]
  __int64 v1345; // [rsp+60h] [rbp-518h]
  __int64 v1346; // [rsp+60h] [rbp-518h]
  __int64 v1347; // [rsp+60h] [rbp-518h]
  __int64 v1348; // [rsp+60h] [rbp-518h]
  __int64 v1349; // [rsp+60h] [rbp-518h]
  __int64 v1350; // [rsp+60h] [rbp-518h]
  __int64 v1351; // [rsp+60h] [rbp-518h]
  __int64 v1352; // [rsp+60h] [rbp-518h]
  __int64 v1353; // [rsp+60h] [rbp-518h]
  __int64 v1354; // [rsp+60h] [rbp-518h]
  __m128i *v1355; // [rsp+68h] [rbp-510h]
  int v1356; // [rsp+68h] [rbp-510h]
  int v1357; // [rsp+68h] [rbp-510h]
  _QWORD *v1358; // [rsp+68h] [rbp-510h]
  int v1359; // [rsp+68h] [rbp-510h]
  int v1360; // [rsp+68h] [rbp-510h]
  int v1361; // [rsp+68h] [rbp-510h]
  int v1362; // [rsp+68h] [rbp-510h]
  int v1363; // [rsp+68h] [rbp-510h]
  int v1364; // [rsp+68h] [rbp-510h]
  int v1365; // [rsp+68h] [rbp-510h]
  int v1366; // [rsp+68h] [rbp-510h]
  int v1367; // [rsp+68h] [rbp-510h]
  int v1368; // [rsp+68h] [rbp-510h]
  int v1369; // [rsp+68h] [rbp-510h]
  int v1370; // [rsp+68h] [rbp-510h]
  _QWORD *v1371; // [rsp+68h] [rbp-510h]
  int v1372; // [rsp+68h] [rbp-510h]
  int v1373; // [rsp+68h] [rbp-510h]
  int v1374; // [rsp+68h] [rbp-510h]
  int v1375; // [rsp+68h] [rbp-510h]
  int v1376; // [rsp+68h] [rbp-510h]
  int v1377; // [rsp+68h] [rbp-510h]
  int v1378; // [rsp+68h] [rbp-510h]
  int v1379; // [rsp+68h] [rbp-510h]
  int v1380; // [rsp+68h] [rbp-510h]
  int v1381; // [rsp+68h] [rbp-510h]
  int v1382; // [rsp+68h] [rbp-510h]
  int v1383; // [rsp+68h] [rbp-510h]
  _QWORD *v1384; // [rsp+68h] [rbp-510h]
  int v1385; // [rsp+68h] [rbp-510h]
  int v1386; // [rsp+68h] [rbp-510h]
  int v1387; // [rsp+68h] [rbp-510h]
  int v1388; // [rsp+68h] [rbp-510h]
  int v1389; // [rsp+68h] [rbp-510h]
  int v1390; // [rsp+68h] [rbp-510h]
  int v1391; // [rsp+68h] [rbp-510h]
  int v1392; // [rsp+68h] [rbp-510h]
  int v1393; // [rsp+68h] [rbp-510h]
  int v1394; // [rsp+68h] [rbp-510h]
  int v1395; // [rsp+68h] [rbp-510h]
  int v1396; // [rsp+68h] [rbp-510h]
  int v1397; // [rsp+68h] [rbp-510h]
  int v1398; // [rsp+68h] [rbp-510h]
  int v1399; // [rsp+68h] [rbp-510h]
  int v1400; // [rsp+68h] [rbp-510h]
  int v1401; // [rsp+68h] [rbp-510h]
  int v1402; // [rsp+68h] [rbp-510h]
  int v1403; // [rsp+68h] [rbp-510h]
  int v1404; // [rsp+68h] [rbp-510h]
  int v1405; // [rsp+68h] [rbp-510h]
  int v1406; // [rsp+68h] [rbp-510h]
  int v1407; // [rsp+68h] [rbp-510h]
  int v1408; // [rsp+68h] [rbp-510h]
  int v1409; // [rsp+68h] [rbp-510h]
  int v1410; // [rsp+68h] [rbp-510h]
  int v1411; // [rsp+68h] [rbp-510h]
  int v1412; // [rsp+68h] [rbp-510h]
  int v1413; // [rsp+68h] [rbp-510h]
  __int64 v1414; // [rsp+70h] [rbp-508h]
  __int64 v1415; // [rsp+70h] [rbp-508h]
  __int64 v1416; // [rsp+70h] [rbp-508h]
  __int64 v1417; // [rsp+70h] [rbp-508h]
  __int64 v1418; // [rsp+70h] [rbp-508h]
  __int64 v1419; // [rsp+70h] [rbp-508h]
  __int64 v1420; // [rsp+70h] [rbp-508h]
  __int64 v1421; // [rsp+70h] [rbp-508h]
  __int64 v1422; // [rsp+70h] [rbp-508h]
  __int64 v1423; // [rsp+70h] [rbp-508h]
  __int64 v1424; // [rsp+70h] [rbp-508h]
  __int64 v1425; // [rsp+70h] [rbp-508h]
  __int64 v1426; // [rsp+70h] [rbp-508h]
  __int64 v1427; // [rsp+70h] [rbp-508h]
  __int64 v1428; // [rsp+70h] [rbp-508h]
  __int64 v1429; // [rsp+70h] [rbp-508h]
  __int64 v1430; // [rsp+70h] [rbp-508h]
  __int64 v1431; // [rsp+70h] [rbp-508h]
  __int64 v1432; // [rsp+70h] [rbp-508h]
  __int64 v1433; // [rsp+70h] [rbp-508h]
  __int64 v1434; // [rsp+70h] [rbp-508h]
  __int64 v1435; // [rsp+70h] [rbp-508h]
  __int64 v1436; // [rsp+70h] [rbp-508h]
  __int64 v1437; // [rsp+70h] [rbp-508h]
  __int64 v1438; // [rsp+70h] [rbp-508h]
  __int64 v1439; // [rsp+70h] [rbp-508h]
  __int64 v1440; // [rsp+70h] [rbp-508h]
  __int64 v1441; // [rsp+70h] [rbp-508h]
  __int64 v1442; // [rsp+70h] [rbp-508h]
  __int64 v1443; // [rsp+70h] [rbp-508h]
  __int64 v1444; // [rsp+70h] [rbp-508h]
  __int64 v1445; // [rsp+70h] [rbp-508h]
  __int64 v1446; // [rsp+70h] [rbp-508h]
  __int64 v1447; // [rsp+70h] [rbp-508h]
  __int64 v1448; // [rsp+70h] [rbp-508h]
  __int64 v1449; // [rsp+70h] [rbp-508h]
  __int64 v1450; // [rsp+70h] [rbp-508h]
  __int64 v1451; // [rsp+70h] [rbp-508h]
  __int64 v1452; // [rsp+70h] [rbp-508h]
  __int64 v1453; // [rsp+70h] [rbp-508h]
  __int64 v1454; // [rsp+70h] [rbp-508h]
  __int64 v1455; // [rsp+70h] [rbp-508h]
  __int64 v1456; // [rsp+70h] [rbp-508h]
  __int64 v1457; // [rsp+70h] [rbp-508h]
  __int64 v1458; // [rsp+70h] [rbp-508h]
  __int64 v1459; // [rsp+70h] [rbp-508h]
  __int64 v1460; // [rsp+70h] [rbp-508h]
  __int64 v1461; // [rsp+70h] [rbp-508h]
  __int64 v1462; // [rsp+70h] [rbp-508h]
  __int64 v1463; // [rsp+70h] [rbp-508h]
  __int64 v1464; // [rsp+70h] [rbp-508h]
  __int64 v1465; // [rsp+70h] [rbp-508h]
  __int64 v1466; // [rsp+70h] [rbp-508h]
  __int64 v1467; // [rsp+70h] [rbp-508h]
  __int64 v1468; // [rsp+70h] [rbp-508h]
  __int64 v1469; // [rsp+70h] [rbp-508h]
  __int64 v1470; // [rsp+70h] [rbp-508h]
  __int64 v1471; // [rsp+70h] [rbp-508h]
  __int64 v1472; // [rsp+70h] [rbp-508h]
  __m128i v1473; // [rsp+A0h] [rbp-4D8h] BYREF
  __int128 *v1474; // [rsp+B0h] [rbp-4C8h]
  ida_mcp::tools::patching *v1475; // [rsp+B8h] [rbp-4C0h]
  const __m128i *v1476; // [rsp+C0h] [rbp-4B8h]
  char *v1477; // [rsp+C8h] [rbp-4B0h]
  char *v1478; // [rsp+D0h] [rbp-4A8h]
  char *v1479; // [rsp+D8h] [rbp-4A0h]
  char *v1480; // [rsp+E0h] [rbp-498h]
  char *v1481; // [rsp+E8h] [rbp-490h]
  __int8 *v1482; // [rsp+F0h] [rbp-488h]
  __int64 *v1483; // [rsp+F8h] [rbp-480h]
  __int64 *v1484; // [rsp+100h] [rbp-478h]
  __int64 *v1485; // [rsp+108h] [rbp-470h]
  __int64 *v1486; // [rsp+110h] [rbp-468h]
  __int64 *v1487; // [rsp+118h] [rbp-460h]
  __int64 *v1488; // [rsp+120h] [rbp-458h]
  __int64 *v1489; // [rsp+128h] [rbp-450h]
  _QWORD *v1490; // [rsp+130h] [rbp-448h]
  _BYTE *v1491; // [rsp+138h] [rbp-440h]
  _BYTE **v1492; // [rsp+140h] [rbp-438h]
  _BYTE *v1493; // [rsp+148h] [rbp-430h]
  __m128i *v1494; // [rsp+150h] [rbp-428h]
  __int64 *v1495; // [rsp+158h] [rbp-420h]
  __int64 *v1496; // [rsp+160h] [rbp-418h]
  const __m128i *v1497; // [rsp+168h] [rbp-410h]
  __int64 *v1498; // [rsp+170h] [rbp-408h]
  __int64 *v1499; // [rsp+178h] [rbp-400h]
  __int64 *v1500; // [rsp+180h] [rbp-3F8h]
  char *v1501; // [rsp+188h] [rbp-3F0h]
  char *v1502; // [rsp+190h] [rbp-3E8h]
  __int64 *v1503; // [rsp+198h] [rbp-3E0h]
  __int64 *v1504; // [rsp+1A0h] [rbp-3D8h]
  __int64 *v1505; // [rsp+1A8h] [rbp-3D0h]
  __m128i v1506; // [rsp+1B0h] [rbp-3C8h] BYREF
  __int64 v1507; // [rsp+1C0h] [rbp-3B8h] BYREF
  __int64 v1508; // [rsp+1C8h] [rbp-3B0h] BYREF
  __m128i v1509; // [rsp+1D0h] [rbp-3A8h] BYREF
  __int64 v1510; // [rsp+1E0h] [rbp-398h]
  char v1511; // [rsp+1E8h] [rbp-390h]
  __int128 v1512; // [rsp+1F0h] [rbp-388h] BYREF
  __m128i v1513; // [rsp+200h] [rbp-378h] BYREF
  __int64 v1514; // [rsp+210h] [rbp-368h]
  char v1515; // [rsp+218h] [rbp-360h]
  __int128 v1516; // [rsp+220h] [rbp-358h] BYREF
  __m128i v1517; // [rsp+230h] [rbp-348h] BYREF
  __int64 v1518; // [rsp+240h] [rbp-338h]
  char v1519; // [rsp+248h] [rbp-330h]
  __int128 v1520; // [rsp+250h] [rbp-328h] BYREF
  char v1521; // [rsp+260h] [rbp-318h] BYREF
  __int128 v1522; // [rsp+268h] [rbp-310h]
  char v1523; // [rsp+278h] [rbp-300h]
  __int128 v1524; // [rsp+280h] [rbp-2F8h]
  __m128i v1525; // [rsp+290h] [rbp-2E8h] BYREF
  __int64 v1526; // [rsp+2A0h] [rbp-2D8h]
  __int64 v1527; // [rsp+2A8h] [rbp-2D0h] BYREF
  char v1528; // [rsp+2B0h] [rbp-2C8h] BYREF
  __int64 v1529; // [rsp+2B8h] [rbp-2C0h]
  __m128i v1530; // [rsp+2C0h] [rbp-2B8h] BYREF
  __int64 v1531; // [rsp+2D0h] [rbp-2A8h]
  __int64 v1532; // [rsp+2D8h] [rbp-2A0h] BYREF
  char v1533; // [rsp+2E0h] [rbp-298h] BYREF
  __int64 v1534; // [rsp+2E8h] [rbp-290h]
  __m128i v1535; // [rsp+2F0h] [rbp-288h] BYREF
  __int64 v1536; // [rsp+300h] [rbp-278h]
  char v1537; // [rsp+308h] [rbp-270h]
  __int128 v1538; // [rsp+310h] [rbp-268h] BYREF
  __int64 v1539; // [rsp+320h] [rbp-258h] BYREF
  __int128 v1540; // [rsp+328h] [rbp-250h] BYREF
  char v1541; // [rsp+338h] [rbp-240h]
  __int128 v1542; // [rsp+340h] [rbp-238h] BYREF
  __int64 v1543; // [rsp+350h] [rbp-228h] BYREF
  __int128 v1544; // [rsp+358h] [rbp-220h]
  __int64 v1545; // [rsp+368h] [rbp-210h] BYREF
  __int128 v1546; // [rsp+370h] [rbp-208h] BYREF
  __int64 v1547; // [rsp+380h] [rbp-1F8h] BYREF
  __int128 v1548; // [rsp+388h] [rbp-1F0h] BYREF
  __int64 v1549; // [rsp+398h] [rbp-1E0h] BYREF
  char v1550; // [rsp+3A0h] [rbp-1D8h] BYREF
  __int64 v1551; // [rsp+3A8h] [rbp-1D0h]
  __int64 v1552; // [rsp+3B0h] [rbp-1C8h] BYREF
  char v1553; // [rsp+3B8h] [rbp-1C0h] BYREF
  __int64 v1554; // [rsp+3C0h] [rbp-1B8h]
  __int64 v1555; // [rsp+3C8h] [rbp-1B0h] BYREF
  char v1556; // [rsp+3D0h] [rbp-1A8h] BYREF
  __int64 v1557; // [rsp+3D8h] [rbp-1A0h]
  char v1558; // [rsp+3E0h] [rbp-198h] BYREF
  __int128 v1559; // [rsp+3E8h] [rbp-190h]
  __int64 v1560; // [rsp+3F8h] [rbp-180h] BYREF
  char v1561; // [rsp+400h] [rbp-178h] BYREF
  __int64 v1562; // [rsp+408h] [rbp-170h]
  char v1563; // [rsp+410h] [rbp-168h] BYREF
  __int128 v1564; // [rsp+418h] [rbp-160h]
  __m128i v1565; // [rsp+428h] [rbp-150h] BYREF
  __int64 v1566; // [rsp+438h] [rbp-140h]
  void *v1567; // [rsp+440h] [rbp-138h] BYREF
  __int64 v1568; // [rsp+448h] [rbp-130h]
  __m128i v1569; // [rsp+450h] [rbp-128h] BYREF
  __int64 v1570; // [rsp+468h] [rbp-110h]
  _QWORD v1571[2]; // [rsp+470h] [rbp-108h] BYREF
  __int64 v1572; // [rsp+480h] [rbp-F8h]
  char v1573; // [rsp+488h] [rbp-F0h] BYREF
  _BYTE *v1574; // [rsp+490h] [rbp-E8h] BYREF
  __int64 v1575; // [rsp+498h] [rbp-E0h]
  _BYTE v1576[16]; // [rsp+4A0h] [rbp-D8h] BYREF
  _BYTE *v1577; // [rsp+4B0h] [rbp-C8h] BYREF
  __int64 v1578; // [rsp+4B8h] [rbp-C0h]
  _BYTE v1579[16]; // [rsp+4C0h] [rbp-B8h] BYREF
  char v1580; // [rsp+4D0h] [rbp-A8h]
  __int64 v1581; // [rsp+4D8h] [rbp-A0h]
  char v1582; // [rsp+4F0h] [rbp-88h]
  char v1583; // [rsp+528h] [rbp-50h]
  unsigned __int64 v1584; // [rsp+538h] [rbp-40h]

  v1475 = this;
  v1584 = __readfsqword(0x28u);
  v1491 = v1576;
  v1574 = v1576;
  v1575 = 0;
  v1576[0] = 0;
  v1493 = v1579;
  v1577 = v1579;
  v1579[0] = 0;
  v1578 = 0;
  v1580 = 0;
  v1581 = 0;
  v1582 = 0;
  v1583 = 0;
  std::string::_M_replace();
  v1492 = &v1577;
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1513);
  v1514 = 0;
  v1515 = 0;
  *(_QWORD *)&v1516 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1515 = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "object", v3, v4, v5, v6, v458, v561, v663);
  v1516 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1567,
    &v1513,
    2,
    1);
  v1569.m128i_i64[0] = 0;
  v1558 = 0;
  *(_QWORD *)&v1559 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1558 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "properties", v8, v9, v10, v11, v459, v562, v664);
  v1559 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1530);
  v1531 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1517);
  v1518 = 0;
  v1519 = 0;
  *(_QWORD *)&v1520 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1519 = 3;
  v12 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v12, "string", v13, v14, v15, v16, v460, v563, v665);
  v1520 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1525,
    &v1517,
    2,
    1);
  v1526 = 0;
  v1521 = 0;
  *(_QWORD *)&v1522 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1521 = 3;
  v17 = operator new(0x20u);
  *(_QWORD *)v17 = v17 + 16;
  strcpy((char *)(v17 + 16), "description");
  *(_QWORD *)(v17 + 8) = 11;
  v1523 = 0;
  *(_QWORD *)&v1524 = 0;
  v1522 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1523 = 3;
  v18 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v18, "Hex address", v19, v20, v21, v22, v461, v564, v666);
  v1524 = (unsigned __int64)v18;
  v1497 = (const __m128i *)&v1521;
  v1504 = &v1527;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1527,
    (const __m128i *)&v1521,
    2,
    1);
  v1505 = &v1532;
  v1529 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1532,
    &v1525,
    2,
    1);
  v1534 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1552,
    &v1530,
    2,
    1);
  v1554 = 0;
  LOBYTE(v1547) = 0;
  *(_QWORD *)&v1548 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1547) = 3;
  v23 = operator new(0x20u);
  *(_DWORD *)(v23 + 16) = 1970037110;
  *(_QWORD *)v23 = v23 + 16;
  *(_BYTE *)(v23 + 20) = 101;
  *(_QWORD *)(v23 + 8) = 5;
  *(_BYTE *)(v23 + 21) = 0;
  v1548 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1535);
  v1536 = 0;
  v1537 = 0;
  *(_QWORD *)&v1538 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1537 = 3;
  v24 = operator new(0x20u);
  strcpy((char *)(v24 + 16), "integer");
  *(_QWORD *)v24 = v24 + 16;
  *(_QWORD *)(v24 + 8) = 7;
  v1538 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1543,
    &v1535,
    2,
    1);
  *((_QWORD *)&v1544 + 1) = 0;
  LOBYTE(v1539) = 0;
  *(_QWORD *)&v1540 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1539) = 3;
  v25 = operator new(0x20u);
  *(_QWORD *)v25 = v25 + 16;
  strcpy((char *)(v25 + 16), "description");
  *(_QWORD *)(v25 + 8) = 11;
  v1541 = 0;
  *(_QWORD *)&v1542 = 0;
  v1540 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1541 = 3;
  v26 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v26,
    "Byte value (0-255)",
    v27,
    v28,
    v29,
    v30,
    v462,
    (int)&v1552,
    (__int64)&v1542);
  v1542 = (unsigned __int64)v26;
  v1503 = &v1545;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1545,
    (const __m128i *)&v1539,
    2,
    1);
  v1486 = &v1549;
  *((_QWORD *)&v1546 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1549,
    (const __m128i *)&v1543,
    2,
    1);
  v1551 = 0;
  v1487 = &v1555;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1555,
    (const __m128i *)&v1547,
    2,
    1);
  v1488 = &v1560;
  v1557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1560,
    v565,
    2,
    1);
  v1562 = 0;
  v1476 = (const __m128i *)&v1558;
  v1489 = &v1569.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1569.m128i_i64[1],
    (const __m128i *)&v1558,
    2,
    1);
  v1570 = 0;
  v1563 = 0;
  *(_QWORD *)&v1564 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1563 = 3;
  v31 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v31, "required", v32, v33, v34, v35, v463, (int)v565, v667);
  v1564 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1509);
  v1510 = 0;
  v1511 = 0;
  *(_QWORD *)&v1512 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1511 = 3;
  v36 = operator new(0x20u);
  *(_DWORD *)(v36 + 16) = 1970037110;
  *(_QWORD *)v36 = v36 + 16;
  *(_BYTE *)(v36 + 20) = 101;
  v37 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v36 + 8) = 5;
  *(_BYTE *)(v36 + 21) = 0;
  v1494 = &v1506;
  v1473 = (__m128i)v37;
  v1512 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1506,
    &v1509,
    2,
    0);
  v38 = _mm_load_si128(&v1506);
  v1477 = &v1563;
  v1490 = v1571;
  v1566 = 0;
  v1565 = v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1571,
    (const __m128i *)&v1563,
    2,
    1);
  v1572 = 0;
  LOBYTE(v1507) = 0;
  v1495 = &v1507;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1507,
    (__int64)&v1567,
    3,
    v39,
    v40,
    v41,
    v464,
    v566,
    v668,
    (int)&v1535,
    (int)&v1538,
    (int)&v1525,
    (__int64)&v1530,
    (int)&v1543,
    (int)&v1548,
    (int)&v1540,
    (int)&v1512,
    (char)&v1513,
    (__int64)&v1516,
    (int)&v1517,
    (__int64)&v1520);
  v42 = v1580;
  v43 = (void **)&v1573;
  v44 = v1508;
  v1580 = v1507;
  LOBYTE(v1507) = v42;
  v1508 = v1581;
  v1581 = v44;
  v1496 = &v1508;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v43 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v43 != &v1567 );
  v1482 = &v1565.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1498 = &v1509.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1481 = &v1561;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1480 = &v1556;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1479 = &v1553;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1478 = &v1550;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1474 = &v1546;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1485 = &v1535.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1502 = &v1533;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1484 = &v1530.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1501 = &v1528;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1483 = &v1525.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1500 = &v1517.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1499 = &v1513.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v45 = _mm_load_si128(&v1473);
  v1568 = 0;
  v1567 = ida_mcp::tools::patching::`anonymous namespace'::patch_byte_impl;
  v1569 = v45;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1569.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1569.m128i_i64[0])(&v1567, &v1567, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1574);
  v1575 = 0;
  v1576[0] = 0;
  v1574 = v1491;
  v1578 = 0;
  v1577 = v1493;
  v1579[0] = 0;
  v1580 = 0;
  v1581 = 0;
  v1582 = 0;
  v1583 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1237);
  v1514 = 0;
  v1515 = 0;
  *(_QWORD *)&v1516 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1515 = 3;
  v46 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v46, "object", v47, v48, v49, v50, v465, v567, v669);
  v1516 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1567,
    v1237,
    2,
    1);
  v1569.m128i_i64[0] = 0;
  v1558 = 0;
  *(_QWORD *)&v1559 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1558 = 3;
  v51 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v51, "properties", v52, v53, v54, v55, v466, v568, v670);
  v1559 = (unsigned __int64)v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v942);
  v1531 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1355);
  v1518 = 0;
  v1519 = 0;
  *(_QWORD *)&v1520 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1519 = 3;
  v56 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v56, "string", v57, v58, v59, v60, v467, v569, v671);
  v1520 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v883,
    v1355,
    2,
    1);
  v1526 = 0;
  v1521 = 0;
  *(_QWORD *)&v1522 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1521 = 3;
  v61 = operator new(0x20u);
  *(_QWORD *)v61 = v61 + 16;
  strcpy((char *)(v61 + 16), "description");
  *(_QWORD *)(v61 + 8) = 11;
  v1523 = 0;
  *(_QWORD *)&v1524 = 0;
  v1522 = (unsigned __int64)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1523 = 3;
  v62 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v62, "Hex address", v63, v64, v65, v66, v468, v570, v672);
  v1524 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1504,
    v1497,
    2,
    1);
  v1529 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1505,
    v883,
    2,
    1);
  v1534 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v571,
    v942,
    2,
    1);
  v1554 = 0;
  LOBYTE(v1547) = 0;
  *(_QWORD *)&v1548 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1547) = 3;
  v67 = operator new(0x20u);
  *(_DWORD *)(v67 + 16) = 1970037110;
  *(_QWORD *)v67 = v67 + 16;
  *(_BYTE *)(v67 + 20) = 101;
  *(_QWORD *)(v67 + 8) = 5;
  *(_BYTE *)(v67 + 21) = 0;
  v1548 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v765);
  v1536 = 0;
  v1537 = 0;
  *(_QWORD *)&v1538 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1537 = 3;
  v68 = operator new(0x20u);
  strcpy((char *)(v68 + 16), "integer");
  *(_QWORD *)v68 = v68 + 16;
  *(_QWORD *)(v68 + 8) = 7;
  v1538 = (unsigned __int64)v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1001,
    v765,
    2,
    1);
  *((_QWORD *)&v1544 + 1) = 0;
  LOBYTE(v1539) = 0;
  *(_QWORD *)&v1540 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1539) = 3;
  v69 = operator new(0x20u);
  *(_QWORD *)v69 = v69 + 16;
  strcpy((char *)(v69 + 16), "description");
  *(_QWORD *)(v69 + 8) = 11;
  v1541 = 0;
  *(_QWORD *)&v1542 = 0;
  v1540 = (unsigned __int64)v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1541 = 3;
  v70 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v70,
    "Word value (0-65535)",
    v71,
    v72,
    v73,
    v74,
    v469,
    (int)v571,
    v673);
  v1542 = (unsigned __int64)v70;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1503,
    (const __m128i *)&v1539,
    2,
    1);
  *((_QWORD *)&v1546 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1486,
    v1001,
    2,
    1);
  v1551 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1487,
    (const __m128i *)&v1547,
    2,
    1);
  v1557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1488,
    v572,
    2,
    1);
  v1562 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1489,
    v1476,
    2,
    1);
  v1570 = 0;
  v1563 = 0;
  *(_QWORD *)&v1564 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1563 = 3;
  v75 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v75, "required", v76, v77, v78, v79, v470, (int)v572, v674);
  v1564 = (unsigned __int64)v75;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1509);
  v1510 = 0;
  v1511 = 0;
  *(_QWORD *)&v1512 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1511 = 3;
  v80 = operator new(0x20u);
  *(_DWORD *)(v80 + 16) = 1970037110;
  *(_QWORD *)v80 = v80 + 16;
  *(_BYTE *)(v80 + 20) = 101;
  *(_QWORD *)(v80 + 8) = 5;
  *(_BYTE *)(v80 + 21) = 0;
  v1512 = (unsigned __int64)v80;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v81 = _mm_load_si128(&v1506);
  v1566 = 0;
  v1565 = v81;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1490,
    (__int64)v1477,
    2,
    v82,
    v83,
    v84,
    v471,
    v573,
    v675,
    (int)v765,
    v824,
    (int)v883,
    (__int64)v942,
    (int)v1001,
    v1060,
    v1119,
    v1178,
    (char)v1237,
    v1296,
    (int)v1355,
    v1414);
  v1572 = 0;
  LOBYTE(v1507) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1495,
    (__int64)&v1567,
    3,
    v85,
    v86,
    v87,
    v472,
    v574,
    v676,
    v766,
    v825,
    v884,
    v943,
    v1002,
    v1061,
    v1120,
    v1179,
    v1238,
    v1297,
    v1356,
    v1415);
  v88 = v1580;
  v89 = (void **)&v1573;
  v1580 = v1507;
  v90 = v1581;
  LOBYTE(v1507) = v88;
  v1581 = v1508;
  v1508 = v90;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v89 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v89 != &v1567 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v91 = _mm_load_si128(&v1473);
  v1568 = 0;
  v1567 = ida_mcp::tools::patching::`anonymous namespace'::patch_word_impl;
  v1569 = v91;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1569.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1569.m128i_i64[0])(&v1567, &v1567, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1574);
  v1575 = 0;
  v1576[0] = 0;
  v1574 = v1491;
  v1578 = 0;
  v1577 = v1493;
  v1579[0] = 0;
  v1580 = 0;
  v1581 = 0;
  v1582 = 0;
  v1583 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1239);
  v1514 = 0;
  v1515 = 0;
  *(_QWORD *)&v1516 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1515 = 3;
  v92 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v92, "object", v93, v94, v95, v96, v473, v575, v677);
  v1516 = (unsigned __int64)v92;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1567,
    (__int64)v1239,
    2,
    v97,
    v98,
    v99,
    v474,
    v576,
    v678,
    v767,
    v826,
    v885,
    v944,
    v1003,
    v1062,
    v1121,
    v1180,
    (char)v1239,
    v1298,
    v1357,
    v1416);
  v1569.m128i_i64[0] = 0;
  v1558 = 0;
  *(_QWORD *)&v1559 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1558 = 3;
  v100 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v100, "properties", v101, v102, v103, v104, v475, v577, v679);
  v1559 = (unsigned __int64)v100;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v945);
  v1531 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1358);
  v1518 = 0;
  v1519 = 0;
  *(_QWORD *)&v1520 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1519 = 3;
  v105 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v105, "string", v106, v107, v108, v109, v476, v578, v680);
  v1520 = (unsigned __int64)v105;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v886,
    (__int64)v1358,
    2,
    v110,
    v111,
    v112,
    v477,
    v579,
    v681,
    v768,
    v827,
    (int)v886,
    (__int64)v945,
    v1004,
    v1063,
    v1122,
    v1181,
    v1240,
    v1299,
    (int)v1358,
    v1417);
  v1526 = 0;
  v1521 = 0;
  *(_QWORD *)&v1522 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1521 = 3;
  v113 = operator new(0x20u);
  *(_QWORD *)v113 = v113 + 16;
  strcpy((char *)(v113 + 16), "description");
  *(_QWORD *)(v113 + 8) = 11;
  v1523 = 0;
  *(_QWORD *)&v1524 = 0;
  v1522 = (unsigned __int64)v113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1523 = 3;
  v114 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v114, "Hex address", v115, v116, v117, v118, v478, v580, v682);
  v1524 = (unsigned __int64)v114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1504,
    (__int64)v1497,
    2,
    v119,
    v120,
    v121,
    v479,
    v581,
    v683,
    v769,
    v828,
    v887,
    v946,
    v1005,
    v1064,
    v1123,
    v1182,
    v1241,
    v1300,
    v1359,
    v1418);
  v1529 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1505,
    v888,
    2,
    v122,
    v123,
    v124,
    v480,
    v582,
    v684,
    v770,
    v829,
    v888,
    v947,
    v1006,
    v1065,
    v1124,
    v1183,
    v1242,
    v1301,
    v1360,
    v1419);
  v1534 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v583,
    v948,
    2,
    v125,
    v126,
    v127,
    v481,
    (__int64)v583,
    v685,
    v771,
    v830,
    v889,
    v948,
    v1007,
    v1066,
    v1125,
    v1184,
    v1243,
    v1302,
    v1361,
    v1420);
  v1554 = 0;
  LOBYTE(v1547) = 0;
  *(_QWORD *)&v1548 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1547) = 3;
  v128 = operator new(0x20u);
  *(_DWORD *)(v128 + 16) = 1970037110;
  *(_QWORD *)v128 = v128 + 16;
  *(_BYTE *)(v128 + 20) = 101;
  *(_QWORD *)(v128 + 8) = 5;
  *(_BYTE *)(v128 + 21) = 0;
  v1548 = (unsigned __int64)v128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v772);
  v1536 = 0;
  v1537 = 0;
  *(_QWORD *)&v1538 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1537 = 3;
  v129 = operator new(0x20u);
  strcpy((char *)(v129 + 16), "integer");
  *(_QWORD *)v129 = v129 + 16;
  *(_QWORD *)(v129 + 8) = 7;
  v1538 = (unsigned __int64)v129;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1008,
    (__int64)v772,
    2,
    v130,
    v131,
    v132,
    v482,
    v584,
    v686,
    (int)v772,
    v831,
    v890,
    v949,
    (int)v1008,
    v1067,
    v1126,
    v1185,
    v1244,
    v1303,
    v1362,
    v1421);
  *((_QWORD *)&v1544 + 1) = 0;
  LOBYTE(v1539) = 0;
  *(_QWORD *)&v1540 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1539) = 3;
  v133 = operator new(0x20u);
  *(_QWORD *)v133 = v133 + 16;
  strcpy((char *)(v133 + 16), "description");
  *(_QWORD *)(v133 + 8) = 11;
  v1541 = 0;
  *(_QWORD *)&v1542 = 0;
  v1540 = (unsigned __int64)v133;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1541 = 3;
  v134 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v134, "Dword value", v135, v136, v137, v138, v483, v585, v687);
  v1542 = (unsigned __int64)v134;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1503,
    (__int64)&v1539,
    2,
    v139,
    v140,
    v141,
    v484,
    v586,
    v688,
    v773,
    v832,
    v891,
    v950,
    v1009,
    v1068,
    v1127,
    v1186,
    v1245,
    v1304,
    v1363,
    v1422);
  *((_QWORD *)&v1546 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1486,
    v1010,
    2,
    v142,
    v143,
    v144,
    v485,
    v587,
    v689,
    v774,
    v833,
    v892,
    v951,
    v1010,
    v1069,
    v1128,
    v1187,
    v1246,
    v1305,
    v1364,
    v1423);
  v1551 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1487,
    (__int64)&v1547,
    2,
    v145,
    v146,
    v147,
    v486,
    v588,
    v690,
    v775,
    v834,
    v893,
    v952,
    v1011,
    v1070,
    v1129,
    v1188,
    v1247,
    v1306,
    v1365,
    v1424);
  v1557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1488,
    v589,
    2,
    v148,
    v149,
    v150,
    v487,
    v589,
    v691,
    v776,
    v835,
    v894,
    v953,
    v1012,
    v1071,
    v1130,
    v1189,
    v1248,
    v1307,
    v1366,
    v1425);
  v1562 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1489,
    (__int64)v1476,
    2,
    v151,
    v152,
    v153,
    v488,
    v590,
    v692,
    v777,
    v836,
    v895,
    v954,
    v1013,
    v1072,
    v1131,
    v1190,
    v1249,
    v1308,
    v1367,
    v1426);
  v1570 = 0;
  v1563 = 0;
  *(_QWORD *)&v1564 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1563 = 3;
  v154 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v154, "required", v155, v156, v157, v158, v489, v591, v693);
  v1564 = (unsigned __int64)v154;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1509);
  v1510 = 0;
  v1511 = 0;
  *(_QWORD *)&v1512 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1511 = 3;
  v159 = operator new(0x20u);
  *(_DWORD *)(v159 + 16) = 1970037110;
  *(_QWORD *)v159 = v159 + 16;
  *(_BYTE *)(v159 + 20) = 101;
  *(_QWORD *)(v159 + 8) = 5;
  *(_BYTE *)(v159 + 21) = 0;
  v1512 = (unsigned __int64)v159;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v160 = _mm_load_si128(&v1506);
  v1566 = 0;
  v1565 = v160;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1490,
    (__int64)v1477,
    2,
    v161,
    v162,
    v163,
    v490,
    v592,
    v694,
    v778,
    v837,
    v896,
    v955,
    v1014,
    v1073,
    v1132,
    v1191,
    v1250,
    v1309,
    v1368,
    v1427);
  v1572 = 0;
  LOBYTE(v1507) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1495,
    (__int64)&v1567,
    3,
    v164,
    v165,
    v166,
    v491,
    v593,
    v695,
    v779,
    v838,
    v897,
    v956,
    v1015,
    v1074,
    v1133,
    v1192,
    v1251,
    v1310,
    v1369,
    v1428);
  v167 = v1580;
  v168 = (void **)&v1573;
  v1580 = v1507;
  v169 = v1581;
  LOBYTE(v1507) = v167;
  v1581 = v1508;
  v1508 = v169;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v168 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v168 != &v1567 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v170 = _mm_load_si128(&v1473);
  v1568 = 0;
  v1567 = ida_mcp::tools::patching::`anonymous namespace'::patch_dword_impl;
  v1569 = v170;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1569.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1569.m128i_i64[0])(&v1567, &v1567, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1574);
  v1575 = 0;
  v1576[0] = 0;
  v1574 = v1491;
  v1578 = 0;
  v1577 = v1493;
  v1579[0] = 0;
  v1580 = 0;
  v1581 = 0;
  v1582 = 0;
  v1583 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1252);
  v1514 = 0;
  v1515 = 0;
  *(_QWORD *)&v1516 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1515 = 3;
  v171 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v171, "object", v172, v173, v174, v175, v492, v594, v696);
  v1516 = (unsigned __int64)v171;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1567,
    (__int64)v1252,
    2,
    v176,
    v177,
    v178,
    v493,
    v595,
    v697,
    v780,
    v839,
    v898,
    v957,
    v1016,
    v1075,
    v1134,
    v1193,
    (char)v1252,
    v1311,
    v1370,
    v1429);
  v1569.m128i_i64[0] = 0;
  v1558 = 0;
  *(_QWORD *)&v1559 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1558 = 3;
  v179 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v179, "properties", v180, v181, v182, v183, v494, v596, v698);
  v1559 = (unsigned __int64)v179;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v958);
  v1531 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1371);
  v1518 = 0;
  v1519 = 0;
  *(_QWORD *)&v1520 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1519 = 3;
  v184 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v184, "string", v185, v186, v187, v188, v495, v597, v699);
  v1520 = (unsigned __int64)v184;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v899,
    (__int64)v1371,
    2,
    v189,
    v190,
    v191,
    v496,
    v598,
    v700,
    v781,
    v840,
    (int)v899,
    (__int64)v958,
    v1017,
    v1076,
    v1135,
    v1194,
    v1253,
    v1312,
    (int)v1371,
    v1430);
  v1526 = 0;
  v1521 = 0;
  *(_QWORD *)&v1522 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1521 = 3;
  v192 = operator new(0x20u);
  *(_QWORD *)v192 = v192 + 16;
  strcpy((char *)(v192 + 16), "description");
  *(_QWORD *)(v192 + 8) = 11;
  v1523 = 0;
  *(_QWORD *)&v1524 = 0;
  v1522 = (unsigned __int64)v192;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1523 = 3;
  v193 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v193, "Hex address", v194, v195, v196, v197, v497, v599, v701);
  v1524 = (unsigned __int64)v193;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1504,
    (__int64)v1497,
    2,
    v198,
    v199,
    v200,
    v498,
    v600,
    v702,
    v782,
    v841,
    v900,
    v959,
    v1018,
    v1077,
    v1136,
    v1195,
    v1254,
    v1313,
    v1372,
    v1431);
  v1529 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1505,
    v901,
    2,
    v201,
    v202,
    v203,
    v499,
    v601,
    v703,
    v783,
    v842,
    v901,
    v960,
    v1019,
    v1078,
    v1137,
    v1196,
    v1255,
    v1314,
    v1373,
    v1432);
  v1534 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v602,
    v961,
    2,
    v204,
    v205,
    v206,
    v500,
    (__int64)v602,
    v704,
    v784,
    v843,
    v902,
    v961,
    v1020,
    v1079,
    v1138,
    v1197,
    v1256,
    v1315,
    v1374,
    v1433);
  v1554 = 0;
  LOBYTE(v1547) = 0;
  *(_QWORD *)&v1548 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1547) = 3;
  v207 = operator new(0x20u);
  *(_DWORD *)(v207 + 16) = 1970037110;
  *(_QWORD *)v207 = v207 + 16;
  *(_BYTE *)(v207 + 20) = 101;
  *(_QWORD *)(v207 + 8) = 5;
  *(_BYTE *)(v207 + 21) = 0;
  v1548 = (unsigned __int64)v207;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v785);
  v1536 = 0;
  v1537 = 0;
  *(_QWORD *)&v1538 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1537 = 3;
  v208 = operator new(0x20u);
  strcpy((char *)(v208 + 16), "integer");
  *(_QWORD *)v208 = v208 + 16;
  *(_QWORD *)(v208 + 8) = 7;
  v1538 = (unsigned __int64)v208;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1021,
    (__int64)v785,
    2,
    v209,
    v210,
    v211,
    v501,
    v603,
    v705,
    (int)v785,
    v844,
    v903,
    v962,
    (int)v1021,
    v1080,
    v1139,
    v1198,
    v1257,
    v1316,
    v1375,
    v1434);
  *((_QWORD *)&v1544 + 1) = 0;
  LOBYTE(v1539) = 0;
  *(_QWORD *)&v1540 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1539) = 3;
  v212 = operator new(0x20u);
  *(_QWORD *)v212 = v212 + 16;
  strcpy((char *)(v212 + 16), "description");
  *(_QWORD *)(v212 + 8) = 11;
  v1541 = 0;
  *(_QWORD *)&v1542 = 0;
  v1540 = (unsigned __int64)v212;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1541 = 3;
  v213 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v213, "Qword value", v214, v215, v216, v217, v502, v604, v706);
  v1542 = (unsigned __int64)v213;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1503,
    (__int64)&v1539,
    2,
    v218,
    v219,
    v220,
    v503,
    v605,
    v707,
    v786,
    v845,
    v904,
    v963,
    v1022,
    v1081,
    v1140,
    v1199,
    v1258,
    v1317,
    v1376,
    v1435);
  *((_QWORD *)&v1546 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1486,
    v1023,
    2,
    v221,
    v222,
    v223,
    v504,
    v606,
    v708,
    v787,
    v846,
    v905,
    v964,
    v1023,
    v1082,
    v1141,
    v1200,
    v1259,
    v1318,
    v1377,
    v1436);
  v1551 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1487,
    (__int64)&v1547,
    2,
    v224,
    v225,
    v226,
    v505,
    v607,
    v709,
    v788,
    v847,
    v906,
    v965,
    v1024,
    v1083,
    v1142,
    v1201,
    v1260,
    v1319,
    v1378,
    v1437);
  v1557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1488,
    v608,
    2,
    v227,
    v228,
    v229,
    v506,
    v608,
    v710,
    v789,
    v848,
    v907,
    v966,
    v1025,
    v1084,
    v1143,
    v1202,
    v1261,
    v1320,
    v1379,
    v1438);
  v1562 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1489,
    (__int64)v1476,
    2,
    v230,
    v231,
    v232,
    v507,
    v609,
    v711,
    v790,
    v849,
    v908,
    v967,
    v1026,
    v1085,
    v1144,
    v1203,
    v1262,
    v1321,
    v1380,
    v1439);
  v1570 = 0;
  v1563 = 0;
  *(_QWORD *)&v1564 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1563 = 3;
  v233 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v233, "required", v234, v235, v236, v237, v508, v610, v712);
  v1564 = (unsigned __int64)v233;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1509);
  v1510 = 0;
  v1511 = 0;
  *(_QWORD *)&v1512 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1511 = 3;
  v238 = operator new(0x20u);
  *(_DWORD *)(v238 + 16) = 1970037110;
  *(_QWORD *)v238 = v238 + 16;
  *(_BYTE *)(v238 + 20) = 101;
  *(_QWORD *)(v238 + 8) = 5;
  *(_BYTE *)(v238 + 21) = 0;
  v1512 = (unsigned __int64)v238;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v239 = _mm_load_si128(&v1506);
  v1566 = 0;
  v1565 = v239;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1490,
    (__int64)v1477,
    2,
    v240,
    v241,
    v242,
    v509,
    v611,
    v713,
    v791,
    v850,
    v909,
    v968,
    v1027,
    v1086,
    v1145,
    v1204,
    v1263,
    v1322,
    v1381,
    v1440);
  v1572 = 0;
  LOBYTE(v1507) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1495,
    (__int64)&v1567,
    3,
    v243,
    v244,
    v245,
    v510,
    v612,
    v714,
    v792,
    v851,
    v910,
    v969,
    v1028,
    v1087,
    v1146,
    v1205,
    v1264,
    v1323,
    v1382,
    v1441);
  v246 = v1580;
  v247 = (void **)&v1573;
  v1580 = v1507;
  v248 = v1581;
  LOBYTE(v1507) = v246;
  v1581 = v1508;
  v1508 = v248;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v247 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v247 != &v1567 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v249 = _mm_load_si128(&v1473);
  v1568 = 0;
  v1567 = ida_mcp::tools::patching::`anonymous namespace'::patch_qword_impl;
  v1569 = v249;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1569.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1569.m128i_i64[0])(&v1567, &v1567, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1574);
  v1575 = 0;
  v1576[0] = 0;
  v1574 = v1491;
  v1578 = 0;
  v1577 = v1493;
  v1579[0] = 0;
  v1580 = 0;
  v1581 = 0;
  v1582 = 0;
  v1583 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1265);
  v1514 = 0;
  v1515 = 0;
  *(_QWORD *)&v1516 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1515 = 3;
  v250 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v250, "object", v251, v252, v253, v254, v511, v613, v715);
  v1516 = (unsigned __int64)v250;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1567,
    (__int64)v1265,
    2,
    v255,
    v256,
    v257,
    v512,
    v614,
    v716,
    v793,
    v852,
    v911,
    v970,
    v1029,
    v1088,
    v1147,
    v1206,
    (char)v1265,
    v1324,
    v1383,
    v1442);
  v1569.m128i_i64[0] = 0;
  v1558 = 0;
  *(_QWORD *)&v1559 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1558 = 3;
  v258 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v258, "properties", v259, v260, v261, v262, v513, v615, v717);
  v1559 = (unsigned __int64)v258;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v971);
  v1531 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1384);
  v1518 = 0;
  v1519 = 0;
  *(_QWORD *)&v1520 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1519 = 3;
  v263 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v263, "string", v264, v265, v266, v267, v514, v616, v718);
  v1520 = (unsigned __int64)v263;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v912,
    (__int64)v1384,
    2,
    v268,
    v269,
    v270,
    v515,
    v617,
    v719,
    v794,
    v853,
    (int)v912,
    (__int64)v971,
    v1030,
    v1089,
    v1148,
    v1207,
    v1266,
    v1325,
    (int)v1384,
    v1443);
  v1526 = 0;
  v1521 = 0;
  *(_QWORD *)&v1522 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1521 = 3;
  v271 = operator new(0x20u);
  *(_QWORD *)v271 = v271 + 16;
  strcpy((char *)(v271 + 16), "description");
  *(_QWORD *)(v271 + 8) = 11;
  v1523 = 0;
  *(_QWORD *)&v1524 = 0;
  v1522 = (unsigned __int64)v271;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1523 = 3;
  v272 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v272, "Hex address", v273, v274, v275, v276, v516, v618, v720);
  v1524 = (unsigned __int64)v272;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1504,
    (__int64)v1497,
    2,
    v277,
    v278,
    v279,
    v517,
    v619,
    v721,
    v795,
    v854,
    v913,
    v972,
    v1031,
    v1090,
    v1149,
    v1208,
    v1267,
    v1326,
    v1385,
    v1444);
  v1529 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1505,
    v914,
    2,
    v280,
    v281,
    v282,
    v518,
    v620,
    v722,
    v796,
    v855,
    v914,
    v973,
    v1032,
    v1091,
    v1150,
    v1209,
    v1268,
    v1327,
    v1386,
    v1445);
  v1534 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v621,
    v974,
    2,
    v283,
    v284,
    v285,
    v519,
    (__int64)v621,
    v723,
    v797,
    v856,
    v915,
    v974,
    v1033,
    v1092,
    v1151,
    v1210,
    v1269,
    v1328,
    v1387,
    v1446);
  v1554 = 0;
  LOBYTE(v1547) = 0;
  *(_QWORD *)&v1548 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1547) = 3;
  v286 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v286, "bytes", v287, v288, v289, v290, v520, v622, v724);
  v1548 = (unsigned __int64)v286;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v798);
  v1536 = 0;
  v1537 = 0;
  *(_QWORD *)&v1538 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1537 = 3;
  v291 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v291, "string", v292, v293, v294, v295, v521, v623, v725);
  v1538 = (unsigned __int64)v291;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1034,
    (__int64)v798,
    2,
    v296,
    v297,
    v298,
    v522,
    v624,
    v726,
    (int)v798,
    v857,
    v916,
    v975,
    (int)v1034,
    v1093,
    v1152,
    v1211,
    v1270,
    v1329,
    v1388,
    v1447);
  *((_QWORD *)&v1544 + 1) = 0;
  LOBYTE(v1539) = 0;
  *(_QWORD *)&v1540 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1539) = 3;
  v299 = operator new(0x20u);
  *(_QWORD *)v299 = v299 + 16;
  strcpy((char *)(v299 + 16), "description");
  *(_QWORD *)(v299 + 8) = 11;
  v1541 = 0;
  *(_QWORD *)&v1542 = 0;
  v1540 = (unsigned __int64)v299;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1541 = 3;
  v300 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v300,
    "Hex bytes (e.g., '90 90 90' or '909090')",
    v301,
    v302,
    v303,
    v304,
    v523,
    v625,
    v727);
  v1542 = (unsigned __int64)v300;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1503,
    (__int64)&v1539,
    2,
    v305,
    v306,
    v307,
    v524,
    v626,
    v728,
    v799,
    v858,
    v917,
    v976,
    v1035,
    v1094,
    v1153,
    v1212,
    v1271,
    v1330,
    v1389,
    v1448);
  *((_QWORD *)&v1546 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1486,
    v1036,
    2,
    v308,
    v309,
    v310,
    v525,
    v627,
    v729,
    v800,
    v859,
    v918,
    v977,
    v1036,
    v1095,
    v1154,
    v1213,
    v1272,
    v1331,
    v1390,
    v1449);
  v1551 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1487,
    (__int64)&v1547,
    2,
    v311,
    v312,
    v313,
    v526,
    v628,
    v730,
    v801,
    v860,
    v919,
    v978,
    v1037,
    v1096,
    v1155,
    v1214,
    v1273,
    v1332,
    v1391,
    v1450);
  v1557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1488,
    v629,
    2,
    v314,
    v315,
    v316,
    v527,
    v629,
    v731,
    v802,
    v861,
    v920,
    v979,
    v1038,
    v1097,
    v1156,
    v1215,
    v1274,
    v1333,
    v1392,
    v1451);
  v1562 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1489,
    (__int64)v1476,
    2,
    v317,
    v318,
    v319,
    v528,
    v630,
    v732,
    v803,
    v862,
    v921,
    v980,
    v1039,
    v1098,
    v1157,
    v1216,
    v1275,
    v1334,
    v1393,
    v1452);
  v1570 = 0;
  v1563 = 0;
  *(_QWORD *)&v1564 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1563 = 3;
  v320 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v320, "required", v321, v322, v323, v324, v529, v631, v733);
  v1564 = (unsigned __int64)v320;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1509);
  v1510 = 0;
  v1511 = 0;
  *(_QWORD *)&v1512 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1511 = 3;
  v325 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v325, "bytes", v326, v327, v328, v329, v530, v632, v734);
  v1512 = (unsigned __int64)v325;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v330 = _mm_load_si128(&v1506);
  v1566 = 0;
  v1565 = v330;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1490,
    (__int64)v1477,
    2,
    v331,
    v332,
    v333,
    v531,
    v633,
    v735,
    v804,
    v863,
    v922,
    v981,
    v1040,
    v1099,
    v1158,
    v1217,
    v1276,
    v1335,
    v1394,
    v1453);
  v1572 = 0;
  LOBYTE(v1507) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1495,
    (__int64)&v1567,
    3,
    v334,
    v335,
    v336,
    v532,
    v634,
    v736,
    v805,
    v864,
    v923,
    v982,
    v1041,
    v1100,
    v1159,
    v1218,
    v1277,
    v1336,
    v1395,
    v1454);
  v337 = v1580;
  v338 = (void **)&v1573;
  v1580 = v1507;
  v339 = v1581;
  LOBYTE(v1507) = v337;
  v1581 = v1508;
  v1508 = v339;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v338 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v338 != &v1567 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v340 = _mm_load_si128(&v1473);
  v1568 = 0;
  v1567 = ida_mcp::tools::patching::`anonymous namespace'::patch_bytes_impl;
  v1569 = v340;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1569.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1569.m128i_i64[0])(&v1567, &v1567, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1574);
  v1575 = 0;
  v1576[0] = 0;
  v1574 = v1491;
  v1578 = 0;
  v1577 = v1493;
  v1579[0] = 0;
  v1580 = 0;
  v1581 = 0;
  v1582 = 0;
  v1583 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v806);
  v1536 = 0;
  v1537 = 0;
  *(_QWORD *)&v1538 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1537 = 3;
  v341 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v341, "object", v342, v343, v344, v345, v533, v635, v737);
  v1538 = (unsigned __int64)v341;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1567,
    (__int64)v806,
    2,
    v346,
    v347,
    v348,
    v534,
    v636,
    v738,
    (int)v806,
    v865,
    v924,
    v983,
    v1042,
    v1101,
    v1160,
    v1219,
    v1278,
    v1337,
    v1396,
    v1455);
  v1569.m128i_i64[0] = 0;
  v1558 = 0;
  *(_QWORD *)&v1559 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1558 = 3;
  v349 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v349, "properties", v350, v351, v352, v353, v535, v637, v739);
  v1559 = (unsigned __int64)v349;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v638);
  v1554 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1539);
  *((_QWORD *)&v1540 + 1) = 0;
  v1541 = 0;
  *(_QWORD *)&v1542 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1541 = 3;
  v354 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v354, "string", v355, v356, v357, v358, v536, (int)v638, v740);
  v1542 = (unsigned __int64)v354;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1547,
    (__int64)&v1539,
    2,
    v359,
    v360,
    v361,
    v537,
    v639,
    v741,
    v807,
    v866,
    v925,
    v984,
    v1043,
    v1102,
    v1161,
    v1220,
    v1279,
    v1338,
    v1397,
    v1456);
  *((_QWORD *)&v1548 + 1) = 0;
  LOBYTE(v1543) = 0;
  *(_QWORD *)&v1544 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1543) = 3;
  v362 = operator new(0x20u);
  *(_QWORD *)v362 = v362 + 16;
  strcpy((char *)(v362 + 16), "description");
  *(_QWORD *)(v362 + 8) = 11;
  LOBYTE(v1545) = 0;
  *(_QWORD *)&v1546 = 0;
  v1544 = (unsigned __int64)v362;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1545) = 3;
  v363 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v363, "Hex address", v364, v365, v366, v367, v538, v640, v742);
  v1546 = (unsigned __int64)v363;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1486,
    v1044,
    2,
    v368,
    v369,
    v370,
    v539,
    v641,
    v743,
    v808,
    v867,
    v926,
    v985,
    v1044,
    v1103,
    v1162,
    v1221,
    v1280,
    v1339,
    v1398,
    v1457);
  v1551 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1487,
    (__int64)&v1547,
    2,
    v371,
    v372,
    v373,
    v540,
    v642,
    v744,
    v809,
    v868,
    v927,
    v986,
    v1045,
    v1104,
    v1163,
    v1222,
    v1281,
    v1340,
    v1399,
    v1458);
  v1557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v987,
    v643,
    2,
    v374,
    v375,
    v376,
    v541,
    v643,
    v745,
    v810,
    v869,
    v928,
    (__int64)v987,
    v1046,
    v1105,
    v1164,
    v1223,
    v1282,
    v1341,
    v1400,
    v1459);
  v1531 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1488,
    v988,
    1,
    v377,
    v378,
    v379,
    v542,
    v644,
    v746,
    v811,
    v870,
    v929,
    v988,
    v1047,
    v1106,
    v1165,
    v1224,
    v1283,
    v1342,
    v1401,
    v1460);
  v1562 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1489,
    (__int64)v1476,
    2,
    v380,
    v381,
    v382,
    v543,
    v645,
    v747,
    v812,
    v871,
    v930,
    v989,
    v1048,
    v1107,
    v1166,
    v1225,
    v1284,
    v1343,
    v1402,
    v1461);
  v1570 = 0;
  v1563 = 0;
  *(_QWORD *)&v1564 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1563 = 3;
  v383 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v383, "required", v384, v385, v386, v387, v544, v646, v748);
  v1564 = (unsigned __int64)v383;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v931);
  v1526 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v388 = _mm_load_si128(&v1506);
  v1566 = 0;
  v1565 = v388;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1490,
    (__int64)v1477,
    2,
    v389,
    v390,
    v391,
    v545,
    v647,
    v749,
    v813,
    v872,
    (int)v931,
    v990,
    v1049,
    v1108,
    v1167,
    v1226,
    v1285,
    v1344,
    v1403,
    v1462);
  v1572 = 0;
  LOBYTE(v1507) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1495,
    (__int64)&v1567,
    3,
    v392,
    v393,
    v394,
    v546,
    v648,
    v750,
    v814,
    v873,
    v932,
    v991,
    v1050,
    v1109,
    v1168,
    v1227,
    v1286,
    v1345,
    v1404,
    v1463);
  v395 = v1580;
  v396 = (void **)&v1573;
  v1580 = v1507;
  v397 = v1581;
  LOBYTE(v1507) = v395;
  v1581 = v1508;
  v1508 = v397;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v396 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v396 != &v1567 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v398 = _mm_load_si128(&v1473);
  v1568 = 0;
  v1567 = ida_mcp::tools::patching::`anonymous namespace'::get_original_byte_impl;
  v1569 = v398;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1569.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1569.m128i_i64[0])(&v1567, &v1567, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1574);
  v1575 = 0;
  v1576[0] = 0;
  v1574 = v1491;
  v1578 = 0;
  v1577 = v1493;
  v1579[0] = 0;
  v1580 = 0;
  v1581 = 0;
  v1582 = 0;
  v1583 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v815);
  v1536 = 0;
  v1537 = 0;
  *(_QWORD *)&v1538 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1537 = 3;
  v399 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v399, "object", v400, v401, v402, v403, v547, v649, v751);
  v1538 = (unsigned __int64)v399;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1567,
    (__int64)v815,
    2,
    v404,
    v405,
    v406,
    v548,
    v650,
    v752,
    (int)v815,
    v874,
    v933,
    v992,
    v1051,
    v1110,
    v1169,
    v1228,
    v1287,
    v1346,
    v1405,
    v1464);
  v1569.m128i_i64[0] = 0;
  v1558 = 0;
  *(_QWORD *)&v1559 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1558 = 3;
  v407 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v407, "properties", v408, v409, v410, v411, v549, v651, v753);
  v1559 = (unsigned __int64)v407;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v652);
  v1554 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1539);
  *((_QWORD *)&v1540 + 1) = 0;
  v1541 = 0;
  *(_QWORD *)&v1542 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1541 = 3;
  v412 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v412, "string", v413, v414, v415, v416, v550, (int)v652, v754);
  v1542 = (unsigned __int64)v412;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1547,
    (__int64)&v1539,
    2,
    v417,
    v418,
    v419,
    v551,
    v653,
    v755,
    v816,
    v875,
    v934,
    v993,
    v1052,
    v1111,
    v1170,
    v1229,
    v1288,
    v1347,
    v1406,
    v1465);
  *((_QWORD *)&v1548 + 1) = 0;
  LOBYTE(v1543) = 0;
  *(_QWORD *)&v1544 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1543) = 3;
  v420 = operator new(0x20u);
  *(_QWORD *)v420 = v420 + 16;
  strcpy((char *)(v420 + 16), "description");
  *(_QWORD *)(v420 + 8) = 11;
  LOBYTE(v1545) = 0;
  *(_QWORD *)&v1546 = 0;
  v1544 = (unsigned __int64)v420;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1545) = 3;
  v421 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v421, "Hex address", v422, v423, v424, v425, v552, v654, v756);
  v1546 = (unsigned __int64)v421;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1486,
    v1053,
    2,
    v426,
    v427,
    v428,
    v553,
    v655,
    v757,
    v817,
    v876,
    v935,
    v994,
    v1053,
    v1112,
    v1171,
    v1230,
    v1289,
    v1348,
    v1407,
    v1466);
  v1551 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1487,
    (__int64)&v1547,
    2,
    v429,
    v430,
    v431,
    v554,
    v656,
    v758,
    v818,
    v877,
    v936,
    v995,
    v1054,
    v1113,
    v1172,
    v1231,
    v1290,
    v1349,
    v1408,
    v1467);
  v1557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v996,
    v657,
    2,
    v432,
    v433,
    v434,
    v555,
    v657,
    v759,
    v819,
    v878,
    v937,
    (__int64)v996,
    v1055,
    v1114,
    v1173,
    v1232,
    v1291,
    v1350,
    v1409,
    v1468);
  v1531 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1488,
    v997,
    1,
    v435,
    v436,
    v437,
    v556,
    v658,
    v760,
    v820,
    v879,
    v938,
    v997,
    v1056,
    v1115,
    v1174,
    v1233,
    v1292,
    v1351,
    v1410,
    v1469);
  v1562 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1489,
    (__int64)v1476,
    2,
    v438,
    v439,
    v440,
    v557,
    v659,
    v761,
    v821,
    v880,
    v939,
    v998,
    v1057,
    v1116,
    v1175,
    v1234,
    v1293,
    v1352,
    v1411,
    v1470);
  v1570 = 0;
  v1563 = 0;
  *(_QWORD *)&v1564 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1563 = 3;
  v441 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v441, "required", v442, v443, v444, v445, v558, v660, v762);
  v1564 = (unsigned __int64)v441;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v940);
  v1526 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v446 = _mm_load_si128(&v1506);
  v1566 = 0;
  v1565 = v446;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1490,
    (__int64)v1477,
    2,
    v447,
    v448,
    v449,
    v559,
    v661,
    v763,
    v822,
    v881,
    (int)v940,
    v999,
    v1058,
    v1117,
    v1176,
    v1235,
    v1294,
    v1353,
    v1412,
    v1471);
  v1572 = 0;
  LOBYTE(v1507) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1495,
    (__int64)&v1567,
    3,
    v450,
    v451,
    v452,
    v560,
    v662,
    v764,
    v823,
    v882,
    v941,
    v1000,
    v1059,
    v1118,
    v1177,
    v1236,
    v1295,
    v1354,
    v1413,
    v1472);
  v453 = v1580;
  v454 = (void **)&v1573;
  v1580 = v1507;
  v455 = v1581;
  LOBYTE(v1507) = v453;
  v1581 = v1508;
  v1508 = v455;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v454 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v454 != &v1567 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v456 = _mm_load_si128(&v1473);
  v1568 = 0;
  v1567 = ida_mcp::tools::patching::`anonymous namespace'::revert_byte_impl;
  v1569 = v456;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1569.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1569.m128i_i64[0])(&v1567, &v1567, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1574);
  return v1584 - __readfsqword(0x28u);
}

