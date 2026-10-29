unsigned __int64 __fastcall ida_mcp::tools::search::register_tools(
        ida_mcp::tools::search *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 *v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 *v42; // r12
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 *v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 *v55; // r12
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 *v61; // r12
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 *v69; // r12
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  __m128 v75; // xmm1
  __m128i v76; // xmm0
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  char v80; // si
  __int64 *v81; // r13
  __int64 v82; // rdx
  void **v83; // r13
  __m128i v84; // xmm2
  __int64 *v85; // r13
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 *v93; // r13
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  char *v99; // rdi
  __int64 *v100; // r13
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 *v117; // r13
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rax
  __int64 *v123; // r13
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 *v131; // r13
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rax
  __int64 *v146; // r13
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rax
  __int64 v155; // rsi
  char *v156; // rdi
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 *v166; // r13
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rax
  __int64 *v172; // r13
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rax
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 *v199; // r13
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rax
  __m128i v205; // xmm0
  __int64 v206; // rcx
  __int64 v207; // r8
  __int64 v208; // r9
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r9
  __int64 *v212; // r13
  __int64 v213; // rax
  void **v214; // r13
  __int64 *v215; // r13
  __m128i v216; // xmm3
  __int64 v217; // rax
  __int64 *v218; // r13
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // r8
  __int64 v222; // r9
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 *v226; // r13
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  __int64 *v231; // r13
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  __int64 v236; // rax
  __int64 *v237; // r13
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
  __int64 v257; // rcx
  __int64 v258; // r8
  __int64 v259; // r9
  __int64 *v260; // r13
  __int64 v261; // rdx
  __int64 v262; // rcx
  __int64 v263; // r8
  __int64 v264; // r9
  __int64 *v265; // r13
  __int64 v266; // rdx
  __int64 v267; // rcx
  __int64 v268; // r8
  __int64 v269; // r9
  __m128i v270; // xmm0
  __int64 v271; // rcx
  __int64 v272; // r8
  __int64 v273; // r9
  __int64 v274; // rcx
  __int64 v275; // r8
  __int64 v276; // r9
  char v277; // si
  __int64 v278; // rax
  void **v279; // rbp
  __m128i v280; // xmm4
  int v282; // [rsp+0h] [rbp-918h]
  int v283; // [rsp+0h] [rbp-918h]
  int v284; // [rsp+0h] [rbp-918h]
  int v285; // [rsp+0h] [rbp-918h]
  int v286; // [rsp+0h] [rbp-918h]
  int v287; // [rsp+0h] [rbp-918h]
  int v288; // [rsp+0h] [rbp-918h]
  int v289; // [rsp+0h] [rbp-918h]
  int v290; // [rsp+0h] [rbp-918h]
  int v291; // [rsp+0h] [rbp-918h]
  int v292; // [rsp+0h] [rbp-918h]
  int v293; // [rsp+0h] [rbp-918h]
  int v294; // [rsp+0h] [rbp-918h]
  int v295; // [rsp+0h] [rbp-918h]
  int v296; // [rsp+0h] [rbp-918h]
  int v297; // [rsp+0h] [rbp-918h]
  int v298; // [rsp+0h] [rbp-918h]
  int v299; // [rsp+0h] [rbp-918h]
  int v300; // [rsp+0h] [rbp-918h]
  int v301; // [rsp+0h] [rbp-918h]
  int v302; // [rsp+0h] [rbp-918h]
  int v303; // [rsp+0h] [rbp-918h]
  int v304; // [rsp+0h] [rbp-918h]
  int v305; // [rsp+0h] [rbp-918h]
  int v306; // [rsp+0h] [rbp-918h]
  int v307; // [rsp+0h] [rbp-918h]
  int v308; // [rsp+0h] [rbp-918h]
  int v309; // [rsp+0h] [rbp-918h]
  int v310; // [rsp+0h] [rbp-918h]
  int v311; // [rsp+0h] [rbp-918h]
  int v312; // [rsp+0h] [rbp-918h]
  int v313; // [rsp+0h] [rbp-918h]
  int v314; // [rsp+0h] [rbp-918h]
  int v315; // [rsp+0h] [rbp-918h]
  int v316; // [rsp+0h] [rbp-918h]
  int v317; // [rsp+0h] [rbp-918h]
  int v318; // [rsp+0h] [rbp-918h]
  int v319; // [rsp+0h] [rbp-918h]
  int v320; // [rsp+0h] [rbp-918h]
  int v321; // [rsp+0h] [rbp-918h]
  int v322; // [rsp+0h] [rbp-918h]
  int v323; // [rsp+0h] [rbp-918h]
  int v324; // [rsp+0h] [rbp-918h]
  int v325; // [rsp+0h] [rbp-918h]
  int v326; // [rsp+0h] [rbp-918h]
  int v327; // [rsp+0h] [rbp-918h]
  int v328; // [rsp+0h] [rbp-918h]
  int v329; // [rsp+0h] [rbp-918h]
  int v330; // [rsp+0h] [rbp-918h]
  int v331; // [rsp+0h] [rbp-918h]
  int v332; // [rsp+0h] [rbp-918h]
  int v333; // [rsp+0h] [rbp-918h]
  int v334; // [rsp+0h] [rbp-918h]
  int v335; // [rsp+0h] [rbp-918h]
  int v336; // [rsp+0h] [rbp-918h]
  int v337; // [rsp+0h] [rbp-918h]
  int v338; // [rsp+0h] [rbp-918h]
  int v339; // [rsp+0h] [rbp-918h]
  int v340; // [rsp+0h] [rbp-918h]
  int v341; // [rsp+0h] [rbp-918h]
  int v342; // [rsp+8h] [rbp-910h]
  int v343; // [rsp+8h] [rbp-910h]
  int v344; // [rsp+8h] [rbp-910h]
  int v345; // [rsp+8h] [rbp-910h]
  int v346; // [rsp+8h] [rbp-910h]
  int v347; // [rsp+8h] [rbp-910h]
  int v348; // [rsp+8h] [rbp-910h]
  int v349; // [rsp+8h] [rbp-910h]
  int v350; // [rsp+8h] [rbp-910h]
  int v351; // [rsp+8h] [rbp-910h]
  __int64 v352; // [rsp+8h] [rbp-910h]
  int v353; // [rsp+8h] [rbp-910h]
  __int64 v354; // [rsp+8h] [rbp-910h]
  int v355; // [rsp+8h] [rbp-910h]
  __int64 v356; // [rsp+8h] [rbp-910h]
  int v357; // [rsp+8h] [rbp-910h]
  int v358; // [rsp+8h] [rbp-910h]
  __int64 v359; // [rsp+8h] [rbp-910h]
  __int64 v360; // [rsp+8h] [rbp-910h]
  __int64 v361; // [rsp+8h] [rbp-910h]
  __int64 v362; // [rsp+8h] [rbp-910h]
  int v363; // [rsp+8h] [rbp-910h]
  int v364; // [rsp+8h] [rbp-910h]
  __int64 v365; // [rsp+8h] [rbp-910h]
  int v366; // [rsp+8h] [rbp-910h]
  __int64 v367; // [rsp+8h] [rbp-910h]
  __int64 v368; // [rsp+8h] [rbp-910h]
  __int64 v369; // [rsp+8h] [rbp-910h]
  int v370; // [rsp+8h] [rbp-910h]
  __int64 v371; // [rsp+8h] [rbp-910h]
  __int64 v372; // [rsp+8h] [rbp-910h]
  __int64 v373; // [rsp+8h] [rbp-910h]
  __int64 v374; // [rsp+8h] [rbp-910h]
  int v375; // [rsp+8h] [rbp-910h]
  int v376; // [rsp+8h] [rbp-910h]
  __int64 v377; // [rsp+8h] [rbp-910h]
  __int64 v378; // [rsp+8h] [rbp-910h]
  __int64 v379; // [rsp+8h] [rbp-910h]
  __int64 v380; // [rsp+8h] [rbp-910h]
  __int64 v381; // [rsp+8h] [rbp-910h]
  __int64 v382; // [rsp+8h] [rbp-910h]
  __int64 v383; // [rsp+8h] [rbp-910h]
  int v384; // [rsp+8h] [rbp-910h]
  __int64 v385; // [rsp+8h] [rbp-910h]
  __int64 v386; // [rsp+8h] [rbp-910h]
  int v387; // [rsp+8h] [rbp-910h]
  __int64 v388; // [rsp+8h] [rbp-910h]
  int v389; // [rsp+8h] [rbp-910h]
  int v390; // [rsp+8h] [rbp-910h]
  int v391; // [rsp+8h] [rbp-910h]
  __int64 v392; // [rsp+8h] [rbp-910h]
  __int64 v393; // [rsp+8h] [rbp-910h]
  __int64 v394; // [rsp+8h] [rbp-910h]
  __int64 v395; // [rsp+8h] [rbp-910h]
  __int64 v396; // [rsp+8h] [rbp-910h]
  __int64 v397; // [rsp+8h] [rbp-910h]
  int v398; // [rsp+8h] [rbp-910h]
  int v399; // [rsp+8h] [rbp-910h]
  __int64 v400; // [rsp+8h] [rbp-910h]
  __int64 v401; // [rsp+8h] [rbp-910h]
  __int64 v402; // [rsp+10h] [rbp-908h]
  __int64 v403; // [rsp+10h] [rbp-908h]
  __int64 v404; // [rsp+10h] [rbp-908h]
  __int64 v405; // [rsp+10h] [rbp-908h]
  __int64 v406; // [rsp+10h] [rbp-908h]
  __int64 v407; // [rsp+10h] [rbp-908h]
  __int64 v408; // [rsp+10h] [rbp-908h]
  __int64 v409; // [rsp+10h] [rbp-908h]
  __int64 v410; // [rsp+10h] [rbp-908h]
  __int64 v411; // [rsp+10h] [rbp-908h]
  int v412; // [rsp+10h] [rbp-908h]
  __int64 v413; // [rsp+10h] [rbp-908h]
  int v414; // [rsp+10h] [rbp-908h]
  void *v415; // [rsp+10h] [rbp-908h]
  int v416; // [rsp+10h] [rbp-908h]
  __int64 v417; // [rsp+10h] [rbp-908h]
  __int64 v418; // [rsp+10h] [rbp-908h]
  int v419; // [rsp+10h] [rbp-908h]
  int v420; // [rsp+10h] [rbp-908h]
  int v421; // [rsp+10h] [rbp-908h]
  int v422; // [rsp+10h] [rbp-908h]
  __int64 v423; // [rsp+10h] [rbp-908h]
  __int64 v424; // [rsp+10h] [rbp-908h]
  int v425; // [rsp+10h] [rbp-908h]
  __int64 v426; // [rsp+10h] [rbp-908h]
  int v427; // [rsp+10h] [rbp-908h]
  int v428; // [rsp+10h] [rbp-908h]
  int v429; // [rsp+10h] [rbp-908h]
  __int64 v430; // [rsp+10h] [rbp-908h]
  int v431; // [rsp+10h] [rbp-908h]
  int v432; // [rsp+10h] [rbp-908h]
  int v433; // [rsp+10h] [rbp-908h]
  int v434; // [rsp+10h] [rbp-908h]
  __int64 v435; // [rsp+10h] [rbp-908h]
  __int64 v436; // [rsp+10h] [rbp-908h]
  int v437; // [rsp+10h] [rbp-908h]
  int v438; // [rsp+10h] [rbp-908h]
  int v439; // [rsp+10h] [rbp-908h]
  int v440; // [rsp+10h] [rbp-908h]
  int v441; // [rsp+10h] [rbp-908h]
  int v442; // [rsp+10h] [rbp-908h]
  int v443; // [rsp+10h] [rbp-908h]
  __int64 v444; // [rsp+10h] [rbp-908h]
  int v445; // [rsp+10h] [rbp-908h]
  int v446; // [rsp+10h] [rbp-908h]
  void *v447; // [rsp+10h] [rbp-908h]
  int v448; // [rsp+10h] [rbp-908h]
  __int64 v449; // [rsp+10h] [rbp-908h]
  __int64 v450; // [rsp+10h] [rbp-908h]
  __int64 v451; // [rsp+10h] [rbp-908h]
  int v452; // [rsp+10h] [rbp-908h]
  int v453; // [rsp+10h] [rbp-908h]
  int v454; // [rsp+10h] [rbp-908h]
  int v455; // [rsp+10h] [rbp-908h]
  int v456; // [rsp+10h] [rbp-908h]
  int v457; // [rsp+10h] [rbp-908h]
  __int64 v458; // [rsp+10h] [rbp-908h]
  __int64 v459; // [rsp+10h] [rbp-908h]
  int v460; // [rsp+10h] [rbp-908h]
  int v461; // [rsp+10h] [rbp-908h]
  void *v462; // [rsp+10h] [rbp-908h]
  int v463; // [rsp+18h] [rbp-900h]
  int v464; // [rsp+18h] [rbp-900h]
  int v465; // [rsp+18h] [rbp-900h]
  int v466; // [rsp+18h] [rbp-900h]
  int v467; // [rsp+18h] [rbp-900h]
  int v468; // [rsp+18h] [rbp-900h]
  int v469; // [rsp+18h] [rbp-900h]
  int v470; // [rsp+18h] [rbp-900h]
  int v471; // [rsp+18h] [rbp-900h]
  int v472; // [rsp+18h] [rbp-900h]
  int v473; // [rsp+18h] [rbp-900h]
  int v474; // [rsp+18h] [rbp-900h]
  int v475; // [rsp+18h] [rbp-900h]
  int v476; // [rsp+18h] [rbp-900h]
  int v477; // [rsp+18h] [rbp-900h]
  int v478; // [rsp+18h] [rbp-900h]
  int v479; // [rsp+18h] [rbp-900h]
  int v480; // [rsp+18h] [rbp-900h]
  __int64 v481; // [rsp+18h] [rbp-900h]
  int v482; // [rsp+18h] [rbp-900h]
  int v483; // [rsp+18h] [rbp-900h]
  int v484; // [rsp+18h] [rbp-900h]
  int v485; // [rsp+18h] [rbp-900h]
  int v486; // [rsp+18h] [rbp-900h]
  int v487; // [rsp+18h] [rbp-900h]
  __int64 v488; // [rsp+18h] [rbp-900h]
  int v489; // [rsp+18h] [rbp-900h]
  int v490; // [rsp+18h] [rbp-900h]
  int v491; // [rsp+18h] [rbp-900h]
  int v492; // [rsp+18h] [rbp-900h]
  int v493; // [rsp+18h] [rbp-900h]
  int v494; // [rsp+18h] [rbp-900h]
  int v495; // [rsp+20h] [rbp-8F8h]
  int v496; // [rsp+20h] [rbp-8F8h]
  int v497; // [rsp+20h] [rbp-8F8h]
  int v498; // [rsp+20h] [rbp-8F8h]
  int v499; // [rsp+20h] [rbp-8F8h]
  int v500; // [rsp+20h] [rbp-8F8h]
  int v501; // [rsp+20h] [rbp-8F8h]
  int v502; // [rsp+20h] [rbp-8F8h]
  int v503; // [rsp+20h] [rbp-8F8h]
  int v504; // [rsp+20h] [rbp-8F8h]
  int v505; // [rsp+20h] [rbp-8F8h]
  int v506; // [rsp+20h] [rbp-8F8h]
  int v507; // [rsp+20h] [rbp-8F8h]
  __int64 v508; // [rsp+20h] [rbp-8F8h]
  int v509; // [rsp+20h] [rbp-8F8h]
  int v510; // [rsp+20h] [rbp-8F8h]
  int v511; // [rsp+20h] [rbp-8F8h]
  int v512; // [rsp+20h] [rbp-8F8h]
  int v513; // [rsp+20h] [rbp-8F8h]
  int v514; // [rsp+20h] [rbp-8F8h]
  int v515; // [rsp+20h] [rbp-8F8h]
  int v516; // [rsp+20h] [rbp-8F8h]
  int v517; // [rsp+20h] [rbp-8F8h]
  int v518; // [rsp+20h] [rbp-8F8h]
  int v519; // [rsp+20h] [rbp-8F8h]
  int v520; // [rsp+20h] [rbp-8F8h]
  int v521; // [rsp+20h] [rbp-8F8h]
  int v522; // [rsp+20h] [rbp-8F8h]
  int v523; // [rsp+20h] [rbp-8F8h]
  int v524; // [rsp+20h] [rbp-8F8h]
  int v525; // [rsp+20h] [rbp-8F8h]
  int v526; // [rsp+20h] [rbp-8F8h]
  int v527; // [rsp+28h] [rbp-8F0h]
  int v528; // [rsp+28h] [rbp-8F0h]
  int v529; // [rsp+28h] [rbp-8F0h]
  int v530; // [rsp+28h] [rbp-8F0h]
  int v531; // [rsp+28h] [rbp-8F0h]
  int v532; // [rsp+28h] [rbp-8F0h]
  int v533; // [rsp+28h] [rbp-8F0h]
  int v534; // [rsp+28h] [rbp-8F0h]
  int v535; // [rsp+28h] [rbp-8F0h]
  int v536; // [rsp+28h] [rbp-8F0h]
  int v537; // [rsp+28h] [rbp-8F0h]
  int v538; // [rsp+28h] [rbp-8F0h]
  int v539; // [rsp+28h] [rbp-8F0h]
  int v540; // [rsp+28h] [rbp-8F0h]
  int v541; // [rsp+28h] [rbp-8F0h]
  __int64 v542; // [rsp+28h] [rbp-8F0h]
  int v543; // [rsp+28h] [rbp-8F0h]
  int v544; // [rsp+28h] [rbp-8F0h]
  int v545; // [rsp+28h] [rbp-8F0h]
  int v546; // [rsp+28h] [rbp-8F0h]
  int v547; // [rsp+28h] [rbp-8F0h]
  int v548; // [rsp+28h] [rbp-8F0h]
  int v549; // [rsp+28h] [rbp-8F0h]
  __int64 v550; // [rsp+28h] [rbp-8F0h]
  int v551; // [rsp+28h] [rbp-8F0h]
  int v552; // [rsp+28h] [rbp-8F0h]
  int v553; // [rsp+28h] [rbp-8F0h]
  int v554; // [rsp+28h] [rbp-8F0h]
  int v555; // [rsp+28h] [rbp-8F0h]
  int v556; // [rsp+28h] [rbp-8F0h]
  int v557; // [rsp+28h] [rbp-8F0h]
  int v558; // [rsp+28h] [rbp-8F0h]
  __int64 v559; // [rsp+30h] [rbp-8E8h]
  __int64 v560; // [rsp+30h] [rbp-8E8h]
  __int64 v561; // [rsp+30h] [rbp-8E8h]
  __int64 v562; // [rsp+30h] [rbp-8E8h]
  __int64 v563; // [rsp+30h] [rbp-8E8h]
  __int64 v564; // [rsp+30h] [rbp-8E8h]
  __int64 v565; // [rsp+30h] [rbp-8E8h]
  __int64 v566; // [rsp+30h] [rbp-8E8h]
  __int64 v567; // [rsp+30h] [rbp-8E8h]
  __int64 v568; // [rsp+30h] [rbp-8E8h]
  __int64 v569; // [rsp+30h] [rbp-8E8h]
  __int64 v570; // [rsp+30h] [rbp-8E8h]
  __int64 v571; // [rsp+30h] [rbp-8E8h]
  __int64 v572; // [rsp+30h] [rbp-8E8h]
  __int64 v573; // [rsp+30h] [rbp-8E8h]
  __int64 v574; // [rsp+30h] [rbp-8E8h]
  __int64 v575; // [rsp+30h] [rbp-8E8h]
  __int64 v576; // [rsp+30h] [rbp-8E8h]
  __int64 v577; // [rsp+30h] [rbp-8E8h]
  __int64 v578; // [rsp+30h] [rbp-8E8h]
  __int64 v579; // [rsp+30h] [rbp-8E8h]
  __int64 v580; // [rsp+30h] [rbp-8E8h]
  __int64 v581; // [rsp+30h] [rbp-8E8h]
  __int64 v582; // [rsp+30h] [rbp-8E8h]
  __int64 v583; // [rsp+30h] [rbp-8E8h]
  __int64 v584; // [rsp+30h] [rbp-8E8h]
  __int64 v585; // [rsp+30h] [rbp-8E8h]
  __int64 v586; // [rsp+30h] [rbp-8E8h]
  __int64 v587; // [rsp+30h] [rbp-8E8h]
  __int64 v588; // [rsp+30h] [rbp-8E8h]
  __int64 v589; // [rsp+30h] [rbp-8E8h]
  __int64 v590; // [rsp+30h] [rbp-8E8h]
  int v591; // [rsp+38h] [rbp-8E0h]
  int v592; // [rsp+38h] [rbp-8E0h]
  int v593; // [rsp+38h] [rbp-8E0h]
  int v594; // [rsp+38h] [rbp-8E0h]
  int v595; // [rsp+38h] [rbp-8E0h]
  int v596; // [rsp+38h] [rbp-8E0h]
  int v597; // [rsp+38h] [rbp-8E0h]
  int v598; // [rsp+38h] [rbp-8E0h]
  int v599; // [rsp+38h] [rbp-8E0h]
  int v600; // [rsp+38h] [rbp-8E0h]
  int v601; // [rsp+38h] [rbp-8E0h]
  int v602; // [rsp+38h] [rbp-8E0h]
  int v603; // [rsp+38h] [rbp-8E0h]
  int v604; // [rsp+38h] [rbp-8E0h]
  int v605; // [rsp+38h] [rbp-8E0h]
  int v606; // [rsp+38h] [rbp-8E0h]
  int v607; // [rsp+38h] [rbp-8E0h]
  int v608; // [rsp+38h] [rbp-8E0h]
  int v609; // [rsp+38h] [rbp-8E0h]
  int v610; // [rsp+38h] [rbp-8E0h]
  int v611; // [rsp+38h] [rbp-8E0h]
  int v612; // [rsp+38h] [rbp-8E0h]
  int v613; // [rsp+38h] [rbp-8E0h]
  int v614; // [rsp+38h] [rbp-8E0h]
  int v615; // [rsp+38h] [rbp-8E0h]
  int v616; // [rsp+38h] [rbp-8E0h]
  int v617; // [rsp+38h] [rbp-8E0h]
  int v618; // [rsp+38h] [rbp-8E0h]
  int v619; // [rsp+38h] [rbp-8E0h]
  int v620; // [rsp+38h] [rbp-8E0h]
  int v621; // [rsp+38h] [rbp-8E0h]
  int v622; // [rsp+38h] [rbp-8E0h]
  int v623; // [rsp+40h] [rbp-8D8h]
  int v624; // [rsp+40h] [rbp-8D8h]
  int v625; // [rsp+40h] [rbp-8D8h]
  int v626; // [rsp+40h] [rbp-8D8h]
  int v627; // [rsp+40h] [rbp-8D8h]
  int v628; // [rsp+40h] [rbp-8D8h]
  int v629; // [rsp+40h] [rbp-8D8h]
  int v630; // [rsp+40h] [rbp-8D8h]
  int v631; // [rsp+40h] [rbp-8D8h]
  int v632; // [rsp+40h] [rbp-8D8h]
  int v633; // [rsp+40h] [rbp-8D8h]
  int v634; // [rsp+40h] [rbp-8D8h]
  int v635; // [rsp+40h] [rbp-8D8h]
  int v636; // [rsp+40h] [rbp-8D8h]
  int v637; // [rsp+40h] [rbp-8D8h]
  int v638; // [rsp+40h] [rbp-8D8h]
  int v639; // [rsp+40h] [rbp-8D8h]
  int v640; // [rsp+40h] [rbp-8D8h]
  int v641; // [rsp+40h] [rbp-8D8h]
  int v642; // [rsp+40h] [rbp-8D8h]
  int v643; // [rsp+40h] [rbp-8D8h]
  int v644; // [rsp+40h] [rbp-8D8h]
  int v645; // [rsp+40h] [rbp-8D8h]
  int v646; // [rsp+40h] [rbp-8D8h]
  int v647; // [rsp+40h] [rbp-8D8h]
  int v648; // [rsp+40h] [rbp-8D8h]
  int v649; // [rsp+40h] [rbp-8D8h]
  int v650; // [rsp+40h] [rbp-8D8h]
  int v651; // [rsp+40h] [rbp-8D8h]
  int v652; // [rsp+40h] [rbp-8D8h]
  int v653; // [rsp+40h] [rbp-8D8h]
  int v654; // [rsp+40h] [rbp-8D8h]
  int v655; // [rsp+48h] [rbp-8D0h]
  int v656; // [rsp+48h] [rbp-8D0h]
  int v657; // [rsp+48h] [rbp-8D0h]
  int v658; // [rsp+48h] [rbp-8D0h]
  int v659; // [rsp+48h] [rbp-8D0h]
  int v660; // [rsp+48h] [rbp-8D0h]
  int v661; // [rsp+48h] [rbp-8D0h]
  int v662; // [rsp+48h] [rbp-8D0h]
  int v663; // [rsp+48h] [rbp-8D0h]
  int v664; // [rsp+48h] [rbp-8D0h]
  int v665; // [rsp+48h] [rbp-8D0h]
  int v666; // [rsp+48h] [rbp-8D0h]
  int v667; // [rsp+48h] [rbp-8D0h]
  int v668; // [rsp+48h] [rbp-8D0h]
  int v669; // [rsp+48h] [rbp-8D0h]
  int v670; // [rsp+48h] [rbp-8D0h]
  int v671; // [rsp+48h] [rbp-8D0h]
  int v672; // [rsp+48h] [rbp-8D0h]
  int v673; // [rsp+48h] [rbp-8D0h]
  int v674; // [rsp+48h] [rbp-8D0h]
  int v675; // [rsp+48h] [rbp-8D0h]
  int v676; // [rsp+48h] [rbp-8D0h]
  int v677; // [rsp+48h] [rbp-8D0h]
  int v678; // [rsp+48h] [rbp-8D0h]
  int v679; // [rsp+48h] [rbp-8D0h]
  int v680; // [rsp+48h] [rbp-8D0h]
  int v681; // [rsp+48h] [rbp-8D0h]
  int v682; // [rsp+48h] [rbp-8D0h]
  int v683; // [rsp+48h] [rbp-8D0h]
  int v684; // [rsp+48h] [rbp-8D0h]
  int v685; // [rsp+48h] [rbp-8D0h]
  int v686; // [rsp+48h] [rbp-8D0h]
  int v687; // [rsp+50h] [rbp-8C8h]
  int v688; // [rsp+50h] [rbp-8C8h]
  int v689; // [rsp+50h] [rbp-8C8h]
  int v690; // [rsp+50h] [rbp-8C8h]
  int v691; // [rsp+50h] [rbp-8C8h]
  int v692; // [rsp+50h] [rbp-8C8h]
  int v693; // [rsp+50h] [rbp-8C8h]
  int v694; // [rsp+50h] [rbp-8C8h]
  int v695; // [rsp+50h] [rbp-8C8h]
  int v696; // [rsp+50h] [rbp-8C8h]
  int v697; // [rsp+50h] [rbp-8C8h]
  int v698; // [rsp+50h] [rbp-8C8h]
  int v699; // [rsp+50h] [rbp-8C8h]
  int v700; // [rsp+50h] [rbp-8C8h]
  int v701; // [rsp+50h] [rbp-8C8h]
  int v702; // [rsp+50h] [rbp-8C8h]
  int v703; // [rsp+50h] [rbp-8C8h]
  int v704; // [rsp+50h] [rbp-8C8h]
  int v705; // [rsp+50h] [rbp-8C8h]
  int v706; // [rsp+50h] [rbp-8C8h]
  int v707; // [rsp+50h] [rbp-8C8h]
  int v708; // [rsp+50h] [rbp-8C8h]
  int v709; // [rsp+50h] [rbp-8C8h]
  int v710; // [rsp+50h] [rbp-8C8h]
  int v711; // [rsp+50h] [rbp-8C8h]
  int v712; // [rsp+50h] [rbp-8C8h]
  int v713; // [rsp+50h] [rbp-8C8h]
  int v714; // [rsp+50h] [rbp-8C8h]
  int v715; // [rsp+50h] [rbp-8C8h]
  int v716; // [rsp+50h] [rbp-8C8h]
  int v717; // [rsp+50h] [rbp-8C8h]
  char v718; // [rsp+58h] [rbp-8C0h]
  char v719; // [rsp+58h] [rbp-8C0h]
  char v720; // [rsp+58h] [rbp-8C0h]
  char v721; // [rsp+58h] [rbp-8C0h]
  char v722; // [rsp+58h] [rbp-8C0h]
  char v723; // [rsp+58h] [rbp-8C0h]
  char v724; // [rsp+58h] [rbp-8C0h]
  char v725; // [rsp+58h] [rbp-8C0h]
  char v726; // [rsp+58h] [rbp-8C0h]
  char v727; // [rsp+58h] [rbp-8C0h]
  char v728; // [rsp+58h] [rbp-8C0h]
  char v729; // [rsp+58h] [rbp-8C0h]
  char v730; // [rsp+58h] [rbp-8C0h]
  char v731; // [rsp+58h] [rbp-8C0h]
  char v732; // [rsp+58h] [rbp-8C0h]
  char v733; // [rsp+58h] [rbp-8C0h]
  char v734; // [rsp+58h] [rbp-8C0h]
  char v735; // [rsp+58h] [rbp-8C0h]
  char v736; // [rsp+58h] [rbp-8C0h]
  char v737; // [rsp+58h] [rbp-8C0h]
  __int64 v738; // [rsp+58h] [rbp-8C0h]
  char v739; // [rsp+58h] [rbp-8C0h]
  char v740; // [rsp+58h] [rbp-8C0h]
  char v741; // [rsp+58h] [rbp-8C0h]
  _QWORD *v742; // [rsp+58h] [rbp-8C0h]
  char v743; // [rsp+58h] [rbp-8C0h]
  __int64 v744; // [rsp+58h] [rbp-8C0h]
  char v745; // [rsp+58h] [rbp-8C0h]
  char v746; // [rsp+58h] [rbp-8C0h]
  char v747; // [rsp+58h] [rbp-8C0h]
  char v748; // [rsp+58h] [rbp-8C0h]
  char v749; // [rsp+58h] [rbp-8C0h]
  __int64 v750; // [rsp+60h] [rbp-8B8h]
  __int64 v751; // [rsp+60h] [rbp-8B8h]
  __int64 v752; // [rsp+60h] [rbp-8B8h]
  __int64 v753; // [rsp+60h] [rbp-8B8h]
  __int64 v754; // [rsp+60h] [rbp-8B8h]
  __int64 v755; // [rsp+60h] [rbp-8B8h]
  __int64 v756; // [rsp+60h] [rbp-8B8h]
  __int64 v757; // [rsp+60h] [rbp-8B8h]
  __int64 v758; // [rsp+60h] [rbp-8B8h]
  __int64 v759; // [rsp+60h] [rbp-8B8h]
  __int64 v760; // [rsp+60h] [rbp-8B8h]
  __int64 v761; // [rsp+60h] [rbp-8B8h]
  __int64 v762; // [rsp+60h] [rbp-8B8h]
  __int64 v763; // [rsp+60h] [rbp-8B8h]
  __int64 v764; // [rsp+60h] [rbp-8B8h]
  __int64 v765; // [rsp+60h] [rbp-8B8h]
  __int64 v766; // [rsp+60h] [rbp-8B8h]
  __int64 v767; // [rsp+60h] [rbp-8B8h]
  __int64 v768; // [rsp+60h] [rbp-8B8h]
  __int64 v769; // [rsp+60h] [rbp-8B8h]
  __int64 v770; // [rsp+60h] [rbp-8B8h]
  __int64 v771; // [rsp+60h] [rbp-8B8h]
  __int64 v772; // [rsp+60h] [rbp-8B8h]
  __int64 v773; // [rsp+60h] [rbp-8B8h]
  __int64 v774; // [rsp+60h] [rbp-8B8h]
  __int64 v775; // [rsp+60h] [rbp-8B8h]
  __int64 v776; // [rsp+60h] [rbp-8B8h]
  _QWORD *v777; // [rsp+60h] [rbp-8B8h]
  __int64 v778; // [rsp+60h] [rbp-8B8h]
  __int64 v779; // [rsp+60h] [rbp-8B8h]
  __int64 v780; // [rsp+60h] [rbp-8B8h]
  __int64 v781; // [rsp+60h] [rbp-8B8h]
  int v782; // [rsp+68h] [rbp-8B0h]
  _QWORD *v783; // [rsp+68h] [rbp-8B0h]
  int v784; // [rsp+68h] [rbp-8B0h]
  int v785; // [rsp+68h] [rbp-8B0h]
  int v786; // [rsp+68h] [rbp-8B0h]
  int v787; // [rsp+68h] [rbp-8B0h]
  int v788; // [rsp+68h] [rbp-8B0h]
  int v789; // [rsp+68h] [rbp-8B0h]
  int v790; // [rsp+68h] [rbp-8B0h]
  int v791; // [rsp+68h] [rbp-8B0h]
  int v792; // [rsp+68h] [rbp-8B0h]
  int v793; // [rsp+68h] [rbp-8B0h]
  int v794; // [rsp+68h] [rbp-8B0h]
  int v795; // [rsp+68h] [rbp-8B0h]
  int v796; // [rsp+68h] [rbp-8B0h]
  int v797; // [rsp+68h] [rbp-8B0h]
  int v798; // [rsp+68h] [rbp-8B0h]
  int v799; // [rsp+68h] [rbp-8B0h]
  int v800; // [rsp+68h] [rbp-8B0h]
  int v801; // [rsp+68h] [rbp-8B0h]
  int v802; // [rsp+68h] [rbp-8B0h]
  int v803; // [rsp+68h] [rbp-8B0h]
  int v804; // [rsp+68h] [rbp-8B0h]
  int v805; // [rsp+68h] [rbp-8B0h]
  int v806; // [rsp+68h] [rbp-8B0h]
  int v807; // [rsp+68h] [rbp-8B0h]
  int v808; // [rsp+68h] [rbp-8B0h]
  int v809; // [rsp+68h] [rbp-8B0h]
  int v810; // [rsp+68h] [rbp-8B0h]
  int v811; // [rsp+68h] [rbp-8B0h]
  int v812; // [rsp+68h] [rbp-8B0h]
  int v813; // [rsp+68h] [rbp-8B0h]
  __int64 v814; // [rsp+70h] [rbp-8A8h]
  __int64 v815; // [rsp+70h] [rbp-8A8h]
  _QWORD *v816; // [rsp+70h] [rbp-8A8h]
  __int64 v817; // [rsp+70h] [rbp-8A8h]
  __int64 v818; // [rsp+70h] [rbp-8A8h]
  __int64 v819; // [rsp+70h] [rbp-8A8h]
  __int64 v820; // [rsp+70h] [rbp-8A8h]
  __int64 v821; // [rsp+70h] [rbp-8A8h]
  __int64 v822; // [rsp+70h] [rbp-8A8h]
  __int64 v823; // [rsp+70h] [rbp-8A8h]
  __int64 v824; // [rsp+70h] [rbp-8A8h]
  __int64 v825; // [rsp+70h] [rbp-8A8h]
  __int64 v826; // [rsp+70h] [rbp-8A8h]
  __int64 v827; // [rsp+70h] [rbp-8A8h]
  __int64 v828; // [rsp+70h] [rbp-8A8h]
  __int64 v829; // [rsp+70h] [rbp-8A8h]
  __int64 v830; // [rsp+70h] [rbp-8A8h]
  __int64 v831; // [rsp+70h] [rbp-8A8h]
  __int64 v832; // [rsp+70h] [rbp-8A8h]
  __int64 v833; // [rsp+70h] [rbp-8A8h]
  __int64 v834; // [rsp+70h] [rbp-8A8h]
  __int64 v835; // [rsp+70h] [rbp-8A8h]
  __int64 v836; // [rsp+70h] [rbp-8A8h]
  __int64 v837; // [rsp+70h] [rbp-8A8h]
  __int64 v838; // [rsp+70h] [rbp-8A8h]
  __int64 v839; // [rsp+70h] [rbp-8A8h]
  __int64 v840; // [rsp+70h] [rbp-8A8h]
  __int64 v841; // [rsp+70h] [rbp-8A8h]
  __int64 v842; // [rsp+70h] [rbp-8A8h]
  __int64 v843; // [rsp+70h] [rbp-8A8h]
  __int64 v844; // [rsp+70h] [rbp-8A8h]
  __int64 v845; // [rsp+70h] [rbp-8A8h]
  __m128i v846; // [rsp+C0h] [rbp-858h] BYREF
  ida_mcp::tools::search *v847; // [rsp+D0h] [rbp-848h]
  __int128 *v848; // [rsp+D8h] [rbp-840h]
  char *v849; // [rsp+E0h] [rbp-838h]
  char *v850; // [rsp+E8h] [rbp-830h]
  char *v851; // [rsp+F0h] [rbp-828h]
  __int64 *v852; // [rsp+F8h] [rbp-820h]
  char *v853; // [rsp+100h] [rbp-818h]
  const __m128i *v854; // [rsp+108h] [rbp-810h]
  char *v855; // [rsp+110h] [rbp-808h]
  const __m128i *v856; // [rsp+118h] [rbp-800h]
  __int128 *v857; // [rsp+120h] [rbp-7F8h]
  __int128 *v858; // [rsp+128h] [rbp-7F0h]
  __int128 *v859; // [rsp+130h] [rbp-7E8h]
  __int128 *v860; // [rsp+138h] [rbp-7E0h]
  __int128 *v861; // [rsp+140h] [rbp-7D8h]
  __int128 *v862; // [rsp+148h] [rbp-7D0h]
  __int128 *v863; // [rsp+150h] [rbp-7C8h]
  char *v864; // [rsp+158h] [rbp-7C0h]
  __int128 *v865; // [rsp+160h] [rbp-7B8h]
  __int128 *v866; // [rsp+168h] [rbp-7B0h]
  __int128 *v867; // [rsp+170h] [rbp-7A8h]
  __int128 *v868; // [rsp+178h] [rbp-7A0h]
  __int128 *v869; // [rsp+180h] [rbp-798h]
  __int128 *v870; // [rsp+188h] [rbp-790h]
  __int128 *v871; // [rsp+190h] [rbp-788h]
  __int128 *v872; // [rsp+198h] [rbp-780h]
  char *v873; // [rsp+1A0h] [rbp-778h]
  __int8 *v874; // [rsp+1A8h] [rbp-770h]
  void **v875; // [rsp+1B0h] [rbp-768h]
  __int64 *v876; // [rsp+1B8h] [rbp-760h]
  __int64 *v877; // [rsp+1C0h] [rbp-758h]
  __int64 *v878; // [rsp+1C8h] [rbp-750h]
  _QWORD *v879; // [rsp+1D0h] [rbp-748h]
  void **v880; // [rsp+1D8h] [rbp-740h]
  __int64 *v881; // [rsp+1E0h] [rbp-738h]
  __m128i *v882; // [rsp+1E8h] [rbp-730h]
  __int64 *v883; // [rsp+1F0h] [rbp-728h]
  __int64 *v884; // [rsp+1F8h] [rbp-720h]
  char *v885; // [rsp+200h] [rbp-718h]
  char *v886; // [rsp+208h] [rbp-710h]
  __m128i *v887; // [rsp+210h] [rbp-708h]
  __int128 *v888; // [rsp+218h] [rbp-700h]
  __int128 *v889; // [rsp+220h] [rbp-6F8h]
  __int64 *v890; // [rsp+228h] [rbp-6F0h]
  __int64 *v891; // [rsp+230h] [rbp-6E8h]
  char *v892; // [rsp+238h] [rbp-6E0h]
  __int64 *v893; // [rsp+240h] [rbp-6D8h]
  char *v894; // [rsp+248h] [rbp-6D0h]
  __int64 *v895; // [rsp+250h] [rbp-6C8h]
  char *v896; // [rsp+258h] [rbp-6C0h]
  char *v897; // [rsp+260h] [rbp-6B8h]
  __int8 *v898; // [rsp+268h] [rbp-6B0h]
  void **v899; // [rsp+270h] [rbp-6A8h]
  __int64 *v900; // [rsp+278h] [rbp-6A0h]
  __int64 *v901; // [rsp+280h] [rbp-698h]
  char *v902; // [rsp+288h] [rbp-690h]
  __int64 *v903; // [rsp+290h] [rbp-688h]
  __m128i *v904; // [rsp+298h] [rbp-680h]
  __m128i *v905; // [rsp+2A0h] [rbp-678h]
  _QWORD *v906; // [rsp+2A8h] [rbp-670h]
  __m128i v907; // [rsp+2B0h] [rbp-668h] BYREF
  __int64 v908; // [rsp+2C0h] [rbp-658h] BYREF
  __int64 v909; // [rsp+2C8h] [rbp-650h] BYREF
  char v910; // [rsp+2D0h] [rbp-648h]
  __int128 v911; // [rsp+2D8h] [rbp-640h] BYREF
  char v912; // [rsp+2F0h] [rbp-628h] BYREF
  __int128 v913; // [rsp+2F8h] [rbp-620h] BYREF
  char v914; // [rsp+308h] [rbp-610h]
  __int128 v915; // [rsp+310h] [rbp-608h] BYREF
  char v916; // [rsp+320h] [rbp-5F8h] BYREF
  __int128 v917; // [rsp+328h] [rbp-5F0h] BYREF
  char v918; // [rsp+338h] [rbp-5E0h]
  __int128 v919; // [rsp+340h] [rbp-5D8h] BYREF
  char v920; // [rsp+350h] [rbp-5C8h] BYREF
  __int128 v921; // [rsp+358h] [rbp-5C0h]
  char v922; // [rsp+368h] [rbp-5B0h]
  __int128 v923; // [rsp+370h] [rbp-5A8h]
  __m128i v924; // [rsp+380h] [rbp-598h] BYREF
  __int64 v925; // [rsp+390h] [rbp-588h]
  __int64 v926; // [rsp+398h] [rbp-580h] BYREF
  __int128 v927; // [rsp+3A0h] [rbp-578h] BYREF
  char v928; // [rsp+3B0h] [rbp-568h] BYREF
  __int128 v929; // [rsp+3B8h] [rbp-560h] BYREF
  __int64 v930; // [rsp+3C8h] [rbp-550h] BYREF
  __int128 v931; // [rsp+3D0h] [rbp-548h] BYREF
  char v932; // [rsp+3E0h] [rbp-538h] BYREF
  __int128 v933; // [rsp+3E8h] [rbp-530h] BYREF
  char v934; // [rsp+3F8h] [rbp-520h]
  __int128 v935; // [rsp+400h] [rbp-518h] BYREF
  __m128i v936; // [rsp+410h] [rbp-508h] BYREF
  __int64 v937; // [rsp+420h] [rbp-4F8h]
  __int64 v938; // [rsp+428h] [rbp-4F0h] BYREF
  __int128 v939; // [rsp+430h] [rbp-4E8h] BYREF
  __int64 v940; // [rsp+440h] [rbp-4D8h] BYREF
  __int128 v941; // [rsp+448h] [rbp-4D0h] BYREF
  __int64 v942; // [rsp+458h] [rbp-4C0h] BYREF
  char v943; // [rsp+460h] [rbp-4B8h] BYREF
  __int64 v944; // [rsp+468h] [rbp-4B0h]
  char v945; // [rsp+470h] [rbp-4A8h] BYREF
  __int128 v946; // [rsp+478h] [rbp-4A0h]
  __int64 v947; // [rsp+488h] [rbp-490h] BYREF
  __int128 v948; // [rsp+490h] [rbp-488h] BYREF
  char v949; // [rsp+4A0h] [rbp-478h] BYREF
  __int128 v950; // [rsp+4A8h] [rbp-470h] BYREF
  char v951; // [rsp+4B8h] [rbp-460h]
  __int128 v952; // [rsp+4C0h] [rbp-458h]
  __m128i v953; // [rsp+4D0h] [rbp-448h] BYREF
  __int64 v954; // [rsp+4E0h] [rbp-438h]
  __int64 v955; // [rsp+4E8h] [rbp-430h] BYREF
  __int128 v956; // [rsp+4F0h] [rbp-428h] BYREF
  __int64 v957; // [rsp+500h] [rbp-418h] BYREF
  __int128 v958; // [rsp+508h] [rbp-410h] BYREF
  __int64 v959; // [rsp+518h] [rbp-400h] BYREF
  char v960; // [rsp+520h] [rbp-3F8h] BYREF
  __int64 v961; // [rsp+528h] [rbp-3F0h]
  char v962; // [rsp+530h] [rbp-3E8h] BYREF
  __int128 v963; // [rsp+538h] [rbp-3E0h] BYREF
  __int64 v964; // [rsp+548h] [rbp-3D0h] BYREF
  __int128 v965; // [rsp+550h] [rbp-3C8h] BYREF
  char v966; // [rsp+560h] [rbp-3B8h] BYREF
  __int128 v967; // [rsp+568h] [rbp-3B0h] BYREF
  char v968; // [rsp+578h] [rbp-3A0h]
  __int128 v969; // [rsp+580h] [rbp-398h]
  __m128i v970; // [rsp+590h] [rbp-388h] BYREF
  __int64 v971; // [rsp+5A0h] [rbp-378h]
  char v972; // [rsp+5A8h] [rbp-370h] BYREF
  char v973; // [rsp+5B0h] [rbp-368h] BYREF
  __int64 v974; // [rsp+5B8h] [rbp-360h]
  __int64 v975; // [rsp+5C0h] [rbp-358h] BYREF
  __int128 v976; // [rsp+5C8h] [rbp-350h]
  __int64 v977; // [rsp+5D8h] [rbp-340h] BYREF
  char v978; // [rsp+5E0h] [rbp-338h] BYREF
  __int64 v979; // [rsp+5E8h] [rbp-330h]
  char v980; // [rsp+5F0h] [rbp-328h] BYREF
  __int128 v981; // [rsp+5F8h] [rbp-320h] BYREF
  __int64 v982; // [rsp+608h] [rbp-310h] BYREF
  __int128 v983; // [rsp+610h] [rbp-308h] BYREF
  __int64 v984; // [rsp+620h] [rbp-2F8h] BYREF
  __int128 v985; // [rsp+628h] [rbp-2F0h]
  char v986; // [rsp+638h] [rbp-2E0h]
  __int128 v987; // [rsp+640h] [rbp-2D8h] BYREF
  char v988; // [rsp+650h] [rbp-2C8h] BYREF
  __int128 v989; // [rsp+658h] [rbp-2C0h] BYREF
  __int64 v990; // [rsp+668h] [rbp-2B0h]
  __int128 v991; // [rsp+670h] [rbp-2A8h] BYREF
  __int64 v992; // [rsp+680h] [rbp-298h] BYREF
  __int128 v993; // [rsp+688h] [rbp-290h] BYREF
  __int64 v994; // [rsp+698h] [rbp-280h] BYREF
  char v995; // [rsp+6A0h] [rbp-278h] BYREF
  __int64 v996; // [rsp+6A8h] [rbp-270h]
  char v997; // [rsp+6B0h] [rbp-268h] BYREF
  __int128 v998; // [rsp+6B8h] [rbp-260h] BYREF
  __int64 v999; // [rsp+6C8h] [rbp-250h] BYREF
  char v1000; // [rsp+6D0h] [rbp-248h] BYREF
  __int64 v1001; // [rsp+6D8h] [rbp-240h]
  char v1002; // [rsp+6E0h] [rbp-238h] BYREF
  __int128 v1003; // [rsp+6E8h] [rbp-230h] BYREF
  __m128i v1004; // [rsp+6F8h] [rbp-220h] BYREF
  __int64 v1005; // [rsp+708h] [rbp-210h]
  __int64 v1006; // [rsp+710h] [rbp-208h] BYREF
  __int128 v1007; // [rsp+718h] [rbp-200h]
  __m128i v1008; // [rsp+728h] [rbp-1F0h] BYREF
  __int64 v1009; // [rsp+738h] [rbp-1E0h]
  _QWORD v1010[3]; // [rsp+740h] [rbp-1D8h] BYREF
  char v1011; // [rsp+758h] [rbp-1C0h] BYREF
  __int64 v1012; // [rsp+760h] [rbp-1B8h] BYREF
  __int128 v1013; // [rsp+768h] [rbp-1B0h]
  __m128i v1014; // [rsp+778h] [rbp-1A0h] BYREF
  __int64 v1015; // [rsp+788h] [rbp-190h]
  _QWORD v1016[2]; // [rsp+790h] [rbp-188h] BYREF
  __int64 v1017; // [rsp+7A0h] [rbp-178h]
  char v1018; // [rsp+7A8h] [rbp-170h] BYREF
  void *v1019; // [rsp+7B0h] [rbp-168h] BYREF
  __int64 v1020; // [rsp+7B8h] [rbp-160h]
  __m128i v1021; // [rsp+7C0h] [rbp-158h] BYREF
  __int64 v1022; // [rsp+7D8h] [rbp-140h]
  _QWORD v1023[2]; // [rsp+7E0h] [rbp-138h] BYREF
  __int64 v1024; // [rsp+7F0h] [rbp-128h]
  _QWORD v1025[2]; // [rsp+7F8h] [rbp-120h] BYREF
  __int64 v1026; // [rsp+808h] [rbp-110h]
  _QWORD v1027[3]; // [rsp+810h] [rbp-108h] BYREF
  char v1028; // [rsp+828h] [rbp-F0h] BYREF
  void *v1029; // [rsp+830h] [rbp-E8h] BYREF
  __int64 v1030; // [rsp+838h] [rbp-E0h]
  _QWORD v1031[2]; // [rsp+840h] [rbp-D8h] BYREF
  void *v1032; // [rsp+850h] [rbp-C8h] BYREF
  __int64 v1033; // [rsp+858h] [rbp-C0h]
  _QWORD v1034[2]; // [rsp+860h] [rbp-B8h] BYREF
  char v1035; // [rsp+870h] [rbp-A8h]
  __int64 v1036; // [rsp+878h] [rbp-A0h] BYREF
  char v1037; // [rsp+890h] [rbp-88h]
  ida_mcp::tools::search *v1038; // [rsp+898h] [rbp-80h]
  _QWORD v1039[2]; // [rsp+8A8h] [rbp-70h] BYREF
  char v1040; // [rsp+8B8h] [rbp-60h]
  char v1041; // [rsp+8C8h] [rbp-50h]
  unsigned __int64 v1042; // [rsp+8D8h] [rbp-40h]

  v847 = this;
  v1042 = __readfsqword(0x28u);
  v1029 = v1031;
  v1030 = 0;
  LOBYTE(v1031[0]) = 0;
  v1032 = v1034;
  v1033 = 0;
  LOBYTE(v1034[0]) = 0;
  v1035 = 0;
  v1036 = 0;
  v1037 = 0;
  v1041 = 0;
  std::string::_M_replace();
  v880 = &v1032;
  std::string::_M_replace();
  v881 = (__int64 *)&v913;
  *(_QWORD *)&v913 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v912 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v914 = 0;
  *(_QWORD *)&v915 = 0;
  v887 = (__m128i *)&v915;
  v913 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v914 = 3;
  v3 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v3, "object", v4, v5, v6, v7, v282, (int)&v1029, (__int64)v1034);
  v915 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1012,
    (const __m128i *)&v912);
  *((_QWORD *)&v1013 + 1) = 0;
  v1002 = 0;
  *(_QWORD *)&v1003 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1002 = 3;
  v8 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v8, "properties", v9, v10, v11, v12, (int)&v1003, v342, v402);
  v928 = 0;
  v857 = &v929;
  *(_QWORD *)&v929 = 0;
  v1003 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v928 = 3;
  v13 = operator new(0x20u);
  strcpy((char *)(v13 + 16), "pattern");
  *(_QWORD *)v13 = v13 + 16;
  *(_QWORD *)(v13 + 8) = 7;
  v916 = 0;
  *(_QWORD *)&v917 = 0;
  v888 = &v917;
  v929 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v916 = 3;
  v14 = operator new(0x20u);
  *(_QWORD *)v14 = v14 + 16;
  strcpy((char *)(v14 + 16), "type");
  *(_QWORD *)(v14 + 8) = 4;
  v918 = 0;
  *(_QWORD *)&v919 = 0;
  v889 = &v919;
  v917 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v918 = 3;
  v15 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v15, "string", v16, v17, v18, v19, v283, v343, v403);
  v919 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v924,
    (const __m128i *)&v916);
  v925 = 0;
  v864 = &v920;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v921 + 1) = 0;
  v922 = 0;
  *(_QWORD *)&v923 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v922 = 3;
  v20 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v20, "Search pattern", v21, v22, v23, v24, v284, v344, v404);
  v923 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v926,
    (const __m128i *)&v920);
  *((_QWORD *)&v927 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v930,
    &v924);
  *((_QWORD *)&v931 + 1) = 0;
  v850 = &v928;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1019,
    (const __m128i *)&v928);
  v1021.m128i_i64[0] = 0;
  v945 = 0;
  *(_QWORD *)&v946 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v945 = 3;
  v25 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v25, "start_address", v26, v27, v28, v29, v285, v345, v405);
  v932 = 0;
  v858 = &v933;
  *(_QWORD *)&v933 = 0;
  v946 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v932 = 3;
  v30 = operator new(0x20u);
  *(_QWORD *)v30 = v30 + 16;
  strcpy((char *)(v30 + 16), "type");
  *(_QWORD *)(v30 + 8) = 4;
  v934 = 0;
  *(_QWORD *)&v935 = 0;
  v859 = &v935;
  v933 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v934 = 3;
  v31 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v31, "string", v32, v33, v34, v35, v286, v346, v406);
  v851 = &v932;
  v852 = &v940;
  v935 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v940,
    (const __m128i *)&v932);
  *((_QWORD *)&v941 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  v937 = 0;
  LOBYTE(v938) = 0;
  *(_QWORD *)&v939 = 0;
  v860 = &v939;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v938) = 3;
  v36 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v36, "Hex start", v37, v38, v39, v40, v287, v347, v407);
  v900 = &v942;
  v939 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v942,
    &v936);
  v944 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v947,
    (const __m128i *)&v940);
  *((_QWORD *)&v948 + 1) = 0;
  v886 = &v945;
  v878 = &v1021.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1021.m128i_i64[1],
    (const __m128i *)&v945);
  v1022 = 0;
  v856 = (const __m128i *)&v962;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v963 + 1) = 0;
  v949 = 0;
  *(_QWORD *)&v950 = 0;
  v861 = &v950;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v949 = 3;
  v41 = operator new(0x20u);
  *(_QWORD *)v41 = v41 + 16;
  strcpy((char *)(v41 + 16), "type");
  *(_QWORD *)(v41 + 8) = 4;
  v951 = 0;
  *(_QWORD *)&v952 = 0;
  v950 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v951 = 3;
  v42 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v42, "string", v43, v44, v45, v46, v288, v348, v408);
  v853 = &v949;
  v854 = (const __m128i *)&v957;
  v952 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v957,
    (const __m128i *)&v949);
  *((_QWORD *)&v958 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  v954 = 0;
  LOBYTE(v955) = 0;
  *(_QWORD *)&v956 = 0;
  v862 = &v956;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v955) = 3;
  v47 = operator new(0x20u);
  strcpy((char *)(v47 + 16), "Hex end");
  *(_QWORD *)v47 = v47 + 16;
  *(_QWORD *)(v47 + 8) = 7;
  v901 = &v959;
  v956 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v959,
    &v953);
  v961 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v964,
    v854);
  *((_QWORD *)&v965 + 1) = 0;
  v879 = v1023;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1023,
    v856);
  v1024 = 0;
  v980 = 0;
  *(_QWORD *)&v981 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v980 = 3;
  v48 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v48, "limit", v49, v50, v51, v52, v289, v349, v409);
  v966 = 0;
  v863 = &v967;
  *(_QWORD *)&v967 = 0;
  v981 = (unsigned __int64)v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v966 = 3;
  v53 = operator new(0x20u);
  *(_QWORD *)v53 = v53 + 16;
  strcpy((char *)(v53 + 16), "type");
  *(_QWORD *)(v53 + 8) = 4;
  v968 = 0;
  *(_QWORD *)&v969 = 0;
  v967 = (unsigned __int64)v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v968 = 3;
  v54 = operator new(0x20u);
  strcpy((char *)(v54 + 16), "integer");
  *(_QWORD *)v54 = v54 + 16;
  *(_QWORD *)(v54 + 8) = 7;
  v855 = &v966;
  v969 = (unsigned __int64)v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v975,
    (const __m128i *)&v966);
  *((_QWORD *)&v976 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  v971 = 0;
  v902 = &v972;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  v974 = 0;
  v903 = &v977;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v977,
    &v970);
  v979 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v982,
    (const __m128i *)&v975);
  *((_QWORD *)&v983 + 1) = 0;
  v875 = (void **)v1025;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1025,
    (const __m128i *)&v980);
  v1026 = 0;
  v997 = 0;
  *(_QWORD *)&v998 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v997 = 3;
  v55 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v55, "case_insensitive", v56, v57, v58, v59, v290, v350, v410);
  v998 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v984);
  *((_QWORD *)&v985 + 1) = 0;
  v986 = 0;
  *(_QWORD *)&v987 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v986 = 3;
  v60 = operator new(0x20u);
  strcpy((char *)(v60 + 16), "boolean");
  *(_QWORD *)v60 = v60 + 16;
  *(_QWORD *)(v60 + 8) = 7;
  v987 = (unsigned __int64)v60;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v992,
    (const __m128i *)&v984);
  *((_QWORD *)&v993 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v989 + 1) = 0;
  LOBYTE(v990) = 0;
  *(_QWORD *)&v991 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v990) = 3;
  v61 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v61, "Case insensitive", v62, v63, v64, v65, v291, v351, v411);
  v876 = &v994;
  v991 = (unsigned __int64)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v994,
    (const __m128i *)&v988);
  v996 = 0;
  v877 = &v999;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v999,
    (const __m128i *)&v992);
  v1001 = 0;
  v899 = (void **)v1027;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1027,
    (const __m128i *)&v997);
  v1027[2] = 0;
  v904 = &v1004;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1004,
    (__int64)&v1019,
    5,
    v66,
    v67,
    v68,
    v292,
    v352,
    v412,
    (int)&v992,
    (int)&v975,
    (int)&v984,
    (__int64)&v981,
    (int)&v987,
    (int)&v991,
    (int)&v998,
    v687,
    (char)&v997,
    (__int64)&v980,
    (int)&v924,
    (__int64)&v936);
  v1005 = 0;
  v849 = &v1002;
  v905 = &v1014;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1014,
    (const __m128i *)&v1002);
  v1015 = 0;
  LOBYTE(v1006) = 0;
  *(_QWORD *)&v1007 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1006) = 3;
  v69 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v69, "required", v70, v71, v72, v73, v293, v353, v413);
  *(_QWORD *)&v911 = 0;
  v1007 = (unsigned __int64)v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v910 = 3;
  v74 = operator new(0x20u);
  *(_QWORD *)v74 = v74 + 16;
  strcpy((char *)(v74 + 16), "pattern");
  v75 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v74 + 8) = 7;
  v882 = &v907;
  v846 = (__m128i)v75;
  v911 = (unsigned __int64)v74;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v76 = _mm_load_si128(&v907);
  v1009 = 0;
  v906 = v1016;
  v1008 = v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (const __m128i *)&v1006);
  v1017 = 0;
  LOBYTE(v908) = 0;
  v883 = &v908;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v908,
    (__int64)&v1012,
    3,
    v77,
    v78,
    v79,
    v294,
    v354,
    v414,
    v463,
    v495,
    v527,
    v559,
    v591,
    v623,
    v655,
    (int)&v911,
    v718,
    v750,
    v782,
    v814);
  v80 = v1035;
  v81 = (__int64 *)&v1018;
  v82 = v909;
  v1035 = v908;
  LOBYTE(v908) = v80;
  v909 = v1036;
  v1036 = v82;
  v884 = &v909;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v81 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v81 != &v1012 );
  v83 = (void **)&v1028;
  v898 = &v1008.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v874 = &v1004.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v83 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v83 != &v1019 );
  v873 = &v1000;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v885 = &v995;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v848 = &v993;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v872 = &v983;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v897 = &v978;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v896 = &v973;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v895 = &v970.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v871 = &v965;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v870 = &v963;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v894 = &v960;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v869 = &v958;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v893 = &v953.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v868 = &v948;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v892 = &v943;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v867 = &v941;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v891 = &v936.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v866 = &v931;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v865 = &v927;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v890 = &v924.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v84 = _mm_load_si128(&v846);
  v1020 = 0;
  v1019 = ida_mcp::tools::search::search_disassembly;
  v1021 = v84;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1021.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1021.m128i_i64[0])(&v1019, &v1019, 3);
  if ( v1041 && v1040 && v1038 != (ida_mcp::tools::search *)v1039 )
    operator delete(v1038, v1039[0] + 1LL);
  if ( v1037 )
  {
    v1037 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v881 = &v1036;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v1032 != v415 )
    operator delete(v1032, v1034[0] + 1LL);
  if ( v1029 != v1031 )
    operator delete(v1029, v1031[0] + 1LL);
  v1029 = v1031;
  v1030 = 0;
  LOBYTE(v1031[0]) = 0;
  v1032 = v415;
  v1033 = 0;
  LOBYTE(v1034[0]) = 0;
  v1035 = 0;
  v1036 = 0;
  v1037 = 0;
  v1041 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v783);
  v925 = 0;
  LOBYTE(v926) = 0;
  *(_QWORD *)&v927 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v926) = 3;
  v85 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v85, "object", v86, v87, v88, v89, v295, v355, (__int64)v415);
  v927 = (unsigned __int64)v85;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1012,
    (__int64)v783,
    2,
    v90,
    v91,
    v92,
    v296,
    v356,
    v416,
    v464,
    v496,
    v528,
    v560,
    v592,
    v624,
    v656,
    (int)&v989,
    v719,
    v751,
    (int)v783,
    v815);
  *((_QWORD *)&v1013 + 1) = 0;
  v997 = 0;
  *(_QWORD *)&v998 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v997 = 3;
  v93 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v93, "properties", v94, v95, v96, v97, v297, v357, v417);
  LOBYTE(v940) = 0;
  *(_QWORD *)&v941 = 0;
  v998 = (unsigned __int64)v93;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v940) = 3;
  v98 = operator new(0x20u);
  strcpy((char *)(v98 + 16), "pattern");
  v99 = v850;
  *(_QWORD *)v98 = v98 + 16;
  *(_QWORD *)(v98 + 8) = 7;
  v941 = (unsigned __int64)v98;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v99);
  *((_QWORD *)&v929 + 1) = 0;
  LOBYTE(v930) = 0;
  *(_QWORD *)&v931 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v930) = 3;
  v100 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v100, "string", v101, v102, v103, v104, v298, v358, v418);
  v931 = (unsigned __int64)v100;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v816,
    (__int64)v850,
    2,
    v105,
    v106,
    v107,
    v299,
    v359,
    v419,
    v465,
    v497,
    v529,
    v561,
    v593,
    v625,
    v657,
    v688,
    v720,
    v752,
    v784,
    (__int64)v816);
  v937 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v933 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v935 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v938,
    (__int64)v851,
    2,
    v108,
    v109,
    v110,
    v300,
    v360,
    v420,
    v466,
    v498,
    v530,
    v562,
    v594,
    v626,
    v658,
    v689,
    v721,
    v753,
    v785,
    v817);
  *((_QWORD *)&v939 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v900,
    v818,
    2,
    v111,
    v112,
    v113,
    v301,
    v361,
    v421,
    v467,
    v499,
    v531,
    v563,
    v595,
    v627,
    v659,
    v690,
    v722,
    v754,
    v786,
    v818);
  v944 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1019,
    (__int64)v852,
    2,
    v114,
    v115,
    v116,
    v302,
    v362,
    v422,
    v468,
    v500,
    v532,
    v564,
    v596,
    v628,
    v660,
    v691,
    v723,
    v755,
    v787,
    v819);
  v1021.m128i_i64[0] = 0;
  LOBYTE(v957) = 0;
  *(_QWORD *)&v958 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v957) = 3;
  v117 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v117, "start_address", v118, v119, v120, v121, v303, v363, v423);
  v945 = 0;
  *(_QWORD *)&v946 = 0;
  v958 = (unsigned __int64)v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v945 = 3;
  v122 = operator new(0x20u);
  *(_QWORD *)v122 = v122 + 16;
  strcpy((char *)(v122 + 16), "type");
  *(_QWORD *)(v122 + 8) = 4;
  LOBYTE(v947) = 0;
  *(_QWORD *)&v948 = 0;
  v946 = (unsigned __int64)v122;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v947) = 3;
  v123 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v123, "string", v124, v125, v126, v127, v304, v364, v424);
  v948 = (unsigned __int64)v123;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v953,
    (__int64)v886,
    2,
    v128,
    v129,
    v130,
    v305,
    v365,
    v425,
    v469,
    v501,
    v533,
    v565,
    v597,
    v629,
    v661,
    v692,
    v724,
    v756,
    v788,
    v820);
  v954 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v950 + 1) = 0;
  v951 = 0;
  *(_QWORD *)&v952 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v951 = 3;
  v131 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v131, "Hex start", v132, v133, v134, v135, v306, v366, v426);
  v952 = (unsigned __int64)v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v955,
    (__int64)v853,
    2,
    v136,
    v137,
    v138,
    v307,
    v367,
    v427,
    v470,
    v502,
    v534,
    v566,
    v598,
    v630,
    v662,
    v693,
    v725,
    v757,
    v789,
    v821);
  *((_QWORD *)&v956 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v901,
    (__int64)&v953,
    2,
    v139,
    v140,
    v141,
    v308,
    v368,
    v428,
    v471,
    v503,
    v535,
    v567,
    v599,
    v631,
    v663,
    v694,
    v726,
    v758,
    v790,
    v822);
  v961 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v878,
    (__int64)v854,
    2,
    v142,
    v143,
    v144,
    v309,
    v369,
    v429,
    v472,
    v504,
    v536,
    v568,
    v600,
    v632,
    v664,
    v695,
    v727,
    v759,
    v791,
    v823);
  v1022 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v976 + 1) = 0;
  v962 = 0;
  *(_QWORD *)&v963 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v962 = 3;
  v145 = operator new(0x20u);
  *(_QWORD *)v145 = v145 + 16;
  strcpy((char *)(v145 + 16), "type");
  *(_QWORD *)(v145 + 8) = 4;
  LOBYTE(v964) = 0;
  *(_QWORD *)&v965 = 0;
  v963 = (unsigned __int64)v145;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v964) = 3;
  v146 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v146, "string", v147, v148, v149, v150, v310, v370, v430);
  v965 = (unsigned __int64)v146;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v970,
    (__int64)v856,
    2,
    v151,
    v152,
    v153,
    v311,
    v371,
    v431,
    v473,
    v505,
    v537,
    v569,
    v601,
    v633,
    v665,
    v696,
    v728,
    v760,
    v792,
    v824);
  v971 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v967 + 1) = 0;
  v968 = 0;
  *(_QWORD *)&v969 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v968 = 3;
  v154 = operator new(0x20u);
  strcpy((char *)(v154 + 16), "Hex end");
  v155 = (__int64)v855;
  *(_QWORD *)v154 = v154 + 16;
  v156 = v902;
  *(_QWORD *)(v154 + 8) = 7;
  v969 = (unsigned __int64)v154;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v156,
    v155,
    2,
    v157,
    v158,
    v159,
    v312,
    v372,
    v432,
    v474,
    v506,
    v538,
    v570,
    v602,
    v634,
    v666,
    v697,
    v729,
    v761,
    v793,
    v825);
  v974 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v903,
    (__int64)&v970,
    2,
    v160,
    v161,
    v162,
    v313,
    v373,
    v433,
    v475,
    v507,
    v539,
    v571,
    v603,
    v635,
    v667,
    v698,
    v730,
    v762,
    v794,
    v826);
  v979 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v879,
    v508,
    2,
    v163,
    v164,
    v165,
    v314,
    v374,
    v434,
    v476,
    v508,
    v540,
    v572,
    v604,
    v636,
    v668,
    v699,
    v731,
    v763,
    v795,
    v827);
  v1024 = 0;
  LOBYTE(v992) = 0;
  *(_QWORD *)&v993 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v992) = 3;
  v166 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v166, "limit", v167, v168, v169, v170, v315, v375, v435);
  v980 = 0;
  *(_QWORD *)&v981 = 0;
  v993 = (unsigned __int64)v166;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v980 = 3;
  v171 = operator new(0x20u);
  *(_QWORD *)v171 = v171 + 16;
  strcpy((char *)(v171 + 16), "type");
  *(_QWORD *)(v171 + 8) = 4;
  LOBYTE(v982) = 0;
  *(_QWORD *)&v983 = 0;
  v981 = (unsigned __int64)v171;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v982) = 3;
  v172 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v172, "number", v173, v174, v175, v176, v316, v376, v436);
  v983 = (unsigned __int64)v172;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1006,
    v764,
    2,
    v177,
    v178,
    v179,
    v317,
    v377,
    v437,
    v477,
    v509,
    v541,
    v573,
    v605,
    v637,
    v669,
    v700,
    v732,
    v764,
    v796,
    v828);
  *((_QWORD *)&v1007 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v985 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v987 + 1) = 0;
  v887 = &v1008;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1008,
    v542,
    2,
    v180,
    v181,
    v182,
    v318,
    v378,
    v438,
    v478,
    v510,
    v542,
    v574,
    v606,
    v638,
    v670,
    v701,
    v733,
    v765,
    v797,
    v829);
  v1009 = 0;
  v988 = 0;
  *(_QWORD *)&v989 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v988 = 3;
  v183 = operator new(0x20u);
  strcpy((char *)(v183 + 16), "default");
  *(_QWORD *)v183 = v183 + 16;
  *(_QWORD *)(v183 + 8) = 7;
  v990 = 5;
  v991 = 0x64u;
  v989 = (unsigned __int64)v183;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1010,
    (__int64)&v988,
    2,
    v184,
    v185,
    v186,
    v319,
    v379,
    v439,
    v479,
    v511,
    v543,
    v575,
    v607,
    v639,
    v671,
    v702,
    v734,
    v766,
    v798,
    v830);
  v1010[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v876,
    (__int64)&v1006,
    3,
    v187,
    v188,
    v189,
    v320,
    v380,
    v440,
    v480,
    v512,
    v544,
    v576,
    v608,
    v640,
    v672,
    v703,
    v735,
    v767,
    v799,
    v831);
  v996 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v875,
    v481,
    2,
    v190,
    v191,
    v192,
    v321,
    v381,
    v441,
    v481,
    v513,
    v545,
    v577,
    v609,
    v641,
    v673,
    v704,
    v736,
    v768,
    v800,
    v832);
  v1026 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v877,
    (__int64)&v1019,
    4,
    v193,
    v194,
    v195,
    v322,
    v382,
    v442,
    v482,
    v514,
    v546,
    v578,
    v610,
    v642,
    v674,
    v705,
    v737,
    v769,
    v801,
    v833);
  v1001 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v905,
    v738,
    2,
    v196,
    v197,
    v198,
    v323,
    v383,
    v443,
    v483,
    v515,
    v547,
    v579,
    v611,
    v643,
    v675,
    v706,
    v738,
    v770,
    v802,
    v834);
  v1015 = 0;
  v1002 = 0;
  *(_QWORD *)&v1003 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1002 = 3;
  v199 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v199, "required", v200, v201, v202, v203, v324, v384, v444);
  v920 = 0;
  *(_QWORD *)&v921 = 0;
  v1003 = (unsigned __int64)v199;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v920 = 3;
  v204 = operator new(0x20u);
  *(_QWORD *)v204 = v204 + 16;
  strcpy((char *)(v204 + 16), "pattern");
  *(_QWORD *)(v204 + 8) = 7;
  v921 = (unsigned __int64)v204;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v205 = _mm_load_si128(&v907);
  v1005 = 0;
  v1004 = v205;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v906,
    (__int64)v849,
    2,
    v206,
    v207,
    v208,
    v325,
    v385,
    v445,
    v484,
    v516,
    v548,
    v580,
    v612,
    v644,
    v676,
    v707,
    v739,
    v771,
    v803,
    v835);
  v1017 = 0;
  LOBYTE(v908) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v883,
    (__int64)&v1012,
    3,
    v209,
    v210,
    v211,
    v326,
    v386,
    v446,
    v485,
    v517,
    v549,
    v581,
    v613,
    v645,
    v677,
    v708,
    v740,
    v772,
    v804,
    v836);
  LOBYTE(v155) = v1035;
  v212 = (__int64 *)&v1018;
  v1035 = v908;
  v213 = v1036;
  LOBYTE(v908) = v155;
  v1036 = v909;
  v909 = v213;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v212 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v212 != &v1012 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v214 = v899;
  do
  {
    v214 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v214 != &v1019 );
  v215 = (__int64 *)&v1011;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v215 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v215 != &v1006 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v216 = _mm_load_si128(&v846);
  v1020 = 0;
  v1019 = ida_mcp::tools::search::search_bytes_impl;
  v1021 = v216;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1021.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1021.m128i_i64[0])(&v1019, &v1019, 3);
  if ( v1041 && v1040 && v1038 != (ida_mcp::tools::search *)v1039 )
    operator delete(v1038, v1039[0] + 1LL);
  if ( v1037 )
  {
    v1037 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v1032 != v447 )
    operator delete(v1032, v1034[0] + 1LL);
  if ( v1029 != v1031 )
    operator delete(v1029, v1031[0] + 1LL);
  v1029 = v1031;
  v1030 = 0;
  LOBYTE(v1031[0]) = 0;
  v1032 = v447;
  v1033 = 0;
  LOBYTE(v1034[0]) = 0;
  v1035 = 0;
  v1036 = 0;
  v1037 = 0;
  v1041 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  LOBYTE(v984) = 0;
  *(_QWORD *)&v985 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v984) = 3;
  v217 = operator new(0x20u);
  *(_QWORD *)v217 = v217 + 16;
  strcpy((char *)(v217 + 16), "type");
  *(_QWORD *)(v217 + 8) = 4;
  v986 = 0;
  *(_QWORD *)&v987 = 0;
  v985 = (unsigned __int64)v217;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v986 = 3;
  v218 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v218, "object", v219, v220, v221, v222, v327, v387, (__int64)v447);
  v987 = (unsigned __int64)v218;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1019,
    v550,
    2,
    v223,
    v224,
    v225,
    v328,
    v388,
    v448,
    v486,
    v518,
    v550,
    v582,
    v614,
    v646,
    v678,
    v709,
    v741,
    v773,
    v805,
    v837);
  v1021.m128i_i64[0] = 0;
  LOBYTE(v1006) = 0;
  *(_QWORD *)&v1007 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1006) = 3;
  v226 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v226, "properties", v227, v228, v229, v230, v329, v389, v449);
  v1002 = 0;
  *(_QWORD *)&v1003 = 0;
  v1007 = (unsigned __int64)v226;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1002 = 3;
  v231 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v231, "address", v232, v233, v234, v235, v330, v390, v450);
  v988 = 0;
  *(_QWORD *)&v989 = 0;
  v1003 = (unsigned __int64)v231;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v988 = 3;
  v236 = operator new(0x20u);
  *(_QWORD *)v236 = v236 + 16;
  strcpy((char *)(v236 + 16), "type");
  *(_QWORD *)(v236 + 8) = 4;
  LOBYTE(v990) = 0;
  *(_QWORD *)&v991 = 0;
  v989 = (unsigned __int64)v236;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v990) = 3;
  v237 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v237, "string", v238, v239, v240, v241, v331, v391, v451);
  v991 = (unsigned __int64)v237;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v742,
    (__int64)&v988,
    2,
    v242,
    v243,
    v244,
    v332,
    v392,
    v452,
    v487,
    v519,
    v551,
    v583,
    v615,
    v647,
    v679,
    v710,
    (char)v742,
    v774,
    v806,
    v838);
  *((_QWORD *)&v998 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v993 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  v996 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v877,
    v488,
    2,
    v245,
    v246,
    v247,
    v333,
    v393,
    v453,
    v488,
    v520,
    v552,
    v584,
    v616,
    v648,
    v680,
    v711,
    v743,
    v775,
    v807,
    v839);
  v1001 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v904,
    v744,
    2,
    v248,
    v249,
    v250,
    v334,
    v394,
    v454,
    v489,
    v521,
    v553,
    v585,
    v617,
    v649,
    v681,
    v712,
    v744,
    v776,
    v808,
    v840);
  v1005 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v777,
    (__int64)v849,
    2,
    v251,
    v252,
    v253,
    v335,
    v395,
    v455,
    v490,
    v522,
    v554,
    v586,
    v618,
    v650,
    v682,
    v713,
    v745,
    (__int64)v777,
    v809,
    v841);
  *((_QWORD *)&v981 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v887,
    v778,
    1,
    v254,
    v255,
    v256,
    v336,
    v396,
    v456,
    v491,
    v523,
    v555,
    v587,
    v619,
    v651,
    v683,
    v714,
    v746,
    v778,
    v810,
    v842);
  v1009 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v878,
    (__int64)&v1006,
    2,
    v257,
    v258,
    v259,
    v337,
    v397,
    v457,
    v492,
    v524,
    v556,
    v588,
    v620,
    v652,
    v684,
    v715,
    v747,
    v779,
    v811,
    v843);
  v1022 = 0;
  LOBYTE(v1012) = 0;
  *(_QWORD *)&v1013 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1012) = 3;
  v260 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v260, "required", v261, v262, v263, v264, v338, v398, v458);
  LOBYTE(v975) = 0;
  *(_QWORD *)&v976 = 0;
  v1013 = (unsigned __int64)v260;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v975) = 3;
  v265 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v265, "address", v266, v267, v268, v269, v339, v399, v459);
  v976 = (unsigned __int64)v265;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v270 = _mm_load_si128(&v907);
  v1015 = 0;
  v1014 = v270;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v879,
    (__int64)&v1012,
    2,
    v271,
    v272,
    v273,
    v340,
    v400,
    v460,
    v493,
    v525,
    v557,
    v589,
    v621,
    v653,
    v685,
    v716,
    v748,
    v780,
    v812,
    v844);
  v1024 = 0;
  LOBYTE(v908) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v883,
    (__int64)&v1019,
    3,
    v274,
    v275,
    v276,
    v341,
    v401,
    v461,
    v494,
    v526,
    v558,
    v590,
    v622,
    v654,
    v686,
    v717,
    v749,
    v781,
    v813,
    v845);
  v277 = v1035;
  v1035 = v908;
  v278 = v1036;
  LOBYTE(v908) = v277;
  v1036 = v909;
  v909 = v278;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v279 = v875;
  do
  {
    v279 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v279 != &v1019 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v280 = _mm_load_si128(&v846);
  v1020 = 0;
  v1019 = ida_mcp::tools::search::get_segment_perms_impl;
  v1021 = v280;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1021.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1021.m128i_i64[0])(&v1019, &v1019, 3);
  if ( v1041 && v1040 && v1038 != (ida_mcp::tools::search *)v1039 )
    operator delete(v1038, v1039[0] + 1LL);
  if ( v1037 )
  {
    v1037 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v1032 != v462 )
    operator delete(v1032, v1034[0] + 1LL);
  if ( v1029 != v1031 )
    operator delete(v1029, v1031[0] + 1LL);
  return v1042 - __readfsqword(0x28u);
}

