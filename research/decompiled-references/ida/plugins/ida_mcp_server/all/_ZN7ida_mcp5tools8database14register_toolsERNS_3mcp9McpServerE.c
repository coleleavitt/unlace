unsigned __int64 __fastcall ida_mcp::tools::database::register_tools(
        ida_mcp::tools::database *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // si
  __int64 (__fastcall **v14)(int); // r13
  __int64 v15; // rdx
  __m128i si128; // xmm2
  __int64 v17; // rax
  __int64 *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char v38; // si
  __int64 v39; // rax
  __m128i v40; // xmm3
  __int64 v41; // rax
  __m128i v42; // xmm0
  char v43; // si
  __int64 v44; // rax
  __m128i v45; // xmm4
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __m128i v50; // xmm0
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  char v57; // si
  __int64 v58; // rax
  __m128i v59; // xmm5
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __m128i v64; // xmm0
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  char v71; // si
  __int64 v72; // rax
  __m128i v73; // xmm6
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 *v82; // r13
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 *v102; // r13
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rax
  __m128i v108; // xmm0
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  char v115; // si
  void **v116; // r13
  __int64 v117; // rax
  __m128i v118; // xmm7
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 *v124; // rdi
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 *v128; // r13
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 *v142; // r13
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 *v151; // r13
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
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
  __int64 *v171; // r13
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rax
  __m128i v177; // xmm0
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  char v184; // si
  void **v185; // r13
  __int64 v186; // rax
  __m128i v187; // xmm2
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // rax
  __int64 *v192; // r13
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 *v200; // r13
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
  __int64 v214; // rcx
  __int64 v215; // r8
  __int64 v216; // r9
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r9
  __int64 *v220; // r13
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 v223; // r8
  __int64 v224; // r9
  __int64 *v225; // r13
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // r9
  __m128i v230; // xmm0
  __int64 v231; // rcx
  __int64 v232; // r8
  __int64 v233; // r9
  __int64 v234; // rcx
  __int64 v235; // r8
  __int64 v236; // r9
  char v237; // si
  void **v238; // r13
  __int64 v239; // rax
  __m128i v240; // xmm3
  __int64 v241; // rcx
  __int64 v242; // r8
  __int64 v243; // r9
  __int64 v244; // rax
  __int64 *v245; // r13
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // r8
  __int64 v249; // r9
  __int64 v250; // rcx
  __int64 v251; // r8
  __int64 v252; // r9
  __int64 *v253; // r13
  __int64 v254; // rdx
  __int64 v255; // rcx
  __int64 v256; // r8
  __int64 v257; // r9
  __int64 v258; // rcx
  __int64 v259; // r8
  __int64 v260; // r9
  __int64 v261; // rcx
  __int64 v262; // r8
  __int64 v263; // r9
  __int64 v264; // rcx
  __int64 v265; // r8
  __int64 v266; // r9
  __int64 *v267; // r13
  __int64 v268; // rdx
  __int64 v269; // rcx
  __int64 v270; // r8
  __int64 v271; // r9
  __int64 v272; // rcx
  __int64 v273; // r8
  __int64 v274; // r9
  __int64 *v275; // r13
  __int64 v276; // rdx
  __int64 v277; // rcx
  __int64 v278; // r8
  __int64 v279; // r9
  __int64 v280; // rcx
  __int64 v281; // r8
  __int64 v282; // r9
  __int64 v283; // rcx
  __int64 v284; // r8
  __int64 v285; // r9
  __int64 v286; // rcx
  __int64 v287; // r8
  __int64 v288; // r9
  __int64 *v289; // r13
  __int64 v290; // rdx
  __int64 v291; // rcx
  __int64 v292; // r8
  __int64 v293; // r9
  __int64 *v294; // r13
  __int64 v295; // rdx
  __int64 v296; // rcx
  __int64 v297; // r8
  __int64 v298; // r9
  __int64 v299; // rcx
  __int64 v300; // r8
  __int64 v301; // r9
  __int64 *v302; // r13
  __int64 v303; // rdx
  __int64 v304; // rcx
  __int64 v305; // r8
  __int64 v306; // r9
  __int64 v307; // rcx
  __int64 v308; // r8
  __int64 v309; // r9
  __int64 v310; // rcx
  __int64 v311; // r8
  __int64 v312; // r9
  __int64 v313; // rcx
  __int64 v314; // r8
  __int64 v315; // r9
  __int64 v316; // rcx
  __int64 v317; // r8
  __int64 v318; // r9
  __int64 v319; // rcx
  __int64 v320; // r8
  __int64 v321; // r9
  __int64 *v322; // r13
  __int64 v323; // rdx
  __int64 v324; // rcx
  __int64 v325; // r8
  __int64 v326; // r9
  __int64 *v327; // r15
  __int64 v328; // rdx
  __int64 v329; // rcx
  __int64 v330; // r8
  __int64 v331; // r9
  __int64 *v332; // r15
  __int64 v333; // rdx
  __int64 v334; // rcx
  __int64 v335; // r8
  __int64 v336; // r9
  __m128i v337; // xmm0
  __int64 v338; // rcx
  __int64 v339; // r8
  __int64 v340; // r9
  __int64 v341; // rcx
  __int64 v342; // r8
  __int64 v343; // r9
  char v344; // si
  void **v345; // r15
  __int64 v346; // rax
  __int64 *v347; // r15
  __m128i v348; // xmm4
  __int64 v349; // rcx
  __int64 v350; // r8
  __int64 v351; // r9
  __int64 v352; // rax
  __int64 *v353; // r15
  __int64 v354; // rdx
  __int64 v355; // rcx
  __int64 v356; // r8
  __int64 v357; // r9
  __int64 v358; // rcx
  __int64 v359; // r8
  __int64 v360; // r9
  __int64 *v361; // r15
  __int64 v362; // rdx
  __int64 v363; // rcx
  __int64 v364; // r8
  __int64 v365; // r9
  __int64 v366; // rcx
  __int64 v367; // r8
  __int64 v368; // r9
  __int64 v369; // rcx
  __int64 v370; // r8
  __int64 v371; // r9
  __int64 v372; // rcx
  __int64 v373; // r8
  __int64 v374; // r9
  __int64 *v375; // r15
  __int64 v376; // rdx
  __int64 v377; // rcx
  __int64 v378; // r8
  __int64 v379; // r9
  __int64 v380; // rcx
  __int64 v381; // r8
  __int64 v382; // r9
  __int64 *v383; // r15
  __int64 v384; // rdx
  __int64 v385; // rcx
  __int64 v386; // r8
  __int64 v387; // r9
  __int64 v388; // rcx
  __int64 v389; // r8
  __int64 v390; // r9
  __int64 v391; // rcx
  __int64 v392; // r8
  __int64 v393; // r9
  __int64 v394; // rcx
  __int64 v395; // r8
  __int64 v396; // r9
  __int64 v397; // rcx
  __int64 v398; // r8
  __int64 v399; // r9
  __int64 *v400; // r15
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
  __int64 *v420; // r15
  __int64 v421; // rdx
  __int64 v422; // rcx
  __int64 v423; // r8
  __int64 v424; // r9
  __int64 *v425; // r15
  __int64 v426; // rdx
  __int64 v427; // rcx
  __int64 v428; // r8
  __int64 v429; // r9
  __int64 *v430; // r15
  __int64 v431; // rdx
  __int64 v432; // rcx
  __int64 v433; // r8
  __int64 v434; // r9
  __m128i v435; // xmm0
  __int64 v436; // rcx
  __int64 v437; // r8
  __int64 v438; // r9
  __int64 v439; // rcx
  __int64 v440; // r8
  __int64 v441; // r9
  char v442; // si
  void **v443; // r15
  __int64 v444; // rax
  __int64 *v445; // r13
  __m128i v446; // xmm5
  __int64 v447; // rcx
  __int64 v448; // r8
  __int64 v449; // r9
  __int64 v450; // rax
  __int64 *v451; // r13
  __int64 v452; // rdx
  __int64 v453; // rcx
  __int64 v454; // r8
  __int64 v455; // r9
  __int64 v456; // rcx
  __int64 v457; // r8
  __int64 v458; // r9
  __int64 *v459; // r13
  __int64 v460; // rdx
  __int64 v461; // rcx
  __int64 v462; // r8
  __int64 v463; // r9
  __int64 v464; // rcx
  __int64 v465; // r8
  __int64 v466; // r9
  __int64 v467; // rcx
  __int64 v468; // r8
  __int64 v469; // r9
  __int64 v470; // rcx
  __int64 v471; // r8
  __int64 v472; // r9
  __int64 v473; // rcx
  __int64 v474; // r8
  __int64 v475; // r9
  __int64 v476; // rcx
  __int64 v477; // r8
  __int64 v478; // r9
  __int64 v479; // rcx
  __int64 v480; // r8
  __int64 v481; // r9
  char v482; // si
  __int64 v483; // rax
  __m128i v484; // xmm6
  __int64 v485; // rcx
  __int64 v486; // r8
  __int64 v487; // r9
  __int64 v488; // rax
  __m128i v489; // xmm0
  __int64 v490; // rcx
  __int64 v491; // r8
  __int64 v492; // r9
  __int64 v493; // rcx
  __int64 v494; // r8
  __int64 v495; // r9
  char v496; // si
  __int64 v497; // rax
  __m128i v498; // xmm7
  int v500; // [rsp+0h] [rbp-7C8h]
  int v501; // [rsp+0h] [rbp-7C8h]
  int v502; // [rsp+0h] [rbp-7C8h]
  int v503; // [rsp+0h] [rbp-7C8h]
  int v504; // [rsp+0h] [rbp-7C8h]
  int v505; // [rsp+0h] [rbp-7C8h]
  int v506; // [rsp+0h] [rbp-7C8h]
  int v507; // [rsp+0h] [rbp-7C8h]
  int v508; // [rsp+0h] [rbp-7C8h]
  int v509; // [rsp+0h] [rbp-7C8h]
  int v510; // [rsp+0h] [rbp-7C8h]
  int v511; // [rsp+0h] [rbp-7C8h]
  int v512; // [rsp+0h] [rbp-7C8h]
  int v513; // [rsp+0h] [rbp-7C8h]
  int v514; // [rsp+0h] [rbp-7C8h]
  int v515; // [rsp+0h] [rbp-7C8h]
  int v516; // [rsp+0h] [rbp-7C8h]
  int v517; // [rsp+0h] [rbp-7C8h]
  int v518; // [rsp+0h] [rbp-7C8h]
  int v519; // [rsp+0h] [rbp-7C8h]
  int v520; // [rsp+0h] [rbp-7C8h]
  int v521; // [rsp+0h] [rbp-7C8h]
  int v522; // [rsp+0h] [rbp-7C8h]
  int v523; // [rsp+0h] [rbp-7C8h]
  int v524; // [rsp+0h] [rbp-7C8h]
  int v525; // [rsp+0h] [rbp-7C8h]
  int v526; // [rsp+0h] [rbp-7C8h]
  int v527; // [rsp+0h] [rbp-7C8h]
  int v528; // [rsp+0h] [rbp-7C8h]
  int v529; // [rsp+0h] [rbp-7C8h]
  int v530; // [rsp+0h] [rbp-7C8h]
  int v531; // [rsp+0h] [rbp-7C8h]
  int v532; // [rsp+0h] [rbp-7C8h]
  int v533; // [rsp+0h] [rbp-7C8h]
  int v534; // [rsp+0h] [rbp-7C8h]
  int v535; // [rsp+0h] [rbp-7C8h]
  int v536; // [rsp+0h] [rbp-7C8h]
  int v537; // [rsp+0h] [rbp-7C8h]
  int v538; // [rsp+0h] [rbp-7C8h]
  int v539; // [rsp+0h] [rbp-7C8h]
  int v540; // [rsp+0h] [rbp-7C8h]
  int v541; // [rsp+0h] [rbp-7C8h]
  int v542; // [rsp+0h] [rbp-7C8h]
  int v543; // [rsp+0h] [rbp-7C8h]
  int v544; // [rsp+0h] [rbp-7C8h]
  int v545; // [rsp+0h] [rbp-7C8h]
  int v546; // [rsp+0h] [rbp-7C8h]
  int v547; // [rsp+0h] [rbp-7C8h]
  int v548; // [rsp+0h] [rbp-7C8h]
  int v549; // [rsp+0h] [rbp-7C8h]
  int v550; // [rsp+0h] [rbp-7C8h]
  int v551; // [rsp+0h] [rbp-7C8h]
  int v552; // [rsp+0h] [rbp-7C8h]
  int v553; // [rsp+0h] [rbp-7C8h]
  int v554; // [rsp+0h] [rbp-7C8h]
  int v555; // [rsp+0h] [rbp-7C8h]
  int v556; // [rsp+0h] [rbp-7C8h]
  int v557; // [rsp+0h] [rbp-7C8h]
  int v558; // [rsp+0h] [rbp-7C8h]
  int v559; // [rsp+0h] [rbp-7C8h]
  int v560; // [rsp+0h] [rbp-7C8h]
  int v561; // [rsp+0h] [rbp-7C8h]
  int v562; // [rsp+0h] [rbp-7C8h]
  int v563; // [rsp+0h] [rbp-7C8h]
  int v564; // [rsp+0h] [rbp-7C8h]
  int v565; // [rsp+0h] [rbp-7C8h]
  int v566; // [rsp+0h] [rbp-7C8h]
  int v567; // [rsp+0h] [rbp-7C8h]
  int v568; // [rsp+0h] [rbp-7C8h]
  int v569; // [rsp+0h] [rbp-7C8h]
  int v570; // [rsp+0h] [rbp-7C8h]
  int v571; // [rsp+0h] [rbp-7C8h]
  int v572; // [rsp+0h] [rbp-7C8h]
  int v573; // [rsp+0h] [rbp-7C8h]
  int v574; // [rsp+0h] [rbp-7C8h]
  int v575; // [rsp+0h] [rbp-7C8h]
  int v576; // [rsp+0h] [rbp-7C8h]
  int v577; // [rsp+0h] [rbp-7C8h]
  int v578; // [rsp+0h] [rbp-7C8h]
  int v579; // [rsp+0h] [rbp-7C8h]
  int v580; // [rsp+0h] [rbp-7C8h]
  int v581; // [rsp+0h] [rbp-7C8h]
  int v582; // [rsp+0h] [rbp-7C8h]
  int v583; // [rsp+0h] [rbp-7C8h]
  int v584; // [rsp+0h] [rbp-7C8h]
  int v585; // [rsp+0h] [rbp-7C8h]
  int v586; // [rsp+0h] [rbp-7C8h]
  int v587; // [rsp+0h] [rbp-7C8h]
  int v588; // [rsp+0h] [rbp-7C8h]
  int v589; // [rsp+0h] [rbp-7C8h]
  int v590; // [rsp+0h] [rbp-7C8h]
  int v591; // [rsp+0h] [rbp-7C8h]
  int v592; // [rsp+0h] [rbp-7C8h]
  int v593; // [rsp+0h] [rbp-7C8h]
  int v594; // [rsp+0h] [rbp-7C8h]
  int v595; // [rsp+0h] [rbp-7C8h]
  int v596; // [rsp+0h] [rbp-7C8h]
  int v597; // [rsp+0h] [rbp-7C8h]
  int v598; // [rsp+0h] [rbp-7C8h]
  int v599; // [rsp+0h] [rbp-7C8h]
  int v600; // [rsp+0h] [rbp-7C8h]
  int v601; // [rsp+0h] [rbp-7C8h]
  int v602; // [rsp+0h] [rbp-7C8h]
  int v603; // [rsp+0h] [rbp-7C8h]
  int v604; // [rsp+0h] [rbp-7C8h]
  int v605; // [rsp+0h] [rbp-7C8h]
  int v606; // [rsp+0h] [rbp-7C8h]
  int v607; // [rsp+0h] [rbp-7C8h]
  int v608; // [rsp+0h] [rbp-7C8h]
  int v609; // [rsp+0h] [rbp-7C8h]
  int v610; // [rsp+0h] [rbp-7C8h]
  int v611; // [rsp+0h] [rbp-7C8h]
  int v612; // [rsp+0h] [rbp-7C8h]
  int v613; // [rsp+0h] [rbp-7C8h]
  int v614; // [rsp+0h] [rbp-7C8h]
  int v615; // [rsp+0h] [rbp-7C8h]
  int v616; // [rsp+0h] [rbp-7C8h]
  int v617; // [rsp+0h] [rbp-7C8h]
  __int64 v618; // [rsp+8h] [rbp-7C0h]
  int v619; // [rsp+8h] [rbp-7C0h]
  int v620; // [rsp+8h] [rbp-7C0h]
  _QWORD *v621; // [rsp+8h] [rbp-7C0h]
  int v622; // [rsp+8h] [rbp-7C0h]
  __m128i *v623; // [rsp+8h] [rbp-7C0h]
  __int64 v624; // [rsp+8h] [rbp-7C0h]
  __int64 v625; // [rsp+8h] [rbp-7C0h]
  _QWORD *v626; // [rsp+8h] [rbp-7C0h]
  __int64 v627; // [rsp+8h] [rbp-7C0h]
  __int64 v628; // [rsp+8h] [rbp-7C0h]
  __int64 v629; // [rsp+8h] [rbp-7C0h]
  __int64 v630; // [rsp+8h] [rbp-7C0h]
  int v631; // [rsp+8h] [rbp-7C0h]
  __int64 v632; // [rsp+8h] [rbp-7C0h]
  __int64 v633; // [rsp+8h] [rbp-7C0h]
  __int64 v634; // [rsp+8h] [rbp-7C0h]
  __int64 v635; // [rsp+8h] [rbp-7C0h]
  __int64 v636; // [rsp+8h] [rbp-7C0h]
  int v637; // [rsp+8h] [rbp-7C0h]
  __int64 v638; // [rsp+8h] [rbp-7C0h]
  __int64 v639; // [rsp+8h] [rbp-7C0h]
  __int64 v640; // [rsp+8h] [rbp-7C0h]
  __int64 v641; // [rsp+8h] [rbp-7C0h]
  int v642; // [rsp+8h] [rbp-7C0h]
  __int64 v643; // [rsp+8h] [rbp-7C0h]
  __int64 v644; // [rsp+8h] [rbp-7C0h]
  __int64 v645; // [rsp+8h] [rbp-7C0h]
  int v646; // [rsp+8h] [rbp-7C0h]
  __int64 v647; // [rsp+8h] [rbp-7C0h]
  int v648; // [rsp+8h] [rbp-7C0h]
  __int64 v649; // [rsp+8h] [rbp-7C0h]
  __int64 v650; // [rsp+8h] [rbp-7C0h]
  __int64 v651; // [rsp+8h] [rbp-7C0h]
  __int64 v652; // [rsp+8h] [rbp-7C0h]
  __int64 v653; // [rsp+8h] [rbp-7C0h]
  int v654; // [rsp+8h] [rbp-7C0h]
  __int64 v655; // [rsp+8h] [rbp-7C0h]
  __int64 v656; // [rsp+8h] [rbp-7C0h]
  __int64 v657; // [rsp+8h] [rbp-7C0h]
  int v658; // [rsp+8h] [rbp-7C0h]
  __int64 v659; // [rsp+8h] [rbp-7C0h]
  int v660; // [rsp+8h] [rbp-7C0h]
  __int64 v661; // [rsp+8h] [rbp-7C0h]
  __int64 v662; // [rsp+8h] [rbp-7C0h]
  __int64 v663; // [rsp+8h] [rbp-7C0h]
  __int64 v664; // [rsp+8h] [rbp-7C0h]
  __int64 v665; // [rsp+8h] [rbp-7C0h]
  int v666; // [rsp+8h] [rbp-7C0h]
  int v667; // [rsp+8h] [rbp-7C0h]
  __int64 v668; // [rsp+8h] [rbp-7C0h]
  __int64 v669; // [rsp+8h] [rbp-7C0h]
  __int64 v670; // [rsp+8h] [rbp-7C0h]
  int v671; // [rsp+8h] [rbp-7C0h]
  __int64 v672; // [rsp+8h] [rbp-7C0h]
  int v673; // [rsp+8h] [rbp-7C0h]
  __int64 v674; // [rsp+8h] [rbp-7C0h]
  __int64 v675; // [rsp+8h] [rbp-7C0h]
  __int64 v676; // [rsp+8h] [rbp-7C0h]
  int v677; // [rsp+8h] [rbp-7C0h]
  __int64 v678; // [rsp+8h] [rbp-7C0h]
  int v679; // [rsp+8h] [rbp-7C0h]
  __int64 v680; // [rsp+8h] [rbp-7C0h]
  __int64 v681; // [rsp+8h] [rbp-7C0h]
  __int64 v682; // [rsp+8h] [rbp-7C0h]
  int v683; // [rsp+8h] [rbp-7C0h]
  int v684; // [rsp+8h] [rbp-7C0h]
  __int64 v685; // [rsp+8h] [rbp-7C0h]
  int v686; // [rsp+8h] [rbp-7C0h]
  __int64 v687; // [rsp+8h] [rbp-7C0h]
  __int64 v688; // [rsp+8h] [rbp-7C0h]
  __int64 v689; // [rsp+8h] [rbp-7C0h]
  __int64 v690; // [rsp+8h] [rbp-7C0h]
  __int64 v691; // [rsp+8h] [rbp-7C0h]
  int v692; // [rsp+8h] [rbp-7C0h]
  int v693; // [rsp+8h] [rbp-7C0h]
  int v694; // [rsp+8h] [rbp-7C0h]
  __int64 v695; // [rsp+8h] [rbp-7C0h]
  __int64 v696; // [rsp+8h] [rbp-7C0h]
  __int64 v697; // [rsp+8h] [rbp-7C0h]
  int v698; // [rsp+8h] [rbp-7C0h]
  __int64 v699; // [rsp+8h] [rbp-7C0h]
  int v700; // [rsp+8h] [rbp-7C0h]
  __int64 v701; // [rsp+8h] [rbp-7C0h]
  __int64 v702; // [rsp+8h] [rbp-7C0h]
  __int64 v703; // [rsp+8h] [rbp-7C0h]
  int v704; // [rsp+8h] [rbp-7C0h]
  __int64 v705; // [rsp+8h] [rbp-7C0h]
  int v706; // [rsp+8h] [rbp-7C0h]
  __int64 v707; // [rsp+8h] [rbp-7C0h]
  __int64 v708; // [rsp+8h] [rbp-7C0h]
  __int64 v709; // [rsp+8h] [rbp-7C0h]
  __int64 v710; // [rsp+8h] [rbp-7C0h]
  int v711; // [rsp+8h] [rbp-7C0h]
  __int64 v712; // [rsp+8h] [rbp-7C0h]
  __int64 v713; // [rsp+8h] [rbp-7C0h]
  __int64 v714; // [rsp+8h] [rbp-7C0h]
  __int64 v715; // [rsp+8h] [rbp-7C0h]
  __int64 v716; // [rsp+8h] [rbp-7C0h]
  int v717; // [rsp+8h] [rbp-7C0h]
  int v718; // [rsp+8h] [rbp-7C0h]
  int v719; // [rsp+8h] [rbp-7C0h]
  __int64 v720; // [rsp+8h] [rbp-7C0h]
  __int64 v721; // [rsp+8h] [rbp-7C0h]
  __int64 v722; // [rsp+8h] [rbp-7C0h]
  int v723; // [rsp+8h] [rbp-7C0h]
  __int64 v724; // [rsp+8h] [rbp-7C0h]
  int v725; // [rsp+8h] [rbp-7C0h]
  __int64 v726; // [rsp+8h] [rbp-7C0h]
  __int64 v727; // [rsp+8h] [rbp-7C0h]
  __int64 v728; // [rsp+8h] [rbp-7C0h]
  __int64 v729; // [rsp+8h] [rbp-7C0h]
  __int64 v730; // [rsp+8h] [rbp-7C0h]
  __int64 v731; // [rsp+8h] [rbp-7C0h]
  _QWORD *v732; // [rsp+8h] [rbp-7C0h]
  __int64 v733; // [rsp+8h] [rbp-7C0h]
  __int64 v734; // [rsp+8h] [rbp-7C0h]
  __int64 v735; // [rsp+10h] [rbp-7B8h]
  int v736; // [rsp+10h] [rbp-7B8h]
  __int64 v737; // [rsp+10h] [rbp-7B8h]
  __int64 v738; // [rsp+10h] [rbp-7B8h]
  __int64 v739; // [rsp+10h] [rbp-7B8h]
  int v740; // [rsp+10h] [rbp-7B8h]
  int v741; // [rsp+10h] [rbp-7B8h]
  int v742; // [rsp+10h] [rbp-7B8h]
  int v743; // [rsp+10h] [rbp-7B8h]
  int v744; // [rsp+10h] [rbp-7B8h]
  int v745; // [rsp+10h] [rbp-7B8h]
  int v746; // [rsp+10h] [rbp-7B8h]
  int v747; // [rsp+10h] [rbp-7B8h]
  __int64 v748; // [rsp+10h] [rbp-7B8h]
  int v749; // [rsp+10h] [rbp-7B8h]
  int v750; // [rsp+10h] [rbp-7B8h]
  int v751; // [rsp+10h] [rbp-7B8h]
  int v752; // [rsp+10h] [rbp-7B8h]
  int v753; // [rsp+10h] [rbp-7B8h]
  __int64 v754; // [rsp+10h] [rbp-7B8h]
  int v755; // [rsp+10h] [rbp-7B8h]
  int v756; // [rsp+10h] [rbp-7B8h]
  int v757; // [rsp+10h] [rbp-7B8h]
  int v758; // [rsp+10h] [rbp-7B8h]
  __int64 v759; // [rsp+10h] [rbp-7B8h]
  int v760; // [rsp+10h] [rbp-7B8h]
  int v761; // [rsp+10h] [rbp-7B8h]
  int v762; // [rsp+10h] [rbp-7B8h]
  __int64 v763; // [rsp+10h] [rbp-7B8h]
  int v764; // [rsp+10h] [rbp-7B8h]
  __int64 v765; // [rsp+10h] [rbp-7B8h]
  int v766; // [rsp+10h] [rbp-7B8h]
  int v767; // [rsp+10h] [rbp-7B8h]
  int v768; // [rsp+10h] [rbp-7B8h]
  int v769; // [rsp+10h] [rbp-7B8h]
  int v770; // [rsp+10h] [rbp-7B8h]
  __int64 v771; // [rsp+10h] [rbp-7B8h]
  int v772; // [rsp+10h] [rbp-7B8h]
  int v773; // [rsp+10h] [rbp-7B8h]
  int v774; // [rsp+10h] [rbp-7B8h]
  __int64 v775; // [rsp+10h] [rbp-7B8h]
  int v776; // [rsp+10h] [rbp-7B8h]
  __int64 v777; // [rsp+10h] [rbp-7B8h]
  int v778; // [rsp+10h] [rbp-7B8h]
  int v779; // [rsp+10h] [rbp-7B8h]
  int v780; // [rsp+10h] [rbp-7B8h]
  int v781; // [rsp+10h] [rbp-7B8h]
  int v782; // [rsp+10h] [rbp-7B8h]
  __int64 v783; // [rsp+10h] [rbp-7B8h]
  __int64 v784; // [rsp+10h] [rbp-7B8h]
  int v785; // [rsp+10h] [rbp-7B8h]
  int v786; // [rsp+10h] [rbp-7B8h]
  int v787; // [rsp+10h] [rbp-7B8h]
  __int64 v788; // [rsp+10h] [rbp-7B8h]
  int v789; // [rsp+10h] [rbp-7B8h]
  __int64 v790; // [rsp+10h] [rbp-7B8h]
  int v791; // [rsp+10h] [rbp-7B8h]
  int v792; // [rsp+10h] [rbp-7B8h]
  int v793; // [rsp+10h] [rbp-7B8h]
  __int64 v794; // [rsp+10h] [rbp-7B8h]
  int v795; // [rsp+10h] [rbp-7B8h]
  __int64 v796; // [rsp+10h] [rbp-7B8h]
  int v797; // [rsp+10h] [rbp-7B8h]
  int v798; // [rsp+10h] [rbp-7B8h]
  int v799; // [rsp+10h] [rbp-7B8h]
  __int64 v800; // [rsp+10h] [rbp-7B8h]
  __int64 v801; // [rsp+10h] [rbp-7B8h]
  int v802; // [rsp+10h] [rbp-7B8h]
  __int64 v803; // [rsp+10h] [rbp-7B8h]
  int v804; // [rsp+10h] [rbp-7B8h]
  int v805; // [rsp+10h] [rbp-7B8h]
  int v806; // [rsp+10h] [rbp-7B8h]
  int v807; // [rsp+10h] [rbp-7B8h]
  int v808; // [rsp+10h] [rbp-7B8h]
  __int64 v809; // [rsp+10h] [rbp-7B8h]
  __int64 v810; // [rsp+10h] [rbp-7B8h]
  __int64 v811; // [rsp+10h] [rbp-7B8h]
  int v812; // [rsp+10h] [rbp-7B8h]
  int v813; // [rsp+10h] [rbp-7B8h]
  int v814; // [rsp+10h] [rbp-7B8h]
  __int64 v815; // [rsp+10h] [rbp-7B8h]
  int v816; // [rsp+10h] [rbp-7B8h]
  __int64 v817; // [rsp+10h] [rbp-7B8h]
  int v818; // [rsp+10h] [rbp-7B8h]
  int v819; // [rsp+10h] [rbp-7B8h]
  int v820; // [rsp+10h] [rbp-7B8h]
  __int64 v821; // [rsp+10h] [rbp-7B8h]
  int v822; // [rsp+10h] [rbp-7B8h]
  __int64 v823; // [rsp+10h] [rbp-7B8h]
  int v824; // [rsp+10h] [rbp-7B8h]
  int v825; // [rsp+10h] [rbp-7B8h]
  int v826; // [rsp+10h] [rbp-7B8h]
  int v827; // [rsp+10h] [rbp-7B8h]
  __int64 v828; // [rsp+10h] [rbp-7B8h]
  int v829; // [rsp+10h] [rbp-7B8h]
  int v830; // [rsp+10h] [rbp-7B8h]
  int v831; // [rsp+10h] [rbp-7B8h]
  int v832; // [rsp+10h] [rbp-7B8h]
  int v833; // [rsp+10h] [rbp-7B8h]
  __int64 v834; // [rsp+10h] [rbp-7B8h]
  __int64 v835; // [rsp+10h] [rbp-7B8h]
  __int64 v836; // [rsp+10h] [rbp-7B8h]
  int v837; // [rsp+10h] [rbp-7B8h]
  int v838; // [rsp+10h] [rbp-7B8h]
  int v839; // [rsp+10h] [rbp-7B8h]
  __int64 v840; // [rsp+10h] [rbp-7B8h]
  int v841; // [rsp+10h] [rbp-7B8h]
  __int64 v842; // [rsp+10h] [rbp-7B8h]
  int v843; // [rsp+10h] [rbp-7B8h]
  int v844; // [rsp+10h] [rbp-7B8h]
  int v845; // [rsp+10h] [rbp-7B8h]
  int v846; // [rsp+10h] [rbp-7B8h]
  int v847; // [rsp+10h] [rbp-7B8h]
  int v848; // [rsp+10h] [rbp-7B8h]
  int v849; // [rsp+10h] [rbp-7B8h]
  int v850; // [rsp+10h] [rbp-7B8h]
  int v851; // [rsp+10h] [rbp-7B8h]
  int v852; // [rsp+18h] [rbp-7B0h]
  int v853; // [rsp+18h] [rbp-7B0h]
  int v854; // [rsp+18h] [rbp-7B0h]
  int v855; // [rsp+18h] [rbp-7B0h]
  int v856; // [rsp+18h] [rbp-7B0h]
  int v857; // [rsp+18h] [rbp-7B0h]
  int v858; // [rsp+18h] [rbp-7B0h]
  _QWORD *v859; // [rsp+18h] [rbp-7B0h]
  int v860; // [rsp+18h] [rbp-7B0h]
  int v861; // [rsp+18h] [rbp-7B0h]
  int v862; // [rsp+18h] [rbp-7B0h]
  int v863; // [rsp+18h] [rbp-7B0h]
  int v864; // [rsp+18h] [rbp-7B0h]
  int v865; // [rsp+18h] [rbp-7B0h]
  int v866; // [rsp+18h] [rbp-7B0h]
  int v867; // [rsp+18h] [rbp-7B0h]
  int v868; // [rsp+18h] [rbp-7B0h]
  int v869; // [rsp+18h] [rbp-7B0h]
  int v870; // [rsp+18h] [rbp-7B0h]
  int v871; // [rsp+18h] [rbp-7B0h]
  int v872; // [rsp+18h] [rbp-7B0h]
  _QWORD *v873; // [rsp+18h] [rbp-7B0h]
  int v874; // [rsp+18h] [rbp-7B0h]
  int v875; // [rsp+18h] [rbp-7B0h]
  int v876; // [rsp+18h] [rbp-7B0h]
  int v877; // [rsp+18h] [rbp-7B0h]
  int v878; // [rsp+18h] [rbp-7B0h]
  int v879; // [rsp+18h] [rbp-7B0h]
  int v880; // [rsp+18h] [rbp-7B0h]
  _QWORD *v881; // [rsp+18h] [rbp-7B0h]
  int v882; // [rsp+18h] [rbp-7B0h]
  int v883; // [rsp+18h] [rbp-7B0h]
  int v884; // [rsp+18h] [rbp-7B0h]
  int v885; // [rsp+18h] [rbp-7B0h]
  int v886; // [rsp+18h] [rbp-7B0h]
  int v887; // [rsp+18h] [rbp-7B0h]
  int v888; // [rsp+18h] [rbp-7B0h]
  int v889; // [rsp+18h] [rbp-7B0h]
  int v890; // [rsp+18h] [rbp-7B0h]
  int v891; // [rsp+18h] [rbp-7B0h]
  int v892; // [rsp+18h] [rbp-7B0h]
  int v893; // [rsp+18h] [rbp-7B0h]
  int v894; // [rsp+18h] [rbp-7B0h]
  int v895; // [rsp+18h] [rbp-7B0h]
  int v896; // [rsp+18h] [rbp-7B0h]
  int v897; // [rsp+18h] [rbp-7B0h]
  int v898; // [rsp+18h] [rbp-7B0h]
  _QWORD *v899; // [rsp+18h] [rbp-7B0h]
  int v900; // [rsp+18h] [rbp-7B0h]
  int v901; // [rsp+18h] [rbp-7B0h]
  int v902; // [rsp+18h] [rbp-7B0h]
  int v903; // [rsp+18h] [rbp-7B0h]
  int v904; // [rsp+18h] [rbp-7B0h]
  int v905; // [rsp+18h] [rbp-7B0h]
  int v906; // [rsp+18h] [rbp-7B0h]
  int v907; // [rsp+18h] [rbp-7B0h]
  int v908; // [rsp+18h] [rbp-7B0h]
  int v909; // [rsp+18h] [rbp-7B0h]
  int v910; // [rsp+18h] [rbp-7B0h]
  int v911; // [rsp+18h] [rbp-7B0h]
  int v912; // [rsp+18h] [rbp-7B0h]
  int v913; // [rsp+18h] [rbp-7B0h]
  int v914; // [rsp+18h] [rbp-7B0h]
  int v915; // [rsp+18h] [rbp-7B0h]
  _QWORD *v916; // [rsp+18h] [rbp-7B0h]
  int v917; // [rsp+18h] [rbp-7B0h]
  int v918; // [rsp+18h] [rbp-7B0h]
  int v919; // [rsp+18h] [rbp-7B0h]
  int v920; // [rsp+18h] [rbp-7B0h]
  int v921; // [rsp+18h] [rbp-7B0h]
  int v922; // [rsp+18h] [rbp-7B0h]
  _QWORD *v923; // [rsp+18h] [rbp-7B0h]
  int v924; // [rsp+18h] [rbp-7B0h]
  int v925; // [rsp+18h] [rbp-7B0h]
  int v926; // [rsp+18h] [rbp-7B0h]
  int v927; // [rsp+18h] [rbp-7B0h]
  int v928; // [rsp+18h] [rbp-7B0h]
  int v929; // [rsp+18h] [rbp-7B0h]
  int v930; // [rsp+18h] [rbp-7B0h]
  int v931; // [rsp+18h] [rbp-7B0h]
  int v932; // [rsp+18h] [rbp-7B0h]
  int v933; // [rsp+18h] [rbp-7B0h]
  int v934; // [rsp+20h] [rbp-7A8h]
  int v935; // [rsp+20h] [rbp-7A8h]
  int v936; // [rsp+20h] [rbp-7A8h]
  int v937; // [rsp+20h] [rbp-7A8h]
  int v938; // [rsp+20h] [rbp-7A8h]
  int v939; // [rsp+20h] [rbp-7A8h]
  int v940; // [rsp+20h] [rbp-7A8h]
  int v941; // [rsp+20h] [rbp-7A8h]
  _QWORD *v942; // [rsp+20h] [rbp-7A8h]
  int v943; // [rsp+20h] [rbp-7A8h]
  int v944; // [rsp+20h] [rbp-7A8h]
  int v945; // [rsp+20h] [rbp-7A8h]
  int v946; // [rsp+20h] [rbp-7A8h]
  int v947; // [rsp+20h] [rbp-7A8h]
  int v948; // [rsp+20h] [rbp-7A8h]
  int v949; // [rsp+20h] [rbp-7A8h]
  int v950; // [rsp+20h] [rbp-7A8h]
  int v951; // [rsp+20h] [rbp-7A8h]
  int v952; // [rsp+20h] [rbp-7A8h]
  int v953; // [rsp+20h] [rbp-7A8h]
  _QWORD *v954; // [rsp+20h] [rbp-7A8h]
  int v955; // [rsp+20h] [rbp-7A8h]
  __int64 v956; // [rsp+20h] [rbp-7A8h]
  int v957; // [rsp+20h] [rbp-7A8h]
  int v958; // [rsp+20h] [rbp-7A8h]
  int v959; // [rsp+20h] [rbp-7A8h]
  int v960; // [rsp+20h] [rbp-7A8h]
  int v961; // [rsp+20h] [rbp-7A8h]
  int v962; // [rsp+20h] [rbp-7A8h]
  int v963; // [rsp+20h] [rbp-7A8h]
  _QWORD *v964; // [rsp+20h] [rbp-7A8h]
  int v965; // [rsp+20h] [rbp-7A8h]
  int v966; // [rsp+20h] [rbp-7A8h]
  int v967; // [rsp+20h] [rbp-7A8h]
  int v968; // [rsp+20h] [rbp-7A8h]
  int v969; // [rsp+20h] [rbp-7A8h]
  int v970; // [rsp+20h] [rbp-7A8h]
  int v971; // [rsp+20h] [rbp-7A8h]
  int v972; // [rsp+20h] [rbp-7A8h]
  int v973; // [rsp+20h] [rbp-7A8h]
  int v974; // [rsp+20h] [rbp-7A8h]
  int v975; // [rsp+20h] [rbp-7A8h]
  int v976; // [rsp+20h] [rbp-7A8h]
  int v977; // [rsp+20h] [rbp-7A8h]
  int v978; // [rsp+20h] [rbp-7A8h]
  int v979; // [rsp+20h] [rbp-7A8h]
  _QWORD *v980; // [rsp+20h] [rbp-7A8h]
  int v981; // [rsp+20h] [rbp-7A8h]
  __int64 v982; // [rsp+20h] [rbp-7A8h]
  int v983; // [rsp+20h] [rbp-7A8h]
  int v984; // [rsp+20h] [rbp-7A8h]
  int v985; // [rsp+20h] [rbp-7A8h]
  int v986; // [rsp+20h] [rbp-7A8h]
  int v987; // [rsp+20h] [rbp-7A8h]
  int v988; // [rsp+20h] [rbp-7A8h]
  int v989; // [rsp+20h] [rbp-7A8h]
  int v990; // [rsp+20h] [rbp-7A8h]
  int v991; // [rsp+20h] [rbp-7A8h]
  int v992; // [rsp+20h] [rbp-7A8h]
  int v993; // [rsp+20h] [rbp-7A8h]
  int v994; // [rsp+20h] [rbp-7A8h]
  int v995; // [rsp+20h] [rbp-7A8h]
  int v996; // [rsp+20h] [rbp-7A8h]
  _QWORD *v997; // [rsp+20h] [rbp-7A8h]
  int v998; // [rsp+20h] [rbp-7A8h]
  __int64 v999; // [rsp+20h] [rbp-7A8h]
  int v1000; // [rsp+20h] [rbp-7A8h]
  int v1001; // [rsp+20h] [rbp-7A8h]
  int v1002; // [rsp+20h] [rbp-7A8h]
  int v1003; // [rsp+20h] [rbp-7A8h]
  int v1004; // [rsp+20h] [rbp-7A8h]
  int v1005; // [rsp+20h] [rbp-7A8h]
  _QWORD *v1006; // [rsp+20h] [rbp-7A8h]
  int v1007; // [rsp+20h] [rbp-7A8h]
  int v1008; // [rsp+20h] [rbp-7A8h]
  int v1009; // [rsp+20h] [rbp-7A8h]
  int v1010; // [rsp+20h] [rbp-7A8h]
  int v1011; // [rsp+20h] [rbp-7A8h]
  int v1012; // [rsp+20h] [rbp-7A8h]
  int v1013; // [rsp+20h] [rbp-7A8h]
  int v1014; // [rsp+20h] [rbp-7A8h]
  int v1015; // [rsp+20h] [rbp-7A8h]
  int v1016; // [rsp+28h] [rbp-7A0h]
  int v1017; // [rsp+28h] [rbp-7A0h]
  int v1018; // [rsp+28h] [rbp-7A0h]
  int v1019; // [rsp+28h] [rbp-7A0h]
  int v1020; // [rsp+28h] [rbp-7A0h]
  int v1021; // [rsp+28h] [rbp-7A0h]
  _QWORD *v1022; // [rsp+28h] [rbp-7A0h]
  int v1023; // [rsp+28h] [rbp-7A0h]
  int v1024; // [rsp+28h] [rbp-7A0h]
  int v1025; // [rsp+28h] [rbp-7A0h]
  int v1026; // [rsp+28h] [rbp-7A0h]
  int v1027; // [rsp+28h] [rbp-7A0h]
  int v1028; // [rsp+28h] [rbp-7A0h]
  int v1029; // [rsp+28h] [rbp-7A0h]
  int v1030; // [rsp+28h] [rbp-7A0h]
  int v1031; // [rsp+28h] [rbp-7A0h]
  int v1032; // [rsp+28h] [rbp-7A0h]
  int v1033; // [rsp+28h] [rbp-7A0h]
  int v1034; // [rsp+28h] [rbp-7A0h]
  int v1035; // [rsp+28h] [rbp-7A0h]
  _QWORD *v1036; // [rsp+28h] [rbp-7A0h]
  int v1037; // [rsp+28h] [rbp-7A0h]
  int v1038; // [rsp+28h] [rbp-7A0h]
  int v1039; // [rsp+28h] [rbp-7A0h]
  int v1040; // [rsp+28h] [rbp-7A0h]
  int v1041; // [rsp+28h] [rbp-7A0h]
  int v1042; // [rsp+28h] [rbp-7A0h]
  int v1043; // [rsp+28h] [rbp-7A0h]
  _QWORD *v1044; // [rsp+28h] [rbp-7A0h]
  int v1045; // [rsp+28h] [rbp-7A0h]
  int v1046; // [rsp+28h] [rbp-7A0h]
  int v1047; // [rsp+28h] [rbp-7A0h]
  int v1048; // [rsp+28h] [rbp-7A0h]
  int v1049; // [rsp+28h] [rbp-7A0h]
  int v1050; // [rsp+28h] [rbp-7A0h]
  int v1051; // [rsp+28h] [rbp-7A0h]
  int v1052; // [rsp+28h] [rbp-7A0h]
  int v1053; // [rsp+28h] [rbp-7A0h]
  int v1054; // [rsp+28h] [rbp-7A0h]
  int v1055; // [rsp+28h] [rbp-7A0h]
  int v1056; // [rsp+28h] [rbp-7A0h]
  int v1057; // [rsp+28h] [rbp-7A0h]
  int v1058; // [rsp+28h] [rbp-7A0h]
  int v1059; // [rsp+28h] [rbp-7A0h]
  int v1060; // [rsp+28h] [rbp-7A0h]
  int v1061; // [rsp+28h] [rbp-7A0h]
  _QWORD *v1062; // [rsp+28h] [rbp-7A0h]
  int v1063; // [rsp+28h] [rbp-7A0h]
  int v1064; // [rsp+28h] [rbp-7A0h]
  int v1065; // [rsp+28h] [rbp-7A0h]
  int v1066; // [rsp+28h] [rbp-7A0h]
  int v1067; // [rsp+28h] [rbp-7A0h]
  int v1068; // [rsp+28h] [rbp-7A0h]
  int v1069; // [rsp+28h] [rbp-7A0h]
  int v1070; // [rsp+28h] [rbp-7A0h]
  int v1071; // [rsp+28h] [rbp-7A0h]
  int v1072; // [rsp+28h] [rbp-7A0h]
  int v1073; // [rsp+28h] [rbp-7A0h]
  int v1074; // [rsp+28h] [rbp-7A0h]
  int v1075; // [rsp+28h] [rbp-7A0h]
  int v1076; // [rsp+28h] [rbp-7A0h]
  int v1077; // [rsp+28h] [rbp-7A0h]
  int v1078; // [rsp+28h] [rbp-7A0h]
  _QWORD *v1079; // [rsp+28h] [rbp-7A0h]
  int v1080; // [rsp+28h] [rbp-7A0h]
  int v1081; // [rsp+28h] [rbp-7A0h]
  int v1082; // [rsp+28h] [rbp-7A0h]
  int v1083; // [rsp+28h] [rbp-7A0h]
  int v1084; // [rsp+28h] [rbp-7A0h]
  int v1085; // [rsp+28h] [rbp-7A0h]
  int v1086; // [rsp+28h] [rbp-7A0h]
  int v1087; // [rsp+28h] [rbp-7A0h]
  int v1088; // [rsp+28h] [rbp-7A0h]
  int v1089; // [rsp+28h] [rbp-7A0h]
  int v1090; // [rsp+28h] [rbp-7A0h]
  _QWORD *v1091; // [rsp+28h] [rbp-7A0h]
  __int64 v1092; // [rsp+28h] [rbp-7A0h]
  int v1093; // [rsp+28h] [rbp-7A0h]
  int v1094; // [rsp+28h] [rbp-7A0h]
  int v1095; // [rsp+28h] [rbp-7A0h]
  int v1096; // [rsp+28h] [rbp-7A0h]
  int v1097; // [rsp+28h] [rbp-7A0h]
  __m128 v1098; // [rsp+30h] [rbp-798h] BYREF
  __int64 v1099; // [rsp+40h] [rbp-788h]
  __m128i *v1100; // [rsp+48h] [rbp-780h]
  __int128 *v1101; // [rsp+50h] [rbp-778h]
  __int8 *v1102; // [rsp+58h] [rbp-770h]
  _QWORD *v1103; // [rsp+60h] [rbp-768h]
  __int64 *v1104; // [rsp+68h] [rbp-760h]
  __int64 v1105; // [rsp+70h] [rbp-758h]
  __int128 *v1106; // [rsp+78h] [rbp-750h]
  __int64 *v1107; // [rsp+80h] [rbp-748h]
  __int64 (__fastcall *v1108)(int); // [rsp+88h] [rbp-740h]
  __int64 *v1109; // [rsp+90h] [rbp-738h]
  __int128 *v1110; // [rsp+98h] [rbp-730h]
  __int8 *v1111; // [rsp+A0h] [rbp-728h]
  __m128i *v1112; // [rsp+A8h] [rbp-720h]
  __m128i *v1113; // [rsp+B0h] [rbp-718h]
  __m128i *v1114; // [rsp+B8h] [rbp-710h]
  char *v1115; // [rsp+C0h] [rbp-708h]
  __m128i *v1116; // [rsp+C8h] [rbp-700h]
  __int128 *v1117; // [rsp+D0h] [rbp-6F8h]
  __int128 *v1118; // [rsp+D8h] [rbp-6F0h]
  __m128i *v1119; // [rsp+E0h] [rbp-6E8h]
  __m128i *v1120; // [rsp+E8h] [rbp-6E0h]
  __int128 *v1121; // [rsp+F0h] [rbp-6D8h]
  __m256i *v1122; // [rsp+F8h] [rbp-6D0h]
  __int128 *v1123; // [rsp+100h] [rbp-6C8h]
  __int128 *v1124; // [rsp+108h] [rbp-6C0h]
  __int128 *v1125; // [rsp+110h] [rbp-6B8h]
  __int128 *v1126; // [rsp+118h] [rbp-6B0h]
  __int64 *v1127; // [rsp+120h] [rbp-6A8h]
  __int64 *v1128; // [rsp+128h] [rbp-6A0h]
  char *v1129; // [rsp+130h] [rbp-698h]
  __int64 *v1130; // [rsp+138h] [rbp-690h]
  __int64 *v1131; // [rsp+140h] [rbp-688h]
  __int64 *v1132; // [rsp+148h] [rbp-680h]
  __int128 *v1133; // [rsp+150h] [rbp-678h]
  char *v1134; // [rsp+158h] [rbp-670h]
  __int128 *v1135; // [rsp+160h] [rbp-668h]
  _QWORD *v1136; // [rsp+168h] [rbp-660h]
  __int64 *v1137; // [rsp+170h] [rbp-658h]
  __int128 *v1138; // [rsp+178h] [rbp-650h]
  __int64 *v1139; // [rsp+180h] [rbp-648h]
  __int64 *v1140; // [rsp+188h] [rbp-640h]
  __int64 *v1141; // [rsp+190h] [rbp-638h]
  __int128 *v1142; // [rsp+198h] [rbp-630h]
  __int128 *v1143; // [rsp+1A0h] [rbp-628h]
  char *v1144; // [rsp+1A8h] [rbp-620h]
  char *v1145; // [rsp+1B0h] [rbp-618h]
  char *v1146; // [rsp+1B8h] [rbp-610h]
  char *v1147; // [rsp+1C0h] [rbp-608h]
  char *v1148; // [rsp+1C8h] [rbp-600h]
  __int64 *v1149; // [rsp+1D0h] [rbp-5F8h]
  __int64 *v1150; // [rsp+1D8h] [rbp-5F0h]
  char *v1151; // [rsp+1E0h] [rbp-5E8h]
  __m128i *v1152; // [rsp+1E8h] [rbp-5E0h]
  char *v1153; // [rsp+1F0h] [rbp-5D8h]
  ida_mcp::mcp::ToolDefinition *v1154; // [rsp+1F8h] [rbp-5D0h]
  char *v1155; // [rsp+200h] [rbp-5C8h]
  __int64 *v1156; // [rsp+208h] [rbp-5C0h]
  __int64 *v1157; // [rsp+210h] [rbp-5B8h]
  char *v1158; // [rsp+218h] [rbp-5B0h]
  char *v1159; // [rsp+220h] [rbp-5A8h]
  char *v1160; // [rsp+228h] [rbp-5A0h]
  char *v1161; // [rsp+230h] [rbp-598h]
  char *v1162; // [rsp+238h] [rbp-590h]
  char *v1163; // [rsp+240h] [rbp-588h]
  char *v1164; // [rsp+248h] [rbp-580h]
  char *v1165; // [rsp+250h] [rbp-578h]
  char *v1166; // [rsp+258h] [rbp-570h]
  __int64 *v1167; // [rsp+260h] [rbp-568h]
  _QWORD *v1168; // [rsp+268h] [rbp-560h]
  __m128i v1169; // [rsp+270h] [rbp-558h] BYREF
  __m128i v1170; // [rsp+280h] [rbp-548h] BYREF
  __int64 v1171; // [rsp+290h] [rbp-538h] BYREF
  __int64 v1172; // [rsp+298h] [rbp-530h] BYREF
  char v1173; // [rsp+2A0h] [rbp-528h] BYREF
  __int128 v1174; // [rsp+2A8h] [rbp-520h]
  char v1175; // [rsp+2B8h] [rbp-510h]
  __int128 v1176; // [rsp+2C0h] [rbp-508h] BYREF
  __int64 v1177; // [rsp+2D0h] [rbp-4F8h] BYREF
  char v1178; // [rsp+2D8h] [rbp-4F0h] BYREF
  __int64 v1179; // [rsp+2E0h] [rbp-4E8h]
  char v1180; // [rsp+2E8h] [rbp-4E0h] BYREF
  char v1181; // [rsp+2F0h] [rbp-4D8h] BYREF
  __int64 v1182; // [rsp+2F8h] [rbp-4D0h]
  __int64 v1183; // [rsp+300h] [rbp-4C8h] BYREF
  char v1184; // [rsp+308h] [rbp-4C0h] BYREF
  __int64 v1185; // [rsp+310h] [rbp-4B8h]
  char v1186; // [rsp+318h] [rbp-4B0h] BYREF
  char v1187; // [rsp+320h] [rbp-4A8h] BYREF
  __int64 v1188; // [rsp+328h] [rbp-4A0h]
  __int64 v1189; // [rsp+330h] [rbp-498h] BYREF
  char v1190; // [rsp+338h] [rbp-490h] BYREF
  __int64 v1191; // [rsp+340h] [rbp-488h]
  char v1192; // [rsp+348h] [rbp-480h]
  __int128 v1193; // [rsp+350h] [rbp-478h] BYREF
  char v1194; // [rsp+360h] [rbp-468h] BYREF
  __int128 v1195; // [rsp+368h] [rbp-460h] BYREF
  __int64 v1196; // [rsp+378h] [rbp-450h] BYREF
  char v1197; // [rsp+380h] [rbp-448h] BYREF
  __int64 v1198; // [rsp+388h] [rbp-440h]
  __int64 v1199; // [rsp+390h] [rbp-438h] BYREF
  __int128 v1200; // [rsp+398h] [rbp-430h] BYREF
  char v1201; // [rsp+3A8h] [rbp-420h] BYREF
  char v1202; // [rsp+3B0h] [rbp-418h] BYREF
  __int64 v1203; // [rsp+3B8h] [rbp-410h]
  __int64 v1204; // [rsp+3C0h] [rbp-408h] BYREF
  char v1205; // [rsp+3C8h] [rbp-400h] BYREF
  __int64 v1206; // [rsp+3D0h] [rbp-3F8h]
  char v1207; // [rsp+3D8h] [rbp-3F0h] BYREF
  char v1208; // [rsp+3E0h] [rbp-3E8h] BYREF
  __int64 v1209; // [rsp+3E8h] [rbp-3E0h]
  __int64 v1210; // [rsp+3F0h] [rbp-3D8h] BYREF
  char v1211; // [rsp+3F8h] [rbp-3D0h] BYREF
  __int64 v1212; // [rsp+400h] [rbp-3C8h]
  char v1213; // [rsp+408h] [rbp-3C0h]
  __int128 v1214; // [rsp+410h] [rbp-3B8h] BYREF
  __int64 v1215; // [rsp+420h] [rbp-3A8h] BYREF
  __int128 v1216; // [rsp+428h] [rbp-3A0h] BYREF
  __int64 v1217; // [rsp+438h] [rbp-390h] BYREF
  __int128 v1218; // [rsp+440h] [rbp-388h] BYREF
  __int64 v1219; // [rsp+450h] [rbp-378h] BYREF
  __int128 v1220; // [rsp+458h] [rbp-370h] BYREF
  __int64 v1221; // [rsp+468h] [rbp-360h] BYREF
  char v1222; // [rsp+470h] [rbp-358h] BYREF
  __int64 v1223; // [rsp+478h] [rbp-350h]
  char v1224; // [rsp+480h] [rbp-348h] BYREF
  __int128 v1225; // [rsp+488h] [rbp-340h] BYREF
  __int64 v1226; // [rsp+498h] [rbp-330h] BYREF
  __int128 v1227; // [rsp+4A0h] [rbp-328h] BYREF
  __m128i v1228; // [rsp+4B0h] [rbp-318h] BYREF
  __int64 v1229; // [rsp+4C0h] [rbp-308h]
  char v1230; // [rsp+4C8h] [rbp-300h] BYREF
  __int128 v1231; // [rsp+4D0h] [rbp-2F8h] BYREF
  __m128i v1232; // [rsp+4E0h] [rbp-2E8h] BYREF
  __int64 v1233; // [rsp+4F0h] [rbp-2D8h]
  __int64 v1234; // [rsp+4F8h] [rbp-2D0h] BYREF
  __int128 v1235; // [rsp+500h] [rbp-2C8h] BYREF
  __int64 v1236; // [rsp+510h] [rbp-2B8h] BYREF
  __int128 v1237; // [rsp+518h] [rbp-2B0h] BYREF
  __int64 v1238; // [rsp+528h] [rbp-2A0h] BYREF
  __int128 v1239; // [rsp+530h] [rbp-298h] BYREF
  char v1240; // [rsp+540h] [rbp-288h] BYREF
  __int128 v1241; // [rsp+548h] [rbp-280h] BYREF
  __int64 v1242; // [rsp+558h] [rbp-270h] BYREF
  char v1243; // [rsp+560h] [rbp-268h] BYREF
  __int64 v1244; // [rsp+568h] [rbp-260h]
  __int64 v1245; // [rsp+570h] [rbp-258h] BYREF
  __int128 v1246; // [rsp+578h] [rbp-250h] BYREF
  __m128i v1247; // [rsp+588h] [rbp-240h] BYREF
  __int64 v1248; // [rsp+598h] [rbp-230h]
  __int64 v1249; // [rsp+5A0h] [rbp-228h] BYREF
  __int128 v1250; // [rsp+5A8h] [rbp-220h]
  __m128i v1251; // [rsp+5B8h] [rbp-210h] BYREF
  __int64 v1252; // [rsp+5C8h] [rbp-200h]
  _QWORD v1253[2]; // [rsp+5D0h] [rbp-1F8h] BYREF
  __int64 v1254; // [rsp+5E0h] [rbp-1E8h]
  char v1255; // [rsp+5E8h] [rbp-1E0h] BYREF
  void *v1256; // [rsp+5F0h] [rbp-1D8h] BYREF
  __m256i v1257; // [rsp+5F8h] [rbp-1D0h] BYREF
  __int64 v1258; // [rsp+618h] [rbp-1B0h]
  _QWORD v1259[2]; // [rsp+620h] [rbp-1A8h] BYREF
  __int64 v1260; // [rsp+630h] [rbp-198h]
  char v1261; // [rsp+638h] [rbp-190h] BYREF
  _QWORD v1262[2]; // [rsp+640h] [rbp-188h] BYREF
  char v1263; // [rsp+650h] [rbp-178h] BYREF
  _QWORD v1264[2]; // [rsp+660h] [rbp-168h] BYREF
  char v1265; // [rsp+670h] [rbp-158h] BYREF
  char v1266; // [rsp+680h] [rbp-148h]
  __int64 v1267; // [rsp+688h] [rbp-140h]
  char v1268; // [rsp+6A0h] [rbp-128h]
  char v1269; // [rsp+6D8h] [rbp-F0h]
  __int64 (__fastcall *v1270)(int); // [rsp+6E0h] [rbp-E8h] BYREF
  __int64 v1271; // [rsp+6E8h] [rbp-E0h]
  __m128i v1272; // [rsp+6F0h] [rbp-D8h] BYREF
  __int64 v1273; // [rsp+700h] [rbp-C8h] BYREF
  __int64 v1274; // [rsp+708h] [rbp-C0h]
  _QWORD v1275[2]; // [rsp+710h] [rbp-B8h] BYREF
  __int64 v1276; // [rsp+720h] [rbp-A8h]
  __int64 v1277; // [rsp+728h] [rbp-A0h] BYREF
  char v1278; // [rsp+740h] [rbp-88h]
  char v1279; // [rsp+778h] [rbp-50h]
  unsigned __int64 v1280; // [rsp+788h] [rbp-40h]

  LODWORD(v1099) = (_DWORD)this;
  v1280 = __readfsqword(0x28u);
  v1262[0] = &v1263;
  v1262[1] = 0;
  v1263 = 0;
  v1264[0] = &v1265;
  v1264[1] = 0;
  v1265 = 0;
  v1154 = (ida_mcp::mcp::ToolDefinition *)v1262;
  v1266 = 0;
  v1267 = 0;
  v1268 = 0;
  v1269 = 0;
  std::string::_M_replace();
  std::string::assign((__int64)v1264, "Get loaded database info");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1245);
  *((_QWORD *)&v1246 + 1) = 0;
  v1114 = &v1247;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1248 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1270,
    (const __m128i *)&v1245);
  v1272.m128i_i64[0] = 0;
  LOBYTE(v1249) = 0;
  *(_QWORD *)&v1250 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1249) = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "properties");
  *(_QWORD *)(v2 + 8) = 10;
  v1250 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v3 = _mm_load_si128(&v1169);
  v1252 = 0;
  v1251 = v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1272.m128i_i64[1],
    (const __m128i *)&v1249);
  v1274 = 0;
  LOBYTE(v1256) = 0;
  v1257.m256i_i64[0] = 0;
  v1122 = &v1257;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1256) = 3;
  v4 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v4, "required", v5, v6, v7, v8, v500, (int)&v1245, v735);
  v1113 = &v1170;
  *(_OWORD *)v1257.m256i_i8 = (unsigned __int64)v4;
  v1098 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v9 = _mm_load_si128(&v1170);
  v1258 = 0;
  *(__m128i *)&v1257.m256i_u64[2] = v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1275,
    (const __m128i *)&v1256);
  v1276 = 0;
  LOBYTE(v1171) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1171,
    (__int64)&v1270,
    3,
    v10,
    v11,
    v12,
    v501,
    v618,
    v736,
    v852,
    v934,
    v1016,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)&v1171,
    (int)v1104,
    (__int64)v1275);
  v13 = v1266;
  v14 = (__int64 (__fastcall **)(int))&v1277;
  v15 = v1172;
  v1266 = v1171;
  LOBYTE(v1171) = v13;
  v1172 = v1267;
  v1267 = v15;
  v1104 = &v1172;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v14 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v14 != &v1270 );
  v1130 = &v1257.m256i_i64[3];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1111 = &v1251.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1102 = &v1247.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v1098);
  v1271 = 0;
  v1270 = ida_mcp::tools::database::get_database_info;
  v1272 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1272.m128i_i64[0] )
    ((void (__fastcall *)(__int64 (__fastcall **)(int), __int64 (__fastcall **)(int), __int64))v1272.m128i_i64[0])(
      &v1270,
      &v1270,
      3);
  v1271 = 0;
  v1108 = (__int64 (__fastcall *)(int))&v1272;
  v1270 = (__int64 (__fastcall *)(int))&v1272;
  v1272.m128i_i8[0] = 0;
  v1273 = v1105;
  v1274 = 0;
  LOBYTE(v1275[0]) = 0;
  LOBYTE(v1276) = 0;
  v1277 = 0;
  v1278 = 0;
  v1279 = 0;
  std::string::assign((__int64)&v1270, "save_database");
  v1109 = &v1273;
  std::string::assign((__int64)&v1273, "Save the current database");
  v1119 = (__m128i *)&v1204;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1204);
  v1206 = 0;
  v1148 = &v1207;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1209 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1256,
    v1119);
  v1257.m256i_i64[1] = 0;
  LOBYTE(v1249) = 0;
  *(_QWORD *)&v1250 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1249) = 3;
  v17 = operator new(0x20u);
  *(_QWORD *)v17 = v17 + 16;
  strcpy((char *)(v17 + 16), "properties");
  *(_QWORD *)(v17 + 8) = 10;
  v1224 = 0;
  *(_QWORD *)&v1225 = 0;
  v1121 = &v1225;
  v1250 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1224 = 3;
  v18 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v18, "outfile", v19, v20, v21, v22, v502, v619, (__int64)&v1246);
  v1120 = (__m128i *)&v1210;
  v1225 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1210);
  v1212 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1214 + 1) = 0;
  v1116 = (__m128i *)&v1219;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1219,
    v1120);
  *((_QWORD *)&v1220 + 1) = 0;
  v1112 = (__m128i *)&v1215;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1215);
  *((_QWORD *)&v1216 + 1) = 0;
  LOBYTE(v1217) = 0;
  *(_QWORD *)&v1218 = 0;
  v1133 = &v1218;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1217) = 3;
  v23 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v23,
    "Output file path (optional, defaults to current)",
    v24,
    v25,
    v26,
    v27,
    v503,
    v620,
    v737);
  v1149 = &v1221;
  v1218 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1221,
    v1112);
  v1223 = 0;
  v1150 = &v1226;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1226,
    v1116);
  *((_QWORD *)&v1227 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v621,
    (const __m128i *)&v1224);
  *((_QWORD *)&v1246 + 1) = 0;
  v1240 = 0;
  *(_QWORD *)&v1241 = 0;
  v1101 = &v1241;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1240 = 3;
  v28 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v28, "flags", v29, v30, v31, v32, v504, (int)v621, v738);
  v1241 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1228);
  v1229 = 0;
  v1151 = &v1230;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1231 + 1) = 0;
  v1100 = (__m128i *)&v1236;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1236,
    &v1228);
  *((_QWORD *)&v1237 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1232);
  v1233 = 0;
  LOBYTE(v1234) = 0;
  *(_QWORD *)&v1235 = 0;
  v1106 = &v1235;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1234) = 3;
  v33 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v33,
    "Save flags: DBFL_KILL=1, DBFL_COMP=2, DBFL_BAK=4, DBFL_TEMP=8 (optional)",
    v34,
    v35,
    v36,
    v37,
    v505,
    v622,
    v739);
  v1132 = &v1238;
  v1235 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1238,
    &v1232);
  *((_QWORD *)&v1239 + 1) = 0;
  v1131 = &v1242;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1242,
    v1100);
  v1244 = 0;
  v1115 = &v1240;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1114,
    (const __m128i *)&v1240);
  v1248 = 0;
  v1152 = &v1251;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1251,
    v623);
  v1252 = 0;
  v1107 = &v1257.m256i_i64[2];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1257.m256i_i64[2],
    (const __m128i *)&v1249);
  v1258 = 0;
  LOBYTE(v1171) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1103,
    (const __m128i *)&v1256);
  v38 = v1276;
  LOBYTE(v1276) = v1171;
  v39 = v1277;
  LOBYTE(v1171) = v38;
  v1277 = v1172;
  v1172 = v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1129 = &v1243;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1125 = &v1239;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1118 = &v1237;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1128 = &v1232.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1110 = &v1231;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1127 = &v1228.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1124 = &v1227;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1147 = &v1222;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1117 = &v1220;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1123 = &v1216;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1126 = &v1214;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1146 = &v1211;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1145 = &v1208;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1144 = &v1205;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v40 = _mm_load_si128((const __m128i *)&v1098);
  v1257.m256i_i64[0] = 0;
  v1256 = ida_mcp::tools::database::handle_save_database;
  *(__m128i *)&v1257.m256i_u64[1] = v40;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1257.m256i_i64[1] )
    ((void (__fastcall *)(void **, void **, __int64))v1257.m256i_i64[1])(&v1256, &v1256, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1270);
  v1271 = 0;
  v1270 = v1108;
  v1272.m128i_i8[0] = 0;
  v1273 = v1105;
  v1274 = 0;
  LOBYTE(v1275[0]) = 0;
  LOBYTE(v1276) = 0;
  v1277 = 0;
  v1278 = 0;
  v1279 = 0;
  std::string::assign((__int64)&v1270, "auto_wait");
  std::string::assign((__int64)v1109, "Wait for auto-analysis to complete");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v623);
  *((_QWORD *)&v1246 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1248 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1256,
    v623);
  v1257.m256i_i64[1] = 0;
  LOBYTE(v1249) = 0;
  *(_QWORD *)&v1250 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1249) = 3;
  v41 = operator new(0x20u);
  *(_QWORD *)v41 = v41 + 16;
  strcpy((char *)(v41 + 16), "properties");
  *(_QWORD *)(v41 + 8) = 10;
  v1250 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v42 = _mm_load_si128(&v1170);
  v1252 = 0;
  v1251 = v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1107,
    (const __m128i *)&v1249);
  v1258 = 0;
  LOBYTE(v1171) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1103,
    (const __m128i *)&v1256);
  v43 = v1276;
  LOBYTE(v1276) = v1171;
  v44 = v1277;
  LOBYTE(v1171) = v43;
  v1277 = v1172;
  v1172 = v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v45 = _mm_load_si128((const __m128i *)&v1098);
  v1257.m256i_i64[0] = 0;
  v1256 = ida_mcp::tools::database::handle_auto_wait;
  *(__m128i *)&v1257.m256i_u64[1] = v45;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1257.m256i_i64[1] )
    ((void (__fastcall *)(void **, void **, __int64))v1257.m256i_i64[1])(&v1256, &v1256, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1270);
  v1271 = 0;
  v1270 = v1108;
  v1272.m128i_i8[0] = 0;
  v1273 = v1105;
  v1274 = 0;
  LOBYTE(v1275[0]) = 0;
  LOBYTE(v1276) = 0;
  v1277 = 0;
  v1278 = 0;
  v1279 = 0;
  std::string::assign((__int64)&v1270, "get_auto_state");
  std::string::assign((__int64)v1109, "Get current auto-analysis state");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v623);
  *((_QWORD *)&v1246 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1248 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1256,
    (__int64)v623,
    2,
    v46,
    v47,
    v48,
    v506,
    (__int64)v623,
    v740,
    (int)&v1228,
    (int)&v1232,
    (int)&v1224,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1257.m256i_i64[1] = 0;
  LOBYTE(v1249) = 0;
  *(_QWORD *)&v1250 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1249) = 3;
  v49 = operator new(0x20u);
  *(_QWORD *)v49 = v49 + 16;
  strcpy((char *)(v49 + 16), "properties");
  *(_QWORD *)(v49 + 8) = 10;
  v1250 = (unsigned __int64)v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v50 = _mm_load_si128(&v1170);
  v1252 = 0;
  v1251 = v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1107,
    (__int64)&v1249,
    2,
    v51,
    v52,
    v53,
    v507,
    v624,
    v741,
    v853,
    v935,
    v1017,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1258 = 0;
  LOBYTE(v1171) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1103,
    (__int64)&v1256,
    2,
    v54,
    v55,
    v56,
    v508,
    v625,
    v742,
    v854,
    v936,
    v1018,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v57 = v1276;
  LOBYTE(v1276) = v1171;
  v58 = v1277;
  LOBYTE(v1171) = v57;
  v1277 = v1172;
  v1172 = v58;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v59 = _mm_load_si128((const __m128i *)&v1098);
  v1257.m256i_i64[0] = 0;
  v1256 = ida_mcp::tools::database::handle_get_auto_state;
  *(__m128i *)&v1257.m256i_u64[1] = v59;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1257.m256i_i64[1] )
    ((void (__fastcall *)(void **, void **, __int64))v1257.m256i_i64[1])(&v1256, &v1256, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1270);
  v1271 = 0;
  v1270 = v1108;
  v1272.m128i_i8[0] = 0;
  v1273 = v1105;
  v1274 = 0;
  LOBYTE(v1275[0]) = 0;
  LOBYTE(v1276) = 0;
  v1277 = 0;
  v1278 = 0;
  v1279 = 0;
  std::string::assign((__int64)&v1270, "is_trusted_idb");
  std::string::assign((__int64)v1109, "Check if database is trusted");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v626);
  *((_QWORD *)&v1246 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1248 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1256,
    (__int64)v626,
    2,
    v60,
    v61,
    v62,
    v509,
    (__int64)v626,
    v743,
    v855,
    v937,
    v1019,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1257.m256i_i64[1] = 0;
  LOBYTE(v1249) = 0;
  *(_QWORD *)&v1250 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1249) = 3;
  v63 = operator new(0x20u);
  *(_QWORD *)(v63 + 8) = 10;
  *(_QWORD *)v63 = v63 + 16;
  strcpy((char *)(v63 + 16), "properties");
  v1250 = (unsigned __int64)v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v64 = _mm_load_si128(&v1170);
  v1252 = 0;
  v1251 = v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1107,
    (__int64)&v1249,
    2,
    v65,
    v66,
    v67,
    v510,
    v627,
    v744,
    v856,
    v938,
    v1020,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1258 = 0;
  LOBYTE(v1171) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1103,
    (__int64)&v1256,
    2,
    v68,
    v69,
    v70,
    v511,
    v628,
    v745,
    v857,
    v939,
    v1021,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v71 = v1276;
  LOBYTE(v1276) = v1171;
  v72 = v1277;
  LOBYTE(v1171) = v71;
  v1277 = v1172;
  v1172 = v72;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v73 = _mm_load_si128((const __m128i *)&v1098);
  v1257.m256i_i64[0] = 0;
  v1256 = ida_mcp::tools::database::handle_is_trusted_idb;
  *(__m128i *)&v1257.m256i_u64[1] = v73;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1257.m256i_i64[1] )
    ((void (__fastcall *)(void **, void **, __int64))v1257.m256i_i64[1])(&v1256, &v1256, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1270);
  v1271 = 0;
  v1270 = v1108;
  v1272.m128i_i8[0] = 0;
  v1273 = v1105;
  v1274 = 0;
  LOBYTE(v1275[0]) = 0;
  LOBYTE(v1276) = 0;
  v1277 = 0;
  v1278 = 0;
  v1279 = 0;
  std::string::assign((__int64)&v1270, "get_database_flag");
  std::string::assign((__int64)v1109, "Get database flag value");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1022);
  *((_QWORD *)&v1225 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1227 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1256,
    (__int64)v1022,
    2,
    v74,
    v75,
    v76,
    v512,
    v629,
    v746,
    v858,
    v940,
    (int)v1022,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1257.m256i_i64[1] = 0;
  LOBYTE(v1245) = 0;
  *(_QWORD *)&v1246 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1245) = 3;
  v77 = operator new(0x20u);
  *(_QWORD *)v77 = v77 + 16;
  strcpy((char *)(v77 + 16), "properties");
  *(_QWORD *)(v77 + 8) = 10;
  v1240 = 0;
  *(_QWORD *)&v1241 = 0;
  v1246 = (unsigned __int64)v77;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1240 = 3;
  v78 = operator new(0x20u);
  strcpy((char *)(v78 + 16), "flag");
  *(_QWORD *)v78 = v78 + 16;
  *(_QWORD *)(v78 + 8) = 4;
  v1241 = (unsigned __int64)v78;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v859);
  v1229 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1231 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1100,
    (__int64)v859,
    2,
    v79,
    v80,
    v81,
    v513,
    v630,
    v747,
    (int)v859,
    v941,
    v1023,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1237 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v942);
  v1233 = 0;
  LOBYTE(v1234) = 0;
  *(_QWORD *)&v1235 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1234) = 3;
  v82 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v82,
    "Flag to check: DBFL_KILL=1, DBFL_COMP=2, DBFL_BAK=4, DBFL_TEMP=8",
    v83,
    v84,
    v85,
    v86,
    v514,
    v631,
    v748);
  v1235 = (unsigned __int64)v82;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1132,
    (__int64)v942,
    2,
    v87,
    v88,
    v89,
    v515,
    v632,
    v749,
    v860,
    (int)v942,
    v1024,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1239 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1131,
    (__int64)v1100,
    2,
    v90,
    v91,
    v92,
    v516,
    v633,
    v750,
    v861,
    v943,
    v1025,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1244 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1116,
    (__int64)v1115,
    2,
    v93,
    v94,
    v95,
    v517,
    v634,
    v751,
    v862,
    v944,
    v1026,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1220 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1114,
    (__int64)v1116,
    1,
    v96,
    v97,
    v98,
    v518,
    v635,
    v752,
    v863,
    v945,
    v1027,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1248 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1107,
    v636,
    2,
    v99,
    v100,
    v101,
    v519,
    v636,
    v753,
    v864,
    v946,
    v1028,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1258 = 0;
  LOBYTE(v1249) = 0;
  *(_QWORD *)&v1250 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1249) = 3;
  v102 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v102, "required", v103, v104, v105, v106, v520, v637, v754);
  LOBYTE(v1215) = 0;
  *(_QWORD *)&v1216 = 0;
  v1250 = (unsigned __int64)v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1215) = 3;
  v107 = operator new(0x20u);
  *(_QWORD *)v107 = v107 + 16;
  strcpy((char *)(v107 + 16), "flag");
  *(_QWORD *)(v107 + 8) = 4;
  v1216 = (unsigned __int64)v107;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v108 = _mm_load_si128(&v1170);
  v1136 = v1259;
  v1252 = 0;
  v1251 = v108;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1259,
    (__int64)&v1249,
    2,
    v109,
    v110,
    v111,
    v521,
    v638,
    v755,
    v865,
    v947,
    v1029,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1260 = 0;
  LOBYTE(v1171) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1103,
    (__int64)&v1256,
    3,
    v112,
    v113,
    v114,
    v522,
    v639,
    v756,
    v866,
    v948,
    v1030,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v115 = v1276;
  v116 = (void **)&v1261;
  LOBYTE(v1276) = v1171;
  v117 = v1277;
  LOBYTE(v1171) = v115;
  v1277 = v1172;
  v1172 = v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v116 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v116 != &v1256 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = _mm_load_si128((const __m128i *)&v1098);
  v1257.m256i_i64[0] = 0;
  v1256 = ida_mcp::tools::database::handle_get_database_flag;
  *(__m128i *)&v1257.m256i_u64[1] = v118;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1257.m256i_i64[1] )
    ((void (__fastcall *)(void **, void **, __int64))v1257.m256i_i64[1])(&v1256, &v1256, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1270);
  v1271 = 0;
  v1270 = v1108;
  v1272.m128i_i8[0] = 0;
  v1273 = v1105;
  v1274 = 0;
  LOBYTE(v1275[0]) = 0;
  LOBYTE(v1276) = 0;
  v1277 = 0;
  v1278 = 0;
  v1279 = 0;
  std::string::assign((__int64)&v1270, "set_database_flag");
  std::string::assign((__int64)v1109, "Set or clear database flag");
  v1137 = &v1199;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1199);
  *((_QWORD *)&v1200 + 1) = 0;
  v1155 = &v1201;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1203 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1256,
    (__int64)v1137,
    2,
    v119,
    v120,
    v121,
    v523,
    v640,
    v757,
    v867,
    v949,
    v1031,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1257.m256i_i64[1] = 0;
  LOBYTE(v1245) = 0;
  *(_QWORD *)&v1246 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1245) = 3;
  v122 = operator new(0x20u);
  *(_QWORD *)v122 = v122 + 16;
  strcpy((char *)(v122 + 16), "properties");
  *(_QWORD *)(v122 + 8) = 10;
  LOBYTE(v1219) = 0;
  *(_QWORD *)&v1220 = 0;
  v1246 = (unsigned __int64)v122;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1219) = 3;
  v123 = operator new(0x20u);
  strcpy((char *)(v123 + 16), "flag");
  v124 = (__int64 *)v1119;
  *(_QWORD *)v123 = v123 + 16;
  *(_QWORD *)(v123 + 8) = 4;
  v1220 = (unsigned __int64)v123;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v124);
  v1206 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1209 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1112,
    (__int64)v1119,
    2,
    v125,
    v126,
    v127,
    v524,
    v641,
    v758,
    v868,
    v950,
    v1032,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1216 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1120);
  v1212 = 0;
  v1213 = 0;
  *(_QWORD *)&v1214 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1213 = 3;
  v128 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v128,
    "Flag to set: DBFL_KILL=1, DBFL_COMP=2, DBFL_BAK=4, DBFL_TEMP=8",
    v129,
    v130,
    v131,
    v132,
    v525,
    v642,
    v759);
  v1156 = &v1217;
  v1214 = (unsigned __int64)v128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1217,
    (__int64)v1120,
    2,
    v133,
    v134,
    v135,
    v526,
    v643,
    v760,
    v869,
    v951,
    v1033,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1218 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1149,
    (__int64)v1112,
    2,
    v136,
    v137,
    v138,
    v527,
    v644,
    v761,
    v870,
    v952,
    v1034,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1223 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1115,
    (__int64)v1116,
    2,
    v139,
    v140,
    v141,
    v528,
    v645,
    v762,
    v871,
    v953,
    v1035,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1241 + 1) = 0;
  LOBYTE(v1236) = 0;
  *(_QWORD *)&v1237 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1236) = 3;
  v142 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v142, "value", v143, v144, v145, v146, v529, v646, v763);
  v1237 = (unsigned __int64)v142;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1036);
  *((_QWORD *)&v1225 + 1) = 0;
  LOBYTE(v1226) = 0;
  *(_QWORD *)&v1227 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1226) = 3;
  v147 = operator new(0x20u);
  strcpy((char *)(v147 + 16), "boolean");
  *(_QWORD *)v147 = v147 + 16;
  *(_QWORD *)(v147 + 8) = 7;
  v1227 = (unsigned __int64)v147;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v954,
    (__int64)v1036,
    2,
    v148,
    v149,
    v150,
    v530,
    v647,
    v764,
    v872,
    (int)v954,
    (int)v1036,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1233 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v873);
  v1229 = 0;
  v1230 = 0;
  *(_QWORD *)&v1231 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1230 = 3;
  v151 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v151,
    "Set (true) or clear (false) the flag",
    v152,
    v153,
    v154,
    v155,
    v531,
    v648,
    v765);
  v1157 = &v1234;
  v1231 = (unsigned __int64)v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1234,
    (__int64)v873,
    2,
    v156,
    v157,
    v158,
    v532,
    v649,
    v766,
    (int)v873,
    v955,
    v1037,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1235 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1132,
    v956,
    2,
    v159,
    v160,
    v161,
    v533,
    v650,
    v767,
    v874,
    v956,
    v1038,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1239 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1131,
    (__int64)v1100,
    2,
    v162,
    v163,
    v164,
    v534,
    v651,
    v768,
    v875,
    v957,
    v1039,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1244 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1114,
    (__int64)v1115,
    2,
    v165,
    v166,
    v167,
    v535,
    v652,
    v769,
    v876,
    v958,
    v1040,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1248 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1107,
    v653,
    2,
    v168,
    v169,
    v170,
    v536,
    v653,
    v770,
    v877,
    v959,
    v1041,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1258 = 0;
  LOBYTE(v1249) = 0;
  *(_QWORD *)&v1250 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1249) = 3;
  v171 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v171, "required", v172, v173, v174, v175, v537, v654, v771);
  v1194 = 0;
  v1143 = &v1195;
  *(_QWORD *)&v1195 = 0;
  v1250 = (unsigned __int64)v171;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1194 = 3;
  v176 = operator new(0x20u);
  *(_QWORD *)v176 = v176 + 16;
  strcpy((char *)(v176 + 16), "flag");
  *(_QWORD *)(v176 + 8) = 4;
  v1134 = &v1194;
  v1195 = (unsigned __int64)v176;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v177 = _mm_load_si128(&v1170);
  v1252 = 0;
  v1251 = v177;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1136,
    (__int64)&v1249,
    2,
    v178,
    v179,
    v180,
    v538,
    v655,
    v772,
    v878,
    v960,
    v1042,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1260 = 0;
  LOBYTE(v1171) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1103,
    (__int64)&v1256,
    3,
    v181,
    v182,
    v183,
    v539,
    v656,
    v773,
    v879,
    v961,
    v1043,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v184 = v1276;
  v185 = (void **)&v1261;
  LOBYTE(v1276) = v1171;
  v186 = v1277;
  LOBYTE(v1171) = v184;
  v1277 = v1172;
  v1172 = v186;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v185 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v185 != &v1256 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1153 = &v1202;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1135 = &v1200;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v187 = _mm_load_si128((const __m128i *)&v1098);
  v1257.m256i_i64[0] = 0;
  v1256 = ida_mcp::tools::database::handle_set_database_flag;
  *(__m128i *)&v1257.m256i_u64[1] = v187;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1257.m256i_i64[1] )
    ((void (__fastcall *)(void **, void **, __int64))v1257.m256i_i64[1])(&v1256, &v1256, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1270);
  v1271 = 0;
  v1270 = v1108;
  v1272.m128i_i8[0] = 0;
  v1273 = v1105;
  v1274 = 0;
  LOBYTE(v1275[0]) = 0;
  LOBYTE(v1276) = 0;
  v1277 = 0;
  v1278 = 0;
  v1279 = 0;
  std::string::assign((__int64)&v1270, "get_path");
  std::string::assign((__int64)v1109, "Get various file paths");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1044);
  *((_QWORD *)&v1225 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1227 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1256,
    (__int64)v1044,
    2,
    v188,
    v189,
    v190,
    v540,
    v657,
    v774,
    v880,
    v962,
    (int)v1044,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1257.m256i_i64[1] = 0;
  LOBYTE(v1245) = 0;
  *(_QWORD *)&v1246 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1245) = 3;
  v191 = operator new(0x20u);
  *(_QWORD *)v191 = v191 + 16;
  strcpy((char *)(v191 + 16), "properties");
  *(_QWORD *)(v191 + 8) = 10;
  v1240 = 0;
  *(_QWORD *)&v1241 = 0;
  v1246 = (unsigned __int64)v191;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1240 = 3;
  v192 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v192, "path_type", v193, v194, v195, v196, v541, v658, v775);
  v1241 = (unsigned __int64)v192;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v881);
  v1229 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1231 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1100,
    (__int64)v881,
    2,
    v197,
    v198,
    v199,
    v542,
    v659,
    v776,
    (int)v881,
    v963,
    v1045,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1237 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v964);
  v1233 = 0;
  LOBYTE(v1234) = 0;
  *(_QWORD *)&v1235 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1234) = 3;
  v200 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v200,
    "Path type: 0=CMD (command line), 1=IDB (database file), 2=ID0",
    v201,
    v202,
    v203,
    v204,
    v543,
    v660,
    v777);
  v1235 = (unsigned __int64)v200;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1132,
    (__int64)v964,
    2,
    v205,
    v206,
    v207,
    v544,
    v661,
    v778,
    v882,
    (int)v964,
    v1046,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1239 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1131,
    (__int64)v1100,
    2,
    v208,
    v209,
    v210,
    v545,
    v662,
    v779,
    v883,
    v965,
    v1047,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1244 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1116,
    (__int64)v1115,
    2,
    v211,
    v212,
    v213,
    v546,
    v663,
    v780,
    v884,
    v966,
    v1048,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1220 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1114,
    (__int64)v1116,
    1,
    v214,
    v215,
    v216,
    v547,
    v664,
    v781,
    v885,
    v967,
    v1049,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1248 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1107,
    v665,
    2,
    v217,
    v218,
    v219,
    v548,
    v665,
    v782,
    v886,
    v968,
    v1050,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1258 = 0;
  LOBYTE(v1249) = 0;
  *(_QWORD *)&v1250 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1249) = 3;
  v220 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v220, "required", v221, v222, v223, v224, v549, v666, v783);
  LOBYTE(v1215) = 0;
  *(_QWORD *)&v1216 = 0;
  v1250 = (unsigned __int64)v220;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1215) = 3;
  v225 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v225, "path_type", v226, v227, v228, v229, v550, v667, v784);
  v1216 = (unsigned __int64)v225;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v230 = _mm_load_si128(&v1170);
  v1252 = 0;
  v1251 = v230;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1136,
    (__int64)&v1249,
    2,
    v231,
    v232,
    v233,
    v551,
    v668,
    v785,
    v887,
    v969,
    v1051,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1260 = 0;
  LOBYTE(v1171) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1103,
    (__int64)&v1256,
    3,
    v234,
    v235,
    v236,
    v552,
    v669,
    v786,
    v888,
    v970,
    v1052,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v237 = v1276;
  v238 = (void **)&v1261;
  LOBYTE(v1276) = v1171;
  v239 = v1277;
  LOBYTE(v1171) = v237;
  v1277 = v1172;
  v1172 = v239;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v238 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v238 != &v1256 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v240 = _mm_load_si128((const __m128i *)&v1098);
  v1257.m256i_i64[0] = 0;
  v1256 = ida_mcp::tools::database::handle_get_path;
  *(__m128i *)&v1257.m256i_u64[1] = v240;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1257.m256i_i64[1] )
    ((void (__fastcall *)(void **, void **, __int64))v1257.m256i_i64[1])(&v1256, &v1256, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1270);
  v1271 = 0;
  v1270 = v1108;
  v1272.m128i_i8[0] = 0;
  v1273 = v1105;
  v1274 = 0;
  LOBYTE(v1275[0]) = 0;
  LOBYTE(v1276) = 0;
  v1277 = 0;
  v1278 = 0;
  v1279 = 0;
  std::string::assign((__int64)&v1270, "plan_and_wait");
  std::string::assign((__int64)v1109, "Plan analysis and wait for completion");
  v1139 = &v1177;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1177);
  v1179 = 0;
  v1165 = &v1180;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1182 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1256,
    (__int64)v1139,
    2,
    v241,
    v242,
    v243,
    v553,
    v670,
    v787,
    v889,
    v971,
    v1053,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1257.m256i_i64[1] = 0;
  v1240 = 0;
  *(_QWORD *)&v1241 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1240 = 3;
  v244 = operator new(0x20u);
  strcpy((char *)(v244 + 16), "properties");
  *(_QWORD *)v244 = v244 + 16;
  *(_QWORD *)(v244 + 8) = 10;
  LOBYTE(v1199) = 0;
  *(_QWORD *)&v1200 = 0;
  v1241 = (unsigned __int64)v244;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1199) = 3;
  v245 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v245, "start_address", v246, v247, v248, v249, v554, v671, v788);
  v1140 = &v1183;
  v1200 = (unsigned __int64)v245;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1183);
  v1185 = 0;
  v1166 = &v1186;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1188 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1134,
    (__int64)v1140,
    2,
    v250,
    v251,
    v252,
    v555,
    v672,
    v789,
    v890,
    v972,
    v1054,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1195 + 1) = 0;
  v1141 = &v1189;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1189);
  v1191 = 0;
  v1192 = 0;
  *(_QWORD *)&v1193 = 0;
  v1142 = &v1193;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1192 = 3;
  v253 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v253,
    "Start address in hex",
    v254,
    v255,
    v256,
    v257,
    v556,
    v673,
    v790);
  v1167 = &v1196;
  v1193 = (unsigned __int64)v253;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1196,
    (__int64)v1141,
    2,
    v258,
    v259,
    v260,
    v557,
    v674,
    v791,
    v891,
    v973,
    v1055,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1198 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1155,
    (__int64)v1134,
    2,
    v261,
    v262,
    v263,
    v558,
    v675,
    v792,
    v892,
    v974,
    v1056,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1203 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1249,
    (__int64)v1137,
    2,
    v264,
    v265,
    v266,
    v559,
    v676,
    v793,
    v893,
    v975,
    v1057,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1250 + 1) = 0;
  LOBYTE(v1219) = 0;
  *(_QWORD *)&v1220 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1219) = 3;
  v267 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v267, "end_address", v268, v269, v270, v271, v560, v677, v794);
  v1220 = (unsigned __int64)v267;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1119);
  v1206 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1209 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1112,
    (__int64)v1119,
    2,
    v272,
    v273,
    v274,
    v561,
    v678,
    v795,
    v894,
    v976,
    v1058,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1216 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1120);
  v1212 = 0;
  v1213 = 0;
  *(_QWORD *)&v1214 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1213 = 3;
  v275 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v275, "End address in hex", v276, v277, v278, v279, v562, v679, v796);
  v1214 = (unsigned __int64)v275;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1156,
    (__int64)v1120,
    2,
    v280,
    v281,
    v282,
    v563,
    v680,
    v797,
    v895,
    v977,
    v1059,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1218 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1149,
    (__int64)v1112,
    2,
    v283,
    v284,
    v285,
    v564,
    v681,
    v798,
    v896,
    v978,
    v1060,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1223 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1152,
    (__int64)v1116,
    2,
    v286,
    v287,
    v288,
    v565,
    v682,
    v799,
    v897,
    v979,
    v1061,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1252 = 0;
  LOBYTE(v1236) = 0;
  *(_QWORD *)&v1237 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1236) = 3;
  v289 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v289, "final_pass", v290, v291, v292, v293, v566, v683, v800);
  v1237 = (unsigned __int64)v289;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1062);
  *((_QWORD *)&v1225 + 1) = 0;
  LOBYTE(v1226) = 0;
  *(_QWORD *)&v1227 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1226) = 3;
  v294 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v294, "boolean", v295, v296, v297, v298, v567, v684, v801);
  v1227 = (unsigned __int64)v294;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v980,
    (__int64)v1062,
    2,
    v299,
    v300,
    v301,
    v568,
    v685,
    v802,
    v898,
    (int)v980,
    (int)v1062,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1233 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v899);
  v1229 = 0;
  v1230 = 0;
  *(_QWORD *)&v1231 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1230 = 3;
  v302 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v302,
    "Perform final pass (default: true)",
    v303,
    v304,
    v305,
    v306,
    v569,
    v686,
    v803);
  v1231 = (unsigned __int64)v302;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1157,
    (__int64)v899,
    2,
    v307,
    v308,
    v309,
    v570,
    v687,
    v804,
    (int)v899,
    v981,
    v1063,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1235 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1132,
    v982,
    2,
    v310,
    v311,
    v312,
    v571,
    v688,
    v805,
    v900,
    v982,
    v1064,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1239 + 1) = 0;
  v1168 = v1253;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    (__int64)v1100,
    2,
    v313,
    v314,
    v315,
    v572,
    v689,
    v806,
    v901,
    v983,
    v1065,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1254 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1131,
    (__int64)&v1249,
    3,
    v316,
    v317,
    v318,
    v573,
    v690,
    v807,
    v902,
    v984,
    v1066,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1244 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1107,
    (__int64)v1115,
    2,
    v319,
    v320,
    v321,
    v574,
    v691,
    v808,
    v903,
    v985,
    v1067,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1258 = 0;
  LOBYTE(v1245) = 0;
  *(_QWORD *)&v1246 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1245) = 3;
  v322 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v322, "required", v323, v324, v325, v326, v575, v692, v809);
  v1173 = 0;
  v1246 = (unsigned __int64)v322;
  *(_QWORD *)&v1174 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1173 = 3;
  v327 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v327, "start_address", v328, v329, v330, v331, v576, v693, v810);
  v1175 = 0;
  v1138 = &v1176;
  *(_QWORD *)&v1176 = 0;
  v1174 = (unsigned __int64)v327;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1175 = 3;
  v332 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v332, "end_address", v333, v334, v335, v336, v577, v694, v811);
  v1158 = &v1173;
  v1176 = (unsigned __int64)v332;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v337 = _mm_load_si128(&v1170);
  v1248 = 0;
  v1247 = v337;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1136,
    v695,
    2,
    v338,
    v339,
    v340,
    v578,
    v695,
    v812,
    v904,
    v986,
    v1068,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1260 = 0;
  LOBYTE(v1171) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1103,
    (__int64)&v1256,
    3,
    v341,
    v342,
    v343,
    v579,
    v696,
    v813,
    v905,
    v987,
    v1069,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v344 = v1276;
  v345 = (void **)&v1261;
  LOBYTE(v1276) = v1171;
  v346 = v1277;
  LOBYTE(v1171) = v344;
  v1277 = v1172;
  v1172 = v346;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v345 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v345 != &v1256 );
  v347 = (__int64 *)&v1255;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v347 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v347 != &v1249 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1164 = &v1197;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1163 = &v1190;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1162 = &v1187;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1161 = &v1184;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1160 = &v1181;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1159 = &v1178;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v348 = _mm_load_si128((const __m128i *)&v1098);
  v1257.m256i_i64[0] = 0;
  v1256 = ida_mcp::tools::database::handle_plan_and_wait;
  *(__m128i *)&v1257.m256i_u64[1] = v348;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1257.m256i_i64[1] )
    ((void (__fastcall *)(void **, void **, __int64))v1257.m256i_i64[1])(&v1256, &v1256, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1270);
  v1271 = 0;
  v1270 = v1108;
  v1272.m128i_i8[0] = 0;
  v1273 = v1105;
  v1274 = 0;
  LOBYTE(v1275[0]) = 0;
  LOBYTE(v1276) = 0;
  v1277 = 0;
  v1278 = 0;
  v1279 = 0;
  std::string::assign((__int64)&v1270, "auto_mark_range");
  std::string::assign((__int64)v1109, "Mark address range for auto-analysis");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1139);
  v1179 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1182 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1256,
    (__int64)v1139,
    2,
    v349,
    v350,
    v351,
    v580,
    v697,
    v814,
    v906,
    v988,
    v1070,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1257.m256i_i64[1] = 0;
  v1240 = 0;
  *(_QWORD *)&v1241 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1240 = 3;
  v352 = operator new(0x20u);
  *(_QWORD *)v352 = v352 + 16;
  strcpy((char *)(v352 + 16), "properties");
  *(_QWORD *)(v352 + 8) = 10;
  LOBYTE(v1199) = 0;
  *(_QWORD *)&v1200 = 0;
  v1241 = (unsigned __int64)v352;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1199) = 3;
  v353 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v353, "start_address", v354, v355, v356, v357, v581, v698, v815);
  v1200 = (unsigned __int64)v353;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1140);
  v1185 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1188 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1134,
    (__int64)v1140,
    2,
    v358,
    v359,
    v360,
    v582,
    v699,
    v816,
    v907,
    v989,
    v1071,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1195 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1141);
  v1191 = 0;
  v1192 = 0;
  *(_QWORD *)&v1193 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1192 = 3;
  v361 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v361,
    "Start address in hex",
    v362,
    v363,
    v364,
    v365,
    v583,
    v700,
    v817);
  v1193 = (unsigned __int64)v361;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1167,
    (__int64)v1141,
    2,
    v366,
    v367,
    v368,
    v584,
    v701,
    v818,
    v908,
    v990,
    v1072,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1198 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1155,
    (__int64)v1134,
    2,
    v369,
    v370,
    v371,
    v585,
    v702,
    v819,
    v909,
    v991,
    v1073,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1203 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1249,
    (__int64)v1137,
    2,
    v372,
    v373,
    v374,
    v586,
    v703,
    v820,
    v910,
    v992,
    v1074,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1250 + 1) = 0;
  LOBYTE(v1219) = 0;
  *(_QWORD *)&v1220 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1219) = 3;
  v375 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v375, "end_address", v376, v377, v378, v379, v587, v704, v821);
  v1220 = (unsigned __int64)v375;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1119);
  v1206 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1209 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1112,
    (__int64)v1119,
    2,
    v380,
    v381,
    v382,
    v588,
    v705,
    v822,
    v911,
    v993,
    v1075,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1216 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1120);
  v1212 = 0;
  v1213 = 0;
  *(_QWORD *)&v1214 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1213 = 3;
  v383 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v383, "End address in hex", v384, v385, v386, v387, v589, v706, v823);
  v1214 = (unsigned __int64)v383;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1156,
    (__int64)v1120,
    2,
    v388,
    v389,
    v390,
    v590,
    v707,
    v824,
    v912,
    v994,
    v1076,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1218 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1149,
    (__int64)v1112,
    2,
    v391,
    v392,
    v393,
    v591,
    v708,
    v825,
    v913,
    v995,
    v1077,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1223 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1152,
    (__int64)v1116,
    2,
    v394,
    v395,
    v396,
    v592,
    v709,
    v826,
    v914,
    v996,
    v1078,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1252 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1100);
  *((_QWORD *)&v1237 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1079);
  *((_QWORD *)&v1225 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1227 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v997,
    (__int64)v1079,
    2,
    v397,
    v398,
    v399,
    v593,
    v710,
    v827,
    v915,
    (int)v997,
    (int)v1079,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1233 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v916);
  v1229 = 0;
  v1230 = 0;
  *(_QWORD *)&v1231 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1230 = 3;
  v400 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v400,
    "Analysis type (default: AU_UNK=1)",
    v401,
    v402,
    v403,
    v404,
    v594,
    v711,
    v828);
  v1231 = (unsigned __int64)v400;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1157,
    (__int64)v916,
    2,
    v405,
    v406,
    v407,
    v595,
    v712,
    v829,
    (int)v916,
    v998,
    v1080,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1235 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1132,
    v999,
    2,
    v408,
    v409,
    v410,
    v596,
    v713,
    v830,
    v917,
    v999,
    v1081,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1239 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1168,
    (__int64)v1100,
    2,
    v411,
    v412,
    v413,
    v597,
    v714,
    v831,
    v918,
    v1000,
    v1082,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1254 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1131,
    (__int64)&v1249,
    3,
    v414,
    v415,
    v416,
    v598,
    v715,
    v832,
    v919,
    v1001,
    v1083,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1244 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1107,
    (__int64)v1115,
    2,
    v417,
    v418,
    v419,
    v599,
    v716,
    v833,
    v920,
    v1002,
    v1084,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1258 = 0;
  LOBYTE(v1245) = 0;
  *(_QWORD *)&v1246 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1245) = 3;
  v420 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v420, "required", v421, v422, v423, v424, v600, v717, v834);
  v1173 = 0;
  *(_QWORD *)&v1174 = 0;
  v1246 = (unsigned __int64)v420;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1173 = 3;
  v425 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v425, "start_address", v426, v427, v428, v429, v601, v718, v835);
  v1175 = 0;
  *(_QWORD *)&v1176 = 0;
  v1174 = (unsigned __int64)v425;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1175 = 3;
  v430 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v430, "end_address", v431, v432, v433, v434, v602, v719, v836);
  v1176 = (unsigned __int64)v430;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v435 = _mm_load_si128(&v1170);
  v1248 = 0;
  v1247 = v435;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1136,
    v720,
    2,
    v436,
    v437,
    v438,
    v603,
    v720,
    v837,
    v921,
    v1003,
    v1085,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1260 = 0;
  LOBYTE(v1171) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1103,
    (__int64)&v1256,
    3,
    v439,
    v440,
    v441,
    v604,
    v721,
    v838,
    v922,
    v1004,
    v1086,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v442 = v1276;
  v443 = (void **)&v1261;
  LOBYTE(v1276) = v1171;
  v444 = v1277;
  LOBYTE(v1171) = v442;
  v1277 = v1172;
  v1172 = v444;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v443 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v443 != &v1256 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v445 = (__int64 *)&v1255;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v445 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v445 != &v1249 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v446 = _mm_load_si128((const __m128i *)&v1098);
  v1257.m256i_i64[0] = 0;
  v1256 = ida_mcp::tools::database::handle_auto_mark_range;
  *(__m128i *)&v1257.m256i_u64[1] = v446;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1257.m256i_i64[1] )
    ((void (__fastcall *)(void **, void **, __int64))v1257.m256i_i64[1])(&v1256, &v1256, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1270);
  v1271 = 0;
  v1270 = v1108;
  v1272.m128i_i8[0] = 0;
  v1273 = v1105;
  v1274 = 0;
  LOBYTE(v1275[0]) = 0;
  LOBYTE(v1276) = 0;
  v1277 = 0;
  v1278 = 0;
  v1279 = 0;
  std::string::assign((__int64)&v1270, "enable_auto");
  std::string::assign((__int64)v1109, "Enable or disable auto-analysis");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v923);
  v1229 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1231 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1256,
    (__int64)v923,
    2,
    v447,
    v448,
    v449,
    v605,
    v722,
    v839,
    (int)v923,
    v1005,
    v1087,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1257.m256i_i64[1] = 0;
  LOBYTE(v1249) = 0;
  *(_QWORD *)&v1250 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1249) = 3;
  v450 = operator new(0x20u);
  *(_QWORD *)v450 = v450 + 16;
  strcpy((char *)(v450 + 16), "properties");
  *(_QWORD *)(v450 + 8) = 10;
  v1250 = (unsigned __int64)v450;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1246 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1006);
  v1233 = 0;
  LOBYTE(v1234) = 0;
  *(_QWORD *)&v1235 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1234) = 3;
  v451 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v451, "boolean", v452, v453, v454, v455, v606, v723, v840);
  v1235 = (unsigned __int64)v451;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1115,
    (__int64)v1006,
    2,
    v456,
    v457,
    v458,
    v607,
    v724,
    v841,
    v924,
    (int)v1006,
    v1088,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1241 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1100);
  *((_QWORD *)&v1237 + 1) = 0;
  LOBYTE(v1238) = 0;
  *(_QWORD *)&v1239 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1238) = 3;
  v459 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v459,
    "Enable (true) or disable (false) auto-analysis",
    v460,
    v461,
    v462,
    v463,
    v608,
    v725,
    v842);
  v1239 = (unsigned __int64)v459;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1131,
    (__int64)v1100,
    2,
    v464,
    v465,
    v466,
    v609,
    v726,
    v843,
    v925,
    v1007,
    v1089,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1244 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1114,
    (__int64)v1115,
    2,
    v467,
    v468,
    v469,
    v610,
    v727,
    v844,
    v926,
    v1008,
    v1090,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1248 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1091,
    v728,
    2,
    v470,
    v471,
    v472,
    v611,
    v728,
    v845,
    v927,
    v1009,
    (int)v1091,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  *((_QWORD *)&v1225 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1152,
    v1092,
    1,
    v473,
    v474,
    v475,
    v612,
    v729,
    v846,
    v928,
    v1010,
    v1092,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1252 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1107,
    (__int64)&v1249,
    2,
    v476,
    v477,
    v478,
    v613,
    v730,
    v847,
    v929,
    v1011,
    v1093,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1258 = 0;
  LOBYTE(v1171) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1103,
    (__int64)&v1256,
    2,
    v479,
    v480,
    v481,
    v614,
    v731,
    v848,
    v930,
    v1012,
    v1094,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v482 = v1276;
  LOBYTE(v1276) = v1171;
  v483 = v1277;
  LOBYTE(v1171) = v482;
  v1277 = v1172;
  v1172 = v483;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v484 = _mm_load_si128((const __m128i *)&v1098);
  v1257.m256i_i64[0] = 0;
  v1256 = ida_mcp::tools::database::handle_enable_auto;
  *(__m128i *)&v1257.m256i_u64[1] = v484;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1257.m256i_i64[1] )
    ((void (__fastcall *)(void **, void **, __int64))v1257.m256i_i64[1])(&v1256, &v1256, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1270);
  v1271 = 0;
  v1270 = v1108;
  v1272.m128i_i8[0] = 0;
  v1273 = v1105;
  v1274 = 0;
  LOBYTE(v1275[0]) = 0;
  LOBYTE(v1276) = 0;
  v1277 = 0;
  v1278 = 0;
  v1279 = 0;
  std::string::assign((__int64)&v1270, "auto_is_ok");
  std::string::assign((__int64)v1109, "Check if auto-analysis is working normally");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v732);
  *((_QWORD *)&v1246 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1248 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1256,
    (__int64)v732,
    2,
    v485,
    v486,
    v487,
    v615,
    (__int64)v732,
    v849,
    v931,
    v1013,
    v1095,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1257.m256i_i64[1] = 0;
  LOBYTE(v1249) = 0;
  *(_QWORD *)&v1250 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1249) = 3;
  v488 = operator new(0x20u);
  *(_QWORD *)v488 = v488 + 16;
  strcpy((char *)(v488 + 16), "properties");
  *(_QWORD *)(v488 + 8) = 10;
  v1250 = (unsigned __int64)v488;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v489 = _mm_load_si128(&v1170);
  v1252 = 0;
  v1251 = v489;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1107,
    (__int64)&v1249,
    2,
    v490,
    v491,
    v492,
    v616,
    v733,
    v850,
    v932,
    v1014,
    v1096,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v1258 = 0;
  LOBYTE(v1171) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1103,
    (__int64)&v1256,
    2,
    v493,
    v494,
    v495,
    v617,
    v734,
    v851,
    v933,
    v1015,
    v1097,
    v1098.m128_i64[0],
    v1098.m128_i32[2],
    v1099,
    (int)v1100,
    (int)v1101,
    (char)v1102,
    (__int64)v1103,
    (int)v1104,
    v1105);
  v496 = v1276;
  LOBYTE(v1276) = v1171;
  v497 = v1277;
  LOBYTE(v1171) = v496;
  v1277 = v1172;
  v1172 = v497;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v498 = _mm_load_si128((const __m128i *)&v1098);
  v1257.m256i_i64[0] = 0;
  v1256 = ida_mcp::tools::database::handle_auto_is_ok;
  *(__m128i *)&v1257.m256i_u64[1] = v498;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1257.m256i_i64[1] )
    ((void (__fastcall *)(void **, void **, __int64))v1257.m256i_i64[1])(&v1256, &v1256, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1270);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition(v1154);
  return v1280 - __readfsqword(0x28u);
}

