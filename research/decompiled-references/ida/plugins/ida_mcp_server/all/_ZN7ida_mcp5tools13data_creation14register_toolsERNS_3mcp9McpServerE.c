unsigned __int64 __fastcall ida_mcp::tools::data_creation::register_tools(
        ida_mcp::tools::data_creation *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
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
  __int64 *v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 *v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __m128i v50; // xmm0
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  char v54; // si
  void **v55; // r13
  __int64 v56; // rdx
  __int64 *v57; // r13
  __m128i si128; // xmm2
  __int64 *v59; // r13
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 *v64; // r13
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 *v69; // r13
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 *v74; // r13
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 *v79; // r13
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 *v84; // r13
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
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 *v98; // r13
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 *v106; // r13
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 *v126; // r13
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __m128i v131; // xmm0
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  char v138; // si
  void **v139; // r12
  __int64 v140; // rax
  __int64 *v141; // r12
  __m128i v142; // xmm3
  __int64 *v143; // r12
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 *v151; // r12
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 *v156; // r12
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 *v164; // r12
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 *v178; // r12
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 *v186; // r12
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 v203; // rcx
  __int64 v204; // r8
  __int64 v205; // r9
  __int64 *v206; // r13
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r9
  __m128i v211; // xmm0
  __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  char v218; // si
  void **v219; // r13
  __int64 v220; // rax
  __m128i v221; // xmm4
  __int64 *v222; // r13
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // r8
  __int64 v226; // r9
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // r9
  __int64 *v230; // r13
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  __int64 *v235; // r13
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // r8
  __int64 v239; // r9
  __int64 v240; // rcx
  __int64 v241; // r8
  __int64 v242; // r9
  __int64 *v243; // r13
  __int64 v244; // rdx
  __int64 v245; // rcx
  __int64 v246; // r8
  __int64 v247; // r9
  __int64 v248; // rcx
  __int64 v249; // r8
  __int64 v250; // r9
  __int64 v251; // rcx
  __int64 v252; // r8
  __int64 v253; // r9
  __int64 v254; // rcx
  __int64 v255; // r8
  __int64 v256; // r9
  __int64 v257; // rcx
  __int64 v258; // r8
  __int64 v259; // r9
  __int64 v260; // rcx
  __int64 v261; // r8
  __int64 v262; // r9
  __int64 *v263; // r13
  __int64 v264; // rdx
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
  char v275; // si
  void **v276; // r13
  __int64 v277; // rax
  __m128i v278; // xmm5
  __int64 *v279; // r13
  __int64 v280; // rdx
  __int64 v281; // rcx
  __int64 v282; // r8
  __int64 v283; // r9
  __int64 v284; // rcx
  __int64 v285; // r8
  __int64 v286; // r9
  __int64 *v287; // r13
  __int64 v288; // rdx
  __int64 v289; // rcx
  __int64 v290; // r8
  __int64 v291; // r9
  __int64 *v292; // r13
  __int64 v293; // rdx
  __int64 v294; // rcx
  __int64 v295; // r8
  __int64 v296; // r9
  __int64 v297; // rcx
  __int64 v298; // r8
  __int64 v299; // r9
  __int64 *v300; // r13
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
  __int64 *v320; // r13
  __int64 v321; // rdx
  __int64 v322; // rcx
  __int64 v323; // r8
  __int64 v324; // r9
  __m128i v325; // xmm0
  __int64 v326; // rcx
  __int64 v327; // r8
  __int64 v328; // r9
  __int64 v329; // rcx
  __int64 v330; // r8
  __int64 v331; // r9
  char v332; // si
  void **v333; // r13
  __int64 v334; // rax
  __m128i v335; // xmm6
  __int64 *v336; // r13
  __int64 v337; // rdx
  __int64 v338; // rcx
  __int64 v339; // r8
  __int64 v340; // r9
  __int64 v341; // rcx
  __int64 v342; // r8
  __int64 v343; // r9
  __int64 *v344; // r13
  __int64 v345; // rdx
  __int64 v346; // rcx
  __int64 v347; // r8
  __int64 v348; // r9
  __int64 *v349; // r13
  __int64 v350; // rdx
  __int64 v351; // rcx
  __int64 v352; // r8
  __int64 v353; // r9
  __int64 v354; // rcx
  __int64 v355; // r8
  __int64 v356; // r9
  __int64 *v357; // r13
  __int64 v358; // rdx
  __int64 v359; // rcx
  __int64 v360; // r8
  __int64 v361; // r9
  __int64 v362; // rcx
  __int64 v363; // r8
  __int64 v364; // r9
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
  __int64 *v377; // r13
  __int64 v378; // rdx
  __int64 v379; // rcx
  __int64 v380; // r8
  __int64 v381; // r9
  __m128i v382; // xmm0
  __int64 v383; // rcx
  __int64 v384; // r8
  __int64 v385; // r9
  __int64 v386; // rcx
  __int64 v387; // r8
  __int64 v388; // r9
  char v389; // si
  void **v390; // r13
  __int64 v391; // rax
  __m128i v392; // xmm7
  __int64 *v393; // r13
  __int64 v394; // rdx
  __int64 v395; // rcx
  __int64 v396; // r8
  __int64 v397; // r9
  __int64 v398; // rcx
  __int64 v399; // r8
  __int64 v400; // r9
  __int64 *v401; // r13
  __int64 v402; // rdx
  __int64 v403; // rcx
  __int64 v404; // r8
  __int64 v405; // r9
  __int64 *v406; // r13
  __int64 v407; // rdx
  __int64 v408; // rcx
  __int64 v409; // r8
  __int64 v410; // r9
  __int64 v411; // rcx
  __int64 v412; // r8
  __int64 v413; // r9
  __int64 *v414; // r13
  __int64 v415; // rdx
  __int64 v416; // rcx
  __int64 v417; // r8
  __int64 v418; // r9
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
  __int64 v431; // rcx
  __int64 v432; // r8
  __int64 v433; // r9
  __int64 *v434; // r13
  __int64 v435; // rdx
  __int64 v436; // rcx
  __int64 v437; // r8
  __int64 v438; // r9
  __int64 *v439; // r13
  __int64 v440; // rdx
  __int64 v441; // rcx
  __int64 v442; // r8
  __int64 v443; // r9
  __m128i v444; // xmm0
  __int64 v445; // rcx
  __int64 v446; // r8
  __int64 v447; // r9
  __int64 v448; // rcx
  __int64 v449; // r8
  __int64 v450; // r9
  char v451; // si
  void **v452; // r13
  __int64 v453; // rax
  __m128i v454; // xmm2
  int v456; // [rsp+0h] [rbp-6A8h]
  int v457; // [rsp+0h] [rbp-6A8h]
  int v458; // [rsp+0h] [rbp-6A8h]
  int v459; // [rsp+0h] [rbp-6A8h]
  int v460; // [rsp+0h] [rbp-6A8h]
  int v461; // [rsp+0h] [rbp-6A8h]
  int v462; // [rsp+0h] [rbp-6A8h]
  const __m128i *v463; // [rsp+0h] [rbp-6A8h]
  int v464; // [rsp+0h] [rbp-6A8h]
  int v465; // [rsp+0h] [rbp-6A8h]
  int v466; // [rsp+0h] [rbp-6A8h]
  int v467; // [rsp+0h] [rbp-6A8h]
  int v468; // [rsp+0h] [rbp-6A8h]
  int v469; // [rsp+0h] [rbp-6A8h]
  int v470; // [rsp+0h] [rbp-6A8h]
  int v471; // [rsp+0h] [rbp-6A8h]
  int v472; // [rsp+0h] [rbp-6A8h]
  int v473; // [rsp+0h] [rbp-6A8h]
  int v474; // [rsp+0h] [rbp-6A8h]
  int v475; // [rsp+0h] [rbp-6A8h]
  _QWORD *v476; // [rsp+0h] [rbp-6A8h]
  int v477; // [rsp+0h] [rbp-6A8h]
  int v478; // [rsp+0h] [rbp-6A8h]
  __int64 v479; // [rsp+0h] [rbp-6A8h]
  int v480; // [rsp+0h] [rbp-6A8h]
  int v481; // [rsp+0h] [rbp-6A8h]
  int v482; // [rsp+0h] [rbp-6A8h]
  int v483; // [rsp+0h] [rbp-6A8h]
  int v484; // [rsp+0h] [rbp-6A8h]
  int v485; // [rsp+0h] [rbp-6A8h]
  int v486; // [rsp+0h] [rbp-6A8h]
  int v487; // [rsp+0h] [rbp-6A8h]
  int v488; // [rsp+0h] [rbp-6A8h]
  int v489; // [rsp+0h] [rbp-6A8h]
  int v490; // [rsp+0h] [rbp-6A8h]
  int v491; // [rsp+0h] [rbp-6A8h]
  int v492; // [rsp+0h] [rbp-6A8h]
  int v493; // [rsp+0h] [rbp-6A8h]
  int v494; // [rsp+0h] [rbp-6A8h]
  int v495; // [rsp+0h] [rbp-6A8h]
  _QWORD *v496; // [rsp+0h] [rbp-6A8h]
  int v497; // [rsp+0h] [rbp-6A8h]
  int v498; // [rsp+0h] [rbp-6A8h]
  __int64 v499; // [rsp+0h] [rbp-6A8h]
  int v500; // [rsp+0h] [rbp-6A8h]
  int v501; // [rsp+0h] [rbp-6A8h]
  int v502; // [rsp+0h] [rbp-6A8h]
  int v503; // [rsp+0h] [rbp-6A8h]
  int v504; // [rsp+0h] [rbp-6A8h]
  int v505; // [rsp+0h] [rbp-6A8h]
  int v506; // [rsp+0h] [rbp-6A8h]
  int v507; // [rsp+0h] [rbp-6A8h]
  int v508; // [rsp+0h] [rbp-6A8h]
  int v509; // [rsp+0h] [rbp-6A8h]
  int v510; // [rsp+0h] [rbp-6A8h]
  _QWORD *v511; // [rsp+0h] [rbp-6A8h]
  __int64 v512; // [rsp+0h] [rbp-6A8h]
  int v513; // [rsp+0h] [rbp-6A8h]
  int v514; // [rsp+0h] [rbp-6A8h]
  int v515; // [rsp+0h] [rbp-6A8h]
  int v516; // [rsp+0h] [rbp-6A8h]
  int v517; // [rsp+0h] [rbp-6A8h]
  int v518; // [rsp+0h] [rbp-6A8h]
  int v519; // [rsp+0h] [rbp-6A8h]
  int v520; // [rsp+0h] [rbp-6A8h]
  int v521; // [rsp+0h] [rbp-6A8h]
  int v522; // [rsp+0h] [rbp-6A8h]
  int v523; // [rsp+0h] [rbp-6A8h]
  int v524; // [rsp+0h] [rbp-6A8h]
  _QWORD *v525; // [rsp+0h] [rbp-6A8h]
  __int64 v526; // [rsp+0h] [rbp-6A8h]
  int v527; // [rsp+0h] [rbp-6A8h]
  int v528; // [rsp+0h] [rbp-6A8h]
  int v529; // [rsp+0h] [rbp-6A8h]
  int v530; // [rsp+0h] [rbp-6A8h]
  int v531; // [rsp+0h] [rbp-6A8h]
  int v532; // [rsp+0h] [rbp-6A8h]
  int v533; // [rsp+0h] [rbp-6A8h]
  int v534; // [rsp+0h] [rbp-6A8h]
  int v535; // [rsp+0h] [rbp-6A8h]
  int v536; // [rsp+0h] [rbp-6A8h]
  int v537; // [rsp+0h] [rbp-6A8h]
  int v538; // [rsp+0h] [rbp-6A8h]
  _QWORD *v539; // [rsp+0h] [rbp-6A8h]
  __int64 v540; // [rsp+0h] [rbp-6A8h]
  int v541; // [rsp+0h] [rbp-6A8h]
  int v542; // [rsp+0h] [rbp-6A8h]
  int v543; // [rsp+0h] [rbp-6A8h]
  int v544; // [rsp+0h] [rbp-6A8h]
  int v545; // [rsp+0h] [rbp-6A8h]
  int v546; // [rsp+0h] [rbp-6A8h]
  int v547; // [rsp+0h] [rbp-6A8h]
  int v548; // [rsp+0h] [rbp-6A8h]
  int v549; // [rsp+0h] [rbp-6A8h]
  int v550; // [rsp+0h] [rbp-6A8h]
  int v551; // [rsp+0h] [rbp-6A8h]
  int v552; // [rsp+0h] [rbp-6A8h]
  _QWORD *v553; // [rsp+0h] [rbp-6A8h]
  __int64 v554; // [rsp+0h] [rbp-6A8h]
  int v555; // [rsp+0h] [rbp-6A8h]
  int v556; // [rsp+0h] [rbp-6A8h]
  int v557; // [rsp+0h] [rbp-6A8h]
  int v558; // [rsp+0h] [rbp-6A8h]
  int v559; // [rsp+0h] [rbp-6A8h]
  int v560; // [rsp+0h] [rbp-6A8h]
  int v561; // [rsp+0h] [rbp-6A8h]
  int v562; // [rsp+0h] [rbp-6A8h]
  int v563; // [rsp+8h] [rbp-6A0h]
  int v564; // [rsp+8h] [rbp-6A0h]
  int v565; // [rsp+8h] [rbp-6A0h]
  int v566; // [rsp+8h] [rbp-6A0h]
  int v567; // [rsp+8h] [rbp-6A0h]
  int v568; // [rsp+8h] [rbp-6A0h]
  int v569; // [rsp+8h] [rbp-6A0h]
  const __m128i *v570; // [rsp+8h] [rbp-6A0h]
  int v571; // [rsp+8h] [rbp-6A0h]
  __int64 v572; // [rsp+8h] [rbp-6A0h]
  int v573; // [rsp+8h] [rbp-6A0h]
  int v574; // [rsp+8h] [rbp-6A0h]
  int v575; // [rsp+8h] [rbp-6A0h]
  int v576; // [rsp+8h] [rbp-6A0h]
  int v577; // [rsp+8h] [rbp-6A0h]
  int v578; // [rsp+8h] [rbp-6A0h]
  __int64 v579; // [rsp+8h] [rbp-6A0h]
  __int64 v580; // [rsp+8h] [rbp-6A0h]
  __int64 v581; // [rsp+8h] [rbp-6A0h]
  int v582; // [rsp+8h] [rbp-6A0h]
  __int64 v583; // [rsp+8h] [rbp-6A0h]
  _QWORD *v584; // [rsp+8h] [rbp-6A0h]
  __int64 v585; // [rsp+8h] [rbp-6A0h]
  __int64 v586; // [rsp+8h] [rbp-6A0h]
  __int64 v587; // [rsp+8h] [rbp-6A0h]
  __int64 v588; // [rsp+8h] [rbp-6A0h]
  __int64 v589; // [rsp+8h] [rbp-6A0h]
  int v590; // [rsp+8h] [rbp-6A0h]
  __int64 v591; // [rsp+8h] [rbp-6A0h]
  __int64 v592; // [rsp+8h] [rbp-6A0h]
  int v593; // [rsp+8h] [rbp-6A0h]
  __int64 v594; // [rsp+8h] [rbp-6A0h]
  int v595; // [rsp+8h] [rbp-6A0h]
  int v596; // [rsp+8h] [rbp-6A0h]
  __int64 v597; // [rsp+8h] [rbp-6A0h]
  int v598; // [rsp+8h] [rbp-6A0h]
  __int64 v599; // [rsp+8h] [rbp-6A0h]
  __int64 v600; // [rsp+8h] [rbp-6A0h]
  __int64 v601; // [rsp+8h] [rbp-6A0h]
  int v602; // [rsp+8h] [rbp-6A0h]
  __int64 v603; // [rsp+8h] [rbp-6A0h]
  _QWORD *v604; // [rsp+8h] [rbp-6A0h]
  __int64 v605; // [rsp+8h] [rbp-6A0h]
  __int64 v606; // [rsp+8h] [rbp-6A0h]
  __int64 v607; // [rsp+8h] [rbp-6A0h]
  __int64 v608; // [rsp+8h] [rbp-6A0h]
  __int64 v609; // [rsp+8h] [rbp-6A0h]
  int v610; // [rsp+8h] [rbp-6A0h]
  __int64 v611; // [rsp+8h] [rbp-6A0h]
  __int64 v612; // [rsp+8h] [rbp-6A0h]
  int v613; // [rsp+8h] [rbp-6A0h]
  __int64 v614; // [rsp+8h] [rbp-6A0h]
  int v615; // [rsp+8h] [rbp-6A0h]
  _QWORD *v616; // [rsp+8h] [rbp-6A0h]
  __int64 v617; // [rsp+8h] [rbp-6A0h]
  int v618; // [rsp+8h] [rbp-6A0h]
  __int64 v619; // [rsp+8h] [rbp-6A0h]
  __int64 v620; // [rsp+8h] [rbp-6A0h]
  __int64 v621; // [rsp+8h] [rbp-6A0h]
  __int64 v622; // [rsp+8h] [rbp-6A0h]
  __int64 v623; // [rsp+8h] [rbp-6A0h]
  int v624; // [rsp+8h] [rbp-6A0h]
  __int64 v625; // [rsp+8h] [rbp-6A0h]
  __int64 v626; // [rsp+8h] [rbp-6A0h]
  int v627; // [rsp+8h] [rbp-6A0h]
  __int64 v628; // [rsp+8h] [rbp-6A0h]
  int v629; // [rsp+8h] [rbp-6A0h]
  _QWORD *v630; // [rsp+8h] [rbp-6A0h]
  __int64 v631; // [rsp+8h] [rbp-6A0h]
  int v632; // [rsp+8h] [rbp-6A0h]
  __int64 v633; // [rsp+8h] [rbp-6A0h]
  __int64 v634; // [rsp+8h] [rbp-6A0h]
  __int64 v635; // [rsp+8h] [rbp-6A0h]
  __int64 v636; // [rsp+8h] [rbp-6A0h]
  __int64 v637; // [rsp+8h] [rbp-6A0h]
  int v638; // [rsp+8h] [rbp-6A0h]
  __int64 v639; // [rsp+8h] [rbp-6A0h]
  __int64 v640; // [rsp+8h] [rbp-6A0h]
  int v641; // [rsp+8h] [rbp-6A0h]
  __int64 v642; // [rsp+8h] [rbp-6A0h]
  int v643; // [rsp+8h] [rbp-6A0h]
  _QWORD *v644; // [rsp+8h] [rbp-6A0h]
  __int64 v645; // [rsp+8h] [rbp-6A0h]
  int v646; // [rsp+8h] [rbp-6A0h]
  __int64 v647; // [rsp+8h] [rbp-6A0h]
  __int64 v648; // [rsp+8h] [rbp-6A0h]
  __int64 v649; // [rsp+8h] [rbp-6A0h]
  __int64 v650; // [rsp+8h] [rbp-6A0h]
  __int64 v651; // [rsp+8h] [rbp-6A0h]
  int v652; // [rsp+8h] [rbp-6A0h]
  __int64 v653; // [rsp+8h] [rbp-6A0h]
  __int64 v654; // [rsp+8h] [rbp-6A0h]
  int v655; // [rsp+8h] [rbp-6A0h]
  __int64 v656; // [rsp+8h] [rbp-6A0h]
  int v657; // [rsp+8h] [rbp-6A0h]
  int v658; // [rsp+8h] [rbp-6A0h]
  _QWORD *v659; // [rsp+8h] [rbp-6A0h]
  int v660; // [rsp+8h] [rbp-6A0h]
  __int64 v661; // [rsp+8h] [rbp-6A0h]
  __int64 v662; // [rsp+8h] [rbp-6A0h]
  __int64 v663; // [rsp+8h] [rbp-6A0h]
  __int64 v664; // [rsp+8h] [rbp-6A0h]
  __int64 v665; // [rsp+8h] [rbp-6A0h]
  int v666; // [rsp+8h] [rbp-6A0h]
  int v667; // [rsp+8h] [rbp-6A0h]
  __int64 v668; // [rsp+8h] [rbp-6A0h]
  __int64 v669; // [rsp+8h] [rbp-6A0h]
  __int64 v670; // [rsp+10h] [rbp-698h]
  __int64 v671; // [rsp+10h] [rbp-698h]
  __int64 v672; // [rsp+10h] [rbp-698h]
  __int64 v673; // [rsp+10h] [rbp-698h]
  __int64 v674; // [rsp+10h] [rbp-698h]
  __int64 v675; // [rsp+10h] [rbp-698h]
  __int64 v676; // [rsp+10h] [rbp-698h]
  __int64 v677; // [rsp+10h] [rbp-698h]
  int v678; // [rsp+10h] [rbp-698h]
  int v679; // [rsp+10h] [rbp-698h]
  __int64 v680; // [rsp+10h] [rbp-698h]
  __int64 v681; // [rsp+10h] [rbp-698h]
  __int64 v682; // [rsp+10h] [rbp-698h]
  __int64 v683; // [rsp+10h] [rbp-698h]
  __int64 v684; // [rsp+10h] [rbp-698h]
  __int64 v685; // [rsp+10h] [rbp-698h]
  int v686; // [rsp+10h] [rbp-698h]
  int v687; // [rsp+10h] [rbp-698h]
  int v688; // [rsp+10h] [rbp-698h]
  __int64 v689; // [rsp+10h] [rbp-698h]
  int v690; // [rsp+10h] [rbp-698h]
  __int64 v691; // [rsp+10h] [rbp-698h]
  int v692; // [rsp+10h] [rbp-698h]
  int v693; // [rsp+10h] [rbp-698h]
  int v694; // [rsp+10h] [rbp-698h]
  int v695; // [rsp+10h] [rbp-698h]
  int v696; // [rsp+10h] [rbp-698h]
  __int64 v697; // [rsp+10h] [rbp-698h]
  int v698; // [rsp+10h] [rbp-698h]
  int v699; // [rsp+10h] [rbp-698h]
  __int64 v700; // [rsp+10h] [rbp-698h]
  int v701; // [rsp+10h] [rbp-698h]
  __int64 v702; // [rsp+10h] [rbp-698h]
  __int64 v703; // [rsp+10h] [rbp-698h]
  int v704; // [rsp+10h] [rbp-698h]
  __int64 v705; // [rsp+10h] [rbp-698h]
  int v706; // [rsp+10h] [rbp-698h]
  int v707; // [rsp+10h] [rbp-698h]
  int v708; // [rsp+10h] [rbp-698h]
  __int64 v709; // [rsp+10h] [rbp-698h]
  int v710; // [rsp+10h] [rbp-698h]
  __int64 v711; // [rsp+10h] [rbp-698h]
  int v712; // [rsp+10h] [rbp-698h]
  int v713; // [rsp+10h] [rbp-698h]
  int v714; // [rsp+10h] [rbp-698h]
  int v715; // [rsp+10h] [rbp-698h]
  int v716; // [rsp+10h] [rbp-698h]
  __int64 v717; // [rsp+10h] [rbp-698h]
  int v718; // [rsp+10h] [rbp-698h]
  int v719; // [rsp+10h] [rbp-698h]
  __int64 v720; // [rsp+10h] [rbp-698h]
  int v721; // [rsp+10h] [rbp-698h]
  __int64 v722; // [rsp+10h] [rbp-698h]
  __int64 v723; // [rsp+10h] [rbp-698h]
  int v724; // [rsp+10h] [rbp-698h]
  __int64 v725; // [rsp+10h] [rbp-698h]
  int v726; // [rsp+10h] [rbp-698h]
  int v727; // [rsp+10h] [rbp-698h]
  int v728; // [rsp+10h] [rbp-698h]
  int v729; // [rsp+10h] [rbp-698h]
  int v730; // [rsp+10h] [rbp-698h]
  __int64 v731; // [rsp+10h] [rbp-698h]
  int v732; // [rsp+10h] [rbp-698h]
  int v733; // [rsp+10h] [rbp-698h]
  __int64 v734; // [rsp+10h] [rbp-698h]
  int v735; // [rsp+10h] [rbp-698h]
  __int64 v736; // [rsp+10h] [rbp-698h]
  __int64 v737; // [rsp+10h] [rbp-698h]
  int v738; // [rsp+10h] [rbp-698h]
  __int64 v739; // [rsp+10h] [rbp-698h]
  int v740; // [rsp+10h] [rbp-698h]
  int v741; // [rsp+10h] [rbp-698h]
  int v742; // [rsp+10h] [rbp-698h]
  int v743; // [rsp+10h] [rbp-698h]
  int v744; // [rsp+10h] [rbp-698h]
  __int64 v745; // [rsp+10h] [rbp-698h]
  int v746; // [rsp+10h] [rbp-698h]
  int v747; // [rsp+10h] [rbp-698h]
  __int64 v748; // [rsp+10h] [rbp-698h]
  int v749; // [rsp+10h] [rbp-698h]
  __int64 v750; // [rsp+10h] [rbp-698h]
  __int64 v751; // [rsp+10h] [rbp-698h]
  int v752; // [rsp+10h] [rbp-698h]
  __int64 v753; // [rsp+10h] [rbp-698h]
  int v754; // [rsp+10h] [rbp-698h]
  int v755; // [rsp+10h] [rbp-698h]
  int v756; // [rsp+10h] [rbp-698h]
  int v757; // [rsp+10h] [rbp-698h]
  int v758; // [rsp+10h] [rbp-698h]
  __int64 v759; // [rsp+10h] [rbp-698h]
  int v760; // [rsp+10h] [rbp-698h]
  int v761; // [rsp+10h] [rbp-698h]
  __int64 v762; // [rsp+10h] [rbp-698h]
  int v763; // [rsp+10h] [rbp-698h]
  __int64 v764; // [rsp+10h] [rbp-698h]
  __int64 v765; // [rsp+10h] [rbp-698h]
  int v766; // [rsp+10h] [rbp-698h]
  __int64 v767; // [rsp+10h] [rbp-698h]
  int v768; // [rsp+10h] [rbp-698h]
  int v769; // [rsp+10h] [rbp-698h]
  int v770; // [rsp+10h] [rbp-698h]
  int v771; // [rsp+10h] [rbp-698h]
  int v772; // [rsp+10h] [rbp-698h]
  __int64 v773; // [rsp+10h] [rbp-698h]
  __int64 v774; // [rsp+10h] [rbp-698h]
  int v775; // [rsp+10h] [rbp-698h]
  int v776; // [rsp+10h] [rbp-698h]
  int v777; // [rsp+18h] [rbp-690h]
  int v778; // [rsp+18h] [rbp-690h]
  int v779; // [rsp+18h] [rbp-690h]
  int v780; // [rsp+18h] [rbp-690h]
  int v781; // [rsp+18h] [rbp-690h]
  int v782; // [rsp+18h] [rbp-690h]
  int v783; // [rsp+18h] [rbp-690h]
  int v784; // [rsp+18h] [rbp-690h]
  int v785; // [rsp+18h] [rbp-690h]
  int v786; // [rsp+18h] [rbp-690h]
  int v787; // [rsp+18h] [rbp-690h]
  int v788; // [rsp+18h] [rbp-690h]
  int v789; // [rsp+18h] [rbp-690h]
  int v790; // [rsp+18h] [rbp-690h]
  int v791; // [rsp+18h] [rbp-690h]
  int v792; // [rsp+18h] [rbp-690h]
  int v793; // [rsp+18h] [rbp-690h]
  int v794; // [rsp+18h] [rbp-690h]
  int v795; // [rsp+18h] [rbp-690h]
  int v796; // [rsp+18h] [rbp-690h]
  int v797; // [rsp+18h] [rbp-690h]
  int v798; // [rsp+18h] [rbp-690h]
  int v799; // [rsp+18h] [rbp-690h]
  int v800; // [rsp+18h] [rbp-690h]
  int v801; // [rsp+18h] [rbp-690h]
  int v802; // [rsp+18h] [rbp-690h]
  int v803; // [rsp+18h] [rbp-690h]
  int v804; // [rsp+18h] [rbp-690h]
  int v805; // [rsp+18h] [rbp-690h]
  int v806; // [rsp+18h] [rbp-690h]
  int v807; // [rsp+18h] [rbp-690h]
  int v808; // [rsp+18h] [rbp-690h]
  int v809; // [rsp+18h] [rbp-690h]
  int v810; // [rsp+18h] [rbp-690h]
  int v811; // [rsp+18h] [rbp-690h]
  int v812; // [rsp+18h] [rbp-690h]
  int v813; // [rsp+18h] [rbp-690h]
  int v814; // [rsp+18h] [rbp-690h]
  int v815; // [rsp+18h] [rbp-690h]
  int v816; // [rsp+18h] [rbp-690h]
  int v817; // [rsp+18h] [rbp-690h]
  int v818; // [rsp+18h] [rbp-690h]
  int v819; // [rsp+18h] [rbp-690h]
  int v820; // [rsp+18h] [rbp-690h]
  int v821; // [rsp+18h] [rbp-690h]
  int v822; // [rsp+18h] [rbp-690h]
  int v823; // [rsp+18h] [rbp-690h]
  int v824; // [rsp+18h] [rbp-690h]
  int v825; // [rsp+18h] [rbp-690h]
  int v826; // [rsp+18h] [rbp-690h]
  int v827; // [rsp+18h] [rbp-690h]
  int v828; // [rsp+18h] [rbp-690h]
  int v829; // [rsp+18h] [rbp-690h]
  int v830; // [rsp+18h] [rbp-690h]
  int v831; // [rsp+18h] [rbp-690h]
  int v832; // [rsp+18h] [rbp-690h]
  int v833; // [rsp+18h] [rbp-690h]
  int v834; // [rsp+18h] [rbp-690h]
  int v835; // [rsp+18h] [rbp-690h]
  int v836; // [rsp+18h] [rbp-690h]
  int v837; // [rsp+18h] [rbp-690h]
  int v838; // [rsp+20h] [rbp-688h]
  _QWORD *v839; // [rsp+20h] [rbp-688h]
  __int64 v840; // [rsp+20h] [rbp-688h]
  int v841; // [rsp+20h] [rbp-688h]
  int v842; // [rsp+20h] [rbp-688h]
  int v843; // [rsp+20h] [rbp-688h]
  int v844; // [rsp+20h] [rbp-688h]
  int v845; // [rsp+20h] [rbp-688h]
  int v846; // [rsp+20h] [rbp-688h]
  int v847; // [rsp+20h] [rbp-688h]
  int v848; // [rsp+20h] [rbp-688h]
  int v849; // [rsp+20h] [rbp-688h]
  int v850; // [rsp+20h] [rbp-688h]
  _QWORD *v851; // [rsp+20h] [rbp-688h]
  int v852; // [rsp+20h] [rbp-688h]
  __int64 v853; // [rsp+20h] [rbp-688h]
  int v854; // [rsp+20h] [rbp-688h]
  int v855; // [rsp+20h] [rbp-688h]
  int v856; // [rsp+20h] [rbp-688h]
  int v857; // [rsp+20h] [rbp-688h]
  int v858; // [rsp+20h] [rbp-688h]
  int v859; // [rsp+20h] [rbp-688h]
  int v860; // [rsp+20h] [rbp-688h]
  int v861; // [rsp+20h] [rbp-688h]
  int v862; // [rsp+20h] [rbp-688h]
  int v863; // [rsp+20h] [rbp-688h]
  int v864; // [rsp+20h] [rbp-688h]
  int v865; // [rsp+20h] [rbp-688h]
  int v866; // [rsp+20h] [rbp-688h]
  int v867; // [rsp+20h] [rbp-688h]
  int v868; // [rsp+20h] [rbp-688h]
  int v869; // [rsp+20h] [rbp-688h]
  _QWORD *v870; // [rsp+20h] [rbp-688h]
  int v871; // [rsp+20h] [rbp-688h]
  int v872; // [rsp+20h] [rbp-688h]
  int v873; // [rsp+20h] [rbp-688h]
  int v874; // [rsp+20h] [rbp-688h]
  int v875; // [rsp+20h] [rbp-688h]
  int v876; // [rsp+20h] [rbp-688h]
  int v877; // [rsp+20h] [rbp-688h]
  int v878; // [rsp+20h] [rbp-688h]
  _QWORD *v879; // [rsp+20h] [rbp-688h]
  int v880; // [rsp+20h] [rbp-688h]
  int v881; // [rsp+20h] [rbp-688h]
  int v882; // [rsp+20h] [rbp-688h]
  int v883; // [rsp+20h] [rbp-688h]
  int v884; // [rsp+20h] [rbp-688h]
  int v885; // [rsp+20h] [rbp-688h]
  int v886; // [rsp+20h] [rbp-688h]
  int v887; // [rsp+20h] [rbp-688h]
  _QWORD *v888; // [rsp+20h] [rbp-688h]
  int v889; // [rsp+20h] [rbp-688h]
  int v890; // [rsp+20h] [rbp-688h]
  int v891; // [rsp+20h] [rbp-688h]
  int v892; // [rsp+20h] [rbp-688h]
  int v893; // [rsp+20h] [rbp-688h]
  int v894; // [rsp+20h] [rbp-688h]
  int v895; // [rsp+20h] [rbp-688h]
  int v896; // [rsp+20h] [rbp-688h]
  int v897; // [rsp+20h] [rbp-688h]
  int v898; // [rsp+20h] [rbp-688h]
  int v899; // [rsp+28h] [rbp-680h]
  int v900; // [rsp+28h] [rbp-680h]
  int v901; // [rsp+28h] [rbp-680h]
  __int64 v902; // [rsp+28h] [rbp-680h]
  int v903; // [rsp+28h] [rbp-680h]
  int v904; // [rsp+28h] [rbp-680h]
  int v905; // [rsp+28h] [rbp-680h]
  int v906; // [rsp+28h] [rbp-680h]
  int v907; // [rsp+28h] [rbp-680h]
  int v908; // [rsp+28h] [rbp-680h]
  int v909; // [rsp+28h] [rbp-680h]
  int v910; // [rsp+28h] [rbp-680h]
  int v911; // [rsp+28h] [rbp-680h]
  _QWORD *v912; // [rsp+28h] [rbp-680h]
  int v913; // [rsp+28h] [rbp-680h]
  int v914; // [rsp+28h] [rbp-680h]
  __int64 v915; // [rsp+28h] [rbp-680h]
  int v916; // [rsp+28h] [rbp-680h]
  int v917; // [rsp+28h] [rbp-680h]
  int v918; // [rsp+28h] [rbp-680h]
  int v919; // [rsp+28h] [rbp-680h]
  int v920; // [rsp+28h] [rbp-680h]
  int v921; // [rsp+28h] [rbp-680h]
  int v922; // [rsp+28h] [rbp-680h]
  int v923; // [rsp+28h] [rbp-680h]
  int v924; // [rsp+28h] [rbp-680h]
  int v925; // [rsp+28h] [rbp-680h]
  int v926; // [rsp+28h] [rbp-680h]
  int v927; // [rsp+28h] [rbp-680h]
  _QWORD *v928; // [rsp+28h] [rbp-680h]
  __int64 v929; // [rsp+28h] [rbp-680h]
  int v930; // [rsp+28h] [rbp-680h]
  int v931; // [rsp+28h] [rbp-680h]
  int v932; // [rsp+28h] [rbp-680h]
  int v933; // [rsp+28h] [rbp-680h]
  int v934; // [rsp+28h] [rbp-680h]
  int v935; // [rsp+28h] [rbp-680h]
  int v936; // [rsp+28h] [rbp-680h]
  _QWORD *v937; // [rsp+28h] [rbp-680h]
  __int64 v938; // [rsp+28h] [rbp-680h]
  int v939; // [rsp+28h] [rbp-680h]
  int v940; // [rsp+28h] [rbp-680h]
  int v941; // [rsp+28h] [rbp-680h]
  int v942; // [rsp+28h] [rbp-680h]
  int v943; // [rsp+28h] [rbp-680h]
  int v944; // [rsp+28h] [rbp-680h]
  int v945; // [rsp+28h] [rbp-680h]
  _QWORD *v946; // [rsp+28h] [rbp-680h]
  __int64 v947; // [rsp+28h] [rbp-680h]
  int v948; // [rsp+28h] [rbp-680h]
  int v949; // [rsp+28h] [rbp-680h]
  int v950; // [rsp+28h] [rbp-680h]
  int v951; // [rsp+28h] [rbp-680h]
  int v952; // [rsp+28h] [rbp-680h]
  int v953; // [rsp+28h] [rbp-680h]
  int v954; // [rsp+28h] [rbp-680h]
  _QWORD *v955; // [rsp+28h] [rbp-680h]
  __int64 v956; // [rsp+28h] [rbp-680h]
  int v957; // [rsp+28h] [rbp-680h]
  int v958; // [rsp+28h] [rbp-680h]
  int v959; // [rsp+28h] [rbp-680h]
  __int64 v960; // [rsp+30h] [rbp-678h]
  __int64 v961; // [rsp+30h] [rbp-678h]
  __int64 v962; // [rsp+30h] [rbp-678h]
  __int64 v963; // [rsp+30h] [rbp-678h]
  __int64 v964; // [rsp+30h] [rbp-678h]
  __int64 v965; // [rsp+30h] [rbp-678h]
  __int64 v966; // [rsp+30h] [rbp-678h]
  __int64 v967; // [rsp+30h] [rbp-678h]
  __int64 v968; // [rsp+30h] [rbp-678h]
  __int64 v969; // [rsp+30h] [rbp-678h]
  __int64 v970; // [rsp+30h] [rbp-678h]
  __int64 v971; // [rsp+30h] [rbp-678h]
  __int64 v972; // [rsp+30h] [rbp-678h]
  __int64 v973; // [rsp+30h] [rbp-678h]
  __int64 v974; // [rsp+30h] [rbp-678h]
  __int64 v975; // [rsp+30h] [rbp-678h]
  _QWORD *v976; // [rsp+30h] [rbp-678h]
  __int64 v977; // [rsp+30h] [rbp-678h]
  __int64 v978; // [rsp+30h] [rbp-678h]
  __int64 v979; // [rsp+30h] [rbp-678h]
  __int64 v980; // [rsp+30h] [rbp-678h]
  __int64 v981; // [rsp+30h] [rbp-678h]
  __int64 v982; // [rsp+30h] [rbp-678h]
  __int64 v983; // [rsp+30h] [rbp-678h]
  __int64 v984; // [rsp+30h] [rbp-678h]
  __int64 v985; // [rsp+30h] [rbp-678h]
  _QWORD *v986; // [rsp+30h] [rbp-678h]
  __int64 v987; // [rsp+30h] [rbp-678h]
  __int64 v988; // [rsp+30h] [rbp-678h]
  __int64 v989; // [rsp+30h] [rbp-678h]
  __int64 v990; // [rsp+30h] [rbp-678h]
  __int64 v991; // [rsp+30h] [rbp-678h]
  __int64 v992; // [rsp+30h] [rbp-678h]
  __int64 v993; // [rsp+30h] [rbp-678h]
  __int64 v994; // [rsp+30h] [rbp-678h]
  _QWORD *v995; // [rsp+30h] [rbp-678h]
  __int64 v996; // [rsp+30h] [rbp-678h]
  __int64 v997; // [rsp+30h] [rbp-678h]
  __int64 v998; // [rsp+30h] [rbp-678h]
  __int64 v999; // [rsp+30h] [rbp-678h]
  __int64 v1000; // [rsp+30h] [rbp-678h]
  __int64 v1001; // [rsp+30h] [rbp-678h]
  __int64 v1002; // [rsp+30h] [rbp-678h]
  __int64 v1003; // [rsp+30h] [rbp-678h]
  _QWORD *v1004; // [rsp+30h] [rbp-678h]
  __int64 v1005; // [rsp+30h] [rbp-678h]
  __int64 v1006; // [rsp+30h] [rbp-678h]
  __int64 v1007; // [rsp+30h] [rbp-678h]
  __int64 v1008; // [rsp+30h] [rbp-678h]
  __int64 v1009; // [rsp+30h] [rbp-678h]
  __int64 v1010; // [rsp+30h] [rbp-678h]
  __int64 v1011; // [rsp+30h] [rbp-678h]
  __int64 v1012; // [rsp+30h] [rbp-678h]
  __int64 v1013; // [rsp+30h] [rbp-678h]
  __int64 v1014; // [rsp+30h] [rbp-678h]
  __int64 v1015; // [rsp+30h] [rbp-678h]
  __int64 v1016; // [rsp+30h] [rbp-678h]
  __int64 v1017; // [rsp+30h] [rbp-678h]
  __int64 v1018; // [rsp+30h] [rbp-678h]
  __int64 v1019; // [rsp+30h] [rbp-678h]
  __int64 v1020; // [rsp+30h] [rbp-678h]
  int v1021; // [rsp+38h] [rbp-670h]
  int v1022; // [rsp+38h] [rbp-670h]
  int v1023; // [rsp+38h] [rbp-670h]
  int v1024; // [rsp+38h] [rbp-670h]
  int v1025; // [rsp+38h] [rbp-670h]
  int v1026; // [rsp+38h] [rbp-670h]
  int v1027; // [rsp+38h] [rbp-670h]
  __int64 v1028; // [rsp+38h] [rbp-670h]
  int v1029; // [rsp+38h] [rbp-670h]
  int v1030; // [rsp+38h] [rbp-670h]
  int v1031; // [rsp+38h] [rbp-670h]
  int v1032; // [rsp+38h] [rbp-670h]
  int v1033; // [rsp+38h] [rbp-670h]
  int v1034; // [rsp+38h] [rbp-670h]
  int v1035; // [rsp+38h] [rbp-670h]
  int v1036; // [rsp+38h] [rbp-670h]
  int v1037; // [rsp+38h] [rbp-670h]
  int v1038; // [rsp+38h] [rbp-670h]
  int v1039; // [rsp+38h] [rbp-670h]
  int v1040; // [rsp+38h] [rbp-670h]
  __int64 v1041; // [rsp+38h] [rbp-670h]
  int v1042; // [rsp+38h] [rbp-670h]
  int v1043; // [rsp+38h] [rbp-670h]
  int v1044; // [rsp+38h] [rbp-670h]
  int v1045; // [rsp+38h] [rbp-670h]
  int v1046; // [rsp+38h] [rbp-670h]
  _QWORD *v1047; // [rsp+38h] [rbp-670h]
  int v1048; // [rsp+38h] [rbp-670h]
  __int64 v1049; // [rsp+38h] [rbp-670h]
  int v1050; // [rsp+38h] [rbp-670h]
  int v1051; // [rsp+38h] [rbp-670h]
  int v1052; // [rsp+38h] [rbp-670h]
  int v1053; // [rsp+38h] [rbp-670h]
  int v1054; // [rsp+38h] [rbp-670h]
  int v1055; // [rsp+38h] [rbp-670h]
  _QWORD *v1056; // [rsp+38h] [rbp-670h]
  int v1057; // [rsp+38h] [rbp-670h]
  __int64 v1058; // [rsp+38h] [rbp-670h]
  int v1059; // [rsp+38h] [rbp-670h]
  int v1060; // [rsp+38h] [rbp-670h]
  int v1061; // [rsp+38h] [rbp-670h]
  int v1062; // [rsp+38h] [rbp-670h]
  int v1063; // [rsp+38h] [rbp-670h]
  int v1064; // [rsp+38h] [rbp-670h]
  _QWORD *v1065; // [rsp+38h] [rbp-670h]
  int v1066; // [rsp+38h] [rbp-670h]
  __int64 v1067; // [rsp+38h] [rbp-670h]
  int v1068; // [rsp+38h] [rbp-670h]
  int v1069; // [rsp+38h] [rbp-670h]
  int v1070; // [rsp+38h] [rbp-670h]
  int v1071; // [rsp+38h] [rbp-670h]
  int v1072; // [rsp+38h] [rbp-670h]
  int v1073; // [rsp+38h] [rbp-670h]
  _QWORD *v1074; // [rsp+38h] [rbp-670h]
  int v1075; // [rsp+38h] [rbp-670h]
  __int64 v1076; // [rsp+38h] [rbp-670h]
  int v1077; // [rsp+38h] [rbp-670h]
  int v1078; // [rsp+38h] [rbp-670h]
  int v1079; // [rsp+38h] [rbp-670h]
  int v1080; // [rsp+38h] [rbp-670h]
  int v1081; // [rsp+38h] [rbp-670h]
  int v1082; // [rsp+40h] [rbp-668h]
  int v1083; // [rsp+40h] [rbp-668h]
  int v1084; // [rsp+40h] [rbp-668h]
  int v1085; // [rsp+40h] [rbp-668h]
  int v1086; // [rsp+40h] [rbp-668h]
  int v1087; // [rsp+40h] [rbp-668h]
  int v1088; // [rsp+40h] [rbp-668h]
  int v1089; // [rsp+40h] [rbp-668h]
  int v1090; // [rsp+40h] [rbp-668h]
  int v1091; // [rsp+40h] [rbp-668h]
  int v1092; // [rsp+40h] [rbp-668h]
  int v1093; // [rsp+40h] [rbp-668h]
  int v1094; // [rsp+40h] [rbp-668h]
  int v1095; // [rsp+40h] [rbp-668h]
  int v1096; // [rsp+40h] [rbp-668h]
  int v1097; // [rsp+40h] [rbp-668h]
  int v1098; // [rsp+40h] [rbp-668h]
  int v1099; // [rsp+40h] [rbp-668h]
  int v1100; // [rsp+40h] [rbp-668h]
  int v1101; // [rsp+40h] [rbp-668h]
  int v1102; // [rsp+40h] [rbp-668h]
  int v1103; // [rsp+40h] [rbp-668h]
  int v1104; // [rsp+40h] [rbp-668h]
  int v1105; // [rsp+40h] [rbp-668h]
  int v1106; // [rsp+40h] [rbp-668h]
  int v1107; // [rsp+40h] [rbp-668h]
  int v1108; // [rsp+40h] [rbp-668h]
  int v1109; // [rsp+40h] [rbp-668h]
  int v1110; // [rsp+40h] [rbp-668h]
  int v1111; // [rsp+40h] [rbp-668h]
  int v1112; // [rsp+40h] [rbp-668h]
  int v1113; // [rsp+40h] [rbp-668h]
  int v1114; // [rsp+40h] [rbp-668h]
  int v1115; // [rsp+40h] [rbp-668h]
  int v1116; // [rsp+40h] [rbp-668h]
  int v1117; // [rsp+40h] [rbp-668h]
  int v1118; // [rsp+40h] [rbp-668h]
  int v1119; // [rsp+40h] [rbp-668h]
  int v1120; // [rsp+40h] [rbp-668h]
  int v1121; // [rsp+40h] [rbp-668h]
  int v1122; // [rsp+40h] [rbp-668h]
  int v1123; // [rsp+40h] [rbp-668h]
  int v1124; // [rsp+40h] [rbp-668h]
  int v1125; // [rsp+40h] [rbp-668h]
  int v1126; // [rsp+40h] [rbp-668h]
  int v1127; // [rsp+40h] [rbp-668h]
  int v1128; // [rsp+40h] [rbp-668h]
  int v1129; // [rsp+40h] [rbp-668h]
  int v1130; // [rsp+40h] [rbp-668h]
  int v1131; // [rsp+40h] [rbp-668h]
  int v1132; // [rsp+40h] [rbp-668h]
  int v1133; // [rsp+40h] [rbp-668h]
  int v1134; // [rsp+40h] [rbp-668h]
  int v1135; // [rsp+40h] [rbp-668h]
  int v1136; // [rsp+40h] [rbp-668h]
  int v1137; // [rsp+40h] [rbp-668h]
  int v1138; // [rsp+40h] [rbp-668h]
  int v1139; // [rsp+40h] [rbp-668h]
  int v1140; // [rsp+40h] [rbp-668h]
  int v1141; // [rsp+40h] [rbp-668h]
  int v1142; // [rsp+40h] [rbp-668h]
  int v1143; // [rsp+48h] [rbp-660h]
  int v1144; // [rsp+48h] [rbp-660h]
  int v1145; // [rsp+48h] [rbp-660h]
  int v1146; // [rsp+48h] [rbp-660h]
  int v1147; // [rsp+48h] [rbp-660h]
  int v1148; // [rsp+48h] [rbp-660h]
  int v1149; // [rsp+48h] [rbp-660h]
  int v1150; // [rsp+48h] [rbp-660h]
  int v1151; // [rsp+48h] [rbp-660h]
  int v1152; // [rsp+48h] [rbp-660h]
  int v1153; // [rsp+48h] [rbp-660h]
  int v1154; // [rsp+48h] [rbp-660h]
  int v1155; // [rsp+48h] [rbp-660h]
  int v1156; // [rsp+48h] [rbp-660h]
  int v1157; // [rsp+48h] [rbp-660h]
  int v1158; // [rsp+48h] [rbp-660h]
  int v1159; // [rsp+48h] [rbp-660h]
  int v1160; // [rsp+48h] [rbp-660h]
  int v1161; // [rsp+48h] [rbp-660h]
  int v1162; // [rsp+48h] [rbp-660h]
  int v1163; // [rsp+48h] [rbp-660h]
  int v1164; // [rsp+48h] [rbp-660h]
  int v1165; // [rsp+48h] [rbp-660h]
  int v1166; // [rsp+48h] [rbp-660h]
  int v1167; // [rsp+48h] [rbp-660h]
  int v1168; // [rsp+48h] [rbp-660h]
  int v1169; // [rsp+48h] [rbp-660h]
  int v1170; // [rsp+48h] [rbp-660h]
  int v1171; // [rsp+48h] [rbp-660h]
  int v1172; // [rsp+48h] [rbp-660h]
  int v1173; // [rsp+48h] [rbp-660h]
  int v1174; // [rsp+48h] [rbp-660h]
  int v1175; // [rsp+48h] [rbp-660h]
  int v1176; // [rsp+48h] [rbp-660h]
  int v1177; // [rsp+48h] [rbp-660h]
  int v1178; // [rsp+48h] [rbp-660h]
  int v1179; // [rsp+48h] [rbp-660h]
  int v1180; // [rsp+48h] [rbp-660h]
  int v1181; // [rsp+48h] [rbp-660h]
  int v1182; // [rsp+48h] [rbp-660h]
  int v1183; // [rsp+48h] [rbp-660h]
  int v1184; // [rsp+48h] [rbp-660h]
  int v1185; // [rsp+48h] [rbp-660h]
  int v1186; // [rsp+48h] [rbp-660h]
  int v1187; // [rsp+48h] [rbp-660h]
  int v1188; // [rsp+48h] [rbp-660h]
  int v1189; // [rsp+48h] [rbp-660h]
  int v1190; // [rsp+48h] [rbp-660h]
  int v1191; // [rsp+48h] [rbp-660h]
  int v1192; // [rsp+48h] [rbp-660h]
  int v1193; // [rsp+48h] [rbp-660h]
  int v1194; // [rsp+48h] [rbp-660h]
  int v1195; // [rsp+48h] [rbp-660h]
  int v1196; // [rsp+48h] [rbp-660h]
  int v1197; // [rsp+48h] [rbp-660h]
  int v1198; // [rsp+48h] [rbp-660h]
  int v1199; // [rsp+48h] [rbp-660h]
  int v1200; // [rsp+48h] [rbp-660h]
  int v1201; // [rsp+48h] [rbp-660h]
  int v1202; // [rsp+48h] [rbp-660h]
  int v1203; // [rsp+48h] [rbp-660h]
  int v1204; // [rsp+50h] [rbp-658h]
  int v1205; // [rsp+50h] [rbp-658h]
  int v1206; // [rsp+50h] [rbp-658h]
  int v1207; // [rsp+50h] [rbp-658h]
  int v1208; // [rsp+50h] [rbp-658h]
  int v1209; // [rsp+50h] [rbp-658h]
  int v1210; // [rsp+50h] [rbp-658h]
  int v1211; // [rsp+50h] [rbp-658h]
  int v1212; // [rsp+50h] [rbp-658h]
  int v1213; // [rsp+50h] [rbp-658h]
  int v1214; // [rsp+50h] [rbp-658h]
  int v1215; // [rsp+50h] [rbp-658h]
  int v1216; // [rsp+50h] [rbp-658h]
  int v1217; // [rsp+50h] [rbp-658h]
  int v1218; // [rsp+50h] [rbp-658h]
  int v1219; // [rsp+50h] [rbp-658h]
  int v1220; // [rsp+50h] [rbp-658h]
  int v1221; // [rsp+50h] [rbp-658h]
  int v1222; // [rsp+50h] [rbp-658h]
  int v1223; // [rsp+50h] [rbp-658h]
  int v1224; // [rsp+50h] [rbp-658h]
  int v1225; // [rsp+50h] [rbp-658h]
  int v1226; // [rsp+50h] [rbp-658h]
  int v1227; // [rsp+50h] [rbp-658h]
  int v1228; // [rsp+50h] [rbp-658h]
  int v1229; // [rsp+50h] [rbp-658h]
  int v1230; // [rsp+50h] [rbp-658h]
  int v1231; // [rsp+50h] [rbp-658h]
  int v1232; // [rsp+50h] [rbp-658h]
  int v1233; // [rsp+50h] [rbp-658h]
  int v1234; // [rsp+50h] [rbp-658h]
  int v1235; // [rsp+50h] [rbp-658h]
  int v1236; // [rsp+50h] [rbp-658h]
  int v1237; // [rsp+50h] [rbp-658h]
  int v1238; // [rsp+50h] [rbp-658h]
  int v1239; // [rsp+50h] [rbp-658h]
  int v1240; // [rsp+50h] [rbp-658h]
  int v1241; // [rsp+50h] [rbp-658h]
  int v1242; // [rsp+50h] [rbp-658h]
  int v1243; // [rsp+50h] [rbp-658h]
  int v1244; // [rsp+50h] [rbp-658h]
  int v1245; // [rsp+50h] [rbp-658h]
  int v1246; // [rsp+50h] [rbp-658h]
  int v1247; // [rsp+50h] [rbp-658h]
  int v1248; // [rsp+50h] [rbp-658h]
  int v1249; // [rsp+50h] [rbp-658h]
  int v1250; // [rsp+50h] [rbp-658h]
  int v1251; // [rsp+50h] [rbp-658h]
  int v1252; // [rsp+50h] [rbp-658h]
  int v1253; // [rsp+50h] [rbp-658h]
  int v1254; // [rsp+50h] [rbp-658h]
  int v1255; // [rsp+50h] [rbp-658h]
  int v1256; // [rsp+50h] [rbp-658h]
  int v1257; // [rsp+50h] [rbp-658h]
  int v1258; // [rsp+50h] [rbp-658h]
  int v1259; // [rsp+50h] [rbp-658h]
  int v1260; // [rsp+50h] [rbp-658h]
  int v1261; // [rsp+50h] [rbp-658h]
  int v1262; // [rsp+50h] [rbp-658h]
  int v1263; // [rsp+50h] [rbp-658h]
  int v1264; // [rsp+50h] [rbp-658h]
  char v1265; // [rsp+58h] [rbp-650h]
  char v1266; // [rsp+58h] [rbp-650h]
  char v1267; // [rsp+58h] [rbp-650h]
  char v1268; // [rsp+58h] [rbp-650h]
  char v1269; // [rsp+58h] [rbp-650h]
  char v1270; // [rsp+58h] [rbp-650h]
  char v1271; // [rsp+58h] [rbp-650h]
  char v1272; // [rsp+58h] [rbp-650h]
  char v1273; // [rsp+58h] [rbp-650h]
  char v1274; // [rsp+58h] [rbp-650h]
  char v1275; // [rsp+58h] [rbp-650h]
  char v1276; // [rsp+58h] [rbp-650h]
  char v1277; // [rsp+58h] [rbp-650h]
  char v1278; // [rsp+58h] [rbp-650h]
  char v1279; // [rsp+58h] [rbp-650h]
  char v1280; // [rsp+58h] [rbp-650h]
  char v1281; // [rsp+58h] [rbp-650h]
  char v1282; // [rsp+58h] [rbp-650h]
  char v1283; // [rsp+58h] [rbp-650h]
  char v1284; // [rsp+58h] [rbp-650h]
  char v1285; // [rsp+58h] [rbp-650h]
  char v1286; // [rsp+58h] [rbp-650h]
  char v1287; // [rsp+58h] [rbp-650h]
  char v1288; // [rsp+58h] [rbp-650h]
  char v1289; // [rsp+58h] [rbp-650h]
  char v1290; // [rsp+58h] [rbp-650h]
  char v1291; // [rsp+58h] [rbp-650h]
  char v1292; // [rsp+58h] [rbp-650h]
  char v1293; // [rsp+58h] [rbp-650h]
  char v1294; // [rsp+58h] [rbp-650h]
  char v1295; // [rsp+58h] [rbp-650h]
  char v1296; // [rsp+58h] [rbp-650h]
  char v1297; // [rsp+58h] [rbp-650h]
  char v1298; // [rsp+58h] [rbp-650h]
  char v1299; // [rsp+58h] [rbp-650h]
  char v1300; // [rsp+58h] [rbp-650h]
  char v1301; // [rsp+58h] [rbp-650h]
  char v1302; // [rsp+58h] [rbp-650h]
  char v1303; // [rsp+58h] [rbp-650h]
  char v1304; // [rsp+58h] [rbp-650h]
  char v1305; // [rsp+58h] [rbp-650h]
  char v1306; // [rsp+58h] [rbp-650h]
  char v1307; // [rsp+58h] [rbp-650h]
  char v1308; // [rsp+58h] [rbp-650h]
  char v1309; // [rsp+58h] [rbp-650h]
  char v1310; // [rsp+58h] [rbp-650h]
  char v1311; // [rsp+58h] [rbp-650h]
  char v1312; // [rsp+58h] [rbp-650h]
  char v1313; // [rsp+58h] [rbp-650h]
  char v1314; // [rsp+58h] [rbp-650h]
  char v1315; // [rsp+58h] [rbp-650h]
  char v1316; // [rsp+58h] [rbp-650h]
  char v1317; // [rsp+58h] [rbp-650h]
  char v1318; // [rsp+58h] [rbp-650h]
  char v1319; // [rsp+58h] [rbp-650h]
  char v1320; // [rsp+58h] [rbp-650h]
  char v1321; // [rsp+58h] [rbp-650h]
  char v1322; // [rsp+58h] [rbp-650h]
  char v1323; // [rsp+58h] [rbp-650h]
  char v1324; // [rsp+58h] [rbp-650h]
  char v1325; // [rsp+58h] [rbp-650h]
  __int64 v1326; // [rsp+60h] [rbp-648h]
  __int64 v1327; // [rsp+60h] [rbp-648h]
  __int64 v1328; // [rsp+60h] [rbp-648h]
  __int64 v1329; // [rsp+60h] [rbp-648h]
  __int64 v1330; // [rsp+60h] [rbp-648h]
  __int64 v1331; // [rsp+60h] [rbp-648h]
  __int64 v1332; // [rsp+60h] [rbp-648h]
  __int64 v1333; // [rsp+60h] [rbp-648h]
  __int64 v1334; // [rsp+60h] [rbp-648h]
  __int64 v1335; // [rsp+60h] [rbp-648h]
  __int64 v1336; // [rsp+60h] [rbp-648h]
  __int64 v1337; // [rsp+60h] [rbp-648h]
  __int64 v1338; // [rsp+60h] [rbp-648h]
  __int64 v1339; // [rsp+60h] [rbp-648h]
  __int64 v1340; // [rsp+60h] [rbp-648h]
  __int64 v1341; // [rsp+60h] [rbp-648h]
  __int64 v1342; // [rsp+60h] [rbp-648h]
  __int64 v1343; // [rsp+60h] [rbp-648h]
  __int64 v1344; // [rsp+60h] [rbp-648h]
  __int64 v1345; // [rsp+60h] [rbp-648h]
  __int64 v1346; // [rsp+60h] [rbp-648h]
  __int64 v1347; // [rsp+60h] [rbp-648h]
  __int64 v1348; // [rsp+60h] [rbp-648h]
  __int64 v1349; // [rsp+60h] [rbp-648h]
  __int64 v1350; // [rsp+60h] [rbp-648h]
  __int64 v1351; // [rsp+60h] [rbp-648h]
  __int64 v1352; // [rsp+60h] [rbp-648h]
  __int64 v1353; // [rsp+60h] [rbp-648h]
  __int64 v1354; // [rsp+60h] [rbp-648h]
  __int64 v1355; // [rsp+60h] [rbp-648h]
  __int64 v1356; // [rsp+60h] [rbp-648h]
  __int64 v1357; // [rsp+60h] [rbp-648h]
  __int64 v1358; // [rsp+60h] [rbp-648h]
  __int64 v1359; // [rsp+60h] [rbp-648h]
  __int64 v1360; // [rsp+60h] [rbp-648h]
  __int64 v1361; // [rsp+60h] [rbp-648h]
  __int64 v1362; // [rsp+60h] [rbp-648h]
  __int64 v1363; // [rsp+60h] [rbp-648h]
  __int64 v1364; // [rsp+60h] [rbp-648h]
  __int64 v1365; // [rsp+60h] [rbp-648h]
  __int64 v1366; // [rsp+60h] [rbp-648h]
  __int64 v1367; // [rsp+60h] [rbp-648h]
  __int64 v1368; // [rsp+60h] [rbp-648h]
  __int64 v1369; // [rsp+60h] [rbp-648h]
  __int64 v1370; // [rsp+60h] [rbp-648h]
  __int64 v1371; // [rsp+60h] [rbp-648h]
  __int64 v1372; // [rsp+60h] [rbp-648h]
  __int64 v1373; // [rsp+60h] [rbp-648h]
  __int64 v1374; // [rsp+60h] [rbp-648h]
  __int64 v1375; // [rsp+60h] [rbp-648h]
  __int64 v1376; // [rsp+60h] [rbp-648h]
  __int64 v1377; // [rsp+60h] [rbp-648h]
  __int64 v1378; // [rsp+60h] [rbp-648h]
  __int64 v1379; // [rsp+60h] [rbp-648h]
  __int64 v1380; // [rsp+60h] [rbp-648h]
  __int64 v1381; // [rsp+60h] [rbp-648h]
  __int64 v1382; // [rsp+60h] [rbp-648h]
  __int64 v1383; // [rsp+60h] [rbp-648h]
  __int64 v1384; // [rsp+60h] [rbp-648h]
  __int64 v1385; // [rsp+60h] [rbp-648h]
  __int64 v1386; // [rsp+60h] [rbp-648h]
  int v1387; // [rsp+68h] [rbp-640h]
  int v1388; // [rsp+68h] [rbp-640h]
  int v1389; // [rsp+68h] [rbp-640h]
  int v1390; // [rsp+68h] [rbp-640h]
  int v1391; // [rsp+68h] [rbp-640h]
  int v1392; // [rsp+68h] [rbp-640h]
  int v1393; // [rsp+68h] [rbp-640h]
  int v1394; // [rsp+68h] [rbp-640h]
  int v1395; // [rsp+68h] [rbp-640h]
  int v1396; // [rsp+68h] [rbp-640h]
  int v1397; // [rsp+68h] [rbp-640h]
  int v1398; // [rsp+68h] [rbp-640h]
  int v1399; // [rsp+68h] [rbp-640h]
  int v1400; // [rsp+68h] [rbp-640h]
  int v1401; // [rsp+68h] [rbp-640h]
  int v1402; // [rsp+68h] [rbp-640h]
  int v1403; // [rsp+68h] [rbp-640h]
  int v1404; // [rsp+68h] [rbp-640h]
  int v1405; // [rsp+68h] [rbp-640h]
  int v1406; // [rsp+68h] [rbp-640h]
  int v1407; // [rsp+68h] [rbp-640h]
  int v1408; // [rsp+68h] [rbp-640h]
  int v1409; // [rsp+68h] [rbp-640h]
  int v1410; // [rsp+68h] [rbp-640h]
  int v1411; // [rsp+68h] [rbp-640h]
  int v1412; // [rsp+68h] [rbp-640h]
  int v1413; // [rsp+68h] [rbp-640h]
  int v1414; // [rsp+68h] [rbp-640h]
  int v1415; // [rsp+68h] [rbp-640h]
  int v1416; // [rsp+68h] [rbp-640h]
  int v1417; // [rsp+68h] [rbp-640h]
  int v1418; // [rsp+68h] [rbp-640h]
  int v1419; // [rsp+68h] [rbp-640h]
  int v1420; // [rsp+68h] [rbp-640h]
  int v1421; // [rsp+68h] [rbp-640h]
  int v1422; // [rsp+68h] [rbp-640h]
  int v1423; // [rsp+68h] [rbp-640h]
  int v1424; // [rsp+68h] [rbp-640h]
  int v1425; // [rsp+68h] [rbp-640h]
  int v1426; // [rsp+68h] [rbp-640h]
  int v1427; // [rsp+68h] [rbp-640h]
  int v1428; // [rsp+68h] [rbp-640h]
  int v1429; // [rsp+68h] [rbp-640h]
  int v1430; // [rsp+68h] [rbp-640h]
  int v1431; // [rsp+68h] [rbp-640h]
  int v1432; // [rsp+68h] [rbp-640h]
  int v1433; // [rsp+68h] [rbp-640h]
  int v1434; // [rsp+68h] [rbp-640h]
  int v1435; // [rsp+68h] [rbp-640h]
  int v1436; // [rsp+68h] [rbp-640h]
  int v1437; // [rsp+68h] [rbp-640h]
  int v1438; // [rsp+68h] [rbp-640h]
  int v1439; // [rsp+68h] [rbp-640h]
  int v1440; // [rsp+68h] [rbp-640h]
  int v1441; // [rsp+68h] [rbp-640h]
  int v1442; // [rsp+68h] [rbp-640h]
  int v1443; // [rsp+68h] [rbp-640h]
  int v1444; // [rsp+68h] [rbp-640h]
  int v1445; // [rsp+68h] [rbp-640h]
  int v1446; // [rsp+68h] [rbp-640h]
  int v1447; // [rsp+68h] [rbp-640h]
  __m128 v1448; // [rsp+70h] [rbp-638h] BYREF
  ida_mcp::tools::data_creation *v1449; // [rsp+80h] [rbp-628h]
  char *v1450; // [rsp+88h] [rbp-620h]
  __int64 *v1451; // [rsp+90h] [rbp-618h]
  char *v1452; // [rsp+98h] [rbp-610h]
  char *v1453; // [rsp+A0h] [rbp-608h]
  char *v1454; // [rsp+A8h] [rbp-600h]
  char *v1455; // [rsp+B0h] [rbp-5F8h]
  __int8 *v1456; // [rsp+B8h] [rbp-5F0h]
  __m128i *v1457; // [rsp+C0h] [rbp-5E8h]
  __int64 *v1458; // [rsp+C8h] [rbp-5E0h]
  __int64 *v1459; // [rsp+D0h] [rbp-5D8h]
  __int64 *v1460; // [rsp+D8h] [rbp-5D0h]
  __int64 *v1461; // [rsp+E0h] [rbp-5C8h]
  __int64 *v1462; // [rsp+E8h] [rbp-5C0h]
  _QWORD *v1463; // [rsp+F0h] [rbp-5B8h]
  _BYTE *v1464; // [rsp+F8h] [rbp-5B0h]
  _BYTE **v1465; // [rsp+100h] [rbp-5A8h]
  _BYTE *v1466; // [rsp+108h] [rbp-5A0h]
  __m128i *v1467; // [rsp+110h] [rbp-598h]
  __m128i *v1468; // [rsp+118h] [rbp-590h]
  __m128i *v1469; // [rsp+120h] [rbp-588h]
  __m128i *v1470; // [rsp+128h] [rbp-580h]
  __int128 *v1471; // [rsp+130h] [rbp-578h]
  __int128 *v1472; // [rsp+138h] [rbp-570h]
  __m128i *v1473; // [rsp+140h] [rbp-568h]
  __int128 *v1474; // [rsp+148h] [rbp-560h]
  __m128i *v1475; // [rsp+150h] [rbp-558h]
  __int128 *v1476; // [rsp+158h] [rbp-550h]
  __m128i *v1477; // [rsp+160h] [rbp-548h]
  __int128 *v1478; // [rsp+168h] [rbp-540h]
  __int128 *v1479; // [rsp+170h] [rbp-538h]
  __int64 *v1480; // [rsp+178h] [rbp-530h]
  __int64 *v1481; // [rsp+180h] [rbp-528h]
  __int64 *v1482; // [rsp+188h] [rbp-520h]
  __int64 *v1483; // [rsp+190h] [rbp-518h]
  char *v1484; // [rsp+198h] [rbp-510h]
  char *v1485; // [rsp+1A0h] [rbp-508h]
  __int64 *v1486; // [rsp+1A8h] [rbp-500h]
  __int64 *v1487; // [rsp+1B0h] [rbp-4F8h]
  char *v1488; // [rsp+1B8h] [rbp-4F0h]
  __int64 *v1489; // [rsp+1C0h] [rbp-4E8h]
  char *v1490; // [rsp+1C8h] [rbp-4E0h]
  __int64 *v1491; // [rsp+1D0h] [rbp-4D8h]
  __int64 *v1492; // [rsp+1D8h] [rbp-4D0h]
  __int64 *v1493; // [rsp+1E0h] [rbp-4C8h]
  char *v1494; // [rsp+1E8h] [rbp-4C0h]
  __int64 *v1495; // [rsp+1F0h] [rbp-4B8h]
  __int64 *v1496; // [rsp+1F8h] [rbp-4B0h]
  __m128i *v1497; // [rsp+200h] [rbp-4A8h]
  _QWORD *v1498; // [rsp+208h] [rbp-4A0h]
  __m128i v1499; // [rsp+210h] [rbp-498h] BYREF
  __int64 v1500; // [rsp+220h] [rbp-488h] BYREF
  __int64 v1501; // [rsp+228h] [rbp-480h] BYREF
  __int64 v1502; // [rsp+230h] [rbp-478h] BYREF
  char v1503; // [rsp+238h] [rbp-470h] BYREF
  __int64 v1504; // [rsp+240h] [rbp-468h]
  __m128i v1505; // [rsp+250h] [rbp-458h] BYREF
  __int64 v1506; // [rsp+260h] [rbp-448h]
  char v1507; // [rsp+268h] [rbp-440h]
  __int128 v1508; // [rsp+270h] [rbp-438h] BYREF
  __m128i v1509; // [rsp+280h] [rbp-428h] BYREF
  __int64 v1510; // [rsp+290h] [rbp-418h]
  char v1511; // [rsp+298h] [rbp-410h]
  __int128 v1512; // [rsp+2A0h] [rbp-408h] BYREF
  __m128i v1513; // [rsp+2B0h] [rbp-3F8h] BYREF
  __int64 v1514; // [rsp+2C0h] [rbp-3E8h]
  char v1515; // [rsp+2C8h] [rbp-3E0h]
  __int128 v1516; // [rsp+2D0h] [rbp-3D8h] BYREF
  __m128i v1517; // [rsp+2E0h] [rbp-3C8h] BYREF
  __int64 v1518; // [rsp+2F0h] [rbp-3B8h]
  __int64 v1519; // [rsp+2F8h] [rbp-3B0h] BYREF
  char v1520; // [rsp+300h] [rbp-3A8h] BYREF
  __int64 v1521; // [rsp+308h] [rbp-3A0h]
  __m128i v1522; // [rsp+310h] [rbp-398h] BYREF
  __int64 v1523; // [rsp+320h] [rbp-388h]
  __int64 v1524; // [rsp+328h] [rbp-380h] BYREF
  __int128 v1525; // [rsp+330h] [rbp-378h] BYREF
  __m128i v1526; // [rsp+340h] [rbp-368h] BYREF
  __int64 v1527; // [rsp+350h] [rbp-358h]
  char v1528; // [rsp+358h] [rbp-350h]
  __int128 v1529; // [rsp+360h] [rbp-348h] BYREF
  __m128i v1530; // [rsp+370h] [rbp-338h] BYREF
  __int64 v1531; // [rsp+380h] [rbp-328h]
  char v1532; // [rsp+388h] [rbp-320h]
  __int128 v1533; // [rsp+390h] [rbp-318h] BYREF
  __int64 v1534; // [rsp+3A0h] [rbp-308h] BYREF
  __int128 v1535; // [rsp+3A8h] [rbp-300h] BYREF
  __int64 v1536; // [rsp+3B8h] [rbp-2F0h] BYREF
  char v1537; // [rsp+3C0h] [rbp-2E8h] BYREF
  __int64 v1538; // [rsp+3C8h] [rbp-2E0h]
  __int64 v1539; // [rsp+3D0h] [rbp-2D8h] BYREF
  __int128 v1540; // [rsp+3D8h] [rbp-2D0h] BYREF
  __int64 v1541; // [rsp+3E8h] [rbp-2C0h] BYREF
  char v1542; // [rsp+3F0h] [rbp-2B8h] BYREF
  __int64 v1543; // [rsp+3F8h] [rbp-2B0h]
  __m128i v1544; // [rsp+400h] [rbp-2A8h] BYREF
  __int64 v1545; // [rsp+410h] [rbp-298h]
  char v1546; // [rsp+418h] [rbp-290h] BYREF
  __int128 v1547; // [rsp+420h] [rbp-288h] BYREF
  __int64 v1548; // [rsp+430h] [rbp-278h] BYREF
  char v1549; // [rsp+438h] [rbp-270h] BYREF
  __int64 v1550; // [rsp+440h] [rbp-268h]
  char v1551; // [rsp+448h] [rbp-260h]
  __int128 v1552; // [rsp+450h] [rbp-258h] BYREF
  __int64 v1553; // [rsp+460h] [rbp-248h] BYREF
  char v1554; // [rsp+468h] [rbp-240h] BYREF
  __int64 v1555; // [rsp+470h] [rbp-238h]
  __int64 v1556; // [rsp+478h] [rbp-230h] BYREF
  __int128 v1557; // [rsp+480h] [rbp-228h] BYREF
  char v1558; // [rsp+490h] [rbp-218h] BYREF
  __int128 v1559; // [rsp+498h] [rbp-210h] BYREF
  __int64 v1560; // [rsp+4A8h] [rbp-200h] BYREF
  char v1561; // [rsp+4B0h] [rbp-1F8h] BYREF
  __int64 v1562; // [rsp+4B8h] [rbp-1F0h]
  char v1563; // [rsp+4C0h] [rbp-1E8h] BYREF
  __int128 v1564; // [rsp+4C8h] [rbp-1E0h] BYREF
  __int64 v1565; // [rsp+4D8h] [rbp-1D0h] BYREF
  char v1566; // [rsp+4E0h] [rbp-1C8h] BYREF
  __int64 v1567; // [rsp+4E8h] [rbp-1C0h]
  char v1568; // [rsp+4F0h] [rbp-1B8h] BYREF
  __int128 v1569; // [rsp+4F8h] [rbp-1B0h] BYREF
  __m128i v1570; // [rsp+508h] [rbp-1A0h] BYREF
  __int64 v1571; // [rsp+518h] [rbp-190h]
  __int64 v1572; // [rsp+520h] [rbp-188h] BYREF
  __int128 v1573; // [rsp+528h] [rbp-180h]
  __m128i v1574; // [rsp+538h] [rbp-170h] BYREF
  __int64 v1575; // [rsp+548h] [rbp-160h]
  _QWORD v1576[2]; // [rsp+550h] [rbp-158h] BYREF
  __int64 v1577; // [rsp+560h] [rbp-148h]
  char v1578; // [rsp+568h] [rbp-140h] BYREF
  void *v1579; // [rsp+570h] [rbp-138h] BYREF
  __int64 v1580; // [rsp+578h] [rbp-130h]
  __m128i v1581; // [rsp+580h] [rbp-128h] BYREF
  __int64 v1582; // [rsp+598h] [rbp-110h]
  _QWORD v1583[2]; // [rsp+5A0h] [rbp-108h] BYREF
  __int64 v1584; // [rsp+5B0h] [rbp-F8h]
  char v1585; // [rsp+5B8h] [rbp-F0h] BYREF
  _BYTE *v1586; // [rsp+5C0h] [rbp-E8h] BYREF
  __int64 v1587; // [rsp+5C8h] [rbp-E0h]
  _BYTE v1588[16]; // [rsp+5D0h] [rbp-D8h] BYREF
  _BYTE *v1589; // [rsp+5E0h] [rbp-C8h] BYREF
  __int64 v1590; // [rsp+5E8h] [rbp-C0h]
  _BYTE v1591[16]; // [rsp+5F0h] [rbp-B8h] BYREF
  char v1592; // [rsp+600h] [rbp-A8h]
  __int64 v1593; // [rsp+608h] [rbp-A0h]
  char v1594; // [rsp+620h] [rbp-88h]
  char v1595; // [rsp+658h] [rbp-50h]
  unsigned __int64 v1596; // [rsp+668h] [rbp-40h]

  v1449 = this;
  v1596 = __readfsqword(0x28u);
  v1464 = v1588;
  v1586 = v1588;
  v1587 = 0;
  v1588[0] = 0;
  v1466 = v1591;
  v1589 = v1591;
  v1591[0] = 0;
  v1590 = 0;
  v1592 = 0;
  v1593 = 0;
  v1594 = 0;
  v1595 = 0;
  std::string::_M_replace();
  v1465 = &v1589;
  std::string::_M_replace();
  v1473 = &v1505;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1505);
  v1506 = 0;
  v1507 = 0;
  *(_QWORD *)&v1508 = 0;
  v1474 = &v1508;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1507 = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "object", v3, v4, v5, v6, v456, v563, v670);
  v1508 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1579,
    &v1505);
  v1581.m128i_i64[0] = 0;
  v1563 = 0;
  *(_QWORD *)&v1564 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1563 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "properties", v8, v9, v10, v11, v457, v564, v671);
  v1468 = &v1522;
  v1564 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1522);
  v1523 = 0;
  v1475 = &v1509;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1509);
  v1510 = 0;
  v1511 = 0;
  *(_QWORD *)&v1512 = 0;
  v1476 = &v1512;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1511 = 3;
  v12 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v12, "string", v13, v14, v15, v16, v458, v565, v672);
  v1467 = &v1517;
  v1512 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1517,
    &v1509);
  v1518 = 0;
  v1477 = &v1513;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1513);
  v1514 = 0;
  v1515 = 0;
  *(_QWORD *)&v1516 = 0;
  v1478 = &v1516;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1515 = 3;
  v17 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v17, "Hex address", v18, v19, v20, v21, v459, v566, v673);
  v1495 = &v1519;
  v1516 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1519,
    &v1513);
  v1521 = 0;
  v1496 = &v1524;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1524,
    &v1517);
  *((_QWORD *)&v1525 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1572,
    &v1522);
  *((_QWORD *)&v1573 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1539);
  *((_QWORD *)&v1540 + 1) = 0;
  v1469 = &v1526;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1526);
  v1527 = 0;
  v1528 = 0;
  *(_QWORD *)&v1529 = 0;
  v1472 = &v1529;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1528 = 3;
  v22 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v22, "string", v23, v24, v25, v26, v460, v567, v674);
  v1529 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1534,
    &v1526);
  *((_QWORD *)&v1535 + 1) = 0;
  v1470 = &v1530;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1530);
  v1531 = 0;
  v1532 = 0;
  *(_QWORD *)&v1533 = 0;
  v1471 = &v1533;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1532 = 3;
  v27 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v27,
    "Data type: byte/word/dword/qword/float/double",
    v28,
    v29,
    v30,
    v31,
    v461,
    v568,
    v675);
  v1486 = &v1536;
  v1533 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1536,
    &v1530);
  v1538 = 0;
  v1487 = &v1541;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1541,
    (const __m128i *)&v1534);
  v1543 = 0;
  v1497 = &v1574;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1574,
    (const __m128i *)&v1539);
  v1575 = 0;
  v1558 = 0;
  *(_QWORD *)&v1559 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1558 = 3;
  v32 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v32, "count", v33, v34, v35, v36, v462, v569, v676);
  v1559 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1544);
  v1545 = 0;
  v1488 = &v1546;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1547 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1553,
    &v1544);
  v1555 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1548);
  v1550 = 0;
  v1551 = 0;
  *(_QWORD *)&v1552 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1551 = 3;
  v37 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v37,
    "Number of elements (default 1)",
    v38,
    v39,
    v40,
    v41,
    (int)&v1553,
    (int)&v1548,
    v677);
  v1489 = &v1556;
  v1552 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1556,
    v570);
  *((_QWORD *)&v1557 + 1) = 0;
  v1460 = &v1560;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1560,
    v463);
  v1562 = 0;
  v1498 = v1576;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1576,
    (const __m128i *)&v1558);
  v1577 = 0;
  v1461 = &v1565;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1565,
    (__int64)&v1572,
    3,
    v42,
    v43,
    v44,
    (int)v463,
    (__int64)v570,
    v678,
    (int)&v1552,
    (int)&v1534,
    (int)&v1539,
    v960,
    (int)&v1558,
    v1082,
    v1143,
    (int)&v1559,
    (char)&v1564,
    v1326,
    v1387,
    v1448.m128_i64[0]);
  v1567 = 0;
  v1462 = &v1581.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1581.m128i_i64[1],
    (const __m128i *)&v1563);
  v1582 = 0;
  v1568 = 0;
  *(_QWORD *)&v1569 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1568 = 3;
  v45 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v45, "required", v46, v47, v48, v49, v464, v571, (__int64)&v1569);
  v1448 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  v1569 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1502);
  v1504 = 0;
  v1457 = &v1499;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v50 = _mm_load_si128(&v1499);
  v1571 = 0;
  v1450 = &v1568;
  v1463 = v1583;
  v1570 = v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1583,
    (const __m128i *)&v1568);
  v1584 = 0;
  LOBYTE(v1500) = 0;
  v1458 = &v1500;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1500,
    (__int64)&v1579,
    3,
    v51,
    v52,
    v53,
    v465,
    v572,
    v679,
    v777,
    v838,
    v899,
    (__int64)&v1563,
    v1021,
    v1083,
    v1144,
    v1204,
    v1265,
    v1327,
    v1388,
    v1448.m128_i64[0]);
  v54 = v1592;
  v55 = (void **)&v1585;
  v56 = v1501;
  v1592 = v1500;
  LOBYTE(v1500) = v54;
  v1501 = v1593;
  v1593 = v56;
  v1459 = &v1501;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v55 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v55 != &v1579 );
  v57 = (__int64 *)&v1578;
  v1456 = &v1570.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1490 = &v1503;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1455 = &v1566;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v57 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v57 != &v1572 );
  v1454 = &v1561;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1453 = &v1554;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1452 = &v1549;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1451 = &v1544.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1485 = &v1542;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1484 = &v1537;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1483 = &v1530.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1482 = &v1526.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1479 = &v1525;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1481 = &v1522.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1494 = &v1520;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1480 = &v1517.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1493 = &v1513.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1492 = &v1509.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1491 = &v1505.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v1448);
  v1580 = 0;
  v1579 = ida_mcp::tools::data_creation::`anonymous namespace'::handle_create_data;
  v1581 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1581.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1581.m128i_i64[0])(&v1579, &v1579, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1586);
  v1587 = 0;
  v1588[0] = 0;
  v1586 = v1464;
  v1590 = 0;
  v1589 = v1466;
  v1591[0] = 0;
  v1592 = 0;
  v1593 = 0;
  v1594 = 0;
  v1595 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1473);
  v1506 = 0;
  v1507 = 0;
  *(_QWORD *)&v1508 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1507 = 3;
  v59 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v59, "object", v60, v61, v62, v63, v466, v573, v680);
  v1508 = (unsigned __int64)v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1579,
    v1473);
  v1581.m128i_i64[0] = 0;
  v1563 = 0;
  *(_QWORD *)&v1564 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1563 = 3;
  v64 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v64, "properties", v65, v66, v67, v68, v467, v574, v681);
  v1564 = (unsigned __int64)v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1468);
  v1523 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1475);
  v1510 = 0;
  v1511 = 0;
  *(_QWORD *)&v1512 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1511 = 3;
  v69 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v69, "string", v70, v71, v72, v73, v468, v575, v682);
  v1512 = (unsigned __int64)v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1467,
    v1475);
  v1518 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1477);
  v1514 = 0;
  v1515 = 0;
  *(_QWORD *)&v1516 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1515 = 3;
  v74 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v74, "Hex address", v75, v76, v77, v78, v469, v576, v683);
  v1516 = (unsigned __int64)v74;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1495,
    v1477);
  v1521 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1496,
    v1467);
  *((_QWORD *)&v1525 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1572,
    v1468);
  *((_QWORD *)&v1573 + 1) = 0;
  LOBYTE(v1539) = 0;
  *(_QWORD *)&v1540 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1539) = 3;
  v79 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v79, "length", v80, v81, v82, v83, v470, v577, v684);
  v1540 = (unsigned __int64)v79;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1469);
  v1527 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1529 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v839,
    v1469);
  *((_QWORD *)&v1535 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1470);
  v1531 = 0;
  v1532 = 0;
  *(_QWORD *)&v1533 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1532 = 3;
  v84 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v84,
    "String length (0=auto-detect)",
    v85,
    v86,
    v87,
    v88,
    v471,
    v578,
    v685);
  v1533 = (unsigned __int64)v84;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1486,
    (__int64)v1470,
    2,
    v89,
    v90,
    v91,
    v472,
    v579,
    v686,
    v778,
    (int)v839,
    v900,
    v961,
    v1022,
    (int)&v1547,
    (int)&v1557,
    v1205,
    v1266,
    (__int64)&v1535,
    (int)&v1540,
    v1448.m128_i64[0]);
  v1538 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1487,
    v840,
    2,
    v92,
    v93,
    v94,
    v473,
    v580,
    v687,
    v779,
    v840,
    v901,
    v962,
    v1023,
    v1084,
    v1145,
    v1206,
    v1267,
    v1328,
    v1389,
    v1448.m128_i64[0]);
  v1543 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1497,
    v902,
    2,
    v95,
    v96,
    v97,
    v474,
    v581,
    v688,
    v780,
    v841,
    v902,
    v963,
    v1024,
    v1085,
    v1146,
    v1207,
    v1268,
    v1329,
    v1390,
    v1448.m128_i64[0]);
  v1575 = 0;
  v1558 = 0;
  *(_QWORD *)&v1559 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1558 = 3;
  v98 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v98, "string_type", v99, v100, v101, v102, v475, v582, v689);
  v1559 = (unsigned __int64)v98;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1544);
  v1545 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1547 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v476,
    (__int64)&v1544,
    2,
    v103,
    v104,
    v105,
    (int)v476,
    v583,
    v690,
    v781,
    v842,
    v903,
    v964,
    v1025,
    v1086,
    v1147,
    v1208,
    v1269,
    v1330,
    v1391,
    v1448.m128_i64[0]);
  v1555 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v584);
  v1550 = 0;
  v1551 = 0;
  *(_QWORD *)&v1552 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1551 = 3;
  v106 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v106,
    "0=C string, 1=Pascal, 2=LEN2, 3=Unicode (default 0)",
    v107,
    v108,
    v109,
    v110,
    v477,
    (int)v584,
    v691);
  v1552 = (unsigned __int64)v106;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1489,
    v585,
    2,
    v111,
    v112,
    v113,
    v478,
    v585,
    v692,
    v782,
    v843,
    v904,
    v965,
    v1026,
    v1087,
    v1148,
    v1209,
    v1270,
    v1331,
    v1392,
    v1448.m128_i64[0]);
  *((_QWORD *)&v1557 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1460,
    v479,
    2,
    v114,
    v115,
    v116,
    v479,
    v586,
    v693,
    v783,
    v844,
    v905,
    v966,
    v1027,
    v1088,
    v1149,
    v1210,
    v1271,
    v1332,
    v1393,
    v1448.m128_i64[0]);
  v1562 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1498,
    v1028,
    2,
    v117,
    v118,
    v119,
    v480,
    v587,
    v694,
    v784,
    v845,
    v906,
    v967,
    v1028,
    v1089,
    v1150,
    v1211,
    v1272,
    v1333,
    v1394,
    v1448.m128_i64[0]);
  v1577 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1461,
    (__int64)&v1572,
    3,
    v120,
    v121,
    v122,
    v481,
    v588,
    v695,
    v785,
    v846,
    v907,
    v968,
    v1029,
    v1090,
    v1151,
    v1212,
    v1273,
    v1334,
    v1395,
    v1448.m128_i64[0]);
  v1567 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1462,
    v969,
    2,
    v123,
    v124,
    v125,
    v482,
    v589,
    v696,
    v786,
    v847,
    v908,
    v969,
    v1030,
    v1091,
    v1152,
    v1213,
    v1274,
    v1335,
    v1396,
    v1448.m128_i64[0]);
  v1582 = 0;
  v1568 = 0;
  *(_QWORD *)&v1569 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1568 = 3;
  v126 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v126, "required", v127, v128, v129, v130, v483, v590, v697);
  v1569 = (unsigned __int64)v126;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1502);
  v1504 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v131 = _mm_load_si128(&v1499);
  v1571 = 0;
  v1570 = v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1463,
    (__int64)v1450,
    2,
    v132,
    v133,
    v134,
    v484,
    v591,
    v698,
    v787,
    v848,
    v909,
    v970,
    v1031,
    v1092,
    v1153,
    v1214,
    v1275,
    v1336,
    v1397,
    v1448.m128_i64[0]);
  v1584 = 0;
  LOBYTE(v1500) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1458,
    (__int64)&v1579,
    3,
    v135,
    v136,
    v137,
    v485,
    v592,
    v699,
    v788,
    v849,
    v910,
    v971,
    v1032,
    v1093,
    v1154,
    v1215,
    v1276,
    v1337,
    v1398,
    v1448.m128_i64[0]);
  v138 = v1592;
  v139 = (void **)&v1585;
  v1592 = v1500;
  v140 = v1593;
  LOBYTE(v1500) = v138;
  v1593 = v1501;
  v1501 = v140;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v139 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v139 != &v1579 );
  v141 = (__int64 *)&v1578;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v141 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v141 != &v1572 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v142 = _mm_load_si128((const __m128i *)&v1448);
  v1580 = 0;
  v1579 = ida_mcp::tools::data_creation::`anonymous namespace'::handle_create_string;
  v1581 = v142;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1581.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1581.m128i_i64[0])(&v1579, &v1579, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1586);
  v1587 = 0;
  v1588[0] = 0;
  v1586 = v1464;
  v1590 = 0;
  v1589 = v1466;
  v1591[0] = 0;
  v1592 = 0;
  v1593 = 0;
  v1594 = 0;
  v1595 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1468);
  v1523 = 0;
  LOBYTE(v1524) = 0;
  *(_QWORD *)&v1525 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1524) = 3;
  v143 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v143, "object", v144, v145, v146, v147, v486, v593, v700);
  v1525 = (unsigned __int64)v143;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1579,
    (__int64)v1468,
    2,
    v148,
    v149,
    v150,
    v487,
    v594,
    v701,
    v789,
    v850,
    v911,
    v972,
    v1033,
    v1094,
    v1155,
    v1216,
    v1277,
    v1338,
    v1399,
    v1448.m128_i64[0]);
  v1581.m128i_i64[0] = 0;
  v1568 = 0;
  *(_QWORD *)&v1569 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1568 = 3;
  v151 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v151, "properties", v152, v153, v154, v155, v488, v595, v702);
  v1569 = (unsigned __int64)v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v912);
  *((_QWORD *)&v1540 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1469);
  v1527 = 0;
  v1528 = 0;
  *(_QWORD *)&v1529 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1528 = 3;
  v156 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v156, "string", v157, v158, v159, v160, v489, v596, v703);
  v1529 = (unsigned __int64)v156;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v851,
    (__int64)v1469,
    2,
    v161,
    v162,
    v163,
    v490,
    v597,
    v704,
    v790,
    (int)v851,
    (int)v912,
    v973,
    v1034,
    v1095,
    v1156,
    v1217,
    v1278,
    v1339,
    v1400,
    v1448.m128_i64[0]);
  *((_QWORD *)&v1535 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1470);
  v1531 = 0;
  v1532 = 0;
  *(_QWORD *)&v1533 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1532 = 3;
  v164 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v164, "Start hex address", v165, v166, v167, v168, v491, v598, v705);
  v1533 = (unsigned __int64)v164;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1486,
    (__int64)v1470,
    2,
    v169,
    v170,
    v171,
    v492,
    v599,
    v706,
    v791,
    v852,
    v913,
    v974,
    v1035,
    v1096,
    v1157,
    v1218,
    v1279,
    v1340,
    v1401,
    v1448.m128_i64[0]);
  v1538 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1487,
    v853,
    2,
    v172,
    v173,
    v174,
    v493,
    v600,
    v707,
    v792,
    v853,
    v914,
    v975,
    v1036,
    v1097,
    v1158,
    v1219,
    v1280,
    v1341,
    v1402,
    v1448.m128_i64[0]);
  v1543 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v976,
    v915,
    2,
    v175,
    v176,
    v177,
    v494,
    v601,
    v708,
    v793,
    v854,
    v915,
    (__int64)v976,
    v1037,
    v1098,
    v1159,
    v1220,
    v1281,
    v1342,
    v1403,
    v1448.m128_i64[0]);
  *((_QWORD *)&v1564 + 1) = 0;
  v1558 = 0;
  *(_QWORD *)&v1559 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1558 = 3;
  v178 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v178, "size", v179, v180, v181, v182, v495, v602, v709);
  v1559 = (unsigned __int64)v178;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1544);
  v1545 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1547 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v496,
    (__int64)&v1544,
    2,
    v183,
    v184,
    v185,
    (int)v496,
    v603,
    v710,
    v794,
    v855,
    v916,
    v977,
    v1038,
    v1099,
    v1160,
    v1221,
    v1282,
    v1343,
    v1404,
    v1448.m128_i64[0]);
  v1555 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v604);
  v1550 = 0;
  v1551 = 0;
  *(_QWORD *)&v1552 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1551 = 3;
  v186 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v186,
    "Number of bytes to undefine (default 1)",
    v187,
    v188,
    v189,
    v190,
    v497,
    (int)v604,
    v711);
  v1552 = (unsigned __int64)v186;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1489,
    v605,
    2,
    v191,
    v192,
    v193,
    v498,
    v605,
    v712,
    v795,
    v856,
    v917,
    v978,
    v1039,
    v1100,
    v1161,
    v1222,
    v1283,
    v1344,
    v1405,
    v1448.m128_i64[0]);
  *((_QWORD *)&v1557 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1460,
    v499,
    2,
    v194,
    v195,
    v196,
    v499,
    v606,
    v713,
    v796,
    v857,
    v918,
    v979,
    v1040,
    v1101,
    v1162,
    v1223,
    v1284,
    v1345,
    v1406,
    v1448.m128_i64[0]);
  v1562 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1461,
    v1041,
    2,
    v197,
    v198,
    v199,
    v500,
    v607,
    v714,
    v797,
    v858,
    v919,
    v980,
    v1041,
    v1102,
    v1163,
    v1224,
    v1285,
    v1346,
    v1407,
    v1448.m128_i64[0]);
  v1567 = 0;
  v1473 = &v1570;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1570,
    v981,
    2,
    v200,
    v201,
    v202,
    v501,
    v608,
    v715,
    v798,
    v859,
    v920,
    v981,
    v1042,
    v1103,
    v1164,
    v1225,
    v1286,
    v1347,
    v1408,
    v1448.m128_i64[0]);
  v1571 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1462,
    (__int64)v1450,
    2,
    v203,
    v204,
    v205,
    v502,
    v609,
    v716,
    v799,
    v860,
    v921,
    v982,
    v1043,
    v1104,
    v1165,
    v1226,
    v1287,
    v1348,
    v1409,
    v1448.m128_i64[0]);
  v1582 = 0;
  LOBYTE(v1572) = 0;
  *(_QWORD *)&v1573 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1572) = 3;
  v206 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v206, "required", v207, v208, v209, v210, v503, v610, v717);
  v1573 = (unsigned __int64)v206;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1467);
  v1518 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v211 = _mm_load_si128(&v1499);
  v1575 = 0;
  v1574 = v211;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1463,
    (__int64)&v1572,
    2,
    v212,
    v213,
    v214,
    v504,
    v611,
    v718,
    v800,
    v861,
    v922,
    v983,
    v1044,
    v1105,
    v1166,
    v1227,
    v1288,
    v1349,
    v1410,
    v1448.m128_i64[0]);
  v1584 = 0;
  LOBYTE(v1500) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1458,
    (__int64)&v1579,
    3,
    v215,
    v216,
    v217,
    v505,
    v612,
    v719,
    v801,
    v862,
    v923,
    v984,
    v1045,
    v1106,
    v1167,
    v1228,
    v1289,
    v1350,
    v1411,
    v1448.m128_i64[0]);
  v218 = v1592;
  v219 = (void **)&v1585;
  v1592 = v1500;
  v220 = v1593;
  LOBYTE(v1500) = v218;
  v1593 = v1501;
  v1501 = v220;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v219 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v219 != &v1579 );
  v1467 = (__m128i *)&v1574.m128i_u64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v221 = _mm_load_si128((const __m128i *)&v1448);
  v1580 = 0;
  v1579 = ida_mcp::tools::data_creation::`anonymous namespace'::handle_undefine;
  v1581 = v221;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1581.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1581.m128i_i64[0])(&v1579, &v1579, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1586);
  v1587 = 0;
  v1588[0] = 0;
  v1586 = v1464;
  v1590 = 0;
  v1589 = v1466;
  v1591[0] = 0;
  v1592 = 0;
  v1593 = 0;
  v1594 = 0;
  v1595 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1544);
  v1545 = 0;
  v1546 = 0;
  *(_QWORD *)&v1547 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1546 = 3;
  v222 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v222, "object", v223, v224, v225, v226, v506, v613, v720);
  v1547 = (unsigned __int64)v222;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1579,
    (__int64)&v1544,
    2,
    v227,
    v228,
    v229,
    v507,
    v614,
    v721,
    v802,
    v863,
    v924,
    v985,
    v1046,
    v1107,
    v1168,
    v1229,
    v1290,
    v1351,
    v1412,
    v1448.m128_i64[0]);
  v1581.m128i_i64[0] = 0;
  v1568 = 0;
  *(_QWORD *)&v1569 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1568 = 3;
  v230 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v230, "properties", v231, v232, v233, v234, v508, v615, v722);
  v1569 = (unsigned __int64)v230;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v986);
  *((_QWORD *)&v1564 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v616);
  v1550 = 0;
  v1551 = 0;
  *(_QWORD *)&v1552 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1551 = 3;
  v235 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v235, "string", v236, v237, v238, v239, v509, (int)v616, v723);
  v1552 = (unsigned __int64)v235;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1047,
    v617,
    2,
    v240,
    v241,
    v242,
    v510,
    v617,
    v724,
    v803,
    v864,
    v925,
    (__int64)v986,
    (int)v1047,
    v1108,
    v1169,
    v1230,
    v1291,
    v1352,
    v1413,
    v1448.m128_i64[0]);
  *((_QWORD *)&v1559 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v511);
  v1555 = 0;
  LOBYTE(v1556) = 0;
  *(_QWORD *)&v1557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1556) = 3;
  v243 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v243, "Hex address", v244, v245, v246, v247, (int)v511, v618, v725);
  v1557 = (unsigned __int64)v243;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1460,
    v512,
    2,
    v248,
    v249,
    v250,
    v512,
    v619,
    v726,
    v804,
    v865,
    v926,
    v987,
    v1048,
    v1109,
    v1170,
    v1231,
    v1292,
    v1353,
    v1414,
    v1448.m128_i64[0]);
  v1562 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1461,
    v1049,
    2,
    v251,
    v252,
    v253,
    v513,
    v620,
    v727,
    v805,
    v866,
    v927,
    v988,
    v1049,
    v1110,
    v1171,
    v1232,
    v1293,
    v1354,
    v1415,
    v1448.m128_i64[0]);
  v1567 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v928,
    v989,
    2,
    v254,
    v255,
    v256,
    v514,
    v621,
    v728,
    v806,
    v867,
    (int)v928,
    v989,
    v1050,
    v1111,
    v1172,
    v1233,
    v1294,
    v1355,
    v1416,
    v1448.m128_i64[0]);
  *((_QWORD *)&v1540 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1473,
    v929,
    1,
    v257,
    v258,
    v259,
    v515,
    v622,
    v729,
    v807,
    v868,
    v929,
    v990,
    v1051,
    v1112,
    v1173,
    v1234,
    v1295,
    v1356,
    v1417,
    v1448.m128_i64[0]);
  v1571 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1462,
    (__int64)v1450,
    2,
    v260,
    v261,
    v262,
    v516,
    v623,
    v730,
    v808,
    v869,
    v930,
    v991,
    v1052,
    v1113,
    v1174,
    v1235,
    v1296,
    v1357,
    v1418,
    v1448.m128_i64[0]);
  v1582 = 0;
  LOBYTE(v1572) = 0;
  *(_QWORD *)&v1573 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1572) = 3;
  v263 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v263, "required", v264, v265, v266, v267, v517, v624, v731);
  v1573 = (unsigned __int64)v263;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v870);
  *((_QWORD *)&v1535 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v268 = _mm_load_si128(&v1499);
  v1575 = 0;
  v1574 = v268;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1463,
    (__int64)&v1572,
    2,
    v269,
    v270,
    v271,
    v518,
    v625,
    v732,
    v809,
    (int)v870,
    v931,
    v992,
    v1053,
    v1114,
    v1175,
    v1236,
    v1297,
    v1358,
    v1419,
    v1448.m128_i64[0]);
  v1584 = 0;
  LOBYTE(v1500) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1458,
    (__int64)&v1579,
    3,
    v272,
    v273,
    v274,
    v519,
    v626,
    v733,
    v810,
    v871,
    v932,
    v993,
    v1054,
    v1115,
    v1176,
    v1237,
    v1298,
    v1359,
    v1420,
    v1448.m128_i64[0]);
  v275 = v1592;
  v276 = (void **)&v1585;
  v1592 = v1500;
  v277 = v1593;
  LOBYTE(v1500) = v275;
  v1593 = v1501;
  v1501 = v277;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v276 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v276 != &v1579 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v278 = _mm_load_si128((const __m128i *)&v1448);
  v1580 = 0;
  v1579 = ida_mcp::tools::data_creation::`anonymous namespace'::handle_make_code;
  v1581 = v278;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1581.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1581.m128i_i64[0])(&v1579, &v1579, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1586);
  v1587 = 0;
  v1588[0] = 0;
  v1586 = v1464;
  v1590 = 0;
  v1589 = v1466;
  v1591[0] = 0;
  v1592 = 0;
  v1593 = 0;
  v1594 = 0;
  v1595 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1544);
  v1545 = 0;
  v1546 = 0;
  *(_QWORD *)&v1547 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1546 = 3;
  v279 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v279, "object", v280, v281, v282, v283, v520, v627, v734);
  v1547 = (unsigned __int64)v279;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1579,
    (__int64)&v1544,
    2,
    v284,
    v285,
    v286,
    v521,
    v628,
    v735,
    v811,
    v872,
    v933,
    v994,
    v1055,
    v1116,
    v1177,
    v1238,
    v1299,
    v1360,
    v1421,
    v1448.m128_i64[0]);
  v1581.m128i_i64[0] = 0;
  v1568 = 0;
  *(_QWORD *)&v1569 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1568 = 3;
  v287 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v287, "properties", v288, v289, v290, v291, v522, v629, v736);
  v1569 = (unsigned __int64)v287;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v995);
  *((_QWORD *)&v1564 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v630);
  v1550 = 0;
  v1551 = 0;
  *(_QWORD *)&v1552 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1551 = 3;
  v292 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v292, "string", v293, v294, v295, v296, v523, (int)v630, v737);
  v1552 = (unsigned __int64)v292;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1056,
    v631,
    2,
    v297,
    v298,
    v299,
    v524,
    v631,
    v738,
    v812,
    v873,
    v934,
    (__int64)v995,
    (int)v1056,
    v1117,
    v1178,
    v1239,
    v1300,
    v1361,
    v1422,
    v1448.m128_i64[0]);
  *((_QWORD *)&v1559 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v525);
  v1555 = 0;
  LOBYTE(v1556) = 0;
  *(_QWORD *)&v1557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1556) = 3;
  v300 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v300, "Hex address", v301, v302, v303, v304, (int)v525, v632, v739);
  v1557 = (unsigned __int64)v300;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1460,
    v526,
    2,
    v305,
    v306,
    v307,
    v526,
    v633,
    v740,
    v813,
    v874,
    v935,
    v996,
    v1057,
    v1118,
    v1179,
    v1240,
    v1301,
    v1362,
    v1423,
    v1448.m128_i64[0]);
  v1562 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1461,
    v1058,
    2,
    v308,
    v309,
    v310,
    v527,
    v634,
    v741,
    v814,
    v875,
    v936,
    v997,
    v1058,
    v1119,
    v1180,
    v1241,
    v1302,
    v1363,
    v1424,
    v1448.m128_i64[0]);
  v1567 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v937,
    v998,
    2,
    v311,
    v312,
    v313,
    v528,
    v635,
    v742,
    v815,
    v876,
    (int)v937,
    v998,
    v1059,
    v1120,
    v1181,
    v1242,
    v1303,
    v1364,
    v1425,
    v1448.m128_i64[0]);
  *((_QWORD *)&v1540 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1473,
    v938,
    1,
    v314,
    v315,
    v316,
    v529,
    v636,
    v743,
    v816,
    v877,
    v938,
    v999,
    v1060,
    v1121,
    v1182,
    v1243,
    v1304,
    v1365,
    v1426,
    v1448.m128_i64[0]);
  v1571 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1462,
    (__int64)v1450,
    2,
    v317,
    v318,
    v319,
    v530,
    v637,
    v744,
    v817,
    v878,
    v939,
    v1000,
    v1061,
    v1122,
    v1183,
    v1244,
    v1305,
    v1366,
    v1427,
    v1448.m128_i64[0]);
  v1582 = 0;
  LOBYTE(v1572) = 0;
  *(_QWORD *)&v1573 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1572) = 3;
  v320 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v320, "required", v321, v322, v323, v324, v531, v638, v745);
  v1573 = (unsigned __int64)v320;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v879);
  *((_QWORD *)&v1535 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v325 = _mm_load_si128(&v1499);
  v1575 = 0;
  v1574 = v325;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1463,
    (__int64)&v1572,
    2,
    v326,
    v327,
    v328,
    v532,
    v639,
    v746,
    v818,
    (int)v879,
    v940,
    v1001,
    v1062,
    v1123,
    v1184,
    v1245,
    v1306,
    v1367,
    v1428,
    v1448.m128_i64[0]);
  v1584 = 0;
  LOBYTE(v1500) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1458,
    (__int64)&v1579,
    3,
    v329,
    v330,
    v331,
    v533,
    v640,
    v747,
    v819,
    v880,
    v941,
    v1002,
    v1063,
    v1124,
    v1185,
    v1246,
    v1307,
    v1368,
    v1429,
    v1448.m128_i64[0]);
  v332 = v1592;
  v333 = (void **)&v1585;
  v1592 = v1500;
  v334 = v1593;
  LOBYTE(v1500) = v332;
  v1593 = v1501;
  v1501 = v334;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v333 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v333 != &v1579 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v335 = _mm_load_si128((const __m128i *)&v1448);
  v1580 = 0;
  v1579 = ida_mcp::tools::data_creation::`anonymous namespace'::handle_get_data_value;
  v1581 = v335;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1581.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1581.m128i_i64[0])(&v1579, &v1579, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1586);
  v1587 = 0;
  v1588[0] = 0;
  v1586 = v1464;
  v1590 = 0;
  v1589 = v1466;
  v1591[0] = 0;
  v1592 = 0;
  v1593 = 0;
  v1594 = 0;
  v1595 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1544);
  v1545 = 0;
  v1546 = 0;
  *(_QWORD *)&v1547 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1546 = 3;
  v336 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v336, "object", v337, v338, v339, v340, v534, v641, v748);
  v1547 = (unsigned __int64)v336;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1579,
    (__int64)&v1544,
    2,
    v341,
    v342,
    v343,
    v535,
    v642,
    v749,
    v820,
    v881,
    v942,
    v1003,
    v1064,
    v1125,
    v1186,
    v1247,
    v1308,
    v1369,
    v1430,
    v1448.m128_i64[0]);
  v1581.m128i_i64[0] = 0;
  v1568 = 0;
  *(_QWORD *)&v1569 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1568 = 3;
  v344 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v344, "properties", v345, v346, v347, v348, v536, v643, v750);
  v1569 = (unsigned __int64)v344;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1004);
  *((_QWORD *)&v1564 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v644);
  v1550 = 0;
  v1551 = 0;
  *(_QWORD *)&v1552 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1551 = 3;
  v349 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v349, "string", v350, v351, v352, v353, v537, (int)v644, v751);
  v1552 = (unsigned __int64)v349;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1065,
    v645,
    2,
    v354,
    v355,
    v356,
    v538,
    v645,
    v752,
    v821,
    v882,
    v943,
    (__int64)v1004,
    (int)v1065,
    v1126,
    v1187,
    v1248,
    v1309,
    v1370,
    v1431,
    v1448.m128_i64[0]);
  *((_QWORD *)&v1559 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v539);
  v1555 = 0;
  LOBYTE(v1556) = 0;
  *(_QWORD *)&v1557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1556) = 3;
  v357 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v357,
    "Virtual address (hex)",
    v358,
    v359,
    v360,
    v361,
    (int)v539,
    v646,
    v753);
  v1557 = (unsigned __int64)v357;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1460,
    v540,
    2,
    v362,
    v363,
    v364,
    v540,
    v647,
    v754,
    v822,
    v883,
    v944,
    v1005,
    v1066,
    v1127,
    v1188,
    v1249,
    v1310,
    v1371,
    v1432,
    v1448.m128_i64[0]);
  v1562 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1461,
    v1067,
    2,
    v365,
    v366,
    v367,
    v541,
    v648,
    v755,
    v823,
    v884,
    v945,
    v1006,
    v1067,
    v1128,
    v1189,
    v1250,
    v1311,
    v1372,
    v1433,
    v1448.m128_i64[0]);
  v1567 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v946,
    v1007,
    2,
    v368,
    v369,
    v370,
    v542,
    v649,
    v756,
    v824,
    v885,
    (int)v946,
    v1007,
    v1068,
    v1129,
    v1190,
    v1251,
    v1312,
    v1373,
    v1434,
    v1448.m128_i64[0]);
  *((_QWORD *)&v1540 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1473,
    v947,
    1,
    v371,
    v372,
    v373,
    v543,
    v650,
    v757,
    v825,
    v886,
    v947,
    v1008,
    v1069,
    v1130,
    v1191,
    v1252,
    v1313,
    v1374,
    v1435,
    v1448.m128_i64[0]);
  v1571 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1462,
    (__int64)v1450,
    2,
    v374,
    v375,
    v376,
    v544,
    v651,
    v758,
    v826,
    v887,
    v948,
    v1009,
    v1070,
    v1131,
    v1192,
    v1253,
    v1314,
    v1375,
    v1436,
    v1448.m128_i64[0]);
  v1582 = 0;
  LOBYTE(v1572) = 0;
  *(_QWORD *)&v1573 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1572) = 3;
  v377 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v377, "required", v378, v379, v380, v381, v545, v652, v759);
  v1573 = (unsigned __int64)v377;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v888);
  *((_QWORD *)&v1535 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v382 = _mm_load_si128(&v1499);
  v1575 = 0;
  v1574 = v382;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1463,
    (__int64)&v1572,
    2,
    v383,
    v384,
    v385,
    v546,
    v653,
    v760,
    v827,
    (int)v888,
    v949,
    v1010,
    v1071,
    v1132,
    v1193,
    v1254,
    v1315,
    v1376,
    v1437,
    v1448.m128_i64[0]);
  v1584 = 0;
  LOBYTE(v1500) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1458,
    (__int64)&v1579,
    3,
    v386,
    v387,
    v388,
    v547,
    v654,
    v761,
    v828,
    v889,
    v950,
    v1011,
    v1072,
    v1133,
    v1194,
    v1255,
    v1316,
    v1377,
    v1438,
    v1448.m128_i64[0]);
  v389 = v1592;
  v390 = (void **)&v1585;
  v1592 = v1500;
  v391 = v1593;
  LOBYTE(v1500) = v389;
  v1593 = v1501;
  v1501 = v391;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v390 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v390 != &v1579 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v392 = _mm_load_si128((const __m128i *)&v1448);
  v1580 = 0;
  v1579 = ida_mcp::tools::data_creation::`anonymous namespace'::handle_get_file_offset;
  v1581 = v392;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1581.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1581.m128i_i64[0])(&v1579, &v1579, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1586);
  v1587 = 0;
  v1588[0] = 0;
  v1586 = v1464;
  v1590 = 0;
  v1589 = v1466;
  v1591[0] = 0;
  v1592 = 0;
  v1593 = 0;
  v1594 = 0;
  v1595 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1544);
  v1545 = 0;
  v1546 = 0;
  *(_QWORD *)&v1547 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1546 = 3;
  v393 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v393, "object", v394, v395, v396, v397, v548, v655, v762);
  v1547 = (unsigned __int64)v393;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1579,
    (__int64)&v1544,
    2,
    v398,
    v399,
    v400,
    v549,
    v656,
    v763,
    v829,
    v890,
    v951,
    v1012,
    v1073,
    v1134,
    v1195,
    v1256,
    v1317,
    v1378,
    v1439,
    v1448.m128_i64[0]);
  v1581.m128i_i64[0] = 0;
  v1568 = 0;
  *(_QWORD *)&v1569 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1568 = 3;
  v401 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v401, "properties", v402, v403, v404, v405, v550, v657, v764);
  v1563 = 0;
  *(_QWORD *)&v1564 = 0;
  v1569 = (unsigned __int64)v401;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1563 = 3;
  v406 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v406, "offset", v407, v408, v409, v410, v551, v658, v765);
  v1564 = (unsigned __int64)v406;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v659);
  v1550 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1552 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1074,
    (__int64)v659,
    2,
    v411,
    v412,
    v413,
    v552,
    (__int64)v659,
    v766,
    v830,
    v891,
    v952,
    v1013,
    (int)v1074,
    v1135,
    v1196,
    v1257,
    v1318,
    v1379,
    v1440,
    v1448.m128_i64[0]);
  *((_QWORD *)&v1559 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v553);
  v1555 = 0;
  LOBYTE(v1556) = 0;
  *(_QWORD *)&v1557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1556) = 3;
  v414 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v414, "File offset", v415, v416, v417, v418, (int)v553, v660, v767);
  v1557 = (unsigned __int64)v414;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1460,
    v554,
    2,
    v419,
    v420,
    v421,
    v554,
    v661,
    v768,
    v831,
    v892,
    v953,
    v1014,
    v1075,
    v1136,
    v1197,
    v1258,
    v1319,
    v1380,
    v1441,
    v1448.m128_i64[0]);
  v1562 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1461,
    v1076,
    2,
    v422,
    v423,
    v424,
    v555,
    v662,
    v769,
    v832,
    v893,
    v954,
    v1015,
    v1076,
    v1137,
    v1198,
    v1259,
    v1320,
    v1381,
    v1442,
    v1448.m128_i64[0]);
  v1567 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v955,
    v1016,
    2,
    v425,
    v426,
    v427,
    v556,
    v663,
    v770,
    v833,
    v894,
    (int)v955,
    v1016,
    v1077,
    v1138,
    v1199,
    v1260,
    v1321,
    v1382,
    v1443,
    v1448.m128_i64[0]);
  *((_QWORD *)&v1540 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1473,
    v956,
    1,
    v428,
    v429,
    v430,
    v557,
    v664,
    v771,
    v834,
    v895,
    v956,
    v1017,
    v1078,
    v1139,
    v1200,
    v1261,
    v1322,
    v1383,
    v1444,
    v1448.m128_i64[0]);
  v1571 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1462,
    (__int64)v1450,
    2,
    v431,
    v432,
    v433,
    v558,
    v665,
    v772,
    v835,
    v896,
    v957,
    v1018,
    v1079,
    v1140,
    v1201,
    v1262,
    v1323,
    v1384,
    v1445,
    v1448.m128_i64[0]);
  v1582 = 0;
  LOBYTE(v1572) = 0;
  *(_QWORD *)&v1573 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1572) = 3;
  v434 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v434, "required", v435, v436, v437, v438, v559, v666, v773);
  LOBYTE(v1534) = 0;
  *(_QWORD *)&v1535 = 0;
  v1573 = (unsigned __int64)v434;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1534) = 3;
  v439 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v439, "offset", v440, v441, v442, v443, v560, v667, v774);
  v1535 = (unsigned __int64)v439;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v444 = _mm_load_si128(&v1499);
  v1575 = 0;
  v1574 = v444;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1463,
    (__int64)&v1572,
    2,
    v445,
    v446,
    v447,
    v561,
    v668,
    v775,
    v836,
    v897,
    v958,
    v1019,
    v1080,
    v1141,
    v1202,
    v1263,
    v1324,
    v1385,
    v1446,
    v1448.m128_i64[0]);
  v1584 = 0;
  LOBYTE(v1500) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1458,
    (__int64)&v1579,
    3,
    v448,
    v449,
    v450,
    v562,
    v669,
    v776,
    v837,
    v898,
    v959,
    v1020,
    v1081,
    v1142,
    v1203,
    v1264,
    v1325,
    v1386,
    v1447,
    v1448.m128_i64[0]);
  v451 = v1592;
  v452 = (void **)&v1585;
  v1592 = v1500;
  v453 = v1593;
  LOBYTE(v1500) = v451;
  v1593 = v1501;
  v1501 = v453;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v452 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v452 != &v1579 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v454 = _mm_load_si128((const __m128i *)&v1448);
  v1580 = 0;
  v1579 = ida_mcp::tools::data_creation::`anonymous namespace'::handle_get_ea_from_file_offset;
  v1581 = v454;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1581.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1581.m128i_i64[0])(&v1579, &v1579, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1586);
  return v1596 - __readfsqword(0x28u);
}

