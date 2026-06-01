unsigned __int64 __fastcall ida_mcp::tools::control_flow::register_tools(
        ida_mcp::tools::control_flow *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  const __m128i *v4; // rsi
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
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
  __int64 v27; // rax
  __int64 *v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128i v39; // xmm0
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  void **v43; // r13
  __int64 v44; // rdx
  __int64 *v45; // r13
  __m128i si128; // xmm2
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 *v50; // r13
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __m128i v61; // xmm0
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  char v68; // si
  void **v69; // r13
  __int64 v70; // rax
  __m128i v71; // xmm3
  __int64 v72; // rax
  char *v73; // rsi
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 *v76; // r13
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 *v82; // rsi
  char *v83; // rdi
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 *v88; // r13
  __int64 v89; // rdx
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
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rax
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
  __int64 *v123; // r13
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
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
  __int64 *v143; // r13
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __m128i v151; // xmm0
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  void **v158; // r13
  __int64 v159; // rax
  char *v160; // r13
  __int64 *v161; // r13
  __m128i v162; // xmm4
  __int64 v163; // rax
  char *v164; // rsi
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 *v168; // r13
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // rax
  __int64 *v174; // rsi
  char *v175; // rdi
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 *v178; // r13
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 *v195; // r13
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
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r9
  __int64 *v212; // r13
  __int64 v213; // rdx
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
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 *v232; // r13
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // r8
  __int64 v236; // r9
  __int64 v237; // rcx
  __int64 v238; // r8
  __int64 v239; // r9
  __m128i v240; // xmm0
  __int64 v241; // rcx
  __int64 v242; // r8
  __int64 v243; // r9
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  void **v247; // r13
  __int64 v248; // rax
  char *v249; // r13
  __int64 *v250; // r13
  __m128i v251; // xmm5
  __int64 v252; // rax
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // rax
  __int64 v256; // rcx
  __int64 v257; // r8
  __int64 v258; // r9
  __int64 *v259; // r13
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
  __int64 v279; // rcx
  __int64 v280; // r8
  __int64 v281; // r9
  __m128i v282; // xmm0
  __int64 v283; // rcx
  __int64 v284; // r8
  __int64 v285; // r9
  __int64 v286; // rcx
  __int64 v287; // r8
  __int64 v288; // r9
  char v289; // si
  void **v290; // r13
  __int64 v291; // rax
  __m128i v292; // xmm6
  __int64 v293; // rax
  __int64 v294; // rcx
  __int64 v295; // r8
  __int64 v296; // r9
  __int64 *v297; // r13
  __int64 v298; // rdx
  __int64 v299; // rcx
  __int64 v300; // r8
  __int64 v301; // r9
  __int64 v302; // rax
  __int64 v303; // rcx
  __int64 v304; // r8
  __int64 v305; // r9
  __int64 v306; // rax
  __int64 *v307; // r13
  __int64 v308; // rdx
  __int64 v309; // rcx
  __int64 v310; // r8
  __int64 v311; // r9
  __int64 v312; // rcx
  __int64 v313; // r8
  __int64 v314; // r9
  __int64 v315; // rcx
  __int64 v316; // r8
  __int64 v317; // r9
  __int64 v318; // rcx
  __int64 v319; // r8
  __int64 v320; // r9
  __int64 v321; // rcx
  __int64 v322; // r8
  __int64 v323; // r9
  __int64 v324; // rax
  __int64 *v325; // r13
  __int64 v326; // rdx
  __int64 v327; // rcx
  __int64 v328; // r8
  __int64 v329; // r9
  __int64 v330; // rcx
  __int64 v331; // r8
  __int64 v332; // r9
  __int64 v333; // rcx
  __int64 v334; // r8
  __int64 v335; // r9
  __int64 v336; // rcx
  __int64 v337; // r8
  __int64 v338; // r9
  __int64 v339; // rcx
  __int64 v340; // r8
  __int64 v341; // r9
  __int64 v342; // rcx
  __int64 v343; // r8
  __int64 v344; // r9
  __int64 *v345; // r13
  __int64 v346; // rdx
  __int64 v347; // rcx
  __int64 v348; // r8
  __int64 v349; // r9
  __int64 v350; // rcx
  __int64 v351; // r8
  __int64 v352; // r9
  __m128i v353; // xmm0
  __int64 v354; // rcx
  __int64 v355; // r8
  __int64 v356; // r9
  __int64 v357; // rcx
  __int64 v358; // r8
  __int64 v359; // r9
  char v360; // si
  void **v361; // rbp
  __int64 v362; // rax
  __m128i v363; // xmm7
  int v365; // [rsp+0h] [rbp-718h]
  int v366; // [rsp+0h] [rbp-718h]
  int v367; // [rsp+0h] [rbp-718h]
  int v368; // [rsp+0h] [rbp-718h]
  int v369; // [rsp+0h] [rbp-718h]
  int v370; // [rsp+0h] [rbp-718h]
  int v371; // [rsp+0h] [rbp-718h]
  __m128i *v372; // [rsp+0h] [rbp-718h]
  int v373; // [rsp+0h] [rbp-718h]
  int v374; // [rsp+0h] [rbp-718h]
  int v375; // [rsp+0h] [rbp-718h]
  int v376; // [rsp+0h] [rbp-718h]
  int v377; // [rsp+0h] [rbp-718h]
  int v378; // [rsp+0h] [rbp-718h]
  int v379; // [rsp+0h] [rbp-718h]
  int v380; // [rsp+0h] [rbp-718h]
  int v381; // [rsp+0h] [rbp-718h]
  int v382; // [rsp+0h] [rbp-718h]
  int v383; // [rsp+0h] [rbp-718h]
  int v384; // [rsp+0h] [rbp-718h]
  int v385; // [rsp+0h] [rbp-718h]
  int v386; // [rsp+0h] [rbp-718h]
  int v387; // [rsp+0h] [rbp-718h]
  int v388; // [rsp+0h] [rbp-718h]
  int v389; // [rsp+0h] [rbp-718h]
  _QWORD *v390; // [rsp+0h] [rbp-718h]
  __int64 v391; // [rsp+0h] [rbp-718h]
  int v392; // [rsp+0h] [rbp-718h]
  int v393; // [rsp+0h] [rbp-718h]
  int v394; // [rsp+0h] [rbp-718h]
  int v395; // [rsp+0h] [rbp-718h]
  int v396; // [rsp+0h] [rbp-718h]
  int v397; // [rsp+0h] [rbp-718h]
  int v398; // [rsp+0h] [rbp-718h]
  int v399; // [rsp+0h] [rbp-718h]
  int v400; // [rsp+0h] [rbp-718h]
  int v401; // [rsp+0h] [rbp-718h]
  int v402; // [rsp+0h] [rbp-718h]
  int v403; // [rsp+0h] [rbp-718h]
  int v404; // [rsp+0h] [rbp-718h]
  int v405; // [rsp+0h] [rbp-718h]
  int v406; // [rsp+0h] [rbp-718h]
  int v407; // [rsp+0h] [rbp-718h]
  int v408; // [rsp+0h] [rbp-718h]
  int v409; // [rsp+0h] [rbp-718h]
  int v410; // [rsp+0h] [rbp-718h]
  int v411; // [rsp+0h] [rbp-718h]
  int v412; // [rsp+0h] [rbp-718h]
  _QWORD *v413; // [rsp+0h] [rbp-718h]
  __int64 v414; // [rsp+0h] [rbp-718h]
  int v415; // [rsp+0h] [rbp-718h]
  int v416; // [rsp+0h] [rbp-718h]
  int v417; // [rsp+0h] [rbp-718h]
  int v418; // [rsp+0h] [rbp-718h]
  int v419; // [rsp+0h] [rbp-718h]
  int v420; // [rsp+0h] [rbp-718h]
  int v421; // [rsp+0h] [rbp-718h]
  int v422; // [rsp+0h] [rbp-718h]
  _QWORD *v423; // [rsp+0h] [rbp-718h]
  int v424; // [rsp+0h] [rbp-718h]
  int v425; // [rsp+0h] [rbp-718h]
  int v426; // [rsp+0h] [rbp-718h]
  int v427; // [rsp+0h] [rbp-718h]
  int v428; // [rsp+0h] [rbp-718h]
  int v429; // [rsp+0h] [rbp-718h]
  int v430; // [rsp+0h] [rbp-718h]
  int v431; // [rsp+0h] [rbp-718h]
  int v432; // [rsp+0h] [rbp-718h]
  int v433; // [rsp+0h] [rbp-718h]
  int v434; // [rsp+0h] [rbp-718h]
  int v435; // [rsp+0h] [rbp-718h]
  int v436; // [rsp+0h] [rbp-718h]
  int v437; // [rsp+0h] [rbp-718h]
  int v438; // [rsp+0h] [rbp-718h]
  int v439; // [rsp+0h] [rbp-718h]
  int v440; // [rsp+0h] [rbp-718h]
  _QWORD *v441; // [rsp+0h] [rbp-718h]
  int v442; // [rsp+0h] [rbp-718h]
  int v443; // [rsp+0h] [rbp-718h]
  int v444; // [rsp+0h] [rbp-718h]
  int v445; // [rsp+0h] [rbp-718h]
  int v446; // [rsp+0h] [rbp-718h]
  int v447; // [rsp+0h] [rbp-718h]
  int v448; // [rsp+0h] [rbp-718h]
  int v449; // [rsp+0h] [rbp-718h]
  int v450; // [rsp+0h] [rbp-718h]
  int v451; // [rsp+0h] [rbp-718h]
  int v452; // [rsp+8h] [rbp-710h]
  int v453; // [rsp+8h] [rbp-710h]
  const __m128i *v454; // [rsp+8h] [rbp-710h]
  int v455; // [rsp+8h] [rbp-710h]
  __int64 v456; // [rsp+8h] [rbp-710h]
  int v457; // [rsp+8h] [rbp-710h]
  __int64 v458; // [rsp+8h] [rbp-710h]
  int v459; // [rsp+8h] [rbp-710h]
  __int64 v460; // [rsp+8h] [rbp-710h]
  __int64 v461; // [rsp+8h] [rbp-710h]
  __int64 v462; // [rsp+8h] [rbp-710h]
  __int64 v463; // [rsp+8h] [rbp-710h]
  __int64 v464; // [rsp+8h] [rbp-710h]
  int v465; // [rsp+8h] [rbp-710h]
  __int64 v466; // [rsp+8h] [rbp-710h]
  int v467; // [rsp+8h] [rbp-710h]
  __int64 v468; // [rsp+8h] [rbp-710h]
  __int64 v469; // [rsp+8h] [rbp-710h]
  __int64 v470; // [rsp+8h] [rbp-710h]
  __int64 v471; // [rsp+8h] [rbp-710h]
  int v472; // [rsp+8h] [rbp-710h]
  __int64 v473; // [rsp+8h] [rbp-710h]
  __int64 v474; // [rsp+8h] [rbp-710h]
  __int64 v475; // [rsp+8h] [rbp-710h]
  __int64 v476; // [rsp+8h] [rbp-710h]
  int v477; // [rsp+8h] [rbp-710h]
  __int64 v478; // [rsp+8h] [rbp-710h]
  __int64 v479; // [rsp+8h] [rbp-710h]
  __int64 v480; // [rsp+8h] [rbp-710h]
  __int64 v481; // [rsp+8h] [rbp-710h]
  __int64 v482; // [rsp+8h] [rbp-710h]
  int v483; // [rsp+8h] [rbp-710h]
  int v484; // [rsp+8h] [rbp-710h]
  __int64 v485; // [rsp+8h] [rbp-710h]
  __int64 v486; // [rsp+8h] [rbp-710h]
  __int64 v487; // [rsp+8h] [rbp-710h]
  int v488; // [rsp+8h] [rbp-710h]
  __int64 v489; // [rsp+8h] [rbp-710h]
  int v490; // [rsp+8h] [rbp-710h]
  __int64 v491; // [rsp+8h] [rbp-710h]
  __int64 v492; // [rsp+8h] [rbp-710h]
  __int64 v493; // [rsp+8h] [rbp-710h]
  __int64 v494; // [rsp+8h] [rbp-710h]
  int v495; // [rsp+8h] [rbp-710h]
  __int64 v496; // [rsp+8h] [rbp-710h]
  __int64 v497; // [rsp+8h] [rbp-710h]
  __int64 v498; // [rsp+8h] [rbp-710h]
  __int64 v499; // [rsp+8h] [rbp-710h]
  int v500; // [rsp+8h] [rbp-710h]
  __int64 v501; // [rsp+8h] [rbp-710h]
  __int64 v502; // [rsp+8h] [rbp-710h]
  __int64 v503; // [rsp+8h] [rbp-710h]
  __int64 v504; // [rsp+8h] [rbp-710h]
  __int64 v505; // [rsp+8h] [rbp-710h]
  int v506; // [rsp+8h] [rbp-710h]
  int v507; // [rsp+8h] [rbp-710h]
  __int64 v508; // [rsp+8h] [rbp-710h]
  __int64 v509; // [rsp+8h] [rbp-710h]
  __int64 v510; // [rsp+8h] [rbp-710h]
  __int64 v511; // [rsp+8h] [rbp-710h]
  int v512; // [rsp+8h] [rbp-710h]
  __int64 v513; // [rsp+8h] [rbp-710h]
  __int64 v514; // [rsp+8h] [rbp-710h]
  __int64 v515; // [rsp+8h] [rbp-710h]
  __int64 v516; // [rsp+8h] [rbp-710h]
  __int64 v517; // [rsp+8h] [rbp-710h]
  __int64 v518; // [rsp+8h] [rbp-710h]
  __int64 v519; // [rsp+8h] [rbp-710h]
  __int64 v520; // [rsp+8h] [rbp-710h]
  __int64 v521; // [rsp+8h] [rbp-710h]
  int v522; // [rsp+8h] [rbp-710h]
  _QWORD *v523; // [rsp+8h] [rbp-710h]
  int v524; // [rsp+8h] [rbp-710h]
  __int64 v525; // [rsp+8h] [rbp-710h]
  __int64 v526; // [rsp+8h] [rbp-710h]
  __int64 v527; // [rsp+8h] [rbp-710h]
  __int64 v528; // [rsp+8h] [rbp-710h]
  int v529; // [rsp+8h] [rbp-710h]
  __int64 v530; // [rsp+8h] [rbp-710h]
  __int64 v531; // [rsp+8h] [rbp-710h]
  __int64 v532; // [rsp+8h] [rbp-710h]
  __int64 v533; // [rsp+8h] [rbp-710h]
  __int64 v534; // [rsp+8h] [rbp-710h]
  int v535; // [rsp+8h] [rbp-710h]
  int v536; // [rsp+8h] [rbp-710h]
  __int64 v537; // [rsp+8h] [rbp-710h]
  __int64 v538; // [rsp+8h] [rbp-710h]
  __int64 v539; // [rsp+10h] [rbp-708h]
  __int64 v540; // [rsp+10h] [rbp-708h]
  __int64 v541; // [rsp+10h] [rbp-708h]
  __int64 v542; // [rsp+10h] [rbp-708h]
  __int64 v543; // [rsp+10h] [rbp-708h]
  int v544; // [rsp+10h] [rbp-708h]
  int v545; // [rsp+10h] [rbp-708h]
  _QWORD *v546; // [rsp+10h] [rbp-708h]
  const __m128i *v547; // [rsp+10h] [rbp-708h]
  int v548; // [rsp+10h] [rbp-708h]
  int v549; // [rsp+10h] [rbp-708h]
  int v550; // [rsp+10h] [rbp-708h]
  int v551; // [rsp+10h] [rbp-708h]
  __int64 v552; // [rsp+10h] [rbp-708h]
  int v553; // [rsp+10h] [rbp-708h]
  __int64 v554; // [rsp+10h] [rbp-708h]
  int v555; // [rsp+10h] [rbp-708h]
  int v556; // [rsp+10h] [rbp-708h]
  int v557; // [rsp+10h] [rbp-708h]
  int v558; // [rsp+10h] [rbp-708h]
  __int64 v559; // [rsp+10h] [rbp-708h]
  int v560; // [rsp+10h] [rbp-708h]
  int v561; // [rsp+10h] [rbp-708h]
  int v562; // [rsp+10h] [rbp-708h]
  int v563; // [rsp+10h] [rbp-708h]
  __int64 v564; // [rsp+10h] [rbp-708h]
  int v565; // [rsp+10h] [rbp-708h]
  int v566; // [rsp+10h] [rbp-708h]
  int v567; // [rsp+10h] [rbp-708h]
  int v568; // [rsp+10h] [rbp-708h]
  __int64 v569; // [rsp+10h] [rbp-708h]
  __int64 v570; // [rsp+10h] [rbp-708h]
  int v571; // [rsp+10h] [rbp-708h]
  int v572; // [rsp+10h] [rbp-708h]
  int v573; // [rsp+10h] [rbp-708h]
  int v574; // [rsp+10h] [rbp-708h]
  __int64 v575; // [rsp+10h] [rbp-708h]
  int v576; // [rsp+10h] [rbp-708h]
  __int64 v577; // [rsp+10h] [rbp-708h]
  int v578; // [rsp+10h] [rbp-708h]
  int v579; // [rsp+10h] [rbp-708h]
  int v580; // [rsp+10h] [rbp-708h]
  int v581; // [rsp+10h] [rbp-708h]
  __int64 v582; // [rsp+10h] [rbp-708h]
  int v583; // [rsp+10h] [rbp-708h]
  int v584; // [rsp+10h] [rbp-708h]
  int v585; // [rsp+10h] [rbp-708h]
  int v586; // [rsp+10h] [rbp-708h]
  __int64 v587; // [rsp+10h] [rbp-708h]
  int v588; // [rsp+10h] [rbp-708h]
  int v589; // [rsp+10h] [rbp-708h]
  int v590; // [rsp+10h] [rbp-708h]
  int v591; // [rsp+10h] [rbp-708h]
  __int64 v592; // [rsp+10h] [rbp-708h]
  __int64 v593; // [rsp+10h] [rbp-708h]
  int v594; // [rsp+10h] [rbp-708h]
  int v595; // [rsp+10h] [rbp-708h]
  int v596; // [rsp+10h] [rbp-708h]
  int v597; // [rsp+10h] [rbp-708h]
  _QWORD *v598; // [rsp+10h] [rbp-708h]
  __int64 v599; // [rsp+10h] [rbp-708h]
  int v600; // [rsp+10h] [rbp-708h]
  __int64 v601; // [rsp+10h] [rbp-708h]
  int v602; // [rsp+10h] [rbp-708h]
  int v603; // [rsp+10h] [rbp-708h]
  int v604; // [rsp+10h] [rbp-708h]
  int v605; // [rsp+10h] [rbp-708h]
  int v606; // [rsp+10h] [rbp-708h]
  int v607; // [rsp+10h] [rbp-708h]
  int v608; // [rsp+10h] [rbp-708h]
  __int64 v609; // [rsp+10h] [rbp-708h]
  int v610; // [rsp+10h] [rbp-708h]
  __int64 v611; // [rsp+10h] [rbp-708h]
  int v612; // [rsp+10h] [rbp-708h]
  int v613; // [rsp+10h] [rbp-708h]
  int v614; // [rsp+10h] [rbp-708h]
  int v615; // [rsp+10h] [rbp-708h]
  __int64 v616; // [rsp+10h] [rbp-708h]
  int v617; // [rsp+10h] [rbp-708h]
  int v618; // [rsp+10h] [rbp-708h]
  __int64 v619; // [rsp+10h] [rbp-708h]
  int v620; // [rsp+10h] [rbp-708h]
  int v621; // [rsp+10h] [rbp-708h]
  __int64 v622; // [rsp+10h] [rbp-708h]
  int v623; // [rsp+10h] [rbp-708h]
  int v624; // [rsp+10h] [rbp-708h]
  int v625; // [rsp+10h] [rbp-708h]
  int v626; // [rsp+18h] [rbp-700h]
  int v627; // [rsp+18h] [rbp-700h]
  const __m128i *v628; // [rsp+18h] [rbp-700h]
  int v629; // [rsp+18h] [rbp-700h]
  int v630; // [rsp+18h] [rbp-700h]
  int v631; // [rsp+18h] [rbp-700h]
  int v632; // [rsp+18h] [rbp-700h]
  int v633; // [rsp+18h] [rbp-700h]
  int v634; // [rsp+18h] [rbp-700h]
  int v635; // [rsp+18h] [rbp-700h]
  int v636; // [rsp+18h] [rbp-700h]
  int v637; // [rsp+18h] [rbp-700h]
  int v638; // [rsp+18h] [rbp-700h]
  int v639; // [rsp+18h] [rbp-700h]
  int v640; // [rsp+18h] [rbp-700h]
  int v641; // [rsp+18h] [rbp-700h]
  int v642; // [rsp+18h] [rbp-700h]
  int v643; // [rsp+18h] [rbp-700h]
  __int64 v644; // [rsp+18h] [rbp-700h]
  int v645; // [rsp+18h] [rbp-700h]
  int v646; // [rsp+18h] [rbp-700h]
  int v647; // [rsp+18h] [rbp-700h]
  int v648; // [rsp+18h] [rbp-700h]
  int v649; // [rsp+18h] [rbp-700h]
  int v650; // [rsp+18h] [rbp-700h]
  int v651; // [rsp+18h] [rbp-700h]
  int v652; // [rsp+18h] [rbp-700h]
  int v653; // [rsp+18h] [rbp-700h]
  int v654; // [rsp+18h] [rbp-700h]
  int v655; // [rsp+18h] [rbp-700h]
  int v656; // [rsp+18h] [rbp-700h]
  int v657; // [rsp+18h] [rbp-700h]
  int v658; // [rsp+18h] [rbp-700h]
  int v659; // [rsp+18h] [rbp-700h]
  int v660; // [rsp+18h] [rbp-700h]
  int v661; // [rsp+18h] [rbp-700h]
  __int64 v662; // [rsp+18h] [rbp-700h]
  int v663; // [rsp+18h] [rbp-700h]
  int v664; // [rsp+18h] [rbp-700h]
  int v665; // [rsp+18h] [rbp-700h]
  int v666; // [rsp+18h] [rbp-700h]
  int v667; // [rsp+18h] [rbp-700h]
  int v668; // [rsp+18h] [rbp-700h]
  int v669; // [rsp+18h] [rbp-700h]
  _QWORD *v670; // [rsp+18h] [rbp-700h]
  int v671; // [rsp+18h] [rbp-700h]
  int v672; // [rsp+18h] [rbp-700h]
  int v673; // [rsp+18h] [rbp-700h]
  int v674; // [rsp+18h] [rbp-700h]
  int v675; // [rsp+18h] [rbp-700h]
  int v676; // [rsp+18h] [rbp-700h]
  int v677; // [rsp+18h] [rbp-700h]
  int v678; // [rsp+18h] [rbp-700h]
  int v679; // [rsp+18h] [rbp-700h]
  int v680; // [rsp+18h] [rbp-700h]
  int v681; // [rsp+18h] [rbp-700h]
  int v682; // [rsp+18h] [rbp-700h]
  _QWORD *v683; // [rsp+18h] [rbp-700h]
  int v684; // [rsp+18h] [rbp-700h]
  __int64 v685; // [rsp+18h] [rbp-700h]
  int v686; // [rsp+18h] [rbp-700h]
  int v687; // [rsp+18h] [rbp-700h]
  int v688; // [rsp+18h] [rbp-700h]
  int v689; // [rsp+18h] [rbp-700h]
  int v690; // [rsp+18h] [rbp-700h]
  int v691; // [rsp+18h] [rbp-700h]
  int v692; // [rsp+20h] [rbp-6F8h]
  int v693; // [rsp+20h] [rbp-6F8h]
  _QWORD *v694; // [rsp+20h] [rbp-6F8h]
  int v695; // [rsp+20h] [rbp-6F8h]
  int v696; // [rsp+20h] [rbp-6F8h]
  int v697; // [rsp+20h] [rbp-6F8h]
  int v698; // [rsp+20h] [rbp-6F8h]
  int v699; // [rsp+20h] [rbp-6F8h]
  int v700; // [rsp+20h] [rbp-6F8h]
  int v701; // [rsp+20h] [rbp-6F8h]
  int v702; // [rsp+20h] [rbp-6F8h]
  int v703; // [rsp+20h] [rbp-6F8h]
  int v704; // [rsp+20h] [rbp-6F8h]
  int v705; // [rsp+20h] [rbp-6F8h]
  int v706; // [rsp+20h] [rbp-6F8h]
  _QWORD *v707; // [rsp+20h] [rbp-6F8h]
  int v708; // [rsp+20h] [rbp-6F8h]
  int v709; // [rsp+20h] [rbp-6F8h]
  int v710; // [rsp+20h] [rbp-6F8h]
  int v711; // [rsp+20h] [rbp-6F8h]
  int v712; // [rsp+20h] [rbp-6F8h]
  int v713; // [rsp+20h] [rbp-6F8h]
  int v714; // [rsp+20h] [rbp-6F8h]
  int v715; // [rsp+20h] [rbp-6F8h]
  int v716; // [rsp+20h] [rbp-6F8h]
  int v717; // [rsp+20h] [rbp-6F8h]
  int v718; // [rsp+20h] [rbp-6F8h]
  int v719; // [rsp+20h] [rbp-6F8h]
  int v720; // [rsp+20h] [rbp-6F8h]
  int v721; // [rsp+20h] [rbp-6F8h]
  int v722; // [rsp+20h] [rbp-6F8h]
  int v723; // [rsp+20h] [rbp-6F8h]
  int v724; // [rsp+20h] [rbp-6F8h]
  _QWORD *v725; // [rsp+20h] [rbp-6F8h]
  int v726; // [rsp+20h] [rbp-6F8h]
  int v727; // [rsp+20h] [rbp-6F8h]
  int v728; // [rsp+20h] [rbp-6F8h]
  int v729; // [rsp+20h] [rbp-6F8h]
  int v730; // [rsp+20h] [rbp-6F8h]
  int v731; // [rsp+20h] [rbp-6F8h]
  int v732; // [rsp+20h] [rbp-6F8h]
  int v733; // [rsp+20h] [rbp-6F8h]
  int v734; // [rsp+20h] [rbp-6F8h]
  int v735; // [rsp+20h] [rbp-6F8h]
  int v736; // [rsp+20h] [rbp-6F8h]
  int v737; // [rsp+20h] [rbp-6F8h]
  _QWORD *v738; // [rsp+20h] [rbp-6F8h]
  __int64 v739; // [rsp+20h] [rbp-6F8h]
  int v740; // [rsp+20h] [rbp-6F8h]
  int v741; // [rsp+20h] [rbp-6F8h]
  int v742; // [rsp+20h] [rbp-6F8h]
  int v743; // [rsp+20h] [rbp-6F8h]
  int v744; // [rsp+20h] [rbp-6F8h]
  int v745; // [rsp+20h] [rbp-6F8h]
  int v746; // [rsp+20h] [rbp-6F8h]
  int v747; // [rsp+20h] [rbp-6F8h]
  __int64 v748; // [rsp+20h] [rbp-6F8h]
  int v749; // [rsp+20h] [rbp-6F8h]
  int v750; // [rsp+20h] [rbp-6F8h]
  int v751; // [rsp+20h] [rbp-6F8h]
  int v752; // [rsp+20h] [rbp-6F8h]
  int v753; // [rsp+20h] [rbp-6F8h]
  int v754; // [rsp+20h] [rbp-6F8h]
  int v755; // [rsp+20h] [rbp-6F8h]
  int v756; // [rsp+20h] [rbp-6F8h]
  int v757; // [rsp+20h] [rbp-6F8h]
  int v758; // [rsp+28h] [rbp-6F0h]
  int v759; // [rsp+28h] [rbp-6F0h]
  __m128i *v760; // [rsp+28h] [rbp-6F0h]
  int v761; // [rsp+28h] [rbp-6F0h]
  int v762; // [rsp+28h] [rbp-6F0h]
  int v763; // [rsp+28h] [rbp-6F0h]
  int v764; // [rsp+28h] [rbp-6F0h]
  int v765; // [rsp+28h] [rbp-6F0h]
  int v766; // [rsp+28h] [rbp-6F0h]
  int v767; // [rsp+28h] [rbp-6F0h]
  int v768; // [rsp+28h] [rbp-6F0h]
  int v769; // [rsp+28h] [rbp-6F0h]
  int v770; // [rsp+28h] [rbp-6F0h]
  int v771; // [rsp+28h] [rbp-6F0h]
  int v772; // [rsp+28h] [rbp-6F0h]
  _QWORD *v773; // [rsp+28h] [rbp-6F0h]
  int v774; // [rsp+28h] [rbp-6F0h]
  __int64 v775; // [rsp+28h] [rbp-6F0h]
  int v776; // [rsp+28h] [rbp-6F0h]
  int v777; // [rsp+28h] [rbp-6F0h]
  int v778; // [rsp+28h] [rbp-6F0h]
  int v779; // [rsp+28h] [rbp-6F0h]
  int v780; // [rsp+28h] [rbp-6F0h]
  int v781; // [rsp+28h] [rbp-6F0h]
  int v782; // [rsp+28h] [rbp-6F0h]
  int v783; // [rsp+28h] [rbp-6F0h]
  int v784; // [rsp+28h] [rbp-6F0h]
  int v785; // [rsp+28h] [rbp-6F0h]
  int v786; // [rsp+28h] [rbp-6F0h]
  int v787; // [rsp+28h] [rbp-6F0h]
  int v788; // [rsp+28h] [rbp-6F0h]
  int v789; // [rsp+28h] [rbp-6F0h]
  int v790; // [rsp+28h] [rbp-6F0h]
  _QWORD *v791; // [rsp+28h] [rbp-6F0h]
  int v792; // [rsp+28h] [rbp-6F0h]
  __int64 v793; // [rsp+28h] [rbp-6F0h]
  int v794; // [rsp+28h] [rbp-6F0h]
  int v795; // [rsp+28h] [rbp-6F0h]
  int v796; // [rsp+28h] [rbp-6F0h]
  int v797; // [rsp+28h] [rbp-6F0h]
  int v798; // [rsp+28h] [rbp-6F0h]
  int v799; // [rsp+28h] [rbp-6F0h]
  int v800; // [rsp+28h] [rbp-6F0h]
  _QWORD *v801; // [rsp+28h] [rbp-6F0h]
  int v802; // [rsp+28h] [rbp-6F0h]
  int v803; // [rsp+28h] [rbp-6F0h]
  int v804; // [rsp+28h] [rbp-6F0h]
  int v805; // [rsp+28h] [rbp-6F0h]
  int v806; // [rsp+28h] [rbp-6F0h]
  int v807; // [rsp+28h] [rbp-6F0h]
  int v808; // [rsp+28h] [rbp-6F0h]
  int v809; // [rsp+28h] [rbp-6F0h]
  int v810; // [rsp+28h] [rbp-6F0h]
  int v811; // [rsp+28h] [rbp-6F0h]
  int v812; // [rsp+28h] [rbp-6F0h]
  int v813; // [rsp+28h] [rbp-6F0h]
  int v814; // [rsp+28h] [rbp-6F0h]
  int v815; // [rsp+28h] [rbp-6F0h]
  __int64 v816; // [rsp+28h] [rbp-6F0h]
  int v817; // [rsp+28h] [rbp-6F0h]
  int v818; // [rsp+28h] [rbp-6F0h]
  int v819; // [rsp+28h] [rbp-6F0h]
  int v820; // [rsp+28h] [rbp-6F0h]
  int v821; // [rsp+28h] [rbp-6F0h]
  int v822; // [rsp+28h] [rbp-6F0h]
  int v823; // [rsp+28h] [rbp-6F0h]
  __int64 v824; // [rsp+30h] [rbp-6E8h]
  __int64 v825; // [rsp+30h] [rbp-6E8h]
  __int64 v826; // [rsp+30h] [rbp-6E8h]
  __int64 v827; // [rsp+30h] [rbp-6E8h]
  __int64 v828; // [rsp+30h] [rbp-6E8h]
  __int64 v829; // [rsp+30h] [rbp-6E8h]
  __int64 v830; // [rsp+30h] [rbp-6E8h]
  __int64 v831; // [rsp+30h] [rbp-6E8h]
  __int64 v832; // [rsp+30h] [rbp-6E8h]
  __int64 v833; // [rsp+30h] [rbp-6E8h]
  __int64 v834; // [rsp+30h] [rbp-6E8h]
  __int64 v835; // [rsp+30h] [rbp-6E8h]
  __int64 v836; // [rsp+30h] [rbp-6E8h]
  __int64 v837; // [rsp+30h] [rbp-6E8h]
  __int64 v838; // [rsp+30h] [rbp-6E8h]
  __int64 v839; // [rsp+30h] [rbp-6E8h]
  __int64 v840; // [rsp+30h] [rbp-6E8h]
  __int64 v841; // [rsp+30h] [rbp-6E8h]
  __int64 v842; // [rsp+30h] [rbp-6E8h]
  __int64 v843; // [rsp+30h] [rbp-6E8h]
  __int64 v844; // [rsp+30h] [rbp-6E8h]
  __int64 v845; // [rsp+30h] [rbp-6E8h]
  __int64 v846; // [rsp+30h] [rbp-6E8h]
  __int64 v847; // [rsp+30h] [rbp-6E8h]
  __int64 v848; // [rsp+30h] [rbp-6E8h]
  __int64 v849; // [rsp+30h] [rbp-6E8h]
  __int64 v850; // [rsp+30h] [rbp-6E8h]
  __int64 v851; // [rsp+30h] [rbp-6E8h]
  __int64 v852; // [rsp+30h] [rbp-6E8h]
  __int64 v853; // [rsp+30h] [rbp-6E8h]
  __int64 v854; // [rsp+30h] [rbp-6E8h]
  __int64 v855; // [rsp+30h] [rbp-6E8h]
  __int64 v856; // [rsp+30h] [rbp-6E8h]
  __int64 v857; // [rsp+30h] [rbp-6E8h]
  __int64 v858; // [rsp+30h] [rbp-6E8h]
  __int64 v859; // [rsp+30h] [rbp-6E8h]
  __int64 v860; // [rsp+30h] [rbp-6E8h]
  __int64 v861; // [rsp+30h] [rbp-6E8h]
  __int64 v862; // [rsp+30h] [rbp-6E8h]
  __int64 v863; // [rsp+30h] [rbp-6E8h]
  __int64 v864; // [rsp+30h] [rbp-6E8h]
  __int64 v865; // [rsp+30h] [rbp-6E8h]
  __int64 v866; // [rsp+30h] [rbp-6E8h]
  __int64 v867; // [rsp+30h] [rbp-6E8h]
  __int64 v868; // [rsp+30h] [rbp-6E8h]
  __int64 v869; // [rsp+30h] [rbp-6E8h]
  __int64 v870; // [rsp+30h] [rbp-6E8h]
  __int64 v871; // [rsp+30h] [rbp-6E8h]
  __int64 v872; // [rsp+30h] [rbp-6E8h]
  __int64 v873; // [rsp+30h] [rbp-6E8h]
  __int64 v874; // [rsp+30h] [rbp-6E8h]
  __int64 v875; // [rsp+30h] [rbp-6E8h]
  __int64 v876; // [rsp+30h] [rbp-6E8h]
  __int64 v877; // [rsp+30h] [rbp-6E8h]
  __int64 v878; // [rsp+30h] [rbp-6E8h]
  __int64 v879; // [rsp+30h] [rbp-6E8h]
  __int64 v880; // [rsp+30h] [rbp-6E8h]
  __int64 v881; // [rsp+30h] [rbp-6E8h]
  __int64 v882; // [rsp+30h] [rbp-6E8h]
  __int64 v883; // [rsp+30h] [rbp-6E8h]
  __int64 v884; // [rsp+30h] [rbp-6E8h]
  __int64 v885; // [rsp+30h] [rbp-6E8h]
  __int64 v886; // [rsp+30h] [rbp-6E8h]
  __int64 v887; // [rsp+30h] [rbp-6E8h]
  __int64 v888; // [rsp+30h] [rbp-6E8h]
  __int64 v889; // [rsp+30h] [rbp-6E8h]
  int v890; // [rsp+38h] [rbp-6E0h]
  int v891; // [rsp+38h] [rbp-6E0h]
  int v892; // [rsp+38h] [rbp-6E0h]
  int v893; // [rsp+38h] [rbp-6E0h]
  int v894; // [rsp+38h] [rbp-6E0h]
  int v895; // [rsp+38h] [rbp-6E0h]
  int v896; // [rsp+38h] [rbp-6E0h]
  int v897; // [rsp+38h] [rbp-6E0h]
  int v898; // [rsp+38h] [rbp-6E0h]
  int v899; // [rsp+38h] [rbp-6E0h]
  int v900; // [rsp+38h] [rbp-6E0h]
  int v901; // [rsp+38h] [rbp-6E0h]
  int v902; // [rsp+38h] [rbp-6E0h]
  int v903; // [rsp+38h] [rbp-6E0h]
  int v904; // [rsp+38h] [rbp-6E0h]
  int v905; // [rsp+38h] [rbp-6E0h]
  int v906; // [rsp+38h] [rbp-6E0h]
  int v907; // [rsp+38h] [rbp-6E0h]
  int v908; // [rsp+38h] [rbp-6E0h]
  int v909; // [rsp+38h] [rbp-6E0h]
  int v910; // [rsp+38h] [rbp-6E0h]
  int v911; // [rsp+38h] [rbp-6E0h]
  int v912; // [rsp+38h] [rbp-6E0h]
  int v913; // [rsp+38h] [rbp-6E0h]
  int v914; // [rsp+38h] [rbp-6E0h]
  int v915; // [rsp+38h] [rbp-6E0h]
  int v916; // [rsp+38h] [rbp-6E0h]
  int v917; // [rsp+38h] [rbp-6E0h]
  int v918; // [rsp+38h] [rbp-6E0h]
  int v919; // [rsp+38h] [rbp-6E0h]
  int v920; // [rsp+38h] [rbp-6E0h]
  int v921; // [rsp+38h] [rbp-6E0h]
  int v922; // [rsp+38h] [rbp-6E0h]
  int v923; // [rsp+38h] [rbp-6E0h]
  int v924; // [rsp+38h] [rbp-6E0h]
  int v925; // [rsp+38h] [rbp-6E0h]
  int v926; // [rsp+38h] [rbp-6E0h]
  int v927; // [rsp+38h] [rbp-6E0h]
  int v928; // [rsp+38h] [rbp-6E0h]
  int v929; // [rsp+38h] [rbp-6E0h]
  int v930; // [rsp+38h] [rbp-6E0h]
  int v931; // [rsp+38h] [rbp-6E0h]
  int v932; // [rsp+38h] [rbp-6E0h]
  int v933; // [rsp+38h] [rbp-6E0h]
  int v934; // [rsp+38h] [rbp-6E0h]
  int v935; // [rsp+38h] [rbp-6E0h]
  int v936; // [rsp+38h] [rbp-6E0h]
  int v937; // [rsp+38h] [rbp-6E0h]
  int v938; // [rsp+38h] [rbp-6E0h]
  int v939; // [rsp+38h] [rbp-6E0h]
  int v940; // [rsp+38h] [rbp-6E0h]
  int v941; // [rsp+38h] [rbp-6E0h]
  int v942; // [rsp+38h] [rbp-6E0h]
  int v943; // [rsp+38h] [rbp-6E0h]
  int v944; // [rsp+38h] [rbp-6E0h]
  int v945; // [rsp+38h] [rbp-6E0h]
  int v946; // [rsp+38h] [rbp-6E0h]
  int v947; // [rsp+38h] [rbp-6E0h]
  int v948; // [rsp+38h] [rbp-6E0h]
  int v949; // [rsp+38h] [rbp-6E0h]
  int v950; // [rsp+40h] [rbp-6D8h]
  int v951; // [rsp+40h] [rbp-6D8h]
  int v952; // [rsp+40h] [rbp-6D8h]
  int v953; // [rsp+40h] [rbp-6D8h]
  int v954; // [rsp+40h] [rbp-6D8h]
  int v955; // [rsp+40h] [rbp-6D8h]
  int v956; // [rsp+40h] [rbp-6D8h]
  int v957; // [rsp+40h] [rbp-6D8h]
  int v958; // [rsp+40h] [rbp-6D8h]
  _QWORD *v959; // [rsp+40h] [rbp-6D8h]
  int v960; // [rsp+40h] [rbp-6D8h]
  int v961; // [rsp+40h] [rbp-6D8h]
  int v962; // [rsp+40h] [rbp-6D8h]
  int v963; // [rsp+40h] [rbp-6D8h]
  int v964; // [rsp+40h] [rbp-6D8h]
  int v965; // [rsp+40h] [rbp-6D8h]
  int v966; // [rsp+40h] [rbp-6D8h]
  int v967; // [rsp+40h] [rbp-6D8h]
  int v968; // [rsp+40h] [rbp-6D8h]
  int v969; // [rsp+40h] [rbp-6D8h]
  int v970; // [rsp+40h] [rbp-6D8h]
  int v971; // [rsp+40h] [rbp-6D8h]
  int v972; // [rsp+40h] [rbp-6D8h]
  int v973; // [rsp+40h] [rbp-6D8h]
  int v974; // [rsp+40h] [rbp-6D8h]
  int v975; // [rsp+40h] [rbp-6D8h]
  _QWORD *v976; // [rsp+40h] [rbp-6D8h]
  int v977; // [rsp+40h] [rbp-6D8h]
  int v978; // [rsp+40h] [rbp-6D8h]
  int v979; // [rsp+40h] [rbp-6D8h]
  int v980; // [rsp+40h] [rbp-6D8h]
  int v981; // [rsp+40h] [rbp-6D8h]
  int v982; // [rsp+40h] [rbp-6D8h]
  int v983; // [rsp+40h] [rbp-6D8h]
  int v984; // [rsp+40h] [rbp-6D8h]
  int v985; // [rsp+40h] [rbp-6D8h]
  int v986; // [rsp+40h] [rbp-6D8h]
  int v987; // [rsp+40h] [rbp-6D8h]
  int v988; // [rsp+40h] [rbp-6D8h]
  int v989; // [rsp+40h] [rbp-6D8h]
  int v990; // [rsp+40h] [rbp-6D8h]
  int v991; // [rsp+40h] [rbp-6D8h]
  int v992; // [rsp+40h] [rbp-6D8h]
  int v993; // [rsp+40h] [rbp-6D8h]
  int v994; // [rsp+40h] [rbp-6D8h]
  int v995; // [rsp+40h] [rbp-6D8h]
  int v996; // [rsp+40h] [rbp-6D8h]
  _QWORD *v997; // [rsp+40h] [rbp-6D8h]
  int v998; // [rsp+40h] [rbp-6D8h]
  int v999; // [rsp+40h] [rbp-6D8h]
  int v1000; // [rsp+40h] [rbp-6D8h]
  int v1001; // [rsp+40h] [rbp-6D8h]
  int v1002; // [rsp+40h] [rbp-6D8h]
  int v1003; // [rsp+40h] [rbp-6D8h]
  int v1004; // [rsp+40h] [rbp-6D8h]
  int v1005; // [rsp+40h] [rbp-6D8h]
  int v1006; // [rsp+40h] [rbp-6D8h]
  int v1007; // [rsp+40h] [rbp-6D8h]
  int v1008; // [rsp+40h] [rbp-6D8h]
  int v1009; // [rsp+40h] [rbp-6D8h]
  int v1010; // [rsp+48h] [rbp-6D0h]
  int v1011; // [rsp+48h] [rbp-6D0h]
  int v1012; // [rsp+48h] [rbp-6D0h]
  int v1013; // [rsp+48h] [rbp-6D0h]
  int v1014; // [rsp+48h] [rbp-6D0h]
  int v1015; // [rsp+48h] [rbp-6D0h]
  int v1016; // [rsp+48h] [rbp-6D0h]
  int v1017; // [rsp+48h] [rbp-6D0h]
  int v1018; // [rsp+48h] [rbp-6D0h]
  int v1019; // [rsp+48h] [rbp-6D0h]
  int v1020; // [rsp+48h] [rbp-6D0h]
  int v1021; // [rsp+48h] [rbp-6D0h]
  int v1022; // [rsp+48h] [rbp-6D0h]
  int v1023; // [rsp+48h] [rbp-6D0h]
  int v1024; // [rsp+48h] [rbp-6D0h]
  int v1025; // [rsp+48h] [rbp-6D0h]
  int v1026; // [rsp+48h] [rbp-6D0h]
  int v1027; // [rsp+48h] [rbp-6D0h]
  int v1028; // [rsp+48h] [rbp-6D0h]
  int v1029; // [rsp+48h] [rbp-6D0h]
  int v1030; // [rsp+48h] [rbp-6D0h]
  int v1031; // [rsp+48h] [rbp-6D0h]
  int v1032; // [rsp+48h] [rbp-6D0h]
  int v1033; // [rsp+48h] [rbp-6D0h]
  int v1034; // [rsp+48h] [rbp-6D0h]
  int v1035; // [rsp+48h] [rbp-6D0h]
  int v1036; // [rsp+48h] [rbp-6D0h]
  int v1037; // [rsp+48h] [rbp-6D0h]
  int v1038; // [rsp+48h] [rbp-6D0h]
  int v1039; // [rsp+48h] [rbp-6D0h]
  int v1040; // [rsp+48h] [rbp-6D0h]
  int v1041; // [rsp+48h] [rbp-6D0h]
  int v1042; // [rsp+48h] [rbp-6D0h]
  int v1043; // [rsp+48h] [rbp-6D0h]
  int v1044; // [rsp+48h] [rbp-6D0h]
  int v1045; // [rsp+48h] [rbp-6D0h]
  int v1046; // [rsp+48h] [rbp-6D0h]
  int v1047; // [rsp+48h] [rbp-6D0h]
  int v1048; // [rsp+48h] [rbp-6D0h]
  int v1049; // [rsp+48h] [rbp-6D0h]
  int v1050; // [rsp+48h] [rbp-6D0h]
  int v1051; // [rsp+48h] [rbp-6D0h]
  int v1052; // [rsp+48h] [rbp-6D0h]
  int v1053; // [rsp+48h] [rbp-6D0h]
  int v1054; // [rsp+48h] [rbp-6D0h]
  int v1055; // [rsp+48h] [rbp-6D0h]
  int v1056; // [rsp+48h] [rbp-6D0h]
  int v1057; // [rsp+48h] [rbp-6D0h]
  int v1058; // [rsp+48h] [rbp-6D0h]
  int v1059; // [rsp+48h] [rbp-6D0h]
  int v1060; // [rsp+48h] [rbp-6D0h]
  int v1061; // [rsp+48h] [rbp-6D0h]
  int v1062; // [rsp+48h] [rbp-6D0h]
  int v1063; // [rsp+48h] [rbp-6D0h]
  int v1064; // [rsp+48h] [rbp-6D0h]
  int v1065; // [rsp+48h] [rbp-6D0h]
  int v1066; // [rsp+48h] [rbp-6D0h]
  int v1067; // [rsp+48h] [rbp-6D0h]
  int v1068; // [rsp+48h] [rbp-6D0h]
  int v1069; // [rsp+48h] [rbp-6D0h]
  int v1070; // [rsp+50h] [rbp-6C8h]
  int v1071; // [rsp+50h] [rbp-6C8h]
  int v1072; // [rsp+50h] [rbp-6C8h]
  int v1073; // [rsp+50h] [rbp-6C8h]
  int v1074; // [rsp+50h] [rbp-6C8h]
  int v1075; // [rsp+50h] [rbp-6C8h]
  int v1076; // [rsp+50h] [rbp-6C8h]
  int v1077; // [rsp+50h] [rbp-6C8h]
  int v1078; // [rsp+50h] [rbp-6C8h]
  int v1079; // [rsp+50h] [rbp-6C8h]
  int v1080; // [rsp+50h] [rbp-6C8h]
  int v1081; // [rsp+50h] [rbp-6C8h]
  int v1082; // [rsp+50h] [rbp-6C8h]
  int v1083; // [rsp+50h] [rbp-6C8h]
  int v1084; // [rsp+50h] [rbp-6C8h]
  int v1085; // [rsp+50h] [rbp-6C8h]
  int v1086; // [rsp+50h] [rbp-6C8h]
  int v1087; // [rsp+50h] [rbp-6C8h]
  int v1088; // [rsp+50h] [rbp-6C8h]
  int v1089; // [rsp+50h] [rbp-6C8h]
  int v1090; // [rsp+50h] [rbp-6C8h]
  int v1091; // [rsp+50h] [rbp-6C8h]
  int v1092; // [rsp+50h] [rbp-6C8h]
  int v1093; // [rsp+50h] [rbp-6C8h]
  int v1094; // [rsp+50h] [rbp-6C8h]
  int v1095; // [rsp+50h] [rbp-6C8h]
  int v1096; // [rsp+50h] [rbp-6C8h]
  int v1097; // [rsp+50h] [rbp-6C8h]
  int v1098; // [rsp+50h] [rbp-6C8h]
  int v1099; // [rsp+50h] [rbp-6C8h]
  int v1100; // [rsp+50h] [rbp-6C8h]
  int v1101; // [rsp+50h] [rbp-6C8h]
  int v1102; // [rsp+50h] [rbp-6C8h]
  int v1103; // [rsp+50h] [rbp-6C8h]
  int v1104; // [rsp+50h] [rbp-6C8h]
  int v1105; // [rsp+50h] [rbp-6C8h]
  int v1106; // [rsp+50h] [rbp-6C8h]
  int v1107; // [rsp+50h] [rbp-6C8h]
  int v1108; // [rsp+50h] [rbp-6C8h]
  int v1109; // [rsp+50h] [rbp-6C8h]
  int v1110; // [rsp+50h] [rbp-6C8h]
  int v1111; // [rsp+50h] [rbp-6C8h]
  int v1112; // [rsp+50h] [rbp-6C8h]
  int v1113; // [rsp+50h] [rbp-6C8h]
  int v1114; // [rsp+50h] [rbp-6C8h]
  int v1115; // [rsp+50h] [rbp-6C8h]
  int v1116; // [rsp+50h] [rbp-6C8h]
  int v1117; // [rsp+50h] [rbp-6C8h]
  int v1118; // [rsp+50h] [rbp-6C8h]
  int v1119; // [rsp+50h] [rbp-6C8h]
  int v1120; // [rsp+50h] [rbp-6C8h]
  int v1121; // [rsp+50h] [rbp-6C8h]
  int v1122; // [rsp+50h] [rbp-6C8h]
  int v1123; // [rsp+50h] [rbp-6C8h]
  int v1124; // [rsp+50h] [rbp-6C8h]
  int v1125; // [rsp+50h] [rbp-6C8h]
  int v1126; // [rsp+50h] [rbp-6C8h]
  int v1127; // [rsp+50h] [rbp-6C8h]
  int v1128; // [rsp+50h] [rbp-6C8h]
  int v1129; // [rsp+50h] [rbp-6C8h]
  char v1130; // [rsp+58h] [rbp-6C0h]
  char v1131; // [rsp+58h] [rbp-6C0h]
  char v1132; // [rsp+58h] [rbp-6C0h]
  char v1133; // [rsp+58h] [rbp-6C0h]
  char v1134; // [rsp+58h] [rbp-6C0h]
  char v1135; // [rsp+58h] [rbp-6C0h]
  char v1136; // [rsp+58h] [rbp-6C0h]
  char v1137; // [rsp+58h] [rbp-6C0h]
  char v1138; // [rsp+58h] [rbp-6C0h]
  char v1139; // [rsp+58h] [rbp-6C0h]
  char v1140; // [rsp+58h] [rbp-6C0h]
  char v1141; // [rsp+58h] [rbp-6C0h]
  char v1142; // [rsp+58h] [rbp-6C0h]
  char v1143; // [rsp+58h] [rbp-6C0h]
  char v1144; // [rsp+58h] [rbp-6C0h]
  char v1145; // [rsp+58h] [rbp-6C0h]
  char v1146; // [rsp+58h] [rbp-6C0h]
  char v1147; // [rsp+58h] [rbp-6C0h]
  char v1148; // [rsp+58h] [rbp-6C0h]
  char v1149; // [rsp+58h] [rbp-6C0h]
  char v1150; // [rsp+58h] [rbp-6C0h]
  char v1151; // [rsp+58h] [rbp-6C0h]
  char v1152; // [rsp+58h] [rbp-6C0h]
  char v1153; // [rsp+58h] [rbp-6C0h]
  char v1154; // [rsp+58h] [rbp-6C0h]
  char v1155; // [rsp+58h] [rbp-6C0h]
  char v1156; // [rsp+58h] [rbp-6C0h]
  char v1157; // [rsp+58h] [rbp-6C0h]
  char v1158; // [rsp+58h] [rbp-6C0h]
  char v1159; // [rsp+58h] [rbp-6C0h]
  char v1160; // [rsp+58h] [rbp-6C0h]
  char v1161; // [rsp+58h] [rbp-6C0h]
  char v1162; // [rsp+58h] [rbp-6C0h]
  char v1163; // [rsp+58h] [rbp-6C0h]
  char v1164; // [rsp+58h] [rbp-6C0h]
  char v1165; // [rsp+58h] [rbp-6C0h]
  char v1166; // [rsp+58h] [rbp-6C0h]
  char v1167; // [rsp+58h] [rbp-6C0h]
  char v1168; // [rsp+58h] [rbp-6C0h]
  char v1169; // [rsp+58h] [rbp-6C0h]
  char v1170; // [rsp+58h] [rbp-6C0h]
  char v1171; // [rsp+58h] [rbp-6C0h]
  char v1172; // [rsp+58h] [rbp-6C0h]
  char v1173; // [rsp+58h] [rbp-6C0h]
  char v1174; // [rsp+58h] [rbp-6C0h]
  char v1175; // [rsp+58h] [rbp-6C0h]
  char v1176; // [rsp+58h] [rbp-6C0h]
  char v1177; // [rsp+58h] [rbp-6C0h]
  char v1178; // [rsp+58h] [rbp-6C0h]
  char v1179; // [rsp+58h] [rbp-6C0h]
  char v1180; // [rsp+58h] [rbp-6C0h]
  char v1181; // [rsp+58h] [rbp-6C0h]
  char v1182; // [rsp+58h] [rbp-6C0h]
  char v1183; // [rsp+58h] [rbp-6C0h]
  char v1184; // [rsp+58h] [rbp-6C0h]
  char v1185; // [rsp+58h] [rbp-6C0h]
  char v1186; // [rsp+58h] [rbp-6C0h]
  char v1187; // [rsp+58h] [rbp-6C0h]
  char v1188; // [rsp+58h] [rbp-6C0h]
  char v1189; // [rsp+58h] [rbp-6C0h]
  __int64 v1190; // [rsp+60h] [rbp-6B8h]
  __int64 v1191; // [rsp+60h] [rbp-6B8h]
  __int64 v1192; // [rsp+60h] [rbp-6B8h]
  __int64 v1193; // [rsp+60h] [rbp-6B8h]
  __int64 v1194; // [rsp+60h] [rbp-6B8h]
  __int64 v1195; // [rsp+60h] [rbp-6B8h]
  __int64 v1196; // [rsp+60h] [rbp-6B8h]
  __int64 v1197; // [rsp+60h] [rbp-6B8h]
  __int64 v1198; // [rsp+60h] [rbp-6B8h]
  __int64 v1199; // [rsp+60h] [rbp-6B8h]
  __int64 v1200; // [rsp+60h] [rbp-6B8h]
  __int64 v1201; // [rsp+60h] [rbp-6B8h]
  __int64 v1202; // [rsp+60h] [rbp-6B8h]
  __int64 v1203; // [rsp+60h] [rbp-6B8h]
  __int64 v1204; // [rsp+60h] [rbp-6B8h]
  __int64 v1205; // [rsp+60h] [rbp-6B8h]
  __int64 v1206; // [rsp+60h] [rbp-6B8h]
  __int64 v1207; // [rsp+60h] [rbp-6B8h]
  __int64 v1208; // [rsp+60h] [rbp-6B8h]
  __int64 v1209; // [rsp+60h] [rbp-6B8h]
  __int64 v1210; // [rsp+60h] [rbp-6B8h]
  __int64 v1211; // [rsp+60h] [rbp-6B8h]
  __int64 v1212; // [rsp+60h] [rbp-6B8h]
  __int64 v1213; // [rsp+60h] [rbp-6B8h]
  __int64 v1214; // [rsp+60h] [rbp-6B8h]
  __int64 v1215; // [rsp+60h] [rbp-6B8h]
  __int64 v1216; // [rsp+60h] [rbp-6B8h]
  _QWORD *v1217; // [rsp+60h] [rbp-6B8h]
  __int64 v1218; // [rsp+60h] [rbp-6B8h]
  __int64 v1219; // [rsp+60h] [rbp-6B8h]
  __int64 v1220; // [rsp+60h] [rbp-6B8h]
  __int64 v1221; // [rsp+60h] [rbp-6B8h]
  __int64 v1222; // [rsp+60h] [rbp-6B8h]
  __int64 v1223; // [rsp+60h] [rbp-6B8h]
  __int64 v1224; // [rsp+60h] [rbp-6B8h]
  __int64 v1225; // [rsp+60h] [rbp-6B8h]
  __int64 v1226; // [rsp+60h] [rbp-6B8h]
  __int64 v1227; // [rsp+60h] [rbp-6B8h]
  __int64 v1228; // [rsp+60h] [rbp-6B8h]
  __int64 v1229; // [rsp+60h] [rbp-6B8h]
  __int64 v1230; // [rsp+60h] [rbp-6B8h]
  __int64 v1231; // [rsp+60h] [rbp-6B8h]
  __int64 v1232; // [rsp+60h] [rbp-6B8h]
  __int64 v1233; // [rsp+60h] [rbp-6B8h]
  __int64 v1234; // [rsp+60h] [rbp-6B8h]
  __int64 v1235; // [rsp+60h] [rbp-6B8h]
  __int64 v1236; // [rsp+60h] [rbp-6B8h]
  __int64 v1237; // [rsp+60h] [rbp-6B8h]
  _QWORD *v1238; // [rsp+60h] [rbp-6B8h]
  __int64 v1239; // [rsp+60h] [rbp-6B8h]
  __int64 v1240; // [rsp+60h] [rbp-6B8h]
  __int64 v1241; // [rsp+60h] [rbp-6B8h]
  __int64 v1242; // [rsp+60h] [rbp-6B8h]
  __int64 v1243; // [rsp+60h] [rbp-6B8h]
  __int64 v1244; // [rsp+60h] [rbp-6B8h]
  __int64 v1245; // [rsp+60h] [rbp-6B8h]
  __int64 v1246; // [rsp+60h] [rbp-6B8h]
  __int64 v1247; // [rsp+60h] [rbp-6B8h]
  __int64 v1248; // [rsp+60h] [rbp-6B8h]
  __int64 v1249; // [rsp+60h] [rbp-6B8h]
  int v1250; // [rsp+68h] [rbp-6B0h]
  int v1251; // [rsp+68h] [rbp-6B0h]
  int v1252; // [rsp+68h] [rbp-6B0h]
  int v1253; // [rsp+68h] [rbp-6B0h]
  int v1254; // [rsp+68h] [rbp-6B0h]
  int v1255; // [rsp+68h] [rbp-6B0h]
  int v1256; // [rsp+68h] [rbp-6B0h]
  int v1257; // [rsp+68h] [rbp-6B0h]
  int v1258; // [rsp+68h] [rbp-6B0h]
  int v1259; // [rsp+68h] [rbp-6B0h]
  int v1260; // [rsp+68h] [rbp-6B0h]
  int v1261; // [rsp+68h] [rbp-6B0h]
  int v1262; // [rsp+68h] [rbp-6B0h]
  int v1263; // [rsp+68h] [rbp-6B0h]
  int v1264; // [rsp+68h] [rbp-6B0h]
  int v1265; // [rsp+68h] [rbp-6B0h]
  int v1266; // [rsp+68h] [rbp-6B0h]
  int v1267; // [rsp+68h] [rbp-6B0h]
  int v1268; // [rsp+68h] [rbp-6B0h]
  int v1269; // [rsp+68h] [rbp-6B0h]
  int v1270; // [rsp+68h] [rbp-6B0h]
  int v1271; // [rsp+68h] [rbp-6B0h]
  int v1272; // [rsp+68h] [rbp-6B0h]
  int v1273; // [rsp+68h] [rbp-6B0h]
  int v1274; // [rsp+68h] [rbp-6B0h]
  int v1275; // [rsp+68h] [rbp-6B0h]
  int v1276; // [rsp+68h] [rbp-6B0h]
  int v1277; // [rsp+68h] [rbp-6B0h]
  int v1278; // [rsp+68h] [rbp-6B0h]
  int v1279; // [rsp+68h] [rbp-6B0h]
  int v1280; // [rsp+68h] [rbp-6B0h]
  int v1281; // [rsp+68h] [rbp-6B0h]
  int v1282; // [rsp+68h] [rbp-6B0h]
  int v1283; // [rsp+68h] [rbp-6B0h]
  int v1284; // [rsp+68h] [rbp-6B0h]
  int v1285; // [rsp+68h] [rbp-6B0h]
  int v1286; // [rsp+68h] [rbp-6B0h]
  int v1287; // [rsp+68h] [rbp-6B0h]
  int v1288; // [rsp+68h] [rbp-6B0h]
  int v1289; // [rsp+68h] [rbp-6B0h]
  int v1290; // [rsp+68h] [rbp-6B0h]
  int v1291; // [rsp+68h] [rbp-6B0h]
  int v1292; // [rsp+68h] [rbp-6B0h]
  int v1293; // [rsp+68h] [rbp-6B0h]
  int v1294; // [rsp+68h] [rbp-6B0h]
  int v1295; // [rsp+68h] [rbp-6B0h]
  int v1296; // [rsp+68h] [rbp-6B0h]
  int v1297; // [rsp+68h] [rbp-6B0h]
  int v1298; // [rsp+68h] [rbp-6B0h]
  int v1299; // [rsp+68h] [rbp-6B0h]
  int v1300; // [rsp+68h] [rbp-6B0h]
  int v1301; // [rsp+68h] [rbp-6B0h]
  int v1302; // [rsp+68h] [rbp-6B0h]
  int v1303; // [rsp+68h] [rbp-6B0h]
  int v1304; // [rsp+68h] [rbp-6B0h]
  int v1305; // [rsp+68h] [rbp-6B0h]
  int v1306; // [rsp+68h] [rbp-6B0h]
  int v1307; // [rsp+68h] [rbp-6B0h]
  int v1308; // [rsp+68h] [rbp-6B0h]
  int v1309; // [rsp+68h] [rbp-6B0h]
  __int64 v1310; // [rsp+70h] [rbp-6A8h]
  __int64 v1311; // [rsp+70h] [rbp-6A8h]
  __int64 v1312; // [rsp+70h] [rbp-6A8h]
  __int64 v1313; // [rsp+70h] [rbp-6A8h]
  __int64 v1314; // [rsp+70h] [rbp-6A8h]
  __int64 v1315; // [rsp+70h] [rbp-6A8h]
  __int64 v1316; // [rsp+70h] [rbp-6A8h]
  __int64 v1317; // [rsp+70h] [rbp-6A8h]
  __int64 v1318; // [rsp+70h] [rbp-6A8h]
  __int64 v1319; // [rsp+70h] [rbp-6A8h]
  __int64 v1320; // [rsp+70h] [rbp-6A8h]
  __int64 v1321; // [rsp+70h] [rbp-6A8h]
  __int64 v1322; // [rsp+70h] [rbp-6A8h]
  __int64 v1323; // [rsp+70h] [rbp-6A8h]
  __int64 v1324; // [rsp+70h] [rbp-6A8h]
  __int64 v1325; // [rsp+70h] [rbp-6A8h]
  __int64 v1326; // [rsp+70h] [rbp-6A8h]
  __int64 v1327; // [rsp+70h] [rbp-6A8h]
  __int64 v1328; // [rsp+70h] [rbp-6A8h]
  __int64 v1329; // [rsp+70h] [rbp-6A8h]
  __int64 v1330; // [rsp+70h] [rbp-6A8h]
  __int64 v1331; // [rsp+70h] [rbp-6A8h]
  __int64 v1332; // [rsp+70h] [rbp-6A8h]
  __int64 v1333; // [rsp+70h] [rbp-6A8h]
  __int64 v1334; // [rsp+70h] [rbp-6A8h]
  __int64 v1335; // [rsp+70h] [rbp-6A8h]
  __int64 v1336; // [rsp+70h] [rbp-6A8h]
  __int64 v1337; // [rsp+70h] [rbp-6A8h]
  __int64 v1338; // [rsp+70h] [rbp-6A8h]
  __int64 v1339; // [rsp+70h] [rbp-6A8h]
  __int64 v1340; // [rsp+70h] [rbp-6A8h]
  __int64 v1341; // [rsp+70h] [rbp-6A8h]
  __int64 v1342; // [rsp+70h] [rbp-6A8h]
  __int64 v1343; // [rsp+70h] [rbp-6A8h]
  __int64 v1344; // [rsp+70h] [rbp-6A8h]
  __int64 v1345; // [rsp+70h] [rbp-6A8h]
  __int64 v1346; // [rsp+70h] [rbp-6A8h]
  __int64 v1347; // [rsp+70h] [rbp-6A8h]
  __int64 v1348; // [rsp+70h] [rbp-6A8h]
  __int64 v1349; // [rsp+70h] [rbp-6A8h]
  __int64 v1350; // [rsp+70h] [rbp-6A8h]
  __int64 v1351; // [rsp+70h] [rbp-6A8h]
  __int64 v1352; // [rsp+70h] [rbp-6A8h]
  __int64 v1353; // [rsp+70h] [rbp-6A8h]
  __int64 v1354; // [rsp+70h] [rbp-6A8h]
  __int64 v1355; // [rsp+70h] [rbp-6A8h]
  __int64 v1356; // [rsp+70h] [rbp-6A8h]
  __int64 v1357; // [rsp+70h] [rbp-6A8h]
  __int64 v1358; // [rsp+70h] [rbp-6A8h]
  __int64 v1359; // [rsp+70h] [rbp-6A8h]
  __int64 v1360; // [rsp+70h] [rbp-6A8h]
  __int64 v1361; // [rsp+70h] [rbp-6A8h]
  __int64 v1362; // [rsp+70h] [rbp-6A8h]
  __int64 v1363; // [rsp+70h] [rbp-6A8h]
  __int64 v1364; // [rsp+70h] [rbp-6A8h]
  __int64 v1365; // [rsp+70h] [rbp-6A8h]
  __int64 v1366; // [rsp+70h] [rbp-6A8h]
  __int64 v1367; // [rsp+70h] [rbp-6A8h]
  __int64 v1368; // [rsp+70h] [rbp-6A8h]
  __int64 v1369; // [rsp+70h] [rbp-6A8h]
  __m128 v1370; // [rsp+80h] [rbp-698h] BYREF
  __int128 *v1371; // [rsp+90h] [rbp-688h]
  ida_mcp::tools::control_flow *v1372; // [rsp+98h] [rbp-680h]
  char *v1373; // [rsp+A0h] [rbp-678h]
  __m128i *v1374; // [rsp+A8h] [rbp-670h]
  __int128 *v1375; // [rsp+B0h] [rbp-668h]
  __int128 *v1376; // [rsp+B8h] [rbp-660h]
  __int128 *v1377; // [rsp+C0h] [rbp-658h]
  __int128 *v1378; // [rsp+C8h] [rbp-650h]
  char *v1379; // [rsp+D0h] [rbp-648h]
  __int64 *v1380; // [rsp+D8h] [rbp-640h]
  char *v1381; // [rsp+E0h] [rbp-638h]
  __int64 *v1382; // [rsp+E8h] [rbp-630h]
  __int8 *v1383; // [rsp+F0h] [rbp-628h]
  __int128 *v1384; // [rsp+F8h] [rbp-620h]
  char *v1385; // [rsp+100h] [rbp-618h]
  __m128i *v1386; // [rsp+108h] [rbp-610h]
  __int64 *v1387; // [rsp+110h] [rbp-608h]
  __int64 *v1388; // [rsp+118h] [rbp-600h]
  __int64 *v1389; // [rsp+120h] [rbp-5F8h]
  __int64 *v1390; // [rsp+128h] [rbp-5F0h]
  _QWORD *v1391; // [rsp+130h] [rbp-5E8h]
  _BYTE *v1392; // [rsp+138h] [rbp-5E0h]
  _BYTE **v1393; // [rsp+140h] [rbp-5D8h]
  _BYTE *v1394; // [rsp+148h] [rbp-5D0h]
  const __m128i *v1395; // [rsp+150h] [rbp-5C8h]
  char *v1396; // [rsp+158h] [rbp-5C0h]
  __m128i *v1397; // [rsp+160h] [rbp-5B8h]
  __int128 *v1398; // [rsp+168h] [rbp-5B0h]
  __int128 *v1399; // [rsp+170h] [rbp-5A8h]
  __m128i *v1400; // [rsp+178h] [rbp-5A0h]
  __int128 *v1401; // [rsp+180h] [rbp-598h]
  __int128 *v1402; // [rsp+188h] [rbp-590h]
  __int128 *v1403; // [rsp+190h] [rbp-588h]
  __int128 *v1404; // [rsp+198h] [rbp-580h]
  char *v1405; // [rsp+1A0h] [rbp-578h]
  __int64 *v1406; // [rsp+1A8h] [rbp-570h]
  char *v1407; // [rsp+1B0h] [rbp-568h]
  char *v1408; // [rsp+1B8h] [rbp-560h]
  __int8 *v1409; // [rsp+1C0h] [rbp-558h]
  __int64 *v1410; // [rsp+1C8h] [rbp-550h]
  __int64 *v1411; // [rsp+1D0h] [rbp-548h]
  __int64 *v1412; // [rsp+1D8h] [rbp-540h]
  __int64 *v1413; // [rsp+1E0h] [rbp-538h]
  __m128i *v1414; // [rsp+1E8h] [rbp-530h]
  char *v1415; // [rsp+1F0h] [rbp-528h]
  __int64 *v1416; // [rsp+1F8h] [rbp-520h]
  char *v1417; // [rsp+200h] [rbp-518h]
  __int8 *v1418; // [rsp+208h] [rbp-510h]
  __int64 *v1419; // [rsp+210h] [rbp-508h]
  __m128i *v1420; // [rsp+218h] [rbp-500h]
  _QWORD *v1421; // [rsp+220h] [rbp-4F8h]
  __int64 *v1422; // [rsp+228h] [rbp-4F0h]
  __int64 *v1423; // [rsp+230h] [rbp-4E8h]
  char *v1424; // [rsp+238h] [rbp-4E0h]
  __int64 *v1425; // [rsp+240h] [rbp-4D8h]
  char *v1426; // [rsp+248h] [rbp-4D0h]
  __m128i v1427; // [rsp+250h] [rbp-4C8h] BYREF
  __int64 v1428; // [rsp+260h] [rbp-4B8h] BYREF
  __int64 v1429; // [rsp+268h] [rbp-4B0h] BYREF
  char v1430[8]; // [rsp+270h] [rbp-4A8h] BYREF
  char v1431; // [rsp+278h] [rbp-4A0h] BYREF
  __int64 v1432; // [rsp+280h] [rbp-498h]
  char v1433; // [rsp+288h] [rbp-490h]
  __int128 v1434; // [rsp+290h] [rbp-488h] BYREF
  __m128i v1435; // [rsp+2A0h] [rbp-478h] BYREF
  __int64 v1436; // [rsp+2B0h] [rbp-468h]
  char v1437; // [rsp+2B8h] [rbp-460h]
  __int128 v1438; // [rsp+2C0h] [rbp-458h] BYREF
  __int64 v1439; // [rsp+2D0h] [rbp-448h] BYREF
  __int128 v1440; // [rsp+2D8h] [rbp-440h] BYREF
  char v1441; // [rsp+2E8h] [rbp-430h]
  __int128 v1442; // [rsp+2F0h] [rbp-428h] BYREF
  char v1443; // [rsp+300h] [rbp-418h] BYREF
  __int128 v1444; // [rsp+308h] [rbp-410h] BYREF
  __int64 v1445; // [rsp+318h] [rbp-400h] BYREF
  __int128 v1446; // [rsp+320h] [rbp-3F8h] BYREF
  __int64 v1447; // [rsp+330h] [rbp-3E8h] BYREF
  __int128 v1448; // [rsp+338h] [rbp-3E0h] BYREF
  __int64 v1449; // [rsp+348h] [rbp-3D0h] BYREF
  char v1450; // [rsp+350h] [rbp-3C8h] BYREF
  __int64 v1451; // [rsp+358h] [rbp-3C0h]
  __m128i v1452; // [rsp+360h] [rbp-3B8h] BYREF
  __int64 v1453; // [rsp+370h] [rbp-3A8h]
  __int64 v1454; // [rsp+378h] [rbp-3A0h] BYREF
  __int128 v1455; // [rsp+380h] [rbp-398h] BYREF
  __int64 v1456; // [rsp+390h] [rbp-388h] BYREF
  __int128 v1457; // [rsp+398h] [rbp-380h] BYREF
  char v1458; // [rsp+3A8h] [rbp-370h]
  __int128 v1459; // [rsp+3B0h] [rbp-368h]
  char v1460; // [rsp+3C0h] [rbp-358h] BYREF
  __int128 v1461; // [rsp+3C8h] [rbp-350h] BYREF
  __int64 v1462; // [rsp+3D8h] [rbp-340h] BYREF
  __int128 v1463; // [rsp+3E0h] [rbp-338h] BYREF
  __int64 v1464; // [rsp+3F0h] [rbp-328h] BYREF
  char v1465; // [rsp+3F8h] [rbp-320h] BYREF
  __int64 v1466; // [rsp+400h] [rbp-318h]
  __int64 v1467; // [rsp+408h] [rbp-310h] BYREF
  char v1468; // [rsp+410h] [rbp-308h] BYREF
  __int64 v1469; // [rsp+418h] [rbp-300h]
  char v1470; // [rsp+420h] [rbp-2F8h] BYREF
  __int128 v1471; // [rsp+428h] [rbp-2F0h] BYREF
  __int64 v1472; // [rsp+438h] [rbp-2E0h] BYREF
  char v1473; // [rsp+440h] [rbp-2D8h] BYREF
  __int64 v1474; // [rsp+448h] [rbp-2D0h]
  __m128i v1475; // [rsp+450h] [rbp-2C8h] BYREF
  __int64 v1476; // [rsp+460h] [rbp-2B8h]
  char v1477; // [rsp+468h] [rbp-2B0h] BYREF
  __int128 v1478; // [rsp+470h] [rbp-2A8h] BYREF
  char v1479; // [rsp+480h] [rbp-298h] BYREF
  __int128 v1480; // [rsp+488h] [rbp-290h] BYREF
  __int64 v1481; // [rsp+498h] [rbp-280h] BYREF
  __int128 v1482; // [rsp+4A0h] [rbp-278h] BYREF
  __int64 v1483; // [rsp+4B0h] [rbp-268h] BYREF
  __int128 v1484; // [rsp+4B8h] [rbp-260h] BYREF
  __int64 v1485; // [rsp+4C8h] [rbp-250h] BYREF
  __int128 v1486; // [rsp+4D0h] [rbp-248h] BYREF
  char v1487; // [rsp+4E0h] [rbp-238h] BYREF
  __int128 v1488; // [rsp+4E8h] [rbp-230h] BYREF
  __int64 v1489; // [rsp+4F8h] [rbp-220h] BYREF
  char v1490; // [rsp+500h] [rbp-218h] BYREF
  __int64 v1491; // [rsp+508h] [rbp-210h]
  __m128i v1492; // [rsp+510h] [rbp-208h] BYREF
  __int64 v1493; // [rsp+520h] [rbp-1F8h]
  __m128i v1494; // [rsp+528h] [rbp-1F0h] BYREF
  __int64 v1495; // [rsp+538h] [rbp-1E0h]
  char v1496; // [rsp+540h] [rbp-1D8h] BYREF
  __int128 v1497; // [rsp+548h] [rbp-1D0h] BYREF
  __m128i v1498; // [rsp+558h] [rbp-1C0h] BYREF
  __int64 v1499; // [rsp+568h] [rbp-1B0h]
  char v1500; // [rsp+570h] [rbp-1A8h] BYREF
  __int64 v1501; // [rsp+580h] [rbp-198h]
  char v1502; // [rsp+588h] [rbp-190h] BYREF
  __int64 v1503; // [rsp+590h] [rbp-188h] BYREF
  char v1504; // [rsp+598h] [rbp-180h] BYREF
  __int64 v1505; // [rsp+5A0h] [rbp-178h]
  __m128i v1506; // [rsp+5A8h] [rbp-170h] BYREF
  __int64 v1507; // [rsp+5B8h] [rbp-160h]
  _QWORD v1508[2]; // [rsp+5C0h] [rbp-158h] BYREF
  __int64 v1509; // [rsp+5D0h] [rbp-148h]
  char v1510; // [rsp+5D8h] [rbp-140h] BYREF
  void *v1511; // [rsp+5E0h] [rbp-138h] BYREF
  __int64 v1512; // [rsp+5E8h] [rbp-130h]
  __m128i v1513; // [rsp+5F0h] [rbp-128h] BYREF
  __int64 v1514; // [rsp+608h] [rbp-110h]
  _QWORD v1515[2]; // [rsp+610h] [rbp-108h] BYREF
  __int64 v1516; // [rsp+620h] [rbp-F8h]
  char v1517; // [rsp+628h] [rbp-F0h] BYREF
  _BYTE *v1518; // [rsp+630h] [rbp-E8h] BYREF
  __int64 v1519; // [rsp+638h] [rbp-E0h]
  _BYTE v1520[16]; // [rsp+640h] [rbp-D8h] BYREF
  _BYTE *v1521; // [rsp+650h] [rbp-C8h] BYREF
  __int64 v1522; // [rsp+658h] [rbp-C0h]
  _BYTE v1523[16]; // [rsp+660h] [rbp-B8h] BYREF
  char v1524; // [rsp+670h] [rbp-A8h]
  __int64 v1525; // [rsp+678h] [rbp-A0h]
  char v1526; // [rsp+690h] [rbp-88h]
  char v1527; // [rsp+6C8h] [rbp-50h]
  unsigned __int64 v1528; // [rsp+6D8h] [rbp-40h]

  v1372 = this;
  v1528 = __readfsqword(0x28u);
  v1392 = v1520;
  v1518 = v1520;
  v1519 = 0;
  v1520[0] = 0;
  v1394 = v1523;
  v1521 = v1523;
  v1523[0] = 0;
  v1522 = 0;
  v1524 = 0;
  v1525 = 0;
  v1526 = 0;
  v1527 = 0;
  std::string::_M_replace();
  v1393 = &v1521;
  std::string::_M_replace();
  v1374 = &v1435;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1435);
  v1436 = 0;
  v1437 = 0;
  *(_QWORD *)&v1438 = 0;
  v1375 = &v1438;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1437 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "object");
  *(_QWORD *)(v2 + 8) = 6;
  v1438 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1511,
    &v1435);
  v1513.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  v1493 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1453 = 0;
  v1397 = (__m128i *)&v1439;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1439);
  *((_QWORD *)&v1440 + 1) = 0;
  v1441 = 0;
  *(_QWORD *)&v1442 = 0;
  v1376 = &v1442;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1441 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  v4 = v1397;
  strcpy((char *)(v3 + 16), "string");
  *(_QWORD *)(v3 + 8) = 6;
  v1395 = (const __m128i *)&v1447;
  v1442 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1447,
    v4);
  *((_QWORD *)&v1448 + 1) = 0;
  v1443 = 0;
  *(_QWORD *)&v1444 = 0;
  v1402 = &v1444;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1443 = 3;
  v5 = operator new(0x20u);
  *(_QWORD *)v5 = v5 + 16;
  strcpy((char *)(v5 + 16), "description");
  *(_QWORD *)(v5 + 8) = 11;
  LOBYTE(v1445) = 0;
  *(_QWORD *)&v1446 = 0;
  v1403 = &v1446;
  v1444 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1445) = 3;
  v6 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v6, "Hex address", v7, v8, v9, v10, v365, v452, v539);
  v1396 = &v1443;
  v1410 = &v1449;
  v1446 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1449,
    (const __m128i *)&v1443);
  v1451 = 0;
  v1419 = &v1454;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1454,
    v1395);
  *((_QWORD *)&v1455 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1503,
    &v1452);
  v1505 = 0;
  v1470 = 0;
  *(_QWORD *)&v1471 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1470 = 3;
  v11 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v11, "no_external_blocks", v12, v13, v14, v15, v366, v453, v540);
  v1471 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1456);
  *((_QWORD *)&v1457 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1459 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1464,
    (const __m128i *)&v1456);
  v1466 = 0;
  v1460 = 0;
  *(_QWORD *)&v1461 = 0;
  v1377 = &v1461;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1460 = 3;
  v16 = operator new(0x20u);
  *(_QWORD *)v16 = v16 + 16;
  strcpy((char *)(v16 + 16), "description");
  *(_QWORD *)(v16 + 8) = 11;
  LOBYTE(v1462) = 0;
  *(_QWORD *)&v1463 = 0;
  v1378 = &v1463;
  v1461 = (unsigned __int64)v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1462) = 3;
  v17 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v17,
    "Exclude external blocks",
    v18,
    v19,
    v20,
    v21,
    v367,
    (int)&v1464,
    v541);
  v1373 = &v1460;
  v1411 = &v1467;
  v1463 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1467,
    (const __m128i *)&v1460);
  v1469 = 0;
  v1412 = &v1472;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1472,
    v454);
  v1474 = 0;
  v1420 = &v1506;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1506,
    (const __m128i *)&v1470);
  v1507 = 0;
  v1487 = 0;
  *(_QWORD *)&v1488 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1487 = 3;
  v22 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v22, "call_ends_block", v23, v24, v25, v26, v368, (int)v454, v542);
  v1488 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1475);
  v1476 = 0;
  v1424 = &v1477;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1478 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1483,
    &v1475);
  *((_QWORD *)&v1484 + 1) = 0;
  v1479 = 0;
  *(_QWORD *)&v1480 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1479 = 3;
  v27 = operator new(0x20u);
  *(_QWORD *)v27 = v27 + 16;
  strcpy((char *)(v27 + 16), "description");
  *(_QWORD *)(v27 + 8) = 11;
  LOBYTE(v1481) = 0;
  *(_QWORD *)&v1482 = 0;
  v1480 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1481) = 3;
  v28 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v28, "Calls end blocks", v29, v30, v31, v32, (int)&v1475, v455, v543);
  v1413 = &v1485;
  v1370 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  v1482 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1485,
    (const __m128i *)&v1479);
  *((_QWORD *)&v1486 + 1) = 0;
  v1389 = &v1489;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1489,
    (const __m128i *)&v1483);
  v1491 = 0;
  v1421 = v1508;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1508,
    (const __m128i *)&v1487);
  v1509 = 0;
  v1414 = &v1494;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1494,
    (__int64)&v1503,
    3,
    v33,
    v34,
    v35,
    v369,
    v456,
    (int)&v1487,
    (int)&v1483,
    (int)&v1470,
    (int)&v1479,
    (__int64)&v1482,
    v890,
    (int)&v1452,
    (int)&v1471,
    (int)&v1480,
    v1130,
    (__int64)&v1456,
    (int)&v1488,
    v1310);
  v1495 = 0;
  v1390 = &v1513.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1513.m128i_i64[1],
    &v1492);
  v1514 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>();
  *((_QWORD *)&v1497 + 1) = 0;
  v1385 = v1430;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1432 = 0;
  v1386 = &v1427;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1427,
    (__int64)v1430,
    1,
    v36,
    v37,
    v38,
    v370,
    v457,
    v544,
    v626,
    v692,
    v758,
    v824);
  v39 = _mm_load_si128(&v1427);
  v1391 = v1515;
  v1499 = 0;
  v1498 = v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1515,
    (const __m128i *)&v1496);
  v1516 = 0;
  LOBYTE(v1428) = 0;
  v1387 = &v1428;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1428,
    (__int64)&v1511,
    3,
    v40,
    v41,
    v42,
    v371,
    v458,
    v545,
    v627,
    v693,
    v759,
    v825,
    v891,
    v950,
    v1010,
    v1070,
    v1131,
    v1190,
    v1250,
    v1311);
  LOBYTE(v4) = v1524;
  v43 = (void **)&v1517;
  v44 = v1429;
  v1524 = v1428;
  LOBYTE(v1428) = (_BYTE)v4;
  v1429 = v1525;
  v1525 = v44;
  v1388 = &v1429;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v43 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v43 != &v1511 );
  v45 = (__int64 *)&v1510;
  v1409 = &v1498.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1384 = &v1497;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1415 = &v1431;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1383 = &v1494.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1382 = &v1492.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v45 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v45 != &v1503 );
  v1381 = &v1490;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1371 = &v1484;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1380 = &v1475.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1408 = &v1473;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1407 = &v1468;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1379 = &v1465;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1399 = &v1457;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1398 = &v1455;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1406 = &v1452.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1405 = &v1450;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1404 = &v1440;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1416 = &v1435.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v1370);
  v1512 = 0;
  v1511 = ida_mcp::tools::control_flow::`anonymous namespace'::get_function_flowchart;
  v1513 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1513.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1513.m128i_i64[0])(&v1511, &v1511, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1518);
  v1519 = 0;
  v1520[0] = 0;
  v1518 = v1392;
  v1522 = 0;
  v1521 = v1394;
  v1523[0] = 0;
  v1524 = 0;
  v1525 = 0;
  v1526 = 0;
  v1527 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v372);
  v1476 = 0;
  v1477 = 0;
  *(_QWORD *)&v1478 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1477 = 3;
  v47 = operator new(0x20u);
  *(_QWORD *)v47 = v47 + 16;
  strcpy((char *)(v47 + 16), "object");
  *(_QWORD *)(v47 + 8) = 6;
  v1478 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1511,
    v372);
  v1513.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  *((_QWORD *)&v1497 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1493 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v760);
  *((_QWORD *)&v1480 + 1) = 0;
  LOBYTE(v1481) = 0;
  *(_QWORD *)&v1482 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1481) = 3;
  v48 = operator new(0x20u);
  strcpy((char *)(v48 + 16), "string");
  *(_QWORD *)v48 = v48 + 16;
  *(_QWORD *)(v48 + 8) = 6;
  v1482 = (unsigned __int64)v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v546,
    v760);
  *((_QWORD *)&v1488 + 1) = 0;
  LOBYTE(v1483) = 0;
  *(_QWORD *)&v1484 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1483) = 3;
  v49 = operator new(0x20u);
  *(_QWORD *)v49 = v49 + 16;
  strcpy((char *)(v49 + 16), "description");
  *(_QWORD *)(v49 + 8) = 11;
  LOBYTE(v1485) = 0;
  *(_QWORD *)&v1486 = 0;
  v1484 = (unsigned __int64)v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1485) = 3;
  v50 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v50,
    "Hex address",
    v51,
    v52,
    v53,
    v54,
    (int)v372,
    v459,
    (__int64)v546);
  v1486 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1389,
    v628);
  v1491 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1414,
    v547);
  v1495 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v694,
    &v1492);
  *((_QWORD *)&v1471 + 1) = 0;
  v1400 = &v1498;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1498,
    (__int64)v694,
    1,
    v55,
    v56,
    v57,
    v373,
    v460,
    (int)v547,
    (int)v628,
    (int)v694,
    (int)v760,
    v826,
    (int)&v1478,
    v951,
    v1011,
    v1071,
    (char)&v1486,
    v1191,
    v1251,
    (__int64)&v1448);
  v1499 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1390,
    (const __m128i *)&v1496);
  v1514 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>();
  v1505 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1466 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1386,
    v461,
    1,
    v58,
    v59,
    v60,
    v374,
    v461,
    v548,
    v629,
    v695,
    v761,
    v827);
  v61 = _mm_load_si128(&v1427);
  v1507 = 0;
  v1506 = v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1391,
    (__int64)&v1503,
    2,
    v62,
    v63,
    v64,
    v375,
    v462,
    v549,
    v630,
    v696,
    v762,
    v828,
    v892,
    v952,
    v1012,
    v1072,
    v1132,
    v1192,
    v1252,
    v1312);
  v1516 = 0;
  LOBYTE(v1428) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1387,
    (__int64)&v1511,
    3,
    v65,
    v66,
    v67,
    v376,
    v463,
    v550,
    v631,
    v697,
    v763,
    v829,
    v893,
    v953,
    v1013,
    v1073,
    v1133,
    v1193,
    v1253,
    v1313);
  v68 = v1524;
  v69 = (void **)&v1517;
  v1524 = v1428;
  v70 = v1525;
  LOBYTE(v1428) = v68;
  v1525 = v1429;
  v1429 = v70;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v69 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v69 != &v1511 );
  v1418 = &v1506.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1417 = &v1504;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v71 = _mm_load_si128((const __m128i *)&v1370);
  v1512 = 0;
  v1511 = ida_mcp::tools::control_flow::`anonymous namespace'::get_basic_block_at;
  v1513 = v71;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1513.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1513.m128i_i64[0])(&v1511, &v1511, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1518);
  v1519 = 0;
  v1520[0] = 0;
  v1518 = v1392;
  v1522 = 0;
  v1521 = v1394;
  v1523[0] = 0;
  v1524 = 0;
  v1525 = 0;
  v1526 = 0;
  v1527 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1385);
  v1432 = 0;
  v1433 = 0;
  *(_QWORD *)&v1434 = 0;
  v1401 = &v1434;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1433 = 3;
  v72 = operator new(0x20u);
  *(_QWORD *)v72 = v72 + 16;
  v73 = v1385;
  strcpy((char *)(v72 + 16), "object");
  *(_QWORD *)(v72 + 8) = 6;
  v1434 = (unsigned __int64)v72;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1511,
    (__int64)v73,
    2,
    29795,
    v74,
    v75,
    v377,
    v464,
    v551,
    v632,
    v698,
    v764,
    v830,
    v894,
    v954,
    v1014,
    v1074,
    v1134,
    v1194,
    v1254,
    v1314);
  v1513.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  *((_QWORD *)&v1488 + 1) = 0;
  LOBYTE(v1447) = 0;
  *(_QWORD *)&v1448 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1447) = 3;
  v76 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v76, "function_address", v77, v78, v79, v80, v378, v465, v552);
  v1448 = (unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1374);
  v1436 = 0;
  v1437 = 0;
  *(_QWORD *)&v1438 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1437 = 3;
  v81 = operator new(0x20u);
  strcpy((char *)(v81 + 16), "string");
  v82 = (__int64 *)v1374;
  *(_QWORD *)v81 = v81 + 16;
  v83 = v1396;
  *(_QWORD *)(v81 + 8) = 6;
  v1438 = (unsigned __int64)v81;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v83,
    (__int64)v82,
    2,
    v84,
    v85,
    v86,
    v379,
    v466,
    v553,
    v633,
    v699,
    v765,
    v831,
    v895,
    v955,
    v1015,
    v1075,
    v1135,
    v1195,
    v1255,
    v1315);
  *((_QWORD *)&v1444 + 1) = 0;
  LOBYTE(v1439) = 0;
  *(_QWORD *)&v1440 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1439) = 3;
  v87 = operator new(0x20u);
  *(_QWORD *)v87 = v87 + 16;
  strcpy((char *)(v87 + 16), "description");
  *(_QWORD *)(v87 + 8) = 11;
  v1441 = 0;
  *(_QWORD *)&v1442 = 0;
  v1440 = (unsigned __int64)v87;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1441 = 3;
  v88 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v88, "Hex address", v89, v90, v91, v92, v380, v467, v554);
  v1422 = &v1445;
  v1442 = (unsigned __int64)v88;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1445,
    (__int64)v1397,
    2,
    v93,
    v94,
    v95,
    v381,
    v468,
    v555,
    v634,
    v700,
    v766,
    v832,
    v896,
    v956,
    v1016,
    v1076,
    v1136,
    v1196,
    v1256,
    v1316);
  *((_QWORD *)&v1446 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1410,
    (__int64)v1396,
    2,
    v96,
    v97,
    v98,
    v382,
    v469,
    v556,
    v635,
    v701,
    v767,
    v833,
    v897,
    v957,
    v1017,
    v1077,
    v1137,
    v1197,
    v1257,
    v1317);
  v1451 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1503,
    (__int64)v1395,
    2,
    v99,
    v100,
    v101,
    v383,
    v470,
    v557,
    v636,
    v702,
    v768,
    v834,
    v898,
    v958,
    v1018,
    v1078,
    v1138,
    v1198,
    v1258,
    v1318);
  v1505 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  v1466 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v959);
  v1453 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1455 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1373,
    (__int64)v959,
    2,
    v102,
    v103,
    v104,
    v384,
    v471,
    v558,
    v637,
    v703,
    v769,
    v835,
    v899,
    (int)v959,
    v1019,
    v1079,
    v1139,
    v1199,
    v1259,
    v1319);
  *((_QWORD *)&v1461 + 1) = 0;
  LOBYTE(v1456) = 0;
  *(_QWORD *)&v1457 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1456) = 3;
  v105 = operator new(0x20u);
  *(_QWORD *)v105 = v105 + 16;
  strcpy((char *)(v105 + 16), "description");
  *(_QWORD *)(v105 + 8) = 11;
  v1458 = 0;
  *(_QWORD *)&v1459 = 0;
  v1457 = (unsigned __int64)v105;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1458 = 3;
  v106 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v106, "Source block ID", v107, v108, v109, v110, v385, v472, v559);
  v1423 = &v1462;
  v1459 = (unsigned __int64)v106;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1462,
    v1200,
    2,
    v111,
    v112,
    v113,
    v386,
    v473,
    v560,
    v638,
    v704,
    v770,
    v836,
    v900,
    v960,
    v1020,
    v1080,
    v1140,
    v1200,
    v1260,
    v1320);
  *((_QWORD *)&v1463 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1411,
    (__int64)v1373,
    2,
    v114,
    v115,
    v116,
    v387,
    v474,
    v561,
    v639,
    v705,
    v771,
    v837,
    v901,
    v961,
    v1021,
    v1081,
    v1141,
    v1201,
    v1261,
    v1321);
  v1469 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1420,
    v475,
    2,
    v117,
    v118,
    v119,
    v388,
    v475,
    v562,
    v640,
    v706,
    v772,
    v838,
    v902,
    v962,
    v1022,
    v1082,
    v1142,
    v1202,
    v1262,
    v1322);
  v1507 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>();
  *((_QWORD *)&v1484 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v707);
  *((_QWORD *)&v1471 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1474 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v773,
    (__int64)v707,
    2,
    v120,
    v121,
    v122,
    v389,
    v476,
    v563,
    v641,
    (int)v707,
    (int)v773,
    v839,
    v903,
    v963,
    v1023,
    v1083,
    v1143,
    v1203,
    v1263,
    v1323);
  *((_QWORD *)&v1480 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v390);
  v1476 = 0;
  v1477 = 0;
  *(_QWORD *)&v1478 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1477 = 3;
  v123 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v123,
    "Target block ID",
    v124,
    v125,
    v126,
    v127,
    (int)v390,
    v477,
    v564);
  v1425 = &v1481;
  v1478 = (unsigned __int64)v123;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1481,
    v391,
    2,
    v128,
    v129,
    v130,
    v391,
    v478,
    v565,
    v642,
    v708,
    v774,
    v840,
    v904,
    v964,
    v1024,
    v1084,
    v1144,
    v1204,
    v1264,
    v1324);
  *((_QWORD *)&v1482 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1413,
    v775,
    2,
    v131,
    v132,
    v133,
    v392,
    v479,
    v566,
    v643,
    v709,
    v775,
    v841,
    v905,
    v965,
    v1025,
    v1085,
    v1145,
    v1205,
    v1265,
    v1325);
  *((_QWORD *)&v1486 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1421,
    v644,
    2,
    v134,
    v135,
    v136,
    v393,
    v480,
    v567,
    v644,
    v710,
    v776,
    v842,
    v906,
    v966,
    v1026,
    v1086,
    v1146,
    v1206,
    v1266,
    v1326);
  v1509 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1389,
    (__int64)&v1503,
    3,
    v137,
    v138,
    v139,
    v394,
    v481,
    v568,
    v645,
    v711,
    v777,
    v843,
    v907,
    v967,
    v1027,
    v1087,
    v1147,
    v1207,
    v1267,
    v1327);
  v1491 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1390,
    v569,
    2,
    v140,
    v141,
    v142,
    v395,
    v482,
    v569,
    v646,
    v712,
    v778,
    v844,
    v908,
    v968,
    v1028,
    v1088,
    v1148,
    v1208,
    v1268,
    v1328);
  v1514 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>();
  v1493 = 0;
  v1496 = 0;
  *(_QWORD *)&v1497 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1496 = 3;
  v143 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v143, "function_address", v144, v145, v146, v147, v396, v483, v570);
  v1497 = (unsigned __int64)v143;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  v1499 = 0;
  v1426 = &v1500;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>();
  v1501 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1386,
    (__int64)&v1496,
    3,
    v148,
    v149,
    v150,
    v397,
    v484,
    v571,
    v647,
    v713,
    v779,
    v845);
  v151 = _mm_load_si128(&v1427);
  v1495 = 0;
  v1494 = v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1391,
    (__int64)&v1492,
    2,
    v152,
    v153,
    v154,
    v398,
    v485,
    v572,
    v648,
    v714,
    v780,
    v846,
    v909,
    v969,
    v1029,
    v1089,
    v1149,
    v1209,
    v1269,
    v1329);
  v1516 = 0;
  LOBYTE(v1428) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1387,
    (__int64)&v1511,
    3,
    v155,
    v156,
    v157,
    v399,
    v486,
    v573,
    v649,
    v715,
    v781,
    v847,
    v910,
    v970,
    v1030,
    v1090,
    v1150,
    v1210,
    v1270,
    v1330);
  LOBYTE(v82) = v1524;
  v158 = (void **)&v1517;
  v1524 = v1428;
  v159 = v1525;
  LOBYTE(v1428) = (_BYTE)v82;
  v1525 = v1429;
  v1429 = v159;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v158 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v158 != &v1511 );
  v160 = &v1502;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v160 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v160 != &v1496 );
  v161 = (__int64 *)&v1510;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v161 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v161 != &v1503 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v162 = _mm_load_si128((const __m128i *)&v1370);
  v1512 = 0;
  v1511 = ida_mcp::tools::control_flow::`anonymous namespace'::find_block_paths;
  v1513 = v162;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1513.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1513.m128i_i64[0])(&v1511, &v1511, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1518);
  v1519 = 0;
  v1520[0] = 0;
  v1518 = v1392;
  v1522 = 0;
  v1521 = v1394;
  v1523[0] = 0;
  v1524 = 0;
  v1525 = 0;
  v1526 = 0;
  v1527 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1385);
  v1432 = 0;
  v1433 = 0;
  *(_QWORD *)&v1434 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1433 = 3;
  v163 = operator new(0x20u);
  *(_QWORD *)v163 = v163 + 16;
  v164 = v1385;
  strcpy((char *)(v163 + 16), "object");
  *(_QWORD *)(v163 + 8) = 6;
  v1434 = (unsigned __int64)v163;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1511,
    (__int64)v164,
    2,
    v165,
    v166,
    v167,
    v400,
    v487,
    v574,
    v650,
    v716,
    v782,
    v848,
    v911,
    v971,
    v1031,
    v1091,
    v1151,
    v1211,
    v1271,
    v1331);
  v1513.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  *((_QWORD *)&v1488 + 1) = 0;
  LOBYTE(v1447) = 0;
  *(_QWORD *)&v1448 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1447) = 3;
  v168 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v168, "function_address", v169, v170, v171, v172, v401, v488, v575);
  v1448 = (unsigned __int64)v168;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1374);
  v1436 = 0;
  v1437 = 0;
  *(_QWORD *)&v1438 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1437 = 3;
  v173 = operator new(0x20u);
  v174 = (__int64 *)v1374;
  *(_QWORD *)v173 = v173 + 16;
  v175 = v1396;
  strcpy((char *)(v173 + 16), "string");
  *(_QWORD *)(v173 + 8) = 6;
  v1438 = (unsigned __int64)v173;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v175,
    (__int64)v174,
    2,
    26478,
    v176,
    v177,
    v402,
    v489,
    v576,
    v651,
    v717,
    v783,
    v849,
    v912,
    v972,
    v1032,
    v1092,
    v1152,
    v1212,
    v1272,
    v1332);
  *((_QWORD *)&v1444 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1397);
  *((_QWORD *)&v1440 + 1) = 0;
  v1441 = 0;
  *(_QWORD *)&v1442 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1441 = 3;
  v178 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v178, "Hex address", v179, v180, v181, v182, v403, v490, v577);
  v1442 = (unsigned __int64)v178;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1422,
    (__int64)v1397,
    2,
    v183,
    v184,
    v185,
    v404,
    v491,
    v578,
    v652,
    v718,
    v784,
    v850,
    v913,
    v973,
    v1033,
    v1093,
    v1153,
    v1213,
    v1273,
    v1333);
  *((_QWORD *)&v1446 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1410,
    (__int64)v1396,
    2,
    v186,
    v187,
    v188,
    v405,
    v492,
    v579,
    v653,
    v719,
    v785,
    v851,
    v914,
    v974,
    v1034,
    v1094,
    v1154,
    v1214,
    v1274,
    v1334);
  v1451 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1503,
    (__int64)v1395,
    2,
    v189,
    v190,
    v191,
    v406,
    v493,
    v580,
    v654,
    v720,
    v786,
    v852,
    v915,
    v975,
    v1035,
    v1095,
    v1155,
    v1215,
    v1275,
    v1335);
  v1505 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  v1466 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v976);
  v1453 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1455 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1373,
    (__int64)v976,
    2,
    v192,
    v193,
    v194,
    v407,
    v494,
    v581,
    v655,
    v721,
    v787,
    v853,
    v916,
    (int)v976,
    v1036,
    v1096,
    v1156,
    v1216,
    v1276,
    v1336);
  *((_QWORD *)&v1461 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1217);
  *((_QWORD *)&v1457 + 1) = 0;
  v1458 = 0;
  *(_QWORD *)&v1459 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1458 = 3;
  v195 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v195, "Source block ID", v196, v197, v198, v199, v408, v495, v582);
  v1459 = (unsigned __int64)v195;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1423,
    (__int64)v1217,
    2,
    v200,
    v201,
    v202,
    v409,
    v496,
    v583,
    v656,
    v722,
    v788,
    v854,
    v917,
    v977,
    v1037,
    v1097,
    v1157,
    (__int64)v1217,
    v1277,
    v1337);
  *((_QWORD *)&v1463 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1411,
    (__int64)v1373,
    2,
    v203,
    v204,
    v205,
    v410,
    v497,
    v584,
    v657,
    v723,
    v789,
    v855,
    v918,
    v978,
    v1038,
    v1098,
    v1158,
    v1218,
    v1278,
    v1338);
  v1469 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1420,
    v498,
    2,
    v206,
    v207,
    v208,
    v411,
    v498,
    v585,
    v658,
    v724,
    v790,
    v856,
    v919,
    v979,
    v1039,
    v1099,
    v1159,
    v1219,
    v1279,
    v1339);
  v1507 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>();
  *((_QWORD *)&v1484 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v725);
  *((_QWORD *)&v1471 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1474 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v791,
    (__int64)v725,
    2,
    v209,
    v210,
    v211,
    v412,
    v499,
    v586,
    v659,
    (int)v725,
    (int)v791,
    v857,
    v920,
    v980,
    v1040,
    v1100,
    v1160,
    v1220,
    v1280,
    v1340);
  *((_QWORD *)&v1480 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v413);
  v1476 = 0;
  v1477 = 0;
  *(_QWORD *)&v1478 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1477 = 3;
  v212 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v212,
    "Target block ID",
    v213,
    v214,
    v215,
    v216,
    (int)v413,
    v500,
    v587);
  v1478 = (unsigned __int64)v212;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1425,
    v414,
    2,
    v217,
    v218,
    v219,
    v414,
    v501,
    v588,
    v660,
    v726,
    v792,
    v858,
    v921,
    v981,
    v1041,
    v1101,
    v1161,
    v1221,
    v1281,
    v1341);
  *((_QWORD *)&v1482 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1413,
    v793,
    2,
    v220,
    v221,
    v222,
    v415,
    v502,
    v589,
    v661,
    v727,
    v793,
    v859,
    v922,
    v982,
    v1042,
    v1102,
    v1162,
    v1222,
    v1282,
    v1342);
  *((_QWORD *)&v1486 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1421,
    v662,
    2,
    v223,
    v224,
    v225,
    v416,
    v503,
    v590,
    v662,
    v728,
    v794,
    v860,
    v923,
    v983,
    v1043,
    v1103,
    v1163,
    v1223,
    v1283,
    v1343);
  v1509 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1389,
    (__int64)&v1503,
    3,
    v226,
    v227,
    v228,
    v417,
    v504,
    v591,
    v663,
    v729,
    v795,
    v861,
    v924,
    v984,
    v1044,
    v1104,
    v1164,
    v1224,
    v1284,
    v1344);
  v1491 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1390,
    v592,
    2,
    v229,
    v230,
    v231,
    v418,
    v505,
    v592,
    v664,
    v730,
    v796,
    v862,
    v925,
    v985,
    v1045,
    v1105,
    v1165,
    v1225,
    v1285,
    v1345);
  v1514 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>();
  v1493 = 0;
  v1496 = 0;
  *(_QWORD *)&v1497 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1496 = 3;
  v232 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v232, "function_address", v233, v234, v235, v236, v419, v506, v593);
  v1497 = (unsigned __int64)v232;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  v1499 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>();
  v1501 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1386,
    (__int64)&v1496,
    3,
    v237,
    v238,
    v239,
    v420,
    v507,
    v594,
    v665,
    v731,
    v797,
    v863);
  v240 = _mm_load_si128(&v1427);
  v1495 = 0;
  v1494 = v240;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1391,
    (__int64)&v1492,
    2,
    v241,
    v242,
    v243,
    v421,
    v508,
    v595,
    v666,
    v732,
    v798,
    v864,
    v926,
    v986,
    v1046,
    v1106,
    v1166,
    v1226,
    v1286,
    v1346);
  v1516 = 0;
  LOBYTE(v1428) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1387,
    (__int64)&v1511,
    3,
    v244,
    v245,
    v246,
    v422,
    v509,
    v596,
    v667,
    v733,
    v799,
    v865,
    v927,
    v987,
    v1047,
    v1107,
    v1167,
    v1227,
    v1287,
    v1347);
  LOBYTE(v174) = v1524;
  v247 = (void **)&v1517;
  v1524 = v1428;
  v248 = v1525;
  LOBYTE(v1428) = (_BYTE)v174;
  v1525 = v1429;
  v1429 = v248;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v247 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v247 != &v1511 );
  v249 = &v1502;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v249 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v249 != &v1496 );
  v250 = (__int64 *)&v1510;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v250 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v250 != &v1503 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v251 = _mm_load_si128((const __m128i *)&v1370);
  v1512 = 0;
  v1511 = ida_mcp::tools::control_flow::`anonymous namespace'::is_block_reachable;
  v1513 = v251;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1513.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1513.m128i_i64[0])(&v1511, &v1511, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1518);
  v1519 = 0;
  v1520[0] = 0;
  v1518 = v1392;
  v1522 = 0;
  v1521 = v1394;
  v1523[0] = 0;
  v1524 = 0;
  v1525 = 0;
  v1526 = 0;
  v1527 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v423);
  v1476 = 0;
  v1477 = 0;
  *(_QWORD *)&v1478 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1477 = 3;
  v252 = operator new(0x20u);
  *(_QWORD *)v252 = v252 + 16;
  strcpy((char *)(v252 + 16), "object");
  *(_QWORD *)(v252 + 8) = 6;
  v1478 = (unsigned __int64)v252;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1511,
    (__int64)v423,
    2,
    v253,
    v254,
    29795,
    (int)v423,
    v510,
    v597,
    v668,
    v734,
    v800,
    v866,
    v928,
    v988,
    v1048,
    v1108,
    v1168,
    v1228,
    v1288,
    v1348);
  v1513.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  *((_QWORD *)&v1497 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1493 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v801);
  *((_QWORD *)&v1480 + 1) = 0;
  LOBYTE(v1481) = 0;
  *(_QWORD *)&v1482 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1481) = 3;
  v255 = operator new(0x20u);
  *(_QWORD *)v255 = v255 + 16;
  strcpy((char *)(v255 + 16), "string");
  *(_QWORD *)(v255 + 8) = 6;
  v1482 = (unsigned __int64)v255;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v598,
    (__int64)v801,
    2,
    v256,
    v257,
    v258,
    v424,
    v511,
    (int)v598,
    v669,
    v735,
    (int)v801,
    v867,
    v929,
    v989,
    v1049,
    v1109,
    v1169,
    v1229,
    v1289,
    v1349);
  *((_QWORD *)&v1488 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v670);
  *((_QWORD *)&v1484 + 1) = 0;
  LOBYTE(v1485) = 0;
  *(_QWORD *)&v1486 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1485) = 3;
  v259 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v259, "Hex address", v260, v261, v262, v263, v425, v512, v599);
  v1486 = (unsigned __int64)v259;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1389,
    (__int64)v670,
    2,
    v264,
    v265,
    v266,
    v426,
    v513,
    v600,
    (int)v670,
    v736,
    v802,
    v868,
    v930,
    v990,
    v1050,
    v1110,
    v1170,
    v1230,
    v1290,
    v1350);
  v1491 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1414,
    v601,
    2,
    v267,
    v268,
    v269,
    v427,
    v514,
    v601,
    v671,
    v737,
    v803,
    v869,
    v931,
    v991,
    v1051,
    v1111,
    v1171,
    v1231,
    v1291,
    v1351);
  v1495 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v738,
    (__int64)&v1492,
    2,
    v270,
    v271,
    v272,
    v428,
    v515,
    v602,
    v672,
    (int)v738,
    v804,
    v870,
    v932,
    v992,
    v1052,
    v1112,
    v1172,
    v1232,
    v1292,
    v1352);
  *((_QWORD *)&v1471 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1400,
    v739,
    1,
    v273,
    v274,
    v275,
    v429,
    v516,
    v603,
    v673,
    v739,
    v805,
    v871,
    v933,
    v993,
    v1053,
    v1113,
    v1173,
    v1233,
    v1293,
    v1353);
  v1499 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1390,
    (__int64)&v1496,
    2,
    v276,
    v277,
    v278,
    v430,
    v517,
    v604,
    v674,
    v740,
    v806,
    v872,
    v934,
    v994,
    v1054,
    v1114,
    v1174,
    v1234,
    v1294,
    v1354);
  v1514 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>();
  v1505 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1466 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1386,
    v518,
    1,
    v279,
    v280,
    v281,
    v431,
    v518,
    v605,
    v675,
    v741,
    v807,
    v873);
  v282 = _mm_load_si128(&v1427);
  v1507 = 0;
  v1506 = v282;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1391,
    (__int64)&v1503,
    2,
    v283,
    v284,
    v285,
    v432,
    v519,
    v606,
    v676,
    v742,
    v808,
    v874,
    v935,
    v995,
    v1055,
    v1115,
    v1175,
    v1235,
    v1295,
    v1355);
  v1516 = 0;
  LOBYTE(v1428) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1387,
    (__int64)&v1511,
    3,
    v286,
    v287,
    v288,
    v433,
    v520,
    v607,
    v677,
    v743,
    v809,
    v875,
    v936,
    v996,
    v1056,
    v1116,
    v1176,
    v1236,
    v1296,
    v1356);
  v289 = v1524;
  v290 = (void **)&v1517;
  v1524 = v1428;
  v291 = v1525;
  LOBYTE(v1428) = v289;
  v1525 = v1429;
  v1429 = v291;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v290 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v290 != &v1511 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v292 = _mm_load_si128((const __m128i *)&v1370);
  v1512 = 0;
  v1511 = ida_mcp::tools::control_flow::`anonymous namespace'::get_entry_exit_blocks;
  v1513 = v292;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1513.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1513.m128i_i64[0])(&v1511, &v1511, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1518);
  v1519 = 0;
  v1520[0] = 0;
  v1518 = v1392;
  v1522 = 0;
  v1521 = v1394;
  v1523[0] = 0;
  v1524 = 0;
  v1525 = 0;
  v1526 = 0;
  v1527 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v997);
  v1453 = 0;
  LOBYTE(v1454) = 0;
  *(_QWORD *)&v1455 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1454) = 3;
  v293 = operator new(0x20u);
  *(_QWORD *)v293 = v293 + 16;
  strcpy((char *)(v293 + 16), "object");
  *(_QWORD *)(v293 + 8) = 6;
  v1455 = (unsigned __int64)v293;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1511,
    (__int64)v997,
    2,
    v294,
    v295,
    v296,
    v434,
    v521,
    v608,
    v678,
    v744,
    v810,
    v876,
    v937,
    (int)v997,
    v1057,
    v1117,
    v1177,
    v1237,
    v1297,
    v1357);
  v1513.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  *((_QWORD *)&v1497 + 1) = 0;
  v1470 = 0;
  *(_QWORD *)&v1471 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1470 = 3;
  v297 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v297, "function_address", v298, v299, v300, v301, v435, v522, v609);
  v1471 = (unsigned __int64)v297;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1238);
  *((_QWORD *)&v1457 + 1) = 0;
  v1458 = 0;
  *(_QWORD *)&v1459 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1458 = 3;
  v302 = operator new(0x20u);
  strcpy((char *)(v302 + 16), "string");
  *(_QWORD *)v302 = v302 + 16;
  *(_QWORD *)(v302 + 8) = 6;
  v1459 = (unsigned __int64)v302;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v523,
    (__int64)v1238,
    2,
    v303,
    v304,
    v305,
    v436,
    (__int64)v523,
    v610,
    v679,
    v745,
    v811,
    v877,
    v938,
    v998,
    v1058,
    v1118,
    v1178,
    (__int64)v1238,
    v1298,
    v1358);
  v1466 = 0;
  v1460 = 0;
  *(_QWORD *)&v1461 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1460 = 3;
  v306 = operator new(0x20u);
  *(_QWORD *)v306 = v306 + 16;
  strcpy((char *)(v306 + 16), "description");
  *(_QWORD *)(v306 + 8) = 11;
  LOBYTE(v1462) = 0;
  *(_QWORD *)&v1463 = 0;
  v1461 = (unsigned __int64)v306;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1462) = 3;
  v307 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v307, "Hex address", v308, v309, v310, v311, v437, v524, v611);
  v1463 = (unsigned __int64)v307;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1411,
    (__int64)v1373,
    2,
    v312,
    v313,
    v314,
    v438,
    v525,
    v612,
    v680,
    v746,
    v812,
    v878,
    v939,
    v999,
    v1059,
    v1119,
    v1179,
    v1239,
    v1299,
    v1359);
  v1469 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1412,
    v526,
    2,
    v315,
    v316,
    v317,
    v439,
    v526,
    v613,
    v681,
    v747,
    v813,
    v879,
    v940,
    v1000,
    v1060,
    v1120,
    v1180,
    v1240,
    v1300,
    v1360);
  v1474 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1492,
    v748,
    2,
    v318,
    v319,
    v320,
    v440,
    v527,
    v614,
    v682,
    v748,
    v814,
    v880,
    v941,
    v1001,
    v1061,
    v1121,
    v1181,
    v1241,
    v1301,
    v1361);
  v1493 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>();
  *((_QWORD *)&v1488 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v441);
  v1476 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1478 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v683,
    (__int64)v441,
    2,
    v321,
    v322,
    v323,
    (int)v441,
    v528,
    v615,
    (int)v683,
    v749,
    v815,
    v881,
    v942,
    v1002,
    v1062,
    v1122,
    v1182,
    v1242,
    v1302,
    v1362);
  *((_QWORD *)&v1484 + 1) = 0;
  v1479 = 0;
  *(_QWORD *)&v1480 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1479 = 3;
  v324 = operator new(0x20u);
  *(_QWORD *)v324 = v324 + 16;
  strcpy((char *)(v324 + 16), "description");
  *(_QWORD *)(v324 + 8) = 11;
  LOBYTE(v1481) = 0;
  *(_QWORD *)&v1482 = 0;
  v1480 = (unsigned __int64)v324;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1481) = 3;
  v325 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v325, "Block ID to analyze", v326, v327, v328, v329, v442, v529, v616);
  v1482 = (unsigned __int64)v325;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1413,
    v816,
    2,
    v330,
    v331,
    v332,
    v443,
    v530,
    v617,
    v684,
    v750,
    v816,
    v882,
    v943,
    v1003,
    v1063,
    v1123,
    v1183,
    v1243,
    v1303,
    v1363);
  *((_QWORD *)&v1486 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1389,
    v685,
    2,
    v333,
    v334,
    v335,
    v444,
    v531,
    v618,
    v685,
    v751,
    v817,
    v883,
    v944,
    v1004,
    v1064,
    v1124,
    v1184,
    v1244,
    v1304,
    v1364);
  v1491 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1414,
    v619,
    2,
    v336,
    v337,
    v338,
    v445,
    v532,
    v619,
    v686,
    v752,
    v818,
    v884,
    v945,
    v1005,
    v1065,
    v1125,
    v1185,
    v1245,
    v1305,
    v1365);
  v1495 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1400,
    (__int64)&v1492,
    2,
    v339,
    v340,
    v341,
    v446,
    v533,
    v620,
    v687,
    v753,
    v819,
    v885,
    v946,
    v1006,
    v1066,
    v1126,
    v1186,
    v1246,
    v1306,
    v1366);
  v1499 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1390,
    (__int64)&v1496,
    2,
    v342,
    v343,
    v344,
    v447,
    v534,
    v621,
    v688,
    v754,
    v820,
    v886,
    v947,
    v1007,
    v1067,
    v1127,
    v1187,
    v1247,
    v1307,
    v1367);
  v1514 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>();
  v1505 = 0;
  LOBYTE(v1447) = 0;
  *(_QWORD *)&v1448 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1447) = 3;
  v345 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v345, "function_address", v346, v347, v348, v349, v448, v535, v622);
  v1448 = (unsigned __int64)v345;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[9],char [9],0>();
  v1451 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1386,
    (__int64)v1395,
    2,
    v350,
    v351,
    v352,
    v449,
    v536,
    v623,
    v689,
    v755,
    v821,
    v887);
  v353 = _mm_load_si128(&v1427);
  v1507 = 0;
  v1506 = v353;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1391,
    (__int64)&v1503,
    2,
    v354,
    v355,
    v356,
    v450,
    v537,
    v624,
    v690,
    v756,
    v822,
    v888,
    v948,
    v1008,
    v1068,
    v1128,
    v1188,
    v1248,
    v1308,
    v1368);
  v1516 = 0;
  LOBYTE(v1428) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1387,
    (__int64)&v1511,
    3,
    v357,
    v358,
    v359,
    v451,
    v538,
    v625,
    v691,
    v757,
    v823,
    v889,
    v949,
    v1009,
    v1069,
    v1129,
    v1189,
    v1249,
    v1309,
    v1369);
  v360 = v1524;
  v361 = (void **)&v1517;
  v1524 = v1428;
  v362 = v1525;
  LOBYTE(v1428) = v360;
  v1525 = v1429;
  v1429 = v362;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v361 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v361 != &v1511 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v363 = _mm_load_si128((const __m128i *)&v1370);
  v1512 = 0;
  v1511 = ida_mcp::tools::control_flow::`anonymous namespace'::get_block_dominators;
  v1513 = v363;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1513.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1513.m128i_i64[0])(&v1511, &v1511, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1518);
  return v1528 - __readfsqword(0x28u);
}

