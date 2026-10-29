unsigned __int64 __fastcall ida_mcp::tools::jumptables::register_tools(
        ida_mcp::tools::jumptables *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  const __m128i *v4; // rsi
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  const __m128i *v11; // rsi
  __int64 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  const __m128i *v29; // rsi
  __int64 *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  const __m128i *v37; // rsi
  __int64 *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  const __m128i *v54; // rsi
  __int64 *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 *v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 *v80; // rbx
  __int64 v81; // rdx
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
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 *v98; // rbx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 *v116; // rbx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  _BYTE *v127; // rbx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rax
  __int64 v138; // rax
  __m128 v139; // xmm1
  __m128i v140; // xmm0
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 *v147; // r15
  __int64 v148; // rdx
  __int64 *v149; // r15
  __m128i v150; // xmm2
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rax
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 *v159; // r15
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rax
  __m128i v180; // xmm0
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  char v187; // si
  __m128i **v188; // r15
  __int64 v189; // rax
  __m128i v190; // xmm3
  __int64 v191; // rax
  __int64 v192; // rcx
  __int64 v193; // r9
  __int64 v194; // rax
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 *v198; // r15
  __int64 v199; // rdx
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
  __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  __int64 v218; // rax
  __m128i v219; // xmm0
  __int64 v220; // rcx
  __int64 v221; // r8
  __int64 v222; // r9
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  char v226; // si
  __m128i **v227; // r15
  __int64 v228; // rax
  __m128i v229; // xmm4
  __int64 v230; // rax
  __int64 v231; // rcx
  __int64 v232; // r8
  __int64 v233; // rax
  __int64 v234; // rcx
  __int64 v235; // r8
  __int64 v236; // r9
  __int64 *v237; // r15
  __int64 v238; // rdx
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
  __int64 v254; // rcx
  __int64 v255; // r8
  __int64 v256; // r9
  __int64 v257; // rax
  __m128i v258; // xmm0
  __int64 v259; // rcx
  __int64 v260; // r8
  __int64 v261; // r9
  __int64 v262; // rcx
  __int64 v263; // r8
  __int64 v264; // r9
  char v265; // si
  __m128i **v266; // r15
  __int64 v267; // rax
  __m128i v268; // xmm5
  __int64 v269; // rax
  char *v270; // rsi
  __int64 v271; // rcx
  __int64 v272; // r8
  __int64 v273; // r9
  __int64 v274; // rax
  __int64 *v275; // rsi
  __int64 *v276; // rdi
  __int64 v277; // rcx
  __int64 v278; // r8
  __int64 *v279; // r15
  __int64 v280; // rdx
  __int64 v281; // rcx
  __int64 v282; // r8
  __int64 v283; // r9
  __int64 v284; // rcx
  __int64 v285; // r8
  __int64 v286; // r9
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
  __int64 v298; // rax
  __int64 *v299; // rsi
  __int64 *v300; // rdi
  __int64 v301; // rcx
  __int64 v302; // r8
  __int64 v303; // r9
  __int64 *v304; // r15
  __int64 v305; // rdx
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
  __int64 v318; // rcx
  __int64 v319; // r8
  __int64 v320; // r9
  __int64 *v321; // r15
  __int64 v322; // rdx
  __int64 v323; // rcx
  __int64 v324; // r8
  __int64 v325; // r9
  __int64 v326; // rcx
  __int64 v327; // r8
  __int64 v328; // r9
  __int64 v329; // rcx
  __int64 v330; // r8
  __int64 v331; // r9
  __int64 v332; // rcx
  __int64 v333; // r8
  __int64 v334; // r9
  __int64 v335; // rcx
  __int64 v336; // r8
  __int64 v337; // r9
  __int64 v338; // rcx
  __int64 v339; // r8
  __int64 v340; // r9
  __int64 v341; // rax
  __int64 *v342; // r15
  __int64 v343; // rdx
  __int64 v344; // rcx
  __int64 v345; // r8
  __int64 v346; // r9
  __m128i v347; // xmm0
  __int64 v348; // rcx
  __int64 v349; // r8
  __int64 v350; // r9
  __int64 v351; // rcx
  __int64 v352; // r8
  __int64 v353; // r9
  __m128i **v354; // r15
  __int64 v355; // rax
  __int64 *v356; // r15
  __int64 *v357; // r15
  __m128i v358; // xmm6
  __int64 v359; // rax
  __int64 v360; // rcx
  __int64 v361; // r8
  __int64 v362; // r9
  __int64 v363; // rax
  __int64 v364; // rcx
  __int64 v365; // r8
  __int64 *v366; // rbx
  __int64 v367; // rdx
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
  __int64 v383; // rcx
  __int64 v384; // r8
  __int64 v385; // r9
  __int64 v386; // rax
  __m128i v387; // xmm0
  __int64 v388; // rcx
  __int64 v389; // r8
  __int64 v390; // r9
  __int64 v391; // rcx
  __int64 v392; // r8
  __int64 v393; // r9
  char v394; // si
  __m128i **v395; // rbx
  __int64 v396; // rax
  __m128i v397; // xmm7
  int v399; // [rsp+0h] [rbp-E58h]
  int v400; // [rsp+0h] [rbp-E58h]
  int v401; // [rsp+0h] [rbp-E58h]
  int v402; // [rsp+0h] [rbp-E58h]
  int v403; // [rsp+0h] [rbp-E58h]
  int v404; // [rsp+0h] [rbp-E58h]
  int v405; // [rsp+0h] [rbp-E58h]
  int v406; // [rsp+0h] [rbp-E58h]
  int v407; // [rsp+0h] [rbp-E58h]
  int v408; // [rsp+0h] [rbp-E58h]
  int v409; // [rsp+0h] [rbp-E58h]
  int v410; // [rsp+0h] [rbp-E58h]
  int v411; // [rsp+0h] [rbp-E58h]
  int v412; // [rsp+0h] [rbp-E58h]
  int v413; // [rsp+0h] [rbp-E58h]
  int v414; // [rsp+0h] [rbp-E58h]
  int v415; // [rsp+0h] [rbp-E58h]
  int v416; // [rsp+0h] [rbp-E58h]
  int v417; // [rsp+0h] [rbp-E58h]
  int v418; // [rsp+0h] [rbp-E58h]
  int v419; // [rsp+0h] [rbp-E58h]
  int v420; // [rsp+0h] [rbp-E58h]
  int v421; // [rsp+0h] [rbp-E58h]
  int v422; // [rsp+0h] [rbp-E58h]
  int v423; // [rsp+0h] [rbp-E58h]
  int v424; // [rsp+0h] [rbp-E58h]
  int v425; // [rsp+0h] [rbp-E58h]
  int v426; // [rsp+0h] [rbp-E58h]
  int v427; // [rsp+0h] [rbp-E58h]
  int v428; // [rsp+0h] [rbp-E58h]
  int v429; // [rsp+0h] [rbp-E58h]
  int v430; // [rsp+0h] [rbp-E58h]
  int v431; // [rsp+0h] [rbp-E58h]
  int v432; // [rsp+0h] [rbp-E58h]
  int v433; // [rsp+0h] [rbp-E58h]
  int v434; // [rsp+0h] [rbp-E58h]
  int v435; // [rsp+0h] [rbp-E58h]
  int v436; // [rsp+0h] [rbp-E58h]
  int v437; // [rsp+0h] [rbp-E58h]
  int v438; // [rsp+0h] [rbp-E58h]
  int v439; // [rsp+0h] [rbp-E58h]
  int v440; // [rsp+0h] [rbp-E58h]
  int v441; // [rsp+0h] [rbp-E58h]
  int v442; // [rsp+0h] [rbp-E58h]
  int v443; // [rsp+0h] [rbp-E58h]
  int v444; // [rsp+0h] [rbp-E58h]
  int v445; // [rsp+0h] [rbp-E58h]
  int v446; // [rsp+0h] [rbp-E58h]
  int v447; // [rsp+0h] [rbp-E58h]
  int v448; // [rsp+0h] [rbp-E58h]
  int v449; // [rsp+0h] [rbp-E58h]
  int v450; // [rsp+0h] [rbp-E58h]
  int v451; // [rsp+0h] [rbp-E58h]
  int v452; // [rsp+0h] [rbp-E58h]
  int v453; // [rsp+0h] [rbp-E58h]
  int v454; // [rsp+0h] [rbp-E58h]
  int v455; // [rsp+0h] [rbp-E58h]
  int v456; // [rsp+0h] [rbp-E58h]
  int v457; // [rsp+0h] [rbp-E58h]
  int v458; // [rsp+0h] [rbp-E58h]
  int v459; // [rsp+0h] [rbp-E58h]
  int v460; // [rsp+0h] [rbp-E58h]
  int v461; // [rsp+0h] [rbp-E58h]
  int v462; // [rsp+0h] [rbp-E58h]
  int v463; // [rsp+0h] [rbp-E58h]
  int v464; // [rsp+0h] [rbp-E58h]
  int v465; // [rsp+0h] [rbp-E58h]
  int v466; // [rsp+0h] [rbp-E58h]
  int v467; // [rsp+0h] [rbp-E58h]
  int v468; // [rsp+0h] [rbp-E58h]
  int v469; // [rsp+0h] [rbp-E58h]
  int v470; // [rsp+0h] [rbp-E58h]
  int v471; // [rsp+0h] [rbp-E58h]
  int v472; // [rsp+0h] [rbp-E58h]
  int v473; // [rsp+0h] [rbp-E58h]
  int v474; // [rsp+0h] [rbp-E58h]
  int v475; // [rsp+0h] [rbp-E58h]
  int v476; // [rsp+0h] [rbp-E58h]
  int v477; // [rsp+0h] [rbp-E58h]
  int v478; // [rsp+0h] [rbp-E58h]
  int v479; // [rsp+0h] [rbp-E58h]
  int v480; // [rsp+0h] [rbp-E58h]
  int v481; // [rsp+0h] [rbp-E58h]
  int v482; // [rsp+0h] [rbp-E58h]
  int v483; // [rsp+0h] [rbp-E58h]
  int v484; // [rsp+0h] [rbp-E58h]
  int v485; // [rsp+0h] [rbp-E58h]
  int v486; // [rsp+0h] [rbp-E58h]
  int v487; // [rsp+0h] [rbp-E58h]
  int v488; // [rsp+0h] [rbp-E58h]
  int v489; // [rsp+0h] [rbp-E58h]
  int v490; // [rsp+0h] [rbp-E58h]
  int v491; // [rsp+0h] [rbp-E58h]
  int v492; // [rsp+0h] [rbp-E58h]
  int v493; // [rsp+8h] [rbp-E50h]
  int v494; // [rsp+8h] [rbp-E50h]
  int v495; // [rsp+8h] [rbp-E50h]
  int v496; // [rsp+8h] [rbp-E50h]
  int v497; // [rsp+8h] [rbp-E50h]
  int v498; // [rsp+8h] [rbp-E50h]
  int v499; // [rsp+8h] [rbp-E50h]
  int v500; // [rsp+8h] [rbp-E50h]
  int v501; // [rsp+8h] [rbp-E50h]
  int v502; // [rsp+8h] [rbp-E50h]
  int v503; // [rsp+8h] [rbp-E50h]
  __int64 v504; // [rsp+8h] [rbp-E50h]
  __int64 v505; // [rsp+8h] [rbp-E50h]
  __int64 v506; // [rsp+8h] [rbp-E50h]
  int v507; // [rsp+8h] [rbp-E50h]
  __int64 v508; // [rsp+8h] [rbp-E50h]
  __int64 v509; // [rsp+8h] [rbp-E50h]
  __int64 v510; // [rsp+8h] [rbp-E50h]
  __int64 v511; // [rsp+8h] [rbp-E50h]
  int v512; // [rsp+8h] [rbp-E50h]
  __int64 v513; // [rsp+8h] [rbp-E50h]
  __int64 v514; // [rsp+8h] [rbp-E50h]
  __int64 v515; // [rsp+8h] [rbp-E50h]
  int v516; // [rsp+8h] [rbp-E50h]
  __int64 v517; // [rsp+8h] [rbp-E50h]
  __int64 v518; // [rsp+8h] [rbp-E50h]
  __int64 v519; // [rsp+8h] [rbp-E50h]
  __int64 v520; // [rsp+8h] [rbp-E50h]
  __int64 v521; // [rsp+8h] [rbp-E50h]
  __int64 v522; // [rsp+8h] [rbp-E50h]
  __int64 v523; // [rsp+8h] [rbp-E50h]
  __int64 v524; // [rsp+8h] [rbp-E50h]
  _QWORD *v525; // [rsp+8h] [rbp-E50h]
  int v526; // [rsp+8h] [rbp-E50h]
  __int64 v527; // [rsp+8h] [rbp-E50h]
  __int64 v528; // [rsp+8h] [rbp-E50h]
  __int64 v529; // [rsp+8h] [rbp-E50h]
  __int64 v530; // [rsp+8h] [rbp-E50h]
  __int64 v531; // [rsp+8h] [rbp-E50h]
  __int64 v532; // [rsp+8h] [rbp-E50h]
  __int64 v533; // [rsp+8h] [rbp-E50h]
  __int64 v534; // [rsp+8h] [rbp-E50h]
  _QWORD *v535; // [rsp+8h] [rbp-E50h]
  int v536; // [rsp+8h] [rbp-E50h]
  __int64 v537; // [rsp+8h] [rbp-E50h]
  __int64 v538; // [rsp+8h] [rbp-E50h]
  __int64 v539; // [rsp+8h] [rbp-E50h]
  __int64 v540; // [rsp+8h] [rbp-E50h]
  __int64 v541; // [rsp+8h] [rbp-E50h]
  __int64 v542; // [rsp+8h] [rbp-E50h]
  __int64 v543; // [rsp+8h] [rbp-E50h]
  __int64 v544; // [rsp+8h] [rbp-E50h]
  _QWORD *v545; // [rsp+8h] [rbp-E50h]
  int v546; // [rsp+8h] [rbp-E50h]
  __int64 v547; // [rsp+8h] [rbp-E50h]
  __int64 v548; // [rsp+8h] [rbp-E50h]
  __int64 v549; // [rsp+8h] [rbp-E50h]
  __int64 v550; // [rsp+8h] [rbp-E50h]
  __int64 v551; // [rsp+8h] [rbp-E50h]
  __int64 v552; // [rsp+8h] [rbp-E50h]
  __int64 v553; // [rsp+8h] [rbp-E50h]
  __int64 v554; // [rsp+8h] [rbp-E50h]
  __int64 v555; // [rsp+8h] [rbp-E50h]
  int v556; // [rsp+8h] [rbp-E50h]
  __int64 v557; // [rsp+8h] [rbp-E50h]
  __int64 v558; // [rsp+8h] [rbp-E50h]
  __int64 v559; // [rsp+8h] [rbp-E50h]
  int v560; // [rsp+8h] [rbp-E50h]
  __int64 v561; // [rsp+8h] [rbp-E50h]
  int v562; // [rsp+8h] [rbp-E50h]
  __int64 v563; // [rsp+8h] [rbp-E50h]
  __int64 v564; // [rsp+8h] [rbp-E50h]
  __int64 v565; // [rsp+8h] [rbp-E50h]
  _QWORD *v566; // [rsp+8h] [rbp-E50h]
  int v567; // [rsp+8h] [rbp-E50h]
  __int64 v568; // [rsp+8h] [rbp-E50h]
  __int64 v569; // [rsp+8h] [rbp-E50h]
  __int64 v570; // [rsp+8h] [rbp-E50h]
  __int64 v571; // [rsp+8h] [rbp-E50h]
  __int64 v572; // [rsp+8h] [rbp-E50h]
  int v573; // [rsp+8h] [rbp-E50h]
  __int64 v574; // [rsp+8h] [rbp-E50h]
  __int64 v575; // [rsp+8h] [rbp-E50h]
  __int64 v576; // [rsp+8h] [rbp-E50h]
  _QWORD *v577; // [rsp+8h] [rbp-E50h]
  int v578; // [rsp+8h] [rbp-E50h]
  __int64 v579; // [rsp+8h] [rbp-E50h]
  __int64 v580; // [rsp+8h] [rbp-E50h]
  __int64 v581; // [rsp+8h] [rbp-E50h]
  __int64 v582; // [rsp+8h] [rbp-E50h]
  __int64 v583; // [rsp+8h] [rbp-E50h]
  __int64 v584; // [rsp+8h] [rbp-E50h]
  __int64 v585; // [rsp+8h] [rbp-E50h]
  __int64 v586; // [rsp+10h] [rbp-E48h]
  __int64 v587; // [rsp+10h] [rbp-E48h]
  __int64 v588; // [rsp+10h] [rbp-E48h]
  __int64 v589; // [rsp+10h] [rbp-E48h]
  __int64 v590; // [rsp+10h] [rbp-E48h]
  __int64 v591; // [rsp+10h] [rbp-E48h]
  __int64 v592; // [rsp+10h] [rbp-E48h]
  __int64 v593; // [rsp+10h] [rbp-E48h]
  __int64 v594; // [rsp+10h] [rbp-E48h]
  __int64 v595; // [rsp+10h] [rbp-E48h]
  __int64 v596; // [rsp+10h] [rbp-E48h]
  int v597; // [rsp+10h] [rbp-E48h]
  int v598; // [rsp+10h] [rbp-E48h]
  int v599; // [rsp+10h] [rbp-E48h]
  __int64 v600; // [rsp+10h] [rbp-E48h]
  int v601; // [rsp+10h] [rbp-E48h]
  int v602; // [rsp+10h] [rbp-E48h]
  int v603; // [rsp+10h] [rbp-E48h]
  int v604; // [rsp+10h] [rbp-E48h]
  __int64 v605; // [rsp+10h] [rbp-E48h]
  int v606; // [rsp+10h] [rbp-E48h]
  int v607; // [rsp+10h] [rbp-E48h]
  int v608; // [rsp+10h] [rbp-E48h]
  int v609; // [rsp+10h] [rbp-E48h]
  __int64 v610; // [rsp+10h] [rbp-E48h]
  int v611; // [rsp+10h] [rbp-E48h]
  int v612; // [rsp+10h] [rbp-E48h]
  int v613; // [rsp+10h] [rbp-E48h]
  int v614; // [rsp+10h] [rbp-E48h]
  int v615; // [rsp+10h] [rbp-E48h]
  int v616; // [rsp+10h] [rbp-E48h]
  _QWORD *v617; // [rsp+10h] [rbp-E48h]
  int v618; // [rsp+10h] [rbp-E48h]
  __int64 v619; // [rsp+10h] [rbp-E48h]
  int v620; // [rsp+10h] [rbp-E48h]
  int v621; // [rsp+10h] [rbp-E48h]
  int v622; // [rsp+10h] [rbp-E48h]
  int v623; // [rsp+10h] [rbp-E48h]
  int v624; // [rsp+10h] [rbp-E48h]
  int v625; // [rsp+10h] [rbp-E48h]
  int v626; // [rsp+10h] [rbp-E48h]
  _QWORD *v627; // [rsp+10h] [rbp-E48h]
  int v628; // [rsp+10h] [rbp-E48h]
  __int64 v629; // [rsp+10h] [rbp-E48h]
  int v630; // [rsp+10h] [rbp-E48h]
  int v631; // [rsp+10h] [rbp-E48h]
  int v632; // [rsp+10h] [rbp-E48h]
  int v633; // [rsp+10h] [rbp-E48h]
  int v634; // [rsp+10h] [rbp-E48h]
  int v635; // [rsp+10h] [rbp-E48h]
  int v636; // [rsp+10h] [rbp-E48h]
  _QWORD *v637; // [rsp+10h] [rbp-E48h]
  int v638; // [rsp+10h] [rbp-E48h]
  __int64 v639; // [rsp+10h] [rbp-E48h]
  int v640; // [rsp+10h] [rbp-E48h]
  int v641; // [rsp+10h] [rbp-E48h]
  int v642; // [rsp+10h] [rbp-E48h]
  int v643; // [rsp+10h] [rbp-E48h]
  int v644; // [rsp+10h] [rbp-E48h]
  int v645; // [rsp+10h] [rbp-E48h]
  int v646; // [rsp+10h] [rbp-E48h]
  int v647; // [rsp+10h] [rbp-E48h]
  int v648; // [rsp+10h] [rbp-E48h]
  __int64 v649; // [rsp+10h] [rbp-E48h]
  int v650; // [rsp+10h] [rbp-E48h]
  int v651; // [rsp+10h] [rbp-E48h]
  int v652; // [rsp+10h] [rbp-E48h]
  __int64 v653; // [rsp+10h] [rbp-E48h]
  int v654; // [rsp+10h] [rbp-E48h]
  __int64 v655; // [rsp+10h] [rbp-E48h]
  int v656; // [rsp+10h] [rbp-E48h]
  int v657; // [rsp+10h] [rbp-E48h]
  int v658; // [rsp+10h] [rbp-E48h]
  int v659; // [rsp+10h] [rbp-E48h]
  _QWORD *v660; // [rsp+10h] [rbp-E48h]
  __int64 v661; // [rsp+10h] [rbp-E48h]
  int v662; // [rsp+10h] [rbp-E48h]
  int v663; // [rsp+10h] [rbp-E48h]
  int v664; // [rsp+10h] [rbp-E48h]
  int v665; // [rsp+10h] [rbp-E48h]
  __int64 v666; // [rsp+10h] [rbp-E48h]
  int v667; // [rsp+10h] [rbp-E48h]
  int v668; // [rsp+10h] [rbp-E48h]
  _QWORD *v669; // [rsp+10h] [rbp-E48h]
  int v670; // [rsp+10h] [rbp-E48h]
  __int64 v671; // [rsp+10h] [rbp-E48h]
  int v672; // [rsp+10h] [rbp-E48h]
  int v673; // [rsp+10h] [rbp-E48h]
  int v674; // [rsp+10h] [rbp-E48h]
  int v675; // [rsp+10h] [rbp-E48h]
  int v676; // [rsp+10h] [rbp-E48h]
  int v677; // [rsp+10h] [rbp-E48h]
  int v678; // [rsp+10h] [rbp-E48h]
  int v679; // [rsp+18h] [rbp-E40h]
  int v680; // [rsp+18h] [rbp-E40h]
  int v681; // [rsp+18h] [rbp-E40h]
  int v682; // [rsp+18h] [rbp-E40h]
  int v683; // [rsp+18h] [rbp-E40h]
  int v684; // [rsp+18h] [rbp-E40h]
  int v685; // [rsp+18h] [rbp-E40h]
  int v686; // [rsp+18h] [rbp-E40h]
  int v687; // [rsp+18h] [rbp-E40h]
  int v688; // [rsp+18h] [rbp-E40h]
  int v689; // [rsp+18h] [rbp-E40h]
  int v690; // [rsp+18h] [rbp-E40h]
  int v691; // [rsp+18h] [rbp-E40h]
  int v692; // [rsp+18h] [rbp-E40h]
  int v693; // [rsp+18h] [rbp-E40h]
  int v694; // [rsp+18h] [rbp-E40h]
  int v695; // [rsp+18h] [rbp-E40h]
  int v696; // [rsp+18h] [rbp-E40h]
  int v697; // [rsp+18h] [rbp-E40h]
  int v698; // [rsp+18h] [rbp-E40h]
  int v699; // [rsp+18h] [rbp-E40h]
  int v700; // [rsp+18h] [rbp-E40h]
  int v701; // [rsp+18h] [rbp-E40h]
  int v702; // [rsp+18h] [rbp-E40h]
  int v703; // [rsp+18h] [rbp-E40h]
  int v704; // [rsp+18h] [rbp-E40h]
  int v705; // [rsp+18h] [rbp-E40h]
  int v706; // [rsp+18h] [rbp-E40h]
  int v707; // [rsp+18h] [rbp-E40h]
  int v708; // [rsp+18h] [rbp-E40h]
  int v709; // [rsp+18h] [rbp-E40h]
  int v710; // [rsp+18h] [rbp-E40h]
  int v711; // [rsp+18h] [rbp-E40h]
  int v712; // [rsp+18h] [rbp-E40h]
  int v713; // [rsp+18h] [rbp-E40h]
  int v714; // [rsp+18h] [rbp-E40h]
  int v715; // [rsp+18h] [rbp-E40h]
  int v716; // [rsp+18h] [rbp-E40h]
  int v717; // [rsp+18h] [rbp-E40h]
  int v718; // [rsp+18h] [rbp-E40h]
  int v719; // [rsp+18h] [rbp-E40h]
  int v720; // [rsp+18h] [rbp-E40h]
  int v721; // [rsp+18h] [rbp-E40h]
  int v722; // [rsp+18h] [rbp-E40h]
  int v723; // [rsp+18h] [rbp-E40h]
  int v724; // [rsp+18h] [rbp-E40h]
  int v725; // [rsp+18h] [rbp-E40h]
  int v726; // [rsp+18h] [rbp-E40h]
  int v727; // [rsp+18h] [rbp-E40h]
  int v728; // [rsp+18h] [rbp-E40h]
  int v729; // [rsp+18h] [rbp-E40h]
  int v730; // [rsp+18h] [rbp-E40h]
  int v731; // [rsp+18h] [rbp-E40h]
  int v732; // [rsp+18h] [rbp-E40h]
  int v733; // [rsp+18h] [rbp-E40h]
  int v734; // [rsp+18h] [rbp-E40h]
  int v735; // [rsp+18h] [rbp-E40h]
  int v736; // [rsp+18h] [rbp-E40h]
  int v737; // [rsp+18h] [rbp-E40h]
  int v738; // [rsp+18h] [rbp-E40h]
  int v739; // [rsp+18h] [rbp-E40h]
  int v740; // [rsp+18h] [rbp-E40h]
  int v741; // [rsp+18h] [rbp-E40h]
  int v742; // [rsp+18h] [rbp-E40h]
  int v743; // [rsp+18h] [rbp-E40h]
  int v744; // [rsp+18h] [rbp-E40h]
  int v745; // [rsp+18h] [rbp-E40h]
  int v746; // [rsp+18h] [rbp-E40h]
  int v747; // [rsp+18h] [rbp-E40h]
  int v748; // [rsp+18h] [rbp-E40h]
  int v749; // [rsp+20h] [rbp-E38h]
  int v750; // [rsp+20h] [rbp-E38h]
  int v751; // [rsp+20h] [rbp-E38h]
  int v752; // [rsp+20h] [rbp-E38h]
  int v753; // [rsp+20h] [rbp-E38h]
  int v754; // [rsp+20h] [rbp-E38h]
  int v755; // [rsp+20h] [rbp-E38h]
  int v756; // [rsp+20h] [rbp-E38h]
  int v757; // [rsp+20h] [rbp-E38h]
  int v758; // [rsp+20h] [rbp-E38h]
  int v759; // [rsp+20h] [rbp-E38h]
  int v760; // [rsp+20h] [rbp-E38h]
  int v761; // [rsp+20h] [rbp-E38h]
  int v762; // [rsp+20h] [rbp-E38h]
  __int64 v763; // [rsp+20h] [rbp-E38h]
  int v764; // [rsp+20h] [rbp-E38h]
  int v765; // [rsp+20h] [rbp-E38h]
  int v766; // [rsp+20h] [rbp-E38h]
  _QWORD *v767; // [rsp+20h] [rbp-E38h]
  int v768; // [rsp+20h] [rbp-E38h]
  __int64 v769; // [rsp+20h] [rbp-E38h]
  int v770; // [rsp+20h] [rbp-E38h]
  int v771; // [rsp+20h] [rbp-E38h]
  int v772; // [rsp+20h] [rbp-E38h]
  int v773; // [rsp+20h] [rbp-E38h]
  int v774; // [rsp+20h] [rbp-E38h]
  int v775; // [rsp+20h] [rbp-E38h]
  _QWORD *v776; // [rsp+20h] [rbp-E38h]
  int v777; // [rsp+20h] [rbp-E38h]
  __int64 v778; // [rsp+20h] [rbp-E38h]
  int v779; // [rsp+20h] [rbp-E38h]
  int v780; // [rsp+20h] [rbp-E38h]
  int v781; // [rsp+20h] [rbp-E38h]
  int v782; // [rsp+20h] [rbp-E38h]
  int v783; // [rsp+20h] [rbp-E38h]
  int v784; // [rsp+20h] [rbp-E38h]
  _QWORD *v785; // [rsp+20h] [rbp-E38h]
  int v786; // [rsp+20h] [rbp-E38h]
  __int64 v787; // [rsp+20h] [rbp-E38h]
  int v788; // [rsp+20h] [rbp-E38h]
  int v789; // [rsp+20h] [rbp-E38h]
  int v790; // [rsp+20h] [rbp-E38h]
  int v791; // [rsp+20h] [rbp-E38h]
  int v792; // [rsp+20h] [rbp-E38h]
  int v793; // [rsp+20h] [rbp-E38h]
  int v794; // [rsp+20h] [rbp-E38h]
  int v795; // [rsp+20h] [rbp-E38h]
  int v796; // [rsp+20h] [rbp-E38h]
  int v797; // [rsp+20h] [rbp-E38h]
  int v798; // [rsp+20h] [rbp-E38h]
  int v799; // [rsp+20h] [rbp-E38h]
  int v800; // [rsp+20h] [rbp-E38h]
  int v801; // [rsp+20h] [rbp-E38h]
  int v802; // [rsp+20h] [rbp-E38h]
  int v803; // [rsp+20h] [rbp-E38h]
  int v804; // [rsp+20h] [rbp-E38h]
  int v805; // [rsp+20h] [rbp-E38h]
  int v806; // [rsp+20h] [rbp-E38h]
  __int64 v807; // [rsp+20h] [rbp-E38h]
  int v808; // [rsp+20h] [rbp-E38h]
  int v809; // [rsp+20h] [rbp-E38h]
  int v810; // [rsp+20h] [rbp-E38h]
  _QWORD *v811; // [rsp+20h] [rbp-E38h]
  int v812; // [rsp+20h] [rbp-E38h]
  __int64 v813; // [rsp+20h] [rbp-E38h]
  int v814; // [rsp+20h] [rbp-E38h]
  int v815; // [rsp+20h] [rbp-E38h]
  int v816; // [rsp+20h] [rbp-E38h]
  int v817; // [rsp+20h] [rbp-E38h]
  int v818; // [rsp+20h] [rbp-E38h]
  int v819; // [rsp+28h] [rbp-E30h]
  int v820; // [rsp+28h] [rbp-E30h]
  int v821; // [rsp+28h] [rbp-E30h]
  int v822; // [rsp+28h] [rbp-E30h]
  int v823; // [rsp+28h] [rbp-E30h]
  int v824; // [rsp+28h] [rbp-E30h]
  int v825; // [rsp+28h] [rbp-E30h]
  int v826; // [rsp+28h] [rbp-E30h]
  int v827; // [rsp+28h] [rbp-E30h]
  int v828; // [rsp+28h] [rbp-E30h]
  int v829; // [rsp+28h] [rbp-E30h]
  int v830; // [rsp+28h] [rbp-E30h]
  int v831; // [rsp+28h] [rbp-E30h]
  int v832; // [rsp+28h] [rbp-E30h]
  int v833; // [rsp+28h] [rbp-E30h]
  int v834; // [rsp+28h] [rbp-E30h]
  int v835; // [rsp+28h] [rbp-E30h]
  int v836; // [rsp+28h] [rbp-E30h]
  int v837; // [rsp+28h] [rbp-E30h]
  int v838; // [rsp+28h] [rbp-E30h]
  int v839; // [rsp+28h] [rbp-E30h]
  _QWORD *v840; // [rsp+28h] [rbp-E30h]
  __int64 v841; // [rsp+28h] [rbp-E30h]
  int v842; // [rsp+28h] [rbp-E30h]
  int v843; // [rsp+28h] [rbp-E30h]
  int v844; // [rsp+28h] [rbp-E30h]
  int v845; // [rsp+28h] [rbp-E30h]
  int v846; // [rsp+28h] [rbp-E30h]
  int v847; // [rsp+28h] [rbp-E30h]
  int v848; // [rsp+28h] [rbp-E30h]
  _QWORD *v849; // [rsp+28h] [rbp-E30h]
  __int64 v850; // [rsp+28h] [rbp-E30h]
  int v851; // [rsp+28h] [rbp-E30h]
  int v852; // [rsp+28h] [rbp-E30h]
  int v853; // [rsp+28h] [rbp-E30h]
  int v854; // [rsp+28h] [rbp-E30h]
  int v855; // [rsp+28h] [rbp-E30h]
  int v856; // [rsp+28h] [rbp-E30h]
  int v857; // [rsp+28h] [rbp-E30h]
  _QWORD *v858; // [rsp+28h] [rbp-E30h]
  __int64 v859; // [rsp+28h] [rbp-E30h]
  int v860; // [rsp+28h] [rbp-E30h]
  int v861; // [rsp+28h] [rbp-E30h]
  int v862; // [rsp+28h] [rbp-E30h]
  int v863; // [rsp+28h] [rbp-E30h]
  int v864; // [rsp+28h] [rbp-E30h]
  int v865; // [rsp+28h] [rbp-E30h]
  int v866; // [rsp+28h] [rbp-E30h]
  int v867; // [rsp+28h] [rbp-E30h]
  int v868; // [rsp+28h] [rbp-E30h]
  int v869; // [rsp+28h] [rbp-E30h]
  int v870; // [rsp+28h] [rbp-E30h]
  int v871; // [rsp+28h] [rbp-E30h]
  _QWORD *v872; // [rsp+28h] [rbp-E30h]
  int v873; // [rsp+28h] [rbp-E30h]
  int v874; // [rsp+28h] [rbp-E30h]
  int v875; // [rsp+28h] [rbp-E30h]
  int v876; // [rsp+28h] [rbp-E30h]
  int v877; // [rsp+28h] [rbp-E30h]
  int v878; // [rsp+28h] [rbp-E30h]
  int v879; // [rsp+28h] [rbp-E30h]
  int v880; // [rsp+28h] [rbp-E30h]
  int v881; // [rsp+28h] [rbp-E30h]
  int v882; // [rsp+28h] [rbp-E30h]
  int v883; // [rsp+28h] [rbp-E30h]
  _QWORD *v884; // [rsp+28h] [rbp-E30h]
  __int64 v885; // [rsp+28h] [rbp-E30h]
  int v886; // [rsp+28h] [rbp-E30h]
  int v887; // [rsp+28h] [rbp-E30h]
  int v888; // [rsp+28h] [rbp-E30h]
  __int64 v889; // [rsp+30h] [rbp-E28h]
  __int64 v890; // [rsp+30h] [rbp-E28h]
  __int64 v891; // [rsp+30h] [rbp-E28h]
  __int64 v892; // [rsp+30h] [rbp-E28h]
  __int64 v893; // [rsp+30h] [rbp-E28h]
  __int64 v894; // [rsp+30h] [rbp-E28h]
  __int64 v895; // [rsp+30h] [rbp-E28h]
  __int64 v896; // [rsp+30h] [rbp-E28h]
  __int64 v897; // [rsp+30h] [rbp-E28h]
  __int64 v898; // [rsp+30h] [rbp-E28h]
  __int64 v899; // [rsp+30h] [rbp-E28h]
  __int64 v900; // [rsp+30h] [rbp-E28h]
  __int64 v901; // [rsp+30h] [rbp-E28h]
  __int64 v902; // [rsp+30h] [rbp-E28h]
  __int64 v903; // [rsp+30h] [rbp-E28h]
  __int64 v904; // [rsp+30h] [rbp-E28h]
  __int64 v905; // [rsp+30h] [rbp-E28h]
  __int64 v906; // [rsp+30h] [rbp-E28h]
  __int64 v907; // [rsp+30h] [rbp-E28h]
  _QWORD *v908; // [rsp+30h] [rbp-E28h]
  __int64 v909; // [rsp+30h] [rbp-E28h]
  __int64 v910; // [rsp+30h] [rbp-E28h]
  __int64 v911; // [rsp+30h] [rbp-E28h]
  __int64 v912; // [rsp+30h] [rbp-E28h]
  __int64 v913; // [rsp+30h] [rbp-E28h]
  __int64 v914; // [rsp+30h] [rbp-E28h]
  __int64 v915; // [rsp+30h] [rbp-E28h]
  __int64 v916; // [rsp+30h] [rbp-E28h]
  _QWORD *v917; // [rsp+30h] [rbp-E28h]
  __int64 v918; // [rsp+30h] [rbp-E28h]
  __int64 v919; // [rsp+30h] [rbp-E28h]
  __int64 v920; // [rsp+30h] [rbp-E28h]
  __int64 v921; // [rsp+30h] [rbp-E28h]
  __int64 v922; // [rsp+30h] [rbp-E28h]
  __int64 v923; // [rsp+30h] [rbp-E28h]
  __int64 v924; // [rsp+30h] [rbp-E28h]
  __int64 v925; // [rsp+30h] [rbp-E28h]
  _QWORD *v926; // [rsp+30h] [rbp-E28h]
  __int64 v927; // [rsp+30h] [rbp-E28h]
  __int64 v928; // [rsp+30h] [rbp-E28h]
  __int64 v929; // [rsp+30h] [rbp-E28h]
  __int64 v930; // [rsp+30h] [rbp-E28h]
  __int64 v931; // [rsp+30h] [rbp-E28h]
  __int64 v932; // [rsp+30h] [rbp-E28h]
  __int64 v933; // [rsp+30h] [rbp-E28h]
  __int64 v934; // [rsp+30h] [rbp-E28h]
  __int64 v935; // [rsp+30h] [rbp-E28h]
  __int64 v936; // [rsp+30h] [rbp-E28h]
  __int64 v937; // [rsp+30h] [rbp-E28h]
  __int64 v938; // [rsp+30h] [rbp-E28h]
  __int64 v939; // [rsp+30h] [rbp-E28h]
  __int64 v940; // [rsp+30h] [rbp-E28h]
  __int64 v941; // [rsp+30h] [rbp-E28h]
  __int64 v942; // [rsp+30h] [rbp-E28h]
  __int64 v943; // [rsp+30h] [rbp-E28h]
  __int64 v944; // [rsp+30h] [rbp-E28h]
  __int64 v945; // [rsp+30h] [rbp-E28h]
  __int64 v946; // [rsp+30h] [rbp-E28h]
  __int64 v947; // [rsp+30h] [rbp-E28h]
  __int64 v948; // [rsp+30h] [rbp-E28h]
  __int64 v949; // [rsp+30h] [rbp-E28h]
  __int64 v950; // [rsp+30h] [rbp-E28h]
  __int64 v951; // [rsp+30h] [rbp-E28h]
  _QWORD *v952; // [rsp+30h] [rbp-E28h]
  __int64 v953; // [rsp+30h] [rbp-E28h]
  __int64 v954; // [rsp+30h] [rbp-E28h]
  __int64 v955; // [rsp+30h] [rbp-E28h]
  __int64 v956; // [rsp+30h] [rbp-E28h]
  __int64 v957; // [rsp+30h] [rbp-E28h]
  __int64 v958; // [rsp+30h] [rbp-E28h]
  int v959; // [rsp+38h] [rbp-E20h]
  int v960; // [rsp+38h] [rbp-E20h]
  int v961; // [rsp+38h] [rbp-E20h]
  int v962; // [rsp+38h] [rbp-E20h]
  int v963; // [rsp+38h] [rbp-E20h]
  int v964; // [rsp+38h] [rbp-E20h]
  int v965; // [rsp+38h] [rbp-E20h]
  int v966; // [rsp+38h] [rbp-E20h]
  int v967; // [rsp+38h] [rbp-E20h]
  int v968; // [rsp+38h] [rbp-E20h]
  int v969; // [rsp+38h] [rbp-E20h]
  int v970; // [rsp+38h] [rbp-E20h]
  int v971; // [rsp+38h] [rbp-E20h]
  int v972; // [rsp+38h] [rbp-E20h]
  int v973; // [rsp+38h] [rbp-E20h]
  int v974; // [rsp+38h] [rbp-E20h]
  int v975; // [rsp+38h] [rbp-E20h]
  int v976; // [rsp+38h] [rbp-E20h]
  _QWORD *v977; // [rsp+38h] [rbp-E20h]
  int v978; // [rsp+38h] [rbp-E20h]
  int v979; // [rsp+38h] [rbp-E20h]
  __int64 v980; // [rsp+38h] [rbp-E20h]
  int v981; // [rsp+38h] [rbp-E20h]
  int v982; // [rsp+38h] [rbp-E20h]
  int v983; // [rsp+38h] [rbp-E20h]
  int v984; // [rsp+38h] [rbp-E20h]
  int v985; // [rsp+38h] [rbp-E20h]
  _QWORD *v986; // [rsp+38h] [rbp-E20h]
  int v987; // [rsp+38h] [rbp-E20h]
  int v988; // [rsp+38h] [rbp-E20h]
  __int64 v989; // [rsp+38h] [rbp-E20h]
  int v990; // [rsp+38h] [rbp-E20h]
  int v991; // [rsp+38h] [rbp-E20h]
  int v992; // [rsp+38h] [rbp-E20h]
  int v993; // [rsp+38h] [rbp-E20h]
  int v994; // [rsp+38h] [rbp-E20h]
  _QWORD *v995; // [rsp+38h] [rbp-E20h]
  int v996; // [rsp+38h] [rbp-E20h]
  int v997; // [rsp+38h] [rbp-E20h]
  __int64 v998; // [rsp+38h] [rbp-E20h]
  int v999; // [rsp+38h] [rbp-E20h]
  int v1000; // [rsp+38h] [rbp-E20h]
  int v1001; // [rsp+38h] [rbp-E20h]
  int v1002; // [rsp+38h] [rbp-E20h]
  int v1003; // [rsp+38h] [rbp-E20h]
  int v1004; // [rsp+38h] [rbp-E20h]
  int v1005; // [rsp+38h] [rbp-E20h]
  int v1006; // [rsp+38h] [rbp-E20h]
  int v1007; // [rsp+38h] [rbp-E20h]
  int v1008; // [rsp+38h] [rbp-E20h]
  int v1009; // [rsp+38h] [rbp-E20h]
  int v1010; // [rsp+38h] [rbp-E20h]
  int v1011; // [rsp+38h] [rbp-E20h]
  int v1012; // [rsp+38h] [rbp-E20h]
  int v1013; // [rsp+38h] [rbp-E20h]
  int v1014; // [rsp+38h] [rbp-E20h]
  int v1015; // [rsp+38h] [rbp-E20h]
  int v1016; // [rsp+38h] [rbp-E20h]
  int v1017; // [rsp+38h] [rbp-E20h]
  __int64 v1018; // [rsp+38h] [rbp-E20h]
  int v1019; // [rsp+38h] [rbp-E20h]
  int v1020; // [rsp+38h] [rbp-E20h]
  _QWORD *v1021; // [rsp+38h] [rbp-E20h]
  int v1022; // [rsp+38h] [rbp-E20h]
  int v1023; // [rsp+38h] [rbp-E20h]
  __int64 v1024; // [rsp+38h] [rbp-E20h]
  int v1025; // [rsp+38h] [rbp-E20h]
  int v1026; // [rsp+38h] [rbp-E20h]
  int v1027; // [rsp+38h] [rbp-E20h]
  int v1028; // [rsp+38h] [rbp-E20h]
  int v1029; // [rsp+40h] [rbp-E18h]
  int v1030; // [rsp+40h] [rbp-E18h]
  int v1031; // [rsp+40h] [rbp-E18h]
  int v1032; // [rsp+40h] [rbp-E18h]
  int v1033; // [rsp+40h] [rbp-E18h]
  int v1034; // [rsp+40h] [rbp-E18h]
  int v1035; // [rsp+40h] [rbp-E18h]
  int v1036; // [rsp+40h] [rbp-E18h]
  int v1037; // [rsp+40h] [rbp-E18h]
  int v1038; // [rsp+40h] [rbp-E18h]
  int v1039; // [rsp+40h] [rbp-E18h]
  int v1040; // [rsp+40h] [rbp-E18h]
  int v1041; // [rsp+40h] [rbp-E18h]
  int v1042; // [rsp+40h] [rbp-E18h]
  int v1043; // [rsp+40h] [rbp-E18h]
  int v1044; // [rsp+40h] [rbp-E18h]
  int v1045; // [rsp+40h] [rbp-E18h]
  int v1046; // [rsp+40h] [rbp-E18h]
  int v1047; // [rsp+40h] [rbp-E18h]
  int v1048; // [rsp+40h] [rbp-E18h]
  int v1049; // [rsp+40h] [rbp-E18h]
  int v1050; // [rsp+40h] [rbp-E18h]
  int v1051; // [rsp+40h] [rbp-E18h]
  int v1052; // [rsp+40h] [rbp-E18h]
  _QWORD *v1053; // [rsp+40h] [rbp-E18h]
  int v1054; // [rsp+40h] [rbp-E18h]
  int v1055; // [rsp+40h] [rbp-E18h]
  int v1056; // [rsp+40h] [rbp-E18h]
  int v1057; // [rsp+40h] [rbp-E18h]
  int v1058; // [rsp+40h] [rbp-E18h]
  int v1059; // [rsp+40h] [rbp-E18h]
  int v1060; // [rsp+40h] [rbp-E18h]
  int v1061; // [rsp+40h] [rbp-E18h]
  _QWORD *v1062; // [rsp+40h] [rbp-E18h]
  int v1063; // [rsp+40h] [rbp-E18h]
  int v1064; // [rsp+40h] [rbp-E18h]
  int v1065; // [rsp+40h] [rbp-E18h]
  int v1066; // [rsp+40h] [rbp-E18h]
  int v1067; // [rsp+40h] [rbp-E18h]
  int v1068; // [rsp+40h] [rbp-E18h]
  int v1069; // [rsp+40h] [rbp-E18h]
  int v1070; // [rsp+40h] [rbp-E18h]
  _QWORD *v1071; // [rsp+40h] [rbp-E18h]
  int v1072; // [rsp+40h] [rbp-E18h]
  int v1073; // [rsp+40h] [rbp-E18h]
  int v1074; // [rsp+40h] [rbp-E18h]
  int v1075; // [rsp+40h] [rbp-E18h]
  int v1076; // [rsp+40h] [rbp-E18h]
  int v1077; // [rsp+40h] [rbp-E18h]
  int v1078; // [rsp+40h] [rbp-E18h]
  int v1079; // [rsp+40h] [rbp-E18h]
  int v1080; // [rsp+40h] [rbp-E18h]
  __int64 v1081; // [rsp+40h] [rbp-E18h]
  int v1082; // [rsp+40h] [rbp-E18h]
  int v1083; // [rsp+40h] [rbp-E18h]
  int v1084; // [rsp+40h] [rbp-E18h]
  int v1085; // [rsp+40h] [rbp-E18h]
  int v1086; // [rsp+40h] [rbp-E18h]
  int v1087; // [rsp+40h] [rbp-E18h]
  int v1088; // [rsp+40h] [rbp-E18h]
  int v1089; // [rsp+40h] [rbp-E18h]
  int v1090; // [rsp+40h] [rbp-E18h]
  int v1091; // [rsp+40h] [rbp-E18h]
  int v1092; // [rsp+40h] [rbp-E18h]
  int v1093; // [rsp+40h] [rbp-E18h]
  int v1094; // [rsp+40h] [rbp-E18h]
  int v1095; // [rsp+40h] [rbp-E18h]
  int v1096; // [rsp+40h] [rbp-E18h]
  _QWORD *v1097; // [rsp+40h] [rbp-E18h]
  int v1098; // [rsp+40h] [rbp-E18h]
  int v1099; // [rsp+48h] [rbp-E10h]
  int v1100; // [rsp+48h] [rbp-E10h]
  int v1101; // [rsp+48h] [rbp-E10h]
  int v1102; // [rsp+48h] [rbp-E10h]
  int v1103; // [rsp+48h] [rbp-E10h]
  int v1104; // [rsp+48h] [rbp-E10h]
  int v1105; // [rsp+48h] [rbp-E10h]
  int v1106; // [rsp+48h] [rbp-E10h]
  int v1107; // [rsp+48h] [rbp-E10h]
  int v1108; // [rsp+48h] [rbp-E10h]
  int v1109; // [rsp+48h] [rbp-E10h]
  int v1110; // [rsp+48h] [rbp-E10h]
  int v1111; // [rsp+48h] [rbp-E10h]
  int v1112; // [rsp+48h] [rbp-E10h]
  int v1113; // [rsp+48h] [rbp-E10h]
  int v1114; // [rsp+48h] [rbp-E10h]
  int v1115; // [rsp+48h] [rbp-E10h]
  int v1116; // [rsp+48h] [rbp-E10h]
  int v1117; // [rsp+48h] [rbp-E10h]
  int v1118; // [rsp+48h] [rbp-E10h]
  int v1119; // [rsp+48h] [rbp-E10h]
  int v1120; // [rsp+48h] [rbp-E10h]
  int v1121; // [rsp+48h] [rbp-E10h]
  int v1122; // [rsp+48h] [rbp-E10h]
  int v1123; // [rsp+48h] [rbp-E10h]
  int v1124; // [rsp+48h] [rbp-E10h]
  int v1125; // [rsp+48h] [rbp-E10h]
  int v1126; // [rsp+48h] [rbp-E10h]
  int v1127; // [rsp+48h] [rbp-E10h]
  int v1128; // [rsp+48h] [rbp-E10h]
  int v1129; // [rsp+48h] [rbp-E10h]
  int v1130; // [rsp+48h] [rbp-E10h]
  int v1131; // [rsp+48h] [rbp-E10h]
  int v1132; // [rsp+48h] [rbp-E10h]
  int v1133; // [rsp+48h] [rbp-E10h]
  int v1134; // [rsp+48h] [rbp-E10h]
  int v1135; // [rsp+48h] [rbp-E10h]
  int v1136; // [rsp+48h] [rbp-E10h]
  int v1137; // [rsp+48h] [rbp-E10h]
  int v1138; // [rsp+48h] [rbp-E10h]
  int v1139; // [rsp+48h] [rbp-E10h]
  int v1140; // [rsp+48h] [rbp-E10h]
  int v1141; // [rsp+48h] [rbp-E10h]
  int v1142; // [rsp+48h] [rbp-E10h]
  int v1143; // [rsp+48h] [rbp-E10h]
  int v1144; // [rsp+48h] [rbp-E10h]
  int v1145; // [rsp+48h] [rbp-E10h]
  int v1146; // [rsp+48h] [rbp-E10h]
  int v1147; // [rsp+48h] [rbp-E10h]
  int v1148; // [rsp+48h] [rbp-E10h]
  int v1149; // [rsp+48h] [rbp-E10h]
  int v1150; // [rsp+48h] [rbp-E10h]
  int v1151; // [rsp+48h] [rbp-E10h]
  int v1152; // [rsp+48h] [rbp-E10h]
  int v1153; // [rsp+48h] [rbp-E10h]
  int v1154; // [rsp+48h] [rbp-E10h]
  int v1155; // [rsp+48h] [rbp-E10h]
  int v1156; // [rsp+48h] [rbp-E10h]
  int v1157; // [rsp+48h] [rbp-E10h]
  int v1158; // [rsp+48h] [rbp-E10h]
  int v1159; // [rsp+48h] [rbp-E10h]
  int v1160; // [rsp+48h] [rbp-E10h]
  int v1161; // [rsp+48h] [rbp-E10h]
  int v1162; // [rsp+48h] [rbp-E10h]
  int v1163; // [rsp+48h] [rbp-E10h]
  int v1164; // [rsp+48h] [rbp-E10h]
  int v1165; // [rsp+48h] [rbp-E10h]
  int v1166; // [rsp+48h] [rbp-E10h]
  int v1167; // [rsp+48h] [rbp-E10h]
  int v1168; // [rsp+50h] [rbp-E08h]
  int v1169; // [rsp+50h] [rbp-E08h]
  int v1170; // [rsp+50h] [rbp-E08h]
  int v1171; // [rsp+50h] [rbp-E08h]
  int v1172; // [rsp+50h] [rbp-E08h]
  int v1173; // [rsp+50h] [rbp-E08h]
  int v1174; // [rsp+50h] [rbp-E08h]
  int v1175; // [rsp+50h] [rbp-E08h]
  int v1176; // [rsp+50h] [rbp-E08h]
  int v1177; // [rsp+50h] [rbp-E08h]
  int v1178; // [rsp+50h] [rbp-E08h]
  int v1179; // [rsp+50h] [rbp-E08h]
  int v1180; // [rsp+50h] [rbp-E08h]
  int v1181; // [rsp+50h] [rbp-E08h]
  int v1182; // [rsp+50h] [rbp-E08h]
  int v1183; // [rsp+50h] [rbp-E08h]
  int v1184; // [rsp+50h] [rbp-E08h]
  int v1185; // [rsp+50h] [rbp-E08h]
  int v1186; // [rsp+50h] [rbp-E08h]
  int v1187; // [rsp+50h] [rbp-E08h]
  int v1188; // [rsp+50h] [rbp-E08h]
  int v1189; // [rsp+50h] [rbp-E08h]
  int v1190; // [rsp+50h] [rbp-E08h]
  int v1191; // [rsp+50h] [rbp-E08h]
  int v1192; // [rsp+50h] [rbp-E08h]
  int v1193; // [rsp+50h] [rbp-E08h]
  int v1194; // [rsp+50h] [rbp-E08h]
  int v1195; // [rsp+50h] [rbp-E08h]
  int v1196; // [rsp+50h] [rbp-E08h]
  int v1197; // [rsp+50h] [rbp-E08h]
  int v1198; // [rsp+50h] [rbp-E08h]
  int v1199; // [rsp+50h] [rbp-E08h]
  int v1200; // [rsp+50h] [rbp-E08h]
  int v1201; // [rsp+50h] [rbp-E08h]
  int v1202; // [rsp+50h] [rbp-E08h]
  int v1203; // [rsp+50h] [rbp-E08h]
  int v1204; // [rsp+50h] [rbp-E08h]
  int v1205; // [rsp+50h] [rbp-E08h]
  int v1206; // [rsp+50h] [rbp-E08h]
  int v1207; // [rsp+50h] [rbp-E08h]
  int v1208; // [rsp+50h] [rbp-E08h]
  int v1209; // [rsp+50h] [rbp-E08h]
  int v1210; // [rsp+50h] [rbp-E08h]
  int v1211; // [rsp+50h] [rbp-E08h]
  int v1212; // [rsp+50h] [rbp-E08h]
  int v1213; // [rsp+50h] [rbp-E08h]
  int v1214; // [rsp+50h] [rbp-E08h]
  int v1215; // [rsp+50h] [rbp-E08h]
  int v1216; // [rsp+50h] [rbp-E08h]
  int v1217; // [rsp+50h] [rbp-E08h]
  int v1218; // [rsp+50h] [rbp-E08h]
  int v1219; // [rsp+50h] [rbp-E08h]
  int v1220; // [rsp+50h] [rbp-E08h]
  int v1221; // [rsp+50h] [rbp-E08h]
  int v1222; // [rsp+50h] [rbp-E08h]
  int v1223; // [rsp+50h] [rbp-E08h]
  int v1224; // [rsp+50h] [rbp-E08h]
  int v1225; // [rsp+50h] [rbp-E08h]
  int v1226; // [rsp+50h] [rbp-E08h]
  int v1227; // [rsp+50h] [rbp-E08h]
  int v1228; // [rsp+50h] [rbp-E08h]
  int v1229; // [rsp+50h] [rbp-E08h]
  int v1230; // [rsp+50h] [rbp-E08h]
  int v1231; // [rsp+50h] [rbp-E08h]
  int v1232; // [rsp+50h] [rbp-E08h]
  int v1233; // [rsp+50h] [rbp-E08h]
  int v1234; // [rsp+50h] [rbp-E08h]
  int v1235; // [rsp+50h] [rbp-E08h]
  int v1236; // [rsp+50h] [rbp-E08h]
  char v1237; // [rsp+58h] [rbp-E00h]
  char v1238; // [rsp+58h] [rbp-E00h]
  char v1239; // [rsp+58h] [rbp-E00h]
  char v1240; // [rsp+58h] [rbp-E00h]
  char v1241; // [rsp+58h] [rbp-E00h]
  char v1242; // [rsp+58h] [rbp-E00h]
  char v1243; // [rsp+58h] [rbp-E00h]
  char v1244; // [rsp+58h] [rbp-E00h]
  char v1245; // [rsp+58h] [rbp-E00h]
  char v1246; // [rsp+58h] [rbp-E00h]
  char v1247; // [rsp+58h] [rbp-E00h]
  char v1248; // [rsp+58h] [rbp-E00h]
  char v1249; // [rsp+58h] [rbp-E00h]
  char v1250; // [rsp+58h] [rbp-E00h]
  char v1251; // [rsp+58h] [rbp-E00h]
  char v1252; // [rsp+58h] [rbp-E00h]
  char v1253; // [rsp+58h] [rbp-E00h]
  char v1254; // [rsp+58h] [rbp-E00h]
  char v1255; // [rsp+58h] [rbp-E00h]
  char v1256; // [rsp+58h] [rbp-E00h]
  char v1257; // [rsp+58h] [rbp-E00h]
  char v1258; // [rsp+58h] [rbp-E00h]
  char v1259; // [rsp+58h] [rbp-E00h]
  char v1260; // [rsp+58h] [rbp-E00h]
  char v1261; // [rsp+58h] [rbp-E00h]
  char v1262; // [rsp+58h] [rbp-E00h]
  char v1263; // [rsp+58h] [rbp-E00h]
  char v1264; // [rsp+58h] [rbp-E00h]
  char v1265; // [rsp+58h] [rbp-E00h]
  char v1266; // [rsp+58h] [rbp-E00h]
  char v1267; // [rsp+58h] [rbp-E00h]
  char v1268; // [rsp+58h] [rbp-E00h]
  char v1269; // [rsp+58h] [rbp-E00h]
  char v1270; // [rsp+58h] [rbp-E00h]
  char v1271; // [rsp+58h] [rbp-E00h]
  char v1272; // [rsp+58h] [rbp-E00h]
  char v1273; // [rsp+58h] [rbp-E00h]
  char v1274; // [rsp+58h] [rbp-E00h]
  char v1275; // [rsp+58h] [rbp-E00h]
  char v1276; // [rsp+58h] [rbp-E00h]
  char v1277; // [rsp+58h] [rbp-E00h]
  char v1278; // [rsp+58h] [rbp-E00h]
  char v1279; // [rsp+58h] [rbp-E00h]
  char v1280; // [rsp+58h] [rbp-E00h]
  char v1281; // [rsp+58h] [rbp-E00h]
  char v1282; // [rsp+58h] [rbp-E00h]
  char v1283; // [rsp+58h] [rbp-E00h]
  char v1284; // [rsp+58h] [rbp-E00h]
  char v1285; // [rsp+58h] [rbp-E00h]
  char v1286; // [rsp+58h] [rbp-E00h]
  char v1287; // [rsp+58h] [rbp-E00h]
  char v1288; // [rsp+58h] [rbp-E00h]
  char v1289; // [rsp+58h] [rbp-E00h]
  char v1290; // [rsp+58h] [rbp-E00h]
  char v1291; // [rsp+58h] [rbp-E00h]
  char v1292; // [rsp+58h] [rbp-E00h]
  char v1293; // [rsp+58h] [rbp-E00h]
  char v1294; // [rsp+58h] [rbp-E00h]
  char v1295; // [rsp+58h] [rbp-E00h]
  char v1296; // [rsp+58h] [rbp-E00h]
  char v1297; // [rsp+58h] [rbp-E00h]
  char v1298; // [rsp+58h] [rbp-E00h]
  char v1299; // [rsp+58h] [rbp-E00h]
  char v1300; // [rsp+58h] [rbp-E00h]
  char v1301; // [rsp+58h] [rbp-E00h]
  char v1302; // [rsp+58h] [rbp-E00h]
  char v1303; // [rsp+58h] [rbp-E00h]
  char v1304; // [rsp+58h] [rbp-E00h]
  char v1305; // [rsp+58h] [rbp-E00h]
  char v1306; // [rsp+58h] [rbp-E00h]
  __int64 v1307; // [rsp+60h] [rbp-DF8h]
  __int64 v1308; // [rsp+60h] [rbp-DF8h]
  __int64 v1309; // [rsp+60h] [rbp-DF8h]
  __int64 v1310; // [rsp+60h] [rbp-DF8h]
  __int64 v1311; // [rsp+60h] [rbp-DF8h]
  __int64 v1312; // [rsp+60h] [rbp-DF8h]
  __int64 v1313; // [rsp+60h] [rbp-DF8h]
  __int64 v1314; // [rsp+60h] [rbp-DF8h]
  __int64 v1315; // [rsp+60h] [rbp-DF8h]
  __int64 v1316; // [rsp+60h] [rbp-DF8h]
  __int64 v1317; // [rsp+60h] [rbp-DF8h]
  __int64 v1318; // [rsp+60h] [rbp-DF8h]
  __int64 v1319; // [rsp+60h] [rbp-DF8h]
  __int64 v1320; // [rsp+60h] [rbp-DF8h]
  __int64 v1321; // [rsp+60h] [rbp-DF8h]
  __int64 v1322; // [rsp+60h] [rbp-DF8h]
  __int64 v1323; // [rsp+60h] [rbp-DF8h]
  __int64 v1324; // [rsp+60h] [rbp-DF8h]
  __int64 v1325; // [rsp+60h] [rbp-DF8h]
  __int64 v1326; // [rsp+60h] [rbp-DF8h]
  __int64 v1327; // [rsp+60h] [rbp-DF8h]
  __int64 v1328; // [rsp+60h] [rbp-DF8h]
  __int64 v1329; // [rsp+60h] [rbp-DF8h]
  __int64 v1330; // [rsp+60h] [rbp-DF8h]
  __int64 v1331; // [rsp+60h] [rbp-DF8h]
  __int64 v1332; // [rsp+60h] [rbp-DF8h]
  __int64 v1333; // [rsp+60h] [rbp-DF8h]
  __int64 v1334; // [rsp+60h] [rbp-DF8h]
  __int64 v1335; // [rsp+60h] [rbp-DF8h]
  __int64 v1336; // [rsp+60h] [rbp-DF8h]
  __int64 v1337; // [rsp+60h] [rbp-DF8h]
  __int64 v1338; // [rsp+60h] [rbp-DF8h]
  __int64 v1339; // [rsp+60h] [rbp-DF8h]
  __int64 v1340; // [rsp+60h] [rbp-DF8h]
  __int64 v1341; // [rsp+60h] [rbp-DF8h]
  __int64 v1342; // [rsp+60h] [rbp-DF8h]
  __int64 v1343; // [rsp+60h] [rbp-DF8h]
  __int64 v1344; // [rsp+60h] [rbp-DF8h]
  __int64 v1345; // [rsp+60h] [rbp-DF8h]
  __int64 v1346; // [rsp+60h] [rbp-DF8h]
  __int64 v1347; // [rsp+60h] [rbp-DF8h]
  __int64 v1348; // [rsp+60h] [rbp-DF8h]
  __int64 v1349; // [rsp+60h] [rbp-DF8h]
  __int64 v1350; // [rsp+60h] [rbp-DF8h]
  __int64 v1351; // [rsp+60h] [rbp-DF8h]
  __int64 v1352; // [rsp+60h] [rbp-DF8h]
  __int64 v1353; // [rsp+60h] [rbp-DF8h]
  __int64 v1354; // [rsp+60h] [rbp-DF8h]
  __int64 v1355; // [rsp+60h] [rbp-DF8h]
  __int64 v1356; // [rsp+60h] [rbp-DF8h]
  __int64 v1357; // [rsp+60h] [rbp-DF8h]
  __int64 v1358; // [rsp+60h] [rbp-DF8h]
  __int64 v1359; // [rsp+60h] [rbp-DF8h]
  __int64 v1360; // [rsp+60h] [rbp-DF8h]
  __int64 v1361; // [rsp+60h] [rbp-DF8h]
  __int64 v1362; // [rsp+60h] [rbp-DF8h]
  __int64 v1363; // [rsp+60h] [rbp-DF8h]
  __int64 v1364; // [rsp+60h] [rbp-DF8h]
  __int64 v1365; // [rsp+60h] [rbp-DF8h]
  __int64 v1366; // [rsp+60h] [rbp-DF8h]
  __int64 v1367; // [rsp+60h] [rbp-DF8h]
  __int64 v1368; // [rsp+60h] [rbp-DF8h]
  __int64 v1369; // [rsp+60h] [rbp-DF8h]
  __int64 v1370; // [rsp+60h] [rbp-DF8h]
  __int64 v1371; // [rsp+60h] [rbp-DF8h]
  __int64 v1372; // [rsp+60h] [rbp-DF8h]
  __int64 v1373; // [rsp+60h] [rbp-DF8h]
  __int64 v1374; // [rsp+60h] [rbp-DF8h]
  __int64 v1375; // [rsp+60h] [rbp-DF8h]
  __int64 v1376; // [rsp+60h] [rbp-DF8h]
  int v1377; // [rsp+68h] [rbp-DF0h]
  int v1378; // [rsp+68h] [rbp-DF0h]
  int v1379; // [rsp+68h] [rbp-DF0h]
  int v1380; // [rsp+68h] [rbp-DF0h]
  int v1381; // [rsp+68h] [rbp-DF0h]
  int v1382; // [rsp+68h] [rbp-DF0h]
  int v1383; // [rsp+68h] [rbp-DF0h]
  int v1384; // [rsp+68h] [rbp-DF0h]
  int v1385; // [rsp+68h] [rbp-DF0h]
  int v1386; // [rsp+68h] [rbp-DF0h]
  int v1387; // [rsp+68h] [rbp-DF0h]
  int v1388; // [rsp+68h] [rbp-DF0h]
  int v1389; // [rsp+68h] [rbp-DF0h]
  int v1390; // [rsp+68h] [rbp-DF0h]
  int v1391; // [rsp+68h] [rbp-DF0h]
  int v1392; // [rsp+68h] [rbp-DF0h]
  int v1393; // [rsp+68h] [rbp-DF0h]
  int v1394; // [rsp+68h] [rbp-DF0h]
  int v1395; // [rsp+68h] [rbp-DF0h]
  int v1396; // [rsp+68h] [rbp-DF0h]
  int v1397; // [rsp+68h] [rbp-DF0h]
  int v1398; // [rsp+68h] [rbp-DF0h]
  int v1399; // [rsp+68h] [rbp-DF0h]
  int v1400; // [rsp+68h] [rbp-DF0h]
  int v1401; // [rsp+68h] [rbp-DF0h]
  int v1402; // [rsp+68h] [rbp-DF0h]
  int v1403; // [rsp+68h] [rbp-DF0h]
  int v1404; // [rsp+68h] [rbp-DF0h]
  int v1405; // [rsp+68h] [rbp-DF0h]
  int v1406; // [rsp+68h] [rbp-DF0h]
  int v1407; // [rsp+68h] [rbp-DF0h]
  int v1408; // [rsp+68h] [rbp-DF0h]
  int v1409; // [rsp+68h] [rbp-DF0h]
  int v1410; // [rsp+68h] [rbp-DF0h]
  int v1411; // [rsp+68h] [rbp-DF0h]
  int v1412; // [rsp+68h] [rbp-DF0h]
  int v1413; // [rsp+68h] [rbp-DF0h]
  int v1414; // [rsp+68h] [rbp-DF0h]
  int v1415; // [rsp+68h] [rbp-DF0h]
  int v1416; // [rsp+68h] [rbp-DF0h]
  int v1417; // [rsp+68h] [rbp-DF0h]
  int v1418; // [rsp+68h] [rbp-DF0h]
  int v1419; // [rsp+68h] [rbp-DF0h]
  int v1420; // [rsp+68h] [rbp-DF0h]
  int v1421; // [rsp+68h] [rbp-DF0h]
  int v1422; // [rsp+68h] [rbp-DF0h]
  int v1423; // [rsp+68h] [rbp-DF0h]
  int v1424; // [rsp+68h] [rbp-DF0h]
  int v1425; // [rsp+68h] [rbp-DF0h]
  int v1426; // [rsp+68h] [rbp-DF0h]
  int v1427; // [rsp+68h] [rbp-DF0h]
  int v1428; // [rsp+68h] [rbp-DF0h]
  int v1429; // [rsp+68h] [rbp-DF0h]
  int v1430; // [rsp+68h] [rbp-DF0h]
  int v1431; // [rsp+68h] [rbp-DF0h]
  int v1432; // [rsp+68h] [rbp-DF0h]
  int v1433; // [rsp+68h] [rbp-DF0h]
  int v1434; // [rsp+68h] [rbp-DF0h]
  int v1435; // [rsp+68h] [rbp-DF0h]
  int v1436; // [rsp+68h] [rbp-DF0h]
  int v1437; // [rsp+68h] [rbp-DF0h]
  int v1438; // [rsp+68h] [rbp-DF0h]
  int v1439; // [rsp+68h] [rbp-DF0h]
  int v1440; // [rsp+68h] [rbp-DF0h]
  int v1441; // [rsp+68h] [rbp-DF0h]
  int v1442; // [rsp+68h] [rbp-DF0h]
  int v1443; // [rsp+68h] [rbp-DF0h]
  int v1444; // [rsp+68h] [rbp-DF0h]
  int v1445; // [rsp+68h] [rbp-DF0h]
  __m128i v1446; // [rsp+70h] [rbp-DE8h] BYREF
  __int128 *v1447; // [rsp+80h] [rbp-DD8h]
  ida_mcp::tools::jumptables *v1448; // [rsp+88h] [rbp-DD0h]
  char *v1449; // [rsp+90h] [rbp-DC8h]
  char *v1450; // [rsp+98h] [rbp-DC0h]
  char *v1451; // [rsp+A0h] [rbp-DB8h]
  char *v1452; // [rsp+A8h] [rbp-DB0h]
  char *v1453; // [rsp+B0h] [rbp-DA8h]
  __int8 *v1454; // [rsp+B8h] [rbp-DA0h]
  __m128i *v1455; // [rsp+C0h] [rbp-D98h]
  __int64 *v1456; // [rsp+C8h] [rbp-D90h]
  const __m128i *v1457; // [rsp+D0h] [rbp-D88h]
  __int64 *v1458; // [rsp+D8h] [rbp-D80h]
  _QWORD *v1459; // [rsp+E0h] [rbp-D78h]
  _QWORD *v1460; // [rsp+E8h] [rbp-D70h]
  __int128 *v1461; // [rsp+F0h] [rbp-D68h]
  char *v1462; // [rsp+F8h] [rbp-D60h]
  __int64 *v1463; // [rsp+100h] [rbp-D58h]
  __m128i *v1464; // [rsp+108h] [rbp-D50h]
  __int64 *v1465; // [rsp+110h] [rbp-D48h]
  __int64 *v1466; // [rsp+118h] [rbp-D40h]
  __int64 *v1467; // [rsp+120h] [rbp-D38h]
  __int64 *v1468; // [rsp+128h] [rbp-D30h]
  __int128 *v1469; // [rsp+130h] [rbp-D28h]
  __int64 *v1470; // [rsp+138h] [rbp-D20h]
  __int64 *v1471; // [rsp+140h] [rbp-D18h]
  __int128 *v1472; // [rsp+148h] [rbp-D10h]
  __int128 *v1473; // [rsp+150h] [rbp-D08h]
  const __m128i *v1474; // [rsp+158h] [rbp-D00h]
  __m128i *v1475; // [rsp+160h] [rbp-CF8h]
  char *v1476; // [rsp+168h] [rbp-CF0h]
  char *v1477; // [rsp+170h] [rbp-CE8h]
  __int128 *v1478; // [rsp+178h] [rbp-CE0h]
  __int128 *v1479; // [rsp+180h] [rbp-CD8h]
  __int128 *v1480; // [rsp+188h] [rbp-CD0h]
  const __m128i *v1481; // [rsp+190h] [rbp-CC8h]
  __int128 *v1482; // [rsp+198h] [rbp-CC0h]
  __int128 *v1483; // [rsp+1A0h] [rbp-CB8h]
  __int128 *v1484; // [rsp+1A8h] [rbp-CB0h]
  char *v1485; // [rsp+1B0h] [rbp-CA8h]
  __int128 *v1486; // [rsp+1B8h] [rbp-CA0h]
  __int128 *v1487; // [rsp+1C0h] [rbp-C98h]
  const __m128i *v1488; // [rsp+1C8h] [rbp-C90h]
  __int128 *v1489; // [rsp+1D0h] [rbp-C88h]
  char *v1490; // [rsp+1D8h] [rbp-C80h]
  __int128 *v1491; // [rsp+1E0h] [rbp-C78h]
  __int128 *v1492; // [rsp+1E8h] [rbp-C70h]
  const __m128i *v1493; // [rsp+1F0h] [rbp-C68h]
  __int128 *v1494; // [rsp+1F8h] [rbp-C60h]
  char *v1495; // [rsp+200h] [rbp-C58h]
  __int128 *v1496; // [rsp+208h] [rbp-C50h]
  __int128 *v1497; // [rsp+210h] [rbp-C48h]
  char *v1498; // [rsp+218h] [rbp-C40h]
  char *v1499; // [rsp+220h] [rbp-C38h]
  __int128 *v1500; // [rsp+228h] [rbp-C30h]
  char *v1501; // [rsp+230h] [rbp-C28h]
  const __m128i *v1502; // [rsp+238h] [rbp-C20h]
  __int128 *v1503; // [rsp+240h] [rbp-C18h]
  char *v1504; // [rsp+248h] [rbp-C10h]
  __int128 *v1505; // [rsp+250h] [rbp-C08h]
  __int128 *v1506; // [rsp+258h] [rbp-C00h]
  char *v1507; // [rsp+260h] [rbp-BF8h]
  __m128i *v1508; // [rsp+268h] [rbp-BF0h]
  __int128 *v1509; // [rsp+270h] [rbp-BE8h]
  __int64 *v1510; // [rsp+278h] [rbp-BE0h]
  __int64 *v1511; // [rsp+280h] [rbp-BD8h]
  __int64 *v1512; // [rsp+288h] [rbp-BD0h]
  __int64 *v1513; // [rsp+290h] [rbp-BC8h]
  char *v1514; // [rsp+298h] [rbp-BC0h]
  __int64 *v1515; // [rsp+2A0h] [rbp-BB8h]
  __int64 *v1516; // [rsp+2A8h] [rbp-BB0h]
  __m128i *v1517; // [rsp+2B0h] [rbp-BA8h]
  _QWORD *v1518; // [rsp+2B8h] [rbp-BA0h]
  char *v1519; // [rsp+2C0h] [rbp-B98h]
  char *v1520; // [rsp+2C8h] [rbp-B90h]
  char *v1521; // [rsp+2D0h] [rbp-B88h]
  char *v1522; // [rsp+2D8h] [rbp-B80h]
  __m128i v1523; // [rsp+2E0h] [rbp-B78h] BYREF
  __int64 v1524; // [rsp+2F0h] [rbp-B68h] BYREF
  __int64 v1525; // [rsp+2F8h] [rbp-B60h] BYREF
  __m128i v1526; // [rsp+300h] [rbp-B58h] BYREF
  __int64 v1527; // [rsp+310h] [rbp-B48h]
  char v1528; // [rsp+318h] [rbp-B40h]
  __int128 v1529; // [rsp+320h] [rbp-B38h] BYREF
  _QWORD v1530[3]; // [rsp+330h] [rbp-B28h] BYREF
  char v1531; // [rsp+348h] [rbp-B10h]
  __int128 v1532; // [rsp+350h] [rbp-B08h] BYREF
  __m128i v1533; // [rsp+360h] [rbp-AF8h] BYREF
  __int64 v1534; // [rsp+370h] [rbp-AE8h]
  char v1535; // [rsp+378h] [rbp-AE0h]
  __int128 v1536; // [rsp+380h] [rbp-AD8h] BYREF
  __m128i v1537; // [rsp+390h] [rbp-AC8h] BYREF
  __int64 v1538; // [rsp+3A0h] [rbp-AB8h]
  _QWORD v1539[3]; // [rsp+3A8h] [rbp-AB0h] BYREF
  _QWORD v1540[3]; // [rsp+3C0h] [rbp-A98h] BYREF
  _QWORD v1541[3]; // [rsp+3D8h] [rbp-A80h] BYREF
  _QWORD v1542[3]; // [rsp+3F0h] [rbp-A68h] BYREF
  char v1543; // [rsp+408h] [rbp-A50h]
  __int128 v1544; // [rsp+410h] [rbp-A48h] BYREF
  __m128i v1545; // [rsp+420h] [rbp-A38h] BYREF
  __int64 v1546; // [rsp+430h] [rbp-A28h]
  char v1547; // [rsp+438h] [rbp-A20h]
  __int128 v1548; // [rsp+440h] [rbp-A18h] BYREF
  __m128i v1549; // [rsp+450h] [rbp-A08h] BYREF
  __int64 v1550; // [rsp+460h] [rbp-9F8h]
  _QWORD v1551[3]; // [rsp+468h] [rbp-9F0h] BYREF
  char v1552; // [rsp+480h] [rbp-9D8h] BYREF
  __int64 v1553; // [rsp+490h] [rbp-9C8h]
  _QWORD v1554[3]; // [rsp+498h] [rbp-9C0h] BYREF
  __m128i v1555; // [rsp+4B0h] [rbp-9A8h] BYREF
  __int64 v1556; // [rsp+4C0h] [rbp-998h]
  __int64 v1557; // [rsp+4D8h] [rbp-980h]
  __m128i v1558; // [rsp+4E0h] [rbp-978h] BYREF
  __int64 v1559; // [rsp+4F0h] [rbp-968h]
  char v1560; // [rsp+4F8h] [rbp-960h]
  __int128 v1561; // [rsp+500h] [rbp-958h] BYREF
  __m128i v1562; // [rsp+510h] [rbp-948h] BYREF
  __int64 v1563; // [rsp+520h] [rbp-938h]
  _QWORD v1564[3]; // [rsp+528h] [rbp-930h] BYREF
  char v1565; // [rsp+540h] [rbp-918h] BYREF
  __int128 v1566; // [rsp+548h] [rbp-910h] BYREF
  _QWORD v1567[3]; // [rsp+558h] [rbp-900h] BYREF
  _QWORD v1568[3]; // [rsp+570h] [rbp-8E8h] BYREF
  char v1569; // [rsp+588h] [rbp-8D0h]
  __int128 v1570; // [rsp+590h] [rbp-8C8h] BYREF
  __m128i v1571; // [rsp+5A0h] [rbp-8B8h] BYREF
  __int64 v1572; // [rsp+5B0h] [rbp-8A8h]
  char v1573; // [rsp+5B8h] [rbp-8A0h]
  __int128 v1574; // [rsp+5C0h] [rbp-898h] BYREF
  __m128i v1575; // [rsp+5D0h] [rbp-888h] BYREF
  __int64 v1576; // [rsp+5E0h] [rbp-878h]
  _QWORD v1577[3]; // [rsp+5E8h] [rbp-870h] BYREF
  char v1578; // [rsp+600h] [rbp-858h] BYREF
  __int128 v1579; // [rsp+608h] [rbp-850h] BYREF
  _QWORD v1580[3]; // [rsp+618h] [rbp-840h] BYREF
  _QWORD v1581[3]; // [rsp+630h] [rbp-828h] BYREF
  char v1582; // [rsp+648h] [rbp-810h]
  __int128 v1583; // [rsp+650h] [rbp-808h] BYREF
  __m128i v1584; // [rsp+660h] [rbp-7F8h] BYREF
  __int64 v1585; // [rsp+670h] [rbp-7E8h]
  char v1586; // [rsp+678h] [rbp-7E0h]
  __int128 v1587; // [rsp+680h] [rbp-7D8h] BYREF
  __m128i v1588; // [rsp+690h] [rbp-7C8h] BYREF
  __int64 v1589; // [rsp+6A0h] [rbp-7B8h]
  _QWORD v1590[3]; // [rsp+6A8h] [rbp-7B0h] BYREF
  char v1591; // [rsp+6C0h] [rbp-798h] BYREF
  __int128 v1592; // [rsp+6C8h] [rbp-790h] BYREF
  _QWORD v1593[3]; // [rsp+6D8h] [rbp-780h] BYREF
  __m128i v1594; // [rsp+6F0h] [rbp-768h] BYREF
  __int64 v1595; // [rsp+700h] [rbp-758h]
  __int64 v1596; // [rsp+718h] [rbp-740h]
  __m128i v1597; // [rsp+720h] [rbp-738h] BYREF
  __int64 v1598; // [rsp+730h] [rbp-728h]
  char v1599; // [rsp+738h] [rbp-720h]
  __int128 v1600; // [rsp+740h] [rbp-718h] BYREF
  __m128i v1601; // [rsp+750h] [rbp-708h] BYREF
  __int64 v1602; // [rsp+760h] [rbp-6F8h]
  _QWORD v1603[3]; // [rsp+768h] [rbp-6F0h] BYREF
  __m128i v1604; // [rsp+780h] [rbp-6D8h] BYREF
  __int64 v1605; // [rsp+790h] [rbp-6C8h]
  _QWORD v1606[3]; // [rsp+798h] [rbp-6C0h] BYREF
  _QWORD v1607[3]; // [rsp+7B0h] [rbp-6A8h] BYREF
  char v1608; // [rsp+7C8h] [rbp-690h]
  __int128 v1609; // [rsp+7D0h] [rbp-688h] BYREF
  __m128i v1610; // [rsp+7E0h] [rbp-678h] BYREF
  __int64 v1611; // [rsp+7F0h] [rbp-668h]
  char v1612; // [rsp+7F8h] [rbp-660h]
  __int128 v1613; // [rsp+800h] [rbp-658h] BYREF
  __m128i v1614; // [rsp+810h] [rbp-648h] BYREF
  __int64 v1615; // [rsp+820h] [rbp-638h]
  _QWORD v1616[3]; // [rsp+828h] [rbp-630h] BYREF
  char v1617; // [rsp+840h] [rbp-618h] BYREF
  __int128 v1618; // [rsp+848h] [rbp-610h] BYREF
  _QWORD v1619[3]; // [rsp+858h] [rbp-600h] BYREF
  __m128i v1620; // [rsp+870h] [rbp-5E8h] BYREF
  __int64 v1621; // [rsp+880h] [rbp-5D8h]
  __int64 v1622; // [rsp+898h] [rbp-5C0h]
  __m128i v1623; // [rsp+8A0h] [rbp-5B8h] BYREF
  __int64 v1624; // [rsp+8B0h] [rbp-5A8h]
  char v1625; // [rsp+8B8h] [rbp-5A0h]
  __int128 v1626; // [rsp+8C0h] [rbp-598h] BYREF
  _QWORD v1627[3]; // [rsp+8D0h] [rbp-588h] BYREF
  _QWORD v1628[3]; // [rsp+8E8h] [rbp-570h] BYREF
  char v1629[8]; // [rsp+900h] [rbp-558h] BYREF
  __int128 v1630; // [rsp+908h] [rbp-550h] BYREF
  __int64 v1631; // [rsp+918h] [rbp-540h] BYREF
  __int128 v1632; // [rsp+920h] [rbp-538h] BYREF
  __int64 v1633; // [rsp+930h] [rbp-528h] BYREF
  char v1634; // [rsp+938h] [rbp-520h] BYREF
  __int64 v1635; // [rsp+940h] [rbp-518h]
  char v1636; // [rsp+948h] [rbp-510h]
  __int128 v1637; // [rsp+950h] [rbp-508h] BYREF
  __int64 v1638; // [rsp+960h] [rbp-4F8h] BYREF
  char v1639; // [rsp+968h] [rbp-4F0h] BYREF
  __int64 v1640; // [rsp+970h] [rbp-4E8h]
  char v1641; // [rsp+978h] [rbp-4E0h]
  __int128 v1642; // [rsp+980h] [rbp-4D8h] BYREF
  __int64 v1643; // [rsp+990h] [rbp-4C8h] BYREF
  char v1644; // [rsp+998h] [rbp-4C0h] BYREF
  __int64 v1645; // [rsp+9A0h] [rbp-4B8h]
  __int64 v1646; // [rsp+9A8h] [rbp-4B0h] BYREF
  char v1647; // [rsp+9B0h] [rbp-4A8h] BYREF
  __int64 v1648; // [rsp+9B8h] [rbp-4A0h]
  char v1649[8]; // [rsp+9C0h] [rbp-498h] BYREF
  __int128 v1650; // [rsp+9C8h] [rbp-490h] BYREF
  __int64 v1651; // [rsp+9D8h] [rbp-480h] BYREF
  char v1652; // [rsp+9E0h] [rbp-478h] BYREF
  __int64 v1653; // [rsp+9E8h] [rbp-470h]
  __int64 v1654; // [rsp+9F0h] [rbp-468h] BYREF
  char v1655; // [rsp+9F8h] [rbp-460h] BYREF
  __int64 v1656; // [rsp+A00h] [rbp-458h]
  char v1657; // [rsp+A08h] [rbp-450h]
  __int128 v1658; // [rsp+A10h] [rbp-448h] BYREF
  __int64 v1659; // [rsp+A20h] [rbp-438h] BYREF
  char v1660; // [rsp+A28h] [rbp-430h] BYREF
  __int64 v1661; // [rsp+A30h] [rbp-428h]
  char v1662; // [rsp+A38h] [rbp-420h]
  __int128 v1663; // [rsp+A40h] [rbp-418h] BYREF
  __int64 v1664; // [rsp+A50h] [rbp-408h] BYREF
  char v1665; // [rsp+A58h] [rbp-400h] BYREF
  __int64 v1666; // [rsp+A60h] [rbp-3F8h]
  __int64 v1667; // [rsp+A68h] [rbp-3F0h] BYREF
  char v1668; // [rsp+A70h] [rbp-3E8h] BYREF
  __int64 v1669; // [rsp+A78h] [rbp-3E0h]
  char v1670[8]; // [rsp+A80h] [rbp-3D8h] BYREF
  __int128 v1671; // [rsp+A88h] [rbp-3D0h] BYREF
  __int64 v1672; // [rsp+A98h] [rbp-3C0h] BYREF
  char v1673; // [rsp+AA0h] [rbp-3B8h] BYREF
  __int64 v1674; // [rsp+AA8h] [rbp-3B0h]
  __int64 v1675; // [rsp+AB0h] [rbp-3A8h] BYREF
  char v1676; // [rsp+AB8h] [rbp-3A0h] BYREF
  __int64 v1677; // [rsp+AC0h] [rbp-398h]
  char v1678; // [rsp+AC8h] [rbp-390h] BYREF
  char v1679; // [rsp+AD0h] [rbp-388h] BYREF
  __int64 v1680; // [rsp+AD8h] [rbp-380h]
  __int64 v1681; // [rsp+AE0h] [rbp-378h] BYREF
  char v1682; // [rsp+AE8h] [rbp-370h] BYREF
  __int64 v1683; // [rsp+AF0h] [rbp-368h]
  char v1684; // [rsp+AF8h] [rbp-360h]
  __int128 v1685; // [rsp+B00h] [rbp-358h] BYREF
  __int64 v1686; // [rsp+B10h] [rbp-348h] BYREF
  char v1687; // [rsp+B18h] [rbp-340h] BYREF
  __int64 v1688; // [rsp+B20h] [rbp-338h]
  __int64 v1689; // [rsp+B28h] [rbp-330h] BYREF
  __int128 v1690; // [rsp+B30h] [rbp-328h] BYREF
  char v1691[8]; // [rsp+B40h] [rbp-318h] BYREF
  __int128 v1692; // [rsp+B48h] [rbp-310h] BYREF
  __int64 v1693; // [rsp+B58h] [rbp-300h] BYREF
  __int128 v1694; // [rsp+B60h] [rbp-2F8h] BYREF
  char v1695; // [rsp+B70h] [rbp-2E8h] BYREF
  char v1696; // [rsp+B78h] [rbp-2E0h] BYREF
  __int64 v1697; // [rsp+B80h] [rbp-2D8h]
  __int64 v1698; // [rsp+B88h] [rbp-2D0h] BYREF
  char v1699; // [rsp+B90h] [rbp-2C8h] BYREF
  __int64 v1700; // [rsp+B98h] [rbp-2C0h]
  char v1701[8]; // [rsp+BA0h] [rbp-2B8h] BYREF
  __int128 v1702; // [rsp+BA8h] [rbp-2B0h] BYREF
  __m128i v1703; // [rsp+BB8h] [rbp-2A0h] BYREF
  __int64 v1704; // [rsp+BC8h] [rbp-290h]
  __int64 v1705; // [rsp+BD0h] [rbp-288h] BYREF
  char v1706; // [rsp+BD8h] [rbp-280h] BYREF
  __int64 v1707; // [rsp+BE0h] [rbp-278h]
  char v1708; // [rsp+BE8h] [rbp-270h] BYREF
  __int128 v1709; // [rsp+BF0h] [rbp-268h] BYREF
  char v1710; // [rsp+C00h] [rbp-258h]
  __int128 v1711; // [rsp+C08h] [rbp-250h]
  char v1712; // [rsp+C18h] [rbp-240h] BYREF
  __int64 v1713; // [rsp+C20h] [rbp-238h] BYREF
  __int128 v1714; // [rsp+C28h] [rbp-230h] BYREF
  __m128i v1715; // [rsp+C38h] [rbp-220h] BYREF
  __int64 v1716; // [rsp+C48h] [rbp-210h]
  _QWORD v1717[2]; // [rsp+C50h] [rbp-208h] BYREF
  __int64 v1718; // [rsp+C60h] [rbp-1F8h]
  char v1719; // [rsp+C68h] [rbp-1F0h] BYREF
  __m128i *v1720; // [rsp+C70h] [rbp-1E8h] BYREF
  __int64 v1721; // [rsp+C78h] [rbp-1E0h]
  __m128i v1722; // [rsp+C80h] [rbp-1D8h] BYREF
  _BYTE *v1723; // [rsp+C90h] [rbp-1C8h]
  __int64 v1724; // [rsp+C98h] [rbp-1C0h]
  _BYTE v1725[16]; // [rsp+CA0h] [rbp-1B8h] BYREF
  __int64 v1726; // [rsp+CB0h] [rbp-1A8h]
  _QWORD v1727[3]; // [rsp+CB8h] [rbp-1A0h] BYREF
  char v1728; // [rsp+CD0h] [rbp-188h]
  _BYTE v1729[24]; // [rsp+CF8h] [rbp-160h] BYREF
  __int64 (__fastcall *v1730)(__int64, char *); // [rsp+D10h] [rbp-148h] BYREF
  __int64 v1731; // [rsp+D18h] [rbp-140h]
  __m128i v1732; // [rsp+D20h] [rbp-138h] BYREF
  _QWORD *v1733; // [rsp+D30h] [rbp-128h] BYREF
  __int64 v1734; // [rsp+D38h] [rbp-120h]
  _QWORD v1735[2]; // [rsp+D40h] [rbp-118h] BYREF
  __int64 v1736; // [rsp+D50h] [rbp-108h]
  _QWORD v1737[3]; // [rsp+D58h] [rbp-100h] BYREF
  _QWORD v1738[3]; // [rsp+D70h] [rbp-E8h] BYREF
  _QWORD v1739[3]; // [rsp+D88h] [rbp-D0h] BYREF
  __int64 v1740; // [rsp+DA0h] [rbp-B8h] BYREF
  char v1741; // [rsp+DA8h] [rbp-B0h]
  __int64 v1742; // [rsp+DB0h] [rbp-A8h]
  _QWORD v1743[3]; // [rsp+DB8h] [rbp-A0h] BYREF
  _QWORD v1744[3]; // [rsp+DD0h] [rbp-88h] BYREF
  _QWORD v1745[3]; // [rsp+DE8h] [rbp-70h] BYREF
  _QWORD v1746[3]; // [rsp+E00h] [rbp-58h] BYREF
  unsigned __int64 v1747; // [rsp+E18h] [rbp-40h]

  v1448 = this;
  v1747 = __readfsqword(0x28u);
  v1720 = &v1722;
  v1721 = 0;
  v1722.m128i_i8[0] = 0;
  v1459 = v1725;
  v1723 = v1725;
  v1724 = 0;
  v1725[0] = 0;
  LOBYTE(v1726) = 0;
  v1727[0] = 0;
  v1728 = 0;
  v1729[16] = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1526);
  v1527 = 0;
  v1528 = 0;
  *(_QWORD *)&v1529 = 0;
  v1461 = &v1529;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1528 = 3;
  v2 = operator new(0x20u);
  strcpy((char *)(v2 + 16), "object");
  *(_QWORD *)v2 = v2 + 16;
  *(_QWORD *)(v2 + 8) = 6;
  v1529 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1713,
    &v1526);
  *((_QWORD *)&v1714 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  v1697 = 0;
  v1474 = (const __m128i *)v1540;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1540);
  v1540[2] = 0;
  v1457 = (const __m128i *)v1530;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1530);
  v1530[2] = 0;
  v1531 = 0;
  *(_QWORD *)&v1532 = 0;
  v1463 = (__int64 *)&v1532;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1531 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  v4 = v1457;
  strcpy((char *)(v3 + 16), "string");
  *(_QWORD *)(v3 + 8) = 6;
  v1532 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1537,
    v4);
  v1538 = 0;
  v1464 = &v1533;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1533);
  v1534 = 0;
  v1535 = 0;
  *(_QWORD *)&v1536 = 0;
  v1473 = &v1536;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1535 = 3;
  v5 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v5,
    "Hex address of the indirect jump instruction",
    v6,
    v7,
    v8,
    v9,
    v399,
    v493,
    v586);
  v1536 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1539,
    &v1533);
  v1539[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1541,
    &v1537);
  v1541[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1730,
    v1474);
  v1732.m128i_i64[0] = 0;
  v1481 = (const __m128i *)&v1552;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  v1553 = 0;
  v1475 = (__m128i *)v1542;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1542);
  v1542[2] = 0;
  v1543 = 0;
  *(_QWORD *)&v1544 = 0;
  v1483 = &v1544;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1543 = 3;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v10 + 16;
  v11 = v1475;
  strcpy((char *)(v10 + 16), "string");
  *(_QWORD *)(v10 + 8) = 6;
  v1544 = (unsigned __int64)v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1549,
    v11);
  v1550 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1545);
  v1546 = 0;
  v1547 = 0;
  *(_QWORD *)&v1548 = 0;
  v1484 = &v1548;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1547 = 3;
  v12 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v12,
    "Hex address of the jump table start",
    v13,
    v14,
    v15,
    v16,
    v400,
    v494,
    v587);
  v1548 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1551,
    &v1545);
  v1551[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1554,
    &v1549);
  v1554[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1732.m128i_i64[1],
    v1481);
  v1734 = 0;
  v1565 = 0;
  *(_QWORD *)&v1566 = 0;
  v1487 = &v1566;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1565 = 3;
  v17 = operator new(0x20u);
  strcpy((char *)(v17 + 16), "ncases");
  *(_QWORD *)v17 = v17 + 16;
  *(_QWORD *)(v17 + 8) = 6;
  v1566 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1555);
  v1556 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1562,
    &v1555);
  v1563 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1558);
  v1559 = 0;
  v1560 = 0;
  *(_QWORD *)&v1561 = 0;
  v1486 = &v1561;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1560 = 3;
  v18 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v18,
    "Number of cases (excluding default)",
    v19,
    v20,
    v21,
    v22,
    v401,
    v495,
    v588);
  v1561 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1564,
    &v1558);
  v1564[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1567,
    &v1562);
  v1567[2] = 0;
  v1519 = &v1565;
  v1460 = v1735;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1735,
    (const __m128i *)&v1565);
  v1736 = 0;
  v1578 = 0;
  *(_QWORD *)&v1579 = 0;
  v1492 = &v1579;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1578 = 3;
  v23 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v23, "default_jump", v24, v25, v26, v27, v402, v496, v589);
  v1488 = (const __m128i *)v1568;
  v1579 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1568);
  v1568[2] = 0;
  v1569 = 0;
  *(_QWORD *)&v1570 = 0;
  v1489 = &v1570;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1569 = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)v28 = v28 + 16;
  v29 = v1488;
  strcpy((char *)(v28 + 16), "string");
  *(_QWORD *)(v28 + 8) = 6;
  v1570 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1575,
    v29);
  v1576 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1571);
  v1572 = 0;
  v1573 = 0;
  *(_QWORD *)&v1574 = 0;
  v1491 = &v1574;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1573 = 3;
  v30 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v30,
    "Hex address of default case (optional)",
    v31,
    v32,
    v33,
    v34,
    v403,
    v497,
    v590);
  v1574 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1577,
    &v1571);
  v1577[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1580,
    &v1575);
  v1580[2] = 0;
  v1520 = &v1578;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1737,
    (const __m128i *)&v1578);
  v1737[2] = 0;
  v1591 = 0;
  *(_QWORD *)&v1592 = 0;
  v1497 = &v1592;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1591 = 3;
  v35 = operator new(0x20u);
  *(_QWORD *)v35 = v35 + 16;
  strcpy((char *)(v35 + 16), "start_ea");
  *(_QWORD *)(v35 + 8) = 8;
  v1493 = (const __m128i *)v1581;
  v1592 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1581);
  v1581[2] = 0;
  v1582 = 0;
  *(_QWORD *)&v1583 = 0;
  v1494 = &v1583;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1582 = 3;
  v36 = operator new(0x20u);
  *(_QWORD *)v36 = v36 + 16;
  v37 = v1493;
  strcpy((char *)(v36 + 16), "string");
  *(_QWORD *)(v36 + 8) = 6;
  v1583 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1588,
    v37);
  v1589 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1584);
  v1585 = 0;
  v1586 = 0;
  *(_QWORD *)&v1587 = 0;
  v1496 = &v1587;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1586 = 3;
  v38 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v38,
    "Start of switch idiom (optional)",
    v39,
    v40,
    v41,
    v42,
    v404,
    v498,
    v591);
  v1587 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1590,
    &v1584);
  v1590[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1593,
    &v1588);
  v1593[2] = 0;
  v1521 = &v1591;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1738,
    (const __m128i *)&v1591);
  v1738[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1605 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1594);
  v1595 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1596 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1601,
    &v1594);
  v1602 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1597);
  v1598 = 0;
  v1599 = 0;
  *(_QWORD *)&v1600 = 0;
  v1500 = &v1600;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1599 = 3;
  v43 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v43,
    "Lowest case value (optional, default 0)",
    v44,
    v45,
    v46,
    v47,
    v405,
    v499,
    v592);
  v1600 = (unsigned __int64)v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1603,
    &v1597);
  v1603[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1606,
    &v1601);
  v1606[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1739,
    &v1604);
  v1739[2] = 0;
  v1617 = 0;
  *(_QWORD *)&v1618 = 0;
  v1506 = &v1618;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1617 = 3;
  v48 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v48, "element_base", v49, v50, v51, v52, v406, v500, v593);
  v1502 = (const __m128i *)v1607;
  v1618 = (unsigned __int64)v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1607);
  v1607[2] = 0;
  v1608 = 0;
  *(_QWORD *)&v1609 = 0;
  v1503 = &v1609;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1608 = 3;
  v53 = operator new(0x20u);
  *(_QWORD *)v53 = v53 + 16;
  v54 = v1502;
  strcpy((char *)(v53 + 16), "string");
  *(_QWORD *)(v53 + 8) = 6;
  v1609 = (unsigned __int64)v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1614,
    v54);
  v1615 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1610);
  v1611 = 0;
  v1612 = 0;
  *(_QWORD *)&v1613 = 0;
  v1505 = &v1613;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1612 = 3;
  v55 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v55,
    "Element base address for relative tables (optional)",
    v56,
    v57,
    v58,
    v59,
    v407,
    v501,
    v594);
  v1613 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1616,
    &v1610);
  v1616[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1619,
    &v1614);
  v1619[2] = 0;
  v1522 = &v1617;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1740,
    (const __m128i *)&v1617);
  v1742 = 0;
  v1629[0] = 0;
  *(_QWORD *)&v1630 = 0;
  v1478 = &v1630;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1629[0] = 3;
  v60 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v60, "jtable_element_size", v61, v62, v63, v64, v408, v502, v595);
  v1630 = (unsigned __int64)v60;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1620);
  v1621 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1622 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1627,
    &v1620);
  v1627[2] = 0;
  v1508 = &v1623;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1623);
  v1624 = 0;
  v1625 = 0;
  *(_QWORD *)&v1626 = 0;
  v1509 = &v1626;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1625 = 3;
  v65 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v65,
    "Jump table element size: 1, 2, 4, or 8 (default 4)",
    v66,
    v67,
    v68,
    v69,
    v409,
    v503,
    v596);
  v1626 = (unsigned __int64)v65;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1628,
    &v1623);
  v1628[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1631,
    (__int64)v1627,
    2,
    v70,
    v71,
    v72,
    v410,
    v504,
    v597,
    v679,
    (int)&v1695,
    v819,
    v889,
    v959,
    v1029,
    (int)&v1537,
    (int)&v1549,
    v1237,
    v1307,
    (int)&v1562,
    v1446.m128i_i64[0]);
  *((_QWORD *)&v1632 + 1) = 0;
  v1476 = v1629;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1743,
    (__int64)v1629,
    2,
    v73,
    v74,
    v75,
    v411,
    v505,
    v598,
    v680,
    v749,
    v820,
    v890,
    v960,
    v1030,
    v1099,
    v1168,
    v1238,
    v1308,
    v1377,
    v1446.m128i_i64[0]);
  v1743[2] = 0;
  v1649[0] = 0;
  *(_QWORD *)&v1650 = 0;
  v1479 = &v1650;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1649[0] = 3;
  v76 = operator new(0x20u);
  strcpy((char *)(v76 + 16), "sparse");
  *(_QWORD *)v76 = v76 + 16;
  *(_QWORD *)(v76 + 8) = 6;
  v1467 = &v1633;
  v1650 = (unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1633);
  v1635 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1637 + 1) = 0;
  v1465 = &v1643;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1643,
    (__int64)&v1633,
    2,
    v77,
    v78,
    v79,
    v412,
    v506,
    v599,
    v681,
    v750,
    v821,
    v891,
    v961,
    v1031,
    v1100,
    v1169,
    v1239,
    v1309,
    v1378,
    v1446.m128i_i64[0]);
  v1645 = 0;
  v1468 = &v1638;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1638);
  v1640 = 0;
  v1641 = 0;
  *(_QWORD *)&v1642 = 0;
  v1469 = &v1642;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1641 = 3;
  v80 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v80,
    "Whether switch is sparse (has value table)",
    v81,
    v82,
    v83,
    v84,
    v413,
    v507,
    v600);
  v1510 = &v1646;
  v1642 = (unsigned __int64)v80;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1646,
    (__int64)&v1638,
    2,
    v85,
    v86,
    v87,
    v414,
    v508,
    v601,
    v682,
    v751,
    v822,
    v892,
    v962,
    v1032,
    v1101,
    v1170,
    v1240,
    v1310,
    v1379,
    v1446.m128i_i64[0]);
  v1648 = 0;
  v1511 = &v1651;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1651,
    (__int64)&v1643,
    2,
    v88,
    v89,
    v90,
    v415,
    v509,
    v602,
    v683,
    v752,
    v823,
    v893,
    v963,
    v1033,
    v1102,
    v1171,
    v1241,
    v1311,
    v1380,
    v1446.m128i_i64[0]);
  v1653 = 0;
  v1477 = v1649;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1744,
    (__int64)v1649,
    2,
    v91,
    v92,
    v93,
    v416,
    v510,
    v603,
    v684,
    v753,
    v824,
    v894,
    v964,
    v1034,
    v1103,
    v1172,
    v1242,
    v1312,
    v1381,
    v1446.m128i_i64[0]);
  v1744[2] = 0;
  v1670[0] = 0;
  *(_QWORD *)&v1671 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1670[0] = 3;
  v94 = operator new(0x20u);
  strcpy((char *)(v94 + 16), "signed");
  *(_QWORD *)v94 = v94 + 16;
  *(_QWORD *)(v94 + 8) = 6;
  v1470 = &v1654;
  v1671 = (unsigned __int64)v94;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1654);
  v1656 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v1658 + 1) = 0;
  v1466 = &v1664;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1664,
    (__int64)&v1654,
    2,
    v95,
    v96,
    v97,
    v417,
    v511,
    v604,
    v685,
    v754,
    v825,
    v895,
    v965,
    v1035,
    v1104,
    v1173,
    (char)&v1671,
    v1313,
    v1382,
    v1446.m128i_i64[0]);
  v1666 = 0;
  v1471 = &v1659;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1659);
  v1661 = 0;
  v1662 = 0;
  *(_QWORD *)&v1663 = 0;
  v1472 = &v1663;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1662 = 3;
  v98 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v98,
    "Whether jump table entries are signed",
    v99,
    v100,
    v101,
    v102,
    v418,
    v512,
    v605);
  v1512 = &v1667;
  v1663 = (unsigned __int64)v98;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1667,
    (__int64)&v1659,
    2,
    v103,
    v104,
    v105,
    v419,
    v513,
    v606,
    v686,
    v755,
    v826,
    v896,
    v966,
    v1036,
    v1105,
    v1174,
    v1243,
    v1314,
    v1383,
    v1446.m128i_i64[0]);
  v1669 = 0;
  v1513 = &v1672;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1672,
    (__int64)&v1664,
    2,
    v106,
    v107,
    v108,
    v420,
    v514,
    v607,
    v687,
    v756,
    v827,
    v897,
    v967,
    v1037,
    v1106,
    v1175,
    v1244,
    v1315,
    v1384,
    v1446.m128i_i64[0]);
  v1674 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1745,
    (__int64)v1670,
    2,
    v109,
    v110,
    v111,
    v421,
    v515,
    v608,
    v688,
    v757,
    v828,
    v898,
    v968,
    (int)v1670,
    v1107,
    v1176,
    v1245,
    v1316,
    v1385,
    v1446.m128i_i64[0]);
  v1745[2] = 0;
  v1691[0] = 0;
  *(_QWORD *)&v1692 = 0;
  v1447 = &v1692;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1691[0] = 3;
  v112 = operator new(0x20u);
  *(_QWORD *)v112 = v112 + 16;
  strcpy((char *)(v112 + 16), "subtract");
  *(_QWORD *)(v112 + 8) = 8;
  v1692 = (unsigned __int64)v112;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1675);
  v1677 = 0;
  v1514 = &v1678;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1680 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1686,
    (__int64)&v1675,
    2,
    v113,
    v114,
    v115,
    v422,
    (__int64)&v1686,
    v609,
    v689,
    v758,
    (int)&v1675,
    v899,
    v969,
    v1038,
    v1108,
    v1177,
    v1246,
    v1317,
    v1386,
    v1446.m128i_i64[0]);
  v1688 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v1681);
  v1683 = 0;
  v1684 = 0;
  *(_QWORD *)&v1685 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1684 = 3;
  v116 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v116,
    "Whether values are subtracted from elbase",
    v117,
    v118,
    v119,
    v120,
    v423,
    v516,
    (__int64)&v1681);
  v1515 = &v1689;
  v1685 = (unsigned __int64)v116;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1689,
    v610,
    2,
    v121,
    v122,
    v123,
    v424,
    v517,
    v610,
    (int)&v1685,
    v759,
    v829,
    v900,
    v970,
    v1039,
    v1109,
    v1178,
    v1247,
    v1318,
    v1387,
    v1446.m128i_i64[0]);
  *((_QWORD *)&v1690 + 1) = 0;
  v1516 = &v1693;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1693,
    v518,
    2,
    v124,
    v125,
    v126,
    v425,
    v518,
    v611,
    v690,
    v760,
    v830,
    v901,
    v971,
    v1040,
    v1110,
    v1179,
    v1248,
    v1319,
    v1388,
    v1446.m128i_i64[0]);
  v127 = v1746;
  *((_QWORD *)&v1694 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1746,
    (__int64)v1691,
    2,
    v128,
    v129,
    v130,
    v426,
    v519,
    v612,
    v691,
    v761,
    v831,
    (__int64)v1691,
    v972,
    v1041,
    v1111,
    v1180,
    v1249,
    v1320,
    v1389,
    v1446.m128i_i64[0]);
  v1746[2] = 0;
  v1458 = &v1698;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1698,
    (__int64)&v1730,
    11,
    v131,
    v132,
    v133,
    v427,
    v520,
    v613,
    v692,
    v762,
    v832,
    v902,
    v973,
    v1042,
    v1112,
    v1181,
    v1250,
    v1321,
    v1390,
    v1446.m128i_i64[0]);
  v1700 = 0;
  v1517 = &v1715;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1715,
    v763,
    2,
    v134,
    v135,
    v136,
    v428,
    v521,
    v614,
    v693,
    v763,
    v833,
    v903,
    v974,
    v1043,
    v1113,
    v1182,
    v1251,
    v1322,
    v1391,
    v1446.m128i_i64[0]);
  v1716 = 0;
  v1701[0] = 0;
  *(_QWORD *)&v1702 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1701[0] = 3;
  v137 = operator new(0x20u);
  *(_QWORD *)v137 = v137 + 16;
  strcpy((char *)(v137 + 16), "required");
  *(_QWORD *)(v137 + 8) = 8;
  v1702 = (unsigned __int64)v137;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1705);
  v1707 = 0;
  v1462 = &v1708;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  *((_QWORD *)&v1709 + 1) = 0;
  v1710 = 0;
  *(_QWORD *)&v1711 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1710 = 3;
  v138 = operator new(0x20u);
  *(_QWORD *)v138 = v138 + 16;
  strcpy((char *)(v138 + 16), "ncases");
  v139 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v138 + 8) = 6;
  v1455 = &v1523;
  v1446.m128i_i64[1] = v139.m128_i64[1];
  v1711 = (unsigned __int64)v138;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v140 = _mm_load_si128(&v1523);
  v1704 = 0;
  v1518 = v1717;
  v1703 = v140;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1717,
    (__int64)v1701,
    2,
    v141,
    v142,
    v143,
    v429,
    v522,
    v615,
    v694,
    v764,
    v834,
    v904,
    (int)v1701,
    v1044,
    v1114,
    v1183,
    v1252,
    (__int64)&v1702,
    v1392,
    v139.m128_i64[0]);
  v1718 = 0;
  LOBYTE(v1524) = 0;
  v1456 = &v1524;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1524,
    (__int64)&v1713,
    3,
    v144,
    v145,
    v146,
    v430,
    v523,
    v616,
    v695,
    v765,
    v835,
    v905,
    v975,
    v1045,
    v1115,
    v1184,
    v1253,
    v1323,
    v1393,
    v1446.m128i_i64[0]);
  LOBYTE(v54) = v1726;
  v147 = (__int64 *)&v1719;
  v148 = v1525;
  LOBYTE(v1726) = v1524;
  LOBYTE(v1524) = (_BYTE)v54;
  v1525 = v1727[0];
  v1727[0] = v148;
  v1457 = (const __m128i *)&v1525;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v147 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v147 != &v1713 );
  v149 = (__int64 *)&v1712;
  v1454 = &v1703.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v149 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v149 != &v1705 );
  v1453 = &v1699;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1452 = &v1696;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v127 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v127 != v1729 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1451 = &v1687;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1450 = &v1682;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1507 = &v1679;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1449 = &v1676;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1504 = &v1673;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1502 = (const __m128i *)&v1668;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1501 = &v1665;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1499 = &v1660;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1482 = &v1658;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1498 = &v1655;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1495 = &v1652;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1493 = (const __m128i *)&v1647;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1490 = &v1644;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1488 = (const __m128i *)&v1639;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1481 = (const __m128i *)&v1637;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1485 = &v1634;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1480 = &v1632;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v150 = _mm_load_si128(&v1446);
  v1731 = 0;
  v1730 = ida_mcp::tools::jumptables::`anonymous namespace'::set_switch_info_impl;
  v1732 = v150;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1732.m128i_i64[0] )
    ((void (__fastcall *)(__int64 (__fastcall **)(__int64, char *), __int64 (__fastcall **)(__int64, char *), __int64))v1732.m128i_i64[0])(
      &v1730,
      &v1730,
      3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1720);
  v1730 = (__int64 (__fastcall *)(__int64, char *))&v1732;
  v1731 = 0;
  v1732.m128i_i8[0] = 0;
  v1733 = v1460;
  v1734 = 0;
  LOBYTE(v1735[0]) = 0;
  LOBYTE(v1736) = 0;
  v1737[0] = 0;
  LOBYTE(v1738[0]) = 0;
  v1741 = 0;
  std::string::_M_replace();
  v1464 = (__m128i *)&v1733;
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v617);
  v1683 = 0;
  v1684 = 0;
  *(_QWORD *)&v1685 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1684 = 3;
  v151 = operator new(0x20u);
  *(_QWORD *)v151 = v151 + 16;
  strcpy((char *)(v151 + 16), "object");
  *(_QWORD *)(v151 + 8) = 6;
  v1685 = (unsigned __int64)v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1720,
    (__int64)v617,
    2,
    v152,
    v153,
    v154,
    v431,
    v524,
    (int)v617,
    v696,
    v766,
    v836,
    v906,
    v976,
    v1046,
    (int)&v1690,
    (int)&v1694,
    v1254,
    v1324,
    v1394,
    v1446.m128i_i64[0]);
  v1722.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  v1707 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v977);
  *((_QWORD *)&v1702 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v525);
  v1688 = 0;
  LOBYTE(v1689) = 0;
  *(_QWORD *)&v1690 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1689) = 3;
  v155 = operator new(0x20u);
  strcpy((char *)(v155 + 16), "string");
  *(_QWORD *)v155 = v155 + 16;
  *(_QWORD *)(v155 + 8) = 6;
  v1690 = (unsigned __int64)v155;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v767,
    (__int64)v525,
    2,
    v156,
    v157,
    v158,
    v432,
    (__int64)v525,
    v618,
    v697,
    (int)v767,
    v837,
    v907,
    (int)v977,
    v1047,
    v1116,
    v1185,
    v1255,
    v1325,
    v1395,
    v1446.m128i_i64[0]);
  v1697 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v908);
  *((_QWORD *)&v1692 + 1) = 0;
  LOBYTE(v1693) = 0;
  *(_QWORD *)&v1694 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1693) = 3;
  v159 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v159,
    "Hex address of the switch instruction",
    v160,
    v161,
    v162,
    v163,
    v433,
    v526,
    v619);
  v1694 = (unsigned __int64)v159;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1458,
    (__int64)v908,
    2,
    v164,
    v165,
    v166,
    v434,
    v527,
    v620,
    v698,
    v768,
    v838,
    (__int64)v908,
    v978,
    v1048,
    v1117,
    v1186,
    v1256,
    v1326,
    v1396,
    v1446.m128i_i64[0]);
  v1700 = 0;
  v1475 = &v1703;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1703,
    v769,
    2,
    v167,
    v168,
    v169,
    v435,
    v528,
    v621,
    v699,
    v769,
    v839,
    v909,
    v979,
    v1049,
    v1118,
    v1187,
    v1257,
    v1327,
    v1397,
    v1446.m128i_i64[0]);
  v1704 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v840,
    v980,
    2,
    v170,
    v171,
    v172,
    v436,
    v529,
    v622,
    v700,
    v770,
    (int)v840,
    v910,
    v980,
    v1050,
    v1119,
    v1188,
    v1258,
    v1328,
    v1398,
    v1446.m128i_i64[0]);
  v1677 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1462,
    v841,
    1,
    v173,
    v174,
    v175,
    v437,
    v530,
    v623,
    v701,
    v771,
    v841,
    v911,
    v981,
    v1051,
    v1120,
    v1189,
    v1259,
    v1329,
    v1399,
    v1446.m128i_i64[0]);
  *((_QWORD *)&v1709 + 1) = 0;
  v1463 = &v1722.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1722.m128i_i64[1],
    (__int64)&v1705,
    2,
    v176,
    v177,
    v178,
    v438,
    v531,
    v624,
    v702,
    v772,
    v842,
    v912,
    v982,
    v1052,
    v1121,
    v1190,
    v1260,
    v1330,
    v1400,
    v1446.m128i_i64[0]);
  v1724 = 0;
  LOBYTE(v1713) = 0;
  *(_QWORD *)&v1714 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1713) = 3;
  v179 = operator new(0x20u);
  *(_QWORD *)v179 = v179 + 16;
  strcpy((char *)(v179 + 16), "required");
  *(_QWORD *)(v179 + 8) = 8;
  v1714 = (unsigned __int64)v179;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1053);
  *((_QWORD *)&v1671 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v180 = _mm_load_si128(&v1523);
  v1716 = 0;
  v1715 = v180;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1459,
    (__int64)&v1713,
    2,
    v181,
    v182,
    v183,
    v439,
    v532,
    v625,
    v703,
    v773,
    v843,
    v913,
    v983,
    (int)v1053,
    v1122,
    v1191,
    v1261,
    v1331,
    (int)&v1714,
    v1446.m128i_i64[0]);
  v1726 = 0;
  LOBYTE(v1524) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1456,
    (__int64)&v1720,
    3,
    v184,
    v185,
    v186,
    v440,
    v533,
    v626,
    v704,
    v774,
    v844,
    v914,
    v984,
    v1054,
    v1123,
    v1192,
    v1262,
    v1332,
    v1401,
    v1446.m128i_i64[0]);
  v187 = v1736;
  v188 = (__m128i **)v1727;
  LOBYTE(v1736) = v1524;
  v189 = v1737[0];
  LOBYTE(v1524) = v187;
  v1737[0] = v1525;
  v1525 = v189;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v188 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v188 != &v1720 );
  v1474 = (const __m128i *)&v1715.m128i_u64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1461 = &v1709;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1473 = (__int128 *)&v1706;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v190 = _mm_load_si128(&v1446);
  v1721 = 0;
  v1720 = (__m128i *)ida_mcp::tools::jumptables::`anonymous namespace'::del_switch_info_impl;
  v1722 = v190;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1722.m128i_i64[0] )
    ((void (__fastcall *)(__m128i **, __m128i **, __int64))v1722.m128i_i64[0])(&v1720, &v1720, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1730);
  v1730 = (__int64 (__fastcall *)(__int64, char *))&v1732;
  v1731 = 0;
  v1732.m128i_i8[0] = 0;
  v1733 = v1460;
  v1734 = 0;
  LOBYTE(v1735[0]) = 0;
  LOBYTE(v1736) = 0;
  v1737[0] = 0;
  LOBYTE(v1738[0]) = 0;
  v1741 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v627);
  v1683 = 0;
  v1684 = 0;
  *(_QWORD *)&v1685 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1684 = 3;
  v191 = operator new(0x20u);
  *(_QWORD *)v191 = v191 + 16;
  strcpy((char *)(v191 + 16), "object");
  *(_QWORD *)(v191 + 8) = 6;
  v1685 = (unsigned __int64)v191;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1720,
    (__int64)v627,
    2,
    v192,
    29795,
    v193,
    v441,
    v534,
    (int)v627,
    v705,
    v775,
    v845,
    v915,
    v985,
    v1055,
    v1124,
    v1193,
    v1263,
    v1333,
    v1402,
    v1446.m128i_i64[0]);
  v1722.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  v1707 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v986);
  *((_QWORD *)&v1702 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v535);
  v1688 = 0;
  LOBYTE(v1689) = 0;
  *(_QWORD *)&v1690 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1689) = 3;
  v194 = operator new(0x20u);
  *(_QWORD *)v194 = v194 + 16;
  strcpy((char *)(v194 + 16), "string");
  *(_QWORD *)(v194 + 8) = 6;
  v1690 = (unsigned __int64)v194;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v776,
    (__int64)v535,
    2,
    v195,
    v196,
    v197,
    v442,
    (__int64)v535,
    v628,
    v706,
    (int)v776,
    v846,
    v916,
    (int)v986,
    v1056,
    v1125,
    v1194,
    v1264,
    v1334,
    v1403,
    v1446.m128i_i64[0]);
  v1697 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v917);
  *((_QWORD *)&v1692 + 1) = 0;
  LOBYTE(v1693) = 0;
  *(_QWORD *)&v1694 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1693) = 3;
  v198 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v198,
    "Hex address of the switch instruction",
    v199,
    v200,
    v201,
    v202,
    v443,
    v536,
    v629);
  v1694 = (unsigned __int64)v198;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1458,
    (__int64)v917,
    2,
    v203,
    v204,
    v205,
    v444,
    v537,
    v630,
    v707,
    v777,
    v847,
    (__int64)v917,
    v987,
    v1057,
    v1126,
    v1195,
    v1265,
    v1335,
    v1404,
    v1446.m128i_i64[0]);
  v1700 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1475,
    v778,
    2,
    v206,
    v207,
    v208,
    v445,
    v538,
    v631,
    v708,
    v778,
    v848,
    v918,
    v988,
    v1058,
    v1127,
    v1196,
    v1266,
    v1336,
    v1405,
    v1446.m128i_i64[0]);
  v1704 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v849,
    v989,
    2,
    v209,
    v210,
    v211,
    v446,
    v539,
    v632,
    v709,
    v779,
    (int)v849,
    v919,
    v989,
    v1059,
    v1128,
    v1197,
    v1267,
    v1337,
    v1406,
    v1446.m128i_i64[0]);
  v1677 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1462,
    v850,
    1,
    v212,
    v213,
    v214,
    v447,
    v540,
    v633,
    v710,
    v780,
    v850,
    v920,
    v990,
    v1060,
    v1129,
    v1198,
    v1268,
    v1338,
    v1407,
    v1446.m128i_i64[0]);
  *((_QWORD *)&v1709 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1463,
    (__int64)&v1705,
    2,
    v215,
    v216,
    v217,
    v448,
    v541,
    v634,
    v711,
    v781,
    v851,
    v921,
    v991,
    v1061,
    v1130,
    v1199,
    v1269,
    v1339,
    v1408,
    v1446.m128i_i64[0]);
  v1724 = 0;
  LOBYTE(v1713) = 0;
  *(_QWORD *)&v1714 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1713) = 3;
  v218 = operator new(0x20u);
  *(_QWORD *)v218 = v218 + 16;
  strcpy((char *)(v218 + 16), "required");
  *(_QWORD *)(v218 + 8) = 8;
  v1714 = (unsigned __int64)v218;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1062);
  *((_QWORD *)&v1671 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v219 = _mm_load_si128(&v1523);
  v1716 = 0;
  v1715 = v219;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1459,
    (__int64)&v1713,
    2,
    v220,
    v221,
    v222,
    v449,
    v542,
    v635,
    v712,
    v782,
    v852,
    v922,
    v992,
    (int)v1062,
    v1131,
    v1200,
    v1270,
    v1340,
    v1409,
    v1446.m128i_i64[0]);
  v1726 = 0;
  LOBYTE(v1524) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1456,
    (__int64)&v1720,
    3,
    v223,
    v224,
    v225,
    v450,
    v543,
    v636,
    v713,
    v783,
    v853,
    v923,
    v993,
    v1063,
    v1132,
    v1201,
    v1271,
    v1341,
    v1410,
    v1446.m128i_i64[0]);
  v226 = v1736;
  v227 = (__m128i **)v1727;
  LOBYTE(v1736) = v1524;
  v228 = v1737[0];
  LOBYTE(v1524) = v226;
  v1737[0] = v1525;
  v1525 = v228;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v227 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v227 != &v1720 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v229 = _mm_load_si128(&v1446);
  v1721 = 0;
  v1720 = (__m128i *)ida_mcp::tools::jumptables::`anonymous namespace'::create_switch_xrefs_impl;
  v1722 = v229;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1722.m128i_i64[0] )
    ((void (__fastcall *)(__m128i **, __m128i **, __int64))v1722.m128i_i64[0])(&v1720, &v1720, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1730);
  v1730 = (__int64 (__fastcall *)(__int64, char *))&v1732;
  v1731 = 0;
  v1732.m128i_i8[0] = 0;
  v1733 = v1460;
  v1734 = 0;
  LOBYTE(v1735[0]) = 0;
  LOBYTE(v1736) = 0;
  v1737[0] = 0;
  LOBYTE(v1738[0]) = 0;
  v1741 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v637);
  v1683 = 0;
  v1684 = 0;
  *(_QWORD *)&v1685 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1684 = 3;
  v230 = operator new(0x20u);
  *(_QWORD *)v230 = v230 + 16;
  strcpy((char *)(v230 + 16), "object");
  *(_QWORD *)(v230 + 8) = 6;
  v1685 = (unsigned __int64)v230;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1720,
    (__int64)v637,
    2,
    v231,
    v232,
    29795,
    v451,
    v544,
    (int)v637,
    v714,
    v784,
    v854,
    v924,
    v994,
    v1064,
    v1133,
    v1202,
    v1272,
    v1342,
    v1411,
    v1446.m128i_i64[0]);
  v1722.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  v1707 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v995);
  *((_QWORD *)&v1702 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v545);
  v1688 = 0;
  LOBYTE(v1689) = 0;
  *(_QWORD *)&v1690 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1689) = 3;
  v233 = operator new(0x20u);
  *(_QWORD *)v233 = v233 + 16;
  strcpy((char *)(v233 + 16), "string");
  *(_QWORD *)(v233 + 8) = 6;
  v1690 = (unsigned __int64)v233;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v785,
    (__int64)v545,
    2,
    v234,
    v235,
    v236,
    v452,
    (__int64)v545,
    v638,
    v715,
    (int)v785,
    v855,
    v925,
    (int)v995,
    v1065,
    v1134,
    v1203,
    v1273,
    v1343,
    v1412,
    v1446.m128i_i64[0]);
  v1697 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v926);
  *((_QWORD *)&v1692 + 1) = 0;
  LOBYTE(v1693) = 0;
  *(_QWORD *)&v1694 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1693) = 3;
  v237 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v237,
    "Hex address to query",
    v238,
    v239,
    v240,
    v241,
    v453,
    v546,
    v639);
  v1694 = (unsigned __int64)v237;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1458,
    (__int64)v926,
    2,
    v242,
    v243,
    v244,
    v454,
    v547,
    v640,
    v716,
    v786,
    v856,
    (__int64)v926,
    v996,
    v1066,
    v1135,
    v1204,
    v1274,
    v1344,
    v1413,
    v1446.m128i_i64[0]);
  v1700 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1475,
    v787,
    2,
    v245,
    v246,
    v247,
    v455,
    v548,
    v641,
    v717,
    v787,
    v857,
    v927,
    v997,
    v1067,
    v1136,
    v1205,
    v1275,
    v1345,
    v1414,
    v1446.m128i_i64[0]);
  v1704 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v858,
    v998,
    2,
    v248,
    v249,
    v250,
    v456,
    v549,
    v642,
    v718,
    v788,
    (int)v858,
    v928,
    v998,
    v1068,
    v1137,
    v1206,
    v1276,
    v1346,
    v1415,
    v1446.m128i_i64[0]);
  v1677 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1462,
    v859,
    1,
    v251,
    v252,
    v253,
    v457,
    v550,
    v643,
    v719,
    v789,
    v859,
    v929,
    v999,
    v1069,
    v1138,
    v1207,
    v1277,
    v1347,
    v1416,
    v1446.m128i_i64[0]);
  *((_QWORD *)&v1709 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1463,
    (__int64)&v1705,
    2,
    v254,
    v255,
    v256,
    v458,
    v551,
    v644,
    v720,
    v790,
    v860,
    v930,
    v1000,
    v1070,
    v1139,
    v1208,
    v1278,
    v1348,
    v1417,
    v1446.m128i_i64[0]);
  v1724 = 0;
  LOBYTE(v1713) = 0;
  *(_QWORD *)&v1714 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1713) = 3;
  v257 = operator new(0x20u);
  *(_QWORD *)v257 = v257 + 16;
  strcpy((char *)(v257 + 16), "required");
  *(_QWORD *)(v257 + 8) = 8;
  v1714 = (unsigned __int64)v257;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1071);
  *((_QWORD *)&v1671 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v258 = _mm_load_si128(&v1523);
  v1716 = 0;
  v1715 = v258;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1459,
    (__int64)&v1713,
    2,
    v259,
    v260,
    v261,
    v459,
    v552,
    v645,
    v721,
    v791,
    v861,
    v931,
    v1001,
    (int)v1071,
    v1140,
    v1209,
    v1279,
    v1349,
    v1418,
    v1446.m128i_i64[0]);
  v1726 = 0;
  LOBYTE(v1524) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1456,
    (__int64)&v1720,
    3,
    v262,
    v263,
    v264,
    v460,
    v553,
    v646,
    v722,
    v792,
    v862,
    v932,
    v1002,
    v1072,
    v1141,
    v1210,
    v1280,
    v1350,
    v1419,
    v1446.m128i_i64[0]);
  v265 = v1736;
  v266 = (__m128i **)v1727;
  LOBYTE(v1736) = v1524;
  v267 = v1737[0];
  LOBYTE(v1524) = v265;
  v1737[0] = v1525;
  v1525 = v267;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v266 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v266 != &v1720 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v268 = _mm_load_si128(&v1446);
  v1721 = 0;
  v1720 = (__m128i *)ida_mcp::tools::jumptables::`anonymous namespace'::get_jumptable_info_impl;
  v1722 = v268;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1722.m128i_i64[0] )
    ((void (__fastcall *)(__m128i **, __m128i **, __int64))v1722.m128i_i64[0])(&v1720, &v1720, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1730);
  v1730 = (__int64 (__fastcall *)(__int64, char *))&v1732;
  v1731 = 0;
  v1732.m128i_i8[0] = 0;
  v1733 = v1460;
  v1734 = 0;
  LOBYTE(v1735[0]) = 0;
  LOBYTE(v1736) = 0;
  v1737[0] = 0;
  LOBYTE(v1738[0]) = 0;
  v1741 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1476);
  *((_QWORD *)&v1630 + 1) = 0;
  LOBYTE(v1631) = 0;
  *(_QWORD *)&v1632 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1631) = 3;
  v269 = operator new(0x20u);
  *(_QWORD *)v269 = v269 + 16;
  v270 = v1476;
  strcpy((char *)(v269 + 16), "object");
  *(_QWORD *)(v269 + 8) = 6;
  v1632 = (unsigned __int64)v269;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1720,
    (__int64)v270,
    2,
    v271,
    v272,
    v273,
    v461,
    v554,
    v647,
    v723,
    v793,
    v863,
    v933,
    v1003,
    v1073,
    v1142,
    v1211,
    v1281,
    v1351,
    v1420,
    v1446.m128i_i64[0]);
  v1722.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  v1697 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1477);
  *((_QWORD *)&v1650 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1467);
  v1635 = 0;
  v1636 = 0;
  *(_QWORD *)&v1637 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1636 = 3;
  v274 = operator new(0x20u);
  v275 = v1467;
  *(_QWORD *)v274 = v274 + 16;
  v276 = v1465;
  strcpy((char *)(v274 + 16), "string");
  *(_QWORD *)(v274 + 8) = 6;
  v1637 = (unsigned __int64)v274;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v276,
    (__int64)v275,
    2,
    v277,
    v278,
    26478,
    v462,
    v555,
    v648,
    v724,
    v794,
    v864,
    v934,
    v1004,
    v1074,
    v1143,
    v1212,
    v1282,
    v1352,
    v1421,
    v1446.m128i_i64[0]);
  v1645 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1468);
  v1640 = 0;
  v1641 = 0;
  *(_QWORD *)&v1642 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1641 = 3;
  v279 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v279,
    "Hex address of the jump instruction",
    v280,
    v281,
    v282,
    v283,
    v463,
    v556,
    v649);
  v1642 = (unsigned __int64)v279;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1510,
    (__int64)v1468,
    2,
    v284,
    v285,
    v286,
    v464,
    v557,
    v650,
    v725,
    v795,
    v865,
    v935,
    v1005,
    v1075,
    v1144,
    v1213,
    v1283,
    v1353,
    v1422,
    v1446.m128i_i64[0]);
  v1648 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1511,
    (__int64)v1465,
    2,
    v287,
    v288,
    v289,
    v465,
    v558,
    v651,
    v726,
    v796,
    v866,
    v936,
    v1006,
    v1076,
    v1145,
    v1214,
    v1284,
    v1354,
    v1423,
    v1446.m128i_i64[0]);
  v1653 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1713,
    (__int64)v1477,
    2,
    v290,
    v291,
    v292,
    v466,
    v559,
    v652,
    v727,
    v797,
    v867,
    v937,
    v1007,
    v1077,
    v1146,
    v1215,
    v1285,
    v1355,
    v1424,
    v1446.m128i_i64[0]);
  *((_QWORD *)&v1714 + 1) = 0;
  v1670[0] = 0;
  *(_QWORD *)&v1671 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1670[0] = 3;
  v293 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v293, "table_address", v294, v295, v296, v297, v467, v560, v653);
  v1671 = (unsigned __int64)v293;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1470);
  v1656 = 0;
  v1657 = 0;
  *(_QWORD *)&v1658 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1657 = 3;
  v298 = operator new(0x20u);
  v299 = v1470;
  *(_QWORD *)v298 = v298 + 16;
  v300 = v1466;
  strcpy((char *)(v298 + 16), "string");
  *(_QWORD *)(v298 + 8) = 6;
  v1658 = (unsigned __int64)v298;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v300,
    (__int64)v299,
    2,
    v301,
    v302,
    v303,
    v468,
    v561,
    v654,
    v728,
    v798,
    v868,
    v938,
    v1008,
    v1078,
    v1147,
    v1216,
    v1286,
    v1356,
    v1425,
    v1446.m128i_i64[0]);
  v1666 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1471);
  v1661 = 0;
  v1662 = 0;
  *(_QWORD *)&v1663 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1662 = 3;
  v304 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v304,
    "Hex address of the jump table",
    v305,
    v306,
    v307,
    v308,
    v469,
    v562,
    v655);
  v1663 = (unsigned __int64)v304;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1512,
    (__int64)v1471,
    2,
    v309,
    v310,
    v311,
    v470,
    v563,
    v656,
    v729,
    v799,
    v869,
    v939,
    v1009,
    v1079,
    v1148,
    v1217,
    v1287,
    v1357,
    v1426,
    v1446.m128i_i64[0]);
  v1669 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1513,
    (__int64)v1466,
    2,
    v312,
    v313,
    v314,
    v471,
    v564,
    v657,
    v730,
    v800,
    v870,
    v940,
    v1010,
    v1080,
    v1149,
    v1218,
    v1288,
    v1358,
    v1427,
    v1446.m128i_i64[0]);
  v1674 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1517,
    v1081,
    2,
    v315,
    v316,
    v317,
    v472,
    v565,
    v658,
    v731,
    v801,
    v871,
    v941,
    v1011,
    v1081,
    v1150,
    v1219,
    v1289,
    v1359,
    v1428,
    v1446.m128i_i64[0]);
  v1716 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  *((_QWORD *)&v1692 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v872);
  v1677 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v1680 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v566,
    (__int64)v872,
    2,
    v318,
    v319,
    v320,
    v473,
    (__int64)v566,
    v659,
    v732,
    v802,
    (int)v872,
    v942,
    v1012,
    v1082,
    v1151,
    v1220,
    v1290,
    v1360,
    v1429,
    v1446.m128i_i64[0]);
  v1688 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v660);
  v1683 = 0;
  v1684 = 0;
  *(_QWORD *)&v1685 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1684 = 3;
  v321 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v321,
    "Number of entries in the table",
    v322,
    v323,
    v324,
    v325,
    v474,
    v567,
    (__int64)v660);
  v1685 = (unsigned __int64)v321;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1515,
    v661,
    2,
    v326,
    v327,
    v328,
    v475,
    v568,
    v661,
    v733,
    v803,
    v873,
    v943,
    v1013,
    v1083,
    v1152,
    v1221,
    v1291,
    v1361,
    v1430,
    v1446.m128i_i64[0]);
  *((_QWORD *)&v1690 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1516,
    v569,
    2,
    v329,
    v330,
    v331,
    v476,
    v569,
    v662,
    v734,
    v804,
    v874,
    v944,
    v1014,
    v1084,
    v1153,
    v1222,
    v1292,
    v1362,
    v1431,
    v1446.m128i_i64[0]);
  *((_QWORD *)&v1694 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1518,
    v945,
    2,
    v332,
    v333,
    v334,
    v477,
    v570,
    v663,
    v735,
    v805,
    v875,
    v945,
    v1015,
    v1085,
    v1154,
    v1223,
    v1293,
    v1363,
    v1432,
    v1446.m128i_i64[0]);
  v1718 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1458,
    (__int64)&v1713,
    3,
    v335,
    v336,
    v337,
    v478,
    v571,
    v664,
    v736,
    v806,
    v876,
    v946,
    v1016,
    v1086,
    v1155,
    v1224,
    v1294,
    v1364,
    v1433,
    v1446.m128i_i64[0]);
  v1700 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1463,
    v807,
    2,
    v338,
    v339,
    v340,
    v479,
    v572,
    v665,
    v737,
    v807,
    v877,
    v947,
    v1017,
    v1087,
    v1156,
    v1225,
    v1295,
    v1365,
    v1434,
    v1446.m128i_i64[0]);
  v1724 = 0;
  v1701[0] = 0;
  *(_QWORD *)&v1702 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1701[0] = 3;
  v341 = operator new(0x20u);
  *(_QWORD *)v341 = v341 + 16;
  strcpy((char *)(v341 + 16), "required");
  *(_QWORD *)(v341 + 8) = 8;
  v1702 = (unsigned __int64)v341;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1705);
  v1707 = 0;
  v1708 = 0;
  *(_QWORD *)&v1709 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1708 = 3;
  v342 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v342, "table_address", v343, v344, v345, v346, v480, v573, v666);
  v1709 = (unsigned __int64)v342;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  *((_QWORD *)&v1711 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v347 = _mm_load_si128(&v1523);
  v1704 = 0;
  v1703 = v347;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1459,
    v1018,
    2,
    v348,
    v349,
    v350,
    v481,
    v574,
    v667,
    v738,
    v808,
    v878,
    v948,
    v1018,
    v1088,
    v1157,
    v1226,
    v1296,
    v1366,
    v1435,
    v1446.m128i_i64[0]);
  v1726 = 0;
  LOBYTE(v1524) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1456,
    (__int64)&v1720,
    3,
    v351,
    v352,
    v353,
    v482,
    v575,
    v668,
    v739,
    v809,
    v879,
    v949,
    v1019,
    v1089,
    v1158,
    v1227,
    v1297,
    v1367,
    v1436,
    v1446.m128i_i64[0]);
  LOBYTE(v299) = v1736;
  v354 = (__m128i **)v1727;
  LOBYTE(v1736) = v1524;
  v355 = v1737[0];
  LOBYTE(v1524) = (_BYTE)v299;
  v1737[0] = v1525;
  v1525 = v355;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v354 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v354 != &v1720 );
  v356 = (__int64 *)&v1712;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v356 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v356 != &v1705 );
  v357 = (__int64 *)&v1719;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v357 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v357 != &v1713 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v358 = _mm_load_si128(&v1446);
  v1721 = 0;
  v1720 = (__m128i *)ida_mcp::tools::jumptables::`anonymous namespace'::set_jumptable_info_impl;
  v1722 = v358;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1722.m128i_i64[0] )
    ((void (__fastcall *)(__m128i **, __m128i **, __int64))v1722.m128i_i64[0])(&v1720, &v1720, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1730);
  v1730 = (__int64 (__fastcall *)(__int64, char *))&v1732;
  v1731 = 0;
  v1732.m128i_i8[0] = 0;
  v1733 = v1460;
  v1734 = 0;
  LOBYTE(v1735[0]) = 0;
  LOBYTE(v1736) = 0;
  v1737[0] = 0;
  LOBYTE(v1738[0]) = 0;
  v1741 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v669);
  v1683 = 0;
  v1684 = 0;
  *(_QWORD *)&v1685 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1684 = 3;
  v359 = operator new(0x20u);
  *(_QWORD *)v359 = v359 + 16;
  strcpy((char *)(v359 + 16), "object");
  *(_QWORD *)(v359 + 8) = 6;
  v1685 = (unsigned __int64)v359;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1720,
    (__int64)v669,
    2,
    v360,
    v361,
    v362,
    v483,
    v576,
    (int)v669,
    v740,
    v810,
    v880,
    v950,
    v1020,
    v1090,
    v1159,
    v1228,
    v1298,
    v1368,
    v1437,
    v1446.m128i_i64[0]);
  v1722.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  v1707 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1021);
  *((_QWORD *)&v1702 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v577);
  v1688 = 0;
  LOBYTE(v1689) = 0;
  *(_QWORD *)&v1690 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1689) = 3;
  v363 = operator new(0x20u);
  *(_QWORD *)v363 = v363 + 16;
  strcpy((char *)(v363 + 16), "string");
  *(_QWORD *)(v363 + 8) = 6;
  v1690 = (unsigned __int64)v363;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v811,
    (__int64)v577,
    2,
    v364,
    v365,
    26478,
    v484,
    (__int64)v577,
    v670,
    v741,
    (int)v811,
    v881,
    v951,
    (int)v1021,
    v1091,
    v1160,
    v1229,
    v1299,
    v1369,
    v1438,
    v1446.m128i_i64[0]);
  v1697 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v952);
  *((_QWORD *)&v1692 + 1) = 0;
  LOBYTE(v1693) = 0;
  *(_QWORD *)&v1694 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1693) = 3;
  v366 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v366, "Hex address", v367, v368, v369, v370, v485, v578, v671);
  v1694 = (unsigned __int64)v366;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1458,
    (__int64)v952,
    2,
    v371,
    v372,
    v373,
    v486,
    v579,
    v672,
    v742,
    v812,
    v882,
    (__int64)v952,
    v1022,
    v1092,
    v1161,
    v1230,
    v1300,
    v1370,
    v1439,
    v1446.m128i_i64[0]);
  v1700 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1475,
    v813,
    2,
    v374,
    v375,
    v376,
    v487,
    v580,
    v673,
    v743,
    v813,
    v883,
    v953,
    v1023,
    v1093,
    v1162,
    v1231,
    v1301,
    v1371,
    v1440,
    v1446.m128i_i64[0]);
  v1704 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v884,
    v1024,
    2,
    v377,
    v378,
    v379,
    v488,
    v581,
    v674,
    v744,
    v814,
    (int)v884,
    v954,
    v1024,
    v1094,
    v1163,
    v1232,
    v1302,
    v1372,
    v1441,
    v1446.m128i_i64[0]);
  v1677 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1462,
    v885,
    1,
    v380,
    v381,
    v382,
    v489,
    v582,
    v675,
    v745,
    v815,
    v885,
    v955,
    v1025,
    v1095,
    v1164,
    v1233,
    v1303,
    v1373,
    v1442,
    v1446.m128i_i64[0]);
  *((_QWORD *)&v1709 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1463,
    (__int64)&v1705,
    2,
    v383,
    v384,
    v385,
    v490,
    v583,
    v676,
    v746,
    v816,
    v886,
    v956,
    v1026,
    v1096,
    v1165,
    v1234,
    v1304,
    v1374,
    v1443,
    v1446.m128i_i64[0]);
  v1724 = 0;
  LOBYTE(v1713) = 0;
  *(_QWORD *)&v1714 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1713) = 3;
  v386 = operator new(0x20u);
  *(_QWORD *)v386 = v386 + 16;
  strcpy((char *)(v386 + 16), "required");
  *(_QWORD *)(v386 + 8) = 8;
  v1714 = (unsigned __int64)v386;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1097);
  *((_QWORD *)&v1671 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v387 = _mm_load_si128(&v1523);
  v1716 = 0;
  v1715 = v387;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1459,
    (__int64)&v1713,
    2,
    v388,
    v389,
    v390,
    v491,
    v584,
    v677,
    v747,
    v817,
    v887,
    v957,
    v1027,
    (int)v1097,
    v1166,
    v1235,
    v1305,
    v1375,
    v1444,
    v1446.m128i_i64[0]);
  v1726 = 0;
  LOBYTE(v1524) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1456,
    (__int64)&v1720,
    3,
    v391,
    v392,
    v393,
    v492,
    v585,
    v678,
    v748,
    v818,
    v888,
    v958,
    v1028,
    v1098,
    v1167,
    v1236,
    v1306,
    v1376,
    v1445,
    v1446.m128i_i64[0]);
  v394 = v1736;
  v395 = (__m128i **)v1727;
  LOBYTE(v1736) = v1524;
  v396 = v1737[0];
  LOBYTE(v1524) = v394;
  v1737[0] = v1525;
  v1525 = v396;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v395 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v395 != &v1720 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v397 = _mm_load_si128(&v1446);
  v1721 = 0;
  v1720 = (__m128i *)ida_mcp::tools::jumptables::`anonymous namespace'::del_jumptable_info_impl;
  v1722 = v397;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1722.m128i_i64[0] )
    ((void (__fastcall *)(__m128i **, __m128i **, __int64))v1722.m128i_i64[0])(&v1720, &v1720, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1730);
  return v1747 - __readfsqword(0x28u);
}

