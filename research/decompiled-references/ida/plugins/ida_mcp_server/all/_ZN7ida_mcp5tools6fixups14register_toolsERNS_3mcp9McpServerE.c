unsigned __int64 __fastcall ida_mcp::tools::fixups::register_tools(
        ida_mcp::tools::fixups *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __m128 v19; // xmm1
  char v20; // si
  __int64 v21; // rdx
  __m128i v22; // xmm2
  __int64 v23; // rax
  __int64 v24; // rax
  const __m128i *v25; // rsi
  __int64 *v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  const __m128i *v34; // rsi
  __int64 *v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // r13
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // r13
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __m128i v58; // xmm0
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __m128i *v62; // r13
  __int64 v63; // rax
  __m128i v64; // xmm3
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 *v71; // r13
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rsi
  char *v79; // rdi
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 *v83; // r13
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 *v97; // r13
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rsi
  __m128i *v105; // rdi
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rsi
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
  __int64 v131; // rax
  __int64 *v132; // r13
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __m128i v137; // xmm0
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __m128i *v144; // r13
  __int64 v145; // rax
  __m128i v146; // xmm4
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // r9
  __int64 v151; // rax
  __m128i v152; // xmm0
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  char v159; // si
  __int64 v160; // rax
  __m128i v161; // xmm5
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rsi
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rsi
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rax
  __int64 v177; // rax
  const __m128i *v178; // rsi
  __int64 *v179; // rdi
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 *v194; // r13
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 v199; // rax
  __m128i v200; // xmm0
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // r9
  __m128i *v207; // r13
  __int64 v208; // rax
  __m128i v209; // xmm6
  int v211; // [rsp+0h] [rbp-568h]
  int v212; // [rsp+0h] [rbp-568h]
  int v213; // [rsp+0h] [rbp-568h]
  int v214; // [rsp+0h] [rbp-568h]
  int v215; // [rsp+0h] [rbp-568h]
  int v216; // [rsp+0h] [rbp-568h]
  int v217; // [rsp+0h] [rbp-568h]
  int v218; // [rsp+0h] [rbp-568h]
  int v219; // [rsp+0h] [rbp-568h]
  int v220; // [rsp+0h] [rbp-568h]
  int v221; // [rsp+0h] [rbp-568h]
  int v222; // [rsp+0h] [rbp-568h]
  int v223; // [rsp+0h] [rbp-568h]
  int v224; // [rsp+0h] [rbp-568h]
  int v225; // [rsp+0h] [rbp-568h]
  int v226; // [rsp+0h] [rbp-568h]
  int v227; // [rsp+0h] [rbp-568h]
  int v228; // [rsp+0h] [rbp-568h]
  int v229; // [rsp+0h] [rbp-568h]
  int v230; // [rsp+0h] [rbp-568h]
  int v231; // [rsp+0h] [rbp-568h]
  int v232; // [rsp+0h] [rbp-568h]
  int v233; // [rsp+0h] [rbp-568h]
  int v234; // [rsp+0h] [rbp-568h]
  int v235; // [rsp+0h] [rbp-568h]
  int v236; // [rsp+0h] [rbp-568h]
  int v237; // [rsp+0h] [rbp-568h]
  int v238; // [rsp+0h] [rbp-568h]
  int v239; // [rsp+0h] [rbp-568h]
  int v240; // [rsp+0h] [rbp-568h]
  int v241; // [rsp+0h] [rbp-568h]
  int v242; // [rsp+0h] [rbp-568h]
  int v243; // [rsp+0h] [rbp-568h]
  int v244; // [rsp+0h] [rbp-568h]
  int v245; // [rsp+0h] [rbp-568h]
  int v246; // [rsp+0h] [rbp-568h]
  int v247; // [rsp+0h] [rbp-568h]
  int v248; // [rsp+0h] [rbp-568h]
  int v249; // [rsp+8h] [rbp-560h]
  int v250; // [rsp+8h] [rbp-560h]
  int v251; // [rsp+8h] [rbp-560h]
  __int64 v252; // [rsp+8h] [rbp-560h]
  int v253; // [rsp+8h] [rbp-560h]
  int v254; // [rsp+8h] [rbp-560h]
  __int64 v255; // [rsp+8h] [rbp-560h]
  __int64 v256; // [rsp+8h] [rbp-560h]
  int v257; // [rsp+8h] [rbp-560h]
  __int64 v258; // [rsp+8h] [rbp-560h]
  int v259; // [rsp+8h] [rbp-560h]
  __int64 v260; // [rsp+8h] [rbp-560h]
  __int64 v261; // [rsp+8h] [rbp-560h]
  __int64 v262; // [rsp+8h] [rbp-560h]
  int v263; // [rsp+8h] [rbp-560h]
  __int64 v264; // [rsp+8h] [rbp-560h]
  __int64 v265; // [rsp+8h] [rbp-560h]
  __int64 v266; // [rsp+8h] [rbp-560h]
  __int64 v267; // [rsp+8h] [rbp-560h]
  __int64 v268; // [rsp+8h] [rbp-560h]
  __int64 v269; // [rsp+8h] [rbp-560h]
  int v270; // [rsp+8h] [rbp-560h]
  int v271; // [rsp+8h] [rbp-560h]
  __int64 v272; // [rsp+8h] [rbp-560h]
  __int64 v273; // [rsp+8h] [rbp-560h]
  __int64 v274; // [rsp+8h] [rbp-560h]
  __int64 v275; // [rsp+8h] [rbp-560h]
  __int64 v276; // [rsp+8h] [rbp-560h]
  __int64 v277; // [rsp+8h] [rbp-560h]
  __int64 v278; // [rsp+8h] [rbp-560h]
  __int64 v279; // [rsp+8h] [rbp-560h]
  __int64 v280; // [rsp+8h] [rbp-560h]
  __int64 v281; // [rsp+8h] [rbp-560h]
  __int64 v282; // [rsp+8h] [rbp-560h]
  __int64 v283; // [rsp+8h] [rbp-560h]
  int v284; // [rsp+8h] [rbp-560h]
  __int64 v285; // [rsp+8h] [rbp-560h]
  __int64 v286; // [rsp+8h] [rbp-560h]
  __int64 v287; // [rsp+10h] [rbp-558h]
  __int64 v288; // [rsp+10h] [rbp-558h]
  __int64 v289; // [rsp+10h] [rbp-558h]
  int v290; // [rsp+10h] [rbp-558h]
  __int64 v291; // [rsp+10h] [rbp-558h]
  __int64 v292; // [rsp+10h] [rbp-558h]
  int v293; // [rsp+10h] [rbp-558h]
  int v294; // [rsp+10h] [rbp-558h]
  __int64 v295; // [rsp+10h] [rbp-558h]
  int v296; // [rsp+10h] [rbp-558h]
  __int64 v297; // [rsp+10h] [rbp-558h]
  int v298; // [rsp+10h] [rbp-558h]
  int v299; // [rsp+10h] [rbp-558h]
  int v300; // [rsp+10h] [rbp-558h]
  __int64 v301; // [rsp+10h] [rbp-558h]
  int v302; // [rsp+10h] [rbp-558h]
  int v303; // [rsp+10h] [rbp-558h]
  int v304; // [rsp+10h] [rbp-558h]
  int v305; // [rsp+10h] [rbp-558h]
  int v306; // [rsp+10h] [rbp-558h]
  int v307; // [rsp+10h] [rbp-558h]
  __int64 v308; // [rsp+10h] [rbp-558h]
  __int64 v309; // [rsp+10h] [rbp-558h]
  int v310; // [rsp+10h] [rbp-558h]
  int v311; // [rsp+10h] [rbp-558h]
  int v312; // [rsp+10h] [rbp-558h]
  int v313; // [rsp+10h] [rbp-558h]
  int v314; // [rsp+10h] [rbp-558h]
  int v315; // [rsp+10h] [rbp-558h]
  int v316; // [rsp+10h] [rbp-558h]
  int v317; // [rsp+10h] [rbp-558h]
  int v318; // [rsp+10h] [rbp-558h]
  int v319; // [rsp+10h] [rbp-558h]
  int v320; // [rsp+10h] [rbp-558h]
  int v321; // [rsp+10h] [rbp-558h]
  __int64 v322; // [rsp+10h] [rbp-558h]
  int v323; // [rsp+10h] [rbp-558h]
  int v324; // [rsp+10h] [rbp-558h]
  int v325; // [rsp+18h] [rbp-550h]
  int v326; // [rsp+18h] [rbp-550h]
  int v327; // [rsp+18h] [rbp-550h]
  int v328; // [rsp+18h] [rbp-550h]
  int v329; // [rsp+18h] [rbp-550h]
  int v330; // [rsp+18h] [rbp-550h]
  int v331; // [rsp+18h] [rbp-550h]
  int v332; // [rsp+18h] [rbp-550h]
  int v333; // [rsp+18h] [rbp-550h]
  int v334; // [rsp+18h] [rbp-550h]
  int v335; // [rsp+18h] [rbp-550h]
  int v336; // [rsp+18h] [rbp-550h]
  int v337; // [rsp+18h] [rbp-550h]
  int v338; // [rsp+18h] [rbp-550h]
  int v339; // [rsp+18h] [rbp-550h]
  int v340; // [rsp+18h] [rbp-550h]
  int v341; // [rsp+18h] [rbp-550h]
  int v342; // [rsp+18h] [rbp-550h]
  int v343; // [rsp+18h] [rbp-550h]
  int v344; // [rsp+18h] [rbp-550h]
  int v345; // [rsp+18h] [rbp-550h]
  int v346; // [rsp+18h] [rbp-550h]
  int v347; // [rsp+18h] [rbp-550h]
  int v348; // [rsp+18h] [rbp-550h]
  int v349; // [rsp+18h] [rbp-550h]
  int v350; // [rsp+18h] [rbp-550h]
  int v351; // [rsp+20h] [rbp-548h]
  int v352; // [rsp+20h] [rbp-548h]
  int v353; // [rsp+20h] [rbp-548h]
  int v354; // [rsp+20h] [rbp-548h]
  int v355; // [rsp+20h] [rbp-548h]
  int v356; // [rsp+20h] [rbp-548h]
  int v357; // [rsp+20h] [rbp-548h]
  int v358; // [rsp+20h] [rbp-548h]
  int v359; // [rsp+20h] [rbp-548h]
  __int64 v360; // [rsp+20h] [rbp-548h]
  int v361; // [rsp+20h] [rbp-548h]
  int v362; // [rsp+20h] [rbp-548h]
  int v363; // [rsp+20h] [rbp-548h]
  int v364; // [rsp+20h] [rbp-548h]
  int v365; // [rsp+20h] [rbp-548h]
  int v366; // [rsp+20h] [rbp-548h]
  int v367; // [rsp+20h] [rbp-548h]
  int v368; // [rsp+20h] [rbp-548h]
  _QWORD *v369; // [rsp+20h] [rbp-548h]
  int v370; // [rsp+20h] [rbp-548h]
  __int64 v371; // [rsp+20h] [rbp-548h]
  int v372; // [rsp+20h] [rbp-548h]
  int v373; // [rsp+20h] [rbp-548h]
  int v374; // [rsp+20h] [rbp-548h]
  int v375; // [rsp+20h] [rbp-548h]
  int v376; // [rsp+20h] [rbp-548h]
  int v377; // [rsp+28h] [rbp-540h]
  int v378; // [rsp+28h] [rbp-540h]
  int v379; // [rsp+28h] [rbp-540h]
  int v380; // [rsp+28h] [rbp-540h]
  int v381; // [rsp+28h] [rbp-540h]
  int v382; // [rsp+28h] [rbp-540h]
  int v383; // [rsp+28h] [rbp-540h]
  int v384; // [rsp+28h] [rbp-540h]
  int v385; // [rsp+28h] [rbp-540h]
  int v386; // [rsp+28h] [rbp-540h]
  int v387; // [rsp+28h] [rbp-540h]
  int v388; // [rsp+28h] [rbp-540h]
  int v389; // [rsp+28h] [rbp-540h]
  int v390; // [rsp+28h] [rbp-540h]
  int v391; // [rsp+28h] [rbp-540h]
  int v392; // [rsp+28h] [rbp-540h]
  int v393; // [rsp+28h] [rbp-540h]
  int v394; // [rsp+28h] [rbp-540h]
  int v395; // [rsp+28h] [rbp-540h]
  int v396; // [rsp+28h] [rbp-540h]
  int v397; // [rsp+28h] [rbp-540h]
  int v398; // [rsp+28h] [rbp-540h]
  int v399; // [rsp+28h] [rbp-540h]
  int v400; // [rsp+28h] [rbp-540h]
  int v401; // [rsp+28h] [rbp-540h]
  int v402; // [rsp+28h] [rbp-540h]
  __int64 v403; // [rsp+30h] [rbp-538h]
  __int64 v404; // [rsp+30h] [rbp-538h]
  __int64 v405; // [rsp+30h] [rbp-538h]
  __int64 v406; // [rsp+30h] [rbp-538h]
  __int64 v407; // [rsp+30h] [rbp-538h]
  __int64 v408; // [rsp+30h] [rbp-538h]
  __int64 v409; // [rsp+30h] [rbp-538h]
  __int64 v410; // [rsp+30h] [rbp-538h]
  __int64 v411; // [rsp+30h] [rbp-538h]
  __int64 v412; // [rsp+30h] [rbp-538h]
  __int64 v413; // [rsp+30h] [rbp-538h]
  __int64 v414; // [rsp+30h] [rbp-538h]
  __int64 v415; // [rsp+30h] [rbp-538h]
  __int64 v416; // [rsp+30h] [rbp-538h]
  __int64 v417; // [rsp+30h] [rbp-538h]
  __int64 v418; // [rsp+30h] [rbp-538h]
  __int64 v419; // [rsp+30h] [rbp-538h]
  __int64 v420; // [rsp+30h] [rbp-538h]
  __int64 v421; // [rsp+30h] [rbp-538h]
  __int64 v422; // [rsp+30h] [rbp-538h]
  __int64 v423; // [rsp+30h] [rbp-538h]
  __int64 v424; // [rsp+30h] [rbp-538h]
  __int64 v425; // [rsp+30h] [rbp-538h]
  __int64 v426; // [rsp+30h] [rbp-538h]
  __int64 v427; // [rsp+30h] [rbp-538h]
  __int64 v428; // [rsp+30h] [rbp-538h]
  int v429; // [rsp+38h] [rbp-530h]
  int v430; // [rsp+38h] [rbp-530h]
  int v431; // [rsp+38h] [rbp-530h]
  int v432; // [rsp+38h] [rbp-530h]
  int v433; // [rsp+38h] [rbp-530h]
  int v434; // [rsp+38h] [rbp-530h]
  int v435; // [rsp+38h] [rbp-530h]
  int v436; // [rsp+38h] [rbp-530h]
  int v437; // [rsp+38h] [rbp-530h]
  int v438; // [rsp+38h] [rbp-530h]
  int v439; // [rsp+38h] [rbp-530h]
  int v440; // [rsp+38h] [rbp-530h]
  int v441; // [rsp+38h] [rbp-530h]
  int v442; // [rsp+38h] [rbp-530h]
  int v443; // [rsp+38h] [rbp-530h]
  int v444; // [rsp+38h] [rbp-530h]
  int v445; // [rsp+38h] [rbp-530h]
  int v446; // [rsp+38h] [rbp-530h]
  int v447; // [rsp+38h] [rbp-530h]
  int v448; // [rsp+38h] [rbp-530h]
  int v449; // [rsp+38h] [rbp-530h]
  int v450; // [rsp+38h] [rbp-530h]
  int v451; // [rsp+38h] [rbp-530h]
  int v452; // [rsp+38h] [rbp-530h]
  int v453; // [rsp+38h] [rbp-530h]
  int v454; // [rsp+38h] [rbp-530h]
  int v455; // [rsp+40h] [rbp-528h]
  int v456; // [rsp+40h] [rbp-528h]
  int v457; // [rsp+40h] [rbp-528h]
  int v458; // [rsp+40h] [rbp-528h]
  int v459; // [rsp+40h] [rbp-528h]
  int v460; // [rsp+40h] [rbp-528h]
  int v461; // [rsp+40h] [rbp-528h]
  int v462; // [rsp+40h] [rbp-528h]
  int v463; // [rsp+40h] [rbp-528h]
  int v464; // [rsp+40h] [rbp-528h]
  int v465; // [rsp+40h] [rbp-528h]
  int v466; // [rsp+40h] [rbp-528h]
  int v467; // [rsp+40h] [rbp-528h]
  int v468; // [rsp+40h] [rbp-528h]
  int v469; // [rsp+40h] [rbp-528h]
  int v470; // [rsp+40h] [rbp-528h]
  int v471; // [rsp+40h] [rbp-528h]
  int v472; // [rsp+40h] [rbp-528h]
  int v473; // [rsp+40h] [rbp-528h]
  int v474; // [rsp+40h] [rbp-528h]
  int v475; // [rsp+40h] [rbp-528h]
  int v476; // [rsp+40h] [rbp-528h]
  int v477; // [rsp+40h] [rbp-528h]
  int v478; // [rsp+40h] [rbp-528h]
  int v479; // [rsp+40h] [rbp-528h]
  int v480; // [rsp+40h] [rbp-528h]
  int v481; // [rsp+48h] [rbp-520h]
  int v482; // [rsp+48h] [rbp-520h]
  int v483; // [rsp+48h] [rbp-520h]
  int v484; // [rsp+48h] [rbp-520h]
  int v485; // [rsp+48h] [rbp-520h]
  int v486; // [rsp+48h] [rbp-520h]
  int v487; // [rsp+48h] [rbp-520h]
  int v488; // [rsp+48h] [rbp-520h]
  int v489; // [rsp+48h] [rbp-520h]
  int v490; // [rsp+48h] [rbp-520h]
  int v491; // [rsp+48h] [rbp-520h]
  int v492; // [rsp+48h] [rbp-520h]
  int v493; // [rsp+48h] [rbp-520h]
  int v494; // [rsp+48h] [rbp-520h]
  int v495; // [rsp+48h] [rbp-520h]
  int v496; // [rsp+48h] [rbp-520h]
  int v497; // [rsp+48h] [rbp-520h]
  int v498; // [rsp+48h] [rbp-520h]
  int v499; // [rsp+48h] [rbp-520h]
  int v500; // [rsp+48h] [rbp-520h]
  int v501; // [rsp+48h] [rbp-520h]
  int v502; // [rsp+48h] [rbp-520h]
  int v503; // [rsp+48h] [rbp-520h]
  int v504; // [rsp+48h] [rbp-520h]
  int v505; // [rsp+48h] [rbp-520h]
  int v506; // [rsp+48h] [rbp-520h]
  int v507; // [rsp+50h] [rbp-518h]
  int v508; // [rsp+50h] [rbp-518h]
  int v509; // [rsp+50h] [rbp-518h]
  int v510; // [rsp+50h] [rbp-518h]
  int v511; // [rsp+50h] [rbp-518h]
  __int64 v512; // [rsp+50h] [rbp-518h]
  int v513; // [rsp+50h] [rbp-518h]
  int v514; // [rsp+50h] [rbp-518h]
  int v515; // [rsp+50h] [rbp-518h]
  int v516; // [rsp+50h] [rbp-518h]
  int v517; // [rsp+50h] [rbp-518h]
  int v518; // [rsp+50h] [rbp-518h]
  int v519; // [rsp+50h] [rbp-518h]
  int v520; // [rsp+50h] [rbp-518h]
  int v521; // [rsp+50h] [rbp-518h]
  int v522; // [rsp+50h] [rbp-518h]
  int v523; // [rsp+50h] [rbp-518h]
  int v524; // [rsp+50h] [rbp-518h]
  int v525; // [rsp+50h] [rbp-518h]
  int v526; // [rsp+50h] [rbp-518h]
  int v527; // [rsp+50h] [rbp-518h]
  _QWORD *v528; // [rsp+50h] [rbp-518h]
  __int64 v529; // [rsp+50h] [rbp-518h]
  int v530; // [rsp+50h] [rbp-518h]
  int v531; // [rsp+50h] [rbp-518h]
  int v532; // [rsp+50h] [rbp-518h]
  const __m128i *v533; // [rsp+58h] [rbp-510h]
  char v534; // [rsp+58h] [rbp-510h]
  char v535; // [rsp+58h] [rbp-510h]
  char v536; // [rsp+58h] [rbp-510h]
  char v537; // [rsp+58h] [rbp-510h]
  char v538; // [rsp+58h] [rbp-510h]
  char v539; // [rsp+58h] [rbp-510h]
  char v540; // [rsp+58h] [rbp-510h]
  char v541; // [rsp+58h] [rbp-510h]
  char v542; // [rsp+58h] [rbp-510h]
  char v543; // [rsp+58h] [rbp-510h]
  __int64 v544; // [rsp+58h] [rbp-510h]
  char v545; // [rsp+58h] [rbp-510h]
  char v546; // [rsp+58h] [rbp-510h]
  __int64 v547; // [rsp+58h] [rbp-510h]
  char v548; // [rsp+58h] [rbp-510h]
  char v549; // [rsp+58h] [rbp-510h]
  char v550; // [rsp+58h] [rbp-510h]
  char v551; // [rsp+58h] [rbp-510h]
  char v552; // [rsp+58h] [rbp-510h]
  char v553; // [rsp+58h] [rbp-510h]
  char v554; // [rsp+58h] [rbp-510h]
  char v555; // [rsp+58h] [rbp-510h]
  __int64 v556; // [rsp+58h] [rbp-510h]
  char v557; // [rsp+58h] [rbp-510h]
  char v558; // [rsp+58h] [rbp-510h]
  __m128i v559; // [rsp+60h] [rbp-508h] BYREF
  __int128 *v560; // [rsp+70h] [rbp-4F8h]
  ida_mcp::tools::fixups *v561; // [rsp+78h] [rbp-4F0h]
  const __m128i *v562; // [rsp+80h] [rbp-4E8h]
  __m128i *v563; // [rsp+88h] [rbp-4E0h]
  __m128i *v564; // [rsp+90h] [rbp-4D8h]
  char *v565; // [rsp+98h] [rbp-4D0h]
  __int128 *v566; // [rsp+A0h] [rbp-4C8h]
  __int8 *v567; // [rsp+A8h] [rbp-4C0h]
  __int128 *v568; // [rsp+B0h] [rbp-4B8h]
  __int64 *v569; // [rsp+B8h] [rbp-4B0h]
  void **v570; // [rsp+C0h] [rbp-4A8h]
  __int64 *v571; // [rsp+C8h] [rbp-4A0h]
  __int64 *v572; // [rsp+D0h] [rbp-498h]
  __int64 *v573; // [rsp+D8h] [rbp-490h]
  char *v574; // [rsp+E0h] [rbp-488h]
  char *v575; // [rsp+E8h] [rbp-480h]
  __int128 *v576; // [rsp+F0h] [rbp-478h]
  __int128 *v577; // [rsp+F8h] [rbp-470h]
  __int128 *v578; // [rsp+100h] [rbp-468h]
  __int128 *v579; // [rsp+108h] [rbp-460h]
  char *v580; // [rsp+110h] [rbp-458h]
  char *v581; // [rsp+118h] [rbp-450h]
  __int64 *v582; // [rsp+120h] [rbp-448h]
  __int64 *v583; // [rsp+128h] [rbp-440h]
  __int64 *v584; // [rsp+130h] [rbp-438h]
  __m128i *v585; // [rsp+138h] [rbp-430h]
  __int128 *v586; // [rsp+140h] [rbp-428h]
  _QWORD *v587; // [rsp+148h] [rbp-420h]
  char *v588; // [rsp+150h] [rbp-418h]
  char *v589; // [rsp+158h] [rbp-410h]
  __int64 *v590; // [rsp+160h] [rbp-408h]
  __int128 *v591; // [rsp+168h] [rbp-400h]
  __int128 *v592; // [rsp+170h] [rbp-3F8h]
  __int128 *v593; // [rsp+178h] [rbp-3F0h]
  __int64 *v594; // [rsp+180h] [rbp-3E8h]
  char *v595; // [rsp+188h] [rbp-3E0h]
  char *v596; // [rsp+190h] [rbp-3D8h]
  char *v597; // [rsp+198h] [rbp-3D0h]
  __m128i v598; // [rsp+1A0h] [rbp-3C8h] BYREF
  __int64 v599; // [rsp+1B0h] [rbp-3B8h] BYREF
  __int64 v600; // [rsp+1B8h] [rbp-3B0h] BYREF
  char v601; // [rsp+1C0h] [rbp-3A8h]
  __int128 v602; // [rsp+1C8h] [rbp-3A0h] BYREF
  char v603; // [rsp+1D8h] [rbp-390h]
  __int128 v604; // [rsp+1E0h] [rbp-388h] BYREF
  char v605[8]; // [rsp+1F0h] [rbp-378h] BYREF
  __int128 v606; // [rsp+1F8h] [rbp-370h] BYREF
  char v607; // [rsp+208h] [rbp-360h]
  __int128 v608; // [rsp+210h] [rbp-358h] BYREF
  char v609; // [rsp+220h] [rbp-348h] BYREF
  __int128 v610; // [rsp+228h] [rbp-340h] BYREF
  char v611; // [rsp+238h] [rbp-330h]
  __int128 v612; // [rsp+240h] [rbp-328h] BYREF
  char v613; // [rsp+250h] [rbp-318h] BYREF
  __int128 v614; // [rsp+258h] [rbp-310h] BYREF
  char v615; // [rsp+268h] [rbp-300h]
  __int128 v616; // [rsp+270h] [rbp-2F8h] BYREF
  char v617; // [rsp+280h] [rbp-2E8h] BYREF
  __int128 v618; // [rsp+288h] [rbp-2E0h] BYREF
  __int64 v619; // [rsp+298h] [rbp-2D0h] BYREF
  __int128 v620; // [rsp+2A0h] [rbp-2C8h] BYREF
  __int64 v621; // [rsp+2B0h] [rbp-2B8h] BYREF
  __int128 v622; // [rsp+2B8h] [rbp-2B0h] BYREF
  __int64 v623; // [rsp+2C8h] [rbp-2A0h] BYREF
  char v624; // [rsp+2D0h] [rbp-298h] BYREF
  __int64 v625; // [rsp+2D8h] [rbp-290h]
  char v626; // [rsp+2E0h] [rbp-288h] BYREF
  __int128 v627; // [rsp+2E8h] [rbp-280h] BYREF
  __int64 v628; // [rsp+2F8h] [rbp-270h] BYREF
  __int128 v629; // [rsp+300h] [rbp-268h] BYREF
  char v630; // [rsp+310h] [rbp-258h] BYREF
  __int128 v631; // [rsp+318h] [rbp-250h] BYREF
  char v632; // [rsp+328h] [rbp-240h]
  __int128 v633; // [rsp+330h] [rbp-238h] BYREF
  char v634; // [rsp+340h] [rbp-228h] BYREF
  __int128 v635; // [rsp+348h] [rbp-220h] BYREF
  __int64 v636; // [rsp+358h] [rbp-210h] BYREF
  __int128 v637; // [rsp+360h] [rbp-208h] BYREF
  __int64 v638; // [rsp+370h] [rbp-1F8h] BYREF
  __int128 v639; // [rsp+378h] [rbp-1F0h] BYREF
  __int64 v640; // [rsp+388h] [rbp-1E0h] BYREF
  char v641; // [rsp+390h] [rbp-1D8h] BYREF
  __int64 v642; // [rsp+398h] [rbp-1D0h]
  char v643; // [rsp+3A0h] [rbp-1C8h] BYREF
  __int128 v644; // [rsp+3A8h] [rbp-1C0h] BYREF
  __int64 v645; // [rsp+3B8h] [rbp-1B0h] BYREF
  char v646; // [rsp+3C0h] [rbp-1A8h] BYREF
  __int64 v647; // [rsp+3C8h] [rbp-1A0h]
  __int64 v648; // [rsp+3D0h] [rbp-198h] BYREF
  __int128 v649; // [rsp+3D8h] [rbp-190h] BYREF
  __int64 v650; // [rsp+3E8h] [rbp-180h] BYREF
  __int128 v651; // [rsp+3F0h] [rbp-178h] BYREF
  char v652; // [rsp+400h] [rbp-168h] BYREF
  __int128 v653; // [rsp+408h] [rbp-160h]
  __m128i v654; // [rsp+418h] [rbp-150h] BYREF
  __int64 v655; // [rsp+428h] [rbp-140h]
  __m128i v656; // [rsp+430h] [rbp-138h] BYREF
  __m128i v657; // [rsp+440h] [rbp-128h] BYREF
  char v658; // [rsp+450h] [rbp-118h] BYREF
  __int64 v659; // [rsp+458h] [rbp-110h]
  _QWORD v660[2]; // [rsp+460h] [rbp-108h] BYREF
  __int64 v661; // [rsp+470h] [rbp-F8h]
  char v662; // [rsp+478h] [rbp-F0h] BYREF
  void *v663; // [rsp+480h] [rbp-E8h]
  __int64 v664; // [rsp+488h] [rbp-E0h]
  _QWORD v665[2]; // [rsp+490h] [rbp-D8h] BYREF
  void *v666; // [rsp+4A0h] [rbp-C8h] BYREF
  __int64 v667; // [rsp+4A8h] [rbp-C0h]
  _QWORD v668[2]; // [rsp+4B0h] [rbp-B8h] BYREF
  char v669; // [rsp+4C0h] [rbp-A8h]
  __int64 v670; // [rsp+4C8h] [rbp-A0h] BYREF
  char v671; // [rsp+4E0h] [rbp-88h]
  ida_mcp::tools::fixups *v672; // [rsp+4E8h] [rbp-80h]
  _QWORD v673[2]; // [rsp+4F8h] [rbp-70h] BYREF
  char v674; // [rsp+508h] [rbp-60h]
  char v675; // [rsp+518h] [rbp-50h]
  unsigned __int64 v676; // [rsp+528h] [rbp-40h]

  v561 = this;
  v676 = __readfsqword(0x28u);
  v663 = v665;
  v664 = 0;
  LOBYTE(v665[0]) = 0;
  v666 = v668;
  v667 = 0;
  LOBYTE(v668[0]) = 0;
  v669 = 0;
  v670 = 0;
  v671 = 0;
  v675 = 0;
  std::string::_M_replace();
  v570 = &v666;
  std::string::_M_replace();
  v576 = &v610;
  *(_QWORD *)&v610 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v609 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v611 = 0;
  *(_QWORD *)&v612 = 0;
  v577 = &v612;
  v610 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v611 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v588 = &v609;
  v612 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v656,
    (const __m128i *)&v609);
  v657.m128i_i64[0] = 0;
  v652 = 0;
  *(_QWORD *)&v653 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v652 = 3;
  v4 = operator new(0x20u);
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)v4 = v4 + 16;
  *(_QWORD *)(v4 + 8) = 10;
  v626 = 0;
  *(_QWORD *)&v627 = 0;
  v653 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v626 = 3;
  v5 = operator new(0x20u);
  strcpy((char *)(v5 + 16), "start_address");
  *(_QWORD *)v5 = v5 + 16;
  *(_QWORD *)(v5 + 8) = 13;
  v613 = 0;
  *(_QWORD *)&v614 = 0;
  v578 = &v614;
  v627 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v613 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  v615 = 0;
  *(_QWORD *)&v616 = 0;
  v579 = &v616;
  v614 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v615 = 3;
  v7 = operator new(0x20u);
  *(_QWORD *)v7 = v7 + 16;
  strcpy((char *)(v7 + 16), "string");
  *(_QWORD *)(v7 + 8) = 6;
  v589 = &v613;
  v616 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v621,
    (const __m128i *)&v613);
  *((_QWORD *)&v622 + 1) = 0;
  v617 = 0;
  *(_QWORD *)&v618 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v617 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "description");
  *(_QWORD *)(v8 + 8) = 11;
  LOBYTE(v619) = 0;
  *(_QWORD *)&v620 = 0;
  v586 = &v620;
  v618 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v619) = 3;
  v9 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v9, "Hex start", v10, v11, v12, v13, v211, (int)&v627, v287);
  v565 = &v617;
  v590 = &v623;
  v620 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v623,
    (const __m128i *)&v617);
  v625 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v628,
    (const __m128i *)&v621);
  *((_QWORD *)&v629 + 1) = 0;
  v574 = &v626;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v648,
    (const __m128i *)&v626);
  *((_QWORD *)&v649 + 1) = 0;
  v643 = 0;
  *(_QWORD *)&v644 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v643 = 3;
  v14 = operator new(0x20u);
  *(_QWORD *)v14 = v14 + 16;
  strcpy((char *)(v14 + 16), "end_address");
  *(_QWORD *)(v14 + 8) = 11;
  v630 = 0;
  *(_QWORD *)&v631 = 0;
  v644 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v630 = 3;
  v15 = operator new(0x20u);
  *(_QWORD *)v15 = v15 + 16;
  strcpy((char *)(v15 + 16), "type");
  *(_QWORD *)(v15 + 8) = 4;
  v632 = 0;
  *(_QWORD *)&v633 = 0;
  v631 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v632 = 3;
  v16 = operator new(0x20u);
  strcpy((char *)(v16 + 16), "string");
  *(_QWORD *)v16 = v16 + 16;
  *(_QWORD *)(v16 + 8) = 6;
  v575 = &v630;
  v633 = (unsigned __int64)v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v638,
    (const __m128i *)&v630);
  *((_QWORD *)&v639 + 1) = 0;
  v634 = 0;
  *(_QWORD *)&v635 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v634 = 3;
  v17 = operator new(0x20u);
  *(_QWORD *)v17 = v17 + 16;
  strcpy((char *)(v17 + 16), "description");
  *(_QWORD *)(v17 + 8) = 11;
  LOBYTE(v636) = 0;
  *(_QWORD *)&v637 = 0;
  v635 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v636) = 3;
  v18 = operator new(0x20u);
  strcpy((char *)(v18 + 16), "Hex end");
  *(_QWORD *)v18 = v18 + 16;
  v19 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v18 + 8) = 7;
  v564 = (__m128i *)&v634;
  v582 = &v640;
  v559 = (__m128i)v19;
  v637 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v640,
    (const __m128i *)&v634);
  v642 = 0;
  v583 = &v645;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v645,
    (const __m128i *)&v638);
  v647 = 0;
  v563 = (__m128i *)&v643;
  v584 = &v650;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v650,
    (const __m128i *)&v643);
  *((_QWORD *)&v651 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v654,
    (const __m128i *)&v648);
  v655 = 0;
  v562 = (const __m128i *)&v652;
  v569 = &v657.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v657.m128i_i64[1],
    (const __m128i *)&v652);
  v659 = 0;
  LOBYTE(v599) = 0;
  v572 = &v599;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v599,
    &v656);
  v20 = v669;
  v21 = v600;
  v669 = v599;
  LOBYTE(v599) = v20;
  v600 = v670;
  v670 = v21;
  v573 = &v600;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v595 = &v658;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v594 = &v656.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v567 = &v654.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v560 = &v651;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v581 = &v646;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v580 = &v641;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v566 = &v639;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v596 = &v624;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v568 = &v622;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v22 = _mm_load_si128(&v559);
  v656.m128i_i64[1] = 0;
  v656.m128i_i64[0] = (__int64)ida_mcp::tools::fixups::`anonymous namespace'::handle_list_fixups;
  v657 = v22;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v657.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v657.m128i_i64[0])(&v656, &v656, 3);
  if ( v675 && v674 && v672 != (ida_mcp::tools::fixups *)v673 )
    operator delete(v672, v673[0] + 1LL);
  if ( v671 )
  {
    v671 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v571 = &v670;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v666 != v668 )
    operator delete(v666, v668[0] + 1LL);
  if ( v663 != v665 )
    operator delete(v663, v665[0] + 1LL);
  v663 = v665;
  v664 = 0;
  LOBYTE(v665[0]) = 0;
  v666 = v668;
  v667 = 0;
  LOBYTE(v668[0]) = 0;
  v669 = 0;
  v670 = 0;
  v671 = 0;
  v675 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v626 = 0;
  *(_QWORD *)&v627 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v626 = 3;
  v23 = operator new(0x20u);
  *(_QWORD *)v23 = v23 + 16;
  strcpy((char *)(v23 + 16), "type");
  *(_QWORD *)(v23 + 8) = 4;
  LOBYTE(v628) = 0;
  *(_QWORD *)&v629 = 0;
  v627 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v628) = 3;
  v24 = operator new(0x20u);
  *(_QWORD *)v24 = v24 + 16;
  v25 = (const __m128i *)v574;
  strcpy((char *)(v24 + 16), "object");
  *(_QWORD *)(v24 + 8) = 6;
  v629 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v656,
    v25);
  v657.m128i_i64[0] = 0;
  LOBYTE(v648) = 0;
  *(_QWORD *)&v649 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v648) = 3;
  v26 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v26,
    "properties",
    v27,
    v28,
    v29,
    v30,
    (int)&v649,
    v249,
    (__int64)&v631);
  v643 = 0;
  *(_QWORD *)&v644 = 0;
  v649 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v643 = 3;
  v31 = operator new(0x20u);
  *(_QWORD *)v31 = v31 + 16;
  strcpy((char *)(v31 + 16), "address");
  *(_QWORD *)(v31 + 8) = 7;
  v630 = 0;
  *(_QWORD *)&v631 = 0;
  v644 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v630 = 3;
  v32 = operator new(0x20u);
  *(_QWORD *)v32 = v32 + 16;
  strcpy((char *)(v32 + 16), "type");
  *(_QWORD *)(v32 + 8) = 4;
  v632 = 0;
  *(_QWORD *)&v633 = 0;
  v631 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v632 = 3;
  v33 = operator new(0x20u);
  strcpy((char *)(v33 + 16), "string");
  v34 = (const __m128i *)v575;
  *(_QWORD *)v33 = v33 + 16;
  *(_QWORD *)(v33 + 8) = 6;
  v633 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v638,
    v34);
  *((_QWORD *)&v639 + 1) = 0;
  v634 = 0;
  *(_QWORD *)&v635 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v634 = 3;
  v35 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v35, "description", v36, v37, v38, v39, v212, v250, v288);
  LOBYTE(v636) = 0;
  *(_QWORD *)&v637 = 0;
  v635 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v636) = 3;
  v40 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v40, "Hex address", v41, v42, v43, v44, v213, v251, v289);
  v637 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v582,
    v564);
  v642 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v583,
    (const __m128i *)&v638);
  v647 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v621,
    v563);
  *((_QWORD *)&v622 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v584,
    (__int64)&v621,
    1,
    v45,
    v46,
    v47,
    v214,
    v252,
    v290,
    (int)&v633,
    (int)&v638,
    (int)&v635,
    (__int64)&v637,
    (int)&v644,
    (int)&v618,
    (int)&v629,
    (int)&v621,
    (char)&v648,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  *((_QWORD *)&v651 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v569,
    v533);
  v659 = 0;
  v652 = 0;
  *(_QWORD *)&v653 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v652 = 3;
  v48 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v48, "required", v49, v50, v51, v52, v215, v253, v291);
  v617 = 0;
  *(_QWORD *)&v618 = 0;
  v653 = (unsigned __int64)v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v617 = 3;
  v53 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v53, "address", v54, v55, v56, v57, v216, v254, v292);
  v618 = (unsigned __int64)v53;
  v585 = &v598;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v58 = _mm_load_si128(&v598);
  v587 = v660;
  v655 = 0;
  v654 = v58;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v660,
    v562);
  v661 = 0;
  LOBYTE(v599) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v572,
    (__int64)&v656,
    3,
    v59,
    v60,
    v61,
    v217,
    v255,
    v293,
    v325,
    v351,
    v377,
    v403,
    v429,
    v455,
    v481,
    v507,
    (char)v533,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  LOBYTE(v34) = v669;
  v62 = (__m128i *)&v662;
  v669 = v599;
  v63 = v670;
  LOBYTE(v599) = (_BYTE)v34;
  v670 = v600;
  v600 = v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v62 = (__m128i *)((char *)v62 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v62 != &v656 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v64 = _mm_load_si128(&v559);
  v656.m128i_i64[1] = 0;
  v656.m128i_i64[0] = (__int64)ida_mcp::tools::fixups::`anonymous namespace'::handle_get_fixup_info;
  v657 = v64;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v657.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v657.m128i_i64[0])(&v656, &v656, 3);
  if ( v675 && v674 && v672 != (ida_mcp::tools::fixups *)v673 )
    operator delete(v672, v673[0] + 1LL);
  if ( v671 )
  {
    v671 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v666 != v668 )
    operator delete(v666, v668[0] + 1LL);
  if ( v663 != v665 )
    operator delete(v663, v665[0] + 1LL);
  v663 = v665;
  v664 = 0;
  LOBYTE(v665[0]) = 0;
  v666 = v668;
  v667 = 0;
  LOBYTE(v668[0]) = 0;
  v669 = 0;
  v670 = 0;
  v671 = 0;
  v675 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v605[0] = 0;
  v592 = &v606;
  *(_QWORD *)&v606 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v605[0] = 3;
  v65 = operator new(0x20u);
  *(_QWORD *)v65 = v65 + 16;
  strcpy((char *)(v65 + 16), "type");
  *(_QWORD *)(v65 + 8) = 4;
  v607 = 0;
  *(_QWORD *)&v608 = 0;
  v593 = &v608;
  v606 = (unsigned __int64)v65;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v607 = 3;
  v66 = operator new(0x20u);
  *(_QWORD *)v66 = v66 + 16;
  strcpy((char *)(v66 + 16), "object");
  *(_QWORD *)(v66 + 8) = 6;
  v597 = v605;
  v608 = (unsigned __int64)v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v656,
    (__int64)v605,
    2,
    v67,
    v68,
    v69,
    v218,
    v256,
    v294,
    v326,
    v352,
    v378,
    v404,
    v430,
    v456,
    v482,
    v508,
    v534,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  v657.m128i_i64[0] = 0;
  LOBYTE(v648) = 0;
  *(_QWORD *)&v649 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v648) = 3;
  v70 = operator new(0x20u);
  *(_QWORD *)v70 = v70 + 16;
  strcpy((char *)(v70 + 16), "properties");
  *(_QWORD *)(v70 + 8) = 10;
  LOBYTE(v621) = 0;
  *(_QWORD *)&v622 = 0;
  v649 = (unsigned __int64)v70;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v621) = 3;
  v71 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v71, "start_address", v72, v73, v74, v75, v219, v257, v295);
  v609 = 0;
  *(_QWORD *)&v610 = 0;
  v622 = (unsigned __int64)v71;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v609 = 3;
  v76 = operator new(0x20u);
  *(_QWORD *)v76 = v76 + 16;
  strcpy((char *)(v76 + 16), "type");
  *(_QWORD *)(v76 + 8) = 4;
  v611 = 0;
  *(_QWORD *)&v612 = 0;
  v610 = (unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v611 = 3;
  v77 = operator new(0x20u);
  v78 = (__int64)v588;
  *(_QWORD *)v77 = v77 + 16;
  v79 = v565;
  strcpy((char *)(v77 + 16), "string");
  *(_QWORD *)(v77 + 8) = 6;
  v612 = (unsigned __int64)v77;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v79,
    v78,
    2,
    v80,
    v81,
    26478,
    v220,
    v258,
    v296,
    v327,
    v353,
    v379,
    v405,
    v431,
    v457,
    v483,
    v509,
    v535,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  *((_QWORD *)&v618 + 1) = 0;
  v613 = 0;
  *(_QWORD *)&v614 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v613 = 3;
  v82 = operator new(0x20u);
  *(_QWORD *)v82 = v82 + 16;
  strcpy((char *)(v82 + 16), "description");
  *(_QWORD *)(v82 + 8) = 11;
  v615 = 0;
  *(_QWORD *)&v616 = 0;
  v614 = (unsigned __int64)v82;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v615 = 3;
  v83 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v83, "Hex start", v84, v85, v86, v87, v221, v259, v297);
  v616 = (unsigned __int64)v83;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v619,
    (__int64)v589,
    2,
    v88,
    v89,
    v90,
    v222,
    v260,
    v298,
    v328,
    v354,
    v380,
    v406,
    v432,
    v458,
    v484,
    v510,
    v536,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  *((_QWORD *)&v620 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v590,
    (__int64)v565,
    2,
    v91,
    v92,
    v93,
    v223,
    v261,
    v299,
    v329,
    v355,
    v381,
    v407,
    v433,
    v459,
    v485,
    v511,
    v537,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  v625 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v563,
    v512,
    2,
    v94,
    v95,
    v96,
    v224,
    v262,
    v300,
    v330,
    v356,
    v382,
    v408,
    v434,
    v460,
    v486,
    v512,
    v538,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  *((_QWORD *)&v644 + 1) = 0;
  LOBYTE(v638) = 0;
  *(_QWORD *)&v639 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v638) = 3;
  v97 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v97, "size", v98, v99, v100, v101, v225, v263, v301);
  v626 = 0;
  *(_QWORD *)&v627 = 0;
  v639 = (unsigned __int64)v97;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v626 = 3;
  v102 = operator new(0x20u);
  *(_QWORD *)v102 = v102 + 16;
  strcpy((char *)(v102 + 16), "type");
  *(_QWORD *)(v102 + 8) = 4;
  LOBYTE(v628) = 0;
  *(_QWORD *)&v629 = 0;
  v627 = (unsigned __int64)v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v628) = 3;
  v103 = operator new(0x20u);
  v104 = (__int64)v574;
  *(_QWORD *)v103 = v103 + 16;
  v105 = v564;
  strcpy((char *)(v103 + 16), "number");
  *(_QWORD *)(v103 + 8) = 6;
  v629 = (unsigned __int64)v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v105,
    v104,
    2,
    v106,
    v107,
    v108,
    v226,
    v264,
    v302,
    v331,
    v357,
    v383,
    v409,
    v435,
    v461,
    v487,
    v513,
    v539,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  *((_QWORD *)&v635 + 1) = 0;
  v630 = 0;
  *(_QWORD *)&v631 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v630 = 3;
  v109 = operator new(0x20u);
  *(_QWORD *)v109 = v109 + 16;
  strcpy((char *)(v109 + 16), "description");
  *(_QWORD *)(v109 + 8) = 11;
  v632 = 0;
  *(_QWORD *)&v633 = 0;
  v631 = (unsigned __int64)v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v632 = 3;
  v110 = operator new(0x20u);
  *(_QWORD *)(v110 + 8) = 10;
  *(_QWORD *)v110 = v110 + 16;
  v111 = (__int64)v575;
  strcpy((char *)(v110 + 16), "Size bytes");
  v633 = (unsigned __int64)v110;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v636,
    v111,
    2,
    0x74796220657A6953LL,
    v112,
    v113,
    v227,
    v265,
    v303,
    v332,
    v358,
    v384,
    v410,
    v436,
    v462,
    v488,
    v514,
    v540,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  *((_QWORD *)&v637 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v582,
    (__int64)v564,
    2,
    v114,
    v115,
    v116,
    v228,
    v266,
    v304,
    v333,
    v359,
    v385,
    v411,
    v437,
    v463,
    v489,
    v515,
    v541,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  v642 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v583,
    v360,
    2,
    v117,
    v118,
    v119,
    v229,
    v267,
    v305,
    v334,
    v360,
    v386,
    v412,
    v438,
    v464,
    v490,
    v516,
    v542,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  v647 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v584,
    (__int64)v563,
    2,
    v120,
    v121,
    v122,
    v230,
    v268,
    v306,
    v335,
    v361,
    v387,
    v413,
    v439,
    v465,
    v491,
    v517,
    v543,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  *((_QWORD *)&v651 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v569,
    v544,
    2,
    v123,
    v124,
    v125,
    v231,
    v269,
    v307,
    v336,
    v362,
    v388,
    v414,
    v440,
    v466,
    v492,
    v518,
    v544,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  v659 = 0;
  v652 = 0;
  *(_QWORD *)&v653 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v652 = 3;
  v126 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v126, "required", v127, v128, v129, v130, v232, v270, v308);
  v601 = 0;
  v590 = (__int64 *)&v602;
  *(_QWORD *)&v602 = 0;
  v653 = (unsigned __int64)v126;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v601 = 3;
  v131 = operator new(0x20u);
  strcpy((char *)(v131 + 16), "start_address");
  *(_QWORD *)v131 = v131 + 16;
  *(_QWORD *)(v131 + 8) = 13;
  v603 = 0;
  *(_QWORD *)&v604 = 0;
  v591 = &v604;
  v602 = (unsigned __int64)v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v603 = 3;
  v132 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v132, "size", v133, v134, v135, v136, v233, v271, v309);
  v604 = (unsigned __int64)v132;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v137 = _mm_load_si128(&v598);
  v655 = 0;
  v654 = v137;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v587,
    (__int64)v562,
    2,
    v138,
    v139,
    v140,
    v234,
    v272,
    v310,
    v337,
    v363,
    v389,
    v415,
    v441,
    v467,
    v493,
    v519,
    v545,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  v661 = 0;
  LOBYTE(v599) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v572,
    (__int64)&v656,
    3,
    v141,
    v142,
    v143,
    v235,
    v273,
    v311,
    v338,
    v364,
    v390,
    v416,
    v442,
    v468,
    v494,
    v520,
    v546,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  LOBYTE(v111) = v669;
  v144 = (__m128i *)&v662;
  v669 = v599;
  v145 = v670;
  LOBYTE(v599) = v111;
  v670 = v600;
  v600 = v145;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v144 = (__m128i *)((char *)v144 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v144 != &v656 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v146 = _mm_load_si128(&v559);
  v656.m128i_i64[1] = 0;
  v656.m128i_i64[0] = (__int64)ida_mcp::tools::fixups::`anonymous namespace'::handle_get_fixups_in_range;
  v657 = v146;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v657.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v657.m128i_i64[0])(&v656, &v656, 3);
  if ( v675 && v674 && v672 != (ida_mcp::tools::fixups *)v673 )
    operator delete(v672, v673[0] + 1LL);
  if ( v671 )
  {
    v671 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v666 != v668 )
    operator delete(v666, v668[0] + 1LL);
  if ( v663 != v665 )
    operator delete(v663, v665[0] + 1LL);
  v663 = v665;
  v664 = 0;
  LOBYTE(v665[0]) = 0;
  v666 = v668;
  v667 = 0;
  LOBYTE(v668[0]) = 0;
  v669 = 0;
  v670 = 0;
  v671 = 0;
  v675 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  LOBYTE(v648) = 0;
  *(_QWORD *)&v649 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v648) = 3;
  v147 = operator new(0x20u);
  *(_QWORD *)v147 = v147 + 16;
  strcpy((char *)(v147 + 16), "type");
  *(_QWORD *)(v147 + 8) = 4;
  LOBYTE(v650) = 0;
  *(_QWORD *)&v651 = 0;
  v649 = (unsigned __int64)v147;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v650) = 3;
  v148 = operator new(0x20u);
  *(_QWORD *)v148 = v148 + 16;
  strcpy((char *)(v148 + 16), "object");
  *(_QWORD *)(v148 + 8) = 6;
  v651 = (unsigned __int64)v148;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v656,
    v547,
    2,
    v149,
    29795,
    v150,
    v236,
    v274,
    v312,
    v339,
    v365,
    v391,
    v417,
    v443,
    v469,
    v495,
    v521,
    v547,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  v657.m128i_i64[0] = 0;
  v652 = 0;
  *(_QWORD *)&v653 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v652 = 3;
  v151 = operator new(0x20u);
  *(_QWORD *)v151 = v151 + 16;
  strcpy((char *)(v151 + 16), "properties");
  *(_QWORD *)(v151 + 8) = 10;
  v653 = (unsigned __int64)v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v152 = _mm_load_si128(&v598);
  v655 = 0;
  v654 = v152;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v569,
    (__int64)v562,
    2,
    v153,
    v154,
    v155,
    v237,
    v275,
    v313,
    v340,
    v366,
    v392,
    v418,
    v444,
    v470,
    v496,
    v522,
    v548,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  v659 = 0;
  LOBYTE(v599) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v572,
    (__int64)&v656,
    2,
    v156,
    v157,
    v158,
    v238,
    v276,
    v314,
    v341,
    v367,
    v393,
    v419,
    v445,
    v471,
    v497,
    v523,
    v549,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  v159 = v669;
  v669 = v599;
  v160 = v670;
  LOBYTE(v599) = v159;
  v670 = v600;
  v600 = v160;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v161 = _mm_load_si128(&v559);
  v656.m128i_i64[1] = 0;
  v656.m128i_i64[0] = (__int64)ida_mcp::tools::fixups::`anonymous namespace'::handle_count_fixups;
  v657 = v161;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v657.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v657.m128i_i64[0])(&v656, &v656, 3);
  if ( v675 && v674 && v672 != (ida_mcp::tools::fixups *)v673 )
    operator delete(v672, v673[0] + 1LL);
  if ( v671 )
  {
    v671 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v666 != v668 )
    operator delete(v666, v668[0] + 1LL);
  if ( v663 != v665 )
    operator delete(v663, v665[0] + 1LL);
  v663 = v665;
  v664 = 0;
  LOBYTE(v665[0]) = 0;
  v666 = v668;
  v667 = 0;
  LOBYTE(v668[0]) = 0;
  v669 = 0;
  v670 = 0;
  v671 = 0;
  v675 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v626 = 0;
  *(_QWORD *)&v627 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v626 = 3;
  v162 = operator new(0x20u);
  *(_QWORD *)v162 = v162 + 16;
  strcpy((char *)(v162 + 16), "type");
  *(_QWORD *)(v162 + 8) = 4;
  LOBYTE(v628) = 0;
  *(_QWORD *)&v629 = 0;
  v627 = (unsigned __int64)v162;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v628) = 3;
  v163 = operator new(0x20u);
  *(_QWORD *)v163 = v163 + 16;
  v164 = (__int64)v574;
  strcpy((char *)(v163 + 16), "object");
  *(_QWORD *)(v163 + 8) = 6;
  v629 = (unsigned __int64)v163;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v656,
    v164,
    2,
    v165,
    v166,
    v167,
    v239,
    v277,
    v315,
    v342,
    v368,
    v394,
    v420,
    v446,
    v472,
    v498,
    v524,
    v550,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  v657.m128i_i64[0] = 0;
  LOBYTE(v648) = 0;
  *(_QWORD *)&v649 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v648) = 3;
  v168 = operator new(0x20u);
  *(_QWORD *)v168 = v168 + 16;
  strcpy((char *)(v168 + 16), "properties");
  *(_QWORD *)(v168 + 8) = 10;
  v643 = 0;
  *(_QWORD *)&v644 = 0;
  v649 = (unsigned __int64)v168;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v643 = 3;
  v169 = operator new(0x20u);
  *(_QWORD *)v169 = v169 + 16;
  strcpy((char *)(v169 + 16), "fixup_type");
  *(_QWORD *)(v169 + 8) = 10;
  v630 = 0;
  *(_QWORD *)&v631 = 0;
  v644 = (unsigned __int64)v169;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v630 = 3;
  v170 = operator new(0x20u);
  *(_QWORD *)v170 = v170 + 16;
  strcpy((char *)(v170 + 16), "type");
  *(_QWORD *)(v170 + 8) = 4;
  v632 = 0;
  *(_QWORD *)&v633 = 0;
  v631 = (unsigned __int64)v170;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v632 = 3;
  v171 = operator new(0x20u);
  v172 = (__int64)v575;
  *(_QWORD *)v171 = v171 + 16;
  strcpy((char *)(v171 + 16), "number");
  *(_QWORD *)(v171 + 8) = 6;
  v633 = (unsigned __int64)v171;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v369,
    v172,
    2,
    v173,
    v174,
    v175,
    v240,
    v278,
    v316,
    v343,
    (int)v369,
    v395,
    v421,
    v447,
    v473,
    v499,
    v525,
    v551,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  *((_QWORD *)&v639 + 1) = 0;
  v634 = 0;
  *(_QWORD *)&v635 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v634 = 3;
  v176 = operator new(0x20u);
  *(_QWORD *)v176 = v176 + 16;
  strcpy((char *)(v176 + 16), "description");
  *(_QWORD *)(v176 + 8) = 11;
  LOBYTE(v636) = 0;
  *(_QWORD *)&v637 = 0;
  v635 = (unsigned __int64)v176;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v636) = 3;
  v177 = operator new(0x20u);
  v178 = v564;
  *(_QWORD *)v177 = v177 + 16;
  v179 = v582;
  strcpy((char *)(v177 + 16), "Fixup type ID");
  *(_QWORD *)(v177 + 8) = 13;
  v637 = (unsigned __int64)v177;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v179,
    (__int64)v178,
    2,
    0x4449206570797420LL,
    v180,
    v181,
    v241,
    v279,
    v317,
    v344,
    v370,
    v396,
    v422,
    v448,
    v474,
    v500,
    v526,
    v552,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  v642 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v583,
    v371,
    2,
    v182,
    v183,
    v184,
    v242,
    v280,
    v318,
    v345,
    v371,
    v397,
    v423,
    v449,
    v475,
    v501,
    v527,
    v553,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  v647 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v528,
    (__int64)v563,
    2,
    v185,
    v186,
    v187,
    v243,
    v281,
    v319,
    v346,
    v372,
    v398,
    v424,
    v450,
    v476,
    v502,
    (int)v528,
    v554,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  *((_QWORD *)&v622 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v584,
    v529,
    1,
    v188,
    v189,
    v190,
    v244,
    v282,
    v320,
    v347,
    v373,
    v399,
    v425,
    v451,
    v477,
    v503,
    v529,
    v555,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  *((_QWORD *)&v651 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v569,
    v556,
    2,
    v191,
    v192,
    v193,
    v245,
    v283,
    v321,
    v348,
    v374,
    v400,
    v426,
    v452,
    v478,
    v504,
    v530,
    v556,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  v659 = 0;
  v652 = 0;
  *(_QWORD *)&v653 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v652 = 3;
  v194 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v194, "required", v195, v196, v197, v198, v246, v284, v322);
  v617 = 0;
  *(_QWORD *)&v618 = 0;
  v653 = (unsigned __int64)v194;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v617 = 3;
  v199 = operator new(0x20u);
  *(_QWORD *)v199 = v199 + 16;
  strcpy((char *)(v199 + 16), "fixup_type");
  *(_QWORD *)(v199 + 8) = 10;
  v618 = (unsigned __int64)v199;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v200 = _mm_load_si128(&v598);
  v655 = 0;
  v654 = v200;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v587,
    (__int64)v562,
    2,
    v201,
    v202,
    v203,
    v247,
    v285,
    v323,
    v349,
    v375,
    v401,
    v427,
    v453,
    v479,
    v505,
    v531,
    v557,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  v661 = 0;
  LOBYTE(v599) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v572,
    (__int64)&v656,
    3,
    v204,
    v205,
    v206,
    v248,
    v286,
    v324,
    v350,
    v376,
    v402,
    v428,
    v454,
    v480,
    v506,
    v532,
    v558,
    v559.m128i_i64[0],
    v559.m128i_i32[2],
    (__int64)v560);
  LOBYTE(v178) = v669;
  v207 = (__m128i *)&v662;
  v669 = v599;
  v208 = v670;
  LOBYTE(v599) = (_BYTE)v178;
  v670 = v600;
  v600 = v208;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v207 = (__m128i *)((char *)v207 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v207 != &v656 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v209 = _mm_load_si128(&v559);
  v656.m128i_i64[1] = 0;
  v656.m128i_i64[0] = (__int64)ida_mcp::tools::fixups::`anonymous namespace'::handle_get_fixup_type_description;
  v657 = v209;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v657.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v657.m128i_i64[0])(&v656, &v656, 3);
  if ( v675 && v674 && v672 != (ida_mcp::tools::fixups *)v673 )
    operator delete(v672, v673[0] + 1LL);
  if ( v671 )
  {
    v671 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v666 != v668 )
    operator delete(v666, v668[0] + 1LL);
  if ( v663 != v665 )
    operator delete(v663, v665[0] + 1LL);
  return v676 - __readfsqword(0x28u);
}

