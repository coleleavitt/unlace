unsigned __int64 __fastcall ida_mcp::tools::exec_scripts::register_tools(
        ida_mcp::tools::exec_scripts *this,
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
  __int64 v12; // rax
  __int64 v13; // rax
  const __m128i *v14; // rsi
  __int64 v15; // rax
  __int64 *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 *v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __m128 v41; // xmm1
  __m128i v42; // xmm0
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  void **v46; // r14
  __int64 v47; // rdx
  __int64 *v48; // r14
  __m128i v49; // xmm2
  __int64 *v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 *v55; // r14
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 *v61; // rdi
  __int64 v62; // rax
  __int64 *v63; // r14
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 *v69; // r14
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 *v74; // r14
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
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
  __int64 *v91; // r14
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  __m128i v97; // xmm0
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  char v104; // si
  void **v105; // r14
  __int64 v106; // rax
  __int64 *v107; // r14
  __m128i v108; // xmm3
  __int64 *v109; // r14
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 *v117; // r14
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rax
  __int64 *v126; // r14
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rax
  __int64 *v144; // r14
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 *v152; // r14
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 *v172; // r14
  __int64 v173; // rdx
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
  char v184; // si
  void **v185; // r13
  __int64 v186; // rax
  __int64 *v187; // r13
  __m128i v188; // xmm4
  __int64 *v189; // r13
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 *v197; // r13
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rax
  __int64 *v206; // r13
  __int64 v207; // rdx
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
  __int64 v220; // rcx
  __int64 v221; // r8
  __int64 v222; // r9
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 *v226; // r14
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  __m128i v231; // xmm0
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  char v238; // si
  void **v239; // r14
  __int64 v240; // rax
  __m128i v241; // xmm5
  __int64 *v242; // r14
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  __int64 v247; // rcx
  __int64 v248; // r8
  __int64 v249; // r9
  __int64 *v250; // r14
  __int64 v251; // rdx
  __int64 v252; // rcx
  __int64 v253; // r8
  __int64 v254; // r9
  __int64 v255; // rcx
  __int64 v256; // r8
  __int64 v257; // r9
  __int64 v258; // rax
  __int64 *v259; // r14
  __int64 v260; // rdx
  __int64 v261; // rcx
  __int64 v262; // r8
  __int64 v263; // r9
  __int64 v264; // rcx
  __int64 v265; // r8
  __int64 v266; // r9
  __int64 v267; // rcx
  __int64 v268; // r8
  __int64 v269; // r9
  __int64 v270; // rcx
  __int64 v271; // r8
  __int64 v272; // r9
  __int64 v273; // rcx
  __int64 v274; // r8
  __int64 v275; // r9
  __int64 v276; // rcx
  __int64 v277; // r8
  __int64 v278; // r9
  __int64 *v279; // r14
  __int64 v280; // rdx
  __int64 v281; // rcx
  __int64 v282; // r8
  __int64 v283; // r9
  __m128i v284; // xmm0
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // r9
  __int64 v288; // rcx
  __int64 v289; // r8
  __int64 v290; // r9
  char v291; // si
  void **v292; // r14
  __int64 v293; // rax
  __m128i v294; // xmm6
  __int64 *v295; // r14
  __int64 v296; // rdx
  __int64 v297; // rcx
  __int64 v298; // r8
  __int64 v299; // r9
  __int64 v300; // rcx
  __int64 v301; // r8
  __int64 v302; // r9
  __int64 *v303; // r14
  __int64 v304; // rdx
  __int64 v305; // rcx
  __int64 v306; // r8
  __int64 v307; // r9
  __int64 v308; // rax
  __int64 v309; // rcx
  __int64 v310; // r8
  __int64 v311; // r9
  __int64 v312; // rax
  __int64 *v313; // r14
  __int64 v314; // rdx
  __int64 v315; // rcx
  __int64 v316; // r8
  __int64 v317; // r9
  __int64 v318; // rcx
  __int64 v319; // r8
  __int64 v320; // r9
  __int64 v321; // rcx
  __int64 v322; // r8
  __int64 v323; // r9
  __int64 v324; // rcx
  __int64 v325; // r8
  __int64 v326; // r9
  __int64 v327; // rcx
  __int64 v328; // r8
  __int64 v329; // r9
  __int64 v330; // rcx
  __int64 v331; // r8
  __int64 v332; // r9
  __int64 *v333; // r14
  __int64 v334; // rdx
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
  void **v347; // r14
  __int64 v348; // rax
  __m128i v349; // xmm7
  __int64 *v350; // r14
  __int64 v351; // rdx
  __int64 v352; // rcx
  __int64 v353; // r8
  __int64 v354; // r9
  __int64 v355; // rcx
  __int64 v356; // r8
  __int64 v357; // r9
  __int64 *v358; // r14
  __int64 v359; // rdx
  __int64 v360; // rcx
  __int64 v361; // r8
  __int64 v362; // r9
  __int64 *v363; // r14
  __int64 v364; // rdx
  __int64 v365; // rcx
  __int64 v366; // r8
  __int64 v367; // r9
  __int64 v368; // rcx
  __int64 v369; // r8
  __int64 v370; // r9
  __int64 v371; // rax
  __int64 *v372; // r14
  __int64 v373; // rdx
  __int64 v374; // rcx
  __int64 v375; // r8
  __int64 v376; // r9
  __int64 v377; // rcx
  __int64 v378; // r8
  __int64 v379; // r9
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
  __int64 *v392; // r14
  __int64 v393; // rdx
  __int64 v394; // rcx
  __int64 v395; // r8
  __int64 v396; // r9
  __int64 *v397; // r14
  __int64 v398; // rdx
  __int64 v399; // rcx
  __int64 v400; // r8
  __int64 v401; // r9
  __m128i v402; // xmm0
  __int64 v403; // rcx
  __int64 v404; // r8
  __int64 v405; // r9
  __int64 v406; // rcx
  __int64 v407; // r8
  __int64 v408; // r9
  char v409; // si
  void **v410; // r12
  __int64 v411; // rax
  __m128i v412; // xmm2
  int v414; // [rsp+0h] [rbp-5C8h]
  int v415; // [rsp+0h] [rbp-5C8h]
  int v416; // [rsp+0h] [rbp-5C8h]
  int v417; // [rsp+0h] [rbp-5C8h]
  int v418; // [rsp+0h] [rbp-5C8h]
  int v419; // [rsp+0h] [rbp-5C8h]
  int v420; // [rsp+0h] [rbp-5C8h]
  int v421; // [rsp+0h] [rbp-5C8h]
  int v422; // [rsp+0h] [rbp-5C8h]
  int v423; // [rsp+0h] [rbp-5C8h]
  int v424; // [rsp+0h] [rbp-5C8h]
  int v425; // [rsp+0h] [rbp-5C8h]
  int v426; // [rsp+0h] [rbp-5C8h]
  int v427; // [rsp+0h] [rbp-5C8h]
  int v428; // [rsp+0h] [rbp-5C8h]
  int v429; // [rsp+0h] [rbp-5C8h]
  int v430; // [rsp+0h] [rbp-5C8h]
  int v431; // [rsp+0h] [rbp-5C8h]
  int v432; // [rsp+0h] [rbp-5C8h]
  int v433; // [rsp+0h] [rbp-5C8h]
  int v434; // [rsp+0h] [rbp-5C8h]
  int v435; // [rsp+0h] [rbp-5C8h]
  int v436; // [rsp+0h] [rbp-5C8h]
  int v437; // [rsp+0h] [rbp-5C8h]
  int v438; // [rsp+0h] [rbp-5C8h]
  int v439; // [rsp+0h] [rbp-5C8h]
  int v440; // [rsp+0h] [rbp-5C8h]
  int v441; // [rsp+0h] [rbp-5C8h]
  int v442; // [rsp+0h] [rbp-5C8h]
  int v443; // [rsp+0h] [rbp-5C8h]
  int v444; // [rsp+0h] [rbp-5C8h]
  int v445; // [rsp+0h] [rbp-5C8h]
  int v446; // [rsp+0h] [rbp-5C8h]
  int v447; // [rsp+0h] [rbp-5C8h]
  int v448; // [rsp+0h] [rbp-5C8h]
  int v449; // [rsp+0h] [rbp-5C8h]
  int v450; // [rsp+0h] [rbp-5C8h]
  int v451; // [rsp+0h] [rbp-5C8h]
  int v452; // [rsp+0h] [rbp-5C8h]
  int v453; // [rsp+0h] [rbp-5C8h]
  int v454; // [rsp+0h] [rbp-5C8h]
  int v455; // [rsp+0h] [rbp-5C8h]
  int v456; // [rsp+0h] [rbp-5C8h]
  int v457; // [rsp+0h] [rbp-5C8h]
  int v458; // [rsp+0h] [rbp-5C8h]
  int v459; // [rsp+0h] [rbp-5C8h]
  int v460; // [rsp+0h] [rbp-5C8h]
  int v461; // [rsp+0h] [rbp-5C8h]
  int v462; // [rsp+0h] [rbp-5C8h]
  int v463; // [rsp+0h] [rbp-5C8h]
  int v464; // [rsp+0h] [rbp-5C8h]
  int v465; // [rsp+0h] [rbp-5C8h]
  int v466; // [rsp+0h] [rbp-5C8h]
  int v467; // [rsp+0h] [rbp-5C8h]
  int v468; // [rsp+0h] [rbp-5C8h]
  int v469; // [rsp+0h] [rbp-5C8h]
  int v470; // [rsp+0h] [rbp-5C8h]
  int v471; // [rsp+0h] [rbp-5C8h]
  int v472; // [rsp+0h] [rbp-5C8h]
  int v473; // [rsp+0h] [rbp-5C8h]
  int v474; // [rsp+0h] [rbp-5C8h]
  int v475; // [rsp+0h] [rbp-5C8h]
  int v476; // [rsp+0h] [rbp-5C8h]
  int v477; // [rsp+0h] [rbp-5C8h]
  int v478; // [rsp+0h] [rbp-5C8h]
  int v479; // [rsp+0h] [rbp-5C8h]
  int v480; // [rsp+0h] [rbp-5C8h]
  int v481; // [rsp+0h] [rbp-5C8h]
  int v482; // [rsp+0h] [rbp-5C8h]
  int v483; // [rsp+0h] [rbp-5C8h]
  int v484; // [rsp+0h] [rbp-5C8h]
  int v485; // [rsp+0h] [rbp-5C8h]
  int v486; // [rsp+0h] [rbp-5C8h]
  int v487; // [rsp+0h] [rbp-5C8h]
  int v488; // [rsp+0h] [rbp-5C8h]
  int v489; // [rsp+0h] [rbp-5C8h]
  int v490; // [rsp+0h] [rbp-5C8h]
  int v491; // [rsp+0h] [rbp-5C8h]
  int v492; // [rsp+0h] [rbp-5C8h]
  int v493; // [rsp+0h] [rbp-5C8h]
  int v494; // [rsp+0h] [rbp-5C8h]
  int v495; // [rsp+0h] [rbp-5C8h]
  int v496; // [rsp+0h] [rbp-5C8h]
  int v497; // [rsp+0h] [rbp-5C8h]
  int v498; // [rsp+0h] [rbp-5C8h]
  int v499; // [rsp+0h] [rbp-5C8h]
  int v500; // [rsp+0h] [rbp-5C8h]
  int v501; // [rsp+0h] [rbp-5C8h]
  int v502; // [rsp+0h] [rbp-5C8h]
  int v503; // [rsp+0h] [rbp-5C8h]
  int v504; // [rsp+0h] [rbp-5C8h]
  int v505; // [rsp+0h] [rbp-5C8h]
  int v506; // [rsp+0h] [rbp-5C8h]
  int v507; // [rsp+8h] [rbp-5C0h]
  int v508; // [rsp+8h] [rbp-5C0h]
  int v509; // [rsp+8h] [rbp-5C0h]
  int v510; // [rsp+8h] [rbp-5C0h]
  const __m128i *v511; // [rsp+8h] [rbp-5C0h]
  int v512; // [rsp+8h] [rbp-5C0h]
  __int64 v513; // [rsp+8h] [rbp-5C0h]
  int v514; // [rsp+8h] [rbp-5C0h]
  int v515; // [rsp+8h] [rbp-5C0h]
  int v516; // [rsp+8h] [rbp-5C0h]
  int v517; // [rsp+8h] [rbp-5C0h]
  int v518; // [rsp+8h] [rbp-5C0h]
  const __m128i *v519; // [rsp+8h] [rbp-5C0h]
  __int64 v520; // [rsp+8h] [rbp-5C0h]
  __int64 v521; // [rsp+8h] [rbp-5C0h]
  __int64 v522; // [rsp+8h] [rbp-5C0h]
  int v523; // [rsp+8h] [rbp-5C0h]
  __int64 v524; // [rsp+8h] [rbp-5C0h]
  __int64 v525; // [rsp+8h] [rbp-5C0h]
  int v526; // [rsp+8h] [rbp-5C0h]
  __int64 v527; // [rsp+8h] [rbp-5C0h]
  int v528; // [rsp+8h] [rbp-5C0h]
  __int64 v529; // [rsp+8h] [rbp-5C0h]
  int v530; // [rsp+8h] [rbp-5C0h]
  __int64 v531; // [rsp+8h] [rbp-5C0h]
  __int64 v532; // [rsp+8h] [rbp-5C0h]
  __int64 v533; // [rsp+8h] [rbp-5C0h]
  __int64 v534; // [rsp+8h] [rbp-5C0h]
  int v535; // [rsp+8h] [rbp-5C0h]
  __int64 v536; // [rsp+8h] [rbp-5C0h]
  int v537; // [rsp+8h] [rbp-5C0h]
  __int64 v538; // [rsp+8h] [rbp-5C0h]
  __int64 v539; // [rsp+8h] [rbp-5C0h]
  __int64 v540; // [rsp+8h] [rbp-5C0h]
  __int64 v541; // [rsp+8h] [rbp-5C0h]
  __int64 v542; // [rsp+8h] [rbp-5C0h]
  int v543; // [rsp+8h] [rbp-5C0h]
  __int64 v544; // [rsp+8h] [rbp-5C0h]
  __int64 v545; // [rsp+8h] [rbp-5C0h]
  int v546; // [rsp+8h] [rbp-5C0h]
  __int64 v547; // [rsp+8h] [rbp-5C0h]
  int v548; // [rsp+8h] [rbp-5C0h]
  _QWORD *v549; // [rsp+8h] [rbp-5C0h]
  int v550; // [rsp+8h] [rbp-5C0h]
  __int64 v551; // [rsp+8h] [rbp-5C0h]
  __int64 v552; // [rsp+8h] [rbp-5C0h]
  __int64 v553; // [rsp+8h] [rbp-5C0h]
  __int64 v554; // [rsp+8h] [rbp-5C0h]
  __int64 v555; // [rsp+8h] [rbp-5C0h]
  int v556; // [rsp+8h] [rbp-5C0h]
  __int64 v557; // [rsp+8h] [rbp-5C0h]
  __int64 v558; // [rsp+8h] [rbp-5C0h]
  int v559; // [rsp+8h] [rbp-5C0h]
  __int64 v560; // [rsp+8h] [rbp-5C0h]
  int v561; // [rsp+8h] [rbp-5C0h]
  _QWORD *v562; // [rsp+8h] [rbp-5C0h]
  int v563; // [rsp+8h] [rbp-5C0h]
  __int64 v564; // [rsp+8h] [rbp-5C0h]
  __int64 v565; // [rsp+8h] [rbp-5C0h]
  __int64 v566; // [rsp+8h] [rbp-5C0h]
  __int64 v567; // [rsp+8h] [rbp-5C0h]
  __int64 v568; // [rsp+8h] [rbp-5C0h]
  int v569; // [rsp+8h] [rbp-5C0h]
  __int64 v570; // [rsp+8h] [rbp-5C0h]
  __int64 v571; // [rsp+8h] [rbp-5C0h]
  int v572; // [rsp+8h] [rbp-5C0h]
  __int64 v573; // [rsp+8h] [rbp-5C0h]
  int v574; // [rsp+8h] [rbp-5C0h]
  _QWORD *v575; // [rsp+8h] [rbp-5C0h]
  int v576; // [rsp+8h] [rbp-5C0h]
  __int64 v577; // [rsp+8h] [rbp-5C0h]
  __int64 v578; // [rsp+8h] [rbp-5C0h]
  __int64 v579; // [rsp+8h] [rbp-5C0h]
  __int64 v580; // [rsp+8h] [rbp-5C0h]
  __int64 v581; // [rsp+8h] [rbp-5C0h]
  int v582; // [rsp+8h] [rbp-5C0h]
  __int64 v583; // [rsp+8h] [rbp-5C0h]
  __int64 v584; // [rsp+8h] [rbp-5C0h]
  int v585; // [rsp+8h] [rbp-5C0h]
  __int64 v586; // [rsp+8h] [rbp-5C0h]
  int v587; // [rsp+8h] [rbp-5C0h]
  int v588; // [rsp+8h] [rbp-5C0h]
  _QWORD *v589; // [rsp+8h] [rbp-5C0h]
  int v590; // [rsp+8h] [rbp-5C0h]
  __int64 v591; // [rsp+8h] [rbp-5C0h]
  __int64 v592; // [rsp+8h] [rbp-5C0h]
  __int64 v593; // [rsp+8h] [rbp-5C0h]
  __int64 v594; // [rsp+8h] [rbp-5C0h]
  __int64 v595; // [rsp+8h] [rbp-5C0h]
  int v596; // [rsp+8h] [rbp-5C0h]
  int v597; // [rsp+8h] [rbp-5C0h]
  __int64 v598; // [rsp+8h] [rbp-5C0h]
  __int64 v599; // [rsp+8h] [rbp-5C0h]
  __int64 v600; // [rsp+10h] [rbp-5B8h]
  __int64 v601; // [rsp+10h] [rbp-5B8h]
  __int64 v602; // [rsp+10h] [rbp-5B8h]
  __int64 v603; // [rsp+10h] [rbp-5B8h]
  __int64 v604; // [rsp+10h] [rbp-5B8h]
  int v605; // [rsp+10h] [rbp-5B8h]
  int v606; // [rsp+10h] [rbp-5B8h]
  __int64 v607; // [rsp+10h] [rbp-5B8h]
  __int64 v608; // [rsp+10h] [rbp-5B8h]
  __int64 v609; // [rsp+10h] [rbp-5B8h]
  __int64 v610; // [rsp+10h] [rbp-5B8h]
  __int64 v611; // [rsp+10h] [rbp-5B8h]
  int v612; // [rsp+10h] [rbp-5B8h]
  int v613; // [rsp+10h] [rbp-5B8h]
  int v614; // [rsp+10h] [rbp-5B8h]
  int v615; // [rsp+10h] [rbp-5B8h]
  __int64 v616; // [rsp+10h] [rbp-5B8h]
  int v617; // [rsp+10h] [rbp-5B8h]
  int v618; // [rsp+10h] [rbp-5B8h]
  __int64 v619; // [rsp+10h] [rbp-5B8h]
  int v620; // [rsp+10h] [rbp-5B8h]
  __int64 v621; // [rsp+10h] [rbp-5B8h]
  int v622; // [rsp+10h] [rbp-5B8h]
  __int64 v623; // [rsp+10h] [rbp-5B8h]
  int v624; // [rsp+10h] [rbp-5B8h]
  int v625; // [rsp+10h] [rbp-5B8h]
  int v626; // [rsp+10h] [rbp-5B8h]
  int v627; // [rsp+10h] [rbp-5B8h]
  __int64 v628; // [rsp+10h] [rbp-5B8h]
  int v629; // [rsp+10h] [rbp-5B8h]
  __int64 v630; // [rsp+10h] [rbp-5B8h]
  int v631; // [rsp+10h] [rbp-5B8h]
  int v632; // [rsp+10h] [rbp-5B8h]
  int v633; // [rsp+10h] [rbp-5B8h]
  int v634; // [rsp+10h] [rbp-5B8h]
  int v635; // [rsp+10h] [rbp-5B8h]
  __int64 v636; // [rsp+10h] [rbp-5B8h]
  int v637; // [rsp+10h] [rbp-5B8h]
  int v638; // [rsp+10h] [rbp-5B8h]
  __int64 v639; // [rsp+10h] [rbp-5B8h]
  int v640; // [rsp+10h] [rbp-5B8h]
  __int64 v641; // [rsp+10h] [rbp-5B8h]
  int v642; // [rsp+10h] [rbp-5B8h]
  __int64 v643; // [rsp+10h] [rbp-5B8h]
  int v644; // [rsp+10h] [rbp-5B8h]
  int v645; // [rsp+10h] [rbp-5B8h]
  int v646; // [rsp+10h] [rbp-5B8h]
  int v647; // [rsp+10h] [rbp-5B8h]
  int v648; // [rsp+10h] [rbp-5B8h]
  __int64 v649; // [rsp+10h] [rbp-5B8h]
  int v650; // [rsp+10h] [rbp-5B8h]
  int v651; // [rsp+10h] [rbp-5B8h]
  __int64 v652; // [rsp+10h] [rbp-5B8h]
  int v653; // [rsp+10h] [rbp-5B8h]
  __int64 v654; // [rsp+10h] [rbp-5B8h]
  int v655; // [rsp+10h] [rbp-5B8h]
  __int64 v656; // [rsp+10h] [rbp-5B8h]
  int v657; // [rsp+10h] [rbp-5B8h]
  int v658; // [rsp+10h] [rbp-5B8h]
  int v659; // [rsp+10h] [rbp-5B8h]
  int v660; // [rsp+10h] [rbp-5B8h]
  int v661; // [rsp+10h] [rbp-5B8h]
  __int64 v662; // [rsp+10h] [rbp-5B8h]
  int v663; // [rsp+10h] [rbp-5B8h]
  int v664; // [rsp+10h] [rbp-5B8h]
  __int64 v665; // [rsp+10h] [rbp-5B8h]
  int v666; // [rsp+10h] [rbp-5B8h]
  __int64 v667; // [rsp+10h] [rbp-5B8h]
  int v668; // [rsp+10h] [rbp-5B8h]
  __int64 v669; // [rsp+10h] [rbp-5B8h]
  int v670; // [rsp+10h] [rbp-5B8h]
  int v671; // [rsp+10h] [rbp-5B8h]
  int v672; // [rsp+10h] [rbp-5B8h]
  int v673; // [rsp+10h] [rbp-5B8h]
  int v674; // [rsp+10h] [rbp-5B8h]
  __int64 v675; // [rsp+10h] [rbp-5B8h]
  int v676; // [rsp+10h] [rbp-5B8h]
  int v677; // [rsp+10h] [rbp-5B8h]
  __int64 v678; // [rsp+10h] [rbp-5B8h]
  int v679; // [rsp+10h] [rbp-5B8h]
  __int64 v680; // [rsp+10h] [rbp-5B8h]
  __int64 v681; // [rsp+10h] [rbp-5B8h]
  int v682; // [rsp+10h] [rbp-5B8h]
  __int64 v683; // [rsp+10h] [rbp-5B8h]
  int v684; // [rsp+10h] [rbp-5B8h]
  int v685; // [rsp+10h] [rbp-5B8h]
  int v686; // [rsp+10h] [rbp-5B8h]
  int v687; // [rsp+10h] [rbp-5B8h]
  int v688; // [rsp+10h] [rbp-5B8h]
  __int64 v689; // [rsp+10h] [rbp-5B8h]
  __int64 v690; // [rsp+10h] [rbp-5B8h]
  int v691; // [rsp+10h] [rbp-5B8h]
  int v692; // [rsp+10h] [rbp-5B8h]
  int v693; // [rsp+18h] [rbp-5B0h]
  __m128i *v694; // [rsp+18h] [rbp-5B0h]
  int v695; // [rsp+18h] [rbp-5B0h]
  int v696; // [rsp+18h] [rbp-5B0h]
  int v697; // [rsp+18h] [rbp-5B0h]
  int v698; // [rsp+18h] [rbp-5B0h]
  int v699; // [rsp+18h] [rbp-5B0h]
  int v700; // [rsp+18h] [rbp-5B0h]
  int v701; // [rsp+18h] [rbp-5B0h]
  int v702; // [rsp+18h] [rbp-5B0h]
  int v703; // [rsp+18h] [rbp-5B0h]
  int v704; // [rsp+18h] [rbp-5B0h]
  _QWORD *v705; // [rsp+18h] [rbp-5B0h]
  int v706; // [rsp+18h] [rbp-5B0h]
  int v707; // [rsp+18h] [rbp-5B0h]
  int v708; // [rsp+18h] [rbp-5B0h]
  int v709; // [rsp+18h] [rbp-5B0h]
  int v710; // [rsp+18h] [rbp-5B0h]
  int v711; // [rsp+18h] [rbp-5B0h]
  int v712; // [rsp+18h] [rbp-5B0h]
  int v713; // [rsp+18h] [rbp-5B0h]
  int v714; // [rsp+18h] [rbp-5B0h]
  int v715; // [rsp+18h] [rbp-5B0h]
  int v716; // [rsp+18h] [rbp-5B0h]
  int v717; // [rsp+18h] [rbp-5B0h]
  _QWORD *v718; // [rsp+18h] [rbp-5B0h]
  __int64 v719; // [rsp+18h] [rbp-5B0h]
  int v720; // [rsp+18h] [rbp-5B0h]
  int v721; // [rsp+18h] [rbp-5B0h]
  int v722; // [rsp+18h] [rbp-5B0h]
  int v723; // [rsp+18h] [rbp-5B0h]
  int v724; // [rsp+18h] [rbp-5B0h]
  int v725; // [rsp+18h] [rbp-5B0h]
  int v726; // [rsp+18h] [rbp-5B0h]
  _QWORD *v727; // [rsp+18h] [rbp-5B0h]
  __int64 v728; // [rsp+18h] [rbp-5B0h]
  int v729; // [rsp+18h] [rbp-5B0h]
  int v730; // [rsp+18h] [rbp-5B0h]
  int v731; // [rsp+18h] [rbp-5B0h]
  int v732; // [rsp+18h] [rbp-5B0h]
  int v733; // [rsp+18h] [rbp-5B0h]
  int v734; // [rsp+18h] [rbp-5B0h]
  int v735; // [rsp+18h] [rbp-5B0h]
  _QWORD *v736; // [rsp+18h] [rbp-5B0h]
  __int64 v737; // [rsp+18h] [rbp-5B0h]
  int v738; // [rsp+18h] [rbp-5B0h]
  int v739; // [rsp+18h] [rbp-5B0h]
  int v740; // [rsp+18h] [rbp-5B0h]
  int v741; // [rsp+18h] [rbp-5B0h]
  int v742; // [rsp+18h] [rbp-5B0h]
  int v743; // [rsp+18h] [rbp-5B0h]
  int v744; // [rsp+18h] [rbp-5B0h]
  _QWORD *v745; // [rsp+18h] [rbp-5B0h]
  __int64 v746; // [rsp+18h] [rbp-5B0h]
  int v747; // [rsp+18h] [rbp-5B0h]
  int v748; // [rsp+18h] [rbp-5B0h]
  int v749; // [rsp+18h] [rbp-5B0h]
  int v750; // [rsp+20h] [rbp-5A8h]
  int v751; // [rsp+20h] [rbp-5A8h]
  int v752; // [rsp+20h] [rbp-5A8h]
  int v753; // [rsp+20h] [rbp-5A8h]
  int v754; // [rsp+20h] [rbp-5A8h]
  int v755; // [rsp+20h] [rbp-5A8h]
  int v756; // [rsp+20h] [rbp-5A8h]
  int v757; // [rsp+20h] [rbp-5A8h]
  int v758; // [rsp+20h] [rbp-5A8h]
  int v759; // [rsp+20h] [rbp-5A8h]
  int v760; // [rsp+20h] [rbp-5A8h]
  int v761; // [rsp+20h] [rbp-5A8h]
  int v762; // [rsp+20h] [rbp-5A8h]
  int v763; // [rsp+20h] [rbp-5A8h]
  int v764; // [rsp+20h] [rbp-5A8h]
  int v765; // [rsp+20h] [rbp-5A8h]
  int v766; // [rsp+20h] [rbp-5A8h]
  int v767; // [rsp+20h] [rbp-5A8h]
  int v768; // [rsp+20h] [rbp-5A8h]
  int v769; // [rsp+20h] [rbp-5A8h]
  int v770; // [rsp+20h] [rbp-5A8h]
  int v771; // [rsp+20h] [rbp-5A8h]
  int v772; // [rsp+20h] [rbp-5A8h]
  int v773; // [rsp+20h] [rbp-5A8h]
  int v774; // [rsp+20h] [rbp-5A8h]
  int v775; // [rsp+20h] [rbp-5A8h]
  int v776; // [rsp+20h] [rbp-5A8h]
  int v777; // [rsp+20h] [rbp-5A8h]
  int v778; // [rsp+20h] [rbp-5A8h]
  int v779; // [rsp+20h] [rbp-5A8h]
  int v780; // [rsp+20h] [rbp-5A8h]
  int v781; // [rsp+20h] [rbp-5A8h]
  int v782; // [rsp+20h] [rbp-5A8h]
  int v783; // [rsp+20h] [rbp-5A8h]
  int v784; // [rsp+20h] [rbp-5A8h]
  int v785; // [rsp+20h] [rbp-5A8h]
  int v786; // [rsp+20h] [rbp-5A8h]
  int v787; // [rsp+20h] [rbp-5A8h]
  int v788; // [rsp+20h] [rbp-5A8h]
  int v789; // [rsp+20h] [rbp-5A8h]
  int v790; // [rsp+20h] [rbp-5A8h]
  int v791; // [rsp+20h] [rbp-5A8h]
  int v792; // [rsp+20h] [rbp-5A8h]
  int v793; // [rsp+20h] [rbp-5A8h]
  int v794; // [rsp+20h] [rbp-5A8h]
  int v795; // [rsp+20h] [rbp-5A8h]
  int v796; // [rsp+20h] [rbp-5A8h]
  int v797; // [rsp+20h] [rbp-5A8h]
  int v798; // [rsp+20h] [rbp-5A8h]
  int v799; // [rsp+20h] [rbp-5A8h]
  int v800; // [rsp+20h] [rbp-5A8h]
  int v801; // [rsp+20h] [rbp-5A8h]
  int v802; // [rsp+20h] [rbp-5A8h]
  int v803; // [rsp+20h] [rbp-5A8h]
  int v804; // [rsp+20h] [rbp-5A8h]
  int v805; // [rsp+20h] [rbp-5A8h]
  int v806; // [rsp+20h] [rbp-5A8h]
  int v807; // [rsp+28h] [rbp-5A0h]
  const __m128i *v808; // [rsp+28h] [rbp-5A0h]
  int v809; // [rsp+28h] [rbp-5A0h]
  int v810; // [rsp+28h] [rbp-5A0h]
  int v811; // [rsp+28h] [rbp-5A0h]
  int v812; // [rsp+28h] [rbp-5A0h]
  int v813; // [rsp+28h] [rbp-5A0h]
  int v814; // [rsp+28h] [rbp-5A0h]
  int v815; // [rsp+28h] [rbp-5A0h]
  int v816; // [rsp+28h] [rbp-5A0h]
  int v817; // [rsp+28h] [rbp-5A0h]
  int v818; // [rsp+28h] [rbp-5A0h]
  int v819; // [rsp+28h] [rbp-5A0h]
  __int64 v820; // [rsp+28h] [rbp-5A0h]
  int v821; // [rsp+28h] [rbp-5A0h]
  int v822; // [rsp+28h] [rbp-5A0h]
  int v823; // [rsp+28h] [rbp-5A0h]
  int v824; // [rsp+28h] [rbp-5A0h]
  int v825; // [rsp+28h] [rbp-5A0h]
  int v826; // [rsp+28h] [rbp-5A0h]
  int v827; // [rsp+28h] [rbp-5A0h]
  _QWORD *v828; // [rsp+28h] [rbp-5A0h]
  int v829; // [rsp+28h] [rbp-5A0h]
  int v830; // [rsp+28h] [rbp-5A0h]
  int v831; // [rsp+28h] [rbp-5A0h]
  int v832; // [rsp+28h] [rbp-5A0h]
  int v833; // [rsp+28h] [rbp-5A0h]
  int v834; // [rsp+28h] [rbp-5A0h]
  int v835; // [rsp+28h] [rbp-5A0h]
  int v836; // [rsp+28h] [rbp-5A0h]
  _QWORD *v837; // [rsp+28h] [rbp-5A0h]
  int v838; // [rsp+28h] [rbp-5A0h]
  int v839; // [rsp+28h] [rbp-5A0h]
  int v840; // [rsp+28h] [rbp-5A0h]
  int v841; // [rsp+28h] [rbp-5A0h]
  int v842; // [rsp+28h] [rbp-5A0h]
  int v843; // [rsp+28h] [rbp-5A0h]
  int v844; // [rsp+28h] [rbp-5A0h]
  int v845; // [rsp+28h] [rbp-5A0h]
  _QWORD *v846; // [rsp+28h] [rbp-5A0h]
  int v847; // [rsp+28h] [rbp-5A0h]
  int v848; // [rsp+28h] [rbp-5A0h]
  int v849; // [rsp+28h] [rbp-5A0h]
  int v850; // [rsp+28h] [rbp-5A0h]
  int v851; // [rsp+28h] [rbp-5A0h]
  int v852; // [rsp+28h] [rbp-5A0h]
  int v853; // [rsp+28h] [rbp-5A0h]
  int v854; // [rsp+28h] [rbp-5A0h]
  _QWORD *v855; // [rsp+28h] [rbp-5A0h]
  int v856; // [rsp+28h] [rbp-5A0h]
  int v857; // [rsp+28h] [rbp-5A0h]
  int v858; // [rsp+28h] [rbp-5A0h]
  int v859; // [rsp+28h] [rbp-5A0h]
  int v860; // [rsp+28h] [rbp-5A0h]
  int v861; // [rsp+28h] [rbp-5A0h]
  int v862; // [rsp+28h] [rbp-5A0h]
  int v863; // [rsp+28h] [rbp-5A0h]
  __int64 v864; // [rsp+30h] [rbp-598h]
  __int64 v865; // [rsp+30h] [rbp-598h]
  __int64 v866; // [rsp+30h] [rbp-598h]
  __int64 v867; // [rsp+30h] [rbp-598h]
  __int64 v868; // [rsp+30h] [rbp-598h]
  __int64 v869; // [rsp+30h] [rbp-598h]
  __int64 v870; // [rsp+30h] [rbp-598h]
  __int64 v871; // [rsp+30h] [rbp-598h]
  __int64 v872; // [rsp+30h] [rbp-598h]
  __int64 v873; // [rsp+30h] [rbp-598h]
  __int64 v874; // [rsp+30h] [rbp-598h]
  __int64 v875; // [rsp+30h] [rbp-598h]
  __int64 v876; // [rsp+30h] [rbp-598h]
  __int64 v877; // [rsp+30h] [rbp-598h]
  __int64 v878; // [rsp+30h] [rbp-598h]
  __int64 v879; // [rsp+30h] [rbp-598h]
  __int64 v880; // [rsp+30h] [rbp-598h]
  __int64 v881; // [rsp+30h] [rbp-598h]
  __int64 v882; // [rsp+30h] [rbp-598h]
  __int64 v883; // [rsp+30h] [rbp-598h]
  __int64 v884; // [rsp+30h] [rbp-598h]
  __int64 v885; // [rsp+30h] [rbp-598h]
  __int64 v886; // [rsp+30h] [rbp-598h]
  __int64 v887; // [rsp+30h] [rbp-598h]
  __int64 v888; // [rsp+30h] [rbp-598h]
  __int64 v889; // [rsp+30h] [rbp-598h]
  __int64 v890; // [rsp+30h] [rbp-598h]
  __int64 v891; // [rsp+30h] [rbp-598h]
  __int64 v892; // [rsp+30h] [rbp-598h]
  __int64 v893; // [rsp+30h] [rbp-598h]
  __int64 v894; // [rsp+30h] [rbp-598h]
  __int64 v895; // [rsp+30h] [rbp-598h]
  __int64 v896; // [rsp+30h] [rbp-598h]
  __int64 v897; // [rsp+30h] [rbp-598h]
  __int64 v898; // [rsp+30h] [rbp-598h]
  __int64 v899; // [rsp+30h] [rbp-598h]
  __int64 v900; // [rsp+30h] [rbp-598h]
  __int64 v901; // [rsp+30h] [rbp-598h]
  __int64 v902; // [rsp+30h] [rbp-598h]
  __int64 v903; // [rsp+30h] [rbp-598h]
  __int64 v904; // [rsp+30h] [rbp-598h]
  __int64 v905; // [rsp+30h] [rbp-598h]
  __int64 v906; // [rsp+30h] [rbp-598h]
  __int64 v907; // [rsp+30h] [rbp-598h]
  __int64 v908; // [rsp+30h] [rbp-598h]
  __int64 v909; // [rsp+30h] [rbp-598h]
  __int64 v910; // [rsp+30h] [rbp-598h]
  __int64 v911; // [rsp+30h] [rbp-598h]
  __int64 v912; // [rsp+30h] [rbp-598h]
  __int64 v913; // [rsp+30h] [rbp-598h]
  __int64 v914; // [rsp+30h] [rbp-598h]
  __int64 v915; // [rsp+30h] [rbp-598h]
  __int64 v916; // [rsp+30h] [rbp-598h]
  __int64 v917; // [rsp+30h] [rbp-598h]
  __int64 v918; // [rsp+30h] [rbp-598h]
  __int64 v919; // [rsp+30h] [rbp-598h]
  __int64 v920; // [rsp+30h] [rbp-598h]
  int v921; // [rsp+38h] [rbp-590h]
  int v922; // [rsp+38h] [rbp-590h]
  int v923; // [rsp+38h] [rbp-590h]
  int v924; // [rsp+38h] [rbp-590h]
  int v925; // [rsp+38h] [rbp-590h]
  int v926; // [rsp+38h] [rbp-590h]
  int v927; // [rsp+38h] [rbp-590h]
  int v928; // [rsp+38h] [rbp-590h]
  int v929; // [rsp+38h] [rbp-590h]
  int v930; // [rsp+38h] [rbp-590h]
  int v931; // [rsp+38h] [rbp-590h]
  int v932; // [rsp+38h] [rbp-590h]
  int v933; // [rsp+38h] [rbp-590h]
  int v934; // [rsp+38h] [rbp-590h]
  int v935; // [rsp+38h] [rbp-590h]
  int v936; // [rsp+38h] [rbp-590h]
  int v937; // [rsp+38h] [rbp-590h]
  int v938; // [rsp+38h] [rbp-590h]
  int v939; // [rsp+38h] [rbp-590h]
  int v940; // [rsp+38h] [rbp-590h]
  int v941; // [rsp+38h] [rbp-590h]
  int v942; // [rsp+38h] [rbp-590h]
  int v943; // [rsp+38h] [rbp-590h]
  int v944; // [rsp+38h] [rbp-590h]
  int v945; // [rsp+38h] [rbp-590h]
  int v946; // [rsp+38h] [rbp-590h]
  int v947; // [rsp+38h] [rbp-590h]
  int v948; // [rsp+38h] [rbp-590h]
  int v949; // [rsp+38h] [rbp-590h]
  int v950; // [rsp+38h] [rbp-590h]
  int v951; // [rsp+38h] [rbp-590h]
  int v952; // [rsp+38h] [rbp-590h]
  int v953; // [rsp+38h] [rbp-590h]
  int v954; // [rsp+38h] [rbp-590h]
  int v955; // [rsp+38h] [rbp-590h]
  int v956; // [rsp+38h] [rbp-590h]
  int v957; // [rsp+38h] [rbp-590h]
  int v958; // [rsp+38h] [rbp-590h]
  int v959; // [rsp+38h] [rbp-590h]
  int v960; // [rsp+38h] [rbp-590h]
  int v961; // [rsp+38h] [rbp-590h]
  int v962; // [rsp+38h] [rbp-590h]
  int v963; // [rsp+38h] [rbp-590h]
  int v964; // [rsp+38h] [rbp-590h]
  int v965; // [rsp+38h] [rbp-590h]
  int v966; // [rsp+38h] [rbp-590h]
  int v967; // [rsp+38h] [rbp-590h]
  int v968; // [rsp+38h] [rbp-590h]
  int v969; // [rsp+38h] [rbp-590h]
  int v970; // [rsp+38h] [rbp-590h]
  int v971; // [rsp+38h] [rbp-590h]
  int v972; // [rsp+38h] [rbp-590h]
  int v973; // [rsp+38h] [rbp-590h]
  int v974; // [rsp+38h] [rbp-590h]
  int v975; // [rsp+38h] [rbp-590h]
  int v976; // [rsp+38h] [rbp-590h]
  int v977; // [rsp+38h] [rbp-590h]
  int v978; // [rsp+40h] [rbp-588h]
  int v979; // [rsp+40h] [rbp-588h]
  int v980; // [rsp+40h] [rbp-588h]
  int v981; // [rsp+40h] [rbp-588h]
  int v982; // [rsp+40h] [rbp-588h]
  int v983; // [rsp+40h] [rbp-588h]
  int v984; // [rsp+40h] [rbp-588h]
  int v985; // [rsp+40h] [rbp-588h]
  int v986; // [rsp+40h] [rbp-588h]
  int v987; // [rsp+40h] [rbp-588h]
  int v988; // [rsp+40h] [rbp-588h]
  int v989; // [rsp+40h] [rbp-588h]
  int v990; // [rsp+40h] [rbp-588h]
  int v991; // [rsp+40h] [rbp-588h]
  int v992; // [rsp+40h] [rbp-588h]
  int v993; // [rsp+40h] [rbp-588h]
  int v994; // [rsp+40h] [rbp-588h]
  int v995; // [rsp+40h] [rbp-588h]
  int v996; // [rsp+40h] [rbp-588h]
  int v997; // [rsp+40h] [rbp-588h]
  int v998; // [rsp+40h] [rbp-588h]
  int v999; // [rsp+40h] [rbp-588h]
  int v1000; // [rsp+40h] [rbp-588h]
  int v1001; // [rsp+40h] [rbp-588h]
  int v1002; // [rsp+40h] [rbp-588h]
  int v1003; // [rsp+40h] [rbp-588h]
  int v1004; // [rsp+40h] [rbp-588h]
  int v1005; // [rsp+40h] [rbp-588h]
  int v1006; // [rsp+40h] [rbp-588h]
  int v1007; // [rsp+40h] [rbp-588h]
  int v1008; // [rsp+40h] [rbp-588h]
  int v1009; // [rsp+40h] [rbp-588h]
  int v1010; // [rsp+40h] [rbp-588h]
  int v1011; // [rsp+40h] [rbp-588h]
  int v1012; // [rsp+40h] [rbp-588h]
  int v1013; // [rsp+40h] [rbp-588h]
  int v1014; // [rsp+40h] [rbp-588h]
  int v1015; // [rsp+40h] [rbp-588h]
  int v1016; // [rsp+40h] [rbp-588h]
  int v1017; // [rsp+40h] [rbp-588h]
  int v1018; // [rsp+40h] [rbp-588h]
  int v1019; // [rsp+40h] [rbp-588h]
  int v1020; // [rsp+40h] [rbp-588h]
  int v1021; // [rsp+40h] [rbp-588h]
  int v1022; // [rsp+40h] [rbp-588h]
  int v1023; // [rsp+40h] [rbp-588h]
  int v1024; // [rsp+40h] [rbp-588h]
  int v1025; // [rsp+40h] [rbp-588h]
  int v1026; // [rsp+40h] [rbp-588h]
  int v1027; // [rsp+40h] [rbp-588h]
  int v1028; // [rsp+40h] [rbp-588h]
  int v1029; // [rsp+40h] [rbp-588h]
  int v1030; // [rsp+40h] [rbp-588h]
  int v1031; // [rsp+40h] [rbp-588h]
  int v1032; // [rsp+40h] [rbp-588h]
  int v1033; // [rsp+40h] [rbp-588h]
  int v1034; // [rsp+40h] [rbp-588h]
  int v1035; // [rsp+48h] [rbp-580h]
  const __m128i *v1036; // [rsp+48h] [rbp-580h]
  int v1037; // [rsp+48h] [rbp-580h]
  int v1038; // [rsp+48h] [rbp-580h]
  int v1039; // [rsp+48h] [rbp-580h]
  int v1040; // [rsp+48h] [rbp-580h]
  int v1041; // [rsp+48h] [rbp-580h]
  int v1042; // [rsp+48h] [rbp-580h]
  _QWORD *v1043; // [rsp+48h] [rbp-580h]
  int v1044; // [rsp+48h] [rbp-580h]
  int v1045; // [rsp+48h] [rbp-580h]
  __int64 v1046; // [rsp+48h] [rbp-580h]
  int v1047; // [rsp+48h] [rbp-580h]
  int v1048; // [rsp+48h] [rbp-580h]
  int v1049; // [rsp+48h] [rbp-580h]
  int v1050; // [rsp+48h] [rbp-580h]
  int v1051; // [rsp+48h] [rbp-580h]
  int v1052; // [rsp+48h] [rbp-580h]
  int v1053; // [rsp+48h] [rbp-580h]
  int v1054; // [rsp+48h] [rbp-580h]
  int v1055; // [rsp+48h] [rbp-580h]
  int v1056; // [rsp+48h] [rbp-580h]
  int v1057; // [rsp+48h] [rbp-580h]
  int v1058; // [rsp+48h] [rbp-580h]
  int v1059; // [rsp+48h] [rbp-580h]
  int v1060; // [rsp+48h] [rbp-580h]
  int v1061; // [rsp+48h] [rbp-580h]
  int v1062; // [rsp+48h] [rbp-580h]
  _QWORD *v1063; // [rsp+48h] [rbp-580h]
  int v1064; // [rsp+48h] [rbp-580h]
  int v1065; // [rsp+48h] [rbp-580h]
  int v1066; // [rsp+48h] [rbp-580h]
  int v1067; // [rsp+48h] [rbp-580h]
  int v1068; // [rsp+48h] [rbp-580h]
  int v1069; // [rsp+48h] [rbp-580h]
  int v1070; // [rsp+48h] [rbp-580h]
  int v1071; // [rsp+48h] [rbp-580h]
  _QWORD *v1072; // [rsp+48h] [rbp-580h]
  int v1073; // [rsp+48h] [rbp-580h]
  int v1074; // [rsp+48h] [rbp-580h]
  int v1075; // [rsp+48h] [rbp-580h]
  int v1076; // [rsp+48h] [rbp-580h]
  int v1077; // [rsp+48h] [rbp-580h]
  int v1078; // [rsp+48h] [rbp-580h]
  int v1079; // [rsp+48h] [rbp-580h]
  int v1080; // [rsp+48h] [rbp-580h]
  int v1081; // [rsp+48h] [rbp-580h]
  int v1082; // [rsp+48h] [rbp-580h]
  int v1083; // [rsp+48h] [rbp-580h]
  int v1084; // [rsp+48h] [rbp-580h]
  int v1085; // [rsp+48h] [rbp-580h]
  int v1086; // [rsp+48h] [rbp-580h]
  int v1087; // [rsp+48h] [rbp-580h]
  int v1088; // [rsp+48h] [rbp-580h]
  int v1089; // [rsp+48h] [rbp-580h]
  int v1090; // [rsp+48h] [rbp-580h]
  int v1091; // [rsp+48h] [rbp-580h]
  const __m128i *v1092; // [rsp+50h] [rbp-578h]
  int v1093; // [rsp+50h] [rbp-578h]
  __int64 v1094; // [rsp+50h] [rbp-578h]
  int v1095; // [rsp+50h] [rbp-578h]
  int v1096; // [rsp+50h] [rbp-578h]
  int v1097; // [rsp+50h] [rbp-578h]
  int v1098; // [rsp+50h] [rbp-578h]
  int v1099; // [rsp+50h] [rbp-578h]
  int v1100; // [rsp+50h] [rbp-578h]
  int v1101; // [rsp+50h] [rbp-578h]
  int v1102; // [rsp+50h] [rbp-578h]
  int v1103; // [rsp+50h] [rbp-578h]
  int v1104; // [rsp+50h] [rbp-578h]
  int v1105; // [rsp+50h] [rbp-578h]
  int v1106; // [rsp+50h] [rbp-578h]
  int v1107; // [rsp+50h] [rbp-578h]
  __int64 v1108; // [rsp+50h] [rbp-578h]
  int v1109; // [rsp+50h] [rbp-578h]
  int v1110; // [rsp+50h] [rbp-578h]
  int v1111; // [rsp+50h] [rbp-578h]
  int v1112; // [rsp+50h] [rbp-578h]
  int v1113; // [rsp+50h] [rbp-578h]
  int v1114; // [rsp+50h] [rbp-578h]
  __int64 v1115; // [rsp+50h] [rbp-578h]
  int v1116; // [rsp+50h] [rbp-578h]
  int v1117; // [rsp+50h] [rbp-578h]
  int v1118; // [rsp+50h] [rbp-578h]
  int v1119; // [rsp+50h] [rbp-578h]
  int v1120; // [rsp+50h] [rbp-578h]
  int v1121; // [rsp+50h] [rbp-578h]
  int v1122; // [rsp+50h] [rbp-578h]
  int v1123; // [rsp+50h] [rbp-578h]
  __int64 v1124; // [rsp+50h] [rbp-578h]
  int v1125; // [rsp+50h] [rbp-578h]
  int v1126; // [rsp+50h] [rbp-578h]
  int v1127; // [rsp+50h] [rbp-578h]
  int v1128; // [rsp+50h] [rbp-578h]
  int v1129; // [rsp+50h] [rbp-578h]
  int v1130; // [rsp+50h] [rbp-578h]
  int v1131; // [rsp+50h] [rbp-578h]
  int v1132; // [rsp+50h] [rbp-578h]
  __int64 v1133; // [rsp+50h] [rbp-578h]
  int v1134; // [rsp+50h] [rbp-578h]
  int v1135; // [rsp+50h] [rbp-578h]
  int v1136; // [rsp+50h] [rbp-578h]
  int v1137; // [rsp+50h] [rbp-578h]
  int v1138; // [rsp+50h] [rbp-578h]
  int v1139; // [rsp+50h] [rbp-578h]
  int v1140; // [rsp+50h] [rbp-578h]
  int v1141; // [rsp+50h] [rbp-578h]
  __int64 v1142; // [rsp+50h] [rbp-578h]
  int v1143; // [rsp+50h] [rbp-578h]
  int v1144; // [rsp+50h] [rbp-578h]
  int v1145; // [rsp+50h] [rbp-578h]
  int v1146; // [rsp+50h] [rbp-578h]
  int v1147; // [rsp+50h] [rbp-578h]
  int v1148; // [rsp+50h] [rbp-578h]
  char v1149; // [rsp+58h] [rbp-570h]
  char v1150; // [rsp+58h] [rbp-570h]
  char v1151; // [rsp+58h] [rbp-570h]
  char v1152; // [rsp+58h] [rbp-570h]
  char v1153; // [rsp+58h] [rbp-570h]
  char v1154; // [rsp+58h] [rbp-570h]
  char v1155; // [rsp+58h] [rbp-570h]
  char v1156; // [rsp+58h] [rbp-570h]
  char v1157; // [rsp+58h] [rbp-570h]
  char v1158; // [rsp+58h] [rbp-570h]
  char v1159; // [rsp+58h] [rbp-570h]
  char v1160; // [rsp+58h] [rbp-570h]
  char v1161; // [rsp+58h] [rbp-570h]
  char v1162; // [rsp+58h] [rbp-570h]
  char v1163; // [rsp+58h] [rbp-570h]
  char v1164; // [rsp+58h] [rbp-570h]
  char v1165; // [rsp+58h] [rbp-570h]
  char v1166; // [rsp+58h] [rbp-570h]
  char v1167; // [rsp+58h] [rbp-570h]
  char v1168; // [rsp+58h] [rbp-570h]
  char v1169; // [rsp+58h] [rbp-570h]
  char v1170; // [rsp+58h] [rbp-570h]
  char v1171; // [rsp+58h] [rbp-570h]
  char v1172; // [rsp+58h] [rbp-570h]
  char v1173; // [rsp+58h] [rbp-570h]
  char v1174; // [rsp+58h] [rbp-570h]
  char v1175; // [rsp+58h] [rbp-570h]
  char v1176; // [rsp+58h] [rbp-570h]
  char v1177; // [rsp+58h] [rbp-570h]
  char v1178; // [rsp+58h] [rbp-570h]
  char v1179; // [rsp+58h] [rbp-570h]
  char v1180; // [rsp+58h] [rbp-570h]
  char v1181; // [rsp+58h] [rbp-570h]
  char v1182; // [rsp+58h] [rbp-570h]
  char v1183; // [rsp+58h] [rbp-570h]
  char v1184; // [rsp+58h] [rbp-570h]
  char v1185; // [rsp+58h] [rbp-570h]
  char v1186; // [rsp+58h] [rbp-570h]
  char v1187; // [rsp+58h] [rbp-570h]
  char v1188; // [rsp+58h] [rbp-570h]
  char v1189; // [rsp+58h] [rbp-570h]
  char v1190; // [rsp+58h] [rbp-570h]
  char v1191; // [rsp+58h] [rbp-570h]
  char v1192; // [rsp+58h] [rbp-570h]
  char v1193; // [rsp+58h] [rbp-570h]
  char v1194; // [rsp+58h] [rbp-570h]
  char v1195; // [rsp+58h] [rbp-570h]
  char v1196; // [rsp+58h] [rbp-570h]
  char v1197; // [rsp+58h] [rbp-570h]
  char v1198; // [rsp+58h] [rbp-570h]
  char v1199; // [rsp+58h] [rbp-570h]
  char v1200; // [rsp+58h] [rbp-570h]
  char v1201; // [rsp+58h] [rbp-570h]
  char v1202; // [rsp+58h] [rbp-570h]
  char v1203; // [rsp+58h] [rbp-570h]
  char v1204; // [rsp+58h] [rbp-570h]
  char v1205; // [rsp+58h] [rbp-570h]
  __int64 v1206; // [rsp+60h] [rbp-568h]
  __int64 v1207; // [rsp+60h] [rbp-568h]
  __int64 v1208; // [rsp+60h] [rbp-568h]
  __int64 v1209; // [rsp+60h] [rbp-568h]
  __int64 v1210; // [rsp+60h] [rbp-568h]
  __int64 v1211; // [rsp+60h] [rbp-568h]
  __int64 v1212; // [rsp+60h] [rbp-568h]
  __int64 v1213; // [rsp+60h] [rbp-568h]
  __int64 v1214; // [rsp+60h] [rbp-568h]
  __int64 v1215; // [rsp+60h] [rbp-568h]
  __int64 v1216; // [rsp+60h] [rbp-568h]
  __int64 v1217; // [rsp+60h] [rbp-568h]
  __int64 v1218; // [rsp+60h] [rbp-568h]
  __int64 v1219; // [rsp+60h] [rbp-568h]
  __int64 v1220; // [rsp+60h] [rbp-568h]
  __int64 v1221; // [rsp+60h] [rbp-568h]
  __int64 v1222; // [rsp+60h] [rbp-568h]
  __int64 v1223; // [rsp+60h] [rbp-568h]
  __int64 v1224; // [rsp+60h] [rbp-568h]
  __int64 v1225; // [rsp+60h] [rbp-568h]
  __int64 v1226; // [rsp+60h] [rbp-568h]
  __int64 v1227; // [rsp+60h] [rbp-568h]
  __int64 v1228; // [rsp+60h] [rbp-568h]
  __int64 v1229; // [rsp+60h] [rbp-568h]
  __int64 v1230; // [rsp+60h] [rbp-568h]
  __int64 v1231; // [rsp+60h] [rbp-568h]
  __int64 v1232; // [rsp+60h] [rbp-568h]
  __int64 v1233; // [rsp+60h] [rbp-568h]
  __int64 v1234; // [rsp+60h] [rbp-568h]
  __int64 v1235; // [rsp+60h] [rbp-568h]
  __int64 v1236; // [rsp+60h] [rbp-568h]
  __int64 v1237; // [rsp+60h] [rbp-568h]
  __int64 v1238; // [rsp+60h] [rbp-568h]
  __int64 v1239; // [rsp+60h] [rbp-568h]
  __int64 v1240; // [rsp+60h] [rbp-568h]
  __int64 v1241; // [rsp+60h] [rbp-568h]
  __int64 v1242; // [rsp+60h] [rbp-568h]
  __int64 v1243; // [rsp+60h] [rbp-568h]
  __int64 v1244; // [rsp+60h] [rbp-568h]
  __int64 v1245; // [rsp+60h] [rbp-568h]
  __int64 v1246; // [rsp+60h] [rbp-568h]
  __int64 v1247; // [rsp+60h] [rbp-568h]
  __int64 v1248; // [rsp+60h] [rbp-568h]
  __int64 v1249; // [rsp+60h] [rbp-568h]
  __int64 v1250; // [rsp+60h] [rbp-568h]
  __int64 v1251; // [rsp+60h] [rbp-568h]
  __int64 v1252; // [rsp+60h] [rbp-568h]
  __int64 v1253; // [rsp+60h] [rbp-568h]
  __int64 v1254; // [rsp+60h] [rbp-568h]
  __int64 v1255; // [rsp+60h] [rbp-568h]
  __int64 v1256; // [rsp+60h] [rbp-568h]
  __int64 v1257; // [rsp+60h] [rbp-568h]
  __int64 v1258; // [rsp+60h] [rbp-568h]
  __int64 v1259; // [rsp+60h] [rbp-568h]
  __int64 v1260; // [rsp+60h] [rbp-568h]
  __int64 v1261; // [rsp+60h] [rbp-568h]
  __int64 v1262; // [rsp+60h] [rbp-568h]
  int v1263; // [rsp+68h] [rbp-560h]
  int v1264; // [rsp+68h] [rbp-560h]
  int v1265; // [rsp+68h] [rbp-560h]
  int v1266; // [rsp+68h] [rbp-560h]
  __int64 v1267; // [rsp+68h] [rbp-560h]
  int v1268; // [rsp+68h] [rbp-560h]
  int v1269; // [rsp+68h] [rbp-560h]
  int v1270; // [rsp+68h] [rbp-560h]
  int v1271; // [rsp+68h] [rbp-560h]
  int v1272; // [rsp+68h] [rbp-560h]
  int v1273; // [rsp+68h] [rbp-560h]
  int v1274; // [rsp+68h] [rbp-560h]
  int v1275; // [rsp+68h] [rbp-560h]
  int v1276; // [rsp+68h] [rbp-560h]
  int v1277; // [rsp+68h] [rbp-560h]
  int v1278; // [rsp+68h] [rbp-560h]
  int v1279; // [rsp+68h] [rbp-560h]
  int v1280; // [rsp+68h] [rbp-560h]
  __int64 v1281; // [rsp+68h] [rbp-560h]
  int v1282; // [rsp+68h] [rbp-560h]
  int v1283; // [rsp+68h] [rbp-560h]
  int v1284; // [rsp+68h] [rbp-560h]
  _QWORD *v1285; // [rsp+68h] [rbp-560h]
  int v1286; // [rsp+68h] [rbp-560h]
  int v1287; // [rsp+68h] [rbp-560h]
  __int64 v1288; // [rsp+68h] [rbp-560h]
  int v1289; // [rsp+68h] [rbp-560h]
  int v1290; // [rsp+68h] [rbp-560h]
  int v1291; // [rsp+68h] [rbp-560h]
  int v1292; // [rsp+68h] [rbp-560h]
  int v1293; // [rsp+68h] [rbp-560h]
  _QWORD *v1294; // [rsp+68h] [rbp-560h]
  int v1295; // [rsp+68h] [rbp-560h]
  int v1296; // [rsp+68h] [rbp-560h]
  __int64 v1297; // [rsp+68h] [rbp-560h]
  int v1298; // [rsp+68h] [rbp-560h]
  int v1299; // [rsp+68h] [rbp-560h]
  int v1300; // [rsp+68h] [rbp-560h]
  int v1301; // [rsp+68h] [rbp-560h]
  int v1302; // [rsp+68h] [rbp-560h]
  int v1303; // [rsp+68h] [rbp-560h]
  int v1304; // [rsp+68h] [rbp-560h]
  int v1305; // [rsp+68h] [rbp-560h]
  __int64 v1306; // [rsp+68h] [rbp-560h]
  int v1307; // [rsp+68h] [rbp-560h]
  int v1308; // [rsp+68h] [rbp-560h]
  int v1309; // [rsp+68h] [rbp-560h]
  int v1310; // [rsp+68h] [rbp-560h]
  int v1311; // [rsp+68h] [rbp-560h]
  int v1312; // [rsp+68h] [rbp-560h]
  int v1313; // [rsp+68h] [rbp-560h]
  int v1314; // [rsp+68h] [rbp-560h]
  __int64 v1315; // [rsp+68h] [rbp-560h]
  int v1316; // [rsp+68h] [rbp-560h]
  int v1317; // [rsp+68h] [rbp-560h]
  int v1318; // [rsp+68h] [rbp-560h]
  int v1319; // [rsp+68h] [rbp-560h]
  __m128i v1320; // [rsp+70h] [rbp-558h] BYREF
  ida_mcp::tools::exec_scripts *v1321; // [rsp+80h] [rbp-548h]
  char *v1322; // [rsp+88h] [rbp-540h]
  __int64 *v1323; // [rsp+90h] [rbp-538h]
  char *v1324; // [rsp+98h] [rbp-530h]
  __int64 *v1325; // [rsp+A0h] [rbp-528h]
  char *v1326; // [rsp+A8h] [rbp-520h]
  char *v1327; // [rsp+B0h] [rbp-518h]
  __int8 *v1328; // [rsp+B8h] [rbp-510h]
  __m128i *v1329; // [rsp+C0h] [rbp-508h]
  __int64 *v1330; // [rsp+C8h] [rbp-500h]
  __int64 *v1331; // [rsp+D0h] [rbp-4F8h]
  __int64 *v1332; // [rsp+D8h] [rbp-4F0h]
  __int64 *v1333; // [rsp+E0h] [rbp-4E8h]
  __int64 *v1334; // [rsp+E8h] [rbp-4E0h]
  _QWORD *v1335; // [rsp+F0h] [rbp-4D8h]
  _BYTE *v1336; // [rsp+F8h] [rbp-4D0h]
  _BYTE **v1337; // [rsp+100h] [rbp-4C8h]
  _BYTE *v1338; // [rsp+108h] [rbp-4C0h]
  __m128i *v1339; // [rsp+110h] [rbp-4B8h]
  __m128i *v1340; // [rsp+118h] [rbp-4B0h]
  __m128i *v1341; // [rsp+120h] [rbp-4A8h]
  __m128i *v1342; // [rsp+128h] [rbp-4A0h]
  __int128 *v1343; // [rsp+130h] [rbp-498h]
  __int128 *v1344; // [rsp+138h] [rbp-490h]
  __int128 *v1345; // [rsp+140h] [rbp-488h]
  __int128 *v1346; // [rsp+148h] [rbp-480h]
  const __m128i *v1347; // [rsp+150h] [rbp-478h]
  __int64 *v1348; // [rsp+158h] [rbp-470h]
  char *v1349; // [rsp+160h] [rbp-468h]
  char *v1350; // [rsp+168h] [rbp-460h]
  char *v1351; // [rsp+170h] [rbp-458h]
  char *v1352; // [rsp+178h] [rbp-450h]
  char *v1353; // [rsp+180h] [rbp-448h]
  __int64 *v1354; // [rsp+188h] [rbp-440h]
  __int64 *v1355; // [rsp+190h] [rbp-438h]
  __int64 *v1356; // [rsp+198h] [rbp-430h]
  __int64 *v1357; // [rsp+1A0h] [rbp-428h]
  __m128i *v1358; // [rsp+1A8h] [rbp-420h]
  _QWORD *v1359; // [rsp+1B0h] [rbp-418h]
  __int64 *v1360; // [rsp+1B8h] [rbp-410h]
  __m128i v1361; // [rsp+1C0h] [rbp-408h] BYREF
  __int64 v1362; // [rsp+1D0h] [rbp-3F8h] BYREF
  __int64 v1363; // [rsp+1D8h] [rbp-3F0h] BYREF
  __int64 v1364; // [rsp+1E0h] [rbp-3E8h] BYREF
  __int128 v1365; // [rsp+1E8h] [rbp-3E0h] BYREF
  __m128i v1366; // [rsp+200h] [rbp-3C8h] BYREF
  __int64 v1367; // [rsp+210h] [rbp-3B8h]
  char v1368; // [rsp+218h] [rbp-3B0h]
  __int128 v1369; // [rsp+220h] [rbp-3A8h] BYREF
  __int64 v1370; // [rsp+230h] [rbp-398h] BYREF
  char v1371; // [rsp+238h] [rbp-390h] BYREF
  __int64 v1372; // [rsp+240h] [rbp-388h]
  __int64 v1373; // [rsp+248h] [rbp-380h] BYREF
  __int128 v1374; // [rsp+250h] [rbp-378h] BYREF
  char v1375; // [rsp+260h] [rbp-368h] BYREF
  __int128 v1376; // [rsp+268h] [rbp-360h] BYREF
  char v1377; // [rsp+278h] [rbp-350h]
  __int128 v1378; // [rsp+280h] [rbp-348h] BYREF
  __int64 v1379; // [rsp+290h] [rbp-338h] BYREF
  char v1380; // [rsp+298h] [rbp-330h] BYREF
  __int64 v1381; // [rsp+2A0h] [rbp-328h]
  __int64 v1382; // [rsp+2A8h] [rbp-320h] BYREF
  char v1383; // [rsp+2B0h] [rbp-318h] BYREF
  __int64 v1384; // [rsp+2B8h] [rbp-310h]
  char v1385; // [rsp+2C0h] [rbp-308h] BYREF
  __int128 v1386; // [rsp+2C8h] [rbp-300h] BYREF
  __int64 v1387; // [rsp+2D8h] [rbp-2F0h] BYREF
  char v1388; // [rsp+2E0h] [rbp-2E8h] BYREF
  __int64 v1389; // [rsp+2E8h] [rbp-2E0h]
  __m128i v1390; // [rsp+2F0h] [rbp-2D8h] BYREF
  __int64 v1391; // [rsp+300h] [rbp-2C8h]
  __int64 v1392; // [rsp+308h] [rbp-2C0h] BYREF
  char v1393; // [rsp+310h] [rbp-2B8h] BYREF
  __int64 v1394; // [rsp+318h] [rbp-2B0h]
  char v1395; // [rsp+320h] [rbp-2A8h] BYREF
  __int128 v1396; // [rsp+328h] [rbp-2A0h] BYREF
  char v1397; // [rsp+338h] [rbp-290h]
  __int128 v1398; // [rsp+340h] [rbp-288h] BYREF
  char v1399; // [rsp+350h] [rbp-278h] BYREF
  char v1400; // [rsp+358h] [rbp-270h] BYREF
  __int64 v1401; // [rsp+360h] [rbp-268h]
  __int64 v1402; // [rsp+368h] [rbp-260h] BYREF
  __int128 v1403; // [rsp+370h] [rbp-258h] BYREF
  char v1404; // [rsp+380h] [rbp-248h] BYREF
  __int128 v1405; // [rsp+388h] [rbp-240h] BYREF
  __int64 v1406; // [rsp+398h] [rbp-230h] BYREF
  __int128 v1407; // [rsp+3A0h] [rbp-228h] BYREF
  __m128i v1408; // [rsp+3B0h] [rbp-218h] BYREF
  __int64 v1409; // [rsp+3C0h] [rbp-208h]
  __int64 v1410; // [rsp+3C8h] [rbp-200h] BYREF
  char v1411; // [rsp+3D0h] [rbp-1F8h] BYREF
  __int64 v1412; // [rsp+3D8h] [rbp-1F0h]
  char v1413; // [rsp+3E0h] [rbp-1E8h] BYREF
  __int128 v1414; // [rsp+3E8h] [rbp-1E0h] BYREF
  __int64 v1415; // [rsp+3F8h] [rbp-1D0h] BYREF
  char v1416; // [rsp+400h] [rbp-1C8h] BYREF
  __int64 v1417; // [rsp+408h] [rbp-1C0h]
  char v1418; // [rsp+410h] [rbp-1B8h] BYREF
  __int128 v1419; // [rsp+418h] [rbp-1B0h] BYREF
  __m128i v1420; // [rsp+428h] [rbp-1A0h] BYREF
  __int64 v1421; // [rsp+438h] [rbp-190h]
  __int64 v1422; // [rsp+440h] [rbp-188h] BYREF
  __int128 v1423; // [rsp+448h] [rbp-180h]
  __m128i v1424; // [rsp+458h] [rbp-170h] BYREF
  __int64 v1425; // [rsp+468h] [rbp-160h]
  _QWORD v1426[2]; // [rsp+470h] [rbp-158h] BYREF
  __int64 v1427; // [rsp+480h] [rbp-148h]
  char v1428; // [rsp+488h] [rbp-140h] BYREF
  void *v1429; // [rsp+490h] [rbp-138h] BYREF
  __int64 v1430; // [rsp+498h] [rbp-130h]
  __m128i v1431; // [rsp+4A0h] [rbp-128h] BYREF
  __int64 v1432; // [rsp+4B8h] [rbp-110h]
  _QWORD v1433[2]; // [rsp+4C0h] [rbp-108h] BYREF
  __int64 v1434; // [rsp+4D0h] [rbp-F8h]
  char v1435; // [rsp+4D8h] [rbp-F0h] BYREF
  _BYTE *v1436; // [rsp+4E0h] [rbp-E8h] BYREF
  __int64 v1437; // [rsp+4E8h] [rbp-E0h]
  _BYTE v1438[16]; // [rsp+4F0h] [rbp-D8h] BYREF
  _BYTE *v1439; // [rsp+500h] [rbp-C8h] BYREF
  __int64 v1440; // [rsp+508h] [rbp-C0h]
  _BYTE v1441[16]; // [rsp+510h] [rbp-B8h] BYREF
  char v1442; // [rsp+520h] [rbp-A8h]
  __int64 v1443; // [rsp+528h] [rbp-A0h]
  char v1444; // [rsp+540h] [rbp-88h]
  char v1445; // [rsp+578h] [rbp-50h]
  unsigned __int64 v1446; // [rsp+588h] [rbp-40h]

  v1321 = this;
  v1446 = __readfsqword(0x28u);
  v1336 = v1438;
  v1436 = v1438;
  v1437 = 0;
  v1438[0] = 0;
  v1338 = v1441;
  v1439 = v1441;
  v1441[0] = 0;
  v1440 = 0;
  v1442 = 0;
  v1443 = 0;
  v1444 = 0;
  v1445 = 0;
  std::string::_M_replace();
  v1337 = &v1439;
  std::string::_M_replace();
  v1340 = &v1366;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1366);
  v1367 = 0;
  v1368 = 0;
  *(_QWORD *)&v1369 = 0;
  v1341 = (__m128i *)&v1369;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1368 = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "object", v3, v4, v5, v6, v414, v507, v600);
  v1369 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1429,
    &v1366);
  v1431.m128i_i64[0] = 0;
  v1413 = 0;
  *(_QWORD *)&v1414 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1413 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "properties", v8, v9, v10, v11, v415, v508, v601);
  v1385 = 0;
  *(_QWORD *)&v1386 = 0;
  v1414 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1385 = 3;
  v12 = operator new(0x20u);
  *(_QWORD *)v12 = v12 + 16;
  strcpy((char *)(v12 + 16), "expression");
  *(_QWORD *)(v12 + 8) = 10;
  v1342 = (__m128i *)&v1370;
  v1386 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1370);
  v1372 = 0;
  LOBYTE(v1373) = 0;
  *(_QWORD *)&v1374 = 0;
  v1346 = &v1374;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1373) = 3;
  v13 = operator new(0x20u);
  *(_QWORD *)v13 = v13 + 16;
  v14 = v1342;
  strcpy((char *)(v13 + 16), "string");
  *(_QWORD *)(v13 + 8) = 6;
  v1339 = (__m128i *)&v1379;
  v1374 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1379,
    v14);
  v1381 = 0;
  v1375 = 0;
  *(_QWORD *)&v1376 = 0;
  v1343 = &v1376;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1375 = 3;
  v15 = operator new(0x20u);
  *(_QWORD *)v15 = v15 + 16;
  strcpy((char *)(v15 + 16), "description");
  *(_QWORD *)(v15 + 8) = 11;
  v1377 = 0;
  *(_QWORD *)&v1378 = 0;
  v1344 = &v1378;
  v1376 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1377 = 3;
  v16 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v16, "Expression to evaluate", v17, v18, v19, v20, v416, v509, v602);
  v1347 = (const __m128i *)&v1375;
  v1354 = &v1382;
  v1378 = (unsigned __int64)v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1382,
    (const __m128i *)&v1375);
  v1384 = 0;
  v1355 = &v1387;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1387,
    v1339);
  v1389 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1408,
    (const __m128i *)&v1385);
  v1409 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1405 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1390);
  v1391 = 0;
  v1356 = &v1392;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v1392);
  v1394 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1422,
    &v1390);
  *((_QWORD *)&v1423 + 1) = 0;
  v1395 = 0;
  *(_QWORD *)&v1396 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1395 = 3;
  v21 = operator new(0x20u);
  *(_QWORD *)v21 = v21 + 16;
  strcpy((char *)(v21 + 16), "description");
  *(_QWORD *)(v21 + 8) = 11;
  v1397 = 0;
  *(_QWORD *)&v1398 = 0;
  v1396 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1397 = 3;
  v22 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v22,
    "Hex address context",
    v23,
    v24,
    v25,
    v26,
    (int)&v1398,
    v510,
    v603);
  v1358 = &v1424;
  v1398 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1424,
    (const __m128i *)&v1395);
  v1425 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1401 = 0;
  LOBYTE(v1402) = 0;
  *(_QWORD *)&v1403 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1402) = 3;
  v27 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v27, "0", v28, v29, v30, v31, v417, (int)&v1399, v604);
  v1359 = v1426;
  v1403 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1426,
    v511);
  v1427 = 0;
  v1357 = &v1406;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1406,
    (__int64)&v1422,
    3,
    v32,
    v33,
    v34,
    v418,
    (__int64)v511,
    v605,
    (int)&v1390,
    (int)&v1414,
    (int)&v1395,
    (__int64)&v1386,
    v921,
    v978,
    (int)&v1385,
    (int)&v1404,
    (char)&v1396,
    (__int64)&v1403,
    v1263,
    v1320.m128i_i64[0]);
  *((_QWORD *)&v1407 + 1) = 0;
  v1332 = &v1410;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1410,
    v1092);
  v1412 = 0;
  v1333 = &v1415;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1415,
    &v1408);
  v1417 = 0;
  v1334 = &v1431.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1431.m128i_i64[1],
    (const __m128i *)&v1413);
  v1432 = 0;
  v1418 = 0;
  *(_QWORD *)&v1419 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1418 = 3;
  v35 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v35, "required", v36, v37, v38, v39, v419, v512, (__int64)&v1419);
  v1345 = &v1365;
  *(_QWORD *)&v1365 = 0;
  v1419 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1364) = 3;
  v40 = operator new(0x20u);
  *(_QWORD *)v40 = v40 + 16;
  strcpy((char *)(v40 + 16), "expression");
  v41 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v40 + 8) = 10;
  v1329 = &v1361;
  v1320.m128i_i64[1] = v41.m128_i64[1];
  v1365 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v42 = _mm_load_si128(&v1361);
  v1421 = 0;
  v1322 = &v1418;
  v1335 = v1433;
  v1420 = v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1433,
    (const __m128i *)&v1418);
  v1434 = 0;
  LOBYTE(v1362) = 0;
  v1330 = &v1362;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1362,
    (__int64)&v1429,
    3,
    v43,
    v44,
    v45,
    v420,
    v513,
    v606,
    v693,
    v750,
    v807,
    v864,
    v922,
    v979,
    v1035,
    (int)v1092,
    v1149,
    v1206,
    (int)&v1413,
    v41.m128_i64[0]);
  LOBYTE(v14) = v1442;
  v46 = (void **)&v1435;
  v47 = v1363;
  v1442 = v1362;
  LOBYTE(v1362) = (_BYTE)v14;
  v1363 = v1443;
  v1443 = v47;
  v1331 = &v1363;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v46 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v46 != &v1429 );
  v48 = (__int64 *)&v1428;
  v1328 = &v1420.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1327 = &v1416;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1326 = &v1411;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1325 = &v1408.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v48 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v48 != &v1422 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1324 = &v1400;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1353 = &v1393;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1323 = &v1390.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1352 = &v1388;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1351 = &v1383;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1350 = &v1380;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1349 = &v1371;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1348 = &v1366.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v49 = _mm_load_si128(&v1320);
  v1430 = 0;
  v1429 = ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_eval_expr;
  v1431 = v49;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1431.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1431.m128i_i64[0])(&v1429, &v1429, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1436);
  v1437 = 0;
  v1438[0] = 0;
  v1436 = v1336;
  v1440 = 0;
  v1439 = v1338;
  v1441[0] = 0;
  v1442 = 0;
  v1443 = 0;
  v1444 = 0;
  v1445 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1340);
  v1367 = 0;
  v1368 = 0;
  *(_QWORD *)&v1369 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1368 = 3;
  v50 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v50, "object", v51, v52, v53, v54, v421, v514, v607);
  v1369 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1429,
    v1340);
  v1431.m128i_i64[0] = 0;
  v1413 = 0;
  *(_QWORD *)&v1414 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1413 = 3;
  v55 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v55, "properties", v56, v57, v58, v59, v422, v515, v608);
  v1385 = 0;
  *(_QWORD *)&v1386 = 0;
  v1414 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1385 = 3;
  v60 = operator new(0x20u);
  v61 = (__int64 *)v1342;
  *(_QWORD *)v60 = v60 + 16;
  strcpy((char *)(v60 + 16), "expression");
  *(_QWORD *)(v60 + 8) = 10;
  v1386 = (unsigned __int64)v60;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v61);
  v1372 = 0;
  v1360 = &v1373;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v1373);
  *((_QWORD *)&v1374 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1339,
    v1342);
  v1381 = 0;
  v1375 = 0;
  *(_QWORD *)&v1376 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1375 = 3;
  v62 = operator new(0x20u);
  *(_QWORD *)v62 = v62 + 16;
  strcpy((char *)(v62 + 16), "description");
  *(_QWORD *)(v62 + 8) = 11;
  v1377 = 0;
  *(_QWORD *)&v1378 = 0;
  v1376 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1377 = 3;
  v63 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v63, "IDC expression", v64, v65, v66, v67, v423, v516, v609);
  v1378 = (unsigned __int64)v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1354,
    v1347);
  v1384 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1355,
    v1339);
  v1389 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1408,
    v1036);
  v1409 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1405 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v694);
  v1391 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1356);
  v1394 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1422,
    v694);
  *((_QWORD *)&v1423 + 1) = 0;
  v1395 = 0;
  *(_QWORD *)&v1396 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1395 = 3;
  v68 = operator new(0x20u);
  *(_QWORD *)v68 = v68 + 16;
  strcpy((char *)(v68 + 16), "description");
  *(_QWORD *)(v68 + 8) = 11;
  v1397 = 0;
  *(_QWORD *)&v1398 = 0;
  v1396 = (unsigned __int64)v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1397 = 3;
  v69 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v69, "Hex address context", v70, v71, v72, v73, v424, v517, v610);
  v1398 = (unsigned __int64)v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1358,
    v808);
  v1425 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1401 = 0;
  LOBYTE(v1402) = 0;
  *(_QWORD *)&v1403 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1402) = 3;
  v74 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v74, "0", v75, v76, v77, v78, v425, v518, v611);
  v1403 = (unsigned __int64)v74;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1359,
    v519);
  v1427 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1357,
    (__int64)&v1422,
    3,
    v79,
    v80,
    v81,
    v426,
    (__int64)v519,
    v612,
    (int)v694,
    v751,
    (int)v808,
    v865,
    (int)&v1405,
    (int)&v1407,
    (int)v1036,
    v1093,
    v1150,
    v1207,
    v1264,
    v1320.m128i_i64[0]);
  *((_QWORD *)&v1407 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1332,
    v1094,
    2,
    v82,
    v83,
    v84,
    v427,
    v520,
    v613,
    v695,
    v752,
    v809,
    v866,
    v923,
    v980,
    v1037,
    v1094,
    v1151,
    v1208,
    v1265,
    v1320.m128i_i64[0]);
  v1412 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1333,
    (__int64)&v1408,
    2,
    v85,
    v86,
    v87,
    v428,
    v521,
    v614,
    v696,
    v753,
    v810,
    v867,
    v924,
    v981,
    v1038,
    v1095,
    v1152,
    v1209,
    v1266,
    v1320.m128i_i64[0]);
  v1417 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1334,
    v1267,
    2,
    v88,
    v89,
    v90,
    v429,
    v522,
    v615,
    v697,
    v754,
    v811,
    v868,
    v925,
    v982,
    v1039,
    v1096,
    v1153,
    v1210,
    v1267,
    v1320.m128i_i64[0]);
  v1432 = 0;
  v1418 = 0;
  *(_QWORD *)&v1419 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1418 = 3;
  v91 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v91, "required", v92, v93, v94, v95, v430, v523, v616);
  LOBYTE(v1364) = 0;
  *(_QWORD *)&v1365 = 0;
  v1419 = (unsigned __int64)v91;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1364) = 3;
  v96 = operator new(0x20u);
  *(_QWORD *)v96 = v96 + 16;
  strcpy((char *)(v96 + 16), "expression");
  *(_QWORD *)(v96 + 8) = 10;
  v1365 = (unsigned __int64)v96;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v97 = _mm_load_si128(&v1361);
  v1421 = 0;
  v1420 = v97;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1335,
    (__int64)v1322,
    2,
    v98,
    v99,
    v100,
    v431,
    v524,
    v617,
    v698,
    v755,
    v812,
    v869,
    v926,
    v983,
    v1040,
    v1097,
    v1154,
    v1211,
    v1268,
    v1320.m128i_i64[0]);
  v1434 = 0;
  LOBYTE(v1362) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1330,
    (__int64)&v1429,
    3,
    v101,
    v102,
    v103,
    v432,
    v525,
    v618,
    v699,
    v756,
    v813,
    v870,
    v927,
    v984,
    v1041,
    v1098,
    v1155,
    v1212,
    v1269,
    v1320.m128i_i64[0]);
  v104 = v1442;
  v105 = (void **)&v1435;
  v1442 = v1362;
  v106 = v1443;
  LOBYTE(v1362) = v104;
  v1443 = v1363;
  v1363 = v106;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v105 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v105 != &v1429 );
  v107 = (__int64 *)&v1428;
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
    v107 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v107 != &v1422 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v108 = _mm_load_si128(&v1320);
  v1430 = 0;
  v1429 = ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_eval_idc;
  v1431 = v108;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1431.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1431.m128i_i64[0])(&v1429, &v1429, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1436);
  v1437 = 0;
  v1438[0] = 0;
  v1436 = v1336;
  v1440 = 0;
  v1439 = v1338;
  v1441[0] = 0;
  v1442 = 0;
  v1443 = 0;
  v1444 = 0;
  v1445 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1340);
  v1367 = 0;
  v1368 = 0;
  *(_QWORD *)&v1369 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1368 = 3;
  v109 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v109, "object", v110, v111, v112, v113, v433, v526, v619);
  v1369 = (unsigned __int64)v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1429,
    (__int64)v1340,
    2,
    v114,
    v115,
    v116,
    v434,
    v527,
    v620,
    v700,
    v757,
    v814,
    v871,
    v928,
    v985,
    v1042,
    v1099,
    v1156,
    v1213,
    v1270,
    v1320.m128i_i64[0]);
  v1431.m128i_i64[0] = 0;
  v1413 = 0;
  *(_QWORD *)&v1414 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1413 = 3;
  v117 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v117, "properties", v118, v119, v120, v121, v435, v528, v621);
  v1414 = (unsigned __int64)v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1043);
  *((_QWORD *)&v1386 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1342);
  v1372 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1360);
  *((_QWORD *)&v1374 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1339,
    (__int64)v1342,
    2,
    v122,
    v123,
    v124,
    v436,
    v529,
    v622,
    v701,
    v758,
    v815,
    v872,
    v929,
    v986,
    (int)v1043,
    v1100,
    v1157,
    v1214,
    v1271,
    v1320.m128i_i64[0]);
  v1381 = 0;
  v1375 = 0;
  *(_QWORD *)&v1376 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1375 = 3;
  v125 = operator new(0x20u);
  *(_QWORD *)v125 = v125 + 16;
  strcpy((char *)(v125 + 16), "description");
  *(_QWORD *)(v125 + 8) = 11;
  v1377 = 0;
  *(_QWORD *)&v1378 = 0;
  v1376 = (unsigned __int64)v125;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1377 = 3;
  v126 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v126, "IDC code snippet", v127, v128, v129, v130, v437, v530, v623);
  v1378 = (unsigned __int64)v126;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1354,
    (__int64)v1347,
    2,
    v131,
    v132,
    v133,
    v438,
    v531,
    v624,
    v702,
    v759,
    v816,
    v873,
    v930,
    v987,
    v1044,
    v1101,
    v1158,
    v1215,
    v1272,
    v1320.m128i_i64[0]);
  v1384 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1355,
    (__int64)v1339,
    2,
    v134,
    v135,
    v136,
    v439,
    v532,
    v625,
    v703,
    v760,
    v817,
    v874,
    v931,
    v988,
    v1045,
    v1102,
    v1159,
    v1216,
    v1273,
    v1320.m128i_i64[0]);
  v1389 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1408,
    v1046,
    2,
    v137,
    v138,
    v139,
    v440,
    v533,
    v626,
    v704,
    v761,
    v818,
    v875,
    v932,
    v989,
    v1046,
    v1103,
    v1160,
    v1217,
    v1274,
    v1320.m128i_i64[0]);
  v1409 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1405 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v705);
  v1391 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1356);
  v1394 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1422,
    (__int64)v705,
    2,
    v140,
    v141,
    v142,
    v441,
    v534,
    v627,
    (int)v705,
    v762,
    v819,
    v876,
    v933,
    v990,
    v1047,
    v1104,
    v1161,
    v1218,
    v1275,
    v1320.m128i_i64[0]);
  *((_QWORD *)&v1423 + 1) = 0;
  v1395 = 0;
  *(_QWORD *)&v1396 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1395 = 3;
  v143 = operator new(0x20u);
  *(_QWORD *)v143 = v143 + 16;
  strcpy((char *)(v143 + 16), "description");
  *(_QWORD *)(v143 + 8) = 11;
  v1397 = 0;
  *(_QWORD *)&v1398 = 0;
  v1396 = (unsigned __int64)v143;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1397 = 3;
  v144 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v144, "Hex address context", v145, v146, v147, v148, v442, v535, v628);
  v1398 = (unsigned __int64)v144;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1358,
    v820,
    2,
    v149,
    v150,
    v151,
    v443,
    v536,
    v629,
    v706,
    v763,
    v820,
    v877,
    v934,
    v991,
    v1048,
    v1105,
    v1162,
    v1219,
    v1276,
    v1320.m128i_i64[0]);
  v1425 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1401 = 0;
  LOBYTE(v1402) = 0;
  *(_QWORD *)&v1403 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1402) = 3;
  v152 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v152, "0", v153, v154, v155, v156, v444, v537, v630);
  v1403 = (unsigned __int64)v152;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1359,
    v538,
    2,
    v157,
    v158,
    v159,
    v445,
    v538,
    v631,
    v707,
    v764,
    v821,
    v878,
    v935,
    v992,
    v1049,
    v1106,
    v1163,
    v1220,
    v1277,
    v1320.m128i_i64[0]);
  v1427 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1357,
    (__int64)&v1422,
    3,
    v160,
    v161,
    v162,
    v446,
    v539,
    v632,
    v708,
    v765,
    v822,
    v879,
    v936,
    v993,
    v1050,
    v1107,
    v1164,
    v1221,
    v1278,
    v1320.m128i_i64[0]);
  *((_QWORD *)&v1407 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1332,
    v1108,
    2,
    v163,
    v164,
    v165,
    v447,
    v540,
    v633,
    v709,
    v766,
    v823,
    v880,
    v937,
    v994,
    v1051,
    v1108,
    v1165,
    v1222,
    v1279,
    v1320.m128i_i64[0]);
  v1412 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1333,
    (__int64)&v1408,
    2,
    v166,
    v167,
    v168,
    v448,
    v541,
    v634,
    v710,
    v767,
    v824,
    v881,
    v938,
    v995,
    v1052,
    v1109,
    v1166,
    v1223,
    v1280,
    v1320.m128i_i64[0]);
  v1417 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1334,
    v1281,
    2,
    v169,
    v170,
    v171,
    v449,
    v542,
    v635,
    v711,
    v768,
    v825,
    v882,
    v939,
    v996,
    v1053,
    v1110,
    v1167,
    v1224,
    v1281,
    v1320.m128i_i64[0]);
  v1432 = 0;
  v1418 = 0;
  *(_QWORD *)&v1419 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1418 = 3;
  v172 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v172, "required", v173, v174, v175, v176, v450, v543, v636);
  v1419 = (unsigned __int64)v172;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1364);
  *((_QWORD *)&v1365 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v177 = _mm_load_si128(&v1361);
  v1421 = 0;
  v1420 = v177;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1335,
    (__int64)v1322,
    2,
    v178,
    v179,
    v180,
    v451,
    v544,
    v637,
    v712,
    v769,
    v826,
    v883,
    v940,
    v997,
    v1054,
    v1111,
    v1168,
    v1225,
    v1282,
    v1320.m128i_i64[0]);
  v1434 = 0;
  LOBYTE(v1362) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1330,
    (__int64)&v1429,
    3,
    v181,
    v182,
    v183,
    v452,
    v545,
    v638,
    v713,
    v770,
    v827,
    v884,
    v941,
    v998,
    v1055,
    v1112,
    v1169,
    v1226,
    v1283,
    v1320.m128i_i64[0]);
  v184 = v1442;
  v185 = (void **)&v1435;
  v1442 = v1362;
  v186 = v1443;
  LOBYTE(v1362) = v184;
  v1443 = v1363;
  v1363 = v186;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v185 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v185 != &v1429 );
  v187 = (__int64 *)&v1428;
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
    v187 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v187 != &v1422 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v188 = _mm_load_si128(&v1320);
  v1430 = 0;
  v1429 = ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_exec_snippet;
  v1431 = v188;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1431.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1431.m128i_i64[0])(&v1429, &v1429, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1436);
  v1437 = 0;
  v1438[0] = 0;
  v1436 = v1336;
  v1440 = 0;
  v1439 = v1338;
  v1441[0] = 0;
  v1442 = 0;
  v1443 = 0;
  v1444 = 0;
  v1445 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v828);
  *((_QWORD *)&v1396 + 1) = 0;
  v1397 = 0;
  *(_QWORD *)&v1398 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1397 = 3;
  v189 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v189, "object", v190, v191, v192, v193, v453, v546, v639);
  v1398 = (unsigned __int64)v189;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1429,
    (__int64)v828,
    2,
    v194,
    v195,
    v196,
    v454,
    v547,
    v640,
    v714,
    v771,
    (int)v828,
    v885,
    v942,
    v999,
    v1056,
    v1113,
    v1170,
    v1227,
    v1284,
    v1320.m128i_i64[0]);
  v1431.m128i_i64[0] = 0;
  v1418 = 0;
  *(_QWORD *)&v1419 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1418 = 3;
  v197 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v197, "properties", v198, v199, v200, v201, v455, v548, v641);
  v1419 = (unsigned __int64)v197;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1285);
  *((_QWORD *)&v1414 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v549);
  v1401 = 0;
  v1340 = (__m128i *)&v1402;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v1402);
  *((_QWORD *)&v1403 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1408,
    (__int64)v549,
    2,
    v202,
    v203,
    v204,
    v456,
    (__int64)v549,
    v642,
    v715,
    v772,
    v829,
    v886,
    v943,
    v1000,
    v1057,
    v1114,
    v1171,
    v1228,
    (int)v1285,
    v1320.m128i_i64[0]);
  v1409 = 0;
  v1404 = 0;
  *(_QWORD *)&v1405 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1404 = 3;
  v205 = operator new(0x20u);
  *(_QWORD *)v205 = v205 + 16;
  strcpy((char *)(v205 + 16), "description");
  *(_QWORD *)(v205 + 8) = 11;
  LOBYTE(v1406) = 0;
  *(_QWORD *)&v1407 = 0;
  v1405 = (unsigned __int64)v205;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1406) = 3;
  v206 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v206, "IDC code", v207, v208, v209, v210, v457, v550, v643);
  v1407 = (unsigned __int64)v206;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1332,
    v1115,
    2,
    v211,
    v212,
    v213,
    v458,
    v551,
    v644,
    v716,
    v773,
    v830,
    v887,
    v944,
    v1001,
    v1058,
    v1115,
    v1172,
    v1229,
    v1286,
    v1320.m128i_i64[0]);
  v1412 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1333,
    (__int64)&v1408,
    2,
    v214,
    v215,
    v216,
    v459,
    v552,
    v645,
    v717,
    v774,
    v831,
    v888,
    v945,
    v1002,
    v1059,
    v1116,
    v1173,
    v1230,
    v1287,
    v1320.m128i_i64[0]);
  v1417 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v718,
    v1288,
    2,
    v217,
    v218,
    v219,
    v460,
    v553,
    v646,
    (int)v718,
    v775,
    v832,
    v889,
    v946,
    v1003,
    v1060,
    v1117,
    v1174,
    v1231,
    v1288,
    v1320.m128i_i64[0]);
  v1391 = 0;
  v1341 = &v1420;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1420,
    v719,
    1,
    v220,
    v221,
    v222,
    v461,
    v554,
    v647,
    v719,
    v776,
    v833,
    v890,
    v947,
    v1004,
    v1061,
    v1118,
    v1175,
    v1232,
    v1289,
    v1320.m128i_i64[0]);
  v1421 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1334,
    (__int64)v1322,
    2,
    v223,
    v224,
    v225,
    v462,
    v555,
    v648,
    v720,
    v777,
    v834,
    v891,
    v948,
    v1005,
    v1062,
    v1119,
    v1176,
    v1233,
    v1290,
    v1320.m128i_i64[0]);
  v1432 = 0;
  LOBYTE(v1422) = 0;
  *(_QWORD *)&v1423 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1422) = 3;
  v226 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v226, "required", v227, v228, v229, v230, v463, v556, v649);
  v1423 = (unsigned __int64)v226;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1063);
  *((_QWORD *)&v1386 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v231 = _mm_load_si128(&v1361);
  v1425 = 0;
  v1424 = v231;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1335,
    (__int64)&v1422,
    2,
    v232,
    v233,
    v234,
    v464,
    v557,
    v650,
    v721,
    v778,
    v835,
    v892,
    v949,
    v1006,
    (int)v1063,
    v1120,
    v1177,
    v1234,
    v1291,
    v1320.m128i_i64[0]);
  v1434 = 0;
  LOBYTE(v1362) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1330,
    (__int64)&v1429,
    3,
    v235,
    v236,
    v237,
    v465,
    v558,
    v651,
    v722,
    v779,
    v836,
    v893,
    v950,
    v1007,
    v1064,
    v1121,
    v1178,
    v1235,
    v1292,
    v1320.m128i_i64[0]);
  v238 = v1442;
  v239 = (void **)&v1435;
  v1442 = v1362;
  v240 = v1443;
  LOBYTE(v1362) = v238;
  v1443 = v1363;
  v1363 = v240;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v239 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v239 != &v1429 );
  v1339 = (__m128i *)&v1424.m128i_u64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v241 = _mm_load_si128(&v1320);
  v1430 = 0;
  v1429 = ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_compile_idc;
  v1431 = v241;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1431.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1431.m128i_i64[0])(&v1429, &v1429, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1436);
  v1437 = 0;
  v1438[0] = 0;
  v1436 = v1336;
  v1440 = 0;
  v1439 = v1338;
  v1441[0] = 0;
  v1442 = 0;
  v1443 = 0;
  v1444 = 0;
  v1445 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v837);
  *((_QWORD *)&v1396 + 1) = 0;
  v1397 = 0;
  *(_QWORD *)&v1398 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1397 = 3;
  v242 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v242, "object", v243, v244, v245, v246, v466, v559, v652);
  v1398 = (unsigned __int64)v242;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1429,
    (__int64)v837,
    2,
    v247,
    v248,
    v249,
    v467,
    v560,
    v653,
    v723,
    v780,
    (int)v837,
    v894,
    v951,
    v1008,
    v1065,
    v1122,
    v1179,
    v1236,
    v1293,
    v1320.m128i_i64[0]);
  v1431.m128i_i64[0] = 0;
  v1418 = 0;
  *(_QWORD *)&v1419 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1418 = 3;
  v250 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v250, "properties", v251, v252, v253, v254, v468, v561, v654);
  v1419 = (unsigned __int64)v250;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1294);
  *((_QWORD *)&v1414 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v562);
  v1401 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1340);
  *((_QWORD *)&v1403 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1408,
    (__int64)v562,
    2,
    v255,
    v256,
    v257,
    v469,
    (__int64)v562,
    v655,
    v724,
    v781,
    v838,
    v895,
    v952,
    v1009,
    v1066,
    v1123,
    v1180,
    v1237,
    (int)v1294,
    v1320.m128i_i64[0]);
  v1409 = 0;
  v1404 = 0;
  *(_QWORD *)&v1405 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1404 = 3;
  v258 = operator new(0x20u);
  *(_QWORD *)v258 = v258 + 16;
  strcpy((char *)(v258 + 16), "description");
  *(_QWORD *)(v258 + 8) = 11;
  LOBYTE(v1406) = 0;
  *(_QWORD *)&v1407 = 0;
  v1405 = (unsigned __int64)v258;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1406) = 3;
  v259 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v259,
    "Python code to execute",
    v260,
    v261,
    v262,
    v263,
    v470,
    v563,
    v656);
  v1407 = (unsigned __int64)v259;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1332,
    v1124,
    2,
    v264,
    v265,
    v266,
    v471,
    v564,
    v657,
    v725,
    v782,
    v839,
    v896,
    v953,
    v1010,
    v1067,
    v1124,
    v1181,
    v1238,
    v1295,
    v1320.m128i_i64[0]);
  v1412 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1333,
    (__int64)&v1408,
    2,
    v267,
    v268,
    v269,
    v472,
    v565,
    v658,
    v726,
    v783,
    v840,
    v897,
    v954,
    v1011,
    v1068,
    v1125,
    v1182,
    v1239,
    v1296,
    v1320.m128i_i64[0]);
  v1417 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v727,
    v1297,
    2,
    v270,
    v271,
    v272,
    v473,
    v566,
    v659,
    (int)v727,
    v784,
    v841,
    v898,
    v955,
    v1012,
    v1069,
    v1126,
    v1183,
    v1240,
    v1297,
    v1320.m128i_i64[0]);
  v1391 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1341,
    v728,
    1,
    v273,
    v274,
    v275,
    v474,
    v567,
    v660,
    v728,
    v785,
    v842,
    v899,
    v956,
    v1013,
    v1070,
    v1127,
    v1184,
    v1241,
    v1298,
    v1320.m128i_i64[0]);
  v1421 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1334,
    (__int64)v1322,
    2,
    v276,
    v277,
    v278,
    v475,
    v568,
    v661,
    v729,
    v786,
    v843,
    v900,
    v957,
    v1014,
    v1071,
    v1128,
    v1185,
    v1242,
    v1299,
    v1320.m128i_i64[0]);
  v1432 = 0;
  LOBYTE(v1422) = 0;
  *(_QWORD *)&v1423 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1422) = 3;
  v279 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v279, "required", v280, v281, v282, v283, v476, v569, v662);
  v1423 = (unsigned __int64)v279;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1072);
  *((_QWORD *)&v1386 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v284 = _mm_load_si128(&v1361);
  v1425 = 0;
  v1424 = v284;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1335,
    (__int64)&v1422,
    2,
    v285,
    v286,
    v287,
    v477,
    v570,
    v663,
    v730,
    v787,
    v844,
    v901,
    v958,
    v1015,
    (int)v1072,
    v1129,
    v1186,
    v1243,
    v1300,
    v1320.m128i_i64[0]);
  v1434 = 0;
  LOBYTE(v1362) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1330,
    (__int64)&v1429,
    3,
    v288,
    v289,
    v290,
    v478,
    v571,
    v664,
    v731,
    v788,
    v845,
    v902,
    v959,
    v1016,
    v1073,
    v1130,
    v1187,
    v1244,
    v1301,
    v1320.m128i_i64[0]);
  v291 = v1442;
  v292 = (void **)&v1435;
  v1442 = v1362;
  v293 = v1443;
  LOBYTE(v1362) = v291;
  v1443 = v1363;
  v1363 = v293;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v292 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v292 != &v1429 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v294 = _mm_load_si128(&v1320);
  v1430 = 0;
  v1429 = ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_run_python;
  v1431 = v294;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1431.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1431.m128i_i64[0])(&v1429, &v1429, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1436);
  v1437 = 0;
  v1438[0] = 0;
  v1436 = v1336;
  v1440 = 0;
  v1439 = v1338;
  v1441[0] = 0;
  v1442 = 0;
  v1443 = 0;
  v1444 = 0;
  v1445 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v846);
  *((_QWORD *)&v1396 + 1) = 0;
  v1397 = 0;
  *(_QWORD *)&v1398 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1397 = 3;
  v295 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v295, "object", v296, v297, v298, v299, v479, v572, v665);
  v1398 = (unsigned __int64)v295;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1429,
    (__int64)v846,
    2,
    v300,
    v301,
    v302,
    v480,
    v573,
    v666,
    v732,
    v789,
    (int)v846,
    v903,
    v960,
    v1017,
    v1074,
    v1131,
    v1188,
    v1245,
    v1302,
    v1320.m128i_i64[0]);
  v1431.m128i_i64[0] = 0;
  v1418 = 0;
  *(_QWORD *)&v1419 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1418 = 3;
  v303 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v303, "properties", v304, v305, v306, v307, v481, v574, v667);
  v1413 = 0;
  *(_QWORD *)&v1414 = 0;
  v1419 = (unsigned __int64)v303;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1413 = 3;
  v308 = operator new(0x20u);
  *(_QWORD *)v308 = v308 + 16;
  strcpy((char *)(v308 + 16), "expression");
  *(_QWORD *)(v308 + 8) = 10;
  v1414 = (unsigned __int64)v308;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v575);
  v1401 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1340);
  *((_QWORD *)&v1403 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1408,
    (__int64)v575,
    2,
    v309,
    v310,
    v311,
    v482,
    (__int64)v575,
    v668,
    v733,
    v790,
    v847,
    v904,
    v961,
    v1018,
    v1075,
    v1132,
    v1189,
    v1246,
    v1303,
    v1320.m128i_i64[0]);
  v1409 = 0;
  v1404 = 0;
  *(_QWORD *)&v1405 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1404 = 3;
  v312 = operator new(0x20u);
  *(_QWORD *)v312 = v312 + 16;
  strcpy((char *)(v312 + 16), "description");
  *(_QWORD *)(v312 + 8) = 11;
  LOBYTE(v1406) = 0;
  *(_QWORD *)&v1407 = 0;
  v1405 = (unsigned __int64)v312;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1406) = 3;
  v313 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v313, "Python expression", v314, v315, v316, v317, v483, v576, v669);
  v1407 = (unsigned __int64)v313;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1332,
    v1133,
    2,
    v318,
    v319,
    v320,
    v484,
    v577,
    v670,
    v734,
    v791,
    v848,
    v905,
    v962,
    v1019,
    v1076,
    v1133,
    v1190,
    v1247,
    v1304,
    v1320.m128i_i64[0]);
  v1412 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1333,
    (__int64)&v1408,
    2,
    v321,
    v322,
    v323,
    v485,
    v578,
    v671,
    v735,
    v792,
    v849,
    v906,
    v963,
    v1020,
    v1077,
    v1134,
    v1191,
    v1248,
    v1305,
    v1320.m128i_i64[0]);
  v1417 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v736,
    v1306,
    2,
    v324,
    v325,
    v326,
    v486,
    v579,
    v672,
    (int)v736,
    v793,
    v850,
    v907,
    v964,
    v1021,
    v1078,
    v1135,
    v1192,
    v1249,
    v1306,
    v1320.m128i_i64[0]);
  v1391 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1341,
    v737,
    1,
    v327,
    v328,
    v329,
    v487,
    v580,
    v673,
    v737,
    v794,
    v851,
    v908,
    v965,
    v1022,
    v1079,
    v1136,
    v1193,
    v1250,
    v1307,
    v1320.m128i_i64[0]);
  v1421 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1334,
    (__int64)v1322,
    2,
    v330,
    v331,
    v332,
    v488,
    v581,
    v674,
    v738,
    v795,
    v852,
    v909,
    v966,
    v1023,
    v1080,
    v1137,
    v1194,
    v1251,
    v1308,
    v1320.m128i_i64[0]);
  v1432 = 0;
  LOBYTE(v1422) = 0;
  *(_QWORD *)&v1423 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1422) = 3;
  v333 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v333, "required", v334, v335, v336, v337, v489, v582, v675);
  v1385 = 0;
  *(_QWORD *)&v1386 = 0;
  v1423 = (unsigned __int64)v333;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1385 = 3;
  v338 = operator new(0x20u);
  *(_QWORD *)(v338 + 8) = 10;
  *(_QWORD *)v338 = v338 + 16;
  strcpy((char *)(v338 + 16), "expression");
  v1386 = (unsigned __int64)v338;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v339 = _mm_load_si128(&v1361);
  v1425 = 0;
  v1424 = v339;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1335,
    (__int64)&v1422,
    2,
    v340,
    v341,
    v342,
    v490,
    v583,
    v676,
    v739,
    v796,
    v853,
    v910,
    v967,
    v1024,
    v1081,
    v1138,
    v1195,
    v1252,
    v1309,
    v1320.m128i_i64[0]);
  v1434 = 0;
  LOBYTE(v1362) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1330,
    (__int64)&v1429,
    3,
    v343,
    v344,
    v345,
    v491,
    v584,
    v677,
    v740,
    v797,
    v854,
    v911,
    v968,
    v1025,
    v1082,
    v1139,
    v1196,
    v1253,
    v1310,
    v1320.m128i_i64[0]);
  v346 = v1442;
  v347 = (void **)&v1435;
  v1442 = v1362;
  v348 = v1443;
  LOBYTE(v1362) = v346;
  v1443 = v1363;
  v1363 = v348;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v347 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v347 != &v1429 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v349 = _mm_load_si128(&v1320);
  v1430 = 0;
  v1429 = ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_run_python_expr;
  v1431 = v349;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1431.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1431.m128i_i64[0])(&v1429, &v1429, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1436);
  v1437 = 0;
  v1438[0] = 0;
  v1436 = v1336;
  v1440 = 0;
  v1439 = v1338;
  v1441[0] = 0;
  v1442 = 0;
  v1443 = 0;
  v1444 = 0;
  v1445 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v855);
  *((_QWORD *)&v1396 + 1) = 0;
  v1397 = 0;
  *(_QWORD *)&v1398 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1397 = 3;
  v350 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v350, "object", v351, v352, v353, v354, v492, v585, v678);
  v1398 = (unsigned __int64)v350;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1429,
    (__int64)v855,
    2,
    v355,
    v356,
    v357,
    v493,
    v586,
    v679,
    v741,
    v798,
    (int)v855,
    v912,
    v969,
    v1026,
    v1083,
    v1140,
    v1197,
    v1254,
    v1311,
    v1320.m128i_i64[0]);
  v1431.m128i_i64[0] = 0;
  v1418 = 0;
  *(_QWORD *)&v1419 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1418 = 3;
  v358 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v358, "properties", v359, v360, v361, v362, v494, v587, v680);
  v1413 = 0;
  *(_QWORD *)&v1414 = 0;
  v1419 = (unsigned __int64)v358;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1413 = 3;
  v363 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v363, "function_name", v364, v365, v366, v367, v495, v588, v681);
  v1414 = (unsigned __int64)v363;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v589);
  v1401 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v1340);
  *((_QWORD *)&v1403 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1408,
    (__int64)v589,
    2,
    v368,
    v369,
    v370,
    v496,
    (__int64)v589,
    v682,
    v742,
    v799,
    v856,
    v913,
    v970,
    v1027,
    v1084,
    v1141,
    v1198,
    v1255,
    v1312,
    v1320.m128i_i64[0]);
  v1409 = 0;
  v1404 = 0;
  *(_QWORD *)&v1405 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1404 = 3;
  v371 = operator new(0x20u);
  *(_QWORD *)v371 = v371 + 16;
  strcpy((char *)(v371 + 16), "description");
  *(_QWORD *)(v371 + 8) = 11;
  LOBYTE(v1406) = 0;
  *(_QWORD *)&v1407 = 0;
  v1405 = (unsigned __int64)v371;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1406) = 3;
  v372 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v372,
    "Name of IDC function to call",
    v373,
    v374,
    v375,
    v376,
    v497,
    v590,
    v683);
  v1407 = (unsigned __int64)v372;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1332,
    v1142,
    2,
    v377,
    v378,
    v379,
    v498,
    v591,
    v684,
    v743,
    v800,
    v857,
    v914,
    v971,
    v1028,
    v1085,
    v1142,
    v1199,
    v1256,
    v1313,
    v1320.m128i_i64[0]);
  v1412 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1333,
    (__int64)&v1408,
    2,
    v380,
    v381,
    v382,
    v499,
    v592,
    v685,
    v744,
    v801,
    v858,
    v915,
    v972,
    v1029,
    v1086,
    v1143,
    v1200,
    v1257,
    v1314,
    v1320.m128i_i64[0]);
  v1417 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v745,
    v1315,
    2,
    v383,
    v384,
    v385,
    v500,
    v593,
    v686,
    (int)v745,
    v802,
    v859,
    v916,
    v973,
    v1030,
    v1087,
    v1144,
    v1201,
    v1258,
    v1315,
    v1320.m128i_i64[0]);
  v1391 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1341,
    v746,
    1,
    v386,
    v387,
    v388,
    v501,
    v594,
    v687,
    v746,
    v803,
    v860,
    v917,
    v974,
    v1031,
    v1088,
    v1145,
    v1202,
    v1259,
    v1316,
    v1320.m128i_i64[0]);
  v1421 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1334,
    (__int64)v1322,
    2,
    v389,
    v390,
    v391,
    v502,
    v595,
    v688,
    v747,
    v804,
    v861,
    v918,
    v975,
    v1032,
    v1089,
    v1146,
    v1203,
    v1260,
    v1317,
    v1320.m128i_i64[0]);
  v1432 = 0;
  LOBYTE(v1422) = 0;
  *(_QWORD *)&v1423 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1422) = 3;
  v392 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v392, "required", v393, v394, v395, v396, v503, v596, v689);
  v1385 = 0;
  *(_QWORD *)&v1386 = 0;
  v1423 = (unsigned __int64)v392;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1385 = 3;
  v397 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v397, "function_name", v398, v399, v400, v401, v504, v597, v690);
  v1386 = (unsigned __int64)v397;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v402 = _mm_load_si128(&v1361);
  v1425 = 0;
  v1424 = v402;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1335,
    (__int64)&v1422,
    2,
    v403,
    v404,
    v405,
    v505,
    v598,
    v691,
    v748,
    v805,
    v862,
    v919,
    v976,
    v1033,
    v1090,
    v1147,
    v1204,
    v1261,
    v1318,
    v1320.m128i_i64[0]);
  v1434 = 0;
  LOBYTE(v1362) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1330,
    (__int64)&v1429,
    3,
    v406,
    v407,
    v408,
    v506,
    v599,
    v692,
    v749,
    v806,
    v863,
    v920,
    v977,
    v1034,
    v1091,
    v1148,
    v1205,
    v1262,
    v1319,
    v1320.m128i_i64[0]);
  v409 = v1442;
  v410 = (void **)&v1435;
  v1442 = v1362;
  v411 = v1443;
  LOBYTE(v1362) = v409;
  v1443 = v1363;
  v1363 = v411;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v410 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v410 != &v1429 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v412 = _mm_load_si128(&v1320);
  v1430 = 0;
  v1429 = ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_call_idc_func;
  v1431 = v412;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1431.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1431.m128i_i64[0])(&v1429, &v1429, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1436);
  return v1446 - __readfsqword(0x28u);
}

