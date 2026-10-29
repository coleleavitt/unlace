unsigned __int64 __fastcall ida_mcp::tools::types::register_tools(
        ida_mcp::tools::types *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __m128 v9; // xmm1
  __m128i v10; // xmm0
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // si
  void **v15; // r15
  __int64 v16; // rdx
  __m128i v17; // xmm2
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // si
  void **v30; // r15
  __int64 v31; // rax
  __m128i v32; // xmm3
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __m128i v60; // xmm0
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  char v67; // si
  void **v68; // r15
  __int64 v69; // rax
  __m128i v70; // xmm4
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
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
  __m128i v96; // xmm0
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  char v103; // si
  void **v104; // r15
  __int64 v105; // rax
  __m128i v106; // xmm5
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
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
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rax
  __m128i v132; // xmm0
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  char v139; // si
  void **v140; // r15
  __int64 v141; // rax
  __m128i v142; // xmm6
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rax
  __int64 *v148; // r15
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rax
  _QWORD *v161; // rdi
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
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  void **v180; // r15
  char v181; // si
  __int64 v182; // rax
  __m128i v183; // xmm7
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 v187; // rax
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // rax
  __int64 *v192; // rdi
  __int64 v193; // r8
  __int64 v194; // r9
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
  __m128i v208; // xmm0
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r9
  __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // r9
  char v215; // si
  void **v216; // r15
  __int64 v217; // rax
  __m128i v218; // xmm2
  __int64 v219; // rcx
  __int64 v220; // r8
  __int64 v221; // r9
  __int64 *v222; // r15
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // r8
  __int64 v226; // r9
  __int64 v227; // rax
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  __int64 v231; // rcx
  __int64 v232; // r8
  __int64 v233; // r9
  __int64 v234; // rax
  _QWORD *v235; // rdi
  __int64 v236; // rcx
  __int64 v237; // r8
  __int64 v238; // r9
  __int64 v239; // rcx
  __int64 v240; // r8
  __int64 v241; // r9
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // r9
  __int64 v245; // rcx
  __int64 v246; // r8
  __int64 v247; // r9
  __int64 v248; // rcx
  __int64 v249; // r8
  __int64 v250; // r9
  __int64 v251; // rcx
  __int64 v252; // r8
  __int64 v253; // r9
  void **v254; // r15
  char v255; // si
  __int64 v256; // rax
  __m128i v257; // xmm3
  __int64 v258; // rcx
  __int64 v259; // r8
  __int64 v260; // r9
  __int64 v261; // rax
  __int64 v262; // rcx
  __int64 v263; // r8
  __int64 v264; // r9
  __int64 v265; // rcx
  __int64 v266; // r8
  __int64 v267; // r9
  __int64 v268; // rcx
  __int64 v269; // r8
  __int64 v270; // r9
  __int64 v271; // rcx
  __int64 v272; // r8
  __int64 v273; // r9
  __int64 v274; // rcx
  __int64 v275; // r8
  __int64 v276; // r9
  __int64 v277; // rcx
  __int64 v278; // r8
  __int64 v279; // r9
  __int64 v280; // rax
  __m128i v281; // xmm0
  __int64 v282; // rcx
  __int64 v283; // r8
  __int64 v284; // r9
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // r9
  char v288; // si
  void **v289; // r15
  __int64 v290; // rax
  __m128i v291; // xmm4
  __int64 v292; // rcx
  __int64 v293; // r8
  __int64 v294; // r9
  __int64 v295; // rax
  __int64 v296; // rcx
  __int64 v297; // r8
  __int64 v298; // r9
  __int64 *v299; // r15
  __int64 v300; // rdx
  __int64 v301; // rcx
  __int64 v302; // r8
  __int64 v303; // r9
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
  __int64 v319; // rax
  __m128i v320; // xmm0
  __int64 v321; // rcx
  __int64 v322; // r8
  __int64 v323; // r9
  __int64 v324; // rcx
  __int64 v325; // r8
  __int64 v326; // r9
  char v327; // si
  void **v328; // r15
  __int64 v329; // rax
  __m128i v330; // xmm5
  __int64 v331; // rcx
  __int64 v332; // r8
  __int64 v333; // r9
  __int64 v334; // rax
  __int64 v335; // rcx
  __int64 v336; // r8
  __int64 v337; // r9
  __int64 *v338; // r15
  __int64 v339; // rdx
  __int64 v340; // rcx
  __int64 v341; // r8
  __int64 v342; // r9
  __int64 v343; // rcx
  __int64 v344; // r8
  __int64 v345; // r9
  __int64 v346; // rcx
  __int64 v347; // r8
  __int64 v348; // r9
  __int64 v349; // rcx
  __int64 v350; // r8
  __int64 v351; // r9
  __int64 v352; // rcx
  __int64 v353; // r8
  __int64 v354; // r9
  __int64 v355; // rcx
  __int64 v356; // r8
  __int64 v357; // r9
  __int64 v358; // rax
  __m128i v359; // xmm0
  __int64 v360; // rcx
  __int64 v361; // r8
  __int64 v362; // r9
  __int64 v363; // rcx
  __int64 v364; // r8
  __int64 v365; // r9
  char v366; // si
  void **v367; // r15
  __int64 v368; // rax
  __m128i v369; // xmm6
  __int64 v370; // rcx
  __int64 v371; // r8
  __int64 v372; // r9
  __int64 v373; // rax
  __int64 v374; // rcx
  __int64 v375; // r8
  __int64 v376; // r9
  __int64 *v377; // r15
  __int64 v378; // rdx
  __int64 v379; // rcx
  __int64 v380; // r8
  __int64 v381; // r9
  __int64 v382; // rcx
  __int64 v383; // r8
  __int64 v384; // r9
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
  __int64 v397; // rax
  __m128i v398; // xmm0
  __int64 v399; // rcx
  __int64 v400; // r8
  __int64 v401; // r9
  __int64 v402; // rcx
  __int64 v403; // r8
  __int64 v404; // r9
  char v405; // si
  void **v406; // r15
  __int64 v407; // rax
  __m128i v408; // xmm7
  __int64 v409; // rcx
  __int64 v410; // r8
  __int64 v411; // r9
  __int64 v412; // rax
  __int64 v413; // rsi
  __int64 v414; // rcx
  __int64 v415; // r8
  __int64 v416; // r9
  __int64 *v417; // r15
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
  __int64 *v431; // r15
  __int64 v432; // rdx
  __int64 v433; // rcx
  __int64 v434; // r8
  __int64 v435; // r9
  __int64 v436; // rax
  __int64 v437; // rcx
  __int64 v438; // r8
  __int64 v439; // r9
  __int64 *v440; // r15
  __int64 v441; // rdx
  __int64 v442; // rcx
  __int64 v443; // r8
  __int64 v444; // r9
  __int64 v445; // rcx
  __int64 v446; // r8
  __int64 v447; // r9
  __int64 v448; // rcx
  __int64 v449; // r8
  __int64 v450; // r9
  __int64 v451; // rcx
  __int64 v452; // r8
  __int64 v453; // r9
  __int64 v454; // rcx
  __int64 v455; // r8
  __int64 v456; // r9
  __int64 v457; // rcx
  __int64 v458; // r8
  __int64 v459; // r9
  __int64 v460; // rax
  __m128i v461; // xmm0
  __int64 v462; // rcx
  __int64 v463; // r8
  __int64 v464; // r9
  __int64 v465; // rcx
  __int64 v466; // r8
  __int64 v467; // r9
  void **v468; // r12
  __int64 v469; // rax
  __m128i v470; // xmm2
  int v472; // [rsp+0h] [rbp-4F8h]
  int v473; // [rsp+0h] [rbp-4F8h]
  int v474; // [rsp+0h] [rbp-4F8h]
  int v475; // [rsp+0h] [rbp-4F8h]
  int v476; // [rsp+0h] [rbp-4F8h]
  int v477; // [rsp+0h] [rbp-4F8h]
  int v478; // [rsp+0h] [rbp-4F8h]
  int v479; // [rsp+0h] [rbp-4F8h]
  int v480; // [rsp+0h] [rbp-4F8h]
  int v481; // [rsp+0h] [rbp-4F8h]
  int v482; // [rsp+0h] [rbp-4F8h]
  int v483; // [rsp+0h] [rbp-4F8h]
  int v484; // [rsp+0h] [rbp-4F8h]
  int v485; // [rsp+0h] [rbp-4F8h]
  int v486; // [rsp+0h] [rbp-4F8h]
  int v487; // [rsp+0h] [rbp-4F8h]
  int v488; // [rsp+0h] [rbp-4F8h]
  int v489; // [rsp+0h] [rbp-4F8h]
  int v490; // [rsp+0h] [rbp-4F8h]
  int v491; // [rsp+0h] [rbp-4F8h]
  int v492; // [rsp+0h] [rbp-4F8h]
  int v493; // [rsp+0h] [rbp-4F8h]
  int v494; // [rsp+0h] [rbp-4F8h]
  int v495; // [rsp+0h] [rbp-4F8h]
  int v496; // [rsp+0h] [rbp-4F8h]
  int v497; // [rsp+0h] [rbp-4F8h]
  int v498; // [rsp+0h] [rbp-4F8h]
  int v499; // [rsp+0h] [rbp-4F8h]
  int v500; // [rsp+0h] [rbp-4F8h]
  int v501; // [rsp+0h] [rbp-4F8h]
  int v502; // [rsp+0h] [rbp-4F8h]
  int v503; // [rsp+0h] [rbp-4F8h]
  int v504; // [rsp+0h] [rbp-4F8h]
  int v505; // [rsp+0h] [rbp-4F8h]
  int v506; // [rsp+0h] [rbp-4F8h]
  int v507; // [rsp+0h] [rbp-4F8h]
  int v508; // [rsp+0h] [rbp-4F8h]
  int v509; // [rsp+0h] [rbp-4F8h]
  int v510; // [rsp+0h] [rbp-4F8h]
  int v511; // [rsp+0h] [rbp-4F8h]
  int v512; // [rsp+0h] [rbp-4F8h]
  int v513; // [rsp+0h] [rbp-4F8h]
  int v514; // [rsp+0h] [rbp-4F8h]
  int v515; // [rsp+0h] [rbp-4F8h]
  int v516; // [rsp+0h] [rbp-4F8h]
  int v517; // [rsp+0h] [rbp-4F8h]
  int v518; // [rsp+0h] [rbp-4F8h]
  int v519; // [rsp+0h] [rbp-4F8h]
  int v520; // [rsp+0h] [rbp-4F8h]
  int v521; // [rsp+0h] [rbp-4F8h]
  int v522; // [rsp+0h] [rbp-4F8h]
  int v523; // [rsp+0h] [rbp-4F8h]
  int v524; // [rsp+0h] [rbp-4F8h]
  int v525; // [rsp+0h] [rbp-4F8h]
  int v526; // [rsp+0h] [rbp-4F8h]
  int v527; // [rsp+0h] [rbp-4F8h]
  int v528; // [rsp+0h] [rbp-4F8h]
  int v529; // [rsp+0h] [rbp-4F8h]
  int v530; // [rsp+0h] [rbp-4F8h]
  int v531; // [rsp+0h] [rbp-4F8h]
  int v532; // [rsp+0h] [rbp-4F8h]
  int v533; // [rsp+0h] [rbp-4F8h]
  int v534; // [rsp+0h] [rbp-4F8h]
  int v535; // [rsp+0h] [rbp-4F8h]
  int v536; // [rsp+0h] [rbp-4F8h]
  int v537; // [rsp+0h] [rbp-4F8h]
  int v538; // [rsp+0h] [rbp-4F8h]
  int v539; // [rsp+0h] [rbp-4F8h]
  int v540; // [rsp+0h] [rbp-4F8h]
  int v541; // [rsp+0h] [rbp-4F8h]
  int v542; // [rsp+0h] [rbp-4F8h]
  int v543; // [rsp+0h] [rbp-4F8h]
  int v544; // [rsp+0h] [rbp-4F8h]
  int v545; // [rsp+0h] [rbp-4F8h]
  int v546; // [rsp+0h] [rbp-4F8h]
  int v547; // [rsp+0h] [rbp-4F8h]
  int v548; // [rsp+0h] [rbp-4F8h]
  int v549; // [rsp+0h] [rbp-4F8h]
  int v550; // [rsp+0h] [rbp-4F8h]
  int v551; // [rsp+0h] [rbp-4F8h]
  int v552; // [rsp+0h] [rbp-4F8h]
  int v553; // [rsp+0h] [rbp-4F8h]
  int v554; // [rsp+0h] [rbp-4F8h]
  int v555; // [rsp+0h] [rbp-4F8h]
  int v556; // [rsp+0h] [rbp-4F8h]
  int v557; // [rsp+0h] [rbp-4F8h]
  int v558; // [rsp+0h] [rbp-4F8h]
  int v559; // [rsp+0h] [rbp-4F8h]
  int v560; // [rsp+0h] [rbp-4F8h]
  int v561; // [rsp+0h] [rbp-4F8h]
  int v562; // [rsp+0h] [rbp-4F8h]
  int v563; // [rsp+0h] [rbp-4F8h]
  int v564; // [rsp+0h] [rbp-4F8h]
  int v565; // [rsp+0h] [rbp-4F8h]
  int v566; // [rsp+0h] [rbp-4F8h]
  int v567; // [rsp+0h] [rbp-4F8h]
  int v568; // [rsp+0h] [rbp-4F8h]
  int v569; // [rsp+0h] [rbp-4F8h]
  int v570; // [rsp+0h] [rbp-4F8h]
  int v571; // [rsp+0h] [rbp-4F8h]
  int v572; // [rsp+0h] [rbp-4F8h]
  int v573; // [rsp+0h] [rbp-4F8h]
  int v574; // [rsp+0h] [rbp-4F8h]
  int v575; // [rsp+0h] [rbp-4F8h]
  int v576; // [rsp+0h] [rbp-4F8h]
  int v577; // [rsp+0h] [rbp-4F8h]
  int v578; // [rsp+0h] [rbp-4F8h]
  int v579; // [rsp+0h] [rbp-4F8h]
  int v580; // [rsp+0h] [rbp-4F8h]
  int v581; // [rsp+0h] [rbp-4F8h]
  int v582; // [rsp+0h] [rbp-4F8h]
  int v583; // [rsp+0h] [rbp-4F8h]
  int v584; // [rsp+0h] [rbp-4F8h]
  int v585; // [rsp+0h] [rbp-4F8h]
  int v586; // [rsp+0h] [rbp-4F8h]
  __int64 v587; // [rsp+8h] [rbp-4F0h]
  __m128i *v588; // [rsp+8h] [rbp-4F0h]
  __int64 v589; // [rsp+8h] [rbp-4F0h]
  _QWORD *v590; // [rsp+8h] [rbp-4F0h]
  int v591; // [rsp+8h] [rbp-4F0h]
  __int64 v592; // [rsp+8h] [rbp-4F0h]
  __int64 v593; // [rsp+8h] [rbp-4F0h]
  __int64 v594; // [rsp+8h] [rbp-4F0h]
  __int64 v595; // [rsp+8h] [rbp-4F0h]
  __int64 v596; // [rsp+8h] [rbp-4F0h]
  __int64 v597; // [rsp+8h] [rbp-4F0h]
  __int64 v598; // [rsp+8h] [rbp-4F0h]
  __int64 v599; // [rsp+8h] [rbp-4F0h]
  _QWORD *v600; // [rsp+8h] [rbp-4F0h]
  __int64 v601; // [rsp+8h] [rbp-4F0h]
  __int64 v602; // [rsp+8h] [rbp-4F0h]
  __int64 v603; // [rsp+8h] [rbp-4F0h]
  __int64 v604; // [rsp+8h] [rbp-4F0h]
  __int64 v605; // [rsp+8h] [rbp-4F0h]
  __int64 v606; // [rsp+8h] [rbp-4F0h]
  __int64 v607; // [rsp+8h] [rbp-4F0h]
  __int64 v608; // [rsp+8h] [rbp-4F0h]
  _QWORD *v609; // [rsp+8h] [rbp-4F0h]
  __int64 v610; // [rsp+8h] [rbp-4F0h]
  __int64 v611; // [rsp+8h] [rbp-4F0h]
  __int64 v612; // [rsp+8h] [rbp-4F0h]
  __int64 v613; // [rsp+8h] [rbp-4F0h]
  __int64 v614; // [rsp+8h] [rbp-4F0h]
  __int64 v615; // [rsp+8h] [rbp-4F0h]
  __int64 v616; // [rsp+8h] [rbp-4F0h]
  __int64 v617; // [rsp+8h] [rbp-4F0h]
  int v618; // [rsp+8h] [rbp-4F0h]
  _QWORD *v619; // [rsp+8h] [rbp-4F0h]
  __int64 v620; // [rsp+8h] [rbp-4F0h]
  __int64 v621; // [rsp+8h] [rbp-4F0h]
  __int64 v622; // [rsp+8h] [rbp-4F0h]
  __int64 v623; // [rsp+8h] [rbp-4F0h]
  __int64 v624; // [rsp+8h] [rbp-4F0h]
  __int64 v625; // [rsp+8h] [rbp-4F0h]
  __int64 v626; // [rsp+8h] [rbp-4F0h]
  __int64 v627; // [rsp+8h] [rbp-4F0h]
  _QWORD *v628; // [rsp+8h] [rbp-4F0h]
  __int64 v629; // [rsp+8h] [rbp-4F0h]
  __int64 v630; // [rsp+8h] [rbp-4F0h]
  __int64 v631; // [rsp+8h] [rbp-4F0h]
  __int64 v632; // [rsp+8h] [rbp-4F0h]
  __int64 v633; // [rsp+8h] [rbp-4F0h]
  __int64 v634; // [rsp+8h] [rbp-4F0h]
  __int64 v635; // [rsp+8h] [rbp-4F0h]
  __int64 v636; // [rsp+8h] [rbp-4F0h]
  int v637; // [rsp+8h] [rbp-4F0h]
  _QWORD *v638; // [rsp+8h] [rbp-4F0h]
  __int64 v639; // [rsp+8h] [rbp-4F0h]
  __int64 v640; // [rsp+8h] [rbp-4F0h]
  __int64 v641; // [rsp+8h] [rbp-4F0h]
  __int64 v642; // [rsp+8h] [rbp-4F0h]
  __int64 v643; // [rsp+8h] [rbp-4F0h]
  __int64 v644; // [rsp+8h] [rbp-4F0h]
  __int64 v645; // [rsp+8h] [rbp-4F0h]
  __int64 v646; // [rsp+8h] [rbp-4F0h]
  _QWORD *v647; // [rsp+8h] [rbp-4F0h]
  __int64 v648; // [rsp+8h] [rbp-4F0h]
  __int64 v649; // [rsp+8h] [rbp-4F0h]
  __int64 v650; // [rsp+8h] [rbp-4F0h]
  __int64 v651; // [rsp+8h] [rbp-4F0h]
  __int64 v652; // [rsp+8h] [rbp-4F0h]
  __int64 v653; // [rsp+8h] [rbp-4F0h]
  __int64 v654; // [rsp+8h] [rbp-4F0h]
  __int64 v655; // [rsp+8h] [rbp-4F0h]
  _QWORD *v656; // [rsp+8h] [rbp-4F0h]
  int v657; // [rsp+8h] [rbp-4F0h]
  __int64 v658; // [rsp+8h] [rbp-4F0h]
  __int64 v659; // [rsp+8h] [rbp-4F0h]
  __int64 v660; // [rsp+8h] [rbp-4F0h]
  __int64 v661; // [rsp+8h] [rbp-4F0h]
  __int64 v662; // [rsp+8h] [rbp-4F0h]
  __int64 v663; // [rsp+8h] [rbp-4F0h]
  __int64 v664; // [rsp+8h] [rbp-4F0h]
  __int64 v665; // [rsp+8h] [rbp-4F0h]
  _QWORD *v666; // [rsp+8h] [rbp-4F0h]
  int v667; // [rsp+8h] [rbp-4F0h]
  __int64 v668; // [rsp+8h] [rbp-4F0h]
  __int64 v669; // [rsp+8h] [rbp-4F0h]
  __int64 v670; // [rsp+8h] [rbp-4F0h]
  __int64 v671; // [rsp+8h] [rbp-4F0h]
  __int64 v672; // [rsp+8h] [rbp-4F0h]
  __int64 v673; // [rsp+8h] [rbp-4F0h]
  __int64 v674; // [rsp+8h] [rbp-4F0h]
  __int64 v675; // [rsp+8h] [rbp-4F0h]
  _QWORD *v676; // [rsp+8h] [rbp-4F0h]
  int v677; // [rsp+8h] [rbp-4F0h]
  __int64 v678; // [rsp+8h] [rbp-4F0h]
  __int64 v679; // [rsp+8h] [rbp-4F0h]
  __int64 v680; // [rsp+8h] [rbp-4F0h]
  __int64 v681; // [rsp+8h] [rbp-4F0h]
  __int64 v682; // [rsp+8h] [rbp-4F0h]
  __int64 v683; // [rsp+8h] [rbp-4F0h]
  __int64 v684; // [rsp+8h] [rbp-4F0h]
  __int64 v685; // [rsp+8h] [rbp-4F0h]
  __int64 v686; // [rsp+8h] [rbp-4F0h]
  int v687; // [rsp+8h] [rbp-4F0h]
  __int64 v688; // [rsp+8h] [rbp-4F0h]
  __int64 v689; // [rsp+8h] [rbp-4F0h]
  __int64 v690; // [rsp+8h] [rbp-4F0h]
  int v691; // [rsp+8h] [rbp-4F0h]
  __int64 v692; // [rsp+8h] [rbp-4F0h]
  _QWORD *v693; // [rsp+8h] [rbp-4F0h]
  __int64 v694; // [rsp+8h] [rbp-4F0h]
  __int64 v695; // [rsp+8h] [rbp-4F0h]
  __int64 v696; // [rsp+8h] [rbp-4F0h]
  __int64 v697; // [rsp+8h] [rbp-4F0h]
  __int64 v698; // [rsp+8h] [rbp-4F0h]
  __int64 v699; // [rsp+8h] [rbp-4F0h]
  __int64 v700; // [rsp+8h] [rbp-4F0h]
  int v701; // [rsp+10h] [rbp-4E8h]
  int v702; // [rsp+10h] [rbp-4E8h]
  int v703; // [rsp+10h] [rbp-4E8h]
  int v704; // [rsp+10h] [rbp-4E8h]
  __int64 v705; // [rsp+10h] [rbp-4E8h]
  int v706; // [rsp+10h] [rbp-4E8h]
  int v707; // [rsp+10h] [rbp-4E8h]
  int v708; // [rsp+10h] [rbp-4E8h]
  int v709; // [rsp+10h] [rbp-4E8h]
  int v710; // [rsp+10h] [rbp-4E8h]
  int v711; // [rsp+10h] [rbp-4E8h]
  int v712; // [rsp+10h] [rbp-4E8h]
  int v713; // [rsp+10h] [rbp-4E8h]
  int v714; // [rsp+10h] [rbp-4E8h]
  int v715; // [rsp+10h] [rbp-4E8h]
  int v716; // [rsp+10h] [rbp-4E8h]
  int v717; // [rsp+10h] [rbp-4E8h]
  int v718; // [rsp+10h] [rbp-4E8h]
  int v719; // [rsp+10h] [rbp-4E8h]
  int v720; // [rsp+10h] [rbp-4E8h]
  int v721; // [rsp+10h] [rbp-4E8h]
  int v722; // [rsp+10h] [rbp-4E8h]
  int v723; // [rsp+10h] [rbp-4E8h]
  int v724; // [rsp+10h] [rbp-4E8h]
  int v725; // [rsp+10h] [rbp-4E8h]
  int v726; // [rsp+10h] [rbp-4E8h]
  int v727; // [rsp+10h] [rbp-4E8h]
  int v728; // [rsp+10h] [rbp-4E8h]
  int v729; // [rsp+10h] [rbp-4E8h]
  int v730; // [rsp+10h] [rbp-4E8h]
  int v731; // [rsp+10h] [rbp-4E8h]
  __int64 v732; // [rsp+10h] [rbp-4E8h]
  int v733; // [rsp+10h] [rbp-4E8h]
  int v734; // [rsp+10h] [rbp-4E8h]
  int v735; // [rsp+10h] [rbp-4E8h]
  int v736; // [rsp+10h] [rbp-4E8h]
  int v737; // [rsp+10h] [rbp-4E8h]
  int v738; // [rsp+10h] [rbp-4E8h]
  int v739; // [rsp+10h] [rbp-4E8h]
  int v740; // [rsp+10h] [rbp-4E8h]
  int v741; // [rsp+10h] [rbp-4E8h]
  int v742; // [rsp+10h] [rbp-4E8h]
  int v743; // [rsp+10h] [rbp-4E8h]
  int v744; // [rsp+10h] [rbp-4E8h]
  int v745; // [rsp+10h] [rbp-4E8h]
  int v746; // [rsp+10h] [rbp-4E8h]
  int v747; // [rsp+10h] [rbp-4E8h]
  int v748; // [rsp+10h] [rbp-4E8h]
  int v749; // [rsp+10h] [rbp-4E8h]
  int v750; // [rsp+10h] [rbp-4E8h]
  __int64 v751; // [rsp+10h] [rbp-4E8h]
  int v752; // [rsp+10h] [rbp-4E8h]
  int v753; // [rsp+10h] [rbp-4E8h]
  int v754; // [rsp+10h] [rbp-4E8h]
  int v755; // [rsp+10h] [rbp-4E8h]
  int v756; // [rsp+10h] [rbp-4E8h]
  int v757; // [rsp+10h] [rbp-4E8h]
  int v758; // [rsp+10h] [rbp-4E8h]
  int v759; // [rsp+10h] [rbp-4E8h]
  int v760; // [rsp+10h] [rbp-4E8h]
  int v761; // [rsp+10h] [rbp-4E8h]
  int v762; // [rsp+10h] [rbp-4E8h]
  int v763; // [rsp+10h] [rbp-4E8h]
  int v764; // [rsp+10h] [rbp-4E8h]
  int v765; // [rsp+10h] [rbp-4E8h]
  int v766; // [rsp+10h] [rbp-4E8h]
  int v767; // [rsp+10h] [rbp-4E8h]
  int v768; // [rsp+10h] [rbp-4E8h]
  int v769; // [rsp+10h] [rbp-4E8h]
  int v770; // [rsp+10h] [rbp-4E8h]
  __int64 v771; // [rsp+10h] [rbp-4E8h]
  int v772; // [rsp+10h] [rbp-4E8h]
  int v773; // [rsp+10h] [rbp-4E8h]
  int v774; // [rsp+10h] [rbp-4E8h]
  int v775; // [rsp+10h] [rbp-4E8h]
  int v776; // [rsp+10h] [rbp-4E8h]
  int v777; // [rsp+10h] [rbp-4E8h]
  int v778; // [rsp+10h] [rbp-4E8h]
  int v779; // [rsp+10h] [rbp-4E8h]
  int v780; // [rsp+10h] [rbp-4E8h]
  __int64 v781; // [rsp+10h] [rbp-4E8h]
  int v782; // [rsp+10h] [rbp-4E8h]
  int v783; // [rsp+10h] [rbp-4E8h]
  int v784; // [rsp+10h] [rbp-4E8h]
  int v785; // [rsp+10h] [rbp-4E8h]
  int v786; // [rsp+10h] [rbp-4E8h]
  int v787; // [rsp+10h] [rbp-4E8h]
  int v788; // [rsp+10h] [rbp-4E8h]
  int v789; // [rsp+10h] [rbp-4E8h]
  int v790; // [rsp+10h] [rbp-4E8h]
  __int64 v791; // [rsp+10h] [rbp-4E8h]
  int v792; // [rsp+10h] [rbp-4E8h]
  int v793; // [rsp+10h] [rbp-4E8h]
  int v794; // [rsp+10h] [rbp-4E8h]
  int v795; // [rsp+10h] [rbp-4E8h]
  int v796; // [rsp+10h] [rbp-4E8h]
  int v797; // [rsp+10h] [rbp-4E8h]
  int v798; // [rsp+10h] [rbp-4E8h]
  int v799; // [rsp+10h] [rbp-4E8h]
  int v800; // [rsp+10h] [rbp-4E8h]
  __int64 v801; // [rsp+10h] [rbp-4E8h]
  int v802; // [rsp+10h] [rbp-4E8h]
  int v803; // [rsp+10h] [rbp-4E8h]
  int v804; // [rsp+10h] [rbp-4E8h]
  __int64 v805; // [rsp+10h] [rbp-4E8h]
  int v806; // [rsp+10h] [rbp-4E8h]
  __int64 v807; // [rsp+10h] [rbp-4E8h]
  int v808; // [rsp+10h] [rbp-4E8h]
  int v809; // [rsp+10h] [rbp-4E8h]
  int v810; // [rsp+10h] [rbp-4E8h]
  int v811; // [rsp+10h] [rbp-4E8h]
  int v812; // [rsp+10h] [rbp-4E8h]
  int v813; // [rsp+10h] [rbp-4E8h]
  int v814; // [rsp+10h] [rbp-4E8h]
  int v815; // [rsp+18h] [rbp-4E0h]
  __m128i *v816; // [rsp+18h] [rbp-4E0h]
  int v817; // [rsp+18h] [rbp-4E0h]
  int v818; // [rsp+18h] [rbp-4E0h]
  int v819; // [rsp+18h] [rbp-4E0h]
  int v820; // [rsp+18h] [rbp-4E0h]
  __int64 v821; // [rsp+18h] [rbp-4E0h]
  int v822; // [rsp+18h] [rbp-4E0h]
  int v823; // [rsp+18h] [rbp-4E0h]
  int v824; // [rsp+18h] [rbp-4E0h]
  int v825; // [rsp+18h] [rbp-4E0h]
  int v826; // [rsp+18h] [rbp-4E0h]
  _QWORD *v827; // [rsp+18h] [rbp-4E0h]
  int v828; // [rsp+18h] [rbp-4E0h]
  int v829; // [rsp+18h] [rbp-4E0h]
  __int64 v830; // [rsp+18h] [rbp-4E0h]
  int v831; // [rsp+18h] [rbp-4E0h]
  int v832; // [rsp+18h] [rbp-4E0h]
  int v833; // [rsp+18h] [rbp-4E0h]
  int v834; // [rsp+18h] [rbp-4E0h]
  int v835; // [rsp+18h] [rbp-4E0h]
  _QWORD *v836; // [rsp+18h] [rbp-4E0h]
  int v837; // [rsp+18h] [rbp-4E0h]
  int v838; // [rsp+18h] [rbp-4E0h]
  __int64 v839; // [rsp+18h] [rbp-4E0h]
  int v840; // [rsp+18h] [rbp-4E0h]
  int v841; // [rsp+18h] [rbp-4E0h]
  int v842; // [rsp+18h] [rbp-4E0h]
  int v843; // [rsp+18h] [rbp-4E0h]
  int v844; // [rsp+18h] [rbp-4E0h]
  int v845; // [rsp+18h] [rbp-4E0h]
  int v846; // [rsp+18h] [rbp-4E0h]
  int v847; // [rsp+18h] [rbp-4E0h]
  int v848; // [rsp+18h] [rbp-4E0h]
  __int64 v849; // [rsp+18h] [rbp-4E0h]
  int v850; // [rsp+18h] [rbp-4E0h]
  int v851; // [rsp+18h] [rbp-4E0h]
  int v852; // [rsp+18h] [rbp-4E0h]
  int v853; // [rsp+18h] [rbp-4E0h]
  _QWORD *v854; // [rsp+18h] [rbp-4E0h]
  int v855; // [rsp+18h] [rbp-4E0h]
  int v856; // [rsp+18h] [rbp-4E0h]
  __int64 v857; // [rsp+18h] [rbp-4E0h]
  int v858; // [rsp+18h] [rbp-4E0h]
  int v859; // [rsp+18h] [rbp-4E0h]
  int v860; // [rsp+18h] [rbp-4E0h]
  int v861; // [rsp+18h] [rbp-4E0h]
  int v862; // [rsp+18h] [rbp-4E0h]
  int v863; // [rsp+18h] [rbp-4E0h]
  int v864; // [rsp+18h] [rbp-4E0h]
  int v865; // [rsp+18h] [rbp-4E0h]
  int v866; // [rsp+18h] [rbp-4E0h]
  __int64 v867; // [rsp+18h] [rbp-4E0h]
  int v868; // [rsp+18h] [rbp-4E0h]
  int v869; // [rsp+18h] [rbp-4E0h]
  int v870; // [rsp+18h] [rbp-4E0h]
  int v871; // [rsp+18h] [rbp-4E0h]
  _QWORD *v872; // [rsp+18h] [rbp-4E0h]
  int v873; // [rsp+18h] [rbp-4E0h]
  int v874; // [rsp+18h] [rbp-4E0h]
  __int64 v875; // [rsp+18h] [rbp-4E0h]
  int v876; // [rsp+18h] [rbp-4E0h]
  int v877; // [rsp+18h] [rbp-4E0h]
  int v878; // [rsp+18h] [rbp-4E0h]
  int v879; // [rsp+18h] [rbp-4E0h]
  int v880; // [rsp+18h] [rbp-4E0h]
  _QWORD *v881; // [rsp+18h] [rbp-4E0h]
  int v882; // [rsp+18h] [rbp-4E0h]
  int v883; // [rsp+18h] [rbp-4E0h]
  __int64 v884; // [rsp+18h] [rbp-4E0h]
  int v885; // [rsp+18h] [rbp-4E0h]
  int v886; // [rsp+18h] [rbp-4E0h]
  int v887; // [rsp+18h] [rbp-4E0h]
  int v888; // [rsp+18h] [rbp-4E0h]
  int v889; // [rsp+18h] [rbp-4E0h]
  _QWORD *v890; // [rsp+18h] [rbp-4E0h]
  int v891; // [rsp+18h] [rbp-4E0h]
  int v892; // [rsp+18h] [rbp-4E0h]
  __int64 v893; // [rsp+18h] [rbp-4E0h]
  int v894; // [rsp+18h] [rbp-4E0h]
  int v895; // [rsp+18h] [rbp-4E0h]
  int v896; // [rsp+18h] [rbp-4E0h]
  int v897; // [rsp+18h] [rbp-4E0h]
  int v898; // [rsp+18h] [rbp-4E0h]
  _QWORD *v899; // [rsp+18h] [rbp-4E0h]
  int v900; // [rsp+18h] [rbp-4E0h]
  int v901; // [rsp+18h] [rbp-4E0h]
  __int64 v902; // [rsp+18h] [rbp-4E0h]
  int v903; // [rsp+18h] [rbp-4E0h]
  int v904; // [rsp+18h] [rbp-4E0h]
  int v905; // [rsp+18h] [rbp-4E0h]
  int v906; // [rsp+18h] [rbp-4E0h]
  int v907; // [rsp+18h] [rbp-4E0h]
  int v908; // [rsp+18h] [rbp-4E0h]
  int v909; // [rsp+18h] [rbp-4E0h]
  int v910; // [rsp+18h] [rbp-4E0h]
  _QWORD *v911; // [rsp+18h] [rbp-4E0h]
  int v912; // [rsp+18h] [rbp-4E0h]
  int v913; // [rsp+18h] [rbp-4E0h]
  int v914; // [rsp+18h] [rbp-4E0h]
  int v915; // [rsp+18h] [rbp-4E0h]
  __int64 v916; // [rsp+18h] [rbp-4E0h]
  int v917; // [rsp+18h] [rbp-4E0h]
  int v918; // [rsp+18h] [rbp-4E0h]
  int v919; // [rsp+18h] [rbp-4E0h]
  int v920; // [rsp+20h] [rbp-4D8h]
  int v921; // [rsp+20h] [rbp-4D8h]
  int v922; // [rsp+20h] [rbp-4D8h]
  int v923; // [rsp+20h] [rbp-4D8h]
  int v924; // [rsp+20h] [rbp-4D8h]
  int v925; // [rsp+20h] [rbp-4D8h]
  int v926; // [rsp+20h] [rbp-4D8h]
  int v927; // [rsp+20h] [rbp-4D8h]
  int v928; // [rsp+20h] [rbp-4D8h]
  int v929; // [rsp+20h] [rbp-4D8h]
  int v930; // [rsp+20h] [rbp-4D8h]
  int v931; // [rsp+20h] [rbp-4D8h]
  int v932; // [rsp+20h] [rbp-4D8h]
  int v933; // [rsp+20h] [rbp-4D8h]
  int v934; // [rsp+20h] [rbp-4D8h]
  int v935; // [rsp+20h] [rbp-4D8h]
  int v936; // [rsp+20h] [rbp-4D8h]
  int v937; // [rsp+20h] [rbp-4D8h]
  int v938; // [rsp+20h] [rbp-4D8h]
  int v939; // [rsp+20h] [rbp-4D8h]
  int v940; // [rsp+20h] [rbp-4D8h]
  int v941; // [rsp+20h] [rbp-4D8h]
  int v942; // [rsp+20h] [rbp-4D8h]
  int v943; // [rsp+20h] [rbp-4D8h]
  int v944; // [rsp+20h] [rbp-4D8h]
  int v945; // [rsp+20h] [rbp-4D8h]
  int v946; // [rsp+20h] [rbp-4D8h]
  int v947; // [rsp+20h] [rbp-4D8h]
  int v948; // [rsp+20h] [rbp-4D8h]
  int v949; // [rsp+20h] [rbp-4D8h]
  int v950; // [rsp+20h] [rbp-4D8h]
  int v951; // [rsp+20h] [rbp-4D8h]
  int v952; // [rsp+20h] [rbp-4D8h]
  int v953; // [rsp+20h] [rbp-4D8h]
  int v954; // [rsp+20h] [rbp-4D8h]
  int v955; // [rsp+20h] [rbp-4D8h]
  int v956; // [rsp+20h] [rbp-4D8h]
  int v957; // [rsp+20h] [rbp-4D8h]
  int v958; // [rsp+20h] [rbp-4D8h]
  int v959; // [rsp+20h] [rbp-4D8h]
  int v960; // [rsp+20h] [rbp-4D8h]
  int v961; // [rsp+20h] [rbp-4D8h]
  int v962; // [rsp+20h] [rbp-4D8h]
  int v963; // [rsp+20h] [rbp-4D8h]
  int v964; // [rsp+20h] [rbp-4D8h]
  int v965; // [rsp+20h] [rbp-4D8h]
  int v966; // [rsp+20h] [rbp-4D8h]
  int v967; // [rsp+20h] [rbp-4D8h]
  int v968; // [rsp+20h] [rbp-4D8h]
  int v969; // [rsp+20h] [rbp-4D8h]
  int v970; // [rsp+20h] [rbp-4D8h]
  int v971; // [rsp+20h] [rbp-4D8h]
  int v972; // [rsp+20h] [rbp-4D8h]
  int v973; // [rsp+20h] [rbp-4D8h]
  int v974; // [rsp+20h] [rbp-4D8h]
  int v975; // [rsp+20h] [rbp-4D8h]
  int v976; // [rsp+20h] [rbp-4D8h]
  int v977; // [rsp+20h] [rbp-4D8h]
  int v978; // [rsp+20h] [rbp-4D8h]
  int v979; // [rsp+20h] [rbp-4D8h]
  int v980; // [rsp+20h] [rbp-4D8h]
  int v981; // [rsp+20h] [rbp-4D8h]
  int v982; // [rsp+20h] [rbp-4D8h]
  int v983; // [rsp+20h] [rbp-4D8h]
  int v984; // [rsp+20h] [rbp-4D8h]
  int v985; // [rsp+20h] [rbp-4D8h]
  int v986; // [rsp+20h] [rbp-4D8h]
  int v987; // [rsp+20h] [rbp-4D8h]
  int v988; // [rsp+20h] [rbp-4D8h]
  int v989; // [rsp+20h] [rbp-4D8h]
  int v990; // [rsp+20h] [rbp-4D8h]
  int v991; // [rsp+20h] [rbp-4D8h]
  int v992; // [rsp+20h] [rbp-4D8h]
  int v993; // [rsp+20h] [rbp-4D8h]
  int v994; // [rsp+20h] [rbp-4D8h]
  int v995; // [rsp+20h] [rbp-4D8h]
  int v996; // [rsp+20h] [rbp-4D8h]
  int v997; // [rsp+20h] [rbp-4D8h]
  int v998; // [rsp+20h] [rbp-4D8h]
  int v999; // [rsp+20h] [rbp-4D8h]
  int v1000; // [rsp+20h] [rbp-4D8h]
  int v1001; // [rsp+20h] [rbp-4D8h]
  int v1002; // [rsp+20h] [rbp-4D8h]
  int v1003; // [rsp+20h] [rbp-4D8h]
  int v1004; // [rsp+20h] [rbp-4D8h]
  int v1005; // [rsp+20h] [rbp-4D8h]
  int v1006; // [rsp+20h] [rbp-4D8h]
  int v1007; // [rsp+20h] [rbp-4D8h]
  int v1008; // [rsp+20h] [rbp-4D8h]
  int v1009; // [rsp+20h] [rbp-4D8h]
  int v1010; // [rsp+20h] [rbp-4D8h]
  int v1011; // [rsp+20h] [rbp-4D8h]
  int v1012; // [rsp+20h] [rbp-4D8h]
  int v1013; // [rsp+20h] [rbp-4D8h]
  int v1014; // [rsp+20h] [rbp-4D8h]
  int v1015; // [rsp+20h] [rbp-4D8h]
  int v1016; // [rsp+20h] [rbp-4D8h]
  int v1017; // [rsp+20h] [rbp-4D8h]
  int v1018; // [rsp+20h] [rbp-4D8h]
  int v1019; // [rsp+20h] [rbp-4D8h]
  int v1020; // [rsp+20h] [rbp-4D8h]
  int v1021; // [rsp+20h] [rbp-4D8h]
  int v1022; // [rsp+20h] [rbp-4D8h]
  int v1023; // [rsp+20h] [rbp-4D8h]
  int v1024; // [rsp+20h] [rbp-4D8h]
  int v1025; // [rsp+28h] [rbp-4D0h]
  __m128i *v1026; // [rsp+28h] [rbp-4D0h]
  int v1027; // [rsp+28h] [rbp-4D0h]
  _QWORD *v1028; // [rsp+28h] [rbp-4D0h]
  int v1029; // [rsp+28h] [rbp-4D0h]
  __int64 v1030; // [rsp+28h] [rbp-4D0h]
  int v1031; // [rsp+28h] [rbp-4D0h]
  int v1032; // [rsp+28h] [rbp-4D0h]
  int v1033; // [rsp+28h] [rbp-4D0h]
  int v1034; // [rsp+28h] [rbp-4D0h]
  int v1035; // [rsp+28h] [rbp-4D0h]
  int v1036; // [rsp+28h] [rbp-4D0h]
  _QWORD *v1037; // [rsp+28h] [rbp-4D0h]
  int v1038; // [rsp+28h] [rbp-4D0h]
  __int64 v1039; // [rsp+28h] [rbp-4D0h]
  int v1040; // [rsp+28h] [rbp-4D0h]
  int v1041; // [rsp+28h] [rbp-4D0h]
  int v1042; // [rsp+28h] [rbp-4D0h]
  int v1043; // [rsp+28h] [rbp-4D0h]
  int v1044; // [rsp+28h] [rbp-4D0h]
  int v1045; // [rsp+28h] [rbp-4D0h]
  _QWORD *v1046; // [rsp+28h] [rbp-4D0h]
  int v1047; // [rsp+28h] [rbp-4D0h]
  __int64 v1048; // [rsp+28h] [rbp-4D0h]
  int v1049; // [rsp+28h] [rbp-4D0h]
  int v1050; // [rsp+28h] [rbp-4D0h]
  int v1051; // [rsp+28h] [rbp-4D0h]
  int v1052; // [rsp+28h] [rbp-4D0h]
  int v1053; // [rsp+28h] [rbp-4D0h]
  int v1054; // [rsp+28h] [rbp-4D0h]
  int v1055; // [rsp+28h] [rbp-4D0h]
  int v1056; // [rsp+28h] [rbp-4D0h]
  __int64 v1057; // [rsp+28h] [rbp-4D0h]
  int v1058; // [rsp+28h] [rbp-4D0h]
  int v1059; // [rsp+28h] [rbp-4D0h]
  int v1060; // [rsp+28h] [rbp-4D0h]
  int v1061; // [rsp+28h] [rbp-4D0h]
  int v1062; // [rsp+28h] [rbp-4D0h]
  int v1063; // [rsp+28h] [rbp-4D0h]
  _QWORD *v1064; // [rsp+28h] [rbp-4D0h]
  int v1065; // [rsp+28h] [rbp-4D0h]
  __int64 v1066; // [rsp+28h] [rbp-4D0h]
  int v1067; // [rsp+28h] [rbp-4D0h]
  int v1068; // [rsp+28h] [rbp-4D0h]
  int v1069; // [rsp+28h] [rbp-4D0h]
  int v1070; // [rsp+28h] [rbp-4D0h]
  int v1071; // [rsp+28h] [rbp-4D0h]
  int v1072; // [rsp+28h] [rbp-4D0h]
  int v1073; // [rsp+28h] [rbp-4D0h]
  int v1074; // [rsp+28h] [rbp-4D0h]
  __int64 v1075; // [rsp+28h] [rbp-4D0h]
  int v1076; // [rsp+28h] [rbp-4D0h]
  int v1077; // [rsp+28h] [rbp-4D0h]
  int v1078; // [rsp+28h] [rbp-4D0h]
  int v1079; // [rsp+28h] [rbp-4D0h]
  int v1080; // [rsp+28h] [rbp-4D0h]
  int v1081; // [rsp+28h] [rbp-4D0h]
  _QWORD *v1082; // [rsp+28h] [rbp-4D0h]
  int v1083; // [rsp+28h] [rbp-4D0h]
  __int64 v1084; // [rsp+28h] [rbp-4D0h]
  int v1085; // [rsp+28h] [rbp-4D0h]
  int v1086; // [rsp+28h] [rbp-4D0h]
  int v1087; // [rsp+28h] [rbp-4D0h]
  int v1088; // [rsp+28h] [rbp-4D0h]
  int v1089; // [rsp+28h] [rbp-4D0h]
  int v1090; // [rsp+28h] [rbp-4D0h]
  _QWORD *v1091; // [rsp+28h] [rbp-4D0h]
  int v1092; // [rsp+28h] [rbp-4D0h]
  __int64 v1093; // [rsp+28h] [rbp-4D0h]
  int v1094; // [rsp+28h] [rbp-4D0h]
  int v1095; // [rsp+28h] [rbp-4D0h]
  int v1096; // [rsp+28h] [rbp-4D0h]
  int v1097; // [rsp+28h] [rbp-4D0h]
  int v1098; // [rsp+28h] [rbp-4D0h]
  int v1099; // [rsp+28h] [rbp-4D0h]
  _QWORD *v1100; // [rsp+28h] [rbp-4D0h]
  int v1101; // [rsp+28h] [rbp-4D0h]
  __int64 v1102; // [rsp+28h] [rbp-4D0h]
  int v1103; // [rsp+28h] [rbp-4D0h]
  int v1104; // [rsp+28h] [rbp-4D0h]
  int v1105; // [rsp+28h] [rbp-4D0h]
  int v1106; // [rsp+28h] [rbp-4D0h]
  int v1107; // [rsp+28h] [rbp-4D0h]
  int v1108; // [rsp+28h] [rbp-4D0h]
  _QWORD *v1109; // [rsp+28h] [rbp-4D0h]
  int v1110; // [rsp+28h] [rbp-4D0h]
  __int64 v1111; // [rsp+28h] [rbp-4D0h]
  int v1112; // [rsp+28h] [rbp-4D0h]
  int v1113; // [rsp+28h] [rbp-4D0h]
  int v1114; // [rsp+28h] [rbp-4D0h]
  int v1115; // [rsp+28h] [rbp-4D0h]
  int v1116; // [rsp+28h] [rbp-4D0h]
  int v1117; // [rsp+28h] [rbp-4D0h]
  int v1118; // [rsp+28h] [rbp-4D0h]
  int v1119; // [rsp+28h] [rbp-4D0h]
  int v1120; // [rsp+28h] [rbp-4D0h]
  int v1121; // [rsp+28h] [rbp-4D0h]
  int v1122; // [rsp+28h] [rbp-4D0h]
  int v1123; // [rsp+28h] [rbp-4D0h]
  int v1124; // [rsp+28h] [rbp-4D0h]
  __int64 v1125; // [rsp+28h] [rbp-4D0h]
  int v1126; // [rsp+28h] [rbp-4D0h]
  int v1127; // [rsp+28h] [rbp-4D0h]
  int v1128; // [rsp+28h] [rbp-4D0h]
  int v1129; // [rsp+28h] [rbp-4D0h]
  __int64 v1130; // [rsp+30h] [rbp-4C8h]
  __int64 v1131; // [rsp+30h] [rbp-4C8h]
  __m128i *v1132; // [rsp+30h] [rbp-4C8h]
  __int64 v1133; // [rsp+30h] [rbp-4C8h]
  __int64 v1134; // [rsp+30h] [rbp-4C8h]
  __int64 v1135; // [rsp+30h] [rbp-4C8h]
  __int64 v1136; // [rsp+30h] [rbp-4C8h]
  __int64 v1137; // [rsp+30h] [rbp-4C8h]
  __int64 v1138; // [rsp+30h] [rbp-4C8h]
  const __m128i *v1139; // [rsp+30h] [rbp-4C8h]
  __int64 v1140; // [rsp+30h] [rbp-4C8h]
  __int64 v1141; // [rsp+30h] [rbp-4C8h]
  __int64 v1142; // [rsp+30h] [rbp-4C8h]
  __int64 v1143; // [rsp+30h] [rbp-4C8h]
  __int64 v1144; // [rsp+30h] [rbp-4C8h]
  __int64 v1145; // [rsp+30h] [rbp-4C8h]
  __int64 v1146; // [rsp+30h] [rbp-4C8h]
  __int64 v1147; // [rsp+30h] [rbp-4C8h]
  __m128i *v1148; // [rsp+30h] [rbp-4C8h]
  __int64 v1149; // [rsp+30h] [rbp-4C8h]
  __int64 v1150; // [rsp+30h] [rbp-4C8h]
  __int64 v1151; // [rsp+30h] [rbp-4C8h]
  __int64 v1152; // [rsp+30h] [rbp-4C8h]
  __int64 v1153; // [rsp+30h] [rbp-4C8h]
  __int64 v1154; // [rsp+30h] [rbp-4C8h]
  __int64 v1155; // [rsp+30h] [rbp-4C8h]
  __int64 v1156; // [rsp+30h] [rbp-4C8h]
  __m128i *v1157; // [rsp+30h] [rbp-4C8h]
  __int64 v1158; // [rsp+30h] [rbp-4C8h]
  __int64 v1159; // [rsp+30h] [rbp-4C8h]
  __int64 v1160; // [rsp+30h] [rbp-4C8h]
  __int64 v1161; // [rsp+30h] [rbp-4C8h]
  __int64 v1162; // [rsp+30h] [rbp-4C8h]
  __int64 v1163; // [rsp+30h] [rbp-4C8h]
  __int64 v1164; // [rsp+30h] [rbp-4C8h]
  __int64 v1165; // [rsp+30h] [rbp-4C8h]
  __int64 v1166; // [rsp+30h] [rbp-4C8h]
  __int64 v1167; // [rsp+30h] [rbp-4C8h]
  __int64 v1168; // [rsp+30h] [rbp-4C8h]
  __int64 v1169; // [rsp+30h] [rbp-4C8h]
  __int64 v1170; // [rsp+30h] [rbp-4C8h]
  __int64 v1171; // [rsp+30h] [rbp-4C8h]
  __int64 v1172; // [rsp+30h] [rbp-4C8h]
  __int64 v1173; // [rsp+30h] [rbp-4C8h]
  __int64 v1174; // [rsp+30h] [rbp-4C8h]
  __m128i *v1175; // [rsp+30h] [rbp-4C8h]
  __int64 v1176; // [rsp+30h] [rbp-4C8h]
  __int64 v1177; // [rsp+30h] [rbp-4C8h]
  __int64 v1178; // [rsp+30h] [rbp-4C8h]
  __int64 v1179; // [rsp+30h] [rbp-4C8h]
  __int64 v1180; // [rsp+30h] [rbp-4C8h]
  __int64 v1181; // [rsp+30h] [rbp-4C8h]
  __int64 v1182; // [rsp+30h] [rbp-4C8h]
  __int64 v1183; // [rsp+30h] [rbp-4C8h]
  __int64 v1184; // [rsp+30h] [rbp-4C8h]
  __int64 v1185; // [rsp+30h] [rbp-4C8h]
  __int64 v1186; // [rsp+30h] [rbp-4C8h]
  __int64 v1187; // [rsp+30h] [rbp-4C8h]
  __int64 v1188; // [rsp+30h] [rbp-4C8h]
  __int64 v1189; // [rsp+30h] [rbp-4C8h]
  __int64 v1190; // [rsp+30h] [rbp-4C8h]
  __int64 v1191; // [rsp+30h] [rbp-4C8h]
  __int64 v1192; // [rsp+30h] [rbp-4C8h]
  __m128i *v1193; // [rsp+30h] [rbp-4C8h]
  __int64 v1194; // [rsp+30h] [rbp-4C8h]
  __int64 v1195; // [rsp+30h] [rbp-4C8h]
  __int64 v1196; // [rsp+30h] [rbp-4C8h]
  __int64 v1197; // [rsp+30h] [rbp-4C8h]
  __int64 v1198; // [rsp+30h] [rbp-4C8h]
  __int64 v1199; // [rsp+30h] [rbp-4C8h]
  __int64 v1200; // [rsp+30h] [rbp-4C8h]
  __int64 v1201; // [rsp+30h] [rbp-4C8h]
  __m128i *v1202; // [rsp+30h] [rbp-4C8h]
  __int64 v1203; // [rsp+30h] [rbp-4C8h]
  __int64 v1204; // [rsp+30h] [rbp-4C8h]
  __int64 v1205; // [rsp+30h] [rbp-4C8h]
  __int64 v1206; // [rsp+30h] [rbp-4C8h]
  __int64 v1207; // [rsp+30h] [rbp-4C8h]
  __int64 v1208; // [rsp+30h] [rbp-4C8h]
  __int64 v1209; // [rsp+30h] [rbp-4C8h]
  __int64 v1210; // [rsp+30h] [rbp-4C8h]
  __m128i *v1211; // [rsp+30h] [rbp-4C8h]
  __int64 v1212; // [rsp+30h] [rbp-4C8h]
  __int64 v1213; // [rsp+30h] [rbp-4C8h]
  __int64 v1214; // [rsp+30h] [rbp-4C8h]
  __int64 v1215; // [rsp+30h] [rbp-4C8h]
  __int64 v1216; // [rsp+30h] [rbp-4C8h]
  __int64 v1217; // [rsp+30h] [rbp-4C8h]
  __int64 v1218; // [rsp+30h] [rbp-4C8h]
  __int64 v1219; // [rsp+30h] [rbp-4C8h]
  __m128i *v1220; // [rsp+30h] [rbp-4C8h]
  __int64 v1221; // [rsp+30h] [rbp-4C8h]
  __int64 v1222; // [rsp+30h] [rbp-4C8h]
  _QWORD *v1223; // [rsp+30h] [rbp-4C8h]
  __int64 v1224; // [rsp+30h] [rbp-4C8h]
  __int64 v1225; // [rsp+30h] [rbp-4C8h]
  __int64 v1226; // [rsp+30h] [rbp-4C8h]
  __int64 v1227; // [rsp+30h] [rbp-4C8h]
  __int64 v1228; // [rsp+30h] [rbp-4C8h]
  __int64 v1229; // [rsp+30h] [rbp-4C8h]
  __int64 v1230; // [rsp+30h] [rbp-4C8h]
  __int64 v1231; // [rsp+30h] [rbp-4C8h]
  __int64 v1232; // [rsp+30h] [rbp-4C8h]
  __int64 v1233; // [rsp+30h] [rbp-4C8h]
  __int64 v1234; // [rsp+30h] [rbp-4C8h]
  int v1235; // [rsp+38h] [rbp-4C0h]
  int v1236; // [rsp+38h] [rbp-4C0h]
  const __m128i *v1237; // [rsp+38h] [rbp-4C0h]
  int v1238; // [rsp+38h] [rbp-4C0h]
  int v1239; // [rsp+38h] [rbp-4C0h]
  int v1240; // [rsp+38h] [rbp-4C0h]
  int v1241; // [rsp+38h] [rbp-4C0h]
  int v1242; // [rsp+38h] [rbp-4C0h]
  __int64 v1243; // [rsp+38h] [rbp-4C0h]
  int v1244; // [rsp+38h] [rbp-4C0h]
  int v1245; // [rsp+38h] [rbp-4C0h]
  int v1246; // [rsp+38h] [rbp-4C0h]
  int v1247; // [rsp+38h] [rbp-4C0h]
  int v1248; // [rsp+38h] [rbp-4C0h]
  int v1249; // [rsp+38h] [rbp-4C0h]
  int v1250; // [rsp+38h] [rbp-4C0h]
  int v1251; // [rsp+38h] [rbp-4C0h]
  __int64 v1252; // [rsp+38h] [rbp-4C0h]
  int v1253; // [rsp+38h] [rbp-4C0h]
  int v1254; // [rsp+38h] [rbp-4C0h]
  int v1255; // [rsp+38h] [rbp-4C0h]
  int v1256; // [rsp+38h] [rbp-4C0h]
  int v1257; // [rsp+38h] [rbp-4C0h]
  int v1258; // [rsp+38h] [rbp-4C0h]
  int v1259; // [rsp+38h] [rbp-4C0h]
  int v1260; // [rsp+38h] [rbp-4C0h]
  __int64 v1261; // [rsp+38h] [rbp-4C0h]
  int v1262; // [rsp+38h] [rbp-4C0h]
  int v1263; // [rsp+38h] [rbp-4C0h]
  int v1264; // [rsp+38h] [rbp-4C0h]
  int v1265; // [rsp+38h] [rbp-4C0h]
  int v1266; // [rsp+38h] [rbp-4C0h]
  int v1267; // [rsp+38h] [rbp-4C0h]
  int v1268; // [rsp+38h] [rbp-4C0h]
  int v1269; // [rsp+38h] [rbp-4C0h]
  int v1270; // [rsp+38h] [rbp-4C0h]
  __int64 v1271; // [rsp+38h] [rbp-4C0h]
  int v1272; // [rsp+38h] [rbp-4C0h]
  int v1273; // [rsp+38h] [rbp-4C0h]
  _QWORD *v1274; // [rsp+38h] [rbp-4C0h]
  int v1275; // [rsp+38h] [rbp-4C0h]
  int v1276; // [rsp+38h] [rbp-4C0h]
  int v1277; // [rsp+38h] [rbp-4C0h]
  int v1278; // [rsp+38h] [rbp-4C0h]
  __int64 v1279; // [rsp+38h] [rbp-4C0h]
  int v1280; // [rsp+38h] [rbp-4C0h]
  int v1281; // [rsp+38h] [rbp-4C0h]
  int v1282; // [rsp+38h] [rbp-4C0h]
  _QWORD *v1283; // [rsp+38h] [rbp-4C0h]
  int v1284; // [rsp+38h] [rbp-4C0h]
  int v1285; // [rsp+38h] [rbp-4C0h]
  int v1286; // [rsp+38h] [rbp-4C0h]
  int v1287; // [rsp+38h] [rbp-4C0h]
  int v1288; // [rsp+38h] [rbp-4C0h]
  __int64 v1289; // [rsp+38h] [rbp-4C0h]
  int v1290; // [rsp+38h] [rbp-4C0h]
  int v1291; // [rsp+38h] [rbp-4C0h]
  _QWORD *v1292; // [rsp+38h] [rbp-4C0h]
  int v1293; // [rsp+38h] [rbp-4C0h]
  int v1294; // [rsp+38h] [rbp-4C0h]
  int v1295; // [rsp+38h] [rbp-4C0h]
  int v1296; // [rsp+38h] [rbp-4C0h]
  __int64 v1297; // [rsp+38h] [rbp-4C0h]
  int v1298; // [rsp+38h] [rbp-4C0h]
  int v1299; // [rsp+38h] [rbp-4C0h]
  int v1300; // [rsp+38h] [rbp-4C0h]
  _QWORD *v1301; // [rsp+38h] [rbp-4C0h]
  int v1302; // [rsp+38h] [rbp-4C0h]
  int v1303; // [rsp+38h] [rbp-4C0h]
  int v1304; // [rsp+38h] [rbp-4C0h]
  int v1305; // [rsp+38h] [rbp-4C0h]
  __int64 v1306; // [rsp+38h] [rbp-4C0h]
  int v1307; // [rsp+38h] [rbp-4C0h]
  int v1308; // [rsp+38h] [rbp-4C0h]
  int v1309; // [rsp+38h] [rbp-4C0h]
  _QWORD *v1310; // [rsp+38h] [rbp-4C0h]
  int v1311; // [rsp+38h] [rbp-4C0h]
  int v1312; // [rsp+38h] [rbp-4C0h]
  int v1313; // [rsp+38h] [rbp-4C0h]
  int v1314; // [rsp+38h] [rbp-4C0h]
  __int64 v1315; // [rsp+38h] [rbp-4C0h]
  int v1316; // [rsp+38h] [rbp-4C0h]
  int v1317; // [rsp+38h] [rbp-4C0h]
  int v1318; // [rsp+38h] [rbp-4C0h]
  _QWORD *v1319; // [rsp+38h] [rbp-4C0h]
  int v1320; // [rsp+38h] [rbp-4C0h]
  int v1321; // [rsp+38h] [rbp-4C0h]
  int v1322; // [rsp+38h] [rbp-4C0h]
  int v1323; // [rsp+38h] [rbp-4C0h]
  __int64 v1324; // [rsp+38h] [rbp-4C0h]
  int v1325; // [rsp+38h] [rbp-4C0h]
  int v1326; // [rsp+38h] [rbp-4C0h]
  int v1327; // [rsp+38h] [rbp-4C0h]
  _QWORD *v1328; // [rsp+38h] [rbp-4C0h]
  int v1329; // [rsp+38h] [rbp-4C0h]
  int v1330; // [rsp+38h] [rbp-4C0h]
  int v1331; // [rsp+38h] [rbp-4C0h]
  int v1332; // [rsp+38h] [rbp-4C0h]
  int v1333; // [rsp+38h] [rbp-4C0h]
  int v1334; // [rsp+38h] [rbp-4C0h]
  int v1335; // [rsp+38h] [rbp-4C0h]
  int v1336; // [rsp+38h] [rbp-4C0h]
  __int64 v1337; // [rsp+38h] [rbp-4C0h]
  int v1338; // [rsp+38h] [rbp-4C0h]
  int v1339; // [rsp+38h] [rbp-4C0h]
  int v1340; // [rsp+40h] [rbp-4B8h]
  int v1341; // [rsp+40h] [rbp-4B8h]
  int v1342; // [rsp+40h] [rbp-4B8h]
  int v1343; // [rsp+40h] [rbp-4B8h]
  int v1344; // [rsp+40h] [rbp-4B8h]
  int v1345; // [rsp+40h] [rbp-4B8h]
  int v1346; // [rsp+40h] [rbp-4B8h]
  int v1347; // [rsp+40h] [rbp-4B8h]
  int v1348; // [rsp+40h] [rbp-4B8h]
  int v1349; // [rsp+40h] [rbp-4B8h]
  int v1350; // [rsp+40h] [rbp-4B8h]
  int v1351; // [rsp+40h] [rbp-4B8h]
  int v1352; // [rsp+40h] [rbp-4B8h]
  int v1353; // [rsp+40h] [rbp-4B8h]
  int v1354; // [rsp+40h] [rbp-4B8h]
  int v1355; // [rsp+40h] [rbp-4B8h]
  int v1356; // [rsp+40h] [rbp-4B8h]
  int v1357; // [rsp+40h] [rbp-4B8h]
  int v1358; // [rsp+40h] [rbp-4B8h]
  int v1359; // [rsp+40h] [rbp-4B8h]
  int v1360; // [rsp+40h] [rbp-4B8h]
  int v1361; // [rsp+40h] [rbp-4B8h]
  int v1362; // [rsp+40h] [rbp-4B8h]
  int v1363; // [rsp+40h] [rbp-4B8h]
  int v1364; // [rsp+40h] [rbp-4B8h]
  int v1365; // [rsp+40h] [rbp-4B8h]
  int v1366; // [rsp+40h] [rbp-4B8h]
  int v1367; // [rsp+40h] [rbp-4B8h]
  int v1368; // [rsp+40h] [rbp-4B8h]
  int v1369; // [rsp+40h] [rbp-4B8h]
  int v1370; // [rsp+40h] [rbp-4B8h]
  int v1371; // [rsp+40h] [rbp-4B8h]
  int v1372; // [rsp+40h] [rbp-4B8h]
  int v1373; // [rsp+40h] [rbp-4B8h]
  int v1374; // [rsp+40h] [rbp-4B8h]
  int v1375; // [rsp+40h] [rbp-4B8h]
  int v1376; // [rsp+40h] [rbp-4B8h]
  int v1377; // [rsp+40h] [rbp-4B8h]
  int v1378; // [rsp+40h] [rbp-4B8h]
  int v1379; // [rsp+40h] [rbp-4B8h]
  int v1380; // [rsp+40h] [rbp-4B8h]
  int v1381; // [rsp+40h] [rbp-4B8h]
  int v1382; // [rsp+40h] [rbp-4B8h]
  int v1383; // [rsp+40h] [rbp-4B8h]
  int v1384; // [rsp+40h] [rbp-4B8h]
  int v1385; // [rsp+40h] [rbp-4B8h]
  int v1386; // [rsp+40h] [rbp-4B8h]
  int v1387; // [rsp+40h] [rbp-4B8h]
  int v1388; // [rsp+40h] [rbp-4B8h]
  int v1389; // [rsp+40h] [rbp-4B8h]
  int v1390; // [rsp+40h] [rbp-4B8h]
  int v1391; // [rsp+40h] [rbp-4B8h]
  int v1392; // [rsp+40h] [rbp-4B8h]
  int v1393; // [rsp+40h] [rbp-4B8h]
  int v1394; // [rsp+40h] [rbp-4B8h]
  int v1395; // [rsp+40h] [rbp-4B8h]
  int v1396; // [rsp+40h] [rbp-4B8h]
  int v1397; // [rsp+40h] [rbp-4B8h]
  int v1398; // [rsp+40h] [rbp-4B8h]
  int v1399; // [rsp+40h] [rbp-4B8h]
  int v1400; // [rsp+40h] [rbp-4B8h]
  int v1401; // [rsp+40h] [rbp-4B8h]
  int v1402; // [rsp+40h] [rbp-4B8h]
  int v1403; // [rsp+40h] [rbp-4B8h]
  int v1404; // [rsp+40h] [rbp-4B8h]
  int v1405; // [rsp+40h] [rbp-4B8h]
  int v1406; // [rsp+40h] [rbp-4B8h]
  int v1407; // [rsp+40h] [rbp-4B8h]
  int v1408; // [rsp+40h] [rbp-4B8h]
  int v1409; // [rsp+40h] [rbp-4B8h]
  int v1410; // [rsp+40h] [rbp-4B8h]
  int v1411; // [rsp+40h] [rbp-4B8h]
  int v1412; // [rsp+40h] [rbp-4B8h]
  int v1413; // [rsp+40h] [rbp-4B8h]
  int v1414; // [rsp+40h] [rbp-4B8h]
  int v1415; // [rsp+40h] [rbp-4B8h]
  int v1416; // [rsp+40h] [rbp-4B8h]
  int v1417; // [rsp+40h] [rbp-4B8h]
  int v1418; // [rsp+40h] [rbp-4B8h]
  int v1419; // [rsp+40h] [rbp-4B8h]
  int v1420; // [rsp+40h] [rbp-4B8h]
  int v1421; // [rsp+40h] [rbp-4B8h]
  int v1422; // [rsp+40h] [rbp-4B8h]
  int v1423; // [rsp+40h] [rbp-4B8h]
  int v1424; // [rsp+40h] [rbp-4B8h]
  int v1425; // [rsp+40h] [rbp-4B8h]
  int v1426; // [rsp+40h] [rbp-4B8h]
  int v1427; // [rsp+40h] [rbp-4B8h]
  int v1428; // [rsp+40h] [rbp-4B8h]
  int v1429; // [rsp+40h] [rbp-4B8h]
  int v1430; // [rsp+40h] [rbp-4B8h]
  int v1431; // [rsp+40h] [rbp-4B8h]
  int v1432; // [rsp+40h] [rbp-4B8h]
  int v1433; // [rsp+40h] [rbp-4B8h]
  int v1434; // [rsp+40h] [rbp-4B8h]
  int v1435; // [rsp+40h] [rbp-4B8h]
  int v1436; // [rsp+40h] [rbp-4B8h]
  int v1437; // [rsp+40h] [rbp-4B8h]
  int v1438; // [rsp+40h] [rbp-4B8h]
  int v1439; // [rsp+40h] [rbp-4B8h]
  int v1440; // [rsp+40h] [rbp-4B8h]
  int v1441; // [rsp+40h] [rbp-4B8h]
  int v1442; // [rsp+40h] [rbp-4B8h]
  int v1443; // [rsp+40h] [rbp-4B8h]
  int v1444; // [rsp+40h] [rbp-4B8h]
  int v1445; // [rsp+48h] [rbp-4B0h]
  int v1446; // [rsp+48h] [rbp-4B0h]
  int v1447; // [rsp+48h] [rbp-4B0h]
  int v1448; // [rsp+48h] [rbp-4B0h]
  int v1449; // [rsp+48h] [rbp-4B0h]
  int v1450; // [rsp+48h] [rbp-4B0h]
  int v1451; // [rsp+48h] [rbp-4B0h]
  int v1452; // [rsp+48h] [rbp-4B0h]
  int v1453; // [rsp+48h] [rbp-4B0h]
  int v1454; // [rsp+48h] [rbp-4B0h]
  int v1455; // [rsp+48h] [rbp-4B0h]
  int v1456; // [rsp+48h] [rbp-4B0h]
  int v1457; // [rsp+48h] [rbp-4B0h]
  int v1458; // [rsp+48h] [rbp-4B0h]
  int v1459; // [rsp+48h] [rbp-4B0h]
  int v1460; // [rsp+48h] [rbp-4B0h]
  int v1461; // [rsp+48h] [rbp-4B0h]
  int v1462; // [rsp+48h] [rbp-4B0h]
  int v1463; // [rsp+48h] [rbp-4B0h]
  int v1464; // [rsp+48h] [rbp-4B0h]
  int v1465; // [rsp+48h] [rbp-4B0h]
  int v1466; // [rsp+48h] [rbp-4B0h]
  int v1467; // [rsp+48h] [rbp-4B0h]
  int v1468; // [rsp+48h] [rbp-4B0h]
  int v1469; // [rsp+48h] [rbp-4B0h]
  int v1470; // [rsp+48h] [rbp-4B0h]
  int v1471; // [rsp+48h] [rbp-4B0h]
  int v1472; // [rsp+48h] [rbp-4B0h]
  int v1473; // [rsp+48h] [rbp-4B0h]
  int v1474; // [rsp+48h] [rbp-4B0h]
  int v1475; // [rsp+48h] [rbp-4B0h]
  int v1476; // [rsp+48h] [rbp-4B0h]
  int v1477; // [rsp+48h] [rbp-4B0h]
  int v1478; // [rsp+48h] [rbp-4B0h]
  int v1479; // [rsp+48h] [rbp-4B0h]
  int v1480; // [rsp+48h] [rbp-4B0h]
  int v1481; // [rsp+48h] [rbp-4B0h]
  int v1482; // [rsp+48h] [rbp-4B0h]
  int v1483; // [rsp+48h] [rbp-4B0h]
  int v1484; // [rsp+48h] [rbp-4B0h]
  int v1485; // [rsp+48h] [rbp-4B0h]
  int v1486; // [rsp+48h] [rbp-4B0h]
  int v1487; // [rsp+48h] [rbp-4B0h]
  int v1488; // [rsp+48h] [rbp-4B0h]
  int v1489; // [rsp+48h] [rbp-4B0h]
  int v1490; // [rsp+48h] [rbp-4B0h]
  int v1491; // [rsp+48h] [rbp-4B0h]
  int v1492; // [rsp+48h] [rbp-4B0h]
  int v1493; // [rsp+48h] [rbp-4B0h]
  int v1494; // [rsp+48h] [rbp-4B0h]
  int v1495; // [rsp+48h] [rbp-4B0h]
  int v1496; // [rsp+48h] [rbp-4B0h]
  int v1497; // [rsp+48h] [rbp-4B0h]
  int v1498; // [rsp+48h] [rbp-4B0h]
  int v1499; // [rsp+48h] [rbp-4B0h]
  int v1500; // [rsp+48h] [rbp-4B0h]
  int v1501; // [rsp+48h] [rbp-4B0h]
  int v1502; // [rsp+48h] [rbp-4B0h]
  int v1503; // [rsp+48h] [rbp-4B0h]
  int v1504; // [rsp+48h] [rbp-4B0h]
  int v1505; // [rsp+48h] [rbp-4B0h]
  int v1506; // [rsp+48h] [rbp-4B0h]
  int v1507; // [rsp+48h] [rbp-4B0h]
  int v1508; // [rsp+48h] [rbp-4B0h]
  int v1509; // [rsp+48h] [rbp-4B0h]
  int v1510; // [rsp+48h] [rbp-4B0h]
  int v1511; // [rsp+48h] [rbp-4B0h]
  int v1512; // [rsp+48h] [rbp-4B0h]
  int v1513; // [rsp+48h] [rbp-4B0h]
  int v1514; // [rsp+48h] [rbp-4B0h]
  int v1515; // [rsp+48h] [rbp-4B0h]
  int v1516; // [rsp+48h] [rbp-4B0h]
  int v1517; // [rsp+48h] [rbp-4B0h]
  int v1518; // [rsp+48h] [rbp-4B0h]
  int v1519; // [rsp+48h] [rbp-4B0h]
  int v1520; // [rsp+48h] [rbp-4B0h]
  int v1521; // [rsp+48h] [rbp-4B0h]
  int v1522; // [rsp+48h] [rbp-4B0h]
  int v1523; // [rsp+48h] [rbp-4B0h]
  int v1524; // [rsp+48h] [rbp-4B0h]
  int v1525; // [rsp+48h] [rbp-4B0h]
  int v1526; // [rsp+48h] [rbp-4B0h]
  int v1527; // [rsp+48h] [rbp-4B0h]
  int v1528; // [rsp+48h] [rbp-4B0h]
  int v1529; // [rsp+48h] [rbp-4B0h]
  int v1530; // [rsp+48h] [rbp-4B0h]
  int v1531; // [rsp+48h] [rbp-4B0h]
  int v1532; // [rsp+48h] [rbp-4B0h]
  int v1533; // [rsp+48h] [rbp-4B0h]
  int v1534; // [rsp+48h] [rbp-4B0h]
  int v1535; // [rsp+48h] [rbp-4B0h]
  int v1536; // [rsp+48h] [rbp-4B0h]
  int v1537; // [rsp+48h] [rbp-4B0h]
  int v1538; // [rsp+48h] [rbp-4B0h]
  int v1539; // [rsp+48h] [rbp-4B0h]
  int v1540; // [rsp+48h] [rbp-4B0h]
  int v1541; // [rsp+48h] [rbp-4B0h]
  int v1542; // [rsp+48h] [rbp-4B0h]
  int v1543; // [rsp+48h] [rbp-4B0h]
  int v1544; // [rsp+48h] [rbp-4B0h]
  int v1545; // [rsp+48h] [rbp-4B0h]
  int v1546; // [rsp+48h] [rbp-4B0h]
  int v1547; // [rsp+48h] [rbp-4B0h]
  int v1548; // [rsp+48h] [rbp-4B0h]
  int v1549; // [rsp+48h] [rbp-4B0h]
  int v1550; // [rsp+50h] [rbp-4A8h]
  int v1551; // [rsp+50h] [rbp-4A8h]
  int v1552; // [rsp+50h] [rbp-4A8h]
  int v1553; // [rsp+50h] [rbp-4A8h]
  int v1554; // [rsp+50h] [rbp-4A8h]
  int v1555; // [rsp+50h] [rbp-4A8h]
  int v1556; // [rsp+50h] [rbp-4A8h]
  int v1557; // [rsp+50h] [rbp-4A8h]
  int v1558; // [rsp+50h] [rbp-4A8h]
  int v1559; // [rsp+50h] [rbp-4A8h]
  int v1560; // [rsp+50h] [rbp-4A8h]
  int v1561; // [rsp+50h] [rbp-4A8h]
  int v1562; // [rsp+50h] [rbp-4A8h]
  int v1563; // [rsp+50h] [rbp-4A8h]
  int v1564; // [rsp+50h] [rbp-4A8h]
  int v1565; // [rsp+50h] [rbp-4A8h]
  int v1566; // [rsp+50h] [rbp-4A8h]
  int v1567; // [rsp+50h] [rbp-4A8h]
  int v1568; // [rsp+50h] [rbp-4A8h]
  int v1569; // [rsp+50h] [rbp-4A8h]
  int v1570; // [rsp+50h] [rbp-4A8h]
  int v1571; // [rsp+50h] [rbp-4A8h]
  int v1572; // [rsp+50h] [rbp-4A8h]
  int v1573; // [rsp+50h] [rbp-4A8h]
  int v1574; // [rsp+50h] [rbp-4A8h]
  int v1575; // [rsp+50h] [rbp-4A8h]
  int v1576; // [rsp+50h] [rbp-4A8h]
  int v1577; // [rsp+50h] [rbp-4A8h]
  int v1578; // [rsp+50h] [rbp-4A8h]
  int v1579; // [rsp+50h] [rbp-4A8h]
  int v1580; // [rsp+50h] [rbp-4A8h]
  int v1581; // [rsp+50h] [rbp-4A8h]
  int v1582; // [rsp+50h] [rbp-4A8h]
  int v1583; // [rsp+50h] [rbp-4A8h]
  int v1584; // [rsp+50h] [rbp-4A8h]
  int v1585; // [rsp+50h] [rbp-4A8h]
  int v1586; // [rsp+50h] [rbp-4A8h]
  int v1587; // [rsp+50h] [rbp-4A8h]
  int v1588; // [rsp+50h] [rbp-4A8h]
  int v1589; // [rsp+50h] [rbp-4A8h]
  int v1590; // [rsp+50h] [rbp-4A8h]
  int v1591; // [rsp+50h] [rbp-4A8h]
  int v1592; // [rsp+50h] [rbp-4A8h]
  int v1593; // [rsp+50h] [rbp-4A8h]
  int v1594; // [rsp+50h] [rbp-4A8h]
  int v1595; // [rsp+50h] [rbp-4A8h]
  int v1596; // [rsp+50h] [rbp-4A8h]
  int v1597; // [rsp+50h] [rbp-4A8h]
  int v1598; // [rsp+50h] [rbp-4A8h]
  int v1599; // [rsp+50h] [rbp-4A8h]
  int v1600; // [rsp+50h] [rbp-4A8h]
  int v1601; // [rsp+50h] [rbp-4A8h]
  int v1602; // [rsp+50h] [rbp-4A8h]
  int v1603; // [rsp+50h] [rbp-4A8h]
  int v1604; // [rsp+50h] [rbp-4A8h]
  int v1605; // [rsp+50h] [rbp-4A8h]
  int v1606; // [rsp+50h] [rbp-4A8h]
  int v1607; // [rsp+50h] [rbp-4A8h]
  int v1608; // [rsp+50h] [rbp-4A8h]
  int v1609; // [rsp+50h] [rbp-4A8h]
  int v1610; // [rsp+50h] [rbp-4A8h]
  int v1611; // [rsp+50h] [rbp-4A8h]
  int v1612; // [rsp+50h] [rbp-4A8h]
  int v1613; // [rsp+50h] [rbp-4A8h]
  int v1614; // [rsp+50h] [rbp-4A8h]
  int v1615; // [rsp+50h] [rbp-4A8h]
  int v1616; // [rsp+50h] [rbp-4A8h]
  int v1617; // [rsp+50h] [rbp-4A8h]
  int v1618; // [rsp+50h] [rbp-4A8h]
  int v1619; // [rsp+50h] [rbp-4A8h]
  int v1620; // [rsp+50h] [rbp-4A8h]
  int v1621; // [rsp+50h] [rbp-4A8h]
  int v1622; // [rsp+50h] [rbp-4A8h]
  int v1623; // [rsp+50h] [rbp-4A8h]
  int v1624; // [rsp+50h] [rbp-4A8h]
  int v1625; // [rsp+50h] [rbp-4A8h]
  int v1626; // [rsp+50h] [rbp-4A8h]
  int v1627; // [rsp+50h] [rbp-4A8h]
  int v1628; // [rsp+50h] [rbp-4A8h]
  int v1629; // [rsp+50h] [rbp-4A8h]
  int v1630; // [rsp+50h] [rbp-4A8h]
  int v1631; // [rsp+50h] [rbp-4A8h]
  int v1632; // [rsp+50h] [rbp-4A8h]
  int v1633; // [rsp+50h] [rbp-4A8h]
  int v1634; // [rsp+50h] [rbp-4A8h]
  int v1635; // [rsp+50h] [rbp-4A8h]
  int v1636; // [rsp+50h] [rbp-4A8h]
  int v1637; // [rsp+50h] [rbp-4A8h]
  int v1638; // [rsp+50h] [rbp-4A8h]
  int v1639; // [rsp+50h] [rbp-4A8h]
  int v1640; // [rsp+50h] [rbp-4A8h]
  int v1641; // [rsp+50h] [rbp-4A8h]
  int v1642; // [rsp+50h] [rbp-4A8h]
  int v1643; // [rsp+50h] [rbp-4A8h]
  int v1644; // [rsp+50h] [rbp-4A8h]
  int v1645; // [rsp+50h] [rbp-4A8h]
  int v1646; // [rsp+50h] [rbp-4A8h]
  int v1647; // [rsp+50h] [rbp-4A8h]
  int v1648; // [rsp+50h] [rbp-4A8h]
  int v1649; // [rsp+50h] [rbp-4A8h]
  int v1650; // [rsp+50h] [rbp-4A8h]
  int v1651; // [rsp+50h] [rbp-4A8h]
  int v1652; // [rsp+50h] [rbp-4A8h]
  int v1653; // [rsp+50h] [rbp-4A8h]
  int v1654; // [rsp+50h] [rbp-4A8h]
  char v1655; // [rsp+58h] [rbp-4A0h]
  char v1656; // [rsp+58h] [rbp-4A0h]
  char v1657; // [rsp+58h] [rbp-4A0h]
  char v1658; // [rsp+58h] [rbp-4A0h]
  char v1659; // [rsp+58h] [rbp-4A0h]
  char v1660; // [rsp+58h] [rbp-4A0h]
  char v1661; // [rsp+58h] [rbp-4A0h]
  char v1662; // [rsp+58h] [rbp-4A0h]
  char v1663; // [rsp+58h] [rbp-4A0h]
  char v1664; // [rsp+58h] [rbp-4A0h]
  char v1665; // [rsp+58h] [rbp-4A0h]
  char v1666; // [rsp+58h] [rbp-4A0h]
  char v1667; // [rsp+58h] [rbp-4A0h]
  char v1668; // [rsp+58h] [rbp-4A0h]
  char v1669; // [rsp+58h] [rbp-4A0h]
  char v1670; // [rsp+58h] [rbp-4A0h]
  char v1671; // [rsp+58h] [rbp-4A0h]
  char v1672; // [rsp+58h] [rbp-4A0h]
  char v1673; // [rsp+58h] [rbp-4A0h]
  char v1674; // [rsp+58h] [rbp-4A0h]
  char v1675; // [rsp+58h] [rbp-4A0h]
  char v1676; // [rsp+58h] [rbp-4A0h]
  char v1677; // [rsp+58h] [rbp-4A0h]
  char v1678; // [rsp+58h] [rbp-4A0h]
  char v1679; // [rsp+58h] [rbp-4A0h]
  char v1680; // [rsp+58h] [rbp-4A0h]
  char v1681; // [rsp+58h] [rbp-4A0h]
  char v1682; // [rsp+58h] [rbp-4A0h]
  char v1683; // [rsp+58h] [rbp-4A0h]
  char v1684; // [rsp+58h] [rbp-4A0h]
  char v1685; // [rsp+58h] [rbp-4A0h]
  char v1686; // [rsp+58h] [rbp-4A0h]
  char v1687; // [rsp+58h] [rbp-4A0h]
  char v1688; // [rsp+58h] [rbp-4A0h]
  char v1689; // [rsp+58h] [rbp-4A0h]
  char v1690; // [rsp+58h] [rbp-4A0h]
  char v1691; // [rsp+58h] [rbp-4A0h]
  char v1692; // [rsp+58h] [rbp-4A0h]
  char v1693; // [rsp+58h] [rbp-4A0h]
  char v1694; // [rsp+58h] [rbp-4A0h]
  char v1695; // [rsp+58h] [rbp-4A0h]
  char v1696; // [rsp+58h] [rbp-4A0h]
  char v1697; // [rsp+58h] [rbp-4A0h]
  char v1698; // [rsp+58h] [rbp-4A0h]
  char v1699; // [rsp+58h] [rbp-4A0h]
  char v1700; // [rsp+58h] [rbp-4A0h]
  char v1701; // [rsp+58h] [rbp-4A0h]
  char v1702; // [rsp+58h] [rbp-4A0h]
  char v1703; // [rsp+58h] [rbp-4A0h]
  char v1704; // [rsp+58h] [rbp-4A0h]
  char v1705; // [rsp+58h] [rbp-4A0h]
  char v1706; // [rsp+58h] [rbp-4A0h]
  char v1707; // [rsp+58h] [rbp-4A0h]
  char v1708; // [rsp+58h] [rbp-4A0h]
  char v1709; // [rsp+58h] [rbp-4A0h]
  char v1710; // [rsp+58h] [rbp-4A0h]
  char v1711; // [rsp+58h] [rbp-4A0h]
  char v1712; // [rsp+58h] [rbp-4A0h]
  char v1713; // [rsp+58h] [rbp-4A0h]
  char v1714; // [rsp+58h] [rbp-4A0h]
  char v1715; // [rsp+58h] [rbp-4A0h]
  char v1716; // [rsp+58h] [rbp-4A0h]
  char v1717; // [rsp+58h] [rbp-4A0h]
  char v1718; // [rsp+58h] [rbp-4A0h]
  char v1719; // [rsp+58h] [rbp-4A0h]
  char v1720; // [rsp+58h] [rbp-4A0h]
  char v1721; // [rsp+58h] [rbp-4A0h]
  char v1722; // [rsp+58h] [rbp-4A0h]
  char v1723; // [rsp+58h] [rbp-4A0h]
  char v1724; // [rsp+58h] [rbp-4A0h]
  char v1725; // [rsp+58h] [rbp-4A0h]
  char v1726; // [rsp+58h] [rbp-4A0h]
  char v1727; // [rsp+58h] [rbp-4A0h]
  char v1728; // [rsp+58h] [rbp-4A0h]
  char v1729; // [rsp+58h] [rbp-4A0h]
  char v1730; // [rsp+58h] [rbp-4A0h]
  char v1731; // [rsp+58h] [rbp-4A0h]
  char v1732; // [rsp+58h] [rbp-4A0h]
  char v1733; // [rsp+58h] [rbp-4A0h]
  char v1734; // [rsp+58h] [rbp-4A0h]
  char v1735; // [rsp+58h] [rbp-4A0h]
  char v1736; // [rsp+58h] [rbp-4A0h]
  char v1737; // [rsp+58h] [rbp-4A0h]
  char v1738; // [rsp+58h] [rbp-4A0h]
  char v1739; // [rsp+58h] [rbp-4A0h]
  char v1740; // [rsp+58h] [rbp-4A0h]
  char v1741; // [rsp+58h] [rbp-4A0h]
  char v1742; // [rsp+58h] [rbp-4A0h]
  char v1743; // [rsp+58h] [rbp-4A0h]
  char v1744; // [rsp+58h] [rbp-4A0h]
  char v1745; // [rsp+58h] [rbp-4A0h]
  char v1746; // [rsp+58h] [rbp-4A0h]
  char v1747; // [rsp+58h] [rbp-4A0h]
  char v1748; // [rsp+58h] [rbp-4A0h]
  char v1749; // [rsp+58h] [rbp-4A0h]
  char v1750; // [rsp+58h] [rbp-4A0h]
  char v1751; // [rsp+58h] [rbp-4A0h]
  char v1752; // [rsp+58h] [rbp-4A0h]
  char v1753; // [rsp+58h] [rbp-4A0h]
  char v1754; // [rsp+58h] [rbp-4A0h]
  char v1755; // [rsp+58h] [rbp-4A0h]
  char v1756; // [rsp+58h] [rbp-4A0h]
  char v1757; // [rsp+58h] [rbp-4A0h]
  char v1758; // [rsp+58h] [rbp-4A0h]
  char v1759; // [rsp+58h] [rbp-4A0h]
  __int64 v1760; // [rsp+60h] [rbp-498h]
  __int64 v1761; // [rsp+60h] [rbp-498h]
  const __m128i *v1762; // [rsp+60h] [rbp-498h]
  __int64 v1763; // [rsp+60h] [rbp-498h]
  __int64 v1764; // [rsp+60h] [rbp-498h]
  __int64 v1765; // [rsp+60h] [rbp-498h]
  __int64 v1766; // [rsp+60h] [rbp-498h]
  __int64 v1767; // [rsp+60h] [rbp-498h]
  __int64 v1768; // [rsp+60h] [rbp-498h]
  __int64 v1769; // [rsp+60h] [rbp-498h]
  __int64 v1770; // [rsp+60h] [rbp-498h]
  __int64 v1771; // [rsp+60h] [rbp-498h]
  __int64 v1772; // [rsp+60h] [rbp-498h]
  __int64 v1773; // [rsp+60h] [rbp-498h]
  __int64 v1774; // [rsp+60h] [rbp-498h]
  __int64 v1775; // [rsp+60h] [rbp-498h]
  __int64 v1776; // [rsp+60h] [rbp-498h]
  __int64 v1777; // [rsp+60h] [rbp-498h]
  __int64 v1778; // [rsp+60h] [rbp-498h]
  __int64 v1779; // [rsp+60h] [rbp-498h]
  __int64 v1780; // [rsp+60h] [rbp-498h]
  __int64 v1781; // [rsp+60h] [rbp-498h]
  __int64 v1782; // [rsp+60h] [rbp-498h]
  __int64 v1783; // [rsp+60h] [rbp-498h]
  __int64 v1784; // [rsp+60h] [rbp-498h]
  __int64 v1785; // [rsp+60h] [rbp-498h]
  __int64 v1786; // [rsp+60h] [rbp-498h]
  __int64 v1787; // [rsp+60h] [rbp-498h]
  __int64 v1788; // [rsp+60h] [rbp-498h]
  _QWORD *v1789; // [rsp+60h] [rbp-498h]
  __int64 v1790; // [rsp+60h] [rbp-498h]
  __int64 v1791; // [rsp+60h] [rbp-498h]
  __int64 v1792; // [rsp+60h] [rbp-498h]
  __int64 v1793; // [rsp+60h] [rbp-498h]
  __int64 v1794; // [rsp+60h] [rbp-498h]
  __int64 v1795; // [rsp+60h] [rbp-498h]
  __int64 v1796; // [rsp+60h] [rbp-498h]
  __int64 v1797; // [rsp+60h] [rbp-498h]
  __int64 v1798; // [rsp+60h] [rbp-498h]
  __int64 v1799; // [rsp+60h] [rbp-498h]
  __int64 v1800; // [rsp+60h] [rbp-498h]
  __int64 v1801; // [rsp+60h] [rbp-498h]
  __int64 v1802; // [rsp+60h] [rbp-498h]
  __int64 v1803; // [rsp+60h] [rbp-498h]
  __int64 v1804; // [rsp+60h] [rbp-498h]
  __int64 v1805; // [rsp+60h] [rbp-498h]
  __int64 v1806; // [rsp+60h] [rbp-498h]
  _QWORD *v1807; // [rsp+60h] [rbp-498h]
  __int64 v1808; // [rsp+60h] [rbp-498h]
  __int64 v1809; // [rsp+60h] [rbp-498h]
  __int64 v1810; // [rsp+60h] [rbp-498h]
  __int64 v1811; // [rsp+60h] [rbp-498h]
  __int64 v1812; // [rsp+60h] [rbp-498h]
  __int64 v1813; // [rsp+60h] [rbp-498h]
  __int64 v1814; // [rsp+60h] [rbp-498h]
  __int64 v1815; // [rsp+60h] [rbp-498h]
  __int64 v1816; // [rsp+60h] [rbp-498h]
  __int64 v1817; // [rsp+60h] [rbp-498h]
  __int64 v1818; // [rsp+60h] [rbp-498h]
  __int64 v1819; // [rsp+60h] [rbp-498h]
  __int64 v1820; // [rsp+60h] [rbp-498h]
  __int64 v1821; // [rsp+60h] [rbp-498h]
  __int64 v1822; // [rsp+60h] [rbp-498h]
  __int64 v1823; // [rsp+60h] [rbp-498h]
  __int64 v1824; // [rsp+60h] [rbp-498h]
  __int64 v1825; // [rsp+60h] [rbp-498h]
  __int64 v1826; // [rsp+60h] [rbp-498h]
  __int64 v1827; // [rsp+60h] [rbp-498h]
  __int64 v1828; // [rsp+60h] [rbp-498h]
  __int64 v1829; // [rsp+60h] [rbp-498h]
  __int64 v1830; // [rsp+60h] [rbp-498h]
  __int64 v1831; // [rsp+60h] [rbp-498h]
  __int64 v1832; // [rsp+60h] [rbp-498h]
  __int64 v1833; // [rsp+60h] [rbp-498h]
  __int64 v1834; // [rsp+60h] [rbp-498h]
  __int64 v1835; // [rsp+60h] [rbp-498h]
  __int64 v1836; // [rsp+60h] [rbp-498h]
  __int64 v1837; // [rsp+60h] [rbp-498h]
  __int64 v1838; // [rsp+60h] [rbp-498h]
  __int64 v1839; // [rsp+60h] [rbp-498h]
  __int64 v1840; // [rsp+60h] [rbp-498h]
  __int64 v1841; // [rsp+60h] [rbp-498h]
  __int64 v1842; // [rsp+60h] [rbp-498h]
  __int64 v1843; // [rsp+60h] [rbp-498h]
  __int64 v1844; // [rsp+60h] [rbp-498h]
  __int64 v1845; // [rsp+60h] [rbp-498h]
  __int64 v1846; // [rsp+60h] [rbp-498h]
  __int64 v1847; // [rsp+60h] [rbp-498h]
  __int64 v1848; // [rsp+60h] [rbp-498h]
  __int64 v1849; // [rsp+60h] [rbp-498h]
  __int64 v1850; // [rsp+60h] [rbp-498h]
  __int64 v1851; // [rsp+60h] [rbp-498h]
  __int64 v1852; // [rsp+60h] [rbp-498h]
  __int64 v1853; // [rsp+60h] [rbp-498h]
  __int64 v1854; // [rsp+60h] [rbp-498h]
  __int64 v1855; // [rsp+60h] [rbp-498h]
  __int64 v1856; // [rsp+60h] [rbp-498h]
  __int64 v1857; // [rsp+60h] [rbp-498h]
  __int64 v1858; // [rsp+60h] [rbp-498h]
  __int64 v1859; // [rsp+60h] [rbp-498h]
  __int64 v1860; // [rsp+60h] [rbp-498h]
  __int64 v1861; // [rsp+60h] [rbp-498h]
  __int64 v1862; // [rsp+60h] [rbp-498h]
  __int64 v1863; // [rsp+60h] [rbp-498h]
  __int64 v1864; // [rsp+60h] [rbp-498h]
  int v1865; // [rsp+68h] [rbp-490h]
  int v1866; // [rsp+68h] [rbp-490h]
  int v1867; // [rsp+68h] [rbp-490h]
  int v1868; // [rsp+68h] [rbp-490h]
  int v1869; // [rsp+68h] [rbp-490h]
  int v1870; // [rsp+68h] [rbp-490h]
  int v1871; // [rsp+68h] [rbp-490h]
  int v1872; // [rsp+68h] [rbp-490h]
  int v1873; // [rsp+68h] [rbp-490h]
  int v1874; // [rsp+68h] [rbp-490h]
  int v1875; // [rsp+68h] [rbp-490h]
  int v1876; // [rsp+68h] [rbp-490h]
  int v1877; // [rsp+68h] [rbp-490h]
  int v1878; // [rsp+68h] [rbp-490h]
  int v1879; // [rsp+68h] [rbp-490h]
  int v1880; // [rsp+68h] [rbp-490h]
  int v1881; // [rsp+68h] [rbp-490h]
  int v1882; // [rsp+68h] [rbp-490h]
  int v1883; // [rsp+68h] [rbp-490h]
  int v1884; // [rsp+68h] [rbp-490h]
  int v1885; // [rsp+68h] [rbp-490h]
  int v1886; // [rsp+68h] [rbp-490h]
  int v1887; // [rsp+68h] [rbp-490h]
  int v1888; // [rsp+68h] [rbp-490h]
  int v1889; // [rsp+68h] [rbp-490h]
  int v1890; // [rsp+68h] [rbp-490h]
  int v1891; // [rsp+68h] [rbp-490h]
  int v1892; // [rsp+68h] [rbp-490h]
  int v1893; // [rsp+68h] [rbp-490h]
  int v1894; // [rsp+68h] [rbp-490h]
  int v1895; // [rsp+68h] [rbp-490h]
  int v1896; // [rsp+68h] [rbp-490h]
  int v1897; // [rsp+68h] [rbp-490h]
  int v1898; // [rsp+68h] [rbp-490h]
  int v1899; // [rsp+68h] [rbp-490h]
  int v1900; // [rsp+68h] [rbp-490h]
  int v1901; // [rsp+68h] [rbp-490h]
  int v1902; // [rsp+68h] [rbp-490h]
  int v1903; // [rsp+68h] [rbp-490h]
  int v1904; // [rsp+68h] [rbp-490h]
  int v1905; // [rsp+68h] [rbp-490h]
  int v1906; // [rsp+68h] [rbp-490h]
  int v1907; // [rsp+68h] [rbp-490h]
  int v1908; // [rsp+68h] [rbp-490h]
  int v1909; // [rsp+68h] [rbp-490h]
  int v1910; // [rsp+68h] [rbp-490h]
  int v1911; // [rsp+68h] [rbp-490h]
  int v1912; // [rsp+68h] [rbp-490h]
  int v1913; // [rsp+68h] [rbp-490h]
  int v1914; // [rsp+68h] [rbp-490h]
  int v1915; // [rsp+68h] [rbp-490h]
  int v1916; // [rsp+68h] [rbp-490h]
  int v1917; // [rsp+68h] [rbp-490h]
  int v1918; // [rsp+68h] [rbp-490h]
  int v1919; // [rsp+68h] [rbp-490h]
  int v1920; // [rsp+68h] [rbp-490h]
  int v1921; // [rsp+68h] [rbp-490h]
  int v1922; // [rsp+68h] [rbp-490h]
  int v1923; // [rsp+68h] [rbp-490h]
  int v1924; // [rsp+68h] [rbp-490h]
  int v1925; // [rsp+68h] [rbp-490h]
  int v1926; // [rsp+68h] [rbp-490h]
  int v1927; // [rsp+68h] [rbp-490h]
  int v1928; // [rsp+68h] [rbp-490h]
  int v1929; // [rsp+68h] [rbp-490h]
  int v1930; // [rsp+68h] [rbp-490h]
  int v1931; // [rsp+68h] [rbp-490h]
  int v1932; // [rsp+68h] [rbp-490h]
  int v1933; // [rsp+68h] [rbp-490h]
  int v1934; // [rsp+68h] [rbp-490h]
  int v1935; // [rsp+68h] [rbp-490h]
  int v1936; // [rsp+68h] [rbp-490h]
  int v1937; // [rsp+68h] [rbp-490h]
  int v1938; // [rsp+68h] [rbp-490h]
  int v1939; // [rsp+68h] [rbp-490h]
  int v1940; // [rsp+68h] [rbp-490h]
  int v1941; // [rsp+68h] [rbp-490h]
  int v1942; // [rsp+68h] [rbp-490h]
  int v1943; // [rsp+68h] [rbp-490h]
  int v1944; // [rsp+68h] [rbp-490h]
  int v1945; // [rsp+68h] [rbp-490h]
  int v1946; // [rsp+68h] [rbp-490h]
  int v1947; // [rsp+68h] [rbp-490h]
  int v1948; // [rsp+68h] [rbp-490h]
  int v1949; // [rsp+68h] [rbp-490h]
  int v1950; // [rsp+68h] [rbp-490h]
  int v1951; // [rsp+68h] [rbp-490h]
  int v1952; // [rsp+68h] [rbp-490h]
  int v1953; // [rsp+68h] [rbp-490h]
  int v1954; // [rsp+68h] [rbp-490h]
  int v1955; // [rsp+68h] [rbp-490h]
  int v1956; // [rsp+68h] [rbp-490h]
  int v1957; // [rsp+68h] [rbp-490h]
  int v1958; // [rsp+68h] [rbp-490h]
  int v1959; // [rsp+68h] [rbp-490h]
  int v1960; // [rsp+68h] [rbp-490h]
  int v1961; // [rsp+68h] [rbp-490h]
  int v1962; // [rsp+68h] [rbp-490h]
  int v1963; // [rsp+68h] [rbp-490h]
  int v1964; // [rsp+68h] [rbp-490h]
  int v1965; // [rsp+68h] [rbp-490h]
  int v1966; // [rsp+68h] [rbp-490h]
  int v1967; // [rsp+68h] [rbp-490h]
  int v1968; // [rsp+68h] [rbp-490h]
  int v1969; // [rsp+68h] [rbp-490h]
  __m128i v1970; // [rsp+70h] [rbp-488h] BYREF
  ida_mcp::tools::types *v1971; // [rsp+80h] [rbp-478h]
  char *v1972; // [rsp+88h] [rbp-470h]
  __int64 *v1973; // [rsp+90h] [rbp-468h]
  __int64 *v1974; // [rsp+98h] [rbp-460h]
  __int64 *v1975; // [rsp+A0h] [rbp-458h]
  __int64 *v1976; // [rsp+A8h] [rbp-450h]
  char *v1977; // [rsp+B0h] [rbp-448h]
  char *v1978; // [rsp+B8h] [rbp-440h]
  __int8 *v1979; // [rsp+C0h] [rbp-438h]
  __int64 *v1980; // [rsp+C8h] [rbp-430h]
  __int64 *v1981; // [rsp+D0h] [rbp-428h]
  __int64 *v1982; // [rsp+D8h] [rbp-420h]
  __int64 *v1983; // [rsp+E0h] [rbp-418h]
  __int64 *v1984; // [rsp+E8h] [rbp-410h]
  _QWORD *v1985; // [rsp+F0h] [rbp-408h]
  _BYTE *v1986; // [rsp+F8h] [rbp-400h]
  __int128 **v1987; // [rsp+100h] [rbp-3F8h]
  __int128 *v1988; // [rsp+108h] [rbp-3F0h]
  __int64 *v1989; // [rsp+110h] [rbp-3E8h]
  __m128i *v1990; // [rsp+118h] [rbp-3E0h]
  __int64 *v1991; // [rsp+120h] [rbp-3D8h]
  char *v1992; // [rsp+128h] [rbp-3D0h]
  __int64 *v1993; // [rsp+130h] [rbp-3C8h]
  __m128i *v1994; // [rsp+138h] [rbp-3C0h]
  __m128i v1995; // [rsp+140h] [rbp-3B8h] BYREF
  __int64 v1996; // [rsp+150h] [rbp-3A8h] BYREF
  __int64 v1997; // [rsp+158h] [rbp-3A0h] BYREF
  __m128i v1998; // [rsp+160h] [rbp-398h] BYREF
  __int64 v1999; // [rsp+170h] [rbp-388h]
  _QWORD v2000[3]; // [rsp+180h] [rbp-378h] BYREF
  _QWORD v2001[3]; // [rsp+198h] [rbp-360h] BYREF
  _QWORD v2002[3]; // [rsp+1B0h] [rbp-348h] BYREF
  char v2003; // [rsp+1C8h] [rbp-330h]
  __int128 v2004; // [rsp+1D0h] [rbp-328h] BYREF
  _QWORD v2005[3]; // [rsp+1E0h] [rbp-318h] BYREF
  char v2006; // [rsp+1F8h] [rbp-300h]
  __int128 v2007; // [rsp+200h] [rbp-2F8h] BYREF
  __m128i v2008; // [rsp+210h] [rbp-2E8h] BYREF
  __int64 v2009; // [rsp+220h] [rbp-2D8h]
  _QWORD v2010[3]; // [rsp+228h] [rbp-2D0h] BYREF
  __int64 v2011; // [rsp+240h] [rbp-2B8h] BYREF
  char v2012; // [rsp+248h] [rbp-2B0h] BYREF
  __int64 v2013; // [rsp+250h] [rbp-2A8h]
  _QWORD v2014[3]; // [rsp+258h] [rbp-2A0h] BYREF
  __m128i v2015; // [rsp+270h] [rbp-288h] BYREF
  __int64 v2016; // [rsp+280h] [rbp-278h]
  __int64 v2017; // [rsp+288h] [rbp-270h] BYREF
  __int128 v2018; // [rsp+290h] [rbp-268h] BYREF
  __m128i v2019; // [rsp+2A0h] [rbp-258h] BYREF
  __int64 v2020; // [rsp+2B0h] [rbp-248h]
  char v2021; // [rsp+2B8h] [rbp-240h]
  __int128 v2022; // [rsp+2C0h] [rbp-238h] BYREF
  __m128i v2023; // [rsp+2D0h] [rbp-228h] BYREF
  __int64 v2024; // [rsp+2E0h] [rbp-218h]
  char v2025; // [rsp+2E8h] [rbp-210h] BYREF
  __int128 v2026; // [rsp+2F0h] [rbp-208h] BYREF
  __int64 v2027; // [rsp+300h] [rbp-1F8h] BYREF
  __int128 v2028; // [rsp+308h] [rbp-1F0h] BYREF
  __int64 v2029; // [rsp+318h] [rbp-1E0h] BYREF
  __int64 v2030; // [rsp+320h] [rbp-1D8h] BYREF
  __int64 v2031; // [rsp+328h] [rbp-1D0h]
  __int64 v2032; // [rsp+330h] [rbp-1C8h] BYREF
  __int128 v2033; // [rsp+338h] [rbp-1C0h] BYREF
  __int64 v2034; // [rsp+348h] [rbp-1B0h] BYREF
  char v2035; // [rsp+350h] [rbp-1A8h] BYREF
  __int64 v2036; // [rsp+358h] [rbp-1A0h]
  char v2037; // [rsp+360h] [rbp-198h] BYREF
  __int128 v2038; // [rsp+368h] [rbp-190h] BYREF
  __int64 v2039; // [rsp+378h] [rbp-180h] BYREF
  char v2040; // [rsp+380h] [rbp-178h] BYREF
  __int64 v2041; // [rsp+388h] [rbp-170h]
  char v2042; // [rsp+390h] [rbp-168h] BYREF
  __int128 v2043; // [rsp+398h] [rbp-160h] BYREF
  __m128i v2044; // [rsp+3A8h] [rbp-150h] BYREF
  __int64 v2045; // [rsp+3B8h] [rbp-140h]
  void *v2046; // [rsp+3C0h] [rbp-138h] BYREF
  __int64 v2047; // [rsp+3C8h] [rbp-130h]
  __m128i v2048; // [rsp+3D0h] [rbp-128h] BYREF
  __int64 v2049; // [rsp+3E8h] [rbp-110h]
  _QWORD v2050[2]; // [rsp+3F0h] [rbp-108h] BYREF
  __int64 v2051; // [rsp+400h] [rbp-F8h]
  char v2052; // [rsp+408h] [rbp-F0h] BYREF
  _BYTE *v2053; // [rsp+410h] [rbp-E8h] BYREF
  __int64 v2054; // [rsp+418h] [rbp-E0h]
  _BYTE v2055[16]; // [rsp+420h] [rbp-D8h] BYREF
  __int128 *v2056; // [rsp+430h] [rbp-C8h] BYREF
  __int64 v2057; // [rsp+438h] [rbp-C0h]
  _BYTE v2058[16]; // [rsp+440h] [rbp-B8h] BYREF
  char v2059; // [rsp+450h] [rbp-A8h]
  __int64 v2060; // [rsp+458h] [rbp-A0h]
  char v2061; // [rsp+470h] [rbp-88h]
  char v2062; // [rsp+4A8h] [rbp-50h]
  unsigned __int64 v2063; // [rsp+4B8h] [rbp-40h]

  v1971 = this;
  v2063 = __readfsqword(0x28u);
  v1986 = v2055;
  v2053 = v2055;
  v2054 = 0;
  v2055[0] = 0;
  v1988 = (__int128 *)v2058;
  v2056 = (__int128 *)v2058;
  v2058[0] = 0;
  v2057 = 0;
  v2059 = 0;
  v2060 = 0;
  v2061 = 0;
  v2062 = 0;
  std::string::_M_replace();
  v1987 = &v2056;
  std::string::assign((__int64)&v2056, "Get type info at address");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2015);
  v2016 = 0;
  LOBYTE(v2017) = 0;
  *(_QWORD *)&v2018 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2017) = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "object");
  *(_QWORD *)(v2 + 8) = 6;
  v2018 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2046,
    &v2015);
  v2048.m128i_i64[0] = 0;
  v2037 = 0;
  *(_QWORD *)&v2038 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2037 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "properties");
  *(_QWORD *)(v3 + 8) = 10;
  v2038 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v2032);
  *((_QWORD *)&v2033 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2019);
  v2020 = 0;
  v2021 = 0;
  *(_QWORD *)&v2022 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2021 = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "string");
  *(_QWORD *)(v4 + 8) = 6;
  v2022 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2027,
    &v2019);
  *((_QWORD *)&v2028 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2023);
  v2024 = 0;
  v1992 = &v2025;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v2026 + 1) = 0;
  v1991 = &v2029;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2029,
    &v2023);
  v2031 = 0;
  v1982 = &v2034;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2034,
    (const __m128i *)&v2027);
  v2036 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2011,
    (const __m128i *)&v2032);
  v2013 = 0;
  v1983 = &v2039;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2039,
    (__int64)&v2011,
    1,
    v5,
    v6,
    v7,
    v472,
    (__int64)&v2019,
    (int)&v2022,
    (int)&v2032,
    v920,
    (int)&v2027,
    v1130,
    v1235,
    (int)&v2018,
    (int)&v2038,
    v1550,
    v1655,
    v1760,
    v1865,
    v1970.m128i_i64[0]);
  v2041 = 0;
  v1984 = &v2048.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2048.m128i_i64[1],
    (const __m128i *)&v2037);
  v2049 = 0;
  v2042 = 0;
  *(_QWORD *)&v2043 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2042 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  v9 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  strcpy((char *)(v8 + 16), "required");
  *(_QWORD *)(v8 + 8) = 8;
  v1970.m128i_i64[1] = v9.m128_i64[1];
  v2043 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v2008);
  v2009 = 0;
  v1990 = &v1995;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1995,
    &v2008,
    1,
    2);
  v10 = _mm_load_si128(&v1995);
  v2045 = 0;
  v1985 = v2050;
  v2044 = v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2050,
    (const __m128i *)&v2042);
  v2051 = 0;
  LOBYTE(v1996) = 0;
  v1980 = &v1996;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1996,
    (__int64)&v2046,
    3,
    v11,
    v12,
    v13,
    v473,
    v587,
    v701,
    v815,
    (int)&v2043,
    v1025,
    (__int64)&v2008,
    (int)&v2037,
    v1340,
    v1445,
    v1551,
    v1656,
    (__int64)&v2042,
    v1866,
    v9.m128_i64[0]);
  v14 = v2059;
  v15 = (void **)&v2052;
  v16 = v1997;
  v2059 = v1996;
  LOBYTE(v1996) = v14;
  v1997 = v2060;
  v2060 = v16;
  v1981 = &v1997;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v15 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v15 != &v2046 );
  v1979 = &v2044.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1989 = &v2008.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1978 = &v2040;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1972 = &v2012;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1977 = &v2035;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1976 = &v2030;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1975 = &v2023.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1974 = &v2019.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1973 = &v2015.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v17 = _mm_load_si128(&v1970);
  v2047 = 0;
  v2046 = ida_mcp::tools::types::`anonymous namespace'::handle_get_type_info;
  v2048 = v17;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2048.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2048.m128i_i64[0])(&v2046, &v2046, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2053);
  v2054 = 0;
  v2053 = v1986;
  v2055[0] = 0;
  v2056 = v1988;
  v2057 = 0;
  v2058[0] = 0;
  v2059 = 0;
  v2060 = 0;
  v2061 = 0;
  v2062 = 0;
  std::string::assign((__int64)&v2053, "get_function_tinfo");
  std::string::assign((__int64)v1987, "Get function type info");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2015);
  v2016 = 0;
  LOBYTE(v2017) = 0;
  *(_QWORD *)&v2018 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2017) = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "object");
  *(_QWORD *)(v18 + 8) = 6;
  v2018 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2046,
    &v2015);
  v2048.m128i_i64[0] = 0;
  v2037 = 0;
  *(_QWORD *)&v2038 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2037 = 3;
  v19 = operator new(0x20u);
  *(_QWORD *)v19 = v19 + 16;
  strcpy((char *)(v19 + 16), "properties");
  *(_QWORD *)(v19 + 8) = 10;
  v2038 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v816);
  *((_QWORD *)&v2033 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v588);
  v2020 = 0;
  v2021 = 0;
  *(_QWORD *)&v2022 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2021 = 3;
  v20 = operator new(0x20u);
  *(_QWORD *)v20 = v20 + 16;
  strcpy((char *)(v20 + 16), "string");
  *(_QWORD *)(v20 + 8) = 6;
  v2022 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    v588);
  *((_QWORD *)&v2028 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2023);
  v2024 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v2026 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1991,
    &v2023);
  v2031 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1982,
    v1026);
  v2036 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2011,
    v816);
  v2013 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1983,
    (__int64)&v2011,
    1,
    v21,
    v22,
    v23,
    v474,
    (__int64)v588,
    v702,
    (int)v816,
    v921,
    (int)v1026,
    v1131,
    v1236,
    v1341,
    v1446,
    (int)&v2026,
    (char)&v2028,
    v1761,
    (int)&v2033,
    v1970.m128i_i64[0]);
  v2041 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1984,
    v1237);
  v2049 = 0;
  v2042 = 0;
  *(_QWORD *)&v2043 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2042 = 3;
  v24 = operator new(0x20u);
  *(_QWORD *)v24 = v24 + 16;
  strcpy((char *)(v24 + 16), "required");
  *(_QWORD *)(v24 + 8) = 8;
  v2043 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1132);
  v2009 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1990,
    v1132,
    1,
    2);
  v25 = _mm_load_si128(&v1995);
  v2045 = 0;
  v2044 = v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1985,
    v1762);
  v2051 = 0;
  LOBYTE(v1996) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1980,
    (__int64)&v2046,
    3,
    v26,
    v27,
    v28,
    v475,
    v589,
    v703,
    v817,
    v922,
    v1027,
    (__int64)v1132,
    (int)v1237,
    v1342,
    v1447,
    v1552,
    v1657,
    (__int64)v1762,
    v1867,
    v1970.m128i_i64[0]);
  v29 = v2059;
  v30 = (void **)&v2052;
  v2059 = v1996;
  v31 = v2060;
  LOBYTE(v1996) = v29;
  v2060 = v1997;
  v1997 = v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v30 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v30 != &v2046 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v32 = _mm_load_si128(&v1970);
  v2047 = 0;
  v2046 = ida_mcp::tools::types::`anonymous namespace'::handle_get_function_tinfo;
  v2048 = v32;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2048.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2048.m128i_i64[0])(&v2046, &v2046, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2053);
  v2054 = 0;
  v2053 = v1986;
  v2055[0] = 0;
  v2056 = v1988;
  v2057 = 0;
  v2058[0] = 0;
  v2059 = 0;
  v2060 = 0;
  v2061 = 0;
  v2062 = 0;
  std::string::assign((__int64)&v2053, "parse_type_declaration");
  std::string::assign((__int64)v1987, "Parse C type declaration");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2015);
  v2016 = 0;
  LOBYTE(v2017) = 0;
  *(_QWORD *)&v2018 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2017) = 3;
  v33 = operator new(0x20u);
  *(_QWORD *)v33 = v33 + 16;
  strcpy((char *)(v33 + 16), "object");
  *(_QWORD *)(v33 + 8) = 6;
  v2018 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2046,
    &v2015);
  v2048.m128i_i64[0] = 0;
  v2037 = 0;
  *(_QWORD *)&v2038 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2037 = 3;
  v34 = operator new(0x20u);
  strcpy((char *)(v34 + 16), "properties");
  *(_QWORD *)v34 = v34 + 16;
  *(_QWORD *)(v34 + 8) = 10;
  v2038 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v2033 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v590);
  v2020 = 0;
  v2021 = 0;
  *(_QWORD *)&v2022 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2021 = 3;
  v35 = operator new(0x20u);
  *(_QWORD *)v35 = v35 + 16;
  strcpy((char *)(v35 + 16), "string");
  *(_QWORD *)(v35 + 8) = 6;
  v2022 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1028,
    (__int64)v590,
    2,
    v36,
    v37,
    v38,
    v476,
    (__int64)v590,
    v704,
    v818,
    v923,
    (int)v1028,
    v1133,
    v1238,
    v1343,
    v1448,
    v1553,
    v1658,
    v1763,
    v1868,
    v1970.m128i_i64[0]);
  *((_QWORD *)&v2028 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2023);
  v2024 = 0;
  v2025 = 0;
  *(_QWORD *)&v2026 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2025 = 3;
  v39 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v39, "C type string", v40, v41, v42, v43, v477, v591, v705);
  v2026 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1991,
    (__int64)&v2023,
    2,
    v44,
    v45,
    v46,
    v478,
    v592,
    v706,
    v819,
    v924,
    v1029,
    v1134,
    v1239,
    v1344,
    v1449,
    v1554,
    v1659,
    v1764,
    v1869,
    v1970.m128i_i64[0]);
  v2031 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1982,
    v1030,
    2,
    v47,
    v48,
    v49,
    v479,
    v593,
    v707,
    v820,
    v925,
    v1030,
    v1135,
    v1240,
    v1345,
    v1450,
    v1555,
    v1660,
    v1765,
    v1870,
    v1970.m128i_i64[0]);
  v2036 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2011,
    v821,
    2,
    v50,
    v51,
    v52,
    v480,
    v594,
    v708,
    v821,
    v926,
    v1031,
    v1136,
    v1241,
    v1346,
    v1451,
    v1556,
    v1661,
    v1766,
    v1871,
    v1970.m128i_i64[0]);
  v2013 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1983,
    (__int64)&v2011,
    1,
    v53,
    v54,
    v55,
    v481,
    v595,
    v709,
    v822,
    v927,
    v1032,
    v1137,
    v1242,
    v1347,
    v1452,
    v1557,
    v1662,
    v1767,
    v1872,
    v1970.m128i_i64[0]);
  v2041 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1984,
    v1243,
    2,
    v56,
    v57,
    v58,
    v482,
    v596,
    v710,
    v823,
    v928,
    v1033,
    v1138,
    v1243,
    v1348,
    v1453,
    v1558,
    v1663,
    v1768,
    v1873,
    v1970.m128i_i64[0]);
  v2049 = 0;
  v2042 = 0;
  *(_QWORD *)&v2043 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2042 = 3;
  v59 = operator new(0x20u);
  *(_QWORD *)v59 = v59 + 16;
  strcpy((char *)(v59 + 16), "required");
  *(_QWORD *)(v59 + 8) = 8;
  v2043 = (unsigned __int64)v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  v2009 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1990,
    v1139,
    1,
    2);
  v60 = _mm_load_si128(&v1995);
  v2045 = 0;
  v2044 = v60;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1985,
    v1769,
    2,
    v61,
    v62,
    v63,
    v483,
    v597,
    v711,
    v824,
    v929,
    v1034,
    (__int64)v1139,
    v1244,
    v1349,
    v1454,
    v1559,
    v1664,
    v1769,
    v1874,
    v1970.m128i_i64[0]);
  v2051 = 0;
  LOBYTE(v1996) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1980,
    (__int64)&v2046,
    3,
    v64,
    v65,
    v66,
    v484,
    v598,
    v712,
    v825,
    v930,
    v1035,
    v1140,
    v1245,
    v1350,
    v1455,
    v1560,
    v1665,
    v1770,
    v1875,
    v1970.m128i_i64[0]);
  v67 = v2059;
  v68 = (void **)&v2052;
  v2059 = v1996;
  v69 = v2060;
  LOBYTE(v1996) = v67;
  v2060 = v1997;
  v1997 = v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v68 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v68 != &v2046 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v70 = _mm_load_si128(&v1970);
  v2047 = 0;
  v2046 = ida_mcp::tools::types::`anonymous namespace'::handle_parse_type_declaration;
  v2048 = v70;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2048.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2048.m128i_i64[0])(&v2046, &v2046, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2053);
  v2054 = 0;
  v2053 = v1986;
  v2055[0] = 0;
  v2056 = v1988;
  v2057 = 0;
  v2058[0] = 0;
  v2059 = 0;
  v2060 = 0;
  v2061 = 0;
  v2062 = 0;
  std::string::assign((__int64)&v2053, "guess_function_type");
  std::string::assign((__int64)v1987, "Guess function signature");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2015);
  v2016 = 0;
  LOBYTE(v2017) = 0;
  *(_QWORD *)&v2018 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2017) = 3;
  v71 = operator new(0x20u);
  *(_QWORD *)v71 = v71 + 16;
  strcpy((char *)(v71 + 16), "object");
  *(_QWORD *)(v71 + 8) = 6;
  v2018 = (unsigned __int64)v71;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2046,
    (__int64)&v2015,
    2,
    v72,
    v73,
    v74,
    v485,
    v599,
    v713,
    v826,
    v931,
    v1036,
    v1141,
    v1246,
    v1351,
    v1456,
    v1561,
    v1666,
    v1771,
    v1876,
    v1970.m128i_i64[0]);
  v2048.m128i_i64[0] = 0;
  v2037 = 0;
  *(_QWORD *)&v2038 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2037 = 3;
  v75 = operator new(0x20u);
  *(_QWORD *)v75 = v75 + 16;
  strcpy((char *)(v75 + 16), "properties");
  *(_QWORD *)(v75 + 8) = 10;
  v2038 = (unsigned __int64)v75;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v827);
  *((_QWORD *)&v2033 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v600);
  v2020 = 0;
  v2021 = 0;
  *(_QWORD *)&v2022 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2021 = 3;
  v76 = operator new(0x20u);
  *(_QWORD *)v76 = v76 + 16;
  strcpy((char *)(v76 + 16), "string");
  *(_QWORD *)(v76 + 8) = 6;
  v2022 = (unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1037,
    (__int64)v600,
    2,
    v77,
    v78,
    v79,
    v486,
    (__int64)v600,
    v714,
    (int)v827,
    v932,
    (int)v1037,
    v1142,
    v1247,
    v1352,
    v1457,
    v1562,
    v1667,
    v1772,
    v1877,
    v1970.m128i_i64[0]);
  *((_QWORD *)&v2028 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2023);
  v2024 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v2026 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1991,
    (__int64)&v2023,
    2,
    v80,
    v81,
    v82,
    v487,
    v601,
    v715,
    v828,
    v933,
    v1038,
    v1143,
    v1248,
    v1353,
    v1458,
    v1563,
    v1668,
    v1773,
    v1878,
    v1970.m128i_i64[0]);
  v2031 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1982,
    v1039,
    2,
    v83,
    v84,
    v85,
    v488,
    v602,
    v716,
    v829,
    v934,
    v1039,
    v1144,
    v1249,
    v1354,
    v1459,
    v1564,
    v1669,
    v1774,
    v1879,
    v1970.m128i_i64[0]);
  v2036 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2011,
    v830,
    2,
    v86,
    v87,
    v88,
    v489,
    v603,
    v717,
    v830,
    v935,
    v1040,
    v1145,
    v1250,
    v1355,
    v1460,
    v1565,
    v1670,
    v1775,
    v1880,
    v1970.m128i_i64[0]);
  v2013 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1983,
    (__int64)&v2011,
    1,
    v89,
    v90,
    v91,
    v490,
    v604,
    v718,
    v831,
    v936,
    v1041,
    v1146,
    v1251,
    v1356,
    v1461,
    v1566,
    v1671,
    v1776,
    v1881,
    v1970.m128i_i64[0]);
  v2041 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1984,
    v1252,
    2,
    v92,
    v93,
    v94,
    v491,
    v605,
    v719,
    v832,
    v937,
    v1042,
    v1147,
    v1252,
    v1357,
    v1462,
    v1567,
    v1672,
    v1777,
    v1882,
    v1970.m128i_i64[0]);
  v2049 = 0;
  v2042 = 0;
  *(_QWORD *)&v2043 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2042 = 3;
  v95 = operator new(0x20u);
  *(_QWORD *)v95 = v95 + 16;
  strcpy((char *)(v95 + 16), "required");
  *(_QWORD *)(v95 + 8) = 8;
  v2043 = (unsigned __int64)v95;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1148);
  v2009 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1990,
    v1148,
    1,
    2);
  v96 = _mm_load_si128(&v1995);
  v2045 = 0;
  v2044 = v96;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1985,
    v1778,
    2,
    v97,
    v98,
    v99,
    v492,
    v606,
    v720,
    v833,
    v938,
    v1043,
    (__int64)v1148,
    v1253,
    v1358,
    v1463,
    v1568,
    v1673,
    v1778,
    v1883,
    v1970.m128i_i64[0]);
  v2051 = 0;
  LOBYTE(v1996) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1980,
    (__int64)&v2046,
    3,
    v100,
    v101,
    v102,
    v493,
    v607,
    v721,
    v834,
    v939,
    v1044,
    v1149,
    v1254,
    v1359,
    v1464,
    v1569,
    v1674,
    v1779,
    v1884,
    v1970.m128i_i64[0]);
  v103 = v2059;
  v104 = (void **)&v2052;
  v2059 = v1996;
  v105 = v2060;
  LOBYTE(v1996) = v103;
  v2060 = v1997;
  v1997 = v105;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v104 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v104 != &v2046 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v106 = _mm_load_si128(&v1970);
  v2047 = 0;
  v2046 = ida_mcp::tools::types::`anonymous namespace'::handle_guess_function_type;
  v2048 = v106;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2048.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2048.m128i_i64[0])(&v2046, &v2046, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2053);
  v2054 = 0;
  v2053 = v1986;
  v2055[0] = 0;
  v2056 = v1988;
  v2057 = 0;
  v2058[0] = 0;
  v2059 = 0;
  v2060 = 0;
  v2061 = 0;
  v2062 = 0;
  std::string::assign((__int64)&v2053, "get_type_size");
  std::string::assign((__int64)v1987, "Get type size in bytes");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2015);
  v2016 = 0;
  LOBYTE(v2017) = 0;
  *(_QWORD *)&v2018 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2017) = 3;
  v107 = operator new(0x20u);
  *(_QWORD *)v107 = v107 + 16;
  strcpy((char *)(v107 + 16), "object");
  *(_QWORD *)(v107 + 8) = 6;
  v2018 = (unsigned __int64)v107;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2046,
    (__int64)&v2015,
    2,
    v108,
    v109,
    v110,
    v494,
    v608,
    v722,
    v835,
    v940,
    v1045,
    v1150,
    v1255,
    v1360,
    v1465,
    v1570,
    v1675,
    v1780,
    v1885,
    v1970.m128i_i64[0]);
  v2048.m128i_i64[0] = 0;
  v2037 = 0;
  *(_QWORD *)&v2038 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2037 = 3;
  v111 = operator new(0x20u);
  *(_QWORD *)v111 = v111 + 16;
  strcpy((char *)(v111 + 16), "properties");
  *(_QWORD *)(v111 + 8) = 10;
  v2038 = (unsigned __int64)v111;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v836);
  *((_QWORD *)&v2033 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v609);
  v2020 = 0;
  v2021 = 0;
  *(_QWORD *)&v2022 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2021 = 3;
  v112 = operator new(0x20u);
  *(_QWORD *)v112 = v112 + 16;
  strcpy((char *)(v112 + 16), "string");
  *(_QWORD *)(v112 + 8) = 6;
  v2022 = (unsigned __int64)v112;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1046,
    (__int64)v609,
    2,
    v113,
    v114,
    v115,
    v495,
    (__int64)v609,
    v723,
    (int)v836,
    v941,
    (int)v1046,
    v1151,
    v1256,
    v1361,
    v1466,
    v1571,
    v1676,
    v1781,
    v1886,
    v1970.m128i_i64[0]);
  *((_QWORD *)&v2028 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2023);
  v2024 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v2026 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1991,
    (__int64)&v2023,
    2,
    v116,
    v117,
    v118,
    v496,
    v610,
    v724,
    v837,
    v942,
    v1047,
    v1152,
    v1257,
    v1362,
    v1467,
    v1572,
    v1677,
    v1782,
    v1887,
    v1970.m128i_i64[0]);
  v2031 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1982,
    v1048,
    2,
    v119,
    v120,
    v121,
    v497,
    v611,
    v725,
    v838,
    v943,
    v1048,
    v1153,
    v1258,
    v1363,
    v1468,
    v1573,
    v1678,
    v1783,
    v1888,
    v1970.m128i_i64[0]);
  v2036 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2011,
    v839,
    2,
    v122,
    v123,
    v124,
    v498,
    v612,
    v726,
    v839,
    v944,
    v1049,
    v1154,
    v1259,
    v1364,
    v1469,
    v1574,
    v1679,
    v1784,
    v1889,
    v1970.m128i_i64[0]);
  v2013 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1983,
    (__int64)&v2011,
    1,
    v125,
    v126,
    v127,
    v499,
    v613,
    v727,
    v840,
    v945,
    v1050,
    v1155,
    v1260,
    v1365,
    v1470,
    v1575,
    v1680,
    v1785,
    v1890,
    v1970.m128i_i64[0]);
  v2041 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1984,
    v1261,
    2,
    v128,
    v129,
    v130,
    v500,
    v614,
    v728,
    v841,
    v946,
    v1051,
    v1156,
    v1261,
    v1366,
    v1471,
    v1576,
    v1681,
    v1786,
    v1891,
    v1970.m128i_i64[0]);
  v2049 = 0;
  v2042 = 0;
  *(_QWORD *)&v2043 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2042 = 3;
  v131 = operator new(0x20u);
  *(_QWORD *)v131 = v131 + 16;
  strcpy((char *)(v131 + 16), "required");
  *(_QWORD *)(v131 + 8) = 8;
  v2043 = (unsigned __int64)v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1157);
  v2009 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1990,
    v1157,
    1,
    2);
  v132 = _mm_load_si128(&v1995);
  v2045 = 0;
  v2044 = v132;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1985,
    v1787,
    2,
    v133,
    v134,
    v135,
    v501,
    v615,
    v729,
    v842,
    v947,
    v1052,
    (__int64)v1157,
    v1262,
    v1367,
    v1472,
    v1577,
    v1682,
    v1787,
    v1892,
    v1970.m128i_i64[0]);
  v2051 = 0;
  LOBYTE(v1996) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1980,
    (__int64)&v2046,
    3,
    v136,
    v137,
    v138,
    v502,
    v616,
    v730,
    v843,
    v948,
    v1053,
    v1158,
    v1263,
    v1368,
    v1473,
    v1578,
    v1683,
    v1788,
    v1893,
    v1970.m128i_i64[0]);
  v139 = v2059;
  v140 = (void **)&v2052;
  v2059 = v1996;
  v141 = v2060;
  LOBYTE(v1996) = v139;
  v2060 = v1997;
  v1997 = v141;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v140 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v140 != &v2046 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v142 = _mm_load_si128(&v1970);
  v2047 = 0;
  v2046 = ida_mcp::tools::types::`anonymous namespace'::handle_get_type_size;
  v2048 = v142;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2048.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2048.m128i_i64[0])(&v2046, &v2046, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2053);
  v2054 = 0;
  v2053 = v1986;
  v2055[0] = 0;
  v2056 = v1988;
  v2057 = 0;
  v2058[0] = 0;
  v2059 = 0;
  v2060 = 0;
  v2061 = 0;
  v2062 = 0;
  std::string::assign((__int64)&v2053, "list_enums");
  std::string::assign((__int64)v1987, "List all enum types");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2015);
  v2016 = 0;
  LOBYTE(v2017) = 0;
  *(_QWORD *)&v2018 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2017) = 3;
  v143 = operator new(0x20u);
  *(_QWORD *)v143 = v143 + 16;
  strcpy((char *)(v143 + 16), "object");
  *(_QWORD *)(v143 + 8) = 6;
  v2018 = (unsigned __int64)v143;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1789,
    (__int64)&v2015,
    2,
    v144,
    v145,
    v146,
    v503,
    v617,
    v731,
    v844,
    v949,
    v1054,
    v1159,
    v1264,
    v1369,
    v1474,
    v1579,
    v1684,
    (__int64)v1789,
    v1894,
    v1970.m128i_i64[0]);
  *((_QWORD *)&v2043 + 1) = 0;
  v2037 = 0;
  *(_QWORD *)&v2038 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2037 = 3;
  v147 = operator new(0x20u);
  *(_QWORD *)v147 = v147 + 16;
  strcpy((char *)(v147 + 16), "properties");
  *(_QWORD *)(v147 + 8) = 10;
  LOBYTE(v2032) = 0;
  *(_QWORD *)&v2033 = 0;
  v2038 = (unsigned __int64)v147;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2032) = 3;
  v148 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v148, "limit", v149, v150, v151, v152, v504, v618, v732);
  v2033 = (unsigned __int64)v148;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v619);
  v2020 = 0;
  v2021 = 0;
  *(_QWORD *)&v2022 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2021 = 3;
  v153 = operator new(0x20u);
  *(_QWORD *)v153 = v153 + 16;
  strcpy((char *)(v153 + 16), "integer");
  *(_QWORD *)(v153 + 8) = 7;
  v2022 = (unsigned __int64)v153;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2046,
    (__int64)v619,
    2,
    v154,
    v155,
    v156,
    v505,
    (__int64)v619,
    v733,
    v845,
    v950,
    v1055,
    v1160,
    v1265,
    v1370,
    v1475,
    v1580,
    v1685,
    v1790,
    v1895,
    v1970.m128i_i64[0]);
  v2048.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2023);
  v2024 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v2026 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1984,
    (__int64)&v2023,
    2,
    v157,
    v158,
    v159,
    v506,
    v620,
    v734,
    v846,
    v951,
    v1056,
    v1161,
    v1266,
    v1371,
    v1476,
    v1581,
    v1686,
    v1791,
    v1896,
    v1970.m128i_i64[0]);
  v2049 = 0;
  LOBYTE(v2027) = 0;
  *(_QWORD *)&v2028 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2027) = 3;
  v160 = operator new(0x20u);
  strcpy((char *)(v160 + 16), "default");
  *(_QWORD *)v160 = v160 + 16;
  v161 = v1985;
  *(_QWORD *)(v160 + 8) = 7;
  v2029 = 5;
  v2030 = 1000;
  v2031 = 0;
  v2028 = (unsigned __int64)v160;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v161,
    v1057,
    2,
    v162,
    v163,
    v164,
    v507,
    v621,
    v735,
    v847,
    v952,
    v1057,
    v1162,
    v1267,
    v1372,
    v1477,
    v1582,
    v1687,
    v1792,
    v1897,
    v1970.m128i_i64[0]);
  v2051 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1982,
    (__int64)&v2046,
    3,
    v165,
    v166,
    v167,
    v508,
    v622,
    v736,
    v848,
    v953,
    v1058,
    v1163,
    v1268,
    v1373,
    v1478,
    v1583,
    v1688,
    v1793,
    v1898,
    v1970.m128i_i64[0]);
  v2036 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2011,
    v849,
    2,
    v168,
    v169,
    v170,
    v509,
    v623,
    v737,
    v849,
    v954,
    v1059,
    v1164,
    v1269,
    v1374,
    v1479,
    v1584,
    v1689,
    v1794,
    v1899,
    v1970.m128i_i64[0]);
  v2013 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1983,
    (__int64)&v2011,
    1,
    v171,
    v172,
    v173,
    v510,
    v624,
    v738,
    v850,
    v955,
    v1060,
    v1165,
    v1270,
    v1375,
    v1480,
    v1585,
    v1690,
    v1795,
    v1900,
    v1970.m128i_i64[0]);
  v2041 = 0;
  v1994 = &v2044;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2044,
    v1271,
    2,
    v174,
    v175,
    v176,
    v511,
    v625,
    v739,
    v851,
    v956,
    v1061,
    v1166,
    v1271,
    v1376,
    v1481,
    v1586,
    v1691,
    v1796,
    v1901,
    v1970.m128i_i64[0]);
  v2045 = 0;
  LOBYTE(v1996) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1980,
    v1797,
    2,
    v177,
    v178,
    v179,
    v512,
    v626,
    v740,
    v852,
    v957,
    v1062,
    v1167,
    v1272,
    v1377,
    v1482,
    v1587,
    v1692,
    v1797,
    v1902,
    v1970.m128i_i64[0]);
  v180 = (void **)&v2052;
  v181 = v2059;
  v2059 = v1996;
  v182 = v2060;
  LOBYTE(v1996) = v181;
  v2060 = v1997;
  v1997 = v182;
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
    v180 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v180 != &v2046 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v183 = _mm_load_si128(&v1970);
  v2047 = 0;
  v2046 = ida_mcp::tools::types::`anonymous namespace'::handle_list_enums;
  v2048 = v183;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2048.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2048.m128i_i64[0])(&v2046, &v2046, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2053);
  v2054 = 0;
  v2053 = v1986;
  v2055[0] = 0;
  v2056 = v1988;
  v2057 = 0;
  v2058[0] = 0;
  v2059 = 0;
  v2060 = 0;
  v2061 = 0;
  v2062 = 0;
  std::string::assign((__int64)&v2053, "get_enum_members");
  std::string::assign((__int64)v1987, "Get enum members and values");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2015);
  v2016 = 0;
  v1993 = &v2017;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2017);
  *((_QWORD *)&v2018 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2046,
    (__int64)&v2015,
    2,
    v184,
    v185,
    v186,
    v513,
    v627,
    v741,
    v853,
    v958,
    v1063,
    v1168,
    v1273,
    v1378,
    v1483,
    v1588,
    v1693,
    v1798,
    v1903,
    v1970.m128i_i64[0]);
  v2048.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(v1274);
  *((_QWORD *)&v2038 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v854);
  *((_QWORD *)&v2033 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v628);
  v2020 = 0;
  v2021 = 0;
  *(_QWORD *)&v2022 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2021 = 3;
  v187 = operator new(0x20u);
  *(_QWORD *)v187 = v187 + 16;
  strcpy((char *)(v187 + 16), "string");
  *(_QWORD *)(v187 + 8) = 6;
  v2022 = (unsigned __int64)v187;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1064,
    (__int64)v628,
    2,
    v188,
    v189,
    v190,
    v514,
    (__int64)v628,
    v742,
    (int)v854,
    v959,
    (int)v1064,
    v1169,
    (int)v1274,
    v1379,
    v1484,
    v1589,
    v1694,
    v1799,
    v1904,
    v1970.m128i_i64[0]);
  *((_QWORD *)&v2028 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2023);
  v2024 = 0;
  v2025 = 0;
  *(_QWORD *)&v2026 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2025 = 3;
  v191 = operator new(0x20u);
  *(_QWORD *)v191 = v191 + 16;
  v192 = v1991;
  strcpy((char *)(v191 + 16), "Enum name");
  *(_QWORD *)(v191 + 8) = 9;
  v2026 = (unsigned __int64)v191;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v192,
    (__int64)&v2023,
    2,
    0x6D616E206D756E45LL,
    v193,
    v194,
    v515,
    v629,
    v743,
    v855,
    v960,
    v1065,
    v1170,
    v1275,
    v1380,
    v1485,
    v1590,
    v1695,
    v1800,
    v1905,
    v1970.m128i_i64[0]);
  v2031 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1982,
    v1066,
    2,
    v195,
    v196,
    v197,
    v516,
    v630,
    v744,
    v856,
    v961,
    v1066,
    v1171,
    v1276,
    v1381,
    v1486,
    v1591,
    v1696,
    v1801,
    v1906,
    v1970.m128i_i64[0]);
  v2036 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2011,
    v857,
    2,
    v198,
    v199,
    v200,
    v517,
    v631,
    v745,
    v857,
    v962,
    v1067,
    v1172,
    v1277,
    v1382,
    v1487,
    v1592,
    v1697,
    v1802,
    v1907,
    v1970.m128i_i64[0]);
  v2013 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1983,
    (__int64)&v2011,
    1,
    v201,
    v202,
    v203,
    v518,
    v632,
    v746,
    v858,
    v963,
    v1068,
    v1173,
    v1278,
    v1383,
    v1488,
    v1593,
    v1698,
    v1803,
    v1908,
    v1970.m128i_i64[0]);
  v2041 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1984,
    v1279,
    2,
    v204,
    v205,
    v206,
    v519,
    v633,
    v747,
    v859,
    v964,
    v1069,
    v1174,
    v1279,
    v1384,
    v1489,
    v1594,
    v1699,
    v1804,
    v1909,
    v1970.m128i_i64[0]);
  v2049 = 0;
  v2042 = 0;
  *(_QWORD *)&v2043 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2042 = 3;
  v207 = operator new(0x20u);
  *(_QWORD *)v207 = v207 + 16;
  strcpy((char *)(v207 + 16), "required");
  *(_QWORD *)(v207 + 8) = 8;
  v2043 = (unsigned __int64)v207;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1175);
  v2009 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1990,
    v1175,
    1,
    2);
  v208 = _mm_load_si128(&v1995);
  v2045 = 0;
  v2044 = v208;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1985,
    v1805,
    2,
    v209,
    v210,
    v211,
    v520,
    v634,
    v748,
    v860,
    v965,
    v1070,
    (__int64)v1175,
    v1280,
    v1385,
    v1490,
    v1595,
    v1700,
    v1805,
    v1910,
    v1970.m128i_i64[0]);
  v2051 = 0;
  LOBYTE(v1996) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1980,
    (__int64)&v2046,
    3,
    v212,
    v213,
    v214,
    v521,
    v635,
    v749,
    v861,
    v966,
    v1071,
    v1176,
    v1281,
    v1386,
    v1491,
    v1596,
    v1701,
    v1806,
    v1911,
    v1970.m128i_i64[0]);
  v215 = v2059;
  v216 = (void **)&v2052;
  v2059 = v1996;
  v217 = v2060;
  LOBYTE(v1996) = v215;
  v2060 = v1997;
  v1997 = v217;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v216 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v216 != &v2046 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v218 = _mm_load_si128(&v1970);
  v2047 = 0;
  v2046 = ida_mcp::tools::types::`anonymous namespace'::handle_get_enum_members;
  v2048 = v218;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2048.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2048.m128i_i64[0])(&v2046, &v2046, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2053);
  v2054 = 0;
  v2053 = v1986;
  v2055[0] = 0;
  v2056 = v1988;
  v2057 = 0;
  v2058[0] = 0;
  v2059 = 0;
  v2060 = 0;
  v2061 = 0;
  v2062 = 0;
  std::string::assign((__int64)&v2053, "list_structs");
  std::string::assign((__int64)v1987, "List all struct/union types");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2015);
  v2016 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1993);
  *((_QWORD *)&v2018 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1807,
    (__int64)&v2015,
    2,
    v219,
    v220,
    v221,
    v522,
    v636,
    v750,
    v862,
    v967,
    v1072,
    v1177,
    v1282,
    v1387,
    v1492,
    v1597,
    v1702,
    (__int64)v1807,
    v1912,
    v1970.m128i_i64[0]);
  *((_QWORD *)&v2043 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(v1283);
  *((_QWORD *)&v2038 + 1) = 0;
  LOBYTE(v2032) = 0;
  *(_QWORD *)&v2033 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2032) = 3;
  v222 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v222, "limit", v223, v224, v225, v226, v523, v637, v751);
  v2033 = (unsigned __int64)v222;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v638);
  v2020 = 0;
  v2021 = 0;
  *(_QWORD *)&v2022 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2021 = 3;
  v227 = operator new(0x20u);
  *(_QWORD *)v227 = v227 + 16;
  strcpy((char *)(v227 + 16), "integer");
  *(_QWORD *)(v227 + 8) = 7;
  v2022 = (unsigned __int64)v227;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2046,
    (__int64)v638,
    2,
    v228,
    v229,
    v230,
    v524,
    (__int64)v638,
    v752,
    v863,
    v968,
    v1073,
    v1178,
    (int)v1283,
    v1388,
    v1493,
    v1598,
    v1703,
    v1808,
    v1913,
    v1970.m128i_i64[0]);
  v2048.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2023);
  v2024 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v2026 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1984,
    (__int64)&v2023,
    2,
    v231,
    v232,
    v233,
    v525,
    v639,
    v753,
    v864,
    v969,
    v1074,
    v1179,
    v1284,
    v1389,
    v1494,
    v1599,
    v1704,
    v1809,
    v1914,
    v1970.m128i_i64[0]);
  v2049 = 0;
  LOBYTE(v2027) = 0;
  *(_QWORD *)&v2028 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2027) = 3;
  v234 = operator new(0x20u);
  strcpy((char *)(v234 + 16), "default");
  *(_QWORD *)v234 = v234 + 16;
  v235 = v1985;
  *(_QWORD *)(v234 + 8) = 7;
  v2029 = 5;
  v2030 = 1000;
  v2031 = 0;
  v2028 = (unsigned __int64)v234;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v235,
    v1075,
    2,
    v236,
    v237,
    v238,
    v526,
    v640,
    v754,
    v865,
    v970,
    v1075,
    v1180,
    v1285,
    v1390,
    v1495,
    v1600,
    v1705,
    v1810,
    v1915,
    v1970.m128i_i64[0]);
  v2051 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1982,
    (__int64)&v2046,
    3,
    v239,
    v240,
    v241,
    v527,
    v641,
    v755,
    v866,
    v971,
    v1076,
    v1181,
    v1286,
    v1391,
    v1496,
    v1601,
    v1706,
    v1811,
    v1916,
    v1970.m128i_i64[0]);
  v2036 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2011,
    v867,
    2,
    v242,
    v243,
    v244,
    v528,
    v642,
    v756,
    v867,
    v972,
    v1077,
    v1182,
    v1287,
    v1392,
    v1497,
    v1602,
    v1707,
    v1812,
    v1917,
    v1970.m128i_i64[0]);
  v2013 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1983,
    (__int64)&v2011,
    1,
    v245,
    v246,
    v247,
    v529,
    v643,
    v757,
    v868,
    v973,
    v1078,
    v1183,
    v1288,
    v1393,
    v1498,
    v1603,
    v1708,
    v1813,
    v1918,
    v1970.m128i_i64[0]);
  v2041 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1994,
    v1289,
    2,
    v248,
    v249,
    v250,
    v530,
    v644,
    v758,
    v869,
    v974,
    v1079,
    v1184,
    v1289,
    v1394,
    v1499,
    v1604,
    v1709,
    v1814,
    v1919,
    v1970.m128i_i64[0]);
  v2045 = 0;
  LOBYTE(v1996) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1980,
    v1815,
    2,
    v251,
    v252,
    v253,
    v531,
    v645,
    v759,
    v870,
    v975,
    v1080,
    v1185,
    v1290,
    v1395,
    v1500,
    v1605,
    v1710,
    v1815,
    v1920,
    v1970.m128i_i64[0]);
  v254 = (void **)&v2052;
  v255 = v2059;
  v2059 = v1996;
  v256 = v2060;
  LOBYTE(v1996) = v255;
  v2060 = v1997;
  v1997 = v256;
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
    v254 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v254 != &v2046 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v257 = _mm_load_si128(&v1970);
  v2047 = 0;
  v2046 = ida_mcp::tools::types::`anonymous namespace'::handle_list_structs;
  v2048 = v257;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2048.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2048.m128i_i64[0])(&v2046, &v2046, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2053);
  v2054 = 0;
  v2053 = v1986;
  v2055[0] = 0;
  v2056 = v1988;
  v2057 = 0;
  v2058[0] = 0;
  v2059 = 0;
  v2060 = 0;
  v2061 = 0;
  v2062 = 0;
  std::string::assign((__int64)&v2053, "get_struct_members");
  std::string::assign((__int64)v1987, "Get struct/union members");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2015);
  v2016 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1993);
  *((_QWORD *)&v2018 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2046,
    (__int64)&v2015,
    2,
    v258,
    v259,
    v260,
    v532,
    v646,
    v760,
    v871,
    v976,
    v1081,
    v1186,
    v1291,
    v1396,
    v1501,
    v1606,
    v1711,
    v1816,
    v1921,
    v1970.m128i_i64[0]);
  v2048.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(v1292);
  *((_QWORD *)&v2038 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v872);
  *((_QWORD *)&v2033 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v647);
  v2020 = 0;
  v2021 = 0;
  *(_QWORD *)&v2022 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2021 = 3;
  v261 = operator new(0x20u);
  *(_QWORD *)v261 = v261 + 16;
  strcpy((char *)(v261 + 16), "string");
  *(_QWORD *)(v261 + 8) = 6;
  v2022 = (unsigned __int64)v261;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1082,
    (__int64)v647,
    2,
    v262,
    v263,
    v264,
    v533,
    (__int64)v647,
    v761,
    (int)v872,
    v977,
    (int)v1082,
    v1187,
    (int)v1292,
    v1397,
    v1502,
    v1607,
    v1712,
    v1817,
    v1922,
    v1970.m128i_i64[0]);
  *((_QWORD *)&v2028 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2023);
  v2024 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v2026 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1991,
    (__int64)&v2023,
    2,
    v265,
    v266,
    v267,
    v534,
    v648,
    v762,
    v873,
    v978,
    v1083,
    v1188,
    v1293,
    v1398,
    v1503,
    v1608,
    v1713,
    v1818,
    v1923,
    v1970.m128i_i64[0]);
  v2031 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1982,
    v1084,
    2,
    v268,
    v269,
    v270,
    v535,
    v649,
    v763,
    v874,
    v979,
    v1084,
    v1189,
    v1294,
    v1399,
    v1504,
    v1609,
    v1714,
    v1819,
    v1924,
    v1970.m128i_i64[0]);
  v2036 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2011,
    v875,
    2,
    v271,
    v272,
    v273,
    v536,
    v650,
    v764,
    v875,
    v980,
    v1085,
    v1190,
    v1295,
    v1400,
    v1505,
    v1610,
    v1715,
    v1820,
    v1925,
    v1970.m128i_i64[0]);
  v2013 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1983,
    (__int64)&v2011,
    1,
    v274,
    v275,
    v276,
    v537,
    v651,
    v765,
    v876,
    v981,
    v1086,
    v1191,
    v1296,
    v1401,
    v1506,
    v1611,
    v1716,
    v1821,
    v1926,
    v1970.m128i_i64[0]);
  v2041 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1984,
    v1297,
    2,
    v277,
    v278,
    v279,
    v538,
    v652,
    v766,
    v877,
    v982,
    v1087,
    v1192,
    v1297,
    v1402,
    v1507,
    v1612,
    v1717,
    v1822,
    v1927,
    v1970.m128i_i64[0]);
  v2049 = 0;
  v2042 = 0;
  *(_QWORD *)&v2043 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2042 = 3;
  v280 = operator new(0x20u);
  *(_QWORD *)v280 = v280 + 16;
  strcpy((char *)(v280 + 16), "required");
  *(_QWORD *)(v280 + 8) = 8;
  v2043 = (unsigned __int64)v280;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1193);
  v2009 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1990,
    v1193,
    1,
    2);
  v281 = _mm_load_si128(&v1995);
  v2045 = 0;
  v2044 = v281;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1985,
    v1823,
    2,
    v282,
    v283,
    v284,
    v539,
    v653,
    v767,
    v878,
    v983,
    v1088,
    (__int64)v1193,
    v1298,
    v1403,
    v1508,
    v1613,
    v1718,
    v1823,
    v1928,
    v1970.m128i_i64[0]);
  v2051 = 0;
  LOBYTE(v1996) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1980,
    (__int64)&v2046,
    3,
    v285,
    v286,
    v287,
    v540,
    v654,
    v768,
    v879,
    v984,
    v1089,
    v1194,
    v1299,
    v1404,
    v1509,
    v1614,
    v1719,
    v1824,
    v1929,
    v1970.m128i_i64[0]);
  v288 = v2059;
  v289 = (void **)&v2052;
  v2059 = v1996;
  v290 = v2060;
  LOBYTE(v1996) = v288;
  v2060 = v1997;
  v1997 = v290;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v289 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v289 != &v2046 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v291 = _mm_load_si128(&v1970);
  v2047 = 0;
  v2046 = ida_mcp::tools::types::`anonymous namespace'::handle_get_struct_members;
  v2048 = v291;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2048.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2048.m128i_i64[0])(&v2046, &v2046, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2053);
  v2054 = 0;
  v2053 = v1986;
  v2055[0] = 0;
  v2056 = v1988;
  v2057 = 0;
  v2058[0] = 0;
  v2059 = 0;
  v2060 = 0;
  v2061 = 0;
  v2062 = 0;
  std::string::assign((__int64)&v2053, "get_array_info");
  std::string::assign((__int64)v1987, "Get array type details");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2015);
  v2016 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1993);
  *((_QWORD *)&v2018 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2046,
    (__int64)&v2015,
    2,
    v292,
    v293,
    v294,
    v541,
    v655,
    v769,
    v880,
    v985,
    v1090,
    v1195,
    v1300,
    v1405,
    v1510,
    v1615,
    v1720,
    v1825,
    v1930,
    v1970.m128i_i64[0]);
  v2048.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(v1301);
  *((_QWORD *)&v2038 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v881);
  *((_QWORD *)&v2033 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v656);
  v2020 = 0;
  v2021 = 0;
  *(_QWORD *)&v2022 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2021 = 3;
  v295 = operator new(0x20u);
  *(_QWORD *)v295 = v295 + 16;
  strcpy((char *)(v295 + 16), "string");
  *(_QWORD *)(v295 + 8) = 6;
  v2022 = (unsigned __int64)v295;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1091,
    (__int64)v656,
    2,
    v296,
    v297,
    v298,
    v542,
    (__int64)v656,
    v770,
    (int)v881,
    v986,
    (int)v1091,
    v1196,
    (int)v1301,
    v1406,
    v1511,
    v1616,
    v1721,
    v1826,
    v1931,
    v1970.m128i_i64[0]);
  *((_QWORD *)&v2028 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2023);
  v2024 = 0;
  v2025 = 0;
  *(_QWORD *)&v2026 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2025 = 3;
  v299 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v299, "Array type name", v300, v301, v302, v303, v543, v657, v771);
  v2026 = (unsigned __int64)v299;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1991,
    (__int64)&v2023,
    2,
    v304,
    v305,
    v306,
    v544,
    v658,
    v772,
    v882,
    v987,
    v1092,
    v1197,
    v1302,
    v1407,
    v1512,
    v1617,
    v1722,
    v1827,
    v1932,
    v1970.m128i_i64[0]);
  v2031 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1982,
    v1093,
    2,
    v307,
    v308,
    v309,
    v545,
    v659,
    v773,
    v883,
    v988,
    v1093,
    v1198,
    v1303,
    v1408,
    v1513,
    v1618,
    v1723,
    v1828,
    v1933,
    v1970.m128i_i64[0]);
  v2036 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2011,
    v884,
    2,
    v310,
    v311,
    v312,
    v546,
    v660,
    v774,
    v884,
    v989,
    v1094,
    v1199,
    v1304,
    v1409,
    v1514,
    v1619,
    v1724,
    v1829,
    v1934,
    v1970.m128i_i64[0]);
  v2013 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1983,
    (__int64)&v2011,
    1,
    v313,
    v314,
    v315,
    v547,
    v661,
    v775,
    v885,
    v990,
    v1095,
    v1200,
    v1305,
    v1410,
    v1515,
    v1620,
    v1725,
    v1830,
    v1935,
    v1970.m128i_i64[0]);
  v2041 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1984,
    v1306,
    2,
    v316,
    v317,
    v318,
    v548,
    v662,
    v776,
    v886,
    v991,
    v1096,
    v1201,
    v1306,
    v1411,
    v1516,
    v1621,
    v1726,
    v1831,
    v1936,
    v1970.m128i_i64[0]);
  v2049 = 0;
  v2042 = 0;
  *(_QWORD *)&v2043 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2042 = 3;
  v319 = operator new(0x20u);
  *(_QWORD *)v319 = v319 + 16;
  strcpy((char *)(v319 + 16), "required");
  *(_QWORD *)(v319 + 8) = 8;
  v2043 = (unsigned __int64)v319;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1202);
  v2009 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1990,
    v1202,
    1,
    2);
  v320 = _mm_load_si128(&v1995);
  v2045 = 0;
  v2044 = v320;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1985,
    v1832,
    2,
    v321,
    v322,
    v323,
    v549,
    v663,
    v777,
    v887,
    v992,
    v1097,
    (__int64)v1202,
    v1307,
    v1412,
    v1517,
    v1622,
    v1727,
    v1832,
    v1937,
    v1970.m128i_i64[0]);
  v2051 = 0;
  LOBYTE(v1996) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1980,
    (__int64)&v2046,
    3,
    v324,
    v325,
    v326,
    v550,
    v664,
    v778,
    v888,
    v993,
    v1098,
    v1203,
    v1308,
    v1413,
    v1518,
    v1623,
    v1728,
    v1833,
    v1938,
    v1970.m128i_i64[0]);
  v327 = v2059;
  v328 = (void **)&v2052;
  v2059 = v1996;
  v329 = v2060;
  LOBYTE(v1996) = v327;
  v2060 = v1997;
  v1997 = v329;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v328 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v328 != &v2046 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v330 = _mm_load_si128(&v1970);
  v2047 = 0;
  v2046 = ida_mcp::tools::types::`anonymous namespace'::handle_get_array_info;
  v2048 = v330;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2048.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2048.m128i_i64[0])(&v2046, &v2046, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2053);
  v2054 = 0;
  v2053 = v1986;
  v2055[0] = 0;
  v2056 = v1988;
  v2057 = 0;
  v2058[0] = 0;
  v2059 = 0;
  v2060 = 0;
  v2061 = 0;
  v2062 = 0;
  std::string::assign((__int64)&v2053, "build_anon_type_name");
  std::string::assign((__int64)v1987, "Generate a name for an anonymous struct/union/enum type at address");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2015);
  v2016 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1993);
  *((_QWORD *)&v2018 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2046,
    (__int64)&v2015,
    2,
    v331,
    v332,
    v333,
    v551,
    v665,
    v779,
    v889,
    v994,
    v1099,
    v1204,
    v1309,
    v1414,
    v1519,
    v1624,
    v1729,
    v1834,
    v1939,
    v1970.m128i_i64[0]);
  v2048.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(v1310);
  *((_QWORD *)&v2038 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v890);
  *((_QWORD *)&v2033 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v666);
  v2020 = 0;
  v2021 = 0;
  *(_QWORD *)&v2022 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2021 = 3;
  v334 = operator new(0x20u);
  *(_QWORD *)v334 = v334 + 16;
  strcpy((char *)(v334 + 16), "string");
  *(_QWORD *)(v334 + 8) = 6;
  v2022 = (unsigned __int64)v334;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1100,
    (__int64)v666,
    2,
    v335,
    v336,
    v337,
    v552,
    (__int64)v666,
    v780,
    (int)v890,
    v995,
    (int)v1100,
    v1205,
    (int)v1310,
    v1415,
    v1520,
    v1625,
    v1730,
    v1835,
    v1940,
    v1970.m128i_i64[0]);
  *((_QWORD *)&v2028 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2023);
  v2024 = 0;
  v2025 = 0;
  *(_QWORD *)&v2026 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2025 = 3;
  v338 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v338,
    "Hex address with anonymous type",
    v339,
    v340,
    v341,
    v342,
    v553,
    v667,
    v781);
  v2026 = (unsigned __int64)v338;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1991,
    (__int64)&v2023,
    2,
    v343,
    v344,
    v345,
    v554,
    v668,
    v782,
    v891,
    v996,
    v1101,
    v1206,
    v1311,
    v1416,
    v1521,
    v1626,
    v1731,
    v1836,
    v1941,
    v1970.m128i_i64[0]);
  v2031 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1982,
    v1102,
    2,
    v346,
    v347,
    v348,
    v555,
    v669,
    v783,
    v892,
    v997,
    v1102,
    v1207,
    v1312,
    v1417,
    v1522,
    v1627,
    v1732,
    v1837,
    v1942,
    v1970.m128i_i64[0]);
  v2036 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2011,
    v893,
    2,
    v349,
    v350,
    v351,
    v556,
    v670,
    v784,
    v893,
    v998,
    v1103,
    v1208,
    v1313,
    v1418,
    v1523,
    v1628,
    v1733,
    v1838,
    v1943,
    v1970.m128i_i64[0]);
  v2013 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1983,
    (__int64)&v2011,
    1,
    v352,
    v353,
    v354,
    v557,
    v671,
    v785,
    v894,
    v999,
    v1104,
    v1209,
    v1314,
    v1419,
    v1524,
    v1629,
    v1734,
    v1839,
    v1944,
    v1970.m128i_i64[0]);
  v2041 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1984,
    v1315,
    2,
    v355,
    v356,
    v357,
    v558,
    v672,
    v786,
    v895,
    v1000,
    v1105,
    v1210,
    v1315,
    v1420,
    v1525,
    v1630,
    v1735,
    v1840,
    v1945,
    v1970.m128i_i64[0]);
  v2049 = 0;
  v2042 = 0;
  *(_QWORD *)&v2043 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2042 = 3;
  v358 = operator new(0x20u);
  *(_QWORD *)v358 = v358 + 16;
  strcpy((char *)(v358 + 16), "required");
  *(_QWORD *)(v358 + 8) = 8;
  v2043 = (unsigned __int64)v358;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1211);
  v2009 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1990,
    v1211,
    1,
    2);
  v359 = _mm_load_si128(&v1995);
  v2045 = 0;
  v2044 = v359;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1985,
    v1841,
    2,
    v360,
    v361,
    v362,
    v559,
    v673,
    v787,
    v896,
    v1001,
    v1106,
    (__int64)v1211,
    v1316,
    v1421,
    v1526,
    v1631,
    v1736,
    v1841,
    v1946,
    v1970.m128i_i64[0]);
  v2051 = 0;
  LOBYTE(v1996) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1980,
    (__int64)&v2046,
    3,
    v363,
    v364,
    v365,
    v560,
    v674,
    v788,
    v897,
    v1002,
    v1107,
    v1212,
    v1317,
    v1422,
    v1527,
    v1632,
    v1737,
    v1842,
    v1947,
    v1970.m128i_i64[0]);
  v366 = v2059;
  v367 = (void **)&v2052;
  v2059 = v1996;
  v368 = v2060;
  LOBYTE(v1996) = v366;
  v2060 = v1997;
  v1997 = v368;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v367 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v367 != &v2046 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v369 = _mm_load_si128(&v1970);
  v2047 = 0;
  v2046 = ida_mcp::tools::types::handle_build_anon_type_name;
  v2048 = v369;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2048.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2048.m128i_i64[0])(&v2046, &v2046, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2053);
  v2054 = 0;
  v2053 = v1986;
  v2055[0] = 0;
  v2056 = v1988;
  v2057 = 0;
  v2058[0] = 0;
  v2059 = 0;
  v2060 = 0;
  v2061 = 0;
  v2062 = 0;
  std::string::assign((__int64)&v2053, "deduplicate_struct_members");
  std::string::assign((__int64)v1987, "Remove duplicate members from a struct/union type definition");
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2015);
  v2016 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1993);
  *((_QWORD *)&v2018 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2046,
    (__int64)&v2015,
    2,
    v370,
    v371,
    v372,
    v561,
    v675,
    v789,
    v898,
    v1003,
    v1108,
    v1213,
    v1318,
    v1423,
    v1528,
    v1633,
    v1738,
    v1843,
    v1948,
    v1970.m128i_i64[0]);
  v2048.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(v1319);
  *((_QWORD *)&v2038 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v899);
  *((_QWORD *)&v2033 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v676);
  v2020 = 0;
  v2021 = 0;
  *(_QWORD *)&v2022 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2021 = 3;
  v373 = operator new(0x20u);
  *(_QWORD *)v373 = v373 + 16;
  strcpy((char *)(v373 + 16), "string");
  *(_QWORD *)(v373 + 8) = 6;
  v2022 = (unsigned __int64)v373;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1109,
    (__int64)v676,
    2,
    v374,
    v375,
    v376,
    v562,
    (__int64)v676,
    v790,
    (int)v899,
    v1004,
    (int)v1109,
    v1214,
    (int)v1319,
    v1424,
    v1529,
    v1634,
    v1739,
    v1844,
    v1949,
    v1970.m128i_i64[0]);
  *((_QWORD *)&v2028 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2023);
  v2024 = 0;
  v2025 = 0;
  *(_QWORD *)&v2026 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2025 = 3;
  v377 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v377,
    "Struct/union type name",
    v378,
    v379,
    v380,
    v381,
    v563,
    v677,
    v791);
  v2026 = (unsigned __int64)v377;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1991,
    (__int64)&v2023,
    2,
    v382,
    v383,
    v384,
    v564,
    v678,
    v792,
    v900,
    v1005,
    v1110,
    v1215,
    v1320,
    v1425,
    v1530,
    v1635,
    v1740,
    v1845,
    v1950,
    v1970.m128i_i64[0]);
  v2031 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1982,
    v1111,
    2,
    v385,
    v386,
    v387,
    v565,
    v679,
    v793,
    v901,
    v1006,
    v1111,
    v1216,
    v1321,
    v1426,
    v1531,
    v1636,
    v1741,
    v1846,
    v1951,
    v1970.m128i_i64[0]);
  v2036 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2011,
    v902,
    2,
    v388,
    v389,
    v390,
    v566,
    v680,
    v794,
    v902,
    v1007,
    v1112,
    v1217,
    v1322,
    v1427,
    v1532,
    v1637,
    v1742,
    v1847,
    v1952,
    v1970.m128i_i64[0]);
  v2013 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1983,
    (__int64)&v2011,
    1,
    v391,
    v392,
    v393,
    v567,
    v681,
    v795,
    v903,
    v1008,
    v1113,
    v1218,
    v1323,
    v1428,
    v1533,
    v1638,
    v1743,
    v1848,
    v1953,
    v1970.m128i_i64[0]);
  v2041 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1984,
    v1324,
    2,
    v394,
    v395,
    v396,
    v568,
    v682,
    v796,
    v904,
    v1009,
    v1114,
    v1219,
    v1324,
    v1429,
    v1534,
    v1639,
    v1744,
    v1849,
    v1954,
    v1970.m128i_i64[0]);
  v2049 = 0;
  v2042 = 0;
  *(_QWORD *)&v2043 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2042 = 3;
  v397 = operator new(0x20u);
  *(_QWORD *)v397 = v397 + 16;
  strcpy((char *)(v397 + 16), "required");
  *(_QWORD *)(v397 + 8) = 8;
  v2043 = (unsigned __int64)v397;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1220);
  v2009 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1990,
    v1220,
    1,
    2);
  v398 = _mm_load_si128(&v1995);
  v2045 = 0;
  v2044 = v398;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1985,
    v1850,
    2,
    v399,
    v400,
    v401,
    v569,
    v683,
    v797,
    v905,
    v1010,
    v1115,
    (__int64)v1220,
    v1325,
    v1430,
    v1535,
    v1640,
    v1745,
    v1850,
    v1955,
    v1970.m128i_i64[0]);
  v2051 = 0;
  LOBYTE(v1996) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1980,
    (__int64)&v2046,
    3,
    v402,
    v403,
    v404,
    v570,
    v684,
    v798,
    v906,
    v1011,
    v1116,
    v1221,
    v1326,
    v1431,
    v1536,
    v1641,
    v1746,
    v1851,
    v1956,
    v1970.m128i_i64[0]);
  v405 = v2059;
  v406 = (void **)&v2052;
  v2059 = v1996;
  v407 = v2060;
  LOBYTE(v1996) = v405;
  v2060 = v1997;
  v1997 = v407;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v406 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v406 != &v2046 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v408 = _mm_load_si128(&v1970);
  v2047 = 0;
  v2046 = ida_mcp::tools::types::handle_deduplicate_members;
  v2048 = v408;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2048.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2048.m128i_i64[0])(&v2046, &v2046, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2053);
  v2054 = 0;
  v2053 = v1986;
  v2055[0] = 0;
  v2056 = v1988;
  v2057 = 0;
  v2058[0] = 0;
  v2059 = 0;
  v2060 = 0;
  v2061 = 0;
  v2062 = 0;
  std::string::assign((__int64)&v2053, "get_deref_chain");
  std::string::_M_replace();
  v1986 = v2000;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v2000);
  v2000[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v2001);
  v2001[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2046,
    (__int64)v1986,
    2,
    v409,
    v410,
    v411,
    v571,
    v685,
    v799,
    v907,
    v1012,
    v1117,
    v1222,
    v1327,
    v1432,
    v1537,
    v1642,
    v1747,
    v1852,
    v1957,
    v1970.m128i_i64[0]);
  v2048.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>(v1328);
  *((_QWORD *)&v2038 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v2011);
  v2013 = 0;
  v1987 = (__int128 **)v2002;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v2002);
  v2002[2] = 0;
  v2003 = 0;
  *(_QWORD *)&v2004 = 0;
  v1988 = &v2004;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2003 = 3;
  v412 = operator new(0x20u);
  v413 = (__int64)v1987;
  *(_QWORD *)v412 = v412 + 16;
  strcpy((char *)(v412 + 16), "string");
  *(_QWORD *)(v412 + 8) = 6;
  v2004 = (unsigned __int64)v412;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1223,
    v413,
    2,
    v414,
    v415,
    v416,
    v572,
    v686,
    v800,
    v908,
    v1013,
    v1118,
    (__int64)v1223,
    (int)v1328,
    v1433,
    v1538,
    v1643,
    v1748,
    v1853,
    v1958,
    v1970.m128i_i64[0]);
  v2009 = 0;
  v1993 = v2005;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v2005);
  v2005[2] = 0;
  v2006 = 0;
  *(_QWORD *)&v2007 = 0;
  v1994 = (__m128i *)&v2007;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2006 = 3;
  v417 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v417,
    "Hex address to dereference",
    v418,
    v419,
    v420,
    v421,
    v573,
    v687,
    v801);
  v2007 = (unsigned __int64)v417;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2010,
    (__int64)v1993,
    2,
    v422,
    v423,
    v424,
    v574,
    v688,
    v802,
    v909,
    v1014,
    v1119,
    v1224,
    v1329,
    v1434,
    v1539,
    v1644,
    v1749,
    v1854,
    v1959,
    v1970.m128i_i64[0]);
  v2010[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2014,
    v1225,
    2,
    v425,
    v426,
    v427,
    v575,
    v689,
    v803,
    v910,
    v1015,
    v1120,
    v1225,
    v1330,
    v1435,
    v1540,
    v1645,
    v1750,
    v1855,
    v1960,
    v1970.m128i_i64[0]);
  v2014[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v911,
    (__int64)&v2011,
    2,
    v428,
    v429,
    v430,
    v576,
    v690,
    v804,
    (int)v911,
    v1016,
    v1121,
    v1226,
    v1331,
    v1436,
    v1541,
    v1646,
    v1751,
    v1856,
    v1961,
    v1970.m128i_i64[0]);
  *((_QWORD *)&v2033 + 1) = 0;
  LOBYTE(v2027) = 0;
  *(_QWORD *)&v2028 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2027) = 3;
  v431 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v431, "detailed", v432, v433, v434, v435, v577, v691, v805);
  v2028 = (unsigned __int64)v431;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2015);
  v2016 = 0;
  LOBYTE(v2017) = 0;
  *(_QWORD *)&v2018 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2017) = 3;
  v436 = operator new(0x20u);
  *(_QWORD *)v436 = v436 + 16;
  strcpy((char *)(v436 + 16), "boolean");
  *(_QWORD *)(v436 + 8) = 7;
  v2018 = (unsigned __int64)v436;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2023,
    (__int64)&v2015,
    2,
    v437,
    v438,
    v439,
    v578,
    v692,
    v806,
    v912,
    v1017,
    v1122,
    v1227,
    v1332,
    v1437,
    v1542,
    v1647,
    v1752,
    v1857,
    v1962,
    v1970.m128i_i64[0]);
  v2024 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v693);
  v2020 = 0;
  v2021 = 0;
  *(_QWORD *)&v2022 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2021 = 3;
  v440 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v440,
    "Show detailed chain info (default false)",
    v441,
    v442,
    v443,
    v444,
    v579,
    (int)v693,
    v807);
  v2022 = (unsigned __int64)v440;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1992,
    v694,
    2,
    v445,
    v446,
    v447,
    v580,
    v694,
    v808,
    v913,
    v1018,
    v1123,
    v1228,
    v1333,
    v1438,
    v1543,
    v1648,
    v1753,
    v1858,
    v1963,
    v1970.m128i_i64[0]);
  *((_QWORD *)&v2026 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1991,
    (__int64)&v2023,
    2,
    v448,
    v449,
    v450,
    v581,
    v695,
    v809,
    v914,
    v1019,
    v1124,
    v1229,
    v1334,
    v1439,
    v1544,
    v1649,
    v1754,
    v1859,
    v1964,
    v1970.m128i_i64[0]);
  v2031 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1982,
    v1125,
    2,
    v451,
    v452,
    v453,
    v582,
    v696,
    v810,
    v915,
    v1020,
    v1125,
    v1230,
    v1335,
    v1440,
    v1545,
    v1650,
    v1755,
    v1860,
    v1965,
    v1970.m128i_i64[0]);
  v2036 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1983,
    v916,
    2,
    v454,
    v455,
    v456,
    v583,
    v697,
    v811,
    v916,
    v1021,
    v1126,
    v1231,
    v1336,
    v1441,
    v1546,
    v1651,
    v1756,
    v1861,
    v1966,
    v1970.m128i_i64[0]);
  v2041 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1984,
    v1337,
    2,
    v457,
    v458,
    v459,
    v584,
    v698,
    v812,
    v917,
    v1022,
    v1127,
    v1232,
    v1337,
    v1442,
    v1547,
    v1652,
    v1757,
    v1862,
    v1967,
    v1970.m128i_i64[0]);
  v2049 = 0;
  v2042 = 0;
  *(_QWORD *)&v2043 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2042 = 3;
  v460 = operator new(0x20u);
  *(_QWORD *)v460 = v460 + 16;
  strcpy((char *)(v460 + 16), "required");
  *(_QWORD *)(v460 + 8) = 8;
  v2043 = (unsigned __int64)v460;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1998);
  v1999 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1990,
    &v1998,
    1,
    2);
  v461 = _mm_load_si128(&v1995);
  v2045 = 0;
  v2044 = v461;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1985,
    v1863,
    2,
    v462,
    v463,
    v464,
    v585,
    v699,
    v813,
    v918,
    v1023,
    v1128,
    v1233,
    v1338,
    v1443,
    v1548,
    v1653,
    v1758,
    v1863,
    v1968,
    v1970.m128i_i64[0]);
  v2051 = 0;
  LOBYTE(v1996) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1980,
    (__int64)&v2046,
    3,
    v465,
    v466,
    v467,
    v586,
    v700,
    v814,
    v919,
    v1024,
    v1129,
    v1234,
    v1339,
    v1444,
    v1549,
    v1654,
    v1759,
    v1864,
    v1969,
    v1970.m128i_i64[0]);
  LOBYTE(v413) = v2059;
  v468 = (void **)&v2052;
  v2059 = v1996;
  v469 = v2060;
  LOBYTE(v1996) = v413;
  v2060 = v1997;
  v1997 = v469;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v468 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v468 != &v2046 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v470 = _mm_load_si128(&v1970);
  v2047 = 0;
  v2046 = ida_mcp::tools::types::handle_generate_deref;
  v2048 = v470;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v2048.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v2048.m128i_i64[0])(&v2046, &v2046, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v2053);
  return v2063 - __readfsqword(0x28u);
}

