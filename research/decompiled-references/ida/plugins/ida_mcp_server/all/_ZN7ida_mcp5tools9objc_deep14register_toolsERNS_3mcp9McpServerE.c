unsigned __int64 __fastcall ida_mcp::tools::objc_deep::register_tools(
        ida_mcp::tools::objc_deep *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
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
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
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
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 *v47; // r13
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 *v52; // r13
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __m128i v57; // xmm0
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  char v64; // si
  void **v65; // r13
  __int64 v66; // rdx
  __m128i si128; // xmm2
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 *v72; // r13
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 *v77; // r13
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // rax
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
  __int64 v102; // rax
  __int64 *v103; // r13
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 *v108; // r13
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  __int64 *v117; // r13
  __int64 v118; // rdx
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
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rax
  __int64 *v138; // r13
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __m128i v143; // xmm0
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  char v150; // si
  void **v151; // r13
  __int64 v152; // rax
  __m128i v153; // xmm3
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rsi
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 *v160; // r13
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rsi
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rax
  __int64 *v173; // r13
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 *v187; // r13
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // rax
  __int64 *v193; // r13
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 v201; // rax
  __int64 *v202; // r13
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // r9
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 v210; // rcx
  __int64 v211; // r8
  __int64 v212; // r9
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 v219; // rcx
  __int64 v220; // r8
  __int64 v221; // r9
  __int64 v222; // rcx
  __int64 v223; // r8
  __int64 v224; // r9
  __int64 v225; // rax
  __m128i v226; // xmm4
  __int64 v227; // rax
  __int64 v228; // rax
  __int64 v229; // rsi
  __int64 v230; // rcx
  __int64 v231; // r8
  __int64 v232; // r9
  __int64 *v233; // r13
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 *v238; // r13
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // r8
  __int64 v242; // r9
  __int64 v243; // rax
  __int64 v244; // rax
  __int64 v245; // rsi
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 *v248; // r13
  __int64 v249; // rdx
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
  __int64 v267; // rcx
  __int64 v268; // r8
  __int64 v269; // r9
  __int64 v270; // rcx
  __int64 v271; // r8
  __int64 v272; // r9
  __int64 *v273; // r13
  __int64 v274; // rdx
  __int64 v275; // rcx
  __int64 v276; // r8
  __int64 v277; // r9
  __int64 *v278; // r13
  __int64 v279; // rdx
  __int64 v280; // rcx
  __int64 v281; // r8
  __int64 v282; // r9
  __m128i v283; // xmm0
  __int64 v284; // rcx
  __int64 v285; // r8
  __int64 v286; // r9
  __int64 v287; // rcx
  __int64 v288; // r8
  __int64 v289; // r9
  void **v290; // r13
  __int64 v291; // rax
  __m128i v292; // xmm5
  int v294; // [rsp+0h] [rbp-538h]
  int v295; // [rsp+0h] [rbp-538h]
  int v296; // [rsp+0h] [rbp-538h]
  int v297; // [rsp+0h] [rbp-538h]
  int v298; // [rsp+0h] [rbp-538h]
  int v299; // [rsp+0h] [rbp-538h]
  int v300; // [rsp+0h] [rbp-538h]
  int v301; // [rsp+0h] [rbp-538h]
  int v302; // [rsp+0h] [rbp-538h]
  int v303; // [rsp+0h] [rbp-538h]
  int v304; // [rsp+0h] [rbp-538h]
  int v305; // [rsp+0h] [rbp-538h]
  int v306; // [rsp+0h] [rbp-538h]
  int v307; // [rsp+0h] [rbp-538h]
  int v308; // [rsp+0h] [rbp-538h]
  int v309; // [rsp+0h] [rbp-538h]
  int v310; // [rsp+0h] [rbp-538h]
  int v311; // [rsp+0h] [rbp-538h]
  int v312; // [rsp+0h] [rbp-538h]
  int v313; // [rsp+0h] [rbp-538h]
  int v314; // [rsp+0h] [rbp-538h]
  int v315; // [rsp+0h] [rbp-538h]
  int v316; // [rsp+0h] [rbp-538h]
  int v317; // [rsp+0h] [rbp-538h]
  int v318; // [rsp+0h] [rbp-538h]
  int v319; // [rsp+0h] [rbp-538h]
  int v320; // [rsp+0h] [rbp-538h]
  int v321; // [rsp+0h] [rbp-538h]
  int v322; // [rsp+0h] [rbp-538h]
  int v323; // [rsp+0h] [rbp-538h]
  int v324; // [rsp+0h] [rbp-538h]
  int v325; // [rsp+0h] [rbp-538h]
  int v326; // [rsp+0h] [rbp-538h]
  int v327; // [rsp+0h] [rbp-538h]
  int v328; // [rsp+0h] [rbp-538h]
  int v329; // [rsp+0h] [rbp-538h]
  int v330; // [rsp+0h] [rbp-538h]
  int v331; // [rsp+0h] [rbp-538h]
  int v332; // [rsp+0h] [rbp-538h]
  int v333; // [rsp+0h] [rbp-538h]
  int v334; // [rsp+0h] [rbp-538h]
  int v335; // [rsp+0h] [rbp-538h]
  int v336; // [rsp+0h] [rbp-538h]
  int v337; // [rsp+0h] [rbp-538h]
  int v338; // [rsp+0h] [rbp-538h]
  int v339; // [rsp+0h] [rbp-538h]
  int v340; // [rsp+0h] [rbp-538h]
  int v341; // [rsp+0h] [rbp-538h]
  int v342; // [rsp+0h] [rbp-538h]
  int v343; // [rsp+0h] [rbp-538h]
  int v344; // [rsp+0h] [rbp-538h]
  int v345; // [rsp+0h] [rbp-538h]
  int v346; // [rsp+0h] [rbp-538h]
  int v347; // [rsp+0h] [rbp-538h]
  int v348; // [rsp+0h] [rbp-538h]
  int v349; // [rsp+0h] [rbp-538h]
  int v350; // [rsp+0h] [rbp-538h]
  int v351; // [rsp+0h] [rbp-538h]
  int v352; // [rsp+0h] [rbp-538h]
  int v353; // [rsp+0h] [rbp-538h]
  int v354; // [rsp+0h] [rbp-538h]
  int v355; // [rsp+0h] [rbp-538h]
  int v356; // [rsp+0h] [rbp-538h]
  int v357; // [rsp+0h] [rbp-538h]
  int v358; // [rsp+0h] [rbp-538h]
  int v359; // [rsp+0h] [rbp-538h]
  __int64 v360; // [rsp+8h] [rbp-530h]
  int v361; // [rsp+8h] [rbp-530h]
  int v362; // [rsp+8h] [rbp-530h]
  int v363; // [rsp+8h] [rbp-530h]
  int v364; // [rsp+8h] [rbp-530h]
  __int64 v365; // [rsp+8h] [rbp-530h]
  __int64 v366; // [rsp+8h] [rbp-530h]
  __int64 v367; // [rsp+8h] [rbp-530h]
  __int64 v368; // [rsp+8h] [rbp-530h]
  __int64 v369; // [rsp+8h] [rbp-530h]
  int v370; // [rsp+8h] [rbp-530h]
  int v371; // [rsp+8h] [rbp-530h]
  __int64 v372; // [rsp+8h] [rbp-530h]
  __int64 v373; // [rsp+8h] [rbp-530h]
  __int64 v374; // [rsp+8h] [rbp-530h]
  int v375; // [rsp+8h] [rbp-530h]
  int v376; // [rsp+8h] [rbp-530h]
  __int64 v377; // [rsp+8h] [rbp-530h]
  int v378; // [rsp+8h] [rbp-530h]
  __int64 v379; // [rsp+8h] [rbp-530h]
  __int64 v380; // [rsp+8h] [rbp-530h]
  __int64 v381; // [rsp+8h] [rbp-530h]
  int v382; // [rsp+8h] [rbp-530h]
  int v383; // [rsp+8h] [rbp-530h]
  __int64 v384; // [rsp+8h] [rbp-530h]
  int v385; // [rsp+8h] [rbp-530h]
  __int64 v386; // [rsp+8h] [rbp-530h]
  __int64 v387; // [rsp+8h] [rbp-530h]
  __int64 v388; // [rsp+8h] [rbp-530h]
  __int64 v389; // [rsp+8h] [rbp-530h]
  __int64 v390; // [rsp+8h] [rbp-530h]
  int v391; // [rsp+8h] [rbp-530h]
  __int64 v392; // [rsp+8h] [rbp-530h]
  __int64 v393; // [rsp+8h] [rbp-530h]
  __int64 v394; // [rsp+8h] [rbp-530h]
  int v395; // [rsp+8h] [rbp-530h]
  __int64 v396; // [rsp+8h] [rbp-530h]
  int v397; // [rsp+8h] [rbp-530h]
  __int64 v398; // [rsp+8h] [rbp-530h]
  __int64 v399; // [rsp+8h] [rbp-530h]
  __int64 v400; // [rsp+8h] [rbp-530h]
  int v401; // [rsp+8h] [rbp-530h]
  int v402; // [rsp+8h] [rbp-530h]
  __int64 v403; // [rsp+8h] [rbp-530h]
  int v404; // [rsp+8h] [rbp-530h]
  __int64 v405; // [rsp+8h] [rbp-530h]
  __int64 v406; // [rsp+8h] [rbp-530h]
  __int64 v407; // [rsp+8h] [rbp-530h]
  __int64 v408; // [rsp+8h] [rbp-530h]
  __int64 v409; // [rsp+8h] [rbp-530h]
  __int64 v410; // [rsp+8h] [rbp-530h]
  __int64 v411; // [rsp+8h] [rbp-530h]
  int v412; // [rsp+8h] [rbp-530h]
  int v413; // [rsp+8h] [rbp-530h]
  __int64 v414; // [rsp+8h] [rbp-530h]
  int v415; // [rsp+8h] [rbp-530h]
  int v416; // [rsp+8h] [rbp-530h]
  __int64 v417; // [rsp+8h] [rbp-530h]
  __int64 v418; // [rsp+8h] [rbp-530h]
  __int64 v419; // [rsp+8h] [rbp-530h]
  __int64 v420; // [rsp+8h] [rbp-530h]
  __int64 v421; // [rsp+8h] [rbp-530h]
  int v422; // [rsp+8h] [rbp-530h]
  int v423; // [rsp+8h] [rbp-530h]
  __int64 v424; // [rsp+8h] [rbp-530h]
  __int64 v425; // [rsp+8h] [rbp-530h]
  int v426; // [rsp+10h] [rbp-528h]
  __int64 v427; // [rsp+10h] [rbp-528h]
  __int64 v428; // [rsp+10h] [rbp-528h]
  int v429; // [rsp+10h] [rbp-528h]
  __int64 v430; // [rsp+10h] [rbp-528h]
  __int64 v431; // [rsp+10h] [rbp-528h]
  int v432; // [rsp+10h] [rbp-528h]
  int v433; // [rsp+10h] [rbp-528h]
  int v434; // [rsp+10h] [rbp-528h]
  int v435; // [rsp+10h] [rbp-528h]
  int v436; // [rsp+10h] [rbp-528h]
  __int64 v437; // [rsp+10h] [rbp-528h]
  int v438; // [rsp+10h] [rbp-528h]
  int v439; // [rsp+10h] [rbp-528h]
  int v440; // [rsp+10h] [rbp-528h]
  __int64 v441; // [rsp+10h] [rbp-528h]
  __int64 v442; // [rsp+10h] [rbp-528h]
  int v443; // [rsp+10h] [rbp-528h]
  __int64 v444; // [rsp+10h] [rbp-528h]
  int v445; // [rsp+10h] [rbp-528h]
  int v446; // [rsp+10h] [rbp-528h]
  int v447; // [rsp+10h] [rbp-528h]
  __int64 v448; // [rsp+10h] [rbp-528h]
  __int64 v449; // [rsp+10h] [rbp-528h]
  int v450; // [rsp+10h] [rbp-528h]
  __int64 v451; // [rsp+10h] [rbp-528h]
  int v452; // [rsp+10h] [rbp-528h]
  int v453; // [rsp+10h] [rbp-528h]
  int v454; // [rsp+10h] [rbp-528h]
  int v455; // [rsp+10h] [rbp-528h]
  int v456; // [rsp+10h] [rbp-528h]
  __int64 v457; // [rsp+10h] [rbp-528h]
  int v458; // [rsp+10h] [rbp-528h]
  int v459; // [rsp+10h] [rbp-528h]
  int v460; // [rsp+10h] [rbp-528h]
  __int64 v461; // [rsp+10h] [rbp-528h]
  int v462; // [rsp+10h] [rbp-528h]
  __int64 v463; // [rsp+10h] [rbp-528h]
  int v464; // [rsp+10h] [rbp-528h]
  int v465; // [rsp+10h] [rbp-528h]
  int v466; // [rsp+10h] [rbp-528h]
  __int64 v467; // [rsp+10h] [rbp-528h]
  __int64 v468; // [rsp+10h] [rbp-528h]
  int v469; // [rsp+10h] [rbp-528h]
  __int64 v470; // [rsp+10h] [rbp-528h]
  int v471; // [rsp+10h] [rbp-528h]
  int v472; // [rsp+10h] [rbp-528h]
  int v473; // [rsp+10h] [rbp-528h]
  int v474; // [rsp+10h] [rbp-528h]
  int v475; // [rsp+10h] [rbp-528h]
  int v476; // [rsp+10h] [rbp-528h]
  int v477; // [rsp+10h] [rbp-528h]
  __int64 v478; // [rsp+10h] [rbp-528h]
  __int64 v479; // [rsp+10h] [rbp-528h]
  int v480; // [rsp+10h] [rbp-528h]
  __int64 v481; // [rsp+10h] [rbp-528h]
  __int64 v482; // [rsp+10h] [rbp-528h]
  int v483; // [rsp+10h] [rbp-528h]
  int v484; // [rsp+10h] [rbp-528h]
  int v485; // [rsp+10h] [rbp-528h]
  int v486; // [rsp+10h] [rbp-528h]
  int v487; // [rsp+10h] [rbp-528h]
  __int64 v488; // [rsp+10h] [rbp-528h]
  __int64 v489; // [rsp+10h] [rbp-528h]
  int v490; // [rsp+10h] [rbp-528h]
  int v491; // [rsp+10h] [rbp-528h]
  int v492; // [rsp+18h] [rbp-520h]
  int v493; // [rsp+18h] [rbp-520h]
  int v494; // [rsp+18h] [rbp-520h]
  int v495; // [rsp+18h] [rbp-520h]
  int v496; // [rsp+18h] [rbp-520h]
  int v497; // [rsp+18h] [rbp-520h]
  int v498; // [rsp+18h] [rbp-520h]
  int v499; // [rsp+18h] [rbp-520h]
  int v500; // [rsp+18h] [rbp-520h]
  int v501; // [rsp+18h] [rbp-520h]
  int v502; // [rsp+18h] [rbp-520h]
  int v503; // [rsp+18h] [rbp-520h]
  int v504; // [rsp+18h] [rbp-520h]
  int v505; // [rsp+18h] [rbp-520h]
  int v506; // [rsp+18h] [rbp-520h]
  int v507; // [rsp+18h] [rbp-520h]
  int v508; // [rsp+18h] [rbp-520h]
  int v509; // [rsp+18h] [rbp-520h]
  int v510; // [rsp+18h] [rbp-520h]
  int v511; // [rsp+18h] [rbp-520h]
  int v512; // [rsp+18h] [rbp-520h]
  int v513; // [rsp+18h] [rbp-520h]
  int v514; // [rsp+18h] [rbp-520h]
  int v515; // [rsp+18h] [rbp-520h]
  int v516; // [rsp+18h] [rbp-520h]
  int v517; // [rsp+18h] [rbp-520h]
  int v518; // [rsp+18h] [rbp-520h]
  int v519; // [rsp+18h] [rbp-520h]
  int v520; // [rsp+18h] [rbp-520h]
  int v521; // [rsp+18h] [rbp-520h]
  int v522; // [rsp+18h] [rbp-520h]
  int v523; // [rsp+18h] [rbp-520h]
  int v524; // [rsp+18h] [rbp-520h]
  int v525; // [rsp+18h] [rbp-520h]
  int v526; // [rsp+18h] [rbp-520h]
  int v527; // [rsp+18h] [rbp-520h]
  int v528; // [rsp+18h] [rbp-520h]
  int v529; // [rsp+18h] [rbp-520h]
  int v530; // [rsp+18h] [rbp-520h]
  int v531; // [rsp+18h] [rbp-520h]
  int v532; // [rsp+18h] [rbp-520h]
  int v533; // [rsp+18h] [rbp-520h]
  int v534; // [rsp+20h] [rbp-518h]
  int v535; // [rsp+20h] [rbp-518h]
  int v536; // [rsp+20h] [rbp-518h]
  int v537; // [rsp+20h] [rbp-518h]
  int v538; // [rsp+20h] [rbp-518h]
  int v539; // [rsp+20h] [rbp-518h]
  int v540; // [rsp+20h] [rbp-518h]
  int v541; // [rsp+20h] [rbp-518h]
  int v542; // [rsp+20h] [rbp-518h]
  int v543; // [rsp+20h] [rbp-518h]
  int v544; // [rsp+20h] [rbp-518h]
  int v545; // [rsp+20h] [rbp-518h]
  int v546; // [rsp+20h] [rbp-518h]
  int v547; // [rsp+20h] [rbp-518h]
  int v548; // [rsp+20h] [rbp-518h]
  int v549; // [rsp+20h] [rbp-518h]
  int v550; // [rsp+20h] [rbp-518h]
  int v551; // [rsp+20h] [rbp-518h]
  int v552; // [rsp+20h] [rbp-518h]
  int v553; // [rsp+20h] [rbp-518h]
  int v554; // [rsp+20h] [rbp-518h]
  int v555; // [rsp+20h] [rbp-518h]
  int v556; // [rsp+20h] [rbp-518h]
  int v557; // [rsp+20h] [rbp-518h]
  int v558; // [rsp+20h] [rbp-518h]
  int v559; // [rsp+20h] [rbp-518h]
  int v560; // [rsp+20h] [rbp-518h]
  int v561; // [rsp+20h] [rbp-518h]
  int v562; // [rsp+20h] [rbp-518h]
  int v563; // [rsp+20h] [rbp-518h]
  int v564; // [rsp+20h] [rbp-518h]
  int v565; // [rsp+20h] [rbp-518h]
  int v566; // [rsp+20h] [rbp-518h]
  int v567; // [rsp+20h] [rbp-518h]
  int v568; // [rsp+20h] [rbp-518h]
  int v569; // [rsp+20h] [rbp-518h]
  int v570; // [rsp+20h] [rbp-518h]
  int v571; // [rsp+20h] [rbp-518h]
  int v572; // [rsp+20h] [rbp-518h]
  int v573; // [rsp+20h] [rbp-518h]
  int v574; // [rsp+20h] [rbp-518h]
  int v575; // [rsp+20h] [rbp-518h]
  int v576; // [rsp+28h] [rbp-510h]
  int v577; // [rsp+28h] [rbp-510h]
  int v578; // [rsp+28h] [rbp-510h]
  int v579; // [rsp+28h] [rbp-510h]
  int v580; // [rsp+28h] [rbp-510h]
  int v581; // [rsp+28h] [rbp-510h]
  int v582; // [rsp+28h] [rbp-510h]
  int v583; // [rsp+28h] [rbp-510h]
  int v584; // [rsp+28h] [rbp-510h]
  int v585; // [rsp+28h] [rbp-510h]
  int v586; // [rsp+28h] [rbp-510h]
  int v587; // [rsp+28h] [rbp-510h]
  int v588; // [rsp+28h] [rbp-510h]
  int v589; // [rsp+28h] [rbp-510h]
  int v590; // [rsp+28h] [rbp-510h]
  int v591; // [rsp+28h] [rbp-510h]
  int v592; // [rsp+28h] [rbp-510h]
  int v593; // [rsp+28h] [rbp-510h]
  int v594; // [rsp+28h] [rbp-510h]
  int v595; // [rsp+28h] [rbp-510h]
  int v596; // [rsp+28h] [rbp-510h]
  int v597; // [rsp+28h] [rbp-510h]
  int v598; // [rsp+28h] [rbp-510h]
  int v599; // [rsp+28h] [rbp-510h]
  int v600; // [rsp+28h] [rbp-510h]
  int v601; // [rsp+28h] [rbp-510h]
  int v602; // [rsp+28h] [rbp-510h]
  int v603; // [rsp+28h] [rbp-510h]
  int v604; // [rsp+28h] [rbp-510h]
  int v605; // [rsp+28h] [rbp-510h]
  int v606; // [rsp+28h] [rbp-510h]
  int v607; // [rsp+28h] [rbp-510h]
  int v608; // [rsp+28h] [rbp-510h]
  int v609; // [rsp+28h] [rbp-510h]
  int v610; // [rsp+28h] [rbp-510h]
  int v611; // [rsp+28h] [rbp-510h]
  int v612; // [rsp+28h] [rbp-510h]
  int v613; // [rsp+28h] [rbp-510h]
  int v614; // [rsp+28h] [rbp-510h]
  int v615; // [rsp+28h] [rbp-510h]
  int v616; // [rsp+28h] [rbp-510h]
  int v617; // [rsp+28h] [rbp-510h]
  __int64 v618; // [rsp+30h] [rbp-508h]
  __int64 v619; // [rsp+30h] [rbp-508h]
  __int64 v620; // [rsp+30h] [rbp-508h]
  __int64 v621; // [rsp+30h] [rbp-508h]
  __int64 v622; // [rsp+30h] [rbp-508h]
  __int64 v623; // [rsp+30h] [rbp-508h]
  __int64 v624; // [rsp+30h] [rbp-508h]
  __int64 v625; // [rsp+30h] [rbp-508h]
  __int64 v626; // [rsp+30h] [rbp-508h]
  __int64 v627; // [rsp+30h] [rbp-508h]
  __int64 v628; // [rsp+30h] [rbp-508h]
  __int64 v629; // [rsp+30h] [rbp-508h]
  __int64 v630; // [rsp+30h] [rbp-508h]
  __int64 v631; // [rsp+30h] [rbp-508h]
  __int64 v632; // [rsp+30h] [rbp-508h]
  __int64 v633; // [rsp+30h] [rbp-508h]
  __int64 v634; // [rsp+30h] [rbp-508h]
  __int64 v635; // [rsp+30h] [rbp-508h]
  __int64 v636; // [rsp+30h] [rbp-508h]
  __int64 v637; // [rsp+30h] [rbp-508h]
  __int64 v638; // [rsp+30h] [rbp-508h]
  __int64 v639; // [rsp+30h] [rbp-508h]
  __int64 v640; // [rsp+30h] [rbp-508h]
  __int64 v641; // [rsp+30h] [rbp-508h]
  __int64 v642; // [rsp+30h] [rbp-508h]
  __int64 v643; // [rsp+30h] [rbp-508h]
  __int64 v644; // [rsp+30h] [rbp-508h]
  __int64 v645; // [rsp+30h] [rbp-508h]
  __int64 v646; // [rsp+30h] [rbp-508h]
  __int64 v647; // [rsp+30h] [rbp-508h]
  __int64 v648; // [rsp+30h] [rbp-508h]
  __int64 v649; // [rsp+30h] [rbp-508h]
  __int64 v650; // [rsp+30h] [rbp-508h]
  __int64 v651; // [rsp+30h] [rbp-508h]
  __int64 v652; // [rsp+30h] [rbp-508h]
  __int64 v653; // [rsp+30h] [rbp-508h]
  __int64 v654; // [rsp+30h] [rbp-508h]
  __int64 v655; // [rsp+30h] [rbp-508h]
  __int64 v656; // [rsp+30h] [rbp-508h]
  __int64 v657; // [rsp+30h] [rbp-508h]
  __int64 v658; // [rsp+30h] [rbp-508h]
  __int64 v659; // [rsp+30h] [rbp-508h]
  int v660; // [rsp+38h] [rbp-500h]
  int v661; // [rsp+38h] [rbp-500h]
  int v662; // [rsp+38h] [rbp-500h]
  int v663; // [rsp+38h] [rbp-500h]
  int v664; // [rsp+38h] [rbp-500h]
  int v665; // [rsp+38h] [rbp-500h]
  int v666; // [rsp+38h] [rbp-500h]
  int v667; // [rsp+38h] [rbp-500h]
  int v668; // [rsp+38h] [rbp-500h]
  int v669; // [rsp+38h] [rbp-500h]
  int v670; // [rsp+38h] [rbp-500h]
  int v671; // [rsp+38h] [rbp-500h]
  int v672; // [rsp+38h] [rbp-500h]
  int v673; // [rsp+38h] [rbp-500h]
  int v674; // [rsp+38h] [rbp-500h]
  int v675; // [rsp+38h] [rbp-500h]
  int v676; // [rsp+38h] [rbp-500h]
  int v677; // [rsp+38h] [rbp-500h]
  int v678; // [rsp+38h] [rbp-500h]
  int v679; // [rsp+38h] [rbp-500h]
  int v680; // [rsp+38h] [rbp-500h]
  int v681; // [rsp+38h] [rbp-500h]
  int v682; // [rsp+38h] [rbp-500h]
  int v683; // [rsp+38h] [rbp-500h]
  int v684; // [rsp+38h] [rbp-500h]
  int v685; // [rsp+38h] [rbp-500h]
  int v686; // [rsp+38h] [rbp-500h]
  int v687; // [rsp+38h] [rbp-500h]
  int v688; // [rsp+38h] [rbp-500h]
  int v689; // [rsp+38h] [rbp-500h]
  int v690; // [rsp+38h] [rbp-500h]
  int v691; // [rsp+38h] [rbp-500h]
  int v692; // [rsp+38h] [rbp-500h]
  int v693; // [rsp+38h] [rbp-500h]
  int v694; // [rsp+38h] [rbp-500h]
  int v695; // [rsp+38h] [rbp-500h]
  int v696; // [rsp+38h] [rbp-500h]
  int v697; // [rsp+38h] [rbp-500h]
  int v698; // [rsp+38h] [rbp-500h]
  int v699; // [rsp+38h] [rbp-500h]
  int v700; // [rsp+38h] [rbp-500h]
  int v701; // [rsp+38h] [rbp-500h]
  int v702; // [rsp+40h] [rbp-4F8h]
  int v703; // [rsp+40h] [rbp-4F8h]
  int v704; // [rsp+40h] [rbp-4F8h]
  int v705; // [rsp+40h] [rbp-4F8h]
  int v706; // [rsp+40h] [rbp-4F8h]
  int v707; // [rsp+40h] [rbp-4F8h]
  int v708; // [rsp+40h] [rbp-4F8h]
  int v709; // [rsp+40h] [rbp-4F8h]
  int v710; // [rsp+40h] [rbp-4F8h]
  int v711; // [rsp+40h] [rbp-4F8h]
  int v712; // [rsp+40h] [rbp-4F8h]
  int v713; // [rsp+40h] [rbp-4F8h]
  int v714; // [rsp+40h] [rbp-4F8h]
  int v715; // [rsp+40h] [rbp-4F8h]
  int v716; // [rsp+40h] [rbp-4F8h]
  int v717; // [rsp+40h] [rbp-4F8h]
  int v718; // [rsp+40h] [rbp-4F8h]
  int v719; // [rsp+40h] [rbp-4F8h]
  int v720; // [rsp+40h] [rbp-4F8h]
  int v721; // [rsp+40h] [rbp-4F8h]
  int v722; // [rsp+40h] [rbp-4F8h]
  int v723; // [rsp+40h] [rbp-4F8h]
  int v724; // [rsp+40h] [rbp-4F8h]
  int v725; // [rsp+40h] [rbp-4F8h]
  int v726; // [rsp+40h] [rbp-4F8h]
  int v727; // [rsp+40h] [rbp-4F8h]
  int v728; // [rsp+40h] [rbp-4F8h]
  int v729; // [rsp+40h] [rbp-4F8h]
  int v730; // [rsp+40h] [rbp-4F8h]
  int v731; // [rsp+40h] [rbp-4F8h]
  int v732; // [rsp+40h] [rbp-4F8h]
  int v733; // [rsp+40h] [rbp-4F8h]
  int v734; // [rsp+40h] [rbp-4F8h]
  int v735; // [rsp+40h] [rbp-4F8h]
  int v736; // [rsp+40h] [rbp-4F8h]
  int v737; // [rsp+40h] [rbp-4F8h]
  int v738; // [rsp+40h] [rbp-4F8h]
  int v739; // [rsp+40h] [rbp-4F8h]
  int v740; // [rsp+40h] [rbp-4F8h]
  int v741; // [rsp+40h] [rbp-4F8h]
  int v742; // [rsp+40h] [rbp-4F8h]
  int v743; // [rsp+40h] [rbp-4F8h]
  int v744; // [rsp+48h] [rbp-4F0h]
  int v745; // [rsp+48h] [rbp-4F0h]
  int v746; // [rsp+48h] [rbp-4F0h]
  int v747; // [rsp+48h] [rbp-4F0h]
  int v748; // [rsp+48h] [rbp-4F0h]
  int v749; // [rsp+48h] [rbp-4F0h]
  int v750; // [rsp+48h] [rbp-4F0h]
  int v751; // [rsp+48h] [rbp-4F0h]
  int v752; // [rsp+48h] [rbp-4F0h]
  int v753; // [rsp+48h] [rbp-4F0h]
  int v754; // [rsp+48h] [rbp-4F0h]
  int v755; // [rsp+48h] [rbp-4F0h]
  int v756; // [rsp+48h] [rbp-4F0h]
  int v757; // [rsp+48h] [rbp-4F0h]
  int v758; // [rsp+48h] [rbp-4F0h]
  int v759; // [rsp+48h] [rbp-4F0h]
  int v760; // [rsp+48h] [rbp-4F0h]
  int v761; // [rsp+48h] [rbp-4F0h]
  int v762; // [rsp+48h] [rbp-4F0h]
  int v763; // [rsp+48h] [rbp-4F0h]
  int v764; // [rsp+48h] [rbp-4F0h]
  int v765; // [rsp+48h] [rbp-4F0h]
  int v766; // [rsp+48h] [rbp-4F0h]
  int v767; // [rsp+48h] [rbp-4F0h]
  int v768; // [rsp+48h] [rbp-4F0h]
  int v769; // [rsp+48h] [rbp-4F0h]
  int v770; // [rsp+48h] [rbp-4F0h]
  int v771; // [rsp+48h] [rbp-4F0h]
  int v772; // [rsp+48h] [rbp-4F0h]
  int v773; // [rsp+48h] [rbp-4F0h]
  int v774; // [rsp+48h] [rbp-4F0h]
  int v775; // [rsp+48h] [rbp-4F0h]
  int v776; // [rsp+48h] [rbp-4F0h]
  int v777; // [rsp+48h] [rbp-4F0h]
  int v778; // [rsp+48h] [rbp-4F0h]
  int v779; // [rsp+48h] [rbp-4F0h]
  int v780; // [rsp+48h] [rbp-4F0h]
  int v781; // [rsp+48h] [rbp-4F0h]
  int v782; // [rsp+48h] [rbp-4F0h]
  int v783; // [rsp+48h] [rbp-4F0h]
  int v784; // [rsp+48h] [rbp-4F0h]
  int v785; // [rsp+48h] [rbp-4F0h]
  int v786; // [rsp+50h] [rbp-4E8h]
  int v787; // [rsp+50h] [rbp-4E8h]
  int v788; // [rsp+50h] [rbp-4E8h]
  int v789; // [rsp+50h] [rbp-4E8h]
  __int64 v790; // [rsp+50h] [rbp-4E8h]
  int v791; // [rsp+50h] [rbp-4E8h]
  int v792; // [rsp+50h] [rbp-4E8h]
  int v793; // [rsp+50h] [rbp-4E8h]
  int v794; // [rsp+50h] [rbp-4E8h]
  int v795; // [rsp+50h] [rbp-4E8h]
  int v796; // [rsp+50h] [rbp-4E8h]
  int v797; // [rsp+50h] [rbp-4E8h]
  __int64 v798; // [rsp+50h] [rbp-4E8h]
  int v799; // [rsp+50h] [rbp-4E8h]
  int v800; // [rsp+50h] [rbp-4E8h]
  int v801; // [rsp+50h] [rbp-4E8h]
  int v802; // [rsp+50h] [rbp-4E8h]
  int v803; // [rsp+50h] [rbp-4E8h]
  int v804; // [rsp+50h] [rbp-4E8h]
  int v805; // [rsp+50h] [rbp-4E8h]
  int v806; // [rsp+50h] [rbp-4E8h]
  int v807; // [rsp+50h] [rbp-4E8h]
  _QWORD *v808; // [rsp+50h] [rbp-4E8h]
  int v809; // [rsp+50h] [rbp-4E8h]
  __int64 v810; // [rsp+50h] [rbp-4E8h]
  int v811; // [rsp+50h] [rbp-4E8h]
  int v812; // [rsp+50h] [rbp-4E8h]
  int v813; // [rsp+50h] [rbp-4E8h]
  int v814; // [rsp+50h] [rbp-4E8h]
  int v815; // [rsp+50h] [rbp-4E8h]
  int v816; // [rsp+50h] [rbp-4E8h]
  int v817; // [rsp+50h] [rbp-4E8h]
  int v818; // [rsp+50h] [rbp-4E8h]
  int v819; // [rsp+50h] [rbp-4E8h]
  int v820; // [rsp+50h] [rbp-4E8h]
  int v821; // [rsp+50h] [rbp-4E8h]
  int v822; // [rsp+50h] [rbp-4E8h]
  _QWORD *v823; // [rsp+50h] [rbp-4E8h]
  __int64 v824; // [rsp+50h] [rbp-4E8h]
  int v825; // [rsp+50h] [rbp-4E8h]
  int v826; // [rsp+50h] [rbp-4E8h]
  int v827; // [rsp+50h] [rbp-4E8h]
  char v828; // [rsp+58h] [rbp-4E0h]
  char v829; // [rsp+58h] [rbp-4E0h]
  char v830; // [rsp+58h] [rbp-4E0h]
  char v831; // [rsp+58h] [rbp-4E0h]
  char v832; // [rsp+58h] [rbp-4E0h]
  char v833; // [rsp+58h] [rbp-4E0h]
  char v834; // [rsp+58h] [rbp-4E0h]
  char v835; // [rsp+58h] [rbp-4E0h]
  char v836; // [rsp+58h] [rbp-4E0h]
  char v837; // [rsp+58h] [rbp-4E0h]
  char v838; // [rsp+58h] [rbp-4E0h]
  char v839; // [rsp+58h] [rbp-4E0h]
  char v840; // [rsp+58h] [rbp-4E0h]
  char v841; // [rsp+58h] [rbp-4E0h]
  char v842; // [rsp+58h] [rbp-4E0h]
  char v843; // [rsp+58h] [rbp-4E0h]
  char v844; // [rsp+58h] [rbp-4E0h]
  char v845; // [rsp+58h] [rbp-4E0h]
  __int64 v846; // [rsp+58h] [rbp-4E0h]
  char v847; // [rsp+58h] [rbp-4E0h]
  char v848; // [rsp+58h] [rbp-4E0h]
  char v849; // [rsp+58h] [rbp-4E0h]
  char v850; // [rsp+58h] [rbp-4E0h]
  char v851; // [rsp+58h] [rbp-4E0h]
  char v852; // [rsp+58h] [rbp-4E0h]
  _QWORD *v853; // [rsp+58h] [rbp-4E0h]
  char v854; // [rsp+58h] [rbp-4E0h]
  char v855; // [rsp+58h] [rbp-4E0h]
  char v856; // [rsp+58h] [rbp-4E0h]
  char v857; // [rsp+58h] [rbp-4E0h]
  __int64 v858; // [rsp+58h] [rbp-4E0h]
  char v859; // [rsp+58h] [rbp-4E0h]
  char v860; // [rsp+58h] [rbp-4E0h]
  char v861; // [rsp+58h] [rbp-4E0h]
  char v862; // [rsp+58h] [rbp-4E0h]
  char v863; // [rsp+58h] [rbp-4E0h]
  char v864; // [rsp+58h] [rbp-4E0h]
  char v865; // [rsp+58h] [rbp-4E0h]
  char v866; // [rsp+58h] [rbp-4E0h]
  __int64 v867; // [rsp+58h] [rbp-4E0h]
  char v868; // [rsp+58h] [rbp-4E0h]
  char v869; // [rsp+58h] [rbp-4E0h]
  __int64 v870; // [rsp+60h] [rbp-4D8h]
  __int64 v871; // [rsp+60h] [rbp-4D8h]
  __int64 v872; // [rsp+60h] [rbp-4D8h]
  __int64 v873; // [rsp+60h] [rbp-4D8h]
  __int64 v874; // [rsp+60h] [rbp-4D8h]
  __int64 v875; // [rsp+60h] [rbp-4D8h]
  __int64 v876; // [rsp+60h] [rbp-4D8h]
  __int64 v877; // [rsp+60h] [rbp-4D8h]
  __int64 v878; // [rsp+60h] [rbp-4D8h]
  __int64 v879; // [rsp+60h] [rbp-4D8h]
  __int64 v880; // [rsp+60h] [rbp-4D8h]
  __int64 v881; // [rsp+60h] [rbp-4D8h]
  _QWORD *v882; // [rsp+60h] [rbp-4D8h]
  __int64 v883; // [rsp+60h] [rbp-4D8h]
  __int64 v884; // [rsp+60h] [rbp-4D8h]
  __int64 v885; // [rsp+60h] [rbp-4D8h]
  __int64 v886; // [rsp+60h] [rbp-4D8h]
  __int64 v887; // [rsp+60h] [rbp-4D8h]
  __int64 v888; // [rsp+60h] [rbp-4D8h]
  __int64 v889; // [rsp+60h] [rbp-4D8h]
  __int64 v890; // [rsp+60h] [rbp-4D8h]
  __int64 v891; // [rsp+60h] [rbp-4D8h]
  __int64 v892; // [rsp+60h] [rbp-4D8h]
  __int64 v893; // [rsp+60h] [rbp-4D8h]
  __int64 v894; // [rsp+60h] [rbp-4D8h]
  __int64 v895; // [rsp+60h] [rbp-4D8h]
  __int64 v896; // [rsp+60h] [rbp-4D8h]
  __int64 v897; // [rsp+60h] [rbp-4D8h]
  __int64 v898; // [rsp+60h] [rbp-4D8h]
  __int64 v899; // [rsp+60h] [rbp-4D8h]
  __int64 v900; // [rsp+60h] [rbp-4D8h]
  __int64 v901; // [rsp+60h] [rbp-4D8h]
  __int64 v902; // [rsp+60h] [rbp-4D8h]
  __int64 v903; // [rsp+60h] [rbp-4D8h]
  __int64 v904; // [rsp+60h] [rbp-4D8h]
  __int64 v905; // [rsp+60h] [rbp-4D8h]
  __int64 v906; // [rsp+60h] [rbp-4D8h]
  __int64 v907; // [rsp+60h] [rbp-4D8h]
  __int64 v908; // [rsp+60h] [rbp-4D8h]
  __int64 v909; // [rsp+60h] [rbp-4D8h]
  __int64 v910; // [rsp+60h] [rbp-4D8h]
  __int64 v911; // [rsp+60h] [rbp-4D8h]
  int v912; // [rsp+68h] [rbp-4D0h]
  int v913; // [rsp+68h] [rbp-4D0h]
  int v914; // [rsp+68h] [rbp-4D0h]
  int v915; // [rsp+68h] [rbp-4D0h]
  int v916; // [rsp+68h] [rbp-4D0h]
  int v917; // [rsp+68h] [rbp-4D0h]
  int v918; // [rsp+68h] [rbp-4D0h]
  int v919; // [rsp+68h] [rbp-4D0h]
  int v920; // [rsp+68h] [rbp-4D0h]
  int v921; // [rsp+68h] [rbp-4D0h]
  int v922; // [rsp+68h] [rbp-4D0h]
  int v923; // [rsp+68h] [rbp-4D0h]
  int v924; // [rsp+68h] [rbp-4D0h]
  _QWORD *v925; // [rsp+68h] [rbp-4D0h]
  int v926; // [rsp+68h] [rbp-4D0h]
  __int64 v927; // [rsp+68h] [rbp-4D0h]
  int v928; // [rsp+68h] [rbp-4D0h]
  int v929; // [rsp+68h] [rbp-4D0h]
  int v930; // [rsp+68h] [rbp-4D0h]
  int v931; // [rsp+68h] [rbp-4D0h]
  int v932; // [rsp+68h] [rbp-4D0h]
  int v933; // [rsp+68h] [rbp-4D0h]
  int v934; // [rsp+68h] [rbp-4D0h]
  int v935; // [rsp+68h] [rbp-4D0h]
  int v936; // [rsp+68h] [rbp-4D0h]
  int v937; // [rsp+68h] [rbp-4D0h]
  int v938; // [rsp+68h] [rbp-4D0h]
  __int64 v939; // [rsp+68h] [rbp-4D0h]
  int v940; // [rsp+68h] [rbp-4D0h]
  int v941; // [rsp+68h] [rbp-4D0h]
  int v942; // [rsp+68h] [rbp-4D0h]
  int v943; // [rsp+68h] [rbp-4D0h]
  int v944; // [rsp+68h] [rbp-4D0h]
  int v945; // [rsp+68h] [rbp-4D0h]
  int v946; // [rsp+68h] [rbp-4D0h]
  __int64 v947; // [rsp+68h] [rbp-4D0h]
  int v948; // [rsp+68h] [rbp-4D0h]
  int v949; // [rsp+68h] [rbp-4D0h]
  int v950; // [rsp+68h] [rbp-4D0h]
  int v951; // [rsp+68h] [rbp-4D0h]
  int v952; // [rsp+68h] [rbp-4D0h]
  int v953; // [rsp+68h] [rbp-4D0h]
  __int64 v954; // [rsp+70h] [rbp-4C8h]
  __int64 v955; // [rsp+70h] [rbp-4C8h]
  __int64 v956; // [rsp+70h] [rbp-4C8h]
  __int64 v957; // [rsp+70h] [rbp-4C8h]
  __int64 v958; // [rsp+70h] [rbp-4C8h]
  __int64 v959; // [rsp+70h] [rbp-4C8h]
  __int64 v960; // [rsp+70h] [rbp-4C8h]
  __int64 v961; // [rsp+70h] [rbp-4C8h]
  __int64 v962; // [rsp+70h] [rbp-4C8h]
  _QWORD *v963; // [rsp+70h] [rbp-4C8h]
  __int64 v964; // [rsp+70h] [rbp-4C8h]
  __int64 v965; // [rsp+70h] [rbp-4C8h]
  __int64 v966; // [rsp+70h] [rbp-4C8h]
  __int64 v967; // [rsp+70h] [rbp-4C8h]
  __int64 v968; // [rsp+70h] [rbp-4C8h]
  __int64 v969; // [rsp+70h] [rbp-4C8h]
  __int64 v970; // [rsp+70h] [rbp-4C8h]
  __int64 v971; // [rsp+70h] [rbp-4C8h]
  __int64 v972; // [rsp+70h] [rbp-4C8h]
  __int64 v973; // [rsp+70h] [rbp-4C8h]
  __int64 v974; // [rsp+70h] [rbp-4C8h]
  __int64 v975; // [rsp+70h] [rbp-4C8h]
  __int64 v976; // [rsp+70h] [rbp-4C8h]
  __int64 v977; // [rsp+70h] [rbp-4C8h]
  __int64 v978; // [rsp+70h] [rbp-4C8h]
  __int64 v979; // [rsp+70h] [rbp-4C8h]
  __int64 v980; // [rsp+70h] [rbp-4C8h]
  __int64 v981; // [rsp+70h] [rbp-4C8h]
  __int64 v982; // [rsp+70h] [rbp-4C8h]
  __int64 v983; // [rsp+70h] [rbp-4C8h]
  __int64 v984; // [rsp+70h] [rbp-4C8h]
  __int64 v985; // [rsp+70h] [rbp-4C8h]
  __int64 v986; // [rsp+70h] [rbp-4C8h]
  __int64 v987; // [rsp+70h] [rbp-4C8h]
  __int64 v988; // [rsp+70h] [rbp-4C8h]
  __int64 v989; // [rsp+70h] [rbp-4C8h]
  __int64 v990; // [rsp+70h] [rbp-4C8h]
  __int64 v991; // [rsp+70h] [rbp-4C8h]
  __int64 v992; // [rsp+70h] [rbp-4C8h]
  __int64 v993; // [rsp+70h] [rbp-4C8h]
  __int64 v994; // [rsp+70h] [rbp-4C8h]
  __int64 v995; // [rsp+70h] [rbp-4C8h]
  __m128 v996; // [rsp+80h] [rbp-4B8h] BYREF
  __int128 *v997; // [rsp+90h] [rbp-4A8h]
  ida_mcp::tools::objc_deep *v998; // [rsp+98h] [rbp-4A0h]
  char *v999; // [rsp+A0h] [rbp-498h]
  char *v1000; // [rsp+A8h] [rbp-490h]
  char *v1001; // [rsp+B0h] [rbp-488h]
  __int128 *v1002; // [rsp+B8h] [rbp-480h]
  __int128 *v1003; // [rsp+C0h] [rbp-478h]
  __int128 *v1004; // [rsp+C8h] [rbp-470h]
  __int128 *v1005; // [rsp+D0h] [rbp-468h]
  char *v1006; // [rsp+D8h] [rbp-460h]
  char *v1007; // [rsp+E0h] [rbp-458h]
  char *v1008; // [rsp+E8h] [rbp-450h]
  __int8 *v1009; // [rsp+F0h] [rbp-448h]
  __int64 *v1010; // [rsp+F8h] [rbp-440h]
  __int64 *v1011; // [rsp+100h] [rbp-438h]
  __int64 *v1012; // [rsp+108h] [rbp-430h]
  __int64 *v1013; // [rsp+110h] [rbp-428h]
  __int64 *v1014; // [rsp+118h] [rbp-420h]
  __int64 *v1015; // [rsp+120h] [rbp-418h]
  void **v1016; // [rsp+128h] [rbp-410h]
  __int64 *v1017; // [rsp+130h] [rbp-408h]
  __int128 *v1018; // [rsp+138h] [rbp-400h]
  __m128i *v1019; // [rsp+140h] [rbp-3F8h]
  _QWORD *v1020; // [rsp+148h] [rbp-3F0h]
  char *v1021; // [rsp+150h] [rbp-3E8h]
  char *v1022; // [rsp+158h] [rbp-3E0h]
  __int128 *v1023; // [rsp+160h] [rbp-3D8h]
  __int128 *v1024; // [rsp+168h] [rbp-3D0h]
  char *v1025; // [rsp+170h] [rbp-3C8h]
  __int64 *v1026; // [rsp+178h] [rbp-3C0h]
  __m128i v1027; // [rsp+180h] [rbp-3B8h] BYREF
  __int64 v1028; // [rsp+190h] [rbp-3A8h] BYREF
  __int64 v1029; // [rsp+198h] [rbp-3A0h] BYREF
  char v1030; // [rsp+1A0h] [rbp-398h]
  __int128 v1031; // [rsp+1A8h] [rbp-390h] BYREF
  char v1032[8]; // [rsp+1C0h] [rbp-378h] BYREF
  __int128 v1033; // [rsp+1C8h] [rbp-370h] BYREF
  char v1034; // [rsp+1D8h] [rbp-360h]
  __int128 v1035; // [rsp+1E0h] [rbp-358h] BYREF
  char v1036[8]; // [rsp+1F0h] [rbp-348h] BYREF
  __int128 v1037; // [rsp+1F8h] [rbp-340h] BYREF
  char v1038; // [rsp+208h] [rbp-330h]
  __int128 v1039; // [rsp+210h] [rbp-328h] BYREF
  char v1040[8]; // [rsp+220h] [rbp-318h] BYREF
  __int128 v1041; // [rsp+228h] [rbp-310h] BYREF
  char v1042; // [rsp+238h] [rbp-300h]
  __int128 v1043; // [rsp+240h] [rbp-2F8h] BYREF
  char v1044[8]; // [rsp+250h] [rbp-2E8h] BYREF
  __int128 v1045; // [rsp+258h] [rbp-2E0h] BYREF
  __int64 v1046; // [rsp+268h] [rbp-2D0h] BYREF
  __int128 v1047; // [rsp+270h] [rbp-2C8h] BYREF
  __int64 v1048; // [rsp+280h] [rbp-2B8h] BYREF
  __int128 v1049; // [rsp+288h] [rbp-2B0h]
  __int64 v1050; // [rsp+298h] [rbp-2A0h] BYREF
  char v1051; // [rsp+2A0h] [rbp-298h] BYREF
  __int64 v1052; // [rsp+2A8h] [rbp-290h]
  char v1053[8]; // [rsp+2B0h] [rbp-288h] BYREF
  __int128 v1054; // [rsp+2B8h] [rbp-280h]
  __int64 v1055; // [rsp+2C8h] [rbp-270h] BYREF
  __int128 v1056; // [rsp+2D0h] [rbp-268h] BYREF
  char v1057[8]; // [rsp+2E0h] [rbp-258h] BYREF
  __int128 v1058; // [rsp+2E8h] [rbp-250h] BYREF
  char v1059; // [rsp+2F8h] [rbp-240h]
  __int128 v1060; // [rsp+300h] [rbp-238h] BYREF
  char v1061[8]; // [rsp+310h] [rbp-228h] BYREF
  __int128 v1062; // [rsp+318h] [rbp-220h] BYREF
  __int64 v1063; // [rsp+328h] [rbp-210h] BYREF
  __int128 v1064; // [rsp+330h] [rbp-208h] BYREF
  __int64 v1065; // [rsp+340h] [rbp-1F8h] BYREF
  __int128 v1066; // [rsp+348h] [rbp-1F0h] BYREF
  __int64 v1067; // [rsp+358h] [rbp-1E0h] BYREF
  char v1068; // [rsp+360h] [rbp-1D8h] BYREF
  __int64 v1069; // [rsp+368h] [rbp-1D0h]
  char v1070[8]; // [rsp+370h] [rbp-1C8h] BYREF
  __int128 v1071; // [rsp+378h] [rbp-1C0h] BYREF
  __int64 v1072; // [rsp+388h] [rbp-1B0h] BYREF
  char v1073; // [rsp+390h] [rbp-1A8h] BYREF
  __int64 v1074; // [rsp+398h] [rbp-1A0h]
  char v1075[8]; // [rsp+3A0h] [rbp-198h] BYREF
  __int128 v1076; // [rsp+3A8h] [rbp-190h] BYREF
  __int64 v1077; // [rsp+3B8h] [rbp-180h] BYREF
  char v1078; // [rsp+3C0h] [rbp-178h] BYREF
  __int64 v1079; // [rsp+3C8h] [rbp-170h]
  char v1080[8]; // [rsp+3D0h] [rbp-168h] BYREF
  __int128 v1081; // [rsp+3D8h] [rbp-160h] BYREF
  __m128i v1082; // [rsp+3E8h] [rbp-150h] BYREF
  __int64 v1083; // [rsp+3F8h] [rbp-140h]
  void *v1084; // [rsp+400h] [rbp-138h] BYREF
  __int64 v1085; // [rsp+408h] [rbp-130h]
  __m128i v1086; // [rsp+410h] [rbp-128h] BYREF
  __int64 v1087; // [rsp+428h] [rbp-110h]
  _QWORD v1088[2]; // [rsp+430h] [rbp-108h] BYREF
  __int64 v1089; // [rsp+440h] [rbp-F8h]
  char v1090; // [rsp+448h] [rbp-F0h] BYREF
  void *v1091; // [rsp+450h] [rbp-E8h] BYREF
  __int64 v1092; // [rsp+458h] [rbp-E0h]
  _QWORD v1093[2]; // [rsp+460h] [rbp-D8h] BYREF
  void *v1094; // [rsp+470h] [rbp-C8h] BYREF
  __int64 v1095; // [rsp+478h] [rbp-C0h]
  _QWORD v1096[2]; // [rsp+480h] [rbp-B8h] BYREF
  char v1097; // [rsp+490h] [rbp-A8h]
  __int64 v1098; // [rsp+498h] [rbp-A0h] BYREF
  char v1099; // [rsp+4B0h] [rbp-88h]
  ida_mcp::tools::objc_deep *v1100; // [rsp+4B8h] [rbp-80h]
  _QWORD v1101[2]; // [rsp+4C8h] [rbp-70h] BYREF
  char v1102; // [rsp+4D8h] [rbp-60h]
  char v1103; // [rsp+4E8h] [rbp-50h]
  unsigned __int64 v1104; // [rsp+4F8h] [rbp-40h]

  v998 = this;
  v1104 = __readfsqword(0x28u);
  v1091 = v1093;
  v1092 = 0;
  LOBYTE(v1093[0]) = 0;
  v1094 = v1096;
  v1095 = 0;
  LOBYTE(v1096[0]) = 0;
  v1097 = 0;
  v1098 = 0;
  v1099 = 0;
  v1103 = 0;
  std::string::_M_replace();
  v1016 = &v1094;
  std::string::_M_replace();
  *(_QWORD *)&v1054 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1053[0] = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  LOBYTE(v1055) = 0;
  *(_QWORD *)&v1056 = 0;
  v1054 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1055) = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v1000 = v1053;
  v1056 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1084,
    (__int64)v1053,
    2,
    v4,
    v5,
    v6,
    v294,
    v360,
    v426,
    (int)&v1091,
    v534,
    (int)&v1056,
    v618,
    v660,
    v702,
    v744,
    v786,
    v828,
    v870,
    v912,
    v954);
  v1086.m128i_i64[0] = 0;
  v1075[0] = 0;
  *(_QWORD *)&v1076 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1075[0] = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "properties", v8, v9, v10, v11, v295, v361, v427);
  v1070[0] = 0;
  *(_QWORD *)&v1071 = 0;
  v1076 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1070[0] = 3;
  v12 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v12, "address", v13, v14, v15, v16, v296, v362, v428);
  v1057[0] = 0;
  *(_QWORD *)&v1058 = 0;
  v1071 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1057[0] = 3;
  v17 = operator new(0x20u);
  *(_QWORD *)v17 = v17 + 16;
  strcpy((char *)(v17 + 16), "type");
  *(_QWORD *)(v17 + 8) = 4;
  v1059 = 0;
  *(_QWORD *)&v1060 = 0;
  v1058 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1059 = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "string");
  *(_QWORD *)(v18 + 8) = 6;
  v1001 = v1057;
  v1060 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1065,
    (__int64)v1057,
    2,
    v19,
    v20,
    v21,
    (int)&v1058,
    (__int64)&v1060,
    v429,
    v492,
    v535,
    v576,
    v619,
    v661,
    (int)&v1071,
    (int)&v1076,
    v787,
    v829,
    v871,
    v913,
    v955);
  *((_QWORD *)&v1066 + 1) = 0;
  v1061[0] = 0;
  *(_QWORD *)&v1062 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1061[0] = 3;
  v22 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v22, "description", v23, v24, v25, v26, v297, v363, v430);
  LOBYTE(v1063) = 0;
  *(_QWORD *)&v1064 = 0;
  v1062 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1063) = 3;
  v27 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v27,
    "Address of ObjC class struct (from __objc_classrefs or __objc_intobj)",
    v28,
    v29,
    v30,
    v31,
    v298,
    v364,
    v431);
  v1012 = &v1067;
  v1064 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1067,
    (__int64)v1061,
    2,
    v32,
    v33,
    v34,
    v299,
    v365,
    v432,
    v493,
    v536,
    v577,
    (__int64)&v1062,
    (int)&v1064,
    v703,
    v745,
    v788,
    v830,
    v872,
    (int)v1061,
    v956);
  v1069 = 0;
  v1013 = &v1072;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1072,
    (__int64)&v1065,
    2,
    v35,
    v36,
    v37,
    v300,
    v366,
    v433,
    v494,
    v537,
    v578,
    v620,
    v662,
    v704,
    v746,
    v789,
    v831,
    v873,
    v914,
    v957);
  v1074 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1048,
    (__int64)v1070,
    2,
    v38,
    v39,
    v40,
    v301,
    v367,
    v434,
    v495,
    v538,
    v579,
    v621,
    v663,
    v705,
    v747,
    (int)&v1048,
    v832,
    (__int64)v1070,
    v915,
    v958);
  *((_QWORD *)&v1049 + 1) = 0;
  v1014 = &v1077;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1077,
    v790,
    1,
    v41,
    v42,
    v43,
    v302,
    v368,
    v435,
    v496,
    v539,
    v580,
    v622,
    v664,
    v706,
    v748,
    v790,
    v833,
    v874,
    v916,
    v959);
  v1079 = 0;
  v1015 = &v1086.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1086.m128i_i64[1],
    (__int64)v1075,
    2,
    v44,
    v45,
    v46,
    v303,
    v369,
    v436,
    v497,
    v540,
    v581,
    v623,
    v665,
    v707,
    v749,
    v791,
    (char)v1075,
    v875,
    v917,
    v960);
  v1087 = 0;
  v1080[0] = 0;
  *(_QWORD *)&v1081 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1080[0] = 3;
  v47 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v47, "required", v48, v49, v50, v51, v304, v370, (__int64)&v1081);
  *(_QWORD *)&v1045 = 0;
  v1081 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1044[0] = 3;
  v52 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v52, "address", v53, v54, v55, v56, v305, v371, v437);
  v1019 = &v1027;
  v996 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  v1045 = (unsigned __int64)v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v57 = _mm_load_si128(&v1027);
  v1083 = 0;
  v999 = v1080;
  v1020 = v1088;
  v1082 = v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1088,
    (__int64)v1080,
    2,
    v58,
    v59,
    v60,
    v306,
    v372,
    v438,
    v498,
    (int)&v1045,
    v582,
    v624,
    v666,
    v708,
    v750,
    v792,
    v834,
    v876,
    v918,
    (__int64)v1044);
  v1089 = 0;
  LOBYTE(v1028) = 0;
  v1010 = &v1028;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1028,
    (__int64)&v1084,
    3,
    v61,
    v62,
    v63,
    v307,
    v373,
    v439,
    v499,
    v541,
    v583,
    v625,
    v667,
    v709,
    v751,
    v793,
    v835,
    v877,
    v919,
    v961);
  v64 = v1097;
  v65 = (void **)&v1090;
  v66 = v1029;
  v1097 = v1028;
  LOBYTE(v1028) = v64;
  v1029 = v1098;
  v1098 = v66;
  v1011 = &v1029;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v65 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v65 != &v1084 );
  v1009 = &v1082.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1008 = &v1078;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1007 = &v1073;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1006 = &v1068;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v997 = &v1066;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v996);
  v1085 = 0;
  v1084 = ida_mcp::tools::objc_deep::`anonymous namespace'::handle_get_objc_class_info;
  v1086 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1086.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1086.m128i_i64[0])(&v1084, &v1084, 3);
  if ( v1103 && v1102 && v1100 != (ida_mcp::tools::objc_deep *)v1101 )
    operator delete(v1100, v1101[0] + 1LL);
  if ( v1099 )
  {
    v1099 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v1017 = &v1098;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v1094 != v1096 )
    operator delete(v1094, v1096[0] + 1LL);
  if ( v1091 != v1093 )
    operator delete(v1091, v1093[0] + 1LL);
  v1091 = v1093;
  v1092 = 0;
  LOBYTE(v1093[0]) = 0;
  v1094 = v1096;
  v1095 = 0;
  LOBYTE(v1096[0]) = 0;
  v1097 = 0;
  v1098 = 0;
  v1099 = 0;
  v1103 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v1032[0] = 0;
  v1023 = &v1033;
  *(_QWORD *)&v1033 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1032[0] = 3;
  v68 = operator new(0x20u);
  *(_QWORD *)v68 = v68 + 16;
  strcpy((char *)(v68 + 16), "type");
  *(_QWORD *)(v68 + 8) = 4;
  v1034 = 0;
  *(_QWORD *)&v1035 = 0;
  v1024 = &v1035;
  v1033 = (unsigned __int64)v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1034 = 3;
  v69 = operator new(0x20u);
  *(_QWORD *)v69 = v69 + 16;
  strcpy((char *)(v69 + 16), "object");
  *(_QWORD *)(v69 + 8) = 6;
  v1025 = v1032;
  v1035 = (unsigned __int64)v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1084,
    (__int64)v1032,
    2,
    29795,
    v70,
    v71,
    v308,
    v374,
    v440,
    v500,
    v542,
    v584,
    v626,
    v668,
    v710,
    v752,
    v794,
    v836,
    v878,
    v920,
    v962);
  v1086.m128i_i64[0] = 0;
  v1075[0] = 0;
  *(_QWORD *)&v1076 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1075[0] = 3;
  v72 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v72, "properties", v73, v74, v75, v76, v309, v375, v441);
  LOBYTE(v1048) = 0;
  *(_QWORD *)&v1049 = 0;
  v1076 = (unsigned __int64)v72;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1048) = 3;
  v77 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v77, "address", v78, v79, v80, v81, v310, v376, v442);
  v1036[0] = 0;
  v1002 = &v1037;
  *(_QWORD *)&v1037 = 0;
  v1049 = (unsigned __int64)v77;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1036[0] = 3;
  v82 = operator new(0x20u);
  *(_QWORD *)v82 = v82 + 16;
  strcpy((char *)(v82 + 16), "type");
  *(_QWORD *)(v82 + 8) = 4;
  v1038 = 0;
  *(_QWORD *)&v1039 = 0;
  v1003 = &v1039;
  v1037 = (unsigned __int64)v82;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1038 = 3;
  v83 = operator new(0x20u);
  strcpy((char *)(v83 + 16), "string");
  *(_QWORD *)v83 = v83 + 16;
  *(_QWORD *)(v83 + 8) = 6;
  v1021 = v1036;
  v1039 = (unsigned __int64)v83;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v963,
    (__int64)v1036,
    2,
    v84,
    v85,
    v86,
    v311,
    v377,
    v443,
    v501,
    v543,
    v585,
    v627,
    v669,
    v711,
    v753,
    v795,
    v837,
    v879,
    v921,
    (__int64)v963);
  *((_QWORD *)&v1045 + 1) = 0;
  v1040[0] = 0;
  *(_QWORD *)&v1041 = 0;
  v1004 = &v1041;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1040[0] = 3;
  v87 = operator new(0x20u);
  *(_QWORD *)v87 = v87 + 16;
  strcpy((char *)(v87 + 16), "description");
  *(_QWORD *)(v87 + 8) = 11;
  v1042 = 0;
  *(_QWORD *)&v1043 = 0;
  v1005 = &v1043;
  v1041 = (unsigned __int64)v87;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1042 = 3;
  v88 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v88, "Vtable start address", v89, v90, v91, v92, v312, v378, v444);
  v1022 = v1040;
  v1043 = (unsigned __int64)v88;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1046,
    (__int64)v1040,
    2,
    v93,
    v94,
    v95,
    v313,
    v379,
    v445,
    v502,
    v544,
    v586,
    v628,
    v670,
    v712,
    v754,
    v796,
    v838,
    v880,
    v922,
    v964);
  *((_QWORD *)&v1047 + 1) = 0;
  v1026 = &v1050;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1050,
    v965,
    2,
    v96,
    v97,
    v98,
    v314,
    v380,
    v446,
    v503,
    v545,
    v587,
    v629,
    v671,
    v713,
    v755,
    v797,
    v839,
    v881,
    v923,
    v965);
  v1052 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v882,
    v798,
    2,
    v99,
    v100,
    v101,
    v315,
    v381,
    v447,
    v504,
    v546,
    v588,
    v630,
    v672,
    v714,
    v756,
    v798,
    v840,
    (__int64)v882,
    v924,
    v966);
  *((_QWORD *)&v1071 + 1) = 0;
  LOBYTE(v1065) = 0;
  *(_QWORD *)&v1066 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1065) = 3;
  v102 = operator new(0x20u);
  *(_DWORD *)(v102 + 16) = 1768778092;
  *(_QWORD *)v102 = v102 + 16;
  *(_BYTE *)(v102 + 20) = 116;
  *(_QWORD *)(v102 + 8) = 5;
  *(_BYTE *)(v102 + 21) = 0;
  v1053[0] = 0;
  *(_QWORD *)&v1054 = 0;
  v1066 = (unsigned __int64)v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1053[0] = 3;
  v103 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v103, "type", v104, v105, v106, v107, v316, v382, v448);
  LOBYTE(v1055) = 0;
  *(_QWORD *)&v1056 = 0;
  v1054 = (unsigned __int64)v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1055) = 3;
  v108 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v108, "integer", v109, v110, v111, v112, v317, v383, v449);
  v1056 = (unsigned __int64)v108;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v925,
    (__int64)v1000,
    2,
    v113,
    v114,
    v115,
    v318,
    v384,
    v450,
    v505,
    v547,
    v589,
    v631,
    v673,
    v715,
    v757,
    v799,
    v841,
    v883,
    (int)v925,
    v967);
  *((_QWORD *)&v1062 + 1) = 0;
  v1057[0] = 0;
  *(_QWORD *)&v1058 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1057[0] = 3;
  v116 = operator new(0x20u);
  *(_QWORD *)v116 = v116 + 16;
  strcpy((char *)(v116 + 16), "description");
  *(_QWORD *)(v116 + 8) = 11;
  v1059 = 0;
  *(_QWORD *)&v1060 = 0;
  v1058 = (unsigned __int64)v116;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1059 = 3;
  v117 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v117,
    "Max entries to read (default 50)",
    v118,
    v119,
    v120,
    v121,
    v319,
    v385,
    v451);
  v1060 = (unsigned __int64)v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1063,
    (__int64)v1001,
    2,
    v122,
    v123,
    v124,
    v320,
    v386,
    v452,
    v506,
    v548,
    v590,
    v632,
    v674,
    v716,
    v758,
    v800,
    v842,
    v884,
    v926,
    v968);
  *((_QWORD *)&v1064 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1012,
    v927,
    2,
    v125,
    v126,
    v127,
    v321,
    v387,
    v453,
    v507,
    v549,
    v591,
    v633,
    v675,
    v717,
    v759,
    v801,
    v843,
    v885,
    v927,
    v969);
  v1069 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1013,
    (__int64)&v1065,
    2,
    v128,
    v129,
    v130,
    v322,
    v388,
    v454,
    v508,
    v550,
    v592,
    v634,
    v676,
    v718,
    v760,
    v802,
    v844,
    v886,
    v928,
    v970);
  v1074 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1014,
    v887,
    2,
    v131,
    v132,
    v133,
    v323,
    v389,
    v455,
    v509,
    v551,
    v593,
    v635,
    v677,
    v719,
    v761,
    v803,
    v845,
    v887,
    v929,
    v971);
  v1079 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    v846,
    2,
    v134,
    v135,
    v136,
    v324,
    v390,
    v456,
    v510,
    v552,
    v594,
    v636,
    v678,
    v720,
    v762,
    v804,
    v846,
    v888,
    v930,
    v972);
  v1087 = 0;
  v1080[0] = 0;
  *(_QWORD *)&v1081 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1080[0] = 3;
  v137 = operator new(0x20u);
  *(_QWORD *)v137 = v137 + 16;
  strcpy((char *)(v137 + 16), "required");
  *(_QWORD *)(v137 + 8) = 8;
  v1030 = 0;
  *(_QWORD *)&v1031 = 0;
  v1018 = &v1031;
  v1081 = (unsigned __int64)v137;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1030 = 3;
  v138 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v138, "address", v139, v140, v141, v142, v325, v391, v457);
  v1031 = (unsigned __int64)v138;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v143 = _mm_load_si128(&v1027);
  v1083 = 0;
  v1082 = v143;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1020,
    (__int64)v999,
    2,
    v144,
    v145,
    v146,
    v326,
    v392,
    v458,
    v511,
    v553,
    v595,
    v637,
    v679,
    v721,
    v763,
    v805,
    v847,
    v889,
    v931,
    v973);
  v1089 = 0;
  LOBYTE(v1028) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1010,
    (__int64)&v1084,
    3,
    v147,
    v148,
    v149,
    v327,
    v393,
    v459,
    v512,
    v554,
    v596,
    v638,
    v680,
    v722,
    v764,
    v806,
    v848,
    v890,
    v932,
    v974);
  v150 = v1097;
  v151 = (void **)&v1090;
  v1097 = v1028;
  v152 = v1098;
  LOBYTE(v1028) = v150;
  v1098 = v1029;
  v1029 = v152;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v151 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v151 != &v1084 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1025 = &v1051;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1018 = &v1047;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v153 = _mm_load_si128((const __m128i *)&v996);
  v1085 = 0;
  v1084 = ida_mcp::tools::objc_deep::`anonymous namespace'::handle_get_vtable;
  v1086 = v153;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1086.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1086.m128i_i64[0])(&v1084, &v1084, 3);
  if ( v1103 && v1102 && v1100 != (ida_mcp::tools::objc_deep *)v1101 )
    operator delete(v1100, v1101[0] + 1LL);
  if ( v1099 )
  {
    v1099 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v1094 != v1096 )
    operator delete(v1094, v1096[0] + 1LL);
  if ( v1091 != v1093 )
    operator delete(v1091, v1093[0] + 1LL);
  v1091 = v1093;
  v1092 = 0;
  LOBYTE(v1093[0]) = 0;
  v1094 = v1096;
  v1095 = 0;
  LOBYTE(v1096[0]) = 0;
  v1097 = 0;
  v1098 = 0;
  v1099 = 0;
  v1103 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v1036[0] = 0;
  *(_QWORD *)&v1037 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1036[0] = 3;
  v154 = operator new(0x20u);
  *(_QWORD *)v154 = v154 + 16;
  strcpy((char *)(v154 + 16), "type");
  *(_QWORD *)(v154 + 8) = 4;
  v1038 = 0;
  *(_QWORD *)&v1039 = 0;
  v1037 = (unsigned __int64)v154;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1038 = 3;
  v155 = operator new(0x20u);
  *(_QWORD *)v155 = v155 + 16;
  v156 = (__int64)v1021;
  strcpy((char *)(v155 + 16), "object");
  *(_QWORD *)(v155 + 8) = 6;
  v1039 = (unsigned __int64)v155;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1084,
    v156,
    2,
    v157,
    v158,
    v159,
    v328,
    v394,
    v460,
    v513,
    v555,
    v597,
    v639,
    v681,
    v723,
    v765,
    v807,
    v849,
    v891,
    v933,
    v975);
  v1086.m128i_i64[0] = 0;
  v1080[0] = 0;
  *(_QWORD *)&v1081 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1080[0] = 3;
  v160 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v160, "properties", v161, v162, v163, v164, v329, v395, v461);
  v1053[0] = 0;
  *(_QWORD *)&v1054 = 0;
  v1081 = (unsigned __int64)v160;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1053[0] = 3;
  v165 = operator new(0x20u);
  strcpy((char *)(v165 + 16), "address");
  *(_QWORD *)v165 = v165 + 16;
  *(_QWORD *)(v165 + 8) = 7;
  v1040[0] = 0;
  *(_QWORD *)&v1041 = 0;
  v1054 = (unsigned __int64)v165;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1040[0] = 3;
  v166 = operator new(0x20u);
  *(_QWORD *)v166 = v166 + 16;
  strcpy((char *)(v166 + 16), "type");
  *(_QWORD *)(v166 + 8) = 4;
  v1042 = 0;
  *(_QWORD *)&v1043 = 0;
  v1041 = (unsigned __int64)v166;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1042 = 3;
  v167 = operator new(0x20u);
  v168 = (__int64)v1022;
  *(_QWORD *)v167 = v167 + 16;
  strcpy((char *)(v167 + 16), "string");
  *(_QWORD *)(v167 + 8) = 6;
  v1043 = (unsigned __int64)v167;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v808,
    v168,
    2,
    v169,
    v170,
    v171,
    v330,
    v396,
    v462,
    v514,
    v556,
    v598,
    v640,
    v682,
    v724,
    v766,
    (int)v808,
    v850,
    v892,
    v934,
    v976);
  *((_QWORD *)&v1049 + 1) = 0;
  v1044[0] = 0;
  *(_QWORD *)&v1045 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1044[0] = 3;
  v172 = operator new(0x20u);
  *(_QWORD *)v172 = v172 + 16;
  strcpy((char *)(v172 + 16), "description");
  *(_QWORD *)(v172 + 8) = 11;
  LOBYTE(v1046) = 0;
  *(_QWORD *)&v1047 = 0;
  v1045 = (unsigned __int64)v172;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1046) = 3;
  v173 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v173,
    "Start address (default: beginning)",
    v174,
    v175,
    v176,
    v177,
    v331,
    v397,
    v463);
  v1047 = (unsigned __int64)v173;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1026,
    v977,
    2,
    v178,
    v179,
    v180,
    v332,
    v398,
    v464,
    v515,
    v557,
    v599,
    v641,
    v683,
    v725,
    v767,
    v809,
    v851,
    v893,
    v935,
    v977);
  v1052 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1055,
    v810,
    2,
    v181,
    v182,
    v183,
    v333,
    v399,
    v465,
    v516,
    v558,
    v600,
    v642,
    v684,
    v726,
    v768,
    v810,
    v852,
    v894,
    v936,
    v978);
  *((_QWORD *)&v1056 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v853,
    (__int64)v1000,
    2,
    v184,
    v185,
    v186,
    v334,
    v400,
    v466,
    v517,
    v559,
    v601,
    v643,
    v685,
    v727,
    v769,
    v811,
    (char)v853,
    v895,
    v937,
    v979);
  *((_QWORD *)&v1076 + 1) = 0;
  v1070[0] = 0;
  *(_QWORD *)&v1071 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1070[0] = 3;
  v187 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v187, "limit", v188, v189, v190, v191, v335, v401, v467);
  v1057[0] = 0;
  *(_QWORD *)&v1058 = 0;
  v1071 = (unsigned __int64)v187;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1057[0] = 3;
  v192 = operator new(0x20u);
  *(_QWORD *)v192 = v192 + 16;
  strcpy((char *)(v192 + 16), "type");
  *(_QWORD *)(v192 + 8) = 4;
  v1059 = 0;
  *(_QWORD *)&v1060 = 0;
  v1058 = (unsigned __int64)v192;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1059 = 3;
  v193 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v193, "integer", v194, v195, v196, v197, v336, v402, v468);
  v1060 = (unsigned __int64)v193;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1065,
    (__int64)v1001,
    2,
    v198,
    v199,
    v200,
    v337,
    v403,
    v469,
    v518,
    v560,
    v602,
    v644,
    v686,
    v728,
    v770,
    v812,
    v854,
    v896,
    v938,
    v980);
  *((_QWORD *)&v1066 + 1) = 0;
  v1061[0] = 0;
  *(_QWORD *)&v1062 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1061[0] = 3;
  v201 = operator new(0x20u);
  *(_QWORD *)v201 = v201 + 16;
  strcpy((char *)(v201 + 16), "description");
  *(_QWORD *)(v201 + 8) = 11;
  LOBYTE(v1063) = 0;
  *(_QWORD *)&v1064 = 0;
  v1062 = (unsigned __int64)v201;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1063) = 3;
  v202 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v202,
    "Max fixups (default 100)",
    v203,
    v204,
    v205,
    v206,
    v338,
    v404,
    v470);
  v1064 = (unsigned __int64)v202;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1012,
    v939,
    2,
    v207,
    v208,
    v209,
    v339,
    v405,
    v471,
    v519,
    v561,
    v603,
    v645,
    v687,
    v729,
    v771,
    v813,
    v855,
    v897,
    v939,
    v981);
  v1069 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1013,
    (__int64)&v1065,
    2,
    v210,
    v211,
    v212,
    v340,
    v406,
    v472,
    v520,
    v562,
    v604,
    v646,
    v688,
    v730,
    v772,
    v814,
    v856,
    v898,
    v940,
    v982);
  v1074 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1014,
    v899,
    2,
    v213,
    v214,
    v215,
    v341,
    v407,
    v473,
    v521,
    v563,
    v605,
    v647,
    v689,
    v731,
    v773,
    v815,
    v857,
    v899,
    v941,
    v983);
  v1079 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1082,
    v858,
    2,
    v216,
    v217,
    v218,
    v342,
    v408,
    v474,
    v522,
    v564,
    v606,
    v648,
    v690,
    v732,
    v774,
    v816,
    v858,
    v900,
    v942,
    v984);
  v1083 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    (__int64)v999,
    2,
    v219,
    v220,
    v221,
    v343,
    v409,
    v475,
    v523,
    v565,
    v607,
    v649,
    v691,
    v733,
    v775,
    v817,
    v859,
    v901,
    v943,
    v985);
  v1087 = 0;
  LOBYTE(v1028) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1010,
    (__int64)&v1084,
    2,
    v222,
    v223,
    v224,
    v344,
    v410,
    v476,
    v524,
    v566,
    v608,
    v650,
    v692,
    v734,
    v776,
    v818,
    v860,
    v902,
    v944,
    v986);
  LOBYTE(v168) = v1097;
  v1097 = v1028;
  v225 = v1098;
  LOBYTE(v1028) = v168;
  v1098 = v1029;
  v1029 = v225;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v226 = _mm_load_si128((const __m128i *)&v996);
  v1085 = 0;
  v1084 = ida_mcp::tools::objc_deep::`anonymous namespace'::handle_get_chained_fixups;
  v1086 = v226;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1086.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1086.m128i_i64[0])(&v1084, &v1084, 3);
  if ( v1103 && v1102 && v1100 != (ida_mcp::tools::objc_deep *)v1101 )
    operator delete(v1100, v1101[0] + 1LL);
  if ( v1099 )
  {
    v1099 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v1094 != v1096 )
    operator delete(v1094, v1096[0] + 1LL);
  if ( v1091 != v1093 )
    operator delete(v1091, v1093[0] + 1LL);
  v1091 = v1093;
  v1092 = 0;
  LOBYTE(v1093[0]) = 0;
  v1094 = v1096;
  v1095 = 0;
  LOBYTE(v1096[0]) = 0;
  v1097 = 0;
  v1098 = 0;
  v1099 = 0;
  v1103 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v1053[0] = 0;
  *(_QWORD *)&v1054 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1053[0] = 3;
  v227 = operator new(0x20u);
  *(_QWORD *)v227 = v227 + 16;
  strcpy((char *)(v227 + 16), "type");
  *(_QWORD *)(v227 + 8) = 4;
  LOBYTE(v1055) = 0;
  *(_QWORD *)&v1056 = 0;
  v1054 = (unsigned __int64)v227;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1055) = 3;
  v228 = operator new(0x20u);
  *(_QWORD *)v228 = v228 + 16;
  v229 = (__int64)v1000;
  strcpy((char *)(v228 + 16), "object");
  *(_QWORD *)(v228 + 8) = 6;
  v1056 = (unsigned __int64)v228;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1084,
    v229,
    2,
    v230,
    v231,
    v232,
    v345,
    v411,
    v477,
    v525,
    v567,
    v609,
    v651,
    v693,
    v735,
    v777,
    v819,
    v861,
    v903,
    v945,
    v987);
  v1086.m128i_i64[0] = 0;
  v1075[0] = 0;
  *(_QWORD *)&v1076 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1075[0] = 3;
  v233 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v233, "properties", v234, v235, v236, v237, v346, v412, v478);
  v1070[0] = 0;
  *(_QWORD *)&v1071 = 0;
  v1076 = (unsigned __int64)v233;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1070[0] = 3;
  v238 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v238, "address", v239, v240, v241, v242, v347, v413, v479);
  v1057[0] = 0;
  *(_QWORD *)&v1058 = 0;
  v1071 = (unsigned __int64)v238;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1057[0] = 3;
  v243 = operator new(0x20u);
  *(_QWORD *)v243 = v243 + 16;
  strcpy((char *)(v243 + 16), "type");
  *(_QWORD *)(v243 + 8) = 4;
  v1059 = 0;
  *(_QWORD *)&v1060 = 0;
  v1058 = (unsigned __int64)v243;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1059 = 3;
  v244 = operator new(0x20u);
  *(_QWORD *)v244 = v244 + 16;
  v245 = (__int64)v1001;
  strcpy((char *)(v244 + 16), "string");
  *(_QWORD *)(v244 + 8) = 6;
  v1060 = (unsigned __int64)v244;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1065,
    v245,
    2,
    v246,
    v247,
    26478,
    v348,
    v414,
    v480,
    v526,
    v568,
    v610,
    v652,
    v694,
    v736,
    v778,
    v820,
    v862,
    v904,
    v946,
    v988);
  *((_QWORD *)&v1066 + 1) = 0;
  v1061[0] = 0;
  *(_QWORD *)&v1062 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1061[0] = 3;
  v248 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v248, "description", v249, v250, v251, v252, v349, v415, v481);
  LOBYTE(v1063) = 0;
  *(_QWORD *)&v1064 = 0;
  v1062 = (unsigned __int64)v248;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1063) = 3;
  v253 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v253,
    "Function or call site address",
    v254,
    v255,
    v256,
    v257,
    v350,
    v416,
    v482);
  v1064 = (unsigned __int64)v253;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1012,
    v947,
    2,
    v258,
    v259,
    v260,
    v351,
    v417,
    v483,
    v527,
    v569,
    v611,
    v653,
    v695,
    v737,
    v779,
    v821,
    v863,
    v905,
    v947,
    v989);
  v1069 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1013,
    (__int64)&v1065,
    2,
    v261,
    v262,
    v263,
    v352,
    v418,
    v484,
    v528,
    v570,
    v612,
    v654,
    v696,
    v738,
    v780,
    v822,
    v864,
    v906,
    v948,
    v990);
  v1074 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v823,
    v907,
    2,
    v264,
    v265,
    v266,
    v353,
    v419,
    v485,
    v529,
    v571,
    v613,
    v655,
    v697,
    v739,
    v781,
    (int)v823,
    v865,
    v907,
    v949,
    v991);
  *((_QWORD *)&v1049 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1014,
    v824,
    1,
    v267,
    v268,
    v269,
    v354,
    v420,
    v486,
    v530,
    v572,
    v614,
    v656,
    v698,
    v740,
    v782,
    v824,
    v866,
    v908,
    v950,
    v992);
  v1079 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    v867,
    2,
    v270,
    v271,
    v272,
    v355,
    v421,
    v487,
    v531,
    v573,
    v615,
    v657,
    v699,
    v741,
    v783,
    v825,
    v867,
    v909,
    v951,
    v993);
  v1087 = 0;
  v1080[0] = 0;
  *(_QWORD *)&v1081 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1080[0] = 3;
  v273 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v273, "required", v274, v275, v276, v277, v356, v422, v488);
  v1044[0] = 0;
  *(_QWORD *)&v1045 = 0;
  v1081 = (unsigned __int64)v273;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1044[0] = 3;
  v278 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v278, "address", v279, v280, v281, v282, v357, v423, v489);
  v1045 = (unsigned __int64)v278;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v283 = _mm_load_si128(&v1027);
  v1083 = 0;
  v1082 = v283;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1020,
    (__int64)v999,
    2,
    v284,
    v285,
    v286,
    v358,
    v424,
    v490,
    v532,
    v574,
    v616,
    v658,
    v700,
    v742,
    v784,
    v826,
    v868,
    v910,
    v952,
    v994);
  v1089 = 0;
  LOBYTE(v1028) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1010,
    (__int64)&v1084,
    3,
    v287,
    v288,
    v289,
    v359,
    v425,
    v491,
    v533,
    v575,
    v617,
    v659,
    v701,
    v743,
    v785,
    v827,
    v869,
    v911,
    v953,
    v995);
  LOBYTE(v245) = v1097;
  v290 = (void **)&v1090;
  v1097 = v1028;
  v291 = v1098;
  LOBYTE(v1028) = v245;
  v1098 = v1029;
  v1029 = v291;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v290 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v290 != &v1084 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v292 = _mm_load_si128((const __m128i *)&v996);
  v1085 = 0;
  v1084 = ida_mcp::tools::objc_deep::`anonymous namespace'::handle_get_decompiler_call_info;
  v1086 = v292;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1086.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1086.m128i_i64[0])(&v1084, &v1084, 3);
  if ( v1103 && v1102 && v1100 != (ida_mcp::tools::objc_deep *)v1101 )
    operator delete(v1100, v1101[0] + 1LL);
  if ( v1099 )
  {
    v1099 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v1094 != v1096 )
    operator delete(v1094, v1096[0] + 1LL);
  if ( v1091 != v1093 )
    operator delete(v1091, v1093[0] + 1LL);
  return v1104 - __readfsqword(0x28u);
}

