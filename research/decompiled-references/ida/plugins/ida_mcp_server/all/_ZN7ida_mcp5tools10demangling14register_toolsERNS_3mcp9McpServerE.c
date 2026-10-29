unsigned __int64 __fastcall ida_mcp::tools::demangling::register_tools(
        ida_mcp::tools::demangling *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 *v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 *v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 *v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __m128 v57; // xmm1
  __m128i v58; // xmm0
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  char v62; // si
  void **v63; // r15
  __int64 v64; // rdx
  __m128i v65; // xmm2
  __int64 v66; // rax
  __int64 *v67; // r15
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 *v72; // r15
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 *v79; // r15
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 *v84; // r15
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 *v89; // r15
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 *v97; // r15
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  __m128i v103; // xmm0
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  char v107; // si
  void **v108; // r15
  __int64 v109; // rax
  __m128i v110; // xmm3
  __int64 v111; // rax
  __int64 *v112; // r15
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 *v120; // r15
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 *v127; // r15
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 *v135; // r15
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 *v140; // r15
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 *v160; // r15
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rax
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
  __int64 v177; // rax
  __int64 *v178; // r15
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 *v186; // r15
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 *v191; // r15
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rax
  __int64 *v197; // r15
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 *v205; // r15
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 *v210; // r15
  __int64 v211; // rdx
  __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // r9
  __int64 *v224; // r15
  __int64 v225; // rdx
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  __int64 v229; // rax
  __int64 *v230; // r15
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 *v238; // r15
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // r8
  __int64 v242; // r9
  __int64 *v243; // r15
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
  __int64 *v263; // r15
  __int64 v264; // rdx
  __int64 v265; // rcx
  __int64 v266; // r8
  __int64 v267; // r9
  __int64 *v268; // r15
  __int64 v269; // rdx
  __int64 v270; // rcx
  __int64 v271; // r8
  __int64 v272; // r9
  __m128i v273; // xmm0
  __int64 v274; // rcx
  __int64 v275; // r8
  __int64 v276; // r9
  __int64 v277; // rcx
  __int64 v278; // r8
  __int64 v279; // r9
  char v280; // si
  void **v281; // r15
  __int64 v282; // rax
  __m128i v283; // xmm5
  __int64 v284; // rax
  __int64 *v285; // r15
  __int64 v286; // rdx
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
  __int64 *v298; // r15
  __int64 v299; // rdx
  __int64 v300; // rcx
  __int64 v301; // r8
  __int64 v302; // r9
  __int64 v303; // rax
  __int64 *v304; // r15
  __int64 v305; // rdx
  __int64 v306; // rcx
  __int64 v307; // r8
  __int64 v308; // r9
  __int64 v309; // rcx
  __int64 v310; // r8
  __int64 v311; // r9
  __int64 *v312; // r15
  __int64 v313; // rdx
  __int64 v314; // rcx
  __int64 v315; // r8
  __int64 v316; // r9
  __int64 *v317; // r15
  __int64 v318; // rdx
  __int64 v319; // rcx
  __int64 v320; // r8
  __int64 v321; // r9
  __int64 v322; // rcx
  __int64 v323; // r8
  __int64 v324; // r9
  __int64 v325; // rcx
  __int64 v326; // r8
  __int64 v327; // r9
  __int64 v328; // rcx
  __int64 v329; // r8
  __int64 v330; // r9
  __int64 v331; // rcx
  __int64 v332; // r8
  __int64 v333; // r9
  __int64 v334; // rcx
  __int64 v335; // r8
  __int64 v336; // r9
  __int64 *v337; // r15
  __int64 v338; // rdx
  __int64 v339; // rcx
  __int64 v340; // r8
  __int64 v341; // r9
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
  char v354; // si
  void **v355; // r15
  __int64 v356; // rax
  __m128i v357; // xmm6
  int v359; // [rsp+0h] [rbp-568h]
  int v360; // [rsp+0h] [rbp-568h]
  int v361; // [rsp+0h] [rbp-568h]
  int v362; // [rsp+0h] [rbp-568h]
  int v363; // [rsp+0h] [rbp-568h]
  int v364; // [rsp+0h] [rbp-568h]
  int v365; // [rsp+0h] [rbp-568h]
  int v366; // [rsp+0h] [rbp-568h]
  int v367; // [rsp+0h] [rbp-568h]
  int v368; // [rsp+0h] [rbp-568h]
  int v369; // [rsp+0h] [rbp-568h]
  int v370; // [rsp+0h] [rbp-568h]
  int v371; // [rsp+0h] [rbp-568h]
  int v372; // [rsp+0h] [rbp-568h]
  int v373; // [rsp+0h] [rbp-568h]
  int v374; // [rsp+0h] [rbp-568h]
  int v375; // [rsp+0h] [rbp-568h]
  int v376; // [rsp+0h] [rbp-568h]
  int v377; // [rsp+0h] [rbp-568h]
  int v378; // [rsp+0h] [rbp-568h]
  int v379; // [rsp+0h] [rbp-568h]
  int v380; // [rsp+0h] [rbp-568h]
  int v381; // [rsp+0h] [rbp-568h]
  int v382; // [rsp+0h] [rbp-568h]
  int v383; // [rsp+0h] [rbp-568h]
  int v384; // [rsp+0h] [rbp-568h]
  int v385; // [rsp+0h] [rbp-568h]
  int v386; // [rsp+0h] [rbp-568h]
  int v387; // [rsp+0h] [rbp-568h]
  int v388; // [rsp+0h] [rbp-568h]
  int v389; // [rsp+0h] [rbp-568h]
  int v390; // [rsp+0h] [rbp-568h]
  int v391; // [rsp+0h] [rbp-568h]
  int v392; // [rsp+0h] [rbp-568h]
  int v393; // [rsp+0h] [rbp-568h]
  int v394; // [rsp+0h] [rbp-568h]
  int v395; // [rsp+0h] [rbp-568h]
  int v396; // [rsp+0h] [rbp-568h]
  int v397; // [rsp+0h] [rbp-568h]
  int v398; // [rsp+0h] [rbp-568h]
  int v399; // [rsp+0h] [rbp-568h]
  int v400; // [rsp+0h] [rbp-568h]
  int v401; // [rsp+0h] [rbp-568h]
  int v402; // [rsp+0h] [rbp-568h]
  int v403; // [rsp+0h] [rbp-568h]
  int v404; // [rsp+0h] [rbp-568h]
  int v405; // [rsp+0h] [rbp-568h]
  int v406; // [rsp+0h] [rbp-568h]
  int v407; // [rsp+0h] [rbp-568h]
  int v408; // [rsp+0h] [rbp-568h]
  int v409; // [rsp+0h] [rbp-568h]
  int v410; // [rsp+0h] [rbp-568h]
  int v411; // [rsp+0h] [rbp-568h]
  int v412; // [rsp+0h] [rbp-568h]
  int v413; // [rsp+0h] [rbp-568h]
  int v414; // [rsp+0h] [rbp-568h]
  int v415; // [rsp+0h] [rbp-568h]
  int v416; // [rsp+0h] [rbp-568h]
  int v417; // [rsp+0h] [rbp-568h]
  int v418; // [rsp+0h] [rbp-568h]
  int v419; // [rsp+0h] [rbp-568h]
  int v420; // [rsp+0h] [rbp-568h]
  int v421; // [rsp+0h] [rbp-568h]
  int v422; // [rsp+0h] [rbp-568h]
  int v423; // [rsp+0h] [rbp-568h]
  int v424; // [rsp+0h] [rbp-568h]
  int v425; // [rsp+0h] [rbp-568h]
  int v426; // [rsp+0h] [rbp-568h]
  int v427; // [rsp+0h] [rbp-568h]
  int v428; // [rsp+0h] [rbp-568h]
  int v429; // [rsp+0h] [rbp-568h]
  int v430; // [rsp+0h] [rbp-568h]
  int v431; // [rsp+0h] [rbp-568h]
  int v432; // [rsp+0h] [rbp-568h]
  int v433; // [rsp+0h] [rbp-568h]
  int v434; // [rsp+0h] [rbp-568h]
  int v435; // [rsp+8h] [rbp-560h]
  int v436; // [rsp+8h] [rbp-560h]
  int v437; // [rsp+8h] [rbp-560h]
  int v438; // [rsp+8h] [rbp-560h]
  int v439; // [rsp+8h] [rbp-560h]
  int v440; // [rsp+8h] [rbp-560h]
  int v441; // [rsp+8h] [rbp-560h]
  int v442; // [rsp+8h] [rbp-560h]
  int v443; // [rsp+8h] [rbp-560h]
  __int64 v444; // [rsp+8h] [rbp-560h]
  int v445; // [rsp+8h] [rbp-560h]
  int v446; // [rsp+8h] [rbp-560h]
  int v447; // [rsp+8h] [rbp-560h]
  int v448; // [rsp+8h] [rbp-560h]
  int v449; // [rsp+8h] [rbp-560h]
  __int64 v450; // [rsp+8h] [rbp-560h]
  int v451; // [rsp+8h] [rbp-560h]
  __int64 v452; // [rsp+8h] [rbp-560h]
  int v453; // [rsp+8h] [rbp-560h]
  __int64 v454; // [rsp+8h] [rbp-560h]
  int v455; // [rsp+8h] [rbp-560h]
  int v456; // [rsp+8h] [rbp-560h]
  __int64 v457; // [rsp+8h] [rbp-560h]
  int v458; // [rsp+8h] [rbp-560h]
  int v459; // [rsp+8h] [rbp-560h]
  __int64 v460; // [rsp+8h] [rbp-560h]
  __int64 v461; // [rsp+8h] [rbp-560h]
  __int64 v462; // [rsp+8h] [rbp-560h]
  __int64 v463; // [rsp+8h] [rbp-560h]
  __int64 v464; // [rsp+8h] [rbp-560h]
  int v465; // [rsp+8h] [rbp-560h]
  __int64 v466; // [rsp+8h] [rbp-560h]
  __int64 v467; // [rsp+8h] [rbp-560h]
  int v468; // [rsp+8h] [rbp-560h]
  __int64 v469; // [rsp+8h] [rbp-560h]
  int v470; // [rsp+8h] [rbp-560h]
  int v471; // [rsp+8h] [rbp-560h]
  int v472; // [rsp+8h] [rbp-560h]
  __int64 v473; // [rsp+8h] [rbp-560h]
  int v474; // [rsp+8h] [rbp-560h]
  int v475; // [rsp+8h] [rbp-560h]
  __int64 v476; // [rsp+8h] [rbp-560h]
  __int64 v477; // [rsp+8h] [rbp-560h]
  __int64 v478; // [rsp+8h] [rbp-560h]
  int v479; // [rsp+8h] [rbp-560h]
  int v480; // [rsp+8h] [rbp-560h]
  __int64 v481; // [rsp+8h] [rbp-560h]
  int v482; // [rsp+8h] [rbp-560h]
  int v483; // [rsp+8h] [rbp-560h]
  __int64 v484; // [rsp+8h] [rbp-560h]
  __int64 v485; // [rsp+8h] [rbp-560h]
  __int64 v486; // [rsp+8h] [rbp-560h]
  __int64 v487; // [rsp+8h] [rbp-560h]
  __int64 v488; // [rsp+8h] [rbp-560h]
  int v489; // [rsp+8h] [rbp-560h]
  int v490; // [rsp+8h] [rbp-560h]
  __int64 v491; // [rsp+8h] [rbp-560h]
  __int64 v492; // [rsp+8h] [rbp-560h]
  int v493; // [rsp+8h] [rbp-560h]
  __int64 v494; // [rsp+8h] [rbp-560h]
  int v495; // [rsp+8h] [rbp-560h]
  int v496; // [rsp+8h] [rbp-560h]
  int v497; // [rsp+8h] [rbp-560h]
  __int64 v498; // [rsp+8h] [rbp-560h]
  int v499; // [rsp+8h] [rbp-560h]
  int v500; // [rsp+8h] [rbp-560h]
  __int64 v501; // [rsp+8h] [rbp-560h]
  __int64 v502; // [rsp+8h] [rbp-560h]
  __int64 v503; // [rsp+8h] [rbp-560h]
  __int64 v504; // [rsp+8h] [rbp-560h]
  __int64 v505; // [rsp+8h] [rbp-560h]
  int v506; // [rsp+8h] [rbp-560h]
  int v507; // [rsp+8h] [rbp-560h]
  __int64 v508; // [rsp+8h] [rbp-560h]
  __int64 v509; // [rsp+8h] [rbp-560h]
  __int64 v510; // [rsp+10h] [rbp-558h]
  __int64 v511; // [rsp+10h] [rbp-558h]
  __int64 v512; // [rsp+10h] [rbp-558h]
  __int64 v513; // [rsp+10h] [rbp-558h]
  __int64 v514; // [rsp+10h] [rbp-558h]
  __int64 v515; // [rsp+10h] [rbp-558h]
  __int64 v516; // [rsp+10h] [rbp-558h]
  __int64 v517; // [rsp+10h] [rbp-558h]
  __int64 v518; // [rsp+10h] [rbp-558h]
  int v519; // [rsp+10h] [rbp-558h]
  __int64 v520; // [rsp+10h] [rbp-558h]
  __int64 v521; // [rsp+10h] [rbp-558h]
  __int64 v522; // [rsp+10h] [rbp-558h]
  __int64 v523; // [rsp+10h] [rbp-558h]
  __int64 v524; // [rsp+10h] [rbp-558h]
  int v525; // [rsp+10h] [rbp-558h]
  __int64 v526; // [rsp+10h] [rbp-558h]
  int v527; // [rsp+10h] [rbp-558h]
  __int64 v528; // [rsp+10h] [rbp-558h]
  int v529; // [rsp+10h] [rbp-558h]
  __int64 v530; // [rsp+10h] [rbp-558h]
  __int64 v531; // [rsp+10h] [rbp-558h]
  int v532; // [rsp+10h] [rbp-558h]
  __int64 v533; // [rsp+10h] [rbp-558h]
  __int64 v534; // [rsp+10h] [rbp-558h]
  int v535; // [rsp+10h] [rbp-558h]
  int v536; // [rsp+10h] [rbp-558h]
  int v537; // [rsp+10h] [rbp-558h]
  int v538; // [rsp+10h] [rbp-558h]
  int v539; // [rsp+10h] [rbp-558h]
  __int64 v540; // [rsp+10h] [rbp-558h]
  int v541; // [rsp+10h] [rbp-558h]
  int v542; // [rsp+10h] [rbp-558h]
  __int64 v543; // [rsp+10h] [rbp-558h]
  int v544; // [rsp+10h] [rbp-558h]
  __int64 v545; // [rsp+10h] [rbp-558h]
  __int64 v546; // [rsp+10h] [rbp-558h]
  __int64 v547; // [rsp+10h] [rbp-558h]
  int v548; // [rsp+10h] [rbp-558h]
  __int64 v549; // [rsp+10h] [rbp-558h]
  __int64 v550; // [rsp+10h] [rbp-558h]
  int v551; // [rsp+10h] [rbp-558h]
  int v552; // [rsp+10h] [rbp-558h]
  int v553; // [rsp+10h] [rbp-558h]
  __int64 v554; // [rsp+10h] [rbp-558h]
  __int64 v555; // [rsp+10h] [rbp-558h]
  int v556; // [rsp+10h] [rbp-558h]
  __int64 v557; // [rsp+10h] [rbp-558h]
  __int64 v558; // [rsp+10h] [rbp-558h]
  int v559; // [rsp+10h] [rbp-558h]
  int v560; // [rsp+10h] [rbp-558h]
  int v561; // [rsp+10h] [rbp-558h]
  int v562; // [rsp+10h] [rbp-558h]
  int v563; // [rsp+10h] [rbp-558h]
  __int64 v564; // [rsp+10h] [rbp-558h]
  __int64 v565; // [rsp+10h] [rbp-558h]
  int v566; // [rsp+10h] [rbp-558h]
  int v567; // [rsp+10h] [rbp-558h]
  __int64 v568; // [rsp+10h] [rbp-558h]
  int v569; // [rsp+10h] [rbp-558h]
  __int64 v570; // [rsp+10h] [rbp-558h]
  __int64 v571; // [rsp+10h] [rbp-558h]
  __int64 v572; // [rsp+10h] [rbp-558h]
  int v573; // [rsp+10h] [rbp-558h]
  __int64 v574; // [rsp+10h] [rbp-558h]
  __int64 v575; // [rsp+10h] [rbp-558h]
  int v576; // [rsp+10h] [rbp-558h]
  int v577; // [rsp+10h] [rbp-558h]
  int v578; // [rsp+10h] [rbp-558h]
  int v579; // [rsp+10h] [rbp-558h]
  int v580; // [rsp+10h] [rbp-558h]
  __int64 v581; // [rsp+10h] [rbp-558h]
  __int64 v582; // [rsp+10h] [rbp-558h]
  int v583; // [rsp+10h] [rbp-558h]
  int v584; // [rsp+10h] [rbp-558h]
  int v585; // [rsp+18h] [rbp-550h]
  int v586; // [rsp+18h] [rbp-550h]
  int v587; // [rsp+18h] [rbp-550h]
  int v588; // [rsp+18h] [rbp-550h]
  int v589; // [rsp+18h] [rbp-550h]
  int v590; // [rsp+18h] [rbp-550h]
  int v591; // [rsp+18h] [rbp-550h]
  int v592; // [rsp+18h] [rbp-550h]
  int v593; // [rsp+18h] [rbp-550h]
  int v594; // [rsp+18h] [rbp-550h]
  int v595; // [rsp+18h] [rbp-550h]
  int v596; // [rsp+18h] [rbp-550h]
  int v597; // [rsp+18h] [rbp-550h]
  int v598; // [rsp+18h] [rbp-550h]
  int v599; // [rsp+18h] [rbp-550h]
  int v600; // [rsp+18h] [rbp-550h]
  int v601; // [rsp+18h] [rbp-550h]
  int v602; // [rsp+18h] [rbp-550h]
  int v603; // [rsp+18h] [rbp-550h]
  int v604; // [rsp+18h] [rbp-550h]
  int v605; // [rsp+18h] [rbp-550h]
  int v606; // [rsp+18h] [rbp-550h]
  int v607; // [rsp+18h] [rbp-550h]
  int v608; // [rsp+18h] [rbp-550h]
  int v609; // [rsp+18h] [rbp-550h]
  int v610; // [rsp+18h] [rbp-550h]
  int v611; // [rsp+18h] [rbp-550h]
  int v612; // [rsp+18h] [rbp-550h]
  int v613; // [rsp+18h] [rbp-550h]
  int v614; // [rsp+18h] [rbp-550h]
  int v615; // [rsp+18h] [rbp-550h]
  int v616; // [rsp+18h] [rbp-550h]
  int v617; // [rsp+18h] [rbp-550h]
  int v618; // [rsp+20h] [rbp-548h]
  int v619; // [rsp+20h] [rbp-548h]
  int v620; // [rsp+20h] [rbp-548h]
  int v621; // [rsp+20h] [rbp-548h]
  int v622; // [rsp+20h] [rbp-548h]
  int v623; // [rsp+20h] [rbp-548h]
  int v624; // [rsp+20h] [rbp-548h]
  int v625; // [rsp+20h] [rbp-548h]
  int v626; // [rsp+20h] [rbp-548h]
  int v627; // [rsp+20h] [rbp-548h]
  int v628; // [rsp+20h] [rbp-548h]
  int v629; // [rsp+20h] [rbp-548h]
  int v630; // [rsp+20h] [rbp-548h]
  int v631; // [rsp+20h] [rbp-548h]
  int v632; // [rsp+20h] [rbp-548h]
  int v633; // [rsp+20h] [rbp-548h]
  int v634; // [rsp+20h] [rbp-548h]
  int v635; // [rsp+20h] [rbp-548h]
  int v636; // [rsp+20h] [rbp-548h]
  int v637; // [rsp+20h] [rbp-548h]
  int v638; // [rsp+20h] [rbp-548h]
  int v639; // [rsp+20h] [rbp-548h]
  int v640; // [rsp+20h] [rbp-548h]
  int v641; // [rsp+20h] [rbp-548h]
  int v642; // [rsp+20h] [rbp-548h]
  int v643; // [rsp+20h] [rbp-548h]
  int v644; // [rsp+20h] [rbp-548h]
  int v645; // [rsp+20h] [rbp-548h]
  int v646; // [rsp+20h] [rbp-548h]
  int v647; // [rsp+20h] [rbp-548h]
  int v648; // [rsp+20h] [rbp-548h]
  int v649; // [rsp+20h] [rbp-548h]
  int v650; // [rsp+20h] [rbp-548h]
  int v651; // [rsp+28h] [rbp-540h]
  int v652; // [rsp+28h] [rbp-540h]
  int v653; // [rsp+28h] [rbp-540h]
  int v654; // [rsp+28h] [rbp-540h]
  int v655; // [rsp+28h] [rbp-540h]
  int v656; // [rsp+28h] [rbp-540h]
  int v657; // [rsp+28h] [rbp-540h]
  int v658; // [rsp+28h] [rbp-540h]
  int v659; // [rsp+28h] [rbp-540h]
  int v660; // [rsp+28h] [rbp-540h]
  int v661; // [rsp+28h] [rbp-540h]
  int v662; // [rsp+28h] [rbp-540h]
  int v663; // [rsp+28h] [rbp-540h]
  int v664; // [rsp+28h] [rbp-540h]
  int v665; // [rsp+28h] [rbp-540h]
  int v666; // [rsp+28h] [rbp-540h]
  int v667; // [rsp+28h] [rbp-540h]
  int v668; // [rsp+28h] [rbp-540h]
  int v669; // [rsp+28h] [rbp-540h]
  int v670; // [rsp+28h] [rbp-540h]
  int v671; // [rsp+28h] [rbp-540h]
  int v672; // [rsp+28h] [rbp-540h]
  int v673; // [rsp+28h] [rbp-540h]
  int v674; // [rsp+28h] [rbp-540h]
  int v675; // [rsp+28h] [rbp-540h]
  int v676; // [rsp+28h] [rbp-540h]
  int v677; // [rsp+28h] [rbp-540h]
  int v678; // [rsp+28h] [rbp-540h]
  int v679; // [rsp+28h] [rbp-540h]
  int v680; // [rsp+28h] [rbp-540h]
  int v681; // [rsp+28h] [rbp-540h]
  int v682; // [rsp+28h] [rbp-540h]
  int v683; // [rsp+28h] [rbp-540h]
  __m128i *v684; // [rsp+30h] [rbp-538h]
  __int64 v685; // [rsp+30h] [rbp-538h]
  __int64 v686; // [rsp+30h] [rbp-538h]
  _QWORD *v687; // [rsp+30h] [rbp-538h]
  __int64 v688; // [rsp+30h] [rbp-538h]
  __int64 v689; // [rsp+30h] [rbp-538h]
  __int64 v690; // [rsp+30h] [rbp-538h]
  __int64 v691; // [rsp+30h] [rbp-538h]
  __int64 v692; // [rsp+30h] [rbp-538h]
  __int64 v693; // [rsp+30h] [rbp-538h]
  __int64 v694; // [rsp+30h] [rbp-538h]
  __int64 v695; // [rsp+30h] [rbp-538h]
  __int64 v696; // [rsp+30h] [rbp-538h]
  __int64 v697; // [rsp+30h] [rbp-538h]
  __int64 v698; // [rsp+30h] [rbp-538h]
  __int64 v699; // [rsp+30h] [rbp-538h]
  __int64 v700; // [rsp+30h] [rbp-538h]
  __int64 v701; // [rsp+30h] [rbp-538h]
  __int64 v702; // [rsp+30h] [rbp-538h]
  __int64 v703; // [rsp+30h] [rbp-538h]
  __int64 v704; // [rsp+30h] [rbp-538h]
  __int64 v705; // [rsp+30h] [rbp-538h]
  __int64 v706; // [rsp+30h] [rbp-538h]
  __int64 v707; // [rsp+30h] [rbp-538h]
  __int64 v708; // [rsp+30h] [rbp-538h]
  _QWORD *v709; // [rsp+30h] [rbp-538h]
  __int64 v710; // [rsp+30h] [rbp-538h]
  __int64 v711; // [rsp+30h] [rbp-538h]
  __int64 v712; // [rsp+30h] [rbp-538h]
  __int64 v713; // [rsp+30h] [rbp-538h]
  __int64 v714; // [rsp+30h] [rbp-538h]
  __int64 v715; // [rsp+30h] [rbp-538h]
  __int64 v716; // [rsp+30h] [rbp-538h]
  _QWORD *v717; // [rsp+38h] [rbp-530h]
  int v718; // [rsp+38h] [rbp-530h]
  int v719; // [rsp+38h] [rbp-530h]
  int v720; // [rsp+38h] [rbp-530h]
  int v721; // [rsp+38h] [rbp-530h]
  int v722; // [rsp+38h] [rbp-530h]
  _QWORD *v723; // [rsp+38h] [rbp-530h]
  __int64 v724; // [rsp+38h] [rbp-530h]
  int v725; // [rsp+38h] [rbp-530h]
  int v726; // [rsp+38h] [rbp-530h]
  int v727; // [rsp+38h] [rbp-530h]
  int v728; // [rsp+38h] [rbp-530h]
  int v729; // [rsp+38h] [rbp-530h]
  int v730; // [rsp+38h] [rbp-530h]
  int v731; // [rsp+38h] [rbp-530h]
  __int64 v732; // [rsp+38h] [rbp-530h]
  int v733; // [rsp+38h] [rbp-530h]
  int v734; // [rsp+38h] [rbp-530h]
  int v735; // [rsp+38h] [rbp-530h]
  int v736; // [rsp+38h] [rbp-530h]
  int v737; // [rsp+38h] [rbp-530h]
  int v738; // [rsp+38h] [rbp-530h]
  int v739; // [rsp+38h] [rbp-530h]
  int v740; // [rsp+38h] [rbp-530h]
  int v741; // [rsp+38h] [rbp-530h]
  int v742; // [rsp+38h] [rbp-530h]
  int v743; // [rsp+38h] [rbp-530h]
  int v744; // [rsp+38h] [rbp-530h]
  _QWORD *v745; // [rsp+38h] [rbp-530h]
  __int64 v746; // [rsp+38h] [rbp-530h]
  int v747; // [rsp+38h] [rbp-530h]
  int v748; // [rsp+38h] [rbp-530h]
  int v749; // [rsp+38h] [rbp-530h]
  int v750; // [rsp+40h] [rbp-528h]
  int v751; // [rsp+40h] [rbp-528h]
  int v752; // [rsp+40h] [rbp-528h]
  int v753; // [rsp+40h] [rbp-528h]
  int v754; // [rsp+40h] [rbp-528h]
  int v755; // [rsp+40h] [rbp-528h]
  int v756; // [rsp+40h] [rbp-528h]
  int v757; // [rsp+40h] [rbp-528h]
  int v758; // [rsp+40h] [rbp-528h]
  int v759; // [rsp+40h] [rbp-528h]
  int v760; // [rsp+40h] [rbp-528h]
  int v761; // [rsp+40h] [rbp-528h]
  int v762; // [rsp+40h] [rbp-528h]
  int v763; // [rsp+40h] [rbp-528h]
  int v764; // [rsp+40h] [rbp-528h]
  int v765; // [rsp+40h] [rbp-528h]
  int v766; // [rsp+40h] [rbp-528h]
  int v767; // [rsp+40h] [rbp-528h]
  int v768; // [rsp+40h] [rbp-528h]
  int v769; // [rsp+40h] [rbp-528h]
  int v770; // [rsp+40h] [rbp-528h]
  int v771; // [rsp+40h] [rbp-528h]
  int v772; // [rsp+40h] [rbp-528h]
  int v773; // [rsp+40h] [rbp-528h]
  int v774; // [rsp+40h] [rbp-528h]
  int v775; // [rsp+40h] [rbp-528h]
  int v776; // [rsp+40h] [rbp-528h]
  int v777; // [rsp+40h] [rbp-528h]
  int v778; // [rsp+40h] [rbp-528h]
  int v779; // [rsp+40h] [rbp-528h]
  int v780; // [rsp+40h] [rbp-528h]
  int v781; // [rsp+40h] [rbp-528h]
  int v782; // [rsp+40h] [rbp-528h]
  int v783; // [rsp+48h] [rbp-520h]
  int v784; // [rsp+48h] [rbp-520h]
  int v785; // [rsp+48h] [rbp-520h]
  int v786; // [rsp+48h] [rbp-520h]
  int v787; // [rsp+48h] [rbp-520h]
  int v788; // [rsp+48h] [rbp-520h]
  int v789; // [rsp+48h] [rbp-520h]
  int v790; // [rsp+48h] [rbp-520h]
  int v791; // [rsp+48h] [rbp-520h]
  int v792; // [rsp+48h] [rbp-520h]
  int v793; // [rsp+48h] [rbp-520h]
  int v794; // [rsp+48h] [rbp-520h]
  int v795; // [rsp+48h] [rbp-520h]
  int v796; // [rsp+48h] [rbp-520h]
  int v797; // [rsp+48h] [rbp-520h]
  int v798; // [rsp+48h] [rbp-520h]
  int v799; // [rsp+48h] [rbp-520h]
  int v800; // [rsp+48h] [rbp-520h]
  int v801; // [rsp+48h] [rbp-520h]
  int v802; // [rsp+48h] [rbp-520h]
  int v803; // [rsp+48h] [rbp-520h]
  int v804; // [rsp+48h] [rbp-520h]
  int v805; // [rsp+48h] [rbp-520h]
  int v806; // [rsp+48h] [rbp-520h]
  int v807; // [rsp+48h] [rbp-520h]
  int v808; // [rsp+48h] [rbp-520h]
  int v809; // [rsp+48h] [rbp-520h]
  int v810; // [rsp+48h] [rbp-520h]
  int v811; // [rsp+48h] [rbp-520h]
  int v812; // [rsp+48h] [rbp-520h]
  int v813; // [rsp+48h] [rbp-520h]
  int v814; // [rsp+48h] [rbp-520h]
  int v815; // [rsp+48h] [rbp-520h]
  int v816; // [rsp+50h] [rbp-518h]
  int v817; // [rsp+50h] [rbp-518h]
  int v818; // [rsp+50h] [rbp-518h]
  int v819; // [rsp+50h] [rbp-518h]
  int v820; // [rsp+50h] [rbp-518h]
  int v821; // [rsp+50h] [rbp-518h]
  int v822; // [rsp+50h] [rbp-518h]
  int v823; // [rsp+50h] [rbp-518h]
  int v824; // [rsp+50h] [rbp-518h]
  int v825; // [rsp+50h] [rbp-518h]
  int v826; // [rsp+50h] [rbp-518h]
  int v827; // [rsp+50h] [rbp-518h]
  int v828; // [rsp+50h] [rbp-518h]
  int v829; // [rsp+50h] [rbp-518h]
  int v830; // [rsp+50h] [rbp-518h]
  int v831; // [rsp+50h] [rbp-518h]
  int v832; // [rsp+50h] [rbp-518h]
  int v833; // [rsp+50h] [rbp-518h]
  int v834; // [rsp+50h] [rbp-518h]
  int v835; // [rsp+50h] [rbp-518h]
  int v836; // [rsp+50h] [rbp-518h]
  int v837; // [rsp+50h] [rbp-518h]
  int v838; // [rsp+50h] [rbp-518h]
  int v839; // [rsp+50h] [rbp-518h]
  int v840; // [rsp+50h] [rbp-518h]
  int v841; // [rsp+50h] [rbp-518h]
  int v842; // [rsp+50h] [rbp-518h]
  int v843; // [rsp+50h] [rbp-518h]
  int v844; // [rsp+50h] [rbp-518h]
  int v845; // [rsp+50h] [rbp-518h]
  int v846; // [rsp+50h] [rbp-518h]
  int v847; // [rsp+50h] [rbp-518h]
  int v848; // [rsp+50h] [rbp-518h]
  char v849; // [rsp+58h] [rbp-510h]
  char v850; // [rsp+58h] [rbp-510h]
  char v851; // [rsp+58h] [rbp-510h]
  char v852; // [rsp+58h] [rbp-510h]
  char v853; // [rsp+58h] [rbp-510h]
  char v854; // [rsp+58h] [rbp-510h]
  char v855; // [rsp+58h] [rbp-510h]
  char v856; // [rsp+58h] [rbp-510h]
  char v857; // [rsp+58h] [rbp-510h]
  char v858; // [rsp+58h] [rbp-510h]
  char v859; // [rsp+58h] [rbp-510h]
  char v860; // [rsp+58h] [rbp-510h]
  char v861; // [rsp+58h] [rbp-510h]
  char v862; // [rsp+58h] [rbp-510h]
  char v863; // [rsp+58h] [rbp-510h]
  char v864; // [rsp+58h] [rbp-510h]
  char v865; // [rsp+58h] [rbp-510h]
  char v866; // [rsp+58h] [rbp-510h]
  char v867; // [rsp+58h] [rbp-510h]
  char v868; // [rsp+58h] [rbp-510h]
  char v869; // [rsp+58h] [rbp-510h]
  char v870; // [rsp+58h] [rbp-510h]
  char v871; // [rsp+58h] [rbp-510h]
  char v872; // [rsp+58h] [rbp-510h]
  char v873; // [rsp+58h] [rbp-510h]
  char v874; // [rsp+58h] [rbp-510h]
  char v875; // [rsp+58h] [rbp-510h]
  char v876; // [rsp+58h] [rbp-510h]
  char v877; // [rsp+58h] [rbp-510h]
  char v878; // [rsp+58h] [rbp-510h]
  char v879; // [rsp+58h] [rbp-510h]
  char v880; // [rsp+58h] [rbp-510h]
  char v881; // [rsp+58h] [rbp-510h]
  const __m128i *v882; // [rsp+60h] [rbp-508h]
  __int64 v883; // [rsp+60h] [rbp-508h]
  __int64 v884; // [rsp+60h] [rbp-508h]
  __int64 v885; // [rsp+60h] [rbp-508h]
  __int64 v886; // [rsp+60h] [rbp-508h]
  __int64 v887; // [rsp+60h] [rbp-508h]
  __int64 v888; // [rsp+60h] [rbp-508h]
  __int64 v889; // [rsp+60h] [rbp-508h]
  __int64 v890; // [rsp+60h] [rbp-508h]
  __int64 v891; // [rsp+60h] [rbp-508h]
  __int64 v892; // [rsp+60h] [rbp-508h]
  __int64 v893; // [rsp+60h] [rbp-508h]
  __int64 v894; // [rsp+60h] [rbp-508h]
  __int64 v895; // [rsp+60h] [rbp-508h]
  __int64 v896; // [rsp+60h] [rbp-508h]
  _QWORD *v897; // [rsp+60h] [rbp-508h]
  __int64 v898; // [rsp+60h] [rbp-508h]
  __int64 v899; // [rsp+60h] [rbp-508h]
  __int64 v900; // [rsp+60h] [rbp-508h]
  __int64 v901; // [rsp+60h] [rbp-508h]
  __int64 v902; // [rsp+60h] [rbp-508h]
  __int64 v903; // [rsp+60h] [rbp-508h]
  __int64 v904; // [rsp+60h] [rbp-508h]
  __int64 v905; // [rsp+60h] [rbp-508h]
  __int64 v906; // [rsp+60h] [rbp-508h]
  __int64 v907; // [rsp+60h] [rbp-508h]
  __int64 v908; // [rsp+60h] [rbp-508h]
  __int64 v909; // [rsp+60h] [rbp-508h]
  __int64 v910; // [rsp+60h] [rbp-508h]
  __int64 v911; // [rsp+60h] [rbp-508h]
  __int64 v912; // [rsp+60h] [rbp-508h]
  __int64 v913; // [rsp+60h] [rbp-508h]
  __int64 v914; // [rsp+60h] [rbp-508h]
  const __m128i *v915; // [rsp+68h] [rbp-500h]
  int v916; // [rsp+68h] [rbp-500h]
  int v917; // [rsp+68h] [rbp-500h]
  int v918; // [rsp+68h] [rbp-500h]
  __int64 v919; // [rsp+68h] [rbp-500h]
  int v920; // [rsp+68h] [rbp-500h]
  int v921; // [rsp+68h] [rbp-500h]
  int v922; // [rsp+68h] [rbp-500h]
  int v923; // [rsp+68h] [rbp-500h]
  int v924; // [rsp+68h] [rbp-500h]
  int v925; // [rsp+68h] [rbp-500h]
  int v926; // [rsp+68h] [rbp-500h]
  int v927; // [rsp+68h] [rbp-500h]
  int v928; // [rsp+68h] [rbp-500h]
  int v929; // [rsp+68h] [rbp-500h]
  int v930; // [rsp+68h] [rbp-500h]
  _QWORD *v931; // [rsp+68h] [rbp-500h]
  int v932; // [rsp+68h] [rbp-500h]
  __int64 v933; // [rsp+68h] [rbp-500h]
  int v934; // [rsp+68h] [rbp-500h]
  int v935; // [rsp+68h] [rbp-500h]
  int v936; // [rsp+68h] [rbp-500h]
  int v937; // [rsp+68h] [rbp-500h]
  int v938; // [rsp+68h] [rbp-500h]
  int v939; // [rsp+68h] [rbp-500h]
  int v940; // [rsp+68h] [rbp-500h]
  __int64 v941; // [rsp+68h] [rbp-500h]
  int v942; // [rsp+68h] [rbp-500h]
  int v943; // [rsp+68h] [rbp-500h]
  int v944; // [rsp+68h] [rbp-500h]
  int v945; // [rsp+68h] [rbp-500h]
  int v946; // [rsp+68h] [rbp-500h]
  int v947; // [rsp+68h] [rbp-500h]
  __int64 v948; // [rsp+70h] [rbp-4F8h]
  __int64 v949; // [rsp+70h] [rbp-4F8h]
  __int64 v950; // [rsp+70h] [rbp-4F8h]
  __int64 v951; // [rsp+70h] [rbp-4F8h]
  __int64 v952; // [rsp+70h] [rbp-4F8h]
  __int64 v953; // [rsp+70h] [rbp-4F8h]
  __int64 v954; // [rsp+70h] [rbp-4F8h]
  __int64 v955; // [rsp+70h] [rbp-4F8h]
  __int64 v956; // [rsp+70h] [rbp-4F8h]
  __int64 v957; // [rsp+70h] [rbp-4F8h]
  __int64 v958; // [rsp+70h] [rbp-4F8h]
  __int64 v959; // [rsp+70h] [rbp-4F8h]
  __int64 v960; // [rsp+70h] [rbp-4F8h]
  __int64 v961; // [rsp+70h] [rbp-4F8h]
  __int64 v962; // [rsp+70h] [rbp-4F8h]
  __int64 v963; // [rsp+70h] [rbp-4F8h]
  __int64 v964; // [rsp+70h] [rbp-4F8h]
  __int64 v965; // [rsp+70h] [rbp-4F8h]
  __int64 v966; // [rsp+70h] [rbp-4F8h]
  __int64 v967; // [rsp+70h] [rbp-4F8h]
  __int64 v968; // [rsp+70h] [rbp-4F8h]
  __int64 v969; // [rsp+70h] [rbp-4F8h]
  __int64 v970; // [rsp+70h] [rbp-4F8h]
  __int64 v971; // [rsp+70h] [rbp-4F8h]
  __int64 v972; // [rsp+70h] [rbp-4F8h]
  __int64 v973; // [rsp+70h] [rbp-4F8h]
  __int64 v974; // [rsp+70h] [rbp-4F8h]
  __int64 v975; // [rsp+70h] [rbp-4F8h]
  __int64 v976; // [rsp+70h] [rbp-4F8h]
  __int64 v977; // [rsp+70h] [rbp-4F8h]
  __int64 v978; // [rsp+70h] [rbp-4F8h]
  __int64 v979; // [rsp+70h] [rbp-4F8h]
  __int64 v980; // [rsp+70h] [rbp-4F8h]
  __m128i v981; // [rsp+80h] [rbp-4E8h] BYREF
  __int64 *v982; // [rsp+90h] [rbp-4D8h]
  ida_mcp::tools::demangling *v983; // [rsp+98h] [rbp-4D0h]
  const __m128i *v984; // [rsp+A0h] [rbp-4C8h]
  const __m128i *v985; // [rsp+A8h] [rbp-4C0h]
  const __m128i *v986; // [rsp+B0h] [rbp-4B8h]
  const __m128i *v987; // [rsp+B8h] [rbp-4B0h]
  char *v988; // [rsp+C0h] [rbp-4A8h]
  char *v989; // [rsp+C8h] [rbp-4A0h]
  char *v990; // [rsp+D0h] [rbp-498h]
  __int8 *v991; // [rsp+D8h] [rbp-490h]
  __m128i *v992; // [rsp+E0h] [rbp-488h]
  __int64 *v993; // [rsp+E8h] [rbp-480h]
  __int64 *v994; // [rsp+F0h] [rbp-478h]
  __int64 *v995; // [rsp+F8h] [rbp-470h]
  __int64 *v996; // [rsp+100h] [rbp-468h]
  __int64 *v997; // [rsp+108h] [rbp-460h]
  __int64 *v998; // [rsp+110h] [rbp-458h]
  _QWORD *v999; // [rsp+118h] [rbp-450h]
  void **v1000; // [rsp+120h] [rbp-448h]
  __int64 *v1001; // [rsp+128h] [rbp-440h]
  __int128 *v1002; // [rsp+130h] [rbp-438h]
  __int128 *v1003; // [rsp+138h] [rbp-430h]
  __int128 *v1004; // [rsp+140h] [rbp-428h]
  __int128 *v1005; // [rsp+148h] [rbp-420h]
  __int128 *v1006; // [rsp+150h] [rbp-418h]
  __int128 *v1007; // [rsp+158h] [rbp-410h]
  __int128 *v1008; // [rsp+160h] [rbp-408h]
  char *v1009; // [rsp+168h] [rbp-400h]
  char *v1010; // [rsp+170h] [rbp-3F8h]
  char *v1011; // [rsp+178h] [rbp-3F0h]
  char *v1012; // [rsp+180h] [rbp-3E8h]
  char *v1013; // [rsp+188h] [rbp-3E0h]
  char *v1014; // [rsp+190h] [rbp-3D8h]
  __int64 *v1015; // [rsp+198h] [rbp-3D0h]
  __int64 *v1016; // [rsp+1A0h] [rbp-3C8h]
  __int64 *v1017; // [rsp+1A8h] [rbp-3C0h]
  __m128i v1018; // [rsp+1B0h] [rbp-3B8h] BYREF
  __int64 v1019; // [rsp+1C0h] [rbp-3A8h] BYREF
  __int64 v1020; // [rsp+1C8h] [rbp-3A0h] BYREF
  char v1021; // [rsp+1D0h] [rbp-398h] BYREF
  __int128 v1022; // [rsp+1D8h] [rbp-390h] BYREF
  char v1023; // [rsp+1F0h] [rbp-378h] BYREF
  __int128 v1024; // [rsp+1F8h] [rbp-370h] BYREF
  char v1025; // [rsp+208h] [rbp-360h]
  __int128 v1026; // [rsp+210h] [rbp-358h] BYREF
  char v1027; // [rsp+220h] [rbp-348h] BYREF
  __int128 v1028; // [rsp+228h] [rbp-340h] BYREF
  char v1029; // [rsp+238h] [rbp-330h]
  __int128 v1030; // [rsp+240h] [rbp-328h] BYREF
  char v1031; // [rsp+250h] [rbp-318h] BYREF
  __int128 v1032; // [rsp+258h] [rbp-310h] BYREF
  char v1033; // [rsp+268h] [rbp-300h]
  __int128 v1034; // [rsp+270h] [rbp-2F8h] BYREF
  __int64 v1035; // [rsp+280h] [rbp-2E8h] BYREF
  __int128 v1036; // [rsp+288h] [rbp-2E0h] BYREF
  __int64 v1037; // [rsp+298h] [rbp-2D0h] BYREF
  char v1038; // [rsp+2A0h] [rbp-2C8h] BYREF
  __int64 v1039; // [rsp+2A8h] [rbp-2C0h]
  char v1040; // [rsp+2B0h] [rbp-2B8h] BYREF
  __int128 v1041; // [rsp+2B8h] [rbp-2B0h] BYREF
  __int64 v1042; // [rsp+2C8h] [rbp-2A0h] BYREF
  char v1043; // [rsp+2D0h] [rbp-298h] BYREF
  __int64 v1044; // [rsp+2D8h] [rbp-290h]
  char v1045; // [rsp+2E0h] [rbp-288h] BYREF
  __int128 v1046; // [rsp+2E8h] [rbp-280h] BYREF
  char v1047; // [rsp+2F8h] [rbp-270h]
  __int128 v1048; // [rsp+300h] [rbp-268h] BYREF
  char v1049; // [rsp+310h] [rbp-258h] BYREF
  __int128 v1050; // [rsp+318h] [rbp-250h] BYREF
  char v1051; // [rsp+328h] [rbp-240h]
  __int128 v1052; // [rsp+330h] [rbp-238h] BYREF
  __int64 v1053; // [rsp+340h] [rbp-228h] BYREF
  __int128 v1054; // [rsp+348h] [rbp-220h] BYREF
  __int64 v1055; // [rsp+358h] [rbp-210h] BYREF
  __int128 v1056; // [rsp+360h] [rbp-208h] BYREF
  char v1057; // [rsp+370h] [rbp-1F8h] BYREF
  __int128 v1058; // [rsp+378h] [rbp-1F0h]
  __int64 v1059; // [rsp+388h] [rbp-1E0h] BYREF
  char v1060; // [rsp+390h] [rbp-1D8h] BYREF
  __int64 v1061; // [rsp+398h] [rbp-1D0h]
  __int64 v1062; // [rsp+3A0h] [rbp-1C8h] BYREF
  __int128 v1063; // [rsp+3A8h] [rbp-1C0h] BYREF
  __int64 v1064; // [rsp+3B8h] [rbp-1B0h] BYREF
  char v1065; // [rsp+3C0h] [rbp-1A8h] BYREF
  __int64 v1066; // [rsp+3C8h] [rbp-1A0h]
  char v1067; // [rsp+3D0h] [rbp-198h] BYREF
  __int128 v1068; // [rsp+3D8h] [rbp-190h]
  __int64 v1069; // [rsp+3E8h] [rbp-180h] BYREF
  char v1070; // [rsp+3F0h] [rbp-178h] BYREF
  __int64 v1071; // [rsp+3F8h] [rbp-170h]
  char v1072; // [rsp+400h] [rbp-168h] BYREF
  __int128 v1073; // [rsp+408h] [rbp-160h]
  __m128i v1074; // [rsp+418h] [rbp-150h] BYREF
  __int64 v1075; // [rsp+428h] [rbp-140h]
  void *v1076; // [rsp+430h] [rbp-138h] BYREF
  __int64 v1077; // [rsp+438h] [rbp-130h]
  __m128i v1078; // [rsp+440h] [rbp-128h] BYREF
  __int64 v1079; // [rsp+458h] [rbp-110h]
  _QWORD v1080[2]; // [rsp+460h] [rbp-108h] BYREF
  __int64 v1081; // [rsp+470h] [rbp-F8h]
  char v1082; // [rsp+478h] [rbp-F0h] BYREF
  void *v1083; // [rsp+480h] [rbp-E8h] BYREF
  __int64 v1084; // [rsp+488h] [rbp-E0h]
  _QWORD v1085[2]; // [rsp+490h] [rbp-D8h] BYREF
  void *v1086; // [rsp+4A0h] [rbp-C8h] BYREF
  __int64 v1087; // [rsp+4A8h] [rbp-C0h]
  _QWORD v1088[2]; // [rsp+4B0h] [rbp-B8h] BYREF
  char v1089; // [rsp+4C0h] [rbp-A8h]
  __int64 v1090; // [rsp+4C8h] [rbp-A0h] BYREF
  char v1091; // [rsp+4E0h] [rbp-88h]
  ida_mcp::tools::demangling *v1092; // [rsp+4E8h] [rbp-80h]
  _QWORD v1093[2]; // [rsp+4F8h] [rbp-70h] BYREF
  char v1094; // [rsp+508h] [rbp-60h]
  char v1095; // [rsp+518h] [rbp-50h]
  unsigned __int64 v1096; // [rsp+528h] [rbp-40h]

  v983 = this;
  v1096 = __readfsqword(0x28u);
  v1083 = v1085;
  v1084 = 0;
  LOBYTE(v1085[0]) = 0;
  v1086 = v1088;
  v1087 = 0;
  LOBYTE(v1088[0]) = 0;
  v1089 = 0;
  v1090 = 0;
  v1091 = 0;
  v1095 = 0;
  std::string::_M_replace();
  v1000 = &v1086;
  std::string::_M_replace();
  v1003 = &v1024;
  *(_QWORD *)&v1024 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1023 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v1025 = 0;
  *(_QWORD *)&v1026 = 0;
  v1004 = &v1026;
  v1024 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1025 = 3;
  v3 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v3, "object", v4, v5, v6, v7, v359, v435, v510);
  v1009 = &v1023;
  v1026 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1076,
    (const __m128i *)&v1023);
  v1078.m128i_i64[0] = 0;
  v1067 = 0;
  *(_QWORD *)&v1068 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1067 = 3;
  v8 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v8, "properties", v9, v10, v11, v12, v360, v436, v511);
  v1040 = 0;
  *(_QWORD *)&v1041 = 0;
  v1068 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1040 = 3;
  v13 = operator new(0x20u);
  *(_QWORD *)v13 = v13 + 16;
  strcpy((char *)(v13 + 16), "mangled_name");
  *(_QWORD *)(v13 + 8) = 12;
  v1027 = 0;
  *(_QWORD *)&v1028 = 0;
  v1005 = &v1028;
  v1041 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1027 = 3;
  v14 = operator new(0x20u);
  *(_QWORD *)v14 = v14 + 16;
  strcpy((char *)(v14 + 16), "type");
  *(_QWORD *)(v14 + 8) = 4;
  v1029 = 0;
  *(_QWORD *)&v1030 = 0;
  v1006 = &v1030;
  v1028 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1029 = 3;
  v15 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v15, "string", v16, v17, v18, v19, v361, v437, v512);
  v1010 = &v1027;
  v982 = &v1035;
  v1030 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1035,
    (const __m128i *)&v1027);
  *((_QWORD *)&v1036 + 1) = 0;
  v1031 = 0;
  *(_QWORD *)&v1032 = 0;
  v1007 = &v1032;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1031 = 3;
  v20 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v20, "description", v21, v22, v23, v24, v362, v438, v513);
  v1033 = 0;
  v1008 = &v1034;
  *(_QWORD *)&v1034 = 0;
  v1032 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1033 = 3;
  v25 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v25, "Mangled name", v26, v27, v28, v29, v363, v439, v514);
  v1011 = &v1031;
  v1015 = &v1037;
  v1034 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1037,
    (const __m128i *)&v1031);
  v1039 = 0;
  v1016 = &v1042;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1042,
    (const __m128i *)&v1035);
  v1044 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1062,
    (const __m128i *)&v1040);
  *((_QWORD *)&v1063 + 1) = 0;
  v1057 = 0;
  *(_QWORD *)&v1058 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1057 = 3;
  v30 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v30, "mask", v31, v32, v33, v34, v364, v440, v515);
  v1045 = 0;
  *(_QWORD *)&v1046 = 0;
  v1058 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1045 = 3;
  v35 = operator new(0x20u);
  *(_QWORD *)v35 = v35 + 16;
  strcpy((char *)(v35 + 16), "type");
  *(_QWORD *)(v35 + 8) = 4;
  v1047 = 0;
  *(_QWORD *)&v1048 = 0;
  v1046 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1047 = 3;
  v36 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v36, "number", v37, v38, v39, v40, v365, (int)&v1046, (__int64)&v1048);
  v986 = (const __m128i *)&v1045;
  v1048 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1053,
    (const __m128i *)&v1045);
  *((_QWORD *)&v1054 + 1) = 0;
  v1049 = 0;
  *(_QWORD *)&v1050 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1049 = 3;
  v41 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v41, "description", v42, v43, v44, v45, v366, v441, v516);
  v1051 = 0;
  *(_QWORD *)&v1052 = 0;
  v1050 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1051 = 3;
  v46 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v46, "Demangling mask", v47, v48, v49, v50, v367, v442, v517);
  v987 = (const __m128i *)&v1049;
  v1017 = &v1055;
  v1052 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1055,
    (const __m128i *)&v1049);
  *((_QWORD *)&v1056 + 1) = 0;
  v995 = &v1059;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1059,
    (const __m128i *)&v1053);
  v1061 = 0;
  v996 = &v1064;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1064,
    (const __m128i *)&v1057);
  v1066 = 0;
  v997 = &v1069;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1069,
    (const __m128i *)&v1062);
  v1071 = 0;
  v984 = (const __m128i *)&v1067;
  v998 = &v1078.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1078.m128i_i64[1],
    (const __m128i *)&v1067);
  v1079 = 0;
  v1072 = 0;
  *(_QWORD *)&v1073 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1072 = 3;
  v51 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v51, "required", v52, v53, v54, v55, v368, v443, v518);
  v1002 = &v1022;
  *(_QWORD *)&v1022 = 0;
  v1073 = (unsigned __int64)v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1021 = 3;
  v56 = operator new(0x20u);
  *(_QWORD *)v56 = v56 + 16;
  strcpy((char *)(v56 + 16), "mangled_name");
  v57 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v56 + 8) = 12;
  v1014 = &v1021;
  v992 = &v1018;
  v981 = (__m128i)v57;
  v1022 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v58 = _mm_load_si128(&v1018);
  v1075 = 0;
  v985 = (const __m128i *)&v1072;
  v999 = v1080;
  v1074 = v58;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1080,
    (const __m128i *)&v1072);
  v1081 = 0;
  LOBYTE(v1019) = 0;
  v993 = &v1019;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1019,
    (__int64)&v1076,
    3,
    v59,
    v60,
    v61,
    v369,
    v444,
    v519,
    (int)&v1050,
    (int)&v1052,
    (int)&v1083,
    (__int64)&v1057,
    (int)&v1040,
    v750,
    v783,
    v816,
    v849,
    (__int64)&v1062,
    (int)&v1053,
    (__int64)&v1041);
  v62 = v1089;
  v63 = (void **)&v1082;
  v64 = v1020;
  v1089 = v1019;
  LOBYTE(v1019) = v62;
  v1020 = v1090;
  v1090 = v64;
  v994 = &v1020;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v63 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v63 != &v1076 );
  v991 = &v1074.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v990 = &v1070;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v989 = &v1065;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v988 = &v1060;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1013 = &v1043;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1012 = &v1038;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v65 = _mm_load_si128(&v981);
  v1077 = 0;
  v1076 = ida_mcp::tools::demangling::`anonymous namespace'::handle_demangle_name;
  v1078 = v65;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1078.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1078.m128i_i64[0])(&v1076, &v1076, 3);
  if ( v1095 && v1094 && v1092 != (ida_mcp::tools::demangling *)v1093 )
    operator delete(v1092, v1093[0] + 1LL);
  if ( v1091 )
  {
    v1091 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v1001 = &v1090;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v1086 != v1088 )
    operator delete(v1086, v1088[0] + 1LL);
  if ( v1083 != v1085 )
    operator delete(v1083, v1085[0] + 1LL);
  v1083 = v1085;
  v1084 = 0;
  LOBYTE(v1085[0]) = 0;
  v1086 = v1088;
  v1087 = 0;
  LOBYTE(v1088[0]) = 0;
  v1089 = 0;
  v1090 = 0;
  v1091 = 0;
  v1095 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v1045 = 0;
  *(_QWORD *)&v1046 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1045 = 3;
  v66 = operator new(0x20u);
  *(_QWORD *)v66 = v66 + 16;
  strcpy((char *)(v66 + 16), "type");
  *(_QWORD *)(v66 + 8) = 4;
  v1047 = 0;
  *(_QWORD *)&v1048 = 0;
  v1046 = (unsigned __int64)v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1047 = 3;
  v67 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v67, "object", v68, v69, v70, v71, v370, v445, v520);
  v1048 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1076,
    v986);
  v1078.m128i_i64[0] = 0;
  v1067 = 0;
  *(_QWORD *)&v1068 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1067 = 3;
  v72 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v72, "properties", v73, v74, v75, v76, v371, v446, v521);
  LOBYTE(v1062) = 0;
  *(_QWORD *)&v1063 = 0;
  v1068 = (unsigned __int64)v72;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1062) = 3;
  v77 = operator new(0x20u);
  *(_QWORD *)v77 = v77 + 16;
  strcpy((char *)(v77 + 16), "mangled_name");
  *(_QWORD *)(v77 + 8) = 12;
  v1049 = 0;
  *(_QWORD *)&v1050 = 0;
  v1063 = (unsigned __int64)v77;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1049 = 3;
  v78 = operator new(0x20u);
  *(_QWORD *)v78 = v78 + 16;
  strcpy((char *)(v78 + 16), "type");
  *(_QWORD *)(v78 + 8) = 4;
  v1051 = 0;
  *(_QWORD *)&v1052 = 0;
  v1050 = (unsigned __int64)v78;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1051 = 3;
  v79 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v79, "string", v80, v81, v82, v83, v372, v447, v522);
  v1052 = (unsigned __int64)v79;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v684,
    v987);
  *((_QWORD *)&v1058 + 1) = 0;
  LOBYTE(v1053) = 0;
  *(_QWORD *)&v1054 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1053) = 3;
  v84 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v84, "description", v85, v86, v87, v88, v373, v448, v523);
  LOBYTE(v1055) = 0;
  *(_QWORD *)&v1056 = 0;
  v1054 = (unsigned __int64)v84;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1055) = 3;
  v89 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v89, "Mangled name", v90, v91, v92, v93, v374, v449, v524);
  v1056 = (unsigned __int64)v89;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v995,
    v915);
  v1061 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v996,
    v684);
  v1066 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v717,
    v882);
  *((_QWORD *)&v1041 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v997,
    (__int64)v717,
    1,
    v94,
    v95,
    v96,
    v375,
    v450,
    v525,
    v585,
    v618,
    v651,
    (__int64)v684,
    (int)v717,
    (int)&v1036,
    (int)&v1054,
    (int)&v1056,
    (char)&v1063,
    (__int64)v882,
    (int)v915,
    v948);
  v1071 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v998,
    v984);
  v1079 = 0;
  v1072 = 0;
  *(_QWORD *)&v1073 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1072 = 3;
  v97 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v97, "required", v98, v99, v100, v101, v376, v451, v526);
  LOBYTE(v1035) = 0;
  *(_QWORD *)&v1036 = 0;
  v1073 = (unsigned __int64)v97;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1035) = 3;
  v102 = operator new(0x20u);
  *(_QWORD *)v102 = v102 + 16;
  strcpy((char *)(v102 + 16), "mangled_name");
  *(_QWORD *)(v102 + 8) = 12;
  v1036 = (unsigned __int64)v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v103 = _mm_load_si128(&v1018);
  v1075 = 0;
  v1074 = v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v999,
    v985);
  v1081 = 0;
  LOBYTE(v1019) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v993,
    (__int64)&v1076,
    3,
    v104,
    v105,
    v106,
    v377,
    v452,
    v527,
    v586,
    v619,
    v652,
    v685,
    v718,
    v751,
    v784,
    v817,
    v850,
    v883,
    v916,
    v949);
  v107 = v1089;
  v108 = (void **)&v1082;
  v1089 = v1019;
  v109 = v1090;
  LOBYTE(v1019) = v107;
  v1090 = v1020;
  v1020 = v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v108 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v108 != &v1076 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = _mm_load_si128(&v981);
  v1077 = 0;
  v1076 = ida_mcp::tools::demangling::`anonymous namespace'::handle_demangle_name_long;
  v1078 = v110;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1078.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1078.m128i_i64[0])(&v1076, &v1076, 3);
  if ( v1095 && v1094 && v1092 != (ida_mcp::tools::demangling *)v1093 )
    operator delete(v1092, v1093[0] + 1LL);
  if ( v1091 )
  {
    v1091 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v1086 != v1088 )
    operator delete(v1086, v1088[0] + 1LL);
  if ( v1083 != v1085 )
    operator delete(v1083, v1085[0] + 1LL);
  v1083 = v1085;
  v1084 = 0;
  LOBYTE(v1085[0]) = 0;
  v1086 = v1088;
  v1087 = 0;
  LOBYTE(v1088[0]) = 0;
  v1089 = 0;
  v1090 = 0;
  v1091 = 0;
  v1095 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v1045 = 0;
  *(_QWORD *)&v1046 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1045 = 3;
  v111 = operator new(0x20u);
  *(_QWORD *)v111 = v111 + 16;
  strcpy((char *)(v111 + 16), "type");
  *(_QWORD *)(v111 + 8) = 4;
  v1047 = 0;
  *(_QWORD *)&v1048 = 0;
  v1046 = (unsigned __int64)v111;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1047 = 3;
  v112 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v112, "object", v113, v114, v115, v116, v378, v453, v528);
  v1048 = (unsigned __int64)v112;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1076,
    (__int64)v986,
    2,
    v117,
    v118,
    v119,
    v379,
    v454,
    v529,
    v587,
    v620,
    v653,
    v686,
    v719,
    v752,
    v785,
    v818,
    v851,
    v884,
    v917,
    v950);
  v1078.m128i_i64[0] = 0;
  v1067 = 0;
  *(_QWORD *)&v1068 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1067 = 3;
  v120 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v120, "properties", v121, v122, v123, v124, v380, v455, v530);
  LOBYTE(v1062) = 0;
  *(_QWORD *)&v1063 = 0;
  v1068 = (unsigned __int64)v120;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1062) = 3;
  v125 = operator new(0x20u);
  *(_QWORD *)v125 = v125 + 16;
  strcpy((char *)(v125 + 16), "mangled_name");
  *(_QWORD *)(v125 + 8) = 12;
  v1049 = 0;
  *(_QWORD *)&v1050 = 0;
  v1063 = (unsigned __int64)v125;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1049 = 3;
  v126 = operator new(0x20u);
  *(_QWORD *)v126 = v126 + 16;
  strcpy((char *)(v126 + 16), "type");
  *(_QWORD *)(v126 + 8) = 4;
  v1051 = 0;
  *(_QWORD *)&v1052 = 0;
  v1050 = (unsigned __int64)v126;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1051 = 3;
  v127 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v127, "string", v128, v129, v130, v131, v381, v456, v531);
  v1052 = (unsigned __int64)v127;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v687,
    (__int64)v987,
    2,
    v132,
    v133,
    v134,
    v382,
    v457,
    v532,
    v588,
    v621,
    v654,
    (__int64)v687,
    v720,
    v753,
    v786,
    v819,
    v852,
    v885,
    v918,
    v951);
  *((_QWORD *)&v1058 + 1) = 0;
  LOBYTE(v1053) = 0;
  *(_QWORD *)&v1054 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1053) = 3;
  v135 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v135, "description", v136, v137, v138, v139, v383, v458, v533);
  LOBYTE(v1055) = 0;
  *(_QWORD *)&v1056 = 0;
  v1054 = (unsigned __int64)v135;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1055) = 3;
  v140 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v140, "Mangled name", v141, v142, v143, v144, v384, v459, v534);
  v1056 = (unsigned __int64)v140;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v995,
    v919,
    2,
    v145,
    v146,
    v147,
    v385,
    v460,
    v535,
    v589,
    v622,
    v655,
    v688,
    v721,
    v754,
    v787,
    v820,
    v853,
    v886,
    v919,
    v952);
  v1061 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v996,
    v689,
    2,
    v148,
    v149,
    v150,
    v386,
    v461,
    v536,
    v590,
    v623,
    v656,
    v689,
    v722,
    v755,
    v788,
    v821,
    v854,
    v887,
    v920,
    v953);
  v1066 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v723,
    v888,
    2,
    v151,
    v152,
    v153,
    v387,
    v462,
    v537,
    v591,
    v624,
    v657,
    v690,
    (int)v723,
    v756,
    v789,
    v822,
    v855,
    v888,
    v921,
    v954);
  *((_QWORD *)&v1041 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v997,
    v724,
    1,
    v154,
    v155,
    v156,
    v388,
    v463,
    v538,
    v592,
    v625,
    v658,
    v691,
    v724,
    v757,
    v790,
    v823,
    v856,
    v889,
    v922,
    v955);
  v1071 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v998,
    (__int64)v984,
    2,
    v157,
    v158,
    v159,
    v389,
    v464,
    v539,
    v593,
    v626,
    v659,
    v692,
    v725,
    v758,
    v791,
    v824,
    v857,
    v890,
    v923,
    v956);
  v1079 = 0;
  v1072 = 0;
  *(_QWORD *)&v1073 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1072 = 3;
  v160 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v160, "required", v161, v162, v163, v164, v390, v465, v540);
  LOBYTE(v1035) = 0;
  *(_QWORD *)&v1036 = 0;
  v1073 = (unsigned __int64)v160;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1035) = 3;
  v165 = operator new(0x20u);
  *(_QWORD *)v165 = v165 + 16;
  strcpy((char *)(v165 + 16), "mangled_name");
  *(_QWORD *)(v165 + 8) = 12;
  v1036 = (unsigned __int64)v165;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v166 = _mm_load_si128(&v1018);
  v1075 = 0;
  v1074 = v166;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v999,
    (__int64)v985,
    2,
    v167,
    v168,
    v169,
    v391,
    v466,
    v541,
    v594,
    v627,
    v660,
    v693,
    v726,
    v759,
    v792,
    v825,
    v858,
    v891,
    v924,
    v957);
  v1081 = 0;
  LOBYTE(v1019) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v993,
    (__int64)&v1076,
    3,
    v170,
    v171,
    v172,
    v392,
    v467,
    v542,
    v595,
    v628,
    v661,
    v694,
    v727,
    v760,
    v793,
    v826,
    v859,
    v892,
    v925,
    v958);
  v173 = v1089;
  v174 = (void **)&v1082;
  v1089 = v1019;
  v175 = v1090;
  LOBYTE(v1019) = v173;
  v1090 = v1020;
  v1020 = v175;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v174 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v174 != &v1076 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v176 = _mm_load_si128(&v981);
  v1077 = 0;
  v1076 = ida_mcp::tools::demangling::`anonymous namespace'::handle_demangle_name_short;
  v1078 = v176;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1078.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1078.m128i_i64[0])(&v1076, &v1076, 3);
  if ( v1095 && v1094 && v1092 != (ida_mcp::tools::demangling *)v1093 )
    operator delete(v1092, v1093[0] + 1LL);
  if ( v1091 )
  {
    v1091 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v1086 != v1088 )
    operator delete(v1086, v1088[0] + 1LL);
  if ( v1083 != v1085 )
    operator delete(v1083, v1085[0] + 1LL);
  v1083 = v1085;
  v1084 = 0;
  LOBYTE(v1085[0]) = 0;
  v1086 = v1088;
  v1087 = 0;
  LOBYTE(v1088[0]) = 0;
  v1089 = 0;
  v1090 = 0;
  v1091 = 0;
  v1095 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v1023 = 0;
  *(_QWORD *)&v1024 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1023 = 3;
  v177 = operator new(0x20u);
  *(_QWORD *)v177 = v177 + 16;
  strcpy((char *)(v177 + 16), "type");
  *(_QWORD *)(v177 + 8) = 4;
  v1025 = 0;
  *(_QWORD *)&v1026 = 0;
  v1024 = (unsigned __int64)v177;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1025 = 3;
  v178 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v178, "object", v179, v180, v181, v182, v393, v468, v543);
  v1026 = (unsigned __int64)v178;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1076,
    (__int64)v1009,
    2,
    v183,
    v184,
    v185,
    v394,
    v469,
    v544,
    v596,
    v629,
    v662,
    v695,
    v728,
    v761,
    v794,
    v827,
    v860,
    v893,
    v926,
    v959);
  v1078.m128i_i64[0] = 0;
  v1067 = 0;
  *(_QWORD *)&v1068 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1067 = 3;
  v186 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v186, "properties", v187, v188, v189, v190, v395, v470, v545);
  v1040 = 0;
  *(_QWORD *)&v1041 = 0;
  v1068 = (unsigned __int64)v186;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1040 = 3;
  v191 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v191, "address", v192, v193, v194, v195, v396, v471, v546);
  v1027 = 0;
  *(_QWORD *)&v1028 = 0;
  v1041 = (unsigned __int64)v191;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1027 = 3;
  v196 = operator new(0x20u);
  *(_QWORD *)v196 = v196 + 16;
  strcpy((char *)(v196 + 16), "type");
  *(_QWORD *)(v196 + 8) = 4;
  v1029 = 0;
  *(_QWORD *)&v1030 = 0;
  v1028 = (unsigned __int64)v196;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1029 = 3;
  v197 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v197, "string", v198, v199, v200, v201, v397, v472, v547);
  v1030 = (unsigned __int64)v197;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v982,
    (__int64)v1010,
    2,
    v202,
    v203,
    v204,
    v398,
    v473,
    v548,
    v597,
    v630,
    v663,
    v696,
    v729,
    v762,
    v795,
    v828,
    v861,
    v894,
    v927,
    v960);
  *((_QWORD *)&v1036 + 1) = 0;
  v1031 = 0;
  *(_QWORD *)&v1032 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1031 = 3;
  v205 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v205, "description", v206, v207, v208, v209, v399, v474, v549);
  v1033 = 0;
  *(_QWORD *)&v1034 = 0;
  v1032 = (unsigned __int64)v205;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1033 = 3;
  v210 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v210, "Hex address", v211, v212, v213, v214, v400, v475, v550);
  v1034 = (unsigned __int64)v210;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1015,
    (__int64)v1011,
    2,
    v215,
    v216,
    v217,
    v401,
    v476,
    v551,
    v598,
    v631,
    v664,
    v697,
    v730,
    v763,
    v796,
    v829,
    v862,
    v895,
    v928,
    v961);
  v1039 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1016,
    (__int64)v982,
    2,
    v218,
    v219,
    v220,
    v402,
    v477,
    v552,
    v599,
    v632,
    v665,
    v698,
    v731,
    v764,
    v797,
    v830,
    v863,
    v896,
    v929,
    v962);
  v1044 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v897,
    v732,
    2,
    v221,
    v222,
    v223,
    v403,
    v478,
    v553,
    v600,
    v633,
    v666,
    v699,
    v732,
    v765,
    v798,
    v831,
    v864,
    (__int64)v897,
    v930,
    v963);
  *((_QWORD *)&v1063 + 1) = 0;
  v1057 = 0;
  *(_QWORD *)&v1058 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1057 = 3;
  v224 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v224, "long_form", v225, v226, v227, v228, v404, v479, v554);
  v1045 = 0;
  *(_QWORD *)&v1046 = 0;
  v1058 = (unsigned __int64)v224;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1045 = 3;
  v229 = operator new(0x20u);
  *(_QWORD *)v229 = v229 + 16;
  strcpy((char *)(v229 + 16), "type");
  *(_QWORD *)(v229 + 8) = 4;
  v1047 = 0;
  *(_QWORD *)&v1048 = 0;
  v1046 = (unsigned __int64)v229;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1047 = 3;
  v230 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v230, "boolean", v231, v232, v233, v234, v405, v480, v555);
  v1048 = (unsigned __int64)v230;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v931,
    (__int64)v986,
    2,
    v235,
    v236,
    v237,
    v406,
    v481,
    v556,
    v601,
    v634,
    v667,
    v700,
    v733,
    v766,
    v799,
    v832,
    v865,
    v898,
    (int)v931,
    v964);
  *((_QWORD *)&v1054 + 1) = 0;
  v1049 = 0;
  *(_QWORD *)&v1050 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1049 = 3;
  v238 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v238, "description", v239, v240, v241, v242, v407, v482, v557);
  v1051 = 0;
  *(_QWORD *)&v1052 = 0;
  v1050 = (unsigned __int64)v238;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1051 = 3;
  v243 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v243, "Use long form", v244, v245, v246, v247, v408, v483, v558);
  v1052 = (unsigned __int64)v243;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1017,
    (__int64)v987,
    2,
    v248,
    v249,
    v250,
    v409,
    v484,
    v559,
    v602,
    v635,
    v668,
    v701,
    v734,
    v767,
    v800,
    v833,
    v866,
    v899,
    v932,
    v965);
  *((_QWORD *)&v1056 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v995,
    v933,
    2,
    v251,
    v252,
    v253,
    v410,
    v485,
    v560,
    v603,
    v636,
    v669,
    v702,
    v735,
    v768,
    v801,
    v834,
    v867,
    v900,
    v933,
    v966);
  v1061 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v996,
    v703,
    2,
    v254,
    v255,
    v256,
    v411,
    v486,
    v561,
    v604,
    v637,
    v670,
    v703,
    v736,
    v769,
    v802,
    v835,
    v868,
    v901,
    v934,
    v967);
  v1066 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v997,
    v902,
    2,
    v257,
    v258,
    v259,
    v412,
    v487,
    v562,
    v605,
    v638,
    v671,
    v704,
    v737,
    v770,
    v803,
    v836,
    v869,
    v902,
    v935,
    v968);
  v1071 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v998,
    (__int64)v984,
    2,
    v260,
    v261,
    v262,
    v413,
    v488,
    v563,
    v606,
    v639,
    v672,
    v705,
    v738,
    v771,
    v804,
    v837,
    v870,
    v903,
    v936,
    v969);
  v1079 = 0;
  v1072 = 0;
  *(_QWORD *)&v1073 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1072 = 3;
  v263 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v263, "required", v264, v265, v266, v267, v414, v489, v564);
  v1021 = 0;
  *(_QWORD *)&v1022 = 0;
  v1073 = (unsigned __int64)v263;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1021 = 3;
  v268 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v268, "address", v269, v270, v271, v272, v415, v490, v565);
  v1022 = (unsigned __int64)v268;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v273 = _mm_load_si128(&v1018);
  v1075 = 0;
  v1074 = v273;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v999,
    (__int64)v985,
    2,
    v274,
    v275,
    v276,
    v416,
    v491,
    v566,
    v607,
    v640,
    v673,
    v706,
    v739,
    v772,
    v805,
    v838,
    v871,
    v904,
    v937,
    v970);
  v1081 = 0;
  LOBYTE(v1019) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v993,
    (__int64)&v1076,
    3,
    v277,
    v278,
    v279,
    v417,
    v492,
    v567,
    v608,
    v641,
    v674,
    v707,
    v740,
    v773,
    v806,
    v839,
    v872,
    v905,
    v938,
    v971);
  v280 = v1089;
  v281 = (void **)&v1082;
  v1089 = v1019;
  v282 = v1090;
  LOBYTE(v1019) = v280;
  v1090 = v1020;
  v1020 = v282;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v281 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v281 != &v1076 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v283 = _mm_load_si128(&v981);
  v1077 = 0;
  v1076 = ida_mcp::tools::demangling::`anonymous namespace'::handle_demangle_name_at_address;
  v1078 = v283;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1078.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1078.m128i_i64[0])(&v1076, &v1076, 3);
  if ( v1095 && v1094 && v1092 != (ida_mcp::tools::demangling *)v1093 )
    operator delete(v1092, v1093[0] + 1LL);
  if ( v1091 )
  {
    v1091 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v1086 != v1088 )
    operator delete(v1086, v1088[0] + 1LL);
  if ( v1083 != v1085 )
    operator delete(v1083, v1085[0] + 1LL);
  v1083 = v1085;
  v1084 = 0;
  LOBYTE(v1085[0]) = 0;
  v1086 = v1088;
  v1087 = 0;
  LOBYTE(v1088[0]) = 0;
  v1089 = 0;
  v1090 = 0;
  v1091 = 0;
  v1095 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v1045 = 0;
  *(_QWORD *)&v1046 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1045 = 3;
  v284 = operator new(0x20u);
  *(_QWORD *)v284 = v284 + 16;
  strcpy((char *)(v284 + 16), "type");
  *(_QWORD *)(v284 + 8) = 4;
  v1047 = 0;
  *(_QWORD *)&v1048 = 0;
  v1046 = (unsigned __int64)v284;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1047 = 3;
  v285 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v285, "object", v286, v287, v288, v289, v418, v493, v568);
  v1048 = (unsigned __int64)v285;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1076,
    (__int64)v986,
    2,
    v290,
    v291,
    v292,
    v419,
    v494,
    v569,
    v609,
    v642,
    v675,
    v708,
    v741,
    v774,
    v807,
    v840,
    v873,
    v906,
    v939,
    v972);
  v1078.m128i_i64[0] = 0;
  v1067 = 0;
  *(_QWORD *)&v1068 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1067 = 3;
  v293 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v293, "properties", v294, v295, v296, v297, v420, v495, v570);
  LOBYTE(v1062) = 0;
  *(_QWORD *)&v1063 = 0;
  v1068 = (unsigned __int64)v293;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1062) = 3;
  v298 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v298, "name", v299, v300, v301, v302, v421, v496, v571);
  v1049 = 0;
  *(_QWORD *)&v1050 = 0;
  v1063 = (unsigned __int64)v298;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1049 = 3;
  v303 = operator new(0x20u);
  *(_QWORD *)v303 = v303 + 16;
  strcpy((char *)(v303 + 16), "type");
  *(_QWORD *)(v303 + 8) = 4;
  v1051 = 0;
  *(_QWORD *)&v1052 = 0;
  v1050 = (unsigned __int64)v303;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1051 = 3;
  v304 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v304, "string", v305, v306, v307, v308, v422, v497, v572);
  v1052 = (unsigned __int64)v304;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v709,
    (__int64)v987,
    2,
    v309,
    v310,
    v311,
    v423,
    v498,
    v573,
    v610,
    v643,
    v676,
    (__int64)v709,
    v742,
    v775,
    v808,
    v841,
    v874,
    v907,
    v940,
    v973);
  *((_QWORD *)&v1058 + 1) = 0;
  LOBYTE(v1053) = 0;
  *(_QWORD *)&v1054 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1053) = 3;
  v312 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v312, "description", v313, v314, v315, v316, v424, v499, v574);
  LOBYTE(v1055) = 0;
  *(_QWORD *)&v1056 = 0;
  v1054 = (unsigned __int64)v312;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1055) = 3;
  v317 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v317, "Name to check", v318, v319, v320, v321, v425, v500, v575);
  v1056 = (unsigned __int64)v317;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v995,
    v941,
    2,
    v322,
    v323,
    v324,
    v426,
    v501,
    v576,
    v611,
    v644,
    v677,
    v710,
    v743,
    v776,
    v809,
    v842,
    v875,
    v908,
    v941,
    v974);
  v1061 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v996,
    v711,
    2,
    v325,
    v326,
    v327,
    v427,
    v502,
    v577,
    v612,
    v645,
    v678,
    v711,
    v744,
    v777,
    v810,
    v843,
    v876,
    v909,
    v942,
    v975);
  v1066 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v745,
    v910,
    2,
    v328,
    v329,
    v330,
    v428,
    v503,
    v578,
    v613,
    v646,
    v679,
    v712,
    (int)v745,
    v778,
    v811,
    v844,
    v877,
    v910,
    v943,
    v976);
  *((_QWORD *)&v1041 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v997,
    v746,
    1,
    v331,
    v332,
    v333,
    v429,
    v504,
    v579,
    v614,
    v647,
    v680,
    v713,
    v746,
    v779,
    v812,
    v845,
    v878,
    v911,
    v944,
    v977);
  v1071 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v998,
    (__int64)v984,
    2,
    v334,
    v335,
    v336,
    v430,
    v505,
    v580,
    v615,
    v648,
    v681,
    v714,
    v747,
    v780,
    v813,
    v846,
    v879,
    v912,
    v945,
    v978);
  v1079 = 0;
  v1072 = 0;
  *(_QWORD *)&v1073 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1072 = 3;
  v337 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v337, "required", v338, v339, v340, v341, v431, v506, v581);
  LOBYTE(v1035) = 0;
  *(_QWORD *)&v1036 = 0;
  v1073 = (unsigned __int64)v337;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1035) = 3;
  v342 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v342, "name", v343, v344, v345, v346, v432, v507, v582);
  v1036 = (unsigned __int64)v342;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v347 = _mm_load_si128(&v1018);
  v1075 = 0;
  v1074 = v347;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v999,
    (__int64)v985,
    2,
    v348,
    v349,
    v350,
    v433,
    v508,
    v583,
    v616,
    v649,
    v682,
    v715,
    v748,
    v781,
    v814,
    v847,
    v880,
    v913,
    v946,
    v979);
  v1081 = 0;
  LOBYTE(v1019) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v993,
    (__int64)&v1076,
    3,
    v351,
    v352,
    v353,
    v434,
    v509,
    v584,
    v617,
    v650,
    v683,
    v716,
    v749,
    v782,
    v815,
    v848,
    v881,
    v914,
    v947,
    v980);
  v354 = v1089;
  v355 = (void **)&v1082;
  v1089 = v1019;
  v356 = v1090;
  LOBYTE(v1019) = v354;
  v1090 = v1020;
  v1020 = v356;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v355 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v355 != &v1076 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v357 = _mm_load_si128(&v981);
  v1077 = 0;
  v1076 = ida_mcp::tools::demangling::`anonymous namespace'::handle_can_demangle;
  v1078 = v357;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1078.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1078.m128i_i64[0])(&v1076, &v1076, 3);
  if ( v1095 && v1094 && v1092 != (ida_mcp::tools::demangling *)v1093 )
    operator delete(v1092, v1093[0] + 1LL);
  if ( v1091 )
  {
    v1091 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v1086 != v1088 )
    operator delete(v1086, v1088[0] + 1LL);
  if ( v1083 != v1085 )
    operator delete(v1083, v1085[0] + 1LL);
  return v1096 - __readfsqword(0x28u);
}

