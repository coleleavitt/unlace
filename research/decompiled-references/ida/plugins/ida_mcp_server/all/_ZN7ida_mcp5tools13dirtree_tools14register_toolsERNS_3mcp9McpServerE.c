unsigned __int64 __fastcall ida_mcp::tools::dirtree_tools::register_tools(
        ida_mcp::tools::dirtree_tools *this,
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
  __int64 v13; // rax
  __int64 *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
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
  __int64 v35; // rax
  __m128 v36; // xmm1
  __m128i v37; // xmm0
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // si
  void **v42; // r15
  __int64 v43; // rdx
  __m128i v44; // xmm2
  __int64 *v45; // r15
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // r15
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 *v57; // r15
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // r15
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 *v68; // r15
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 *v73; // r15
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 *v79; // r15
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __m128i v84; // xmm0
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  char v91; // si
  void **v92; // r15
  __int64 v93; // rax
  __m128i v94; // xmm3
  __int64 *v95; // r15
  __int64 v96; // rdx
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
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 *v113; // r15
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 *v127; // r15
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 *v135; // r15
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 *v155; // r15
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rax
  __int64 *v161; // r15
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __m128i v166; // xmm0
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  char v173; // si
  void **v174; // r15
  __int64 v175; // rax
  __m128i v176; // xmm4
  __int64 *v177; // r12
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 *v185; // r12
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 *v192; // rsi
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 *v196; // r12
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // r9
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 *v210; // r12
  __int64 v211; // rdx
  __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 v215; // rax
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 *v219; // r12
  __int64 v220; // rdx
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
  __int64 *v233; // r12
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 v238; // rax
  __int64 v239; // rcx
  __int64 v240; // r8
  __int64 v241; // r9
  __int64 *v242; // r12
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  __int64 v247; // rcx
  __int64 v248; // r8
  __int64 v249; // r9
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
  __int64 *v262; // r12
  __int64 v263; // rdx
  __int64 v264; // rcx
  __int64 v265; // r8
  __int64 v266; // r9
  __int64 v267; // rax
  __int64 *v268; // r12
  __int64 v269; // rdx
  __int64 v270; // rcx
  __int64 v271; // r8
  __int64 v272; // r9
  __int64 *v273; // r12
  __int64 v274; // rdx
  __int64 v275; // rcx
  __int64 v276; // r8
  __int64 v277; // r9
  __m128i v278; // xmm0
  __int64 v279; // rcx
  __int64 v280; // r8
  __int64 v281; // r9
  __int64 v282; // rcx
  __int64 v283; // r8
  __int64 v284; // r9
  void **v285; // r12
  __int64 v286; // rax
  char *v287; // r12
  __int64 *v288; // r12
  __m128i v289; // xmm5
  __int64 *v290; // r13
  __int64 v291; // rdx
  __int64 v292; // rcx
  __int64 v293; // r8
  __int64 v294; // r9
  __int64 v295; // rcx
  __int64 v296; // r8
  __int64 v297; // r9
  __int64 *v298; // r13
  __int64 v299; // rdx
  __int64 v300; // rcx
  __int64 v301; // r8
  __int64 v302; // r9
  __int64 v303; // rax
  __int64 *v304; // rdi
  __int64 v305; // rax
  __int64 v306; // rsi
  __int64 v307; // rcx
  __int64 v308; // r8
  __int64 v309; // r9
  __int64 *v310; // r13
  __int64 v311; // rdx
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
  __int64 *v324; // r13
  __int64 v325; // rdx
  __int64 v326; // rcx
  __int64 v327; // r8
  __int64 v328; // r9
  __int64 v329; // rax
  __int64 v330; // rcx
  __int64 v331; // r8
  __int64 v332; // r9
  __int64 *v333; // r13
  __int64 v334; // rdx
  __int64 v335; // rcx
  __int64 v336; // r8
  __int64 v337; // r9
  __int64 v338; // rcx
  __int64 v339; // r8
  __int64 v340; // r9
  __int64 v341; // rcx
  __int64 v342; // r8
  __int64 v343; // r9
  __int64 v344; // rcx
  __int64 v345; // r8
  __int64 v346; // r9
  __int64 *v347; // r13
  __int64 v348; // rdx
  __int64 v349; // rcx
  __int64 v350; // r8
  __int64 v351; // r9
  __int64 *v352; // r13
  __int64 v353; // rdx
  __int64 v354; // rcx
  __int64 v355; // r8
  __int64 v356; // r9
  __int64 v357; // rcx
  __int64 v358; // r8
  __int64 v359; // r9
  __int64 *v360; // r13
  __int64 v361; // rdx
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
  __int64 v377; // rcx
  __int64 v378; // r8
  __int64 v379; // r9
  __int64 *v380; // r13
  __int64 v381; // rdx
  __int64 v382; // rcx
  __int64 v383; // r8
  __int64 v384; // r9
  __int64 v385; // rax
  __int64 *v386; // r13
  __int64 v387; // rdx
  __int64 v388; // rcx
  __int64 v389; // r8
  __int64 v390; // r9
  __m128i v391; // xmm0
  __int64 v392; // rcx
  __int64 v393; // r8
  __int64 v394; // r9
  __int64 v395; // rcx
  __int64 v396; // r8
  __int64 v397; // r9
  void **v398; // r13
  __int64 v399; // rax
  __int64 *v400; // r12
  __m128i v401; // xmm6
  int v403; // [rsp+0h] [rbp-6C8h]
  int v404; // [rsp+0h] [rbp-6C8h]
  int v405; // [rsp+0h] [rbp-6C8h]
  int v406; // [rsp+0h] [rbp-6C8h]
  int v407; // [rsp+0h] [rbp-6C8h]
  int v408; // [rsp+0h] [rbp-6C8h]
  int v409; // [rsp+0h] [rbp-6C8h]
  int v410; // [rsp+0h] [rbp-6C8h]
  __m128i *v411; // [rsp+0h] [rbp-6C8h]
  int v412; // [rsp+0h] [rbp-6C8h]
  int v413; // [rsp+0h] [rbp-6C8h]
  int v414; // [rsp+0h] [rbp-6C8h]
  int v415; // [rsp+0h] [rbp-6C8h]
  int v416; // [rsp+0h] [rbp-6C8h]
  int v417; // [rsp+0h] [rbp-6C8h]
  int v418; // [rsp+0h] [rbp-6C8h]
  int v419; // [rsp+0h] [rbp-6C8h]
  int v420; // [rsp+0h] [rbp-6C8h]
  _QWORD *v421; // [rsp+0h] [rbp-6C8h]
  int v422; // [rsp+0h] [rbp-6C8h]
  int v423; // [rsp+0h] [rbp-6C8h]
  int v424; // [rsp+0h] [rbp-6C8h]
  int v425; // [rsp+0h] [rbp-6C8h]
  int v426; // [rsp+0h] [rbp-6C8h]
  int v427; // [rsp+0h] [rbp-6C8h]
  int v428; // [rsp+0h] [rbp-6C8h]
  int v429; // [rsp+0h] [rbp-6C8h]
  int v430; // [rsp+0h] [rbp-6C8h]
  int v431; // [rsp+0h] [rbp-6C8h]
  int v432; // [rsp+0h] [rbp-6C8h]
  int v433; // [rsp+0h] [rbp-6C8h]
  int v434; // [rsp+0h] [rbp-6C8h]
  int v435; // [rsp+0h] [rbp-6C8h]
  int v436; // [rsp+0h] [rbp-6C8h]
  int v437; // [rsp+0h] [rbp-6C8h]
  int v438; // [rsp+0h] [rbp-6C8h]
  int v439; // [rsp+0h] [rbp-6C8h]
  int v440; // [rsp+0h] [rbp-6C8h]
  int v441; // [rsp+0h] [rbp-6C8h]
  int v442; // [rsp+0h] [rbp-6C8h]
  int v443; // [rsp+0h] [rbp-6C8h]
  int v444; // [rsp+0h] [rbp-6C8h]
  int v445; // [rsp+0h] [rbp-6C8h]
  int v446; // [rsp+0h] [rbp-6C8h]
  int v447; // [rsp+0h] [rbp-6C8h]
  _QWORD *v448; // [rsp+0h] [rbp-6C8h]
  __int64 v449; // [rsp+0h] [rbp-6C8h]
  int v450; // [rsp+0h] [rbp-6C8h]
  int v451; // [rsp+0h] [rbp-6C8h]
  int v452; // [rsp+0h] [rbp-6C8h]
  int v453; // [rsp+0h] [rbp-6C8h]
  int v454; // [rsp+0h] [rbp-6C8h]
  int v455; // [rsp+0h] [rbp-6C8h]
  int v456; // [rsp+0h] [rbp-6C8h]
  int v457; // [rsp+0h] [rbp-6C8h]
  int v458; // [rsp+0h] [rbp-6C8h]
  int v459; // [rsp+0h] [rbp-6C8h]
  int v460; // [rsp+0h] [rbp-6C8h]
  int v461; // [rsp+0h] [rbp-6C8h]
  int v462; // [rsp+0h] [rbp-6C8h]
  int v463; // [rsp+0h] [rbp-6C8h]
  int v464; // [rsp+0h] [rbp-6C8h]
  int v465; // [rsp+0h] [rbp-6C8h]
  int v466; // [rsp+0h] [rbp-6C8h]
  int v467; // [rsp+0h] [rbp-6C8h]
  int v468; // [rsp+0h] [rbp-6C8h]
  int v469; // [rsp+0h] [rbp-6C8h]
  int v470; // [rsp+0h] [rbp-6C8h]
  int v471; // [rsp+0h] [rbp-6C8h]
  int v472; // [rsp+0h] [rbp-6C8h]
  int v473; // [rsp+0h] [rbp-6C8h]
  _QWORD *v474; // [rsp+0h] [rbp-6C8h]
  int v475; // [rsp+0h] [rbp-6C8h]
  int v476; // [rsp+0h] [rbp-6C8h]
  int v477; // [rsp+0h] [rbp-6C8h]
  int v478; // [rsp+0h] [rbp-6C8h]
  int v479; // [rsp+0h] [rbp-6C8h]
  int v480; // [rsp+0h] [rbp-6C8h]
  int v481; // [rsp+0h] [rbp-6C8h]
  int v482; // [rsp+0h] [rbp-6C8h]
  int v483; // [rsp+0h] [rbp-6C8h]
  int v484; // [rsp+0h] [rbp-6C8h]
  int v485; // [rsp+0h] [rbp-6C8h]
  int v486; // [rsp+0h] [rbp-6C8h]
  int v487; // [rsp+0h] [rbp-6C8h]
  int v488; // [rsp+0h] [rbp-6C8h]
  int v489; // [rsp+0h] [rbp-6C8h]
  int v490; // [rsp+0h] [rbp-6C8h]
  int v491; // [rsp+0h] [rbp-6C8h]
  int v492; // [rsp+8h] [rbp-6C0h]
  int v493; // [rsp+8h] [rbp-6C0h]
  int v494; // [rsp+8h] [rbp-6C0h]
  int v495; // [rsp+8h] [rbp-6C0h]
  int v496; // [rsp+8h] [rbp-6C0h]
  __int64 v497; // [rsp+8h] [rbp-6C0h]
  int v498; // [rsp+8h] [rbp-6C0h]
  int v499; // [rsp+8h] [rbp-6C0h]
  int v500; // [rsp+8h] [rbp-6C0h]
  int v501; // [rsp+8h] [rbp-6C0h]
  int v502; // [rsp+8h] [rbp-6C0h]
  int v503; // [rsp+8h] [rbp-6C0h]
  int v504; // [rsp+8h] [rbp-6C0h]
  __int64 v505; // [rsp+8h] [rbp-6C0h]
  __int64 v506; // [rsp+8h] [rbp-6C0h]
  int v507; // [rsp+8h] [rbp-6C0h]
  __int64 v508; // [rsp+8h] [rbp-6C0h]
  int v509; // [rsp+8h] [rbp-6C0h]
  __int64 v510; // [rsp+8h] [rbp-6C0h]
  int v511; // [rsp+8h] [rbp-6C0h]
  __int64 v512; // [rsp+8h] [rbp-6C0h]
  __int64 v513; // [rsp+8h] [rbp-6C0h]
  __int64 v514; // [rsp+8h] [rbp-6C0h]
  int v515; // [rsp+8h] [rbp-6C0h]
  __int64 v516; // [rsp+8h] [rbp-6C0h]
  int v517; // [rsp+8h] [rbp-6C0h]
  __int64 v518; // [rsp+8h] [rbp-6C0h]
  __int64 v519; // [rsp+8h] [rbp-6C0h]
  __int64 v520; // [rsp+8h] [rbp-6C0h]
  __int64 v521; // [rsp+8h] [rbp-6C0h]
  __int64 v522; // [rsp+8h] [rbp-6C0h]
  int v523; // [rsp+8h] [rbp-6C0h]
  int v524; // [rsp+8h] [rbp-6C0h]
  __int64 v525; // [rsp+8h] [rbp-6C0h]
  __int64 v526; // [rsp+8h] [rbp-6C0h]
  int v527; // [rsp+8h] [rbp-6C0h]
  __int64 v528; // [rsp+8h] [rbp-6C0h]
  int v529; // [rsp+8h] [rbp-6C0h]
  __int64 v530; // [rsp+8h] [rbp-6C0h]
  int v531; // [rsp+8h] [rbp-6C0h]
  __int64 v532; // [rsp+8h] [rbp-6C0h]
  __int64 v533; // [rsp+8h] [rbp-6C0h]
  __int64 v534; // [rsp+8h] [rbp-6C0h]
  int v535; // [rsp+8h] [rbp-6C0h]
  __int64 v536; // [rsp+8h] [rbp-6C0h]
  int v537; // [rsp+8h] [rbp-6C0h]
  __int64 v538; // [rsp+8h] [rbp-6C0h]
  __int64 v539; // [rsp+8h] [rbp-6C0h]
  __int64 v540; // [rsp+8h] [rbp-6C0h]
  int v541; // [rsp+8h] [rbp-6C0h]
  __int64 v542; // [rsp+8h] [rbp-6C0h]
  int v543; // [rsp+8h] [rbp-6C0h]
  __int64 v544; // [rsp+8h] [rbp-6C0h]
  __int64 v545; // [rsp+8h] [rbp-6C0h]
  __int64 v546; // [rsp+8h] [rbp-6C0h]
  __int64 v547; // [rsp+8h] [rbp-6C0h]
  __int64 v548; // [rsp+8h] [rbp-6C0h]
  int v549; // [rsp+8h] [rbp-6C0h]
  int v550; // [rsp+8h] [rbp-6C0h]
  int v551; // [rsp+8h] [rbp-6C0h]
  __int64 v552; // [rsp+8h] [rbp-6C0h]
  __int64 v553; // [rsp+8h] [rbp-6C0h]
  int v554; // [rsp+8h] [rbp-6C0h]
  __int64 v555; // [rsp+8h] [rbp-6C0h]
  int v556; // [rsp+8h] [rbp-6C0h]
  __int64 v557; // [rsp+8h] [rbp-6C0h]
  int v558; // [rsp+8h] [rbp-6C0h]
  __int64 v559; // [rsp+8h] [rbp-6C0h]
  __int64 v560; // [rsp+8h] [rbp-6C0h]
  __int64 v561; // [rsp+8h] [rbp-6C0h]
  int v562; // [rsp+8h] [rbp-6C0h]
  __int64 v563; // [rsp+8h] [rbp-6C0h]
  int v564; // [rsp+8h] [rbp-6C0h]
  __int64 v565; // [rsp+8h] [rbp-6C0h]
  __int64 v566; // [rsp+8h] [rbp-6C0h]
  __int64 v567; // [rsp+8h] [rbp-6C0h]
  int v568; // [rsp+8h] [rbp-6C0h]
  int v569; // [rsp+8h] [rbp-6C0h]
  __int64 v570; // [rsp+8h] [rbp-6C0h]
  int v571; // [rsp+8h] [rbp-6C0h]
  __int64 v572; // [rsp+8h] [rbp-6C0h]
  __int64 v573; // [rsp+8h] [rbp-6C0h]
  __int64 v574; // [rsp+8h] [rbp-6C0h]
  __int64 v575; // [rsp+8h] [rbp-6C0h]
  __int64 v576; // [rsp+8h] [rbp-6C0h]
  int v577; // [rsp+8h] [rbp-6C0h]
  int v578; // [rsp+8h] [rbp-6C0h]
  __int64 v579; // [rsp+8h] [rbp-6C0h]
  __int64 v580; // [rsp+8h] [rbp-6C0h]
  __int64 v581; // [rsp+10h] [rbp-6B8h]
  __int64 v582; // [rsp+10h] [rbp-6B8h]
  const __m128i *v583; // [rsp+10h] [rbp-6B8h]
  __int64 v584; // [rsp+10h] [rbp-6B8h]
  __int64 v585; // [rsp+10h] [rbp-6B8h]
  int v586; // [rsp+10h] [rbp-6B8h]
  __int64 v587; // [rsp+10h] [rbp-6B8h]
  __int64 v588; // [rsp+10h] [rbp-6B8h]
  _QWORD *v589; // [rsp+10h] [rbp-6B8h]
  const __m128i *v590; // [rsp+10h] [rbp-6B8h]
  __int64 v591; // [rsp+10h] [rbp-6B8h]
  __int64 v592; // [rsp+10h] [rbp-6B8h]
  __int64 v593; // [rsp+10h] [rbp-6B8h]
  int v594; // [rsp+10h] [rbp-6B8h]
  int v595; // [rsp+10h] [rbp-6B8h]
  __int64 v596; // [rsp+10h] [rbp-6B8h]
  int v597; // [rsp+10h] [rbp-6B8h]
  __int64 v598; // [rsp+10h] [rbp-6B8h]
  int v599; // [rsp+10h] [rbp-6B8h]
  _QWORD *v600; // [rsp+10h] [rbp-6B8h]
  __int64 v601; // [rsp+10h] [rbp-6B8h]
  int v602; // [rsp+10h] [rbp-6B8h]
  int v603; // [rsp+10h] [rbp-6B8h]
  __int64 v604; // [rsp+10h] [rbp-6B8h]
  int v605; // [rsp+10h] [rbp-6B8h]
  __int64 v606; // [rsp+10h] [rbp-6B8h]
  int v607; // [rsp+10h] [rbp-6B8h]
  int v608; // [rsp+10h] [rbp-6B8h]
  int v609; // [rsp+10h] [rbp-6B8h]
  int v610; // [rsp+10h] [rbp-6B8h]
  int v611; // [rsp+10h] [rbp-6B8h]
  __int64 v612; // [rsp+10h] [rbp-6B8h]
  __int64 v613; // [rsp+10h] [rbp-6B8h]
  int v614; // [rsp+10h] [rbp-6B8h]
  int v615; // [rsp+10h] [rbp-6B8h]
  __int64 v616; // [rsp+10h] [rbp-6B8h]
  int v617; // [rsp+10h] [rbp-6B8h]
  __int64 v618; // [rsp+10h] [rbp-6B8h]
  int v619; // [rsp+10h] [rbp-6B8h]
  __int64 v620; // [rsp+10h] [rbp-6B8h]
  int v621; // [rsp+10h] [rbp-6B8h]
  int v622; // [rsp+10h] [rbp-6B8h]
  int v623; // [rsp+10h] [rbp-6B8h]
  __int64 v624; // [rsp+10h] [rbp-6B8h]
  _QWORD *v625; // [rsp+10h] [rbp-6B8h]
  __int64 v626; // [rsp+10h] [rbp-6B8h]
  int v627; // [rsp+10h] [rbp-6B8h]
  __int64 v628; // [rsp+10h] [rbp-6B8h]
  int v629; // [rsp+10h] [rbp-6B8h]
  __int64 v630; // [rsp+10h] [rbp-6B8h]
  int v631; // [rsp+10h] [rbp-6B8h]
  __int64 v632; // [rsp+10h] [rbp-6B8h]
  int v633; // [rsp+10h] [rbp-6B8h]
  int v634; // [rsp+10h] [rbp-6B8h]
  int v635; // [rsp+10h] [rbp-6B8h]
  int v636; // [rsp+10h] [rbp-6B8h]
  int v637; // [rsp+10h] [rbp-6B8h]
  __int64 v638; // [rsp+10h] [rbp-6B8h]
  __int64 v639; // [rsp+10h] [rbp-6B8h]
  __int64 v640; // [rsp+10h] [rbp-6B8h]
  int v641; // [rsp+10h] [rbp-6B8h]
  int v642; // [rsp+10h] [rbp-6B8h]
  __int64 v643; // [rsp+10h] [rbp-6B8h]
  int v644; // [rsp+10h] [rbp-6B8h]
  __int64 v645; // [rsp+10h] [rbp-6B8h]
  int v646; // [rsp+10h] [rbp-6B8h]
  __int64 v647; // [rsp+10h] [rbp-6B8h]
  int v648; // [rsp+10h] [rbp-6B8h]
  int v649; // [rsp+10h] [rbp-6B8h]
  int v650; // [rsp+10h] [rbp-6B8h]
  __int64 v651; // [rsp+10h] [rbp-6B8h]
  int v652; // [rsp+10h] [rbp-6B8h]
  _QWORD *v653; // [rsp+10h] [rbp-6B8h]
  __int64 v654; // [rsp+10h] [rbp-6B8h]
  int v655; // [rsp+10h] [rbp-6B8h]
  int v656; // [rsp+10h] [rbp-6B8h]
  __int64 v657; // [rsp+10h] [rbp-6B8h]
  __int64 v658; // [rsp+10h] [rbp-6B8h]
  int v659; // [rsp+10h] [rbp-6B8h]
  __int64 v660; // [rsp+10h] [rbp-6B8h]
  int v661; // [rsp+10h] [rbp-6B8h]
  int v662; // [rsp+10h] [rbp-6B8h]
  int v663; // [rsp+10h] [rbp-6B8h]
  int v664; // [rsp+10h] [rbp-6B8h]
  int v665; // [rsp+10h] [rbp-6B8h]
  __int64 v666; // [rsp+10h] [rbp-6B8h]
  __int64 v667; // [rsp+10h] [rbp-6B8h]
  int v668; // [rsp+10h] [rbp-6B8h]
  int v669; // [rsp+10h] [rbp-6B8h]
  __m128i *v670; // [rsp+18h] [rbp-6B0h]
  int v671; // [rsp+18h] [rbp-6B0h]
  int v672; // [rsp+18h] [rbp-6B0h]
  int v673; // [rsp+18h] [rbp-6B0h]
  int v674; // [rsp+18h] [rbp-6B0h]
  int v675; // [rsp+18h] [rbp-6B0h]
  int v676; // [rsp+18h] [rbp-6B0h]
  _QWORD *v677; // [rsp+18h] [rbp-6B0h]
  int v678; // [rsp+18h] [rbp-6B0h]
  int v679; // [rsp+18h] [rbp-6B0h]
  int v680; // [rsp+18h] [rbp-6B0h]
  int v681; // [rsp+18h] [rbp-6B0h]
  int v682; // [rsp+18h] [rbp-6B0h]
  int v683; // [rsp+18h] [rbp-6B0h]
  int v684; // [rsp+18h] [rbp-6B0h]
  int v685; // [rsp+18h] [rbp-6B0h]
  int v686; // [rsp+18h] [rbp-6B0h]
  int v687; // [rsp+18h] [rbp-6B0h]
  int v688; // [rsp+18h] [rbp-6B0h]
  int v689; // [rsp+18h] [rbp-6B0h]
  int v690; // [rsp+18h] [rbp-6B0h]
  int v691; // [rsp+18h] [rbp-6B0h]
  int v692; // [rsp+18h] [rbp-6B0h]
  int v693; // [rsp+18h] [rbp-6B0h]
  int v694; // [rsp+18h] [rbp-6B0h]
  _QWORD *v695; // [rsp+18h] [rbp-6B0h]
  int v696; // [rsp+18h] [rbp-6B0h]
  int v697; // [rsp+18h] [rbp-6B0h]
  int v698; // [rsp+18h] [rbp-6B0h]
  int v699; // [rsp+18h] [rbp-6B0h]
  int v700; // [rsp+18h] [rbp-6B0h]
  int v701; // [rsp+18h] [rbp-6B0h]
  int v702; // [rsp+18h] [rbp-6B0h]
  int v703; // [rsp+18h] [rbp-6B0h]
  int v704; // [rsp+18h] [rbp-6B0h]
  int v705; // [rsp+18h] [rbp-6B0h]
  int v706; // [rsp+18h] [rbp-6B0h]
  int v707; // [rsp+18h] [rbp-6B0h]
  int v708; // [rsp+18h] [rbp-6B0h]
  int v709; // [rsp+18h] [rbp-6B0h]
  int v710; // [rsp+18h] [rbp-6B0h]
  _QWORD *v711; // [rsp+18h] [rbp-6B0h]
  int v712; // [rsp+18h] [rbp-6B0h]
  int v713; // [rsp+18h] [rbp-6B0h]
  int v714; // [rsp+18h] [rbp-6B0h]
  int v715; // [rsp+18h] [rbp-6B0h]
  int v716; // [rsp+18h] [rbp-6B0h]
  int v717; // [rsp+18h] [rbp-6B0h]
  int v718; // [rsp+18h] [rbp-6B0h]
  int v719; // [rsp+20h] [rbp-6A8h]
  int v720; // [rsp+20h] [rbp-6A8h]
  int v721; // [rsp+20h] [rbp-6A8h]
  int v722; // [rsp+20h] [rbp-6A8h]
  int v723; // [rsp+20h] [rbp-6A8h]
  int v724; // [rsp+20h] [rbp-6A8h]
  int v725; // [rsp+20h] [rbp-6A8h]
  int v726; // [rsp+20h] [rbp-6A8h]
  int v727; // [rsp+20h] [rbp-6A8h]
  int v728; // [rsp+20h] [rbp-6A8h]
  int v729; // [rsp+20h] [rbp-6A8h]
  int v730; // [rsp+20h] [rbp-6A8h]
  int v731; // [rsp+20h] [rbp-6A8h]
  int v732; // [rsp+20h] [rbp-6A8h]
  int v733; // [rsp+20h] [rbp-6A8h]
  int v734; // [rsp+20h] [rbp-6A8h]
  int v735; // [rsp+20h] [rbp-6A8h]
  int v736; // [rsp+20h] [rbp-6A8h]
  int v737; // [rsp+20h] [rbp-6A8h]
  int v738; // [rsp+20h] [rbp-6A8h]
  int v739; // [rsp+20h] [rbp-6A8h]
  int v740; // [rsp+20h] [rbp-6A8h]
  int v741; // [rsp+20h] [rbp-6A8h]
  int v742; // [rsp+20h] [rbp-6A8h]
  int v743; // [rsp+20h] [rbp-6A8h]
  int v744; // [rsp+20h] [rbp-6A8h]
  int v745; // [rsp+20h] [rbp-6A8h]
  int v746; // [rsp+20h] [rbp-6A8h]
  int v747; // [rsp+20h] [rbp-6A8h]
  int v748; // [rsp+20h] [rbp-6A8h]
  int v749; // [rsp+20h] [rbp-6A8h]
  int v750; // [rsp+20h] [rbp-6A8h]
  int v751; // [rsp+20h] [rbp-6A8h]
  int v752; // [rsp+20h] [rbp-6A8h]
  int v753; // [rsp+20h] [rbp-6A8h]
  int v754; // [rsp+20h] [rbp-6A8h]
  int v755; // [rsp+20h] [rbp-6A8h]
  int v756; // [rsp+20h] [rbp-6A8h]
  int v757; // [rsp+20h] [rbp-6A8h]
  int v758; // [rsp+20h] [rbp-6A8h]
  int v759; // [rsp+20h] [rbp-6A8h]
  int v760; // [rsp+20h] [rbp-6A8h]
  int v761; // [rsp+20h] [rbp-6A8h]
  int v762; // [rsp+20h] [rbp-6A8h]
  int v763; // [rsp+20h] [rbp-6A8h]
  int v764; // [rsp+20h] [rbp-6A8h]
  int v765; // [rsp+20h] [rbp-6A8h]
  int v766; // [rsp+20h] [rbp-6A8h]
  int v767; // [rsp+20h] [rbp-6A8h]
  __m128i *v768; // [rsp+28h] [rbp-6A0h]
  int v769; // [rsp+28h] [rbp-6A0h]
  int v770; // [rsp+28h] [rbp-6A0h]
  int v771; // [rsp+28h] [rbp-6A0h]
  int v772; // [rsp+28h] [rbp-6A0h]
  int v773; // [rsp+28h] [rbp-6A0h]
  int v774; // [rsp+28h] [rbp-6A0h]
  int v775; // [rsp+28h] [rbp-6A0h]
  _QWORD *v776; // [rsp+28h] [rbp-6A0h]
  int v777; // [rsp+28h] [rbp-6A0h]
  int v778; // [rsp+28h] [rbp-6A0h]
  int v779; // [rsp+28h] [rbp-6A0h]
  int v780; // [rsp+28h] [rbp-6A0h]
  int v781; // [rsp+28h] [rbp-6A0h]
  int v782; // [rsp+28h] [rbp-6A0h]
  int v783; // [rsp+28h] [rbp-6A0h]
  int v784; // [rsp+28h] [rbp-6A0h]
  int v785; // [rsp+28h] [rbp-6A0h]
  int v786; // [rsp+28h] [rbp-6A0h]
  int v787; // [rsp+28h] [rbp-6A0h]
  int v788; // [rsp+28h] [rbp-6A0h]
  int v789; // [rsp+28h] [rbp-6A0h]
  int v790; // [rsp+28h] [rbp-6A0h]
  int v791; // [rsp+28h] [rbp-6A0h]
  _QWORD *v792; // [rsp+28h] [rbp-6A0h]
  int v793; // [rsp+28h] [rbp-6A0h]
  __int64 v794; // [rsp+28h] [rbp-6A0h]
  int v795; // [rsp+28h] [rbp-6A0h]
  int v796; // [rsp+28h] [rbp-6A0h]
  int v797; // [rsp+28h] [rbp-6A0h]
  int v798; // [rsp+28h] [rbp-6A0h]
  int v799; // [rsp+28h] [rbp-6A0h]
  int v800; // [rsp+28h] [rbp-6A0h]
  int v801; // [rsp+28h] [rbp-6A0h]
  int v802; // [rsp+28h] [rbp-6A0h]
  int v803; // [rsp+28h] [rbp-6A0h]
  int v804; // [rsp+28h] [rbp-6A0h]
  int v805; // [rsp+28h] [rbp-6A0h]
  int v806; // [rsp+28h] [rbp-6A0h]
  int v807; // [rsp+28h] [rbp-6A0h]
  int v808; // [rsp+28h] [rbp-6A0h]
  int v809; // [rsp+28h] [rbp-6A0h]
  _QWORD *v810; // [rsp+28h] [rbp-6A0h]
  int v811; // [rsp+28h] [rbp-6A0h]
  int v812; // [rsp+28h] [rbp-6A0h]
  int v813; // [rsp+28h] [rbp-6A0h]
  int v814; // [rsp+28h] [rbp-6A0h]
  int v815; // [rsp+28h] [rbp-6A0h]
  int v816; // [rsp+28h] [rbp-6A0h]
  __int64 v817; // [rsp+30h] [rbp-698h]
  __int64 v818; // [rsp+30h] [rbp-698h]
  __int64 v819; // [rsp+30h] [rbp-698h]
  __int64 v820; // [rsp+30h] [rbp-698h]
  __int64 v821; // [rsp+30h] [rbp-698h]
  __int64 v822; // [rsp+30h] [rbp-698h]
  __int64 v823; // [rsp+30h] [rbp-698h]
  __int64 v824; // [rsp+30h] [rbp-698h]
  __int64 v825; // [rsp+30h] [rbp-698h]
  __int64 v826; // [rsp+30h] [rbp-698h]
  __int64 v827; // [rsp+30h] [rbp-698h]
  __int64 v828; // [rsp+30h] [rbp-698h]
  __int64 v829; // [rsp+30h] [rbp-698h]
  __int64 v830; // [rsp+30h] [rbp-698h]
  __int64 v831; // [rsp+30h] [rbp-698h]
  __int64 v832; // [rsp+30h] [rbp-698h]
  __int64 v833; // [rsp+30h] [rbp-698h]
  __int64 v834; // [rsp+30h] [rbp-698h]
  __int64 v835; // [rsp+30h] [rbp-698h]
  __int64 v836; // [rsp+30h] [rbp-698h]
  __int64 v837; // [rsp+30h] [rbp-698h]
  __int64 v838; // [rsp+30h] [rbp-698h]
  __int64 v839; // [rsp+30h] [rbp-698h]
  __int64 v840; // [rsp+30h] [rbp-698h]
  __int64 v841; // [rsp+30h] [rbp-698h]
  __int64 v842; // [rsp+30h] [rbp-698h]
  __int64 v843; // [rsp+30h] [rbp-698h]
  __int64 v844; // [rsp+30h] [rbp-698h]
  __int64 v845; // [rsp+30h] [rbp-698h]
  __int64 v846; // [rsp+30h] [rbp-698h]
  __int64 v847; // [rsp+30h] [rbp-698h]
  __int64 v848; // [rsp+30h] [rbp-698h]
  __int64 v849; // [rsp+30h] [rbp-698h]
  __int64 v850; // [rsp+30h] [rbp-698h]
  __int64 v851; // [rsp+30h] [rbp-698h]
  __int64 v852; // [rsp+30h] [rbp-698h]
  __int64 v853; // [rsp+30h] [rbp-698h]
  __int64 v854; // [rsp+30h] [rbp-698h]
  __int64 v855; // [rsp+30h] [rbp-698h]
  __int64 v856; // [rsp+30h] [rbp-698h]
  __int64 v857; // [rsp+30h] [rbp-698h]
  __int64 v858; // [rsp+30h] [rbp-698h]
  __int64 v859; // [rsp+30h] [rbp-698h]
  __int64 v860; // [rsp+30h] [rbp-698h]
  __int64 v861; // [rsp+30h] [rbp-698h]
  __int64 v862; // [rsp+30h] [rbp-698h]
  __int64 v863; // [rsp+30h] [rbp-698h]
  __int64 v864; // [rsp+30h] [rbp-698h]
  __int64 v865; // [rsp+30h] [rbp-698h]
  __m128i *v866; // [rsp+38h] [rbp-690h]
  int v867; // [rsp+38h] [rbp-690h]
  int v868; // [rsp+38h] [rbp-690h]
  _QWORD *v869; // [rsp+38h] [rbp-690h]
  int v870; // [rsp+38h] [rbp-690h]
  __int64 v871; // [rsp+38h] [rbp-690h]
  int v872; // [rsp+38h] [rbp-690h]
  int v873; // [rsp+38h] [rbp-690h]
  int v874; // [rsp+38h] [rbp-690h]
  int v875; // [rsp+38h] [rbp-690h]
  int v876; // [rsp+38h] [rbp-690h]
  int v877; // [rsp+38h] [rbp-690h]
  int v878; // [rsp+38h] [rbp-690h]
  int v879; // [rsp+38h] [rbp-690h]
  int v880; // [rsp+38h] [rbp-690h]
  int v881; // [rsp+38h] [rbp-690h]
  int v882; // [rsp+38h] [rbp-690h]
  int v883; // [rsp+38h] [rbp-690h]
  int v884; // [rsp+38h] [rbp-690h]
  int v885; // [rsp+38h] [rbp-690h]
  int v886; // [rsp+38h] [rbp-690h]
  int v887; // [rsp+38h] [rbp-690h]
  int v888; // [rsp+38h] [rbp-690h]
  __int64 v889; // [rsp+38h] [rbp-690h]
  int v890; // [rsp+38h] [rbp-690h]
  int v891; // [rsp+38h] [rbp-690h]
  int v892; // [rsp+38h] [rbp-690h]
  int v893; // [rsp+38h] [rbp-690h]
  int v894; // [rsp+38h] [rbp-690h]
  int v895; // [rsp+38h] [rbp-690h]
  int v896; // [rsp+38h] [rbp-690h]
  int v897; // [rsp+38h] [rbp-690h]
  int v898; // [rsp+38h] [rbp-690h]
  int v899; // [rsp+38h] [rbp-690h]
  int v900; // [rsp+38h] [rbp-690h]
  int v901; // [rsp+38h] [rbp-690h]
  int v902; // [rsp+38h] [rbp-690h]
  _QWORD *v903; // [rsp+38h] [rbp-690h]
  int v904; // [rsp+38h] [rbp-690h]
  __int64 v905; // [rsp+38h] [rbp-690h]
  int v906; // [rsp+38h] [rbp-690h]
  int v907; // [rsp+38h] [rbp-690h]
  int v908; // [rsp+38h] [rbp-690h]
  int v909; // [rsp+38h] [rbp-690h]
  int v910; // [rsp+38h] [rbp-690h]
  int v911; // [rsp+38h] [rbp-690h]
  int v912; // [rsp+38h] [rbp-690h]
  int v913; // [rsp+38h] [rbp-690h]
  int v914; // [rsp+38h] [rbp-690h]
  __m128i *v915; // [rsp+40h] [rbp-688h]
  int v916; // [rsp+40h] [rbp-688h]
  int v917; // [rsp+40h] [rbp-688h]
  int v918; // [rsp+40h] [rbp-688h]
  int v919; // [rsp+40h] [rbp-688h]
  int v920; // [rsp+40h] [rbp-688h]
  int v921; // [rsp+40h] [rbp-688h]
  _QWORD *v922; // [rsp+40h] [rbp-688h]
  int v923; // [rsp+40h] [rbp-688h]
  __int64 v924; // [rsp+40h] [rbp-688h]
  int v925; // [rsp+40h] [rbp-688h]
  int v926; // [rsp+40h] [rbp-688h]
  int v927; // [rsp+40h] [rbp-688h]
  int v928; // [rsp+40h] [rbp-688h]
  int v929; // [rsp+40h] [rbp-688h]
  int v930; // [rsp+40h] [rbp-688h]
  int v931; // [rsp+40h] [rbp-688h]
  int v932; // [rsp+40h] [rbp-688h]
  int v933; // [rsp+40h] [rbp-688h]
  int v934; // [rsp+40h] [rbp-688h]
  int v935; // [rsp+40h] [rbp-688h]
  int v936; // [rsp+40h] [rbp-688h]
  int v937; // [rsp+40h] [rbp-688h]
  int v938; // [rsp+40h] [rbp-688h]
  int v939; // [rsp+40h] [rbp-688h]
  int v940; // [rsp+40h] [rbp-688h]
  int v941; // [rsp+40h] [rbp-688h]
  __int64 v942; // [rsp+40h] [rbp-688h]
  int v943; // [rsp+40h] [rbp-688h]
  int v944; // [rsp+40h] [rbp-688h]
  int v945; // [rsp+40h] [rbp-688h]
  int v946; // [rsp+40h] [rbp-688h]
  int v947; // [rsp+40h] [rbp-688h]
  int v948; // [rsp+40h] [rbp-688h]
  int v949; // [rsp+40h] [rbp-688h]
  int v950; // [rsp+40h] [rbp-688h]
  int v951; // [rsp+40h] [rbp-688h]
  int v952; // [rsp+40h] [rbp-688h]
  int v953; // [rsp+40h] [rbp-688h]
  int v954; // [rsp+40h] [rbp-688h]
  int v955; // [rsp+40h] [rbp-688h]
  _QWORD *v956; // [rsp+40h] [rbp-688h]
  int v957; // [rsp+40h] [rbp-688h]
  __int64 v958; // [rsp+40h] [rbp-688h]
  int v959; // [rsp+40h] [rbp-688h]
  int v960; // [rsp+40h] [rbp-688h]
  int v961; // [rsp+40h] [rbp-688h]
  int v962; // [rsp+40h] [rbp-688h]
  int v963; // [rsp+40h] [rbp-688h]
  __m128i *v964; // [rsp+48h] [rbp-680h]
  int v965; // [rsp+48h] [rbp-680h]
  _QWORD *v966; // [rsp+48h] [rbp-680h]
  int v967; // [rsp+48h] [rbp-680h]
  int v968; // [rsp+48h] [rbp-680h]
  int v969; // [rsp+48h] [rbp-680h]
  int v970; // [rsp+48h] [rbp-680h]
  int v971; // [rsp+48h] [rbp-680h]
  int v972; // [rsp+48h] [rbp-680h]
  int v973; // [rsp+48h] [rbp-680h]
  int v974; // [rsp+48h] [rbp-680h]
  int v975; // [rsp+48h] [rbp-680h]
  int v976; // [rsp+48h] [rbp-680h]
  int v977; // [rsp+48h] [rbp-680h]
  int v978; // [rsp+48h] [rbp-680h]
  int v979; // [rsp+48h] [rbp-680h]
  int v980; // [rsp+48h] [rbp-680h]
  int v981; // [rsp+48h] [rbp-680h]
  int v982; // [rsp+48h] [rbp-680h]
  int v983; // [rsp+48h] [rbp-680h]
  _QWORD *v984; // [rsp+48h] [rbp-680h]
  int v985; // [rsp+48h] [rbp-680h]
  int v986; // [rsp+48h] [rbp-680h]
  int v987; // [rsp+48h] [rbp-680h]
  int v988; // [rsp+48h] [rbp-680h]
  int v989; // [rsp+48h] [rbp-680h]
  int v990; // [rsp+48h] [rbp-680h]
  int v991; // [rsp+48h] [rbp-680h]
  int v992; // [rsp+48h] [rbp-680h]
  int v993; // [rsp+48h] [rbp-680h]
  int v994; // [rsp+48h] [rbp-680h]
  int v995; // [rsp+48h] [rbp-680h]
  int v996; // [rsp+48h] [rbp-680h]
  int v997; // [rsp+48h] [rbp-680h]
  int v998; // [rsp+48h] [rbp-680h]
  int v999; // [rsp+48h] [rbp-680h]
  __int64 v1000; // [rsp+48h] [rbp-680h]
  int v1001; // [rsp+48h] [rbp-680h]
  int v1002; // [rsp+48h] [rbp-680h]
  int v1003; // [rsp+48h] [rbp-680h]
  int v1004; // [rsp+48h] [rbp-680h]
  int v1005; // [rsp+48h] [rbp-680h]
  int v1006; // [rsp+48h] [rbp-680h]
  int v1007; // [rsp+48h] [rbp-680h]
  int v1008; // [rsp+48h] [rbp-680h]
  int v1009; // [rsp+48h] [rbp-680h]
  int v1010; // [rsp+48h] [rbp-680h]
  int v1011; // [rsp+48h] [rbp-680h]
  int v1012; // [rsp+48h] [rbp-680h]
  int v1013; // [rsp+50h] [rbp-678h]
  int v1014; // [rsp+50h] [rbp-678h]
  int v1015; // [rsp+50h] [rbp-678h]
  int v1016; // [rsp+50h] [rbp-678h]
  int v1017; // [rsp+50h] [rbp-678h]
  int v1018; // [rsp+50h] [rbp-678h]
  int v1019; // [rsp+50h] [rbp-678h]
  int v1020; // [rsp+50h] [rbp-678h]
  int v1021; // [rsp+50h] [rbp-678h]
  int v1022; // [rsp+50h] [rbp-678h]
  int v1023; // [rsp+50h] [rbp-678h]
  int v1024; // [rsp+50h] [rbp-678h]
  int v1025; // [rsp+50h] [rbp-678h]
  int v1026; // [rsp+50h] [rbp-678h]
  int v1027; // [rsp+50h] [rbp-678h]
  int v1028; // [rsp+50h] [rbp-678h]
  int v1029; // [rsp+50h] [rbp-678h]
  int v1030; // [rsp+50h] [rbp-678h]
  int v1031; // [rsp+50h] [rbp-678h]
  int v1032; // [rsp+50h] [rbp-678h]
  int v1033; // [rsp+50h] [rbp-678h]
  int v1034; // [rsp+50h] [rbp-678h]
  int v1035; // [rsp+50h] [rbp-678h]
  int v1036; // [rsp+50h] [rbp-678h]
  int v1037; // [rsp+50h] [rbp-678h]
  int v1038; // [rsp+50h] [rbp-678h]
  int v1039; // [rsp+50h] [rbp-678h]
  int v1040; // [rsp+50h] [rbp-678h]
  int v1041; // [rsp+50h] [rbp-678h]
  int v1042; // [rsp+50h] [rbp-678h]
  int v1043; // [rsp+50h] [rbp-678h]
  int v1044; // [rsp+50h] [rbp-678h]
  int v1045; // [rsp+50h] [rbp-678h]
  int v1046; // [rsp+50h] [rbp-678h]
  int v1047; // [rsp+50h] [rbp-678h]
  int v1048; // [rsp+50h] [rbp-678h]
  int v1049; // [rsp+50h] [rbp-678h]
  int v1050; // [rsp+50h] [rbp-678h]
  int v1051; // [rsp+50h] [rbp-678h]
  int v1052; // [rsp+50h] [rbp-678h]
  int v1053; // [rsp+50h] [rbp-678h]
  int v1054; // [rsp+50h] [rbp-678h]
  int v1055; // [rsp+50h] [rbp-678h]
  int v1056; // [rsp+50h] [rbp-678h]
  int v1057; // [rsp+50h] [rbp-678h]
  int v1058; // [rsp+50h] [rbp-678h]
  int v1059; // [rsp+50h] [rbp-678h]
  int v1060; // [rsp+50h] [rbp-678h]
  int v1061; // [rsp+50h] [rbp-678h]
  char v1062; // [rsp+58h] [rbp-670h]
  char v1063; // [rsp+58h] [rbp-670h]
  char v1064; // [rsp+58h] [rbp-670h]
  char v1065; // [rsp+58h] [rbp-670h]
  char v1066; // [rsp+58h] [rbp-670h]
  char v1067; // [rsp+58h] [rbp-670h]
  char v1068; // [rsp+58h] [rbp-670h]
  char v1069; // [rsp+58h] [rbp-670h]
  char v1070; // [rsp+58h] [rbp-670h]
  char v1071; // [rsp+58h] [rbp-670h]
  char v1072; // [rsp+58h] [rbp-670h]
  char v1073; // [rsp+58h] [rbp-670h]
  char v1074; // [rsp+58h] [rbp-670h]
  char v1075; // [rsp+58h] [rbp-670h]
  char v1076; // [rsp+58h] [rbp-670h]
  char v1077; // [rsp+58h] [rbp-670h]
  char v1078; // [rsp+58h] [rbp-670h]
  char v1079; // [rsp+58h] [rbp-670h]
  char v1080; // [rsp+58h] [rbp-670h]
  char v1081; // [rsp+58h] [rbp-670h]
  char v1082; // [rsp+58h] [rbp-670h]
  char v1083; // [rsp+58h] [rbp-670h]
  char v1084; // [rsp+58h] [rbp-670h]
  char v1085; // [rsp+58h] [rbp-670h]
  char v1086; // [rsp+58h] [rbp-670h]
  char v1087; // [rsp+58h] [rbp-670h]
  char v1088; // [rsp+58h] [rbp-670h]
  char v1089; // [rsp+58h] [rbp-670h]
  char v1090; // [rsp+58h] [rbp-670h]
  char v1091; // [rsp+58h] [rbp-670h]
  char v1092; // [rsp+58h] [rbp-670h]
  char v1093; // [rsp+58h] [rbp-670h]
  char v1094; // [rsp+58h] [rbp-670h]
  char v1095; // [rsp+58h] [rbp-670h]
  char v1096; // [rsp+58h] [rbp-670h]
  char v1097; // [rsp+58h] [rbp-670h]
  char v1098; // [rsp+58h] [rbp-670h]
  char v1099; // [rsp+58h] [rbp-670h]
  char v1100; // [rsp+58h] [rbp-670h]
  char v1101; // [rsp+58h] [rbp-670h]
  char v1102; // [rsp+58h] [rbp-670h]
  char v1103; // [rsp+58h] [rbp-670h]
  char v1104; // [rsp+58h] [rbp-670h]
  char v1105; // [rsp+58h] [rbp-670h]
  char v1106; // [rsp+58h] [rbp-670h]
  char v1107; // [rsp+58h] [rbp-670h]
  char v1108; // [rsp+58h] [rbp-670h]
  char v1109; // [rsp+58h] [rbp-670h]
  char v1110; // [rsp+58h] [rbp-670h]
  __int64 v1111; // [rsp+60h] [rbp-668h]
  __int64 v1112; // [rsp+60h] [rbp-668h]
  __int64 v1113; // [rsp+60h] [rbp-668h]
  __int64 v1114; // [rsp+60h] [rbp-668h]
  __int64 v1115; // [rsp+60h] [rbp-668h]
  __int64 v1116; // [rsp+60h] [rbp-668h]
  __int64 v1117; // [rsp+60h] [rbp-668h]
  __int64 v1118; // [rsp+60h] [rbp-668h]
  __int64 v1119; // [rsp+60h] [rbp-668h]
  __int64 v1120; // [rsp+60h] [rbp-668h]
  __int64 v1121; // [rsp+60h] [rbp-668h]
  __int64 v1122; // [rsp+60h] [rbp-668h]
  __int64 v1123; // [rsp+60h] [rbp-668h]
  __int64 v1124; // [rsp+60h] [rbp-668h]
  __int64 v1125; // [rsp+60h] [rbp-668h]
  __int64 v1126; // [rsp+60h] [rbp-668h]
  __int64 v1127; // [rsp+60h] [rbp-668h]
  __int64 v1128; // [rsp+60h] [rbp-668h]
  __int64 v1129; // [rsp+60h] [rbp-668h]
  __int64 v1130; // [rsp+60h] [rbp-668h]
  __int64 v1131; // [rsp+60h] [rbp-668h]
  __int64 v1132; // [rsp+60h] [rbp-668h]
  __int64 v1133; // [rsp+60h] [rbp-668h]
  __int64 v1134; // [rsp+60h] [rbp-668h]
  __int64 v1135; // [rsp+60h] [rbp-668h]
  __int64 v1136; // [rsp+60h] [rbp-668h]
  __int64 v1137; // [rsp+60h] [rbp-668h]
  __int64 v1138; // [rsp+60h] [rbp-668h]
  __int64 v1139; // [rsp+60h] [rbp-668h]
  __int64 v1140; // [rsp+60h] [rbp-668h]
  __int64 v1141; // [rsp+60h] [rbp-668h]
  __int64 v1142; // [rsp+60h] [rbp-668h]
  __int64 v1143; // [rsp+60h] [rbp-668h]
  __int64 v1144; // [rsp+60h] [rbp-668h]
  __int64 v1145; // [rsp+60h] [rbp-668h]
  __int64 v1146; // [rsp+60h] [rbp-668h]
  __int64 v1147; // [rsp+60h] [rbp-668h]
  __int64 v1148; // [rsp+60h] [rbp-668h]
  __int64 v1149; // [rsp+60h] [rbp-668h]
  __int64 v1150; // [rsp+60h] [rbp-668h]
  __int64 v1151; // [rsp+60h] [rbp-668h]
  __int64 v1152; // [rsp+60h] [rbp-668h]
  __int64 v1153; // [rsp+60h] [rbp-668h]
  __int64 v1154; // [rsp+60h] [rbp-668h]
  __int64 v1155; // [rsp+60h] [rbp-668h]
  __int64 v1156; // [rsp+60h] [rbp-668h]
  __int64 v1157; // [rsp+60h] [rbp-668h]
  __int64 v1158; // [rsp+60h] [rbp-668h]
  __int64 v1159; // [rsp+60h] [rbp-668h]
  int v1160; // [rsp+68h] [rbp-660h]
  int v1161; // [rsp+68h] [rbp-660h]
  int v1162; // [rsp+68h] [rbp-660h]
  int v1163; // [rsp+68h] [rbp-660h]
  int v1164; // [rsp+68h] [rbp-660h]
  int v1165; // [rsp+68h] [rbp-660h]
  int v1166; // [rsp+68h] [rbp-660h]
  int v1167; // [rsp+68h] [rbp-660h]
  int v1168; // [rsp+68h] [rbp-660h]
  int v1169; // [rsp+68h] [rbp-660h]
  int v1170; // [rsp+68h] [rbp-660h]
  int v1171; // [rsp+68h] [rbp-660h]
  int v1172; // [rsp+68h] [rbp-660h]
  int v1173; // [rsp+68h] [rbp-660h]
  int v1174; // [rsp+68h] [rbp-660h]
  int v1175; // [rsp+68h] [rbp-660h]
  int v1176; // [rsp+68h] [rbp-660h]
  int v1177; // [rsp+68h] [rbp-660h]
  int v1178; // [rsp+68h] [rbp-660h]
  int v1179; // [rsp+68h] [rbp-660h]
  int v1180; // [rsp+68h] [rbp-660h]
  int v1181; // [rsp+68h] [rbp-660h]
  int v1182; // [rsp+68h] [rbp-660h]
  int v1183; // [rsp+68h] [rbp-660h]
  int v1184; // [rsp+68h] [rbp-660h]
  int v1185; // [rsp+68h] [rbp-660h]
  int v1186; // [rsp+68h] [rbp-660h]
  int v1187; // [rsp+68h] [rbp-660h]
  int v1188; // [rsp+68h] [rbp-660h]
  int v1189; // [rsp+68h] [rbp-660h]
  int v1190; // [rsp+68h] [rbp-660h]
  int v1191; // [rsp+68h] [rbp-660h]
  int v1192; // [rsp+68h] [rbp-660h]
  int v1193; // [rsp+68h] [rbp-660h]
  int v1194; // [rsp+68h] [rbp-660h]
  int v1195; // [rsp+68h] [rbp-660h]
  int v1196; // [rsp+68h] [rbp-660h]
  int v1197; // [rsp+68h] [rbp-660h]
  int v1198; // [rsp+68h] [rbp-660h]
  int v1199; // [rsp+68h] [rbp-660h]
  int v1200; // [rsp+68h] [rbp-660h]
  int v1201; // [rsp+68h] [rbp-660h]
  int v1202; // [rsp+68h] [rbp-660h]
  int v1203; // [rsp+68h] [rbp-660h]
  int v1204; // [rsp+68h] [rbp-660h]
  int v1205; // [rsp+68h] [rbp-660h]
  int v1206; // [rsp+68h] [rbp-660h]
  int v1207; // [rsp+68h] [rbp-660h]
  int v1208; // [rsp+68h] [rbp-660h]
  __int64 v1209; // [rsp+70h] [rbp-658h]
  __int64 v1210; // [rsp+70h] [rbp-658h]
  __int64 v1211; // [rsp+70h] [rbp-658h]
  __int64 v1212; // [rsp+70h] [rbp-658h]
  __int64 v1213; // [rsp+70h] [rbp-658h]
  __int64 v1214; // [rsp+70h] [rbp-658h]
  __int64 v1215; // [rsp+70h] [rbp-658h]
  __int64 v1216; // [rsp+70h] [rbp-658h]
  __int64 v1217; // [rsp+70h] [rbp-658h]
  __int64 v1218; // [rsp+70h] [rbp-658h]
  __int64 v1219; // [rsp+70h] [rbp-658h]
  __int64 v1220; // [rsp+70h] [rbp-658h]
  __int64 v1221; // [rsp+70h] [rbp-658h]
  __int64 v1222; // [rsp+70h] [rbp-658h]
  __int64 v1223; // [rsp+70h] [rbp-658h]
  __int64 v1224; // [rsp+70h] [rbp-658h]
  __int64 v1225; // [rsp+70h] [rbp-658h]
  __int64 v1226; // [rsp+70h] [rbp-658h]
  __int64 v1227; // [rsp+70h] [rbp-658h]
  __int64 v1228; // [rsp+70h] [rbp-658h]
  __int64 v1229; // [rsp+70h] [rbp-658h]
  __int64 v1230; // [rsp+70h] [rbp-658h]
  __int64 v1231; // [rsp+70h] [rbp-658h]
  __int64 v1232; // [rsp+70h] [rbp-658h]
  __int64 v1233; // [rsp+70h] [rbp-658h]
  __int64 v1234; // [rsp+70h] [rbp-658h]
  __int64 v1235; // [rsp+70h] [rbp-658h]
  __int64 v1236; // [rsp+70h] [rbp-658h]
  __int64 v1237; // [rsp+70h] [rbp-658h]
  __int64 v1238; // [rsp+70h] [rbp-658h]
  __int64 v1239; // [rsp+70h] [rbp-658h]
  __int64 v1240; // [rsp+70h] [rbp-658h]
  __int64 v1241; // [rsp+70h] [rbp-658h]
  __int64 v1242; // [rsp+70h] [rbp-658h]
  __int64 v1243; // [rsp+70h] [rbp-658h]
  __int64 v1244; // [rsp+70h] [rbp-658h]
  __int64 v1245; // [rsp+70h] [rbp-658h]
  __int64 v1246; // [rsp+70h] [rbp-658h]
  __int64 v1247; // [rsp+70h] [rbp-658h]
  __int64 v1248; // [rsp+70h] [rbp-658h]
  __int64 v1249; // [rsp+70h] [rbp-658h]
  __int64 v1250; // [rsp+70h] [rbp-658h]
  __int64 v1251; // [rsp+70h] [rbp-658h]
  __int64 v1252; // [rsp+70h] [rbp-658h]
  __int64 v1253; // [rsp+70h] [rbp-658h]
  __int64 v1254; // [rsp+70h] [rbp-658h]
  __int64 v1255; // [rsp+70h] [rbp-658h]
  __int64 v1256; // [rsp+70h] [rbp-658h]
  __int64 v1257; // [rsp+70h] [rbp-658h]
  __m128i v1258; // [rsp+D0h] [rbp-5F8h] BYREF
  ida_mcp::tools::dirtree_tools *v1259; // [rsp+E0h] [rbp-5E8h]
  const __m128i *v1260; // [rsp+E8h] [rbp-5E0h]
  __int64 *v1261; // [rsp+F0h] [rbp-5D8h]
  char *v1262; // [rsp+F8h] [rbp-5D0h]
  char *v1263; // [rsp+100h] [rbp-5C8h]
  __int64 *v1264; // [rsp+108h] [rbp-5C0h]
  __int64 *v1265; // [rsp+110h] [rbp-5B8h]
  char *v1266; // [rsp+118h] [rbp-5B0h]
  char *v1267; // [rsp+120h] [rbp-5A8h]
  __int8 *v1268; // [rsp+128h] [rbp-5A0h]
  _BYTE *v1269; // [rsp+130h] [rbp-598h]
  __m128i *v1270; // [rsp+138h] [rbp-590h]
  __int64 *v1271; // [rsp+140h] [rbp-588h]
  __int64 *v1272; // [rsp+148h] [rbp-580h]
  __int64 *v1273; // [rsp+150h] [rbp-578h]
  __int64 *v1274; // [rsp+158h] [rbp-570h]
  __int64 *v1275; // [rsp+160h] [rbp-568h]
  __int64 *v1276; // [rsp+168h] [rbp-560h]
  _QWORD *v1277; // [rsp+170h] [rbp-558h]
  _BYTE *v1278; // [rsp+178h] [rbp-550h]
  _BYTE **v1279; // [rsp+180h] [rbp-548h]
  __int64 *v1280; // [rsp+188h] [rbp-540h]
  __int128 *v1281; // [rsp+190h] [rbp-538h]
  __int64 *v1282; // [rsp+198h] [rbp-530h]
  __int128 *v1283; // [rsp+1A0h] [rbp-528h]
  __int64 *v1284; // [rsp+1A8h] [rbp-520h]
  __int128 *v1285; // [rsp+1B0h] [rbp-518h]
  __int64 *v1286; // [rsp+1B8h] [rbp-510h]
  __m128i *v1287; // [rsp+1C0h] [rbp-508h]
  __int64 *v1288; // [rsp+1C8h] [rbp-500h]
  char *v1289; // [rsp+1D0h] [rbp-4F8h]
  char *v1290; // [rsp+1D8h] [rbp-4F0h]
  char *v1291; // [rsp+1E0h] [rbp-4E8h]
  __int64 *v1292; // [rsp+1E8h] [rbp-4E0h]
  __m128i *v1293; // [rsp+1F0h] [rbp-4D8h]
  _QWORD *v1294; // [rsp+1F8h] [rbp-4D0h]
  __m128i v1295; // [rsp+200h] [rbp-4C8h] BYREF
  __int64 v1296; // [rsp+210h] [rbp-4B8h] BYREF
  __int64 v1297; // [rsp+218h] [rbp-4B0h] BYREF
  __int64 v1298; // [rsp+220h] [rbp-4A8h] BYREF
  __int128 v1299; // [rsp+228h] [rbp-4A0h]
  char v1300; // [rsp+238h] [rbp-490h]
  __int128 v1301; // [rsp+240h] [rbp-488h] BYREF
  __int64 v1302; // [rsp+250h] [rbp-478h] BYREF
  char v1303; // [rsp+258h] [rbp-470h] BYREF
  __int64 v1304; // [rsp+260h] [rbp-468h]
  char v1305; // [rsp+268h] [rbp-460h]
  __int128 v1306; // [rsp+270h] [rbp-458h] BYREF
  __int64 v1307; // [rsp+280h] [rbp-448h] BYREF
  char v1308; // [rsp+288h] [rbp-440h] BYREF
  __int64 v1309; // [rsp+290h] [rbp-438h]
  char v1310; // [rsp+298h] [rbp-430h]
  __int128 v1311; // [rsp+2A0h] [rbp-428h] BYREF
  __int64 v1312; // [rsp+2B0h] [rbp-418h] BYREF
  char v1313; // [rsp+2B8h] [rbp-410h] BYREF
  __int64 v1314; // [rsp+2C0h] [rbp-408h]
  __int64 v1315; // [rsp+2C8h] [rbp-400h] BYREF
  __int128 v1316; // [rsp+2D0h] [rbp-3F8h]
  __int64 v1317; // [rsp+2E0h] [rbp-3E8h] BYREF
  __int128 v1318; // [rsp+2E8h] [rbp-3E0h] BYREF
  __int64 v1319; // [rsp+2F8h] [rbp-3D0h] BYREF
  __int128 v1320; // [rsp+300h] [rbp-3C8h]
  __int64 v1321; // [rsp+310h] [rbp-3B8h] BYREF
  __int128 v1322; // [rsp+318h] [rbp-3B0h]
  __int64 v1323; // [rsp+328h] [rbp-3A0h] BYREF
  __int128 v1324; // [rsp+330h] [rbp-398h] BYREF
  __m128i v1325; // [rsp+340h] [rbp-388h] BYREF
  __int64 v1326; // [rsp+350h] [rbp-378h]
  char v1327; // [rsp+358h] [rbp-370h]
  __int128 v1328; // [rsp+360h] [rbp-368h] BYREF
  __int64 v1329; // [rsp+370h] [rbp-358h] BYREF
  char v1330; // [rsp+378h] [rbp-350h] BYREF
  __int64 v1331; // [rsp+380h] [rbp-348h]
  __int64 v1332; // [rsp+388h] [rbp-340h] BYREF
  __int128 v1333; // [rsp+390h] [rbp-338h] BYREF
  __int64 v1334; // [rsp+3A0h] [rbp-328h] BYREF
  __int128 v1335; // [rsp+3A8h] [rbp-320h]
  __int64 v1336; // [rsp+3B8h] [rbp-310h] BYREF
  char v1337; // [rsp+3C0h] [rbp-308h] BYREF
  __int64 v1338; // [rsp+3C8h] [rbp-300h]
  __int64 v1339; // [rsp+3D0h] [rbp-2F8h] BYREF
  __int128 v1340; // [rsp+3D8h] [rbp-2F0h] BYREF
  __int64 v1341; // [rsp+3E8h] [rbp-2E0h] BYREF
  __int128 v1342; // [rsp+3F0h] [rbp-2D8h]
  __m128i v1343; // [rsp+400h] [rbp-2C8h] BYREF
  __int64 v1344; // [rsp+410h] [rbp-2B8h]
  char v1345; // [rsp+418h] [rbp-2B0h]
  __int128 v1346; // [rsp+420h] [rbp-2A8h] BYREF
  __m128i v1347; // [rsp+430h] [rbp-298h] BYREF
  __int64 v1348; // [rsp+440h] [rbp-288h]
  __int64 v1349; // [rsp+448h] [rbp-280h] BYREF
  __int128 v1350; // [rsp+450h] [rbp-278h] BYREF
  __int64 v1351; // [rsp+460h] [rbp-268h] BYREF
  __int128 v1352; // [rsp+468h] [rbp-260h]
  __int64 v1353; // [rsp+478h] [rbp-250h] BYREF
  char v1354; // [rsp+480h] [rbp-248h] BYREF
  __int64 v1355; // [rsp+488h] [rbp-240h]
  char v1356; // [rsp+490h] [rbp-238h] BYREF
  __int128 v1357; // [rsp+498h] [rbp-230h] BYREF
  __int64 v1358; // [rsp+4A8h] [rbp-220h] BYREF
  char v1359; // [rsp+4B0h] [rbp-218h] BYREF
  __int64 v1360; // [rsp+4B8h] [rbp-210h]
  __int64 v1361; // [rsp+4C0h] [rbp-208h] BYREF
  __int128 v1362; // [rsp+4C8h] [rbp-200h]
  __m128i v1363; // [rsp+4D8h] [rbp-1F0h] BYREF
  __int64 v1364; // [rsp+4E8h] [rbp-1E0h]
  char v1365; // [rsp+4F0h] [rbp-1D8h] BYREF
  __int128 v1366; // [rsp+4F8h] [rbp-1D0h]
  _BYTE v1367[24]; // [rsp+508h] [rbp-1C0h] BYREF
  char v1368; // [rsp+520h] [rbp-1A8h]
  __int128 v1369; // [rsp+528h] [rbp-1A0h]
  char v1370; // [rsp+538h] [rbp-190h] BYREF
  __int64 v1371; // [rsp+540h] [rbp-188h] BYREF
  __int128 v1372; // [rsp+548h] [rbp-180h]
  __m128i v1373; // [rsp+558h] [rbp-170h] BYREF
  __int64 v1374; // [rsp+568h] [rbp-160h]
  _QWORD v1375[2]; // [rsp+570h] [rbp-158h] BYREF
  __int64 v1376; // [rsp+580h] [rbp-148h]
  char v1377; // [rsp+588h] [rbp-140h] BYREF
  void *v1378; // [rsp+590h] [rbp-138h] BYREF
  __int64 v1379; // [rsp+598h] [rbp-130h]
  __m128i v1380; // [rsp+5A0h] [rbp-128h] BYREF
  __int64 v1381; // [rsp+5B8h] [rbp-110h]
  _QWORD v1382[2]; // [rsp+5C0h] [rbp-108h] BYREF
  __int64 v1383; // [rsp+5D0h] [rbp-F8h]
  char v1384; // [rsp+5D8h] [rbp-F0h] BYREF
  _BYTE *v1385; // [rsp+5E0h] [rbp-E8h] BYREF
  __int64 v1386; // [rsp+5E8h] [rbp-E0h]
  _BYTE v1387[16]; // [rsp+5F0h] [rbp-D8h] BYREF
  _BYTE *v1388; // [rsp+600h] [rbp-C8h] BYREF
  __int64 v1389; // [rsp+608h] [rbp-C0h]
  _BYTE v1390[16]; // [rsp+610h] [rbp-B8h] BYREF
  char v1391; // [rsp+620h] [rbp-A8h]
  __int64 v1392; // [rsp+628h] [rbp-A0h]
  char v1393; // [rsp+640h] [rbp-88h]
  char v1394; // [rsp+678h] [rbp-50h]
  unsigned __int64 v1395; // [rsp+688h] [rbp-40h]

  v1259 = this;
  v1395 = __readfsqword(0x28u);
  v1278 = v1387;
  v1385 = v1387;
  v1386 = 0;
  v1387[0] = 0;
  v1388 = v1390;
  v1389 = 0;
  v1390[0] = 0;
  v1391 = 0;
  v1392 = 0;
  v1393 = 0;
  v1394 = 0;
  std::string::_M_replace();
  v1279 = &v1388;
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1321);
  *((_QWORD *)&v1322 + 1) = 0;
  LOBYTE(v1323) = 0;
  *(_QWORD *)&v1324 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1323) = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "object", v3, v4, v5, v6, v403, v492, v581);
  v1324 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1378,
    (const __m128i *)&v1321);
  v1380.m128i_i64[0] = 0;
  v1365 = 0;
  *(_QWORD *)&v1366 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1365 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "properties", v8, v9, v10, v11, v404, v493, v582);
  LOBYTE(v1339) = 0;
  *(_QWORD *)&v1340 = 0;
  v1366 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1339) = 3;
  v12 = operator new(0x20u);
  strcpy((char *)(v12 + 16), "tree");
  *(_QWORD *)v12 = v12 + 16;
  *(_QWORD *)(v12 + 8) = 4;
  v1340 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1325);
  v1326 = 0;
  v1327 = 0;
  *(_QWORD *)&v1328 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1327 = 3;
  v13 = operator new(0x20u);
  *(_QWORD *)v13 = v13 + 16;
  strcpy((char *)(v13 + 16), "string");
  *(_QWORD *)(v13 + 8) = 6;
  v1328 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1334,
    &v1325);
  *((_QWORD *)&v1335 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1329);
  v1331 = 0;
  LOBYTE(v1332) = 0;
  *(_QWORD *)&v1333 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1332) = 3;
  v14 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v14,
    "Tree name: funcs, names, imports, local_types, bookmarks, bpts",
    v15,
    v16,
    v17,
    v18,
    (int)&v1325,
    (int)&v1328,
    (__int64)&v1329);
  v1273 = &v1336;
  v1333 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1336,
    v583);
  v1338 = 0;
  v1286 = &v1341;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1341,
    (const __m128i *)&v1334);
  *((_QWORD *)&v1342 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1361,
    (const __m128i *)&v1339);
  *((_QWORD *)&v1362 + 1) = 0;
  v1356 = 0;
  *(_QWORD *)&v1357 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1356 = 3;
  v19 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v19, "path", v20, v21, v22, v23, v405, v494, (__int64)v583);
  v1357 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1343);
  v1344 = 0;
  v1345 = 0;
  *(_QWORD *)&v1346 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1345 = 3;
  v24 = operator new(0x20u);
  *(_QWORD *)v24 = v24 + 16;
  strcpy((char *)(v24 + 16), "string");
  *(_QWORD *)(v24 + 8) = 6;
  v1346 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1351,
    &v1343);
  *((_QWORD *)&v1352 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1347);
  v1348 = 0;
  LOBYTE(v1349) = 0;
  *(_QWORD *)&v1350 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1349) = 3;
  v25 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v25,
    "Directory path (default: /)",
    v26,
    v27,
    v28,
    v29,
    v406,
    v495,
    v584);
  v1274 = &v1353;
  v1350 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1353,
    &v1347);
  v1355 = 0;
  v1275 = &v1358;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1358,
    (const __m128i *)&v1351);
  v1360 = 0;
  v1260 = (const __m128i *)&v1356;
  v1287 = &v1363;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1363,
    (const __m128i *)&v1356);
  v1364 = 0;
  v1281 = (__int128 *)v1367;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1367,
    (const __m128i *)&v1361);
  *(_QWORD *)&v1367[16] = 0;
  v1276 = &v1380.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1380.m128i_i64[1],
    (const __m128i *)&v1365);
  v1381 = 0;
  LOBYTE(v1371) = 0;
  *(_QWORD *)&v1372 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1371) = 3;
  v30 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v30, "required", v31, v32, v33, v34, v407, v496, v585);
  *(_QWORD *)&v1318 = 0;
  v1372 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1317) = 3;
  v35 = operator new(0x20u);
  *(_QWORD *)v35 = v35 + 16;
  strcpy((char *)(v35 + 16), "tree");
  v36 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v35 + 8) = 4;
  v1270 = &v1295;
  v1258 = (__m128i)v36;
  v1318 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v37 = _mm_load_si128(&v1295);
  v1374 = 0;
  v1277 = v1382;
  v1373 = v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1382,
    (const __m128i *)&v1371);
  v1383 = 0;
  LOBYTE(v1296) = 0;
  v1271 = &v1296;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1296,
    (__int64)&v1378,
    3,
    v38,
    v39,
    v40,
    v408,
    v497,
    v586,
    (int)&v1343,
    (int)&v1346,
    (int)&v1347,
    (__int64)&v1357,
    (int)&v1334,
    (int)&v1351,
    (int)&v1321,
    (int)&v1318,
    (char)&v1324,
    (__int64)&v1333,
    (int)&v1340,
    (__int64)&v1350);
  v41 = v1391;
  v42 = (void **)&v1384;
  v43 = v1297;
  v1391 = v1296;
  LOBYTE(v1296) = v41;
  v1297 = v1392;
  v1392 = v43;
  v1272 = &v1297;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v42 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v42 != &v1378 );
  v1280 = &v1373.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1269 = &v1367[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1268 = &v1363.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1267 = &v1359;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1266 = &v1354;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1265 = &v1347.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1264 = &v1343.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1263 = &v1337;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1262 = &v1330;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1261 = &v1325.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v44 = _mm_load_si128(&v1258);
  v1379 = 0;
  v1378 = ida_mcp::tools::dirtree_tools::`anonymous namespace'::list_directory;
  v1380 = v44;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1380.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1380.m128i_i64[0])(&v1378, &v1378, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1385);
  v1386 = 0;
  v1387[0] = 0;
  v1385 = v1278;
  v1388 = v1390;
  v1389 = 0;
  v1390[0] = 0;
  v1391 = 0;
  v1392 = 0;
  v1393 = 0;
  v1394 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v964);
  *((_QWORD *)&v1322 + 1) = 0;
  LOBYTE(v1323) = 0;
  *(_QWORD *)&v1324 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1323) = 3;
  v45 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v45, "object", v46, v47, v48, v49, v409, v498, v587);
  v1324 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1378,
    v964);
  v1380.m128i_i64[0] = 0;
  v1365 = 0;
  *(_QWORD *)&v1366 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1365 = 3;
  v50 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v50, "properties", v51, v52, v53, v54, v410, v499, v588);
  LOBYTE(v1339) = 0;
  *(_QWORD *)&v1340 = 0;
  v1366 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1339) = 3;
  v55 = operator new(0x20u);
  strcpy((char *)(v55 + 16), "tree");
  *(_QWORD *)v55 = v55 + 16;
  *(_QWORD *)(v55 + 8) = 4;
  v1340 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v411);
  v1326 = 0;
  v1327 = 0;
  *(_QWORD *)&v1328 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1327 = 3;
  v56 = operator new(0x20u);
  *(_QWORD *)v56 = v56 + 16;
  strcpy((char *)(v56 + 16), "string");
  *(_QWORD *)(v56 + 8) = 6;
  v1328 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v866,
    v411);
  *((_QWORD *)&v1335 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v589);
  v1331 = 0;
  LOBYTE(v1332) = 0;
  *(_QWORD *)&v1333 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1332) = 3;
  v57 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v57, "Tree name", v58, v59, v60, v61, (int)v411, v500, (__int64)v589);
  v1333 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1273,
    v590);
  v1338 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1286,
    v866);
  *((_QWORD *)&v1342 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1361,
    (const __m128i *)&v1339);
  *((_QWORD *)&v1362 + 1) = 0;
  v1356 = 0;
  *(_QWORD *)&v1357 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1356 = 3;
  v62 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v62, "path", v63, v64, v65, v66, v412, v501, (__int64)v590);
  v1357 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v670);
  v1344 = 0;
  v1345 = 0;
  *(_QWORD *)&v1346 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1345 = 3;
  v67 = operator new(0x20u);
  *(_QWORD *)v67 = v67 + 16;
  strcpy((char *)(v67 + 16), "string");
  *(_QWORD *)(v67 + 8) = 6;
  v1346 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v915,
    v670);
  *((_QWORD *)&v1352 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v768);
  v1348 = 0;
  LOBYTE(v1349) = 0;
  *(_QWORD *)&v1350 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1349) = 3;
  v68 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v68, "Folder path to create", v69, v70, v71, v72, v413, v502, v591);
  v1350 = (unsigned __int64)v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1274,
    v768);
  v1355 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1275,
    v915);
  v1360 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1287,
    v1260);
  v1364 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1281,
    (const __m128i *)&v1361);
  *(_QWORD *)&v1367[16] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1276,
    (const __m128i *)&v1365);
  v1381 = 0;
  LOBYTE(v1371) = 0;
  *(_QWORD *)&v1372 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1371) = 3;
  v73 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v73, "required", v74, v75, v76, v77, v414, v503, v592);
  LOBYTE(v1317) = 0;
  *(_QWORD *)&v1318 = 0;
  v1372 = (unsigned __int64)v73;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1317) = 3;
  v78 = operator new(0x20u);
  *(_QWORD *)v78 = v78 + 16;
  strcpy((char *)(v78 + 16), "tree");
  *(_QWORD *)(v78 + 8) = 4;
  LOBYTE(v1319) = 0;
  *(_QWORD *)&v1320 = 0;
  v1318 = (unsigned __int64)v78;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1319) = 3;
  v79 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v79, "path", v80, v81, v82, v83, v415, v504, v593);
  v1320 = (unsigned __int64)v79;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v84 = _mm_load_si128(&v1295);
  v1374 = 0;
  v1373 = v84;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1277,
    (__int64)&v1371,
    2,
    v85,
    v86,
    v87,
    v416,
    v505,
    v594,
    (int)v670,
    v719,
    (int)v768,
    v817,
    (int)v866,
    (int)v915,
    (int)v964,
    v1013,
    v1062,
    v1111,
    v1160,
    v1209);
  v1383 = 0;
  LOBYTE(v1296) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1271,
    (__int64)&v1378,
    3,
    v88,
    v89,
    v90,
    v417,
    v506,
    v595,
    v671,
    v720,
    v769,
    v818,
    v867,
    v916,
    v965,
    v1014,
    v1063,
    v1112,
    v1161,
    v1210);
  v91 = v1391;
  v92 = (void **)&v1384;
  v1391 = v1296;
  v93 = v1392;
  LOBYTE(v1296) = v91;
  v1392 = v1297;
  v1297 = v93;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v92 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v92 != &v1378 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v94 = _mm_load_si128(&v1258);
  v1379 = 0;
  v1378 = ida_mcp::tools::dirtree_tools::`anonymous namespace'::make_directory;
  v1380 = v94;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1380.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1380.m128i_i64[0])(&v1378, &v1378, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1385);
  v1386 = 0;
  v1387[0] = 0;
  v1385 = v1278;
  v1388 = v1390;
  v1389 = 0;
  v1390[0] = 0;
  v1391 = 0;
  v1392 = 0;
  v1393 = 0;
  v1394 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v966);
  *((_QWORD *)&v1322 + 1) = 0;
  LOBYTE(v1323) = 0;
  *(_QWORD *)&v1324 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1323) = 3;
  v95 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v95, "object", v96, v97, v98, v99, v418, v507, v596);
  v1324 = (unsigned __int64)v95;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1378,
    (__int64)v966,
    2,
    v100,
    v101,
    v102,
    v419,
    v508,
    v597,
    v672,
    v721,
    v770,
    v819,
    v868,
    v917,
    (int)v966,
    v1015,
    v1064,
    v1113,
    v1162,
    v1211);
  v1380.m128i_i64[0] = 0;
  v1365 = 0;
  *(_QWORD *)&v1366 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1365 = 3;
  v103 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v103, "properties", v104, v105, v106, v107, v420, v509, v598);
  LOBYTE(v1339) = 0;
  *(_QWORD *)&v1340 = 0;
  v1366 = (unsigned __int64)v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1339) = 3;
  v108 = operator new(0x20u);
  strcpy((char *)(v108 + 16), "tree");
  *(_QWORD *)v108 = v108 + 16;
  *(_QWORD *)(v108 + 8) = 4;
  v1340 = (unsigned __int64)v108;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v421);
  v1326 = 0;
  v1327 = 0;
  *(_QWORD *)&v1328 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1327 = 3;
  v109 = operator new(0x20u);
  *(_QWORD *)v109 = v109 + 16;
  strcpy((char *)(v109 + 16), "string");
  *(_QWORD *)(v109 + 8) = 6;
  v1328 = (unsigned __int64)v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v869,
    (__int64)v421,
    2,
    v110,
    v111,
    v112,
    (int)v421,
    v510,
    v599,
    v673,
    v722,
    v771,
    v820,
    (int)v869,
    v918,
    v967,
    v1016,
    v1065,
    v1114,
    v1163,
    v1212);
  *((_QWORD *)&v1335 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v600);
  v1331 = 0;
  LOBYTE(v1332) = 0;
  *(_QWORD *)&v1333 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1332) = 3;
  v113 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v113, "Tree name", v114, v115, v116, v117, v422, v511, (__int64)v600);
  v1333 = (unsigned __int64)v113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1273,
    v601,
    2,
    v118,
    v119,
    v120,
    v423,
    v512,
    v601,
    v674,
    v723,
    v772,
    v821,
    v870,
    v919,
    v968,
    v1017,
    v1066,
    v1115,
    v1164,
    v1213);
  v1338 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1286,
    v871,
    2,
    v121,
    v122,
    v123,
    v424,
    v513,
    v602,
    v675,
    v724,
    v773,
    v822,
    v871,
    v920,
    v969,
    v1018,
    v1067,
    v1116,
    v1165,
    v1214);
  *((_QWORD *)&v1342 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1361,
    (__int64)&v1339,
    2,
    v124,
    v125,
    v126,
    v425,
    v514,
    v603,
    v676,
    v725,
    v774,
    v823,
    v872,
    v921,
    v970,
    v1019,
    v1068,
    v1117,
    v1166,
    v1215);
  *((_QWORD *)&v1362 + 1) = 0;
  v1356 = 0;
  *(_QWORD *)&v1357 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1356 = 3;
  v127 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v127, "path", v128, v129, v130, v131, v426, v515, v604);
  v1357 = (unsigned __int64)v127;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v677);
  v1344 = 0;
  v1345 = 0;
  *(_QWORD *)&v1346 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1345 = 3;
  v132 = operator new(0x20u);
  *(_QWORD *)v132 = v132 + 16;
  strcpy((char *)(v132 + 16), "string");
  *(_QWORD *)(v132 + 8) = 6;
  v1346 = (unsigned __int64)v132;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v922,
    (__int64)v677,
    2,
    v133,
    v134,
    26478,
    v427,
    v516,
    v605,
    (int)v677,
    v726,
    v775,
    v824,
    v873,
    (int)v922,
    v971,
    v1020,
    v1069,
    v1118,
    v1167,
    v1216);
  *((_QWORD *)&v1352 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v776);
  v1348 = 0;
  LOBYTE(v1349) = 0;
  *(_QWORD *)&v1350 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1349) = 3;
  v135 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v135,
    "Folder path to remove",
    v136,
    v137,
    v138,
    v139,
    v428,
    v517,
    v606);
  v1350 = (unsigned __int64)v135;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1274,
    (__int64)v776,
    2,
    v140,
    v141,
    v142,
    v429,
    v518,
    v607,
    v678,
    v727,
    (int)v776,
    v825,
    v874,
    v923,
    v972,
    v1021,
    v1070,
    v1119,
    v1168,
    v1217);
  v1355 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1275,
    v924,
    2,
    v143,
    v144,
    v145,
    v430,
    v519,
    v608,
    v679,
    v728,
    v777,
    v826,
    v875,
    v924,
    v973,
    v1022,
    v1071,
    v1120,
    v1169,
    v1218);
  v1360 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1287,
    (__int64)v1260,
    2,
    v146,
    v147,
    v148,
    v431,
    v520,
    v609,
    v680,
    v729,
    v778,
    v827,
    v876,
    v925,
    v974,
    v1023,
    v1072,
    v1121,
    v1170,
    v1219);
  v1364 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1281,
    (__int64)&v1361,
    2,
    v149,
    v150,
    v151,
    v432,
    v521,
    v610,
    v681,
    v730,
    v779,
    v828,
    v877,
    v926,
    v975,
    v1024,
    v1073,
    v1122,
    v1171,
    v1220);
  *(_QWORD *)&v1367[16] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1276,
    (__int64)&v1365,
    2,
    v152,
    v153,
    v154,
    v433,
    v522,
    v611,
    v682,
    v731,
    v780,
    v829,
    v878,
    v927,
    v976,
    v1025,
    v1074,
    v1123,
    v1172,
    v1221);
  v1381 = 0;
  LOBYTE(v1371) = 0;
  *(_QWORD *)&v1372 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1371) = 3;
  v155 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v155, "required", v156, v157, v158, v159, v434, v523, v612);
  LOBYTE(v1317) = 0;
  *(_QWORD *)&v1318 = 0;
  v1372 = (unsigned __int64)v155;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1317) = 3;
  v160 = operator new(0x20u);
  *(_QWORD *)v160 = v160 + 16;
  strcpy((char *)(v160 + 16), "tree");
  *(_QWORD *)(v160 + 8) = 4;
  LOBYTE(v1319) = 0;
  *(_QWORD *)&v1320 = 0;
  v1318 = (unsigned __int64)v160;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1319) = 3;
  v161 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v161, "path", v162, v163, v164, v165, v435, v524, v613);
  v1320 = (unsigned __int64)v161;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v166 = _mm_load_si128(&v1295);
  v1374 = 0;
  v1373 = v166;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1277,
    (__int64)&v1371,
    2,
    v167,
    v168,
    v169,
    v436,
    v525,
    v614,
    v683,
    v732,
    v781,
    v830,
    v879,
    v928,
    v977,
    v1026,
    v1075,
    v1124,
    v1173,
    v1222);
  v1383 = 0;
  LOBYTE(v1296) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1271,
    (__int64)&v1378,
    3,
    v170,
    v171,
    v172,
    v437,
    v526,
    v615,
    v684,
    v733,
    v782,
    v831,
    v880,
    v929,
    v978,
    v1027,
    v1076,
    v1125,
    v1174,
    v1223);
  v173 = v1391;
  v174 = (void **)&v1384;
  v1391 = v1296;
  v175 = v1392;
  LOBYTE(v1296) = v173;
  v1392 = v1297;
  v1297 = v175;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v174 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v174 != &v1378 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v176 = _mm_load_si128(&v1258);
  v1379 = 0;
  v1378 = ida_mcp::tools::dirtree_tools::`anonymous namespace'::remove_directory;
  v1380 = v176;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1380.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1380.m128i_i64[0])(&v1378, &v1378, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1385);
  v1386 = 0;
  v1387[0] = 0;
  v1385 = v1278;
  v1388 = v1390;
  v1389 = 0;
  v1390[0] = 0;
  v1391 = 0;
  v1392 = 0;
  v1393 = 0;
  v1394 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v1288 = &v1298;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1298);
  *((_QWORD *)&v1299 + 1) = 0;
  v1300 = 0;
  *(_QWORD *)&v1301 = 0;
  v1281 = &v1301;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1300 = 3;
  v177 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v177, "object", v178, v179, v180, v181, v438, v527, v616);
  v1301 = (unsigned __int64)v177;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1378,
    (__int64)v1288,
    2,
    v182,
    v183,
    v184,
    v439,
    v528,
    v617,
    v685,
    v734,
    v783,
    v832,
    v881,
    v930,
    v979,
    v1028,
    v1077,
    v1126,
    v1175,
    v1224);
  v1380.m128i_i64[0] = 0;
  v1356 = 0;
  *(_QWORD *)&v1357 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1356 = 3;
  v185 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v185, "properties", v186, v187, v188, v189, v440, v529, v618);
  LOBYTE(v1317) = 0;
  *(_QWORD *)&v1318 = 0;
  v1357 = (unsigned __int64)v185;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1317) = 3;
  v190 = operator new(0x20u);
  strcpy((char *)(v190 + 16), "tree");
  *(_QWORD *)v190 = v190 + 16;
  *(_QWORD *)(v190 + 8) = 4;
  v1282 = &v1302;
  v1318 = (unsigned __int64)v190;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1302);
  v1304 = 0;
  v1305 = 0;
  *(_QWORD *)&v1306 = 0;
  v1283 = &v1306;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1305 = 3;
  v191 = operator new(0x20u);
  *(_QWORD *)v191 = v191 + 16;
  v192 = v1282;
  strcpy((char *)(v191 + 16), "string");
  *(_QWORD *)(v191 + 8) = 6;
  v1280 = &v1312;
  v1306 = (unsigned __int64)v191;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1312,
    (__int64)v192,
    2,
    v193,
    v194,
    v195,
    v441,
    v530,
    v619,
    v686,
    v735,
    v784,
    v833,
    v882,
    v931,
    v980,
    v1029,
    v1078,
    v1127,
    v1176,
    v1225);
  v1314 = 0;
  v1284 = &v1307;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1307);
  v1309 = 0;
  v1310 = 0;
  *(_QWORD *)&v1311 = 0;
  v1285 = &v1311;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1310 = 3;
  v196 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v196, "Tree name", v197, v198, v199, v200, v442, v531, v620);
  v1311 = (unsigned __int64)v196;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1315,
    (__int64)v1284,
    2,
    v201,
    v202,
    v203,
    v443,
    v532,
    v621,
    v687,
    v736,
    v785,
    v834,
    v883,
    v932,
    v981,
    v1030,
    v1079,
    v1128,
    v1177,
    v1226);
  *((_QWORD *)&v1316 + 1) = 0;
  v1292 = &v1319;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1319,
    (__int64)v1280,
    2,
    v204,
    v205,
    v206,
    v444,
    v533,
    v622,
    v688,
    v737,
    v786,
    v835,
    v884,
    v933,
    v982,
    v1031,
    v1080,
    v1129,
    v1178,
    v1227);
  *((_QWORD *)&v1320 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1371,
    (__int64)&v1317,
    2,
    v207,
    v208,
    v209,
    v445,
    v534,
    v623,
    v689,
    v738,
    v787,
    v836,
    v885,
    v934,
    v983,
    v1032,
    v1081,
    v1130,
    v1179,
    v1228);
  *((_QWORD *)&v1372 + 1) = 0;
  LOBYTE(v1334) = 0;
  *(_QWORD *)&v1335 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1334) = 3;
  v210 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v210, "from", v211, v212, v213, v214, v446, v535, v624);
  v1335 = (unsigned __int64)v210;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v984);
  *((_QWORD *)&v1322 + 1) = 0;
  LOBYTE(v1323) = 0;
  *(_QWORD *)&v1324 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1323) = 3;
  v215 = operator new(0x20u);
  *(_QWORD *)v215 = v215 + 16;
  strcpy((char *)(v215 + 16), "string");
  *(_QWORD *)(v215 + 8) = 6;
  v1324 = (unsigned __int64)v215;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v625,
    (__int64)v984,
    2,
    v216,
    v217,
    v218,
    v447,
    v536,
    (int)v625,
    v690,
    v739,
    v788,
    v837,
    v886,
    v935,
    (int)v984,
    v1033,
    v1082,
    v1131,
    v1180,
    v1229);
  v1331 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v448);
  v1326 = 0;
  v1327 = 0;
  *(_QWORD *)&v1328 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1327 = 3;
  v219 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v219, "Current path", v220, v221, v222, v223, (int)v448, v537, v626);
  v1328 = (unsigned __int64)v219;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1332,
    v449,
    2,
    v224,
    v225,
    v226,
    v449,
    v538,
    v627,
    v691,
    v740,
    v789,
    v838,
    v887,
    v936,
    v985,
    v1034,
    v1083,
    v1132,
    v1181,
    v1230);
  *((_QWORD *)&v1333 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1273,
    v628,
    2,
    v227,
    v228,
    v229,
    v450,
    v539,
    v628,
    v692,
    v741,
    v790,
    v839,
    v888,
    v937,
    v986,
    v1035,
    v1084,
    v1133,
    v1182,
    v1231);
  v1338 = 0;
  v1293 = &v1373;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1373,
    v889,
    2,
    v230,
    v231,
    v232,
    v451,
    v540,
    v629,
    v693,
    v742,
    v791,
    v840,
    v889,
    v938,
    v987,
    v1036,
    v1085,
    v1134,
    v1183,
    v1232);
  v1374 = 0;
  LOBYTE(v1351) = 0;
  *(_QWORD *)&v1352 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1351) = 3;
  v233 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v233, "to", v234, v235, v236, v237, v452, v541, v630);
  v1352 = (unsigned __int64)v233;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1339);
  *((_QWORD *)&v1340 + 1) = 0;
  LOBYTE(v1341) = 0;
  *(_QWORD *)&v1342 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1341) = 3;
  v238 = operator new(0x20u);
  *(_QWORD *)v238 = v238 + 16;
  strcpy((char *)(v238 + 16), "string");
  *(_QWORD *)(v238 + 8) = 6;
  v1342 = (unsigned __int64)v238;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v792,
    (__int64)&v1339,
    2,
    v239,
    v240,
    v241,
    v453,
    v542,
    v631,
    v694,
    v743,
    (int)v792,
    v841,
    v890,
    v939,
    v988,
    v1037,
    v1086,
    v1135,
    v1184,
    v1233);
  v1348 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v695);
  v1344 = 0;
  v1345 = 0;
  *(_QWORD *)&v1346 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1345 = 3;
  v242 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v242, "New path", v243, v244, v245, v246, v454, v543, v632);
  v1346 = (unsigned __int64)v242;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1349,
    (__int64)v695,
    2,
    v247,
    v248,
    v249,
    v455,
    v544,
    v633,
    (int)v695,
    v744,
    v793,
    v842,
    v891,
    v940,
    v989,
    v1038,
    v1087,
    v1136,
    v1185,
    v1234);
  *((_QWORD *)&v1350 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1274,
    v794,
    2,
    v250,
    v251,
    v252,
    v456,
    v545,
    v634,
    v696,
    v745,
    v794,
    v843,
    v892,
    v941,
    v990,
    v1039,
    v1088,
    v1137,
    v1186,
    v1235);
  v1355 = 0;
  v1294 = v1375;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1375,
    v942,
    2,
    v253,
    v254,
    v255,
    v457,
    v546,
    v635,
    v697,
    v746,
    v795,
    v844,
    v893,
    v942,
    v991,
    v1040,
    v1089,
    v1138,
    v1187,
    v1236);
  v1376 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1275,
    (__int64)&v1371,
    3,
    v256,
    v257,
    v258,
    v458,
    v547,
    v636,
    v698,
    v747,
    v796,
    v845,
    v894,
    v943,
    v992,
    v1041,
    v1090,
    v1139,
    v1188,
    v1237);
  v1360 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1276,
    (__int64)v1260,
    2,
    v259,
    v260,
    v261,
    v459,
    v548,
    v637,
    v699,
    v748,
    v797,
    v846,
    v895,
    v944,
    v993,
    v1042,
    v1091,
    v1140,
    v1189,
    v1238);
  v1381 = 0;
  LOBYTE(v1361) = 0;
  *(_QWORD *)&v1362 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1361) = 3;
  v262 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v262, "required", v263, v264, v265, v266, v460, v549, v638);
  v1365 = 0;
  *(_QWORD *)&v1366 = 0;
  v1362 = (unsigned __int64)v262;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1365 = 3;
  v267 = operator new(0x20u);
  *(_QWORD *)v267 = v267 + 16;
  strcpy((char *)(v267 + 16), "tree");
  *(_QWORD *)(v267 + 8) = 4;
  v1367[0] = 0;
  *(_QWORD *)&v1367[8] = 0;
  v1366 = (unsigned __int64)v267;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1367[0] = 3;
  v268 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v268, "from", v269, v270, v271, v272, v461, v550, v639);
  v1368 = 0;
  *(_QWORD *)&v1369 = 0;
  *(_OWORD *)&v1367[8] = (unsigned __int64)v268;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1368 = 3;
  v273 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v273, "to", v274, v275, v276, v277, v462, v551, v640);
  v1369 = (unsigned __int64)v273;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v278 = _mm_load_si128(&v1295);
  v1364 = 0;
  v1363 = v278;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1277,
    (__int64)&v1361,
    2,
    v279,
    v280,
    v281,
    v463,
    v552,
    v641,
    v700,
    v749,
    v798,
    v847,
    v896,
    v945,
    v994,
    v1043,
    v1092,
    v1141,
    v1190,
    v1239);
  v1383 = 0;
  LOBYTE(v1296) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1271,
    (__int64)&v1378,
    3,
    v282,
    v283,
    v284,
    v464,
    v553,
    v642,
    v701,
    v750,
    v799,
    v848,
    v897,
    v946,
    v995,
    v1044,
    v1093,
    v1142,
    v1191,
    v1240);
  LOBYTE(v192) = v1391;
  v285 = (void **)&v1384;
  v1391 = v1296;
  v286 = v1392;
  LOBYTE(v1296) = (_BYTE)v192;
  v1392 = v1297;
  v1297 = v286;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v285 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v285 != &v1378 );
  v287 = &v1370;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v287 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v287 != &v1365 );
  v288 = (__int64 *)&v1377;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v288 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v288 != &v1371 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1291 = &v1313;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1290 = &v1308;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1289 = &v1303;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v289 = _mm_load_si128(&v1258);
  v1379 = 0;
  v1378 = ida_mcp::tools::dirtree_tools::`anonymous namespace'::rename_entry;
  v1380 = v289;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1380.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1380.m128i_i64[0])(&v1378, &v1378, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1385);
  v1386 = 0;
  v1387[0] = 0;
  v1385 = v1278;
  v1388 = v1390;
  v1389 = 0;
  v1390[0] = 0;
  v1391 = 0;
  v1392 = 0;
  v1393 = 0;
  v1394 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1282);
  v1304 = 0;
  v1305 = 0;
  *(_QWORD *)&v1306 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1305 = 3;
  v290 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v290, "object", v291, v292, v293, v294, v465, v554, v643);
  v1306 = (unsigned __int64)v290;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1378,
    (__int64)v1282,
    2,
    v295,
    v296,
    v297,
    v466,
    v555,
    v644,
    v702,
    v751,
    v800,
    v849,
    v898,
    v947,
    v996,
    v1045,
    v1094,
    v1143,
    v1192,
    v1241);
  v1380.m128i_i64[0] = 0;
  LOBYTE(v1361) = 0;
  *(_QWORD *)&v1362 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1361) = 3;
  v298 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v298, "properties", v299, v300, v301, v302, v467, v556, v645);
  LOBYTE(v1321) = 0;
  *(_QWORD *)&v1322 = 0;
  v1362 = (unsigned __int64)v298;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1321) = 3;
  v303 = operator new(0x20u);
  strcpy((char *)(v303 + 16), "tree");
  v304 = v1284;
  *(_QWORD *)v303 = v303 + 16;
  *(_QWORD *)(v303 + 8) = 4;
  v1322 = (unsigned __int64)v303;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v304);
  v1309 = 0;
  v1310 = 0;
  *(_QWORD *)&v1311 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1310 = 3;
  v305 = operator new(0x20u);
  v306 = (__int64)v1284;
  *(_QWORD *)v305 = v305 + 16;
  strcpy((char *)(v305 + 16), "string");
  *(_QWORD *)(v305 + 8) = 6;
  v1311 = (unsigned __int64)v305;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1317,
    v306,
    2,
    v307,
    v308,
    v309,
    v468,
    v557,
    v646,
    v703,
    v752,
    v801,
    v850,
    v899,
    v948,
    v997,
    v1046,
    v1095,
    v1144,
    v1193,
    v1242);
  *((_QWORD *)&v1318 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1280);
  v1314 = 0;
  LOBYTE(v1315) = 0;
  *(_QWORD *)&v1316 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1315) = 3;
  v310 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v310, "Tree name", v311, v312, v313, v314, v469, v558, v647);
  v1316 = (unsigned __int64)v310;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1292,
    (__int64)v1280,
    2,
    v315,
    v316,
    v317,
    v470,
    v559,
    v648,
    v704,
    v753,
    v802,
    v851,
    v900,
    v949,
    v998,
    v1047,
    v1096,
    v1145,
    v1194,
    v1243);
  *((_QWORD *)&v1320 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1323,
    (__int64)&v1317,
    2,
    v318,
    v319,
    v320,
    v471,
    v560,
    v649,
    v705,
    v754,
    v803,
    v852,
    v901,
    v950,
    v999,
    v1048,
    v1097,
    v1146,
    v1195,
    v1244);
  *((_QWORD *)&v1324 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1371,
    v1000,
    2,
    v321,
    v322,
    v323,
    v472,
    v561,
    v650,
    v706,
    v755,
    v804,
    v853,
    v902,
    v951,
    v1000,
    v1049,
    v1098,
    v1147,
    v1196,
    v1245);
  *((_QWORD *)&v1372 + 1) = 0;
  LOBYTE(v1339) = 0;
  *(_QWORD *)&v1340 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1339) = 3;
  v324 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v324, "path", v325, v326, v327, v328, v473, v562, v651);
  v1340 = (unsigned __int64)v324;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v474);
  v1326 = 0;
  v1327 = 0;
  *(_QWORD *)&v1328 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1327 = 3;
  v329 = operator new(0x20u);
  *(_QWORD *)v329 = v329 + 16;
  strcpy((char *)(v329 + 16), "string");
  *(_QWORD *)(v329 + 8) = 6;
  v1328 = (unsigned __int64)v329;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v903,
    (__int64)v474,
    2,
    v330,
    v331,
    v332,
    (int)v474,
    v563,
    v652,
    v707,
    v756,
    v805,
    v854,
    (int)v903,
    v952,
    v1001,
    v1050,
    v1099,
    v1148,
    v1197,
    v1246);
  *((_QWORD *)&v1335 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v653);
  v1331 = 0;
  LOBYTE(v1332) = 0;
  *(_QWORD *)&v1333 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1332) = 3;
  v333 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v333, "Entry path", v334, v335, v336, v337, v475, v564, (__int64)v653);
  v1333 = (unsigned __int64)v333;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1273,
    v654,
    2,
    v338,
    v339,
    v340,
    v476,
    v565,
    v654,
    v708,
    v757,
    v806,
    v855,
    v904,
    v953,
    v1002,
    v1051,
    v1100,
    v1149,
    v1198,
    v1247);
  v1338 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1286,
    v905,
    2,
    v341,
    v342,
    v343,
    v477,
    v566,
    v655,
    v709,
    v758,
    v807,
    v856,
    v905,
    v954,
    v1003,
    v1052,
    v1101,
    v1150,
    v1199,
    v1248);
  *((_QWORD *)&v1342 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1293,
    (__int64)&v1339,
    2,
    v344,
    v345,
    v346,
    v478,
    v567,
    v656,
    v710,
    v759,
    v808,
    v857,
    v906,
    v955,
    v1004,
    v1053,
    v1102,
    v1151,
    v1200,
    v1249);
  v1374 = 0;
  v1356 = 0;
  *(_QWORD *)&v1357 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1356 = 3;
  v347 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v347, "unlink", v348, v349, v350, v351, v479, v568, v657);
  v1357 = (unsigned __int64)v347;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v711);
  v1344 = 0;
  v1345 = 0;
  *(_QWORD *)&v1346 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1345 = 3;
  v352 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v352, "boolean", v353, v354, v355, v356, v480, v569, v658);
  v1346 = (unsigned __int64)v352;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v956,
    (__int64)v711,
    2,
    v357,
    v358,
    v359,
    v481,
    v570,
    v659,
    (int)v711,
    v760,
    v809,
    v858,
    v907,
    (int)v956,
    v1005,
    v1054,
    v1103,
    v1152,
    v1201,
    v1250);
  *((_QWORD *)&v1352 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v810);
  v1348 = 0;
  LOBYTE(v1349) = 0;
  *(_QWORD *)&v1350 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1349) = 3;
  v360 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v360,
    "If true, unlink from folder. Default: false (link/add)",
    v361,
    v362,
    v363,
    v364,
    v482,
    v571,
    v660);
  v1350 = (unsigned __int64)v360;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1274,
    (__int64)v810,
    2,
    v365,
    v366,
    v367,
    v483,
    v572,
    v661,
    v712,
    v761,
    (int)v810,
    v859,
    v908,
    v957,
    v1006,
    v1055,
    v1104,
    v1153,
    v1202,
    v1251);
  v1355 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1275,
    v958,
    2,
    v368,
    v369,
    v370,
    v484,
    v573,
    v662,
    v713,
    v762,
    v811,
    v860,
    v909,
    v958,
    v1007,
    v1056,
    v1105,
    v1154,
    v1203,
    v1252);
  v1360 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1294,
    (__int64)v1260,
    2,
    v371,
    v372,
    v373,
    v485,
    v574,
    v663,
    v714,
    v763,
    v812,
    v861,
    v910,
    v959,
    v1008,
    v1057,
    v1106,
    v1155,
    v1204,
    v1253);
  v1376 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1287,
    (__int64)&v1371,
    3,
    v374,
    v375,
    v376,
    v486,
    v575,
    v664,
    v715,
    v764,
    v813,
    v862,
    v911,
    v960,
    v1009,
    v1058,
    v1107,
    v1156,
    v1205,
    v1254);
  v1364 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1276,
    (__int64)&v1361,
    2,
    v377,
    v378,
    v379,
    v487,
    v576,
    v665,
    v716,
    v765,
    v814,
    v863,
    v912,
    v961,
    v1010,
    v1059,
    v1108,
    v1157,
    v1206,
    v1255);
  v1381 = 0;
  v1365 = 0;
  *(_QWORD *)&v1366 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1365 = 3;
  v380 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v380, "required", v381, v382, v383, v384, v488, v577, v666);
  LOBYTE(v1298) = 0;
  *(_QWORD *)&v1299 = 0;
  v1366 = (unsigned __int64)v380;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1298) = 3;
  v385 = operator new(0x20u);
  *(_QWORD *)v385 = v385 + 16;
  strcpy((char *)(v385 + 16), "tree");
  *(_QWORD *)(v385 + 8) = 4;
  v1300 = 0;
  *(_QWORD *)&v1301 = 0;
  v1299 = (unsigned __int64)v385;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1300 = 3;
  v386 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v386, "path", v387, v388, v389, v390, v489, v578, v667);
  v1301 = (unsigned __int64)v386;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v391 = _mm_load_si128(&v1295);
  *(_QWORD *)&v1367[16] = 0;
  *(__m128i *)v1367 = v391;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1277,
    (__int64)&v1365,
    2,
    v392,
    v393,
    v394,
    v490,
    v579,
    v668,
    v717,
    v766,
    v815,
    v864,
    v913,
    v962,
    v1011,
    v1060,
    v1109,
    v1158,
    v1207,
    v1256);
  v1383 = 0;
  LOBYTE(v1296) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1271,
    (__int64)&v1378,
    3,
    v395,
    v396,
    v397,
    v491,
    v580,
    v669,
    v718,
    v767,
    v816,
    v865,
    v914,
    v963,
    v1012,
    v1061,
    v1110,
    v1159,
    v1208,
    v1257);
  LOBYTE(v306) = v1391;
  v398 = (void **)&v1384;
  v1391 = v1296;
  v399 = v1392;
  LOBYTE(v1296) = v306;
  v1392 = v1297;
  v1297 = v399;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v398 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v398 != &v1378 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v400 = (__int64 *)&v1377;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v400 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v400 != &v1371 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v401 = _mm_load_si128(&v1258);
  v1379 = 0;
  v1378 = ida_mcp::tools::dirtree_tools::`anonymous namespace'::move_entry;
  v1380 = v401;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1380.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1380.m128i_i64[0])(&v1378, &v1378, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1385);
  return v1395 - __readfsqword(0x28u);
}

