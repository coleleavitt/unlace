unsigned __int64 __fastcall ida_mcp::tools::frames::register_tools(
        ida_mcp::tools::frames *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 *v3; // r13
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128i v36; // xmm0
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  char v40; // si
  void **v41; // r14
  __int64 v42; // rdx
  __m128i si128; // xmm2
  __int64 *v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 *v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 *v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 *v59; // r14
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 *v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
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
  __int64 *v79; // r14
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
  __m128i v94; // xmm0
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  char v98; // si
  void **v99; // r15
  __int64 v100; // rax
  __m128i v101; // xmm3
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 *v105; // r15
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 *v110; // r15
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 *v118; // r15
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 *v123; // r15
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
  __int64 *v140; // r15
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 *v145; // r15
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 *v165; // r15
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 *v170; // r15
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __m128i v175; // xmm0
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  char v182; // si
  void **v183; // r15
  __int64 v184; // rax
  __m128i v185; // xmm4
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 *v189; // r15
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 *v194; // r15
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 *v202; // r15
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // r9
  __int64 *v207; // r15
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r9
  __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 *v221; // r15
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  __int64 *v229; // r15
  __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // r8
  __int64 v233; // r9
  __int64 *v234; // r15
  __int64 v235; // rdx
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
  __int64 *v254; // r15
  __int64 v255; // rdx
  __int64 v256; // rcx
  __int64 v257; // r8
  __int64 v258; // r9
  __int64 *v259; // r15
  __int64 v260; // rdx
  __int64 v261; // rcx
  __int64 v262; // r8
  __int64 v263; // r9
  __int64 *v264; // r15
  __int64 v265; // rdx
  __int64 v266; // rcx
  __int64 v267; // r8
  __int64 v268; // r9
  __m128i v269; // xmm0
  __int64 v270; // rcx
  __int64 v271; // r8
  __int64 v272; // r9
  __int64 v273; // rcx
  __int64 v274; // r8
  __int64 v275; // r9
  char v276; // si
  void **v277; // r15
  __int64 v278; // rax
  __m128i v279; // xmm5
  __int64 v280; // rcx
  __int64 v281; // r8
  __int64 v282; // r9
  __int64 *v283; // r14
  __int64 v284; // rdx
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // r9
  __int64 *v288; // r14
  __int64 v289; // rdx
  __int64 v290; // rcx
  __int64 v291; // r8
  __int64 v292; // r9
  __int64 v293; // rax
  __int64 v294; // rcx
  __int64 v295; // r8
  __int64 v296; // r9
  __int64 *v297; // r14
  __int64 v298; // rdx
  __int64 v299; // rcx
  __int64 v300; // r8
  __int64 v301; // r9
  __int64 *v302; // r14
  __int64 v303; // rdx
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
  __int64 v319; // rcx
  __int64 v320; // r8
  __int64 v321; // r9
  __int64 *v322; // r14
  __int64 v323; // rdx
  __int64 v324; // rcx
  __int64 v325; // r8
  __int64 v326; // r9
  __int64 *v327; // r14
  __int64 v328; // rdx
  __int64 v329; // rcx
  __int64 v330; // r8
  __int64 v331; // r9
  __m128i v332; // xmm0
  __int64 v333; // rcx
  __int64 v334; // r8
  __int64 v335; // r9
  __int64 v336; // rcx
  __int64 v337; // r8
  __int64 v338; // r9
  char v339; // si
  void **v340; // r14
  __int64 v341; // rax
  __m128i v342; // xmm6
  int v344; // [rsp+0h] [rbp-598h]
  int v345; // [rsp+0h] [rbp-598h]
  int v346; // [rsp+0h] [rbp-598h]
  int v347; // [rsp+0h] [rbp-598h]
  int v348; // [rsp+0h] [rbp-598h]
  int v349; // [rsp+0h] [rbp-598h]
  int v350; // [rsp+0h] [rbp-598h]
  int v351; // [rsp+0h] [rbp-598h]
  int v352; // [rsp+0h] [rbp-598h]
  int v353; // [rsp+0h] [rbp-598h]
  int v354; // [rsp+0h] [rbp-598h]
  int v355; // [rsp+0h] [rbp-598h]
  int v356; // [rsp+0h] [rbp-598h]
  int v357; // [rsp+0h] [rbp-598h]
  int v358; // [rsp+0h] [rbp-598h]
  int v359; // [rsp+0h] [rbp-598h]
  int v360; // [rsp+0h] [rbp-598h]
  int v361; // [rsp+0h] [rbp-598h]
  int v362; // [rsp+0h] [rbp-598h]
  int v363; // [rsp+0h] [rbp-598h]
  int v364; // [rsp+0h] [rbp-598h]
  int v365; // [rsp+0h] [rbp-598h]
  int v366; // [rsp+0h] [rbp-598h]
  int v367; // [rsp+0h] [rbp-598h]
  int v368; // [rsp+0h] [rbp-598h]
  int v369; // [rsp+0h] [rbp-598h]
  int v370; // [rsp+0h] [rbp-598h]
  int v371; // [rsp+0h] [rbp-598h]
  int v372; // [rsp+0h] [rbp-598h]
  int v373; // [rsp+0h] [rbp-598h]
  int v374; // [rsp+0h] [rbp-598h]
  int v375; // [rsp+0h] [rbp-598h]
  int v376; // [rsp+0h] [rbp-598h]
  int v377; // [rsp+0h] [rbp-598h]
  int v378; // [rsp+0h] [rbp-598h]
  int v379; // [rsp+0h] [rbp-598h]
  int v380; // [rsp+0h] [rbp-598h]
  int v381; // [rsp+0h] [rbp-598h]
  int v382; // [rsp+0h] [rbp-598h]
  int v383; // [rsp+0h] [rbp-598h]
  int v384; // [rsp+0h] [rbp-598h]
  int v385; // [rsp+0h] [rbp-598h]
  int v386; // [rsp+0h] [rbp-598h]
  int v387; // [rsp+0h] [rbp-598h]
  int v388; // [rsp+0h] [rbp-598h]
  int v389; // [rsp+0h] [rbp-598h]
  int v390; // [rsp+0h] [rbp-598h]
  int v391; // [rsp+0h] [rbp-598h]
  int v392; // [rsp+0h] [rbp-598h]
  int v393; // [rsp+0h] [rbp-598h]
  int v394; // [rsp+0h] [rbp-598h]
  int v395; // [rsp+0h] [rbp-598h]
  int v396; // [rsp+0h] [rbp-598h]
  int v397; // [rsp+0h] [rbp-598h]
  int v398; // [rsp+0h] [rbp-598h]
  int v399; // [rsp+0h] [rbp-598h]
  int v400; // [rsp+0h] [rbp-598h]
  int v401; // [rsp+0h] [rbp-598h]
  int v402; // [rsp+0h] [rbp-598h]
  int v403; // [rsp+0h] [rbp-598h]
  int v404; // [rsp+0h] [rbp-598h]
  int v405; // [rsp+0h] [rbp-598h]
  int v406; // [rsp+0h] [rbp-598h]
  int v407; // [rsp+0h] [rbp-598h]
  int v408; // [rsp+0h] [rbp-598h]
  int v409; // [rsp+0h] [rbp-598h]
  int v410; // [rsp+0h] [rbp-598h]
  int v411; // [rsp+0h] [rbp-598h]
  int v412; // [rsp+0h] [rbp-598h]
  int v413; // [rsp+0h] [rbp-598h]
  int v414; // [rsp+0h] [rbp-598h]
  int v415; // [rsp+0h] [rbp-598h]
  int v416; // [rsp+0h] [rbp-598h]
  int v417; // [rsp+0h] [rbp-598h]
  int v418; // [rsp+0h] [rbp-598h]
  int v419; // [rsp+0h] [rbp-598h]
  int v420; // [rsp+0h] [rbp-598h]
  int v421; // [rsp+0h] [rbp-598h]
  int v422; // [rsp+8h] [rbp-590h]
  int v423; // [rsp+8h] [rbp-590h]
  int v424; // [rsp+8h] [rbp-590h]
  __int64 v425; // [rsp+8h] [rbp-590h]
  int v426; // [rsp+8h] [rbp-590h]
  int v427; // [rsp+8h] [rbp-590h]
  __int64 v428; // [rsp+8h] [rbp-590h]
  int v429; // [rsp+8h] [rbp-590h]
  int v430; // [rsp+8h] [rbp-590h]
  int v431; // [rsp+8h] [rbp-590h]
  int v432; // [rsp+8h] [rbp-590h]
  int v433; // [rsp+8h] [rbp-590h]
  __m128i *v434; // [rsp+8h] [rbp-590h]
  int v435; // [rsp+8h] [rbp-590h]
  int v436; // [rsp+8h] [rbp-590h]
  int v437; // [rsp+8h] [rbp-590h]
  int v438; // [rsp+8h] [rbp-590h]
  __int64 v439; // [rsp+8h] [rbp-590h]
  __int64 v440; // [rsp+8h] [rbp-590h]
  int v441; // [rsp+8h] [rbp-590h]
  int v442; // [rsp+8h] [rbp-590h]
  __int64 v443; // [rsp+8h] [rbp-590h]
  int v444; // [rsp+8h] [rbp-590h]
  int v445; // [rsp+8h] [rbp-590h]
  __int64 v446; // [rsp+8h] [rbp-590h]
  __int64 v447; // [rsp+8h] [rbp-590h]
  __int64 v448; // [rsp+8h] [rbp-590h]
  _QWORD *v449; // [rsp+8h] [rbp-590h]
  int v450; // [rsp+8h] [rbp-590h]
  int v451; // [rsp+8h] [rbp-590h]
  __int64 v452; // [rsp+8h] [rbp-590h]
  __int64 v453; // [rsp+8h] [rbp-590h]
  __int64 v454; // [rsp+8h] [rbp-590h]
  __int64 v455; // [rsp+8h] [rbp-590h]
  __int64 v456; // [rsp+8h] [rbp-590h]
  int v457; // [rsp+8h] [rbp-590h]
  int v458; // [rsp+8h] [rbp-590h]
  __int64 v459; // [rsp+8h] [rbp-590h]
  __int64 v460; // [rsp+8h] [rbp-590h]
  __int64 v461; // [rsp+8h] [rbp-590h]
  int v462; // [rsp+8h] [rbp-590h]
  int v463; // [rsp+8h] [rbp-590h]
  __int64 v464; // [rsp+8h] [rbp-590h]
  int v465; // [rsp+8h] [rbp-590h]
  int v466; // [rsp+8h] [rbp-590h]
  __int64 v467; // [rsp+8h] [rbp-590h]
  __int64 v468; // [rsp+8h] [rbp-590h]
  __int64 v469; // [rsp+8h] [rbp-590h]
  int v470; // [rsp+8h] [rbp-590h]
  _QWORD *v471; // [rsp+8h] [rbp-590h]
  int v472; // [rsp+8h] [rbp-590h]
  int v473; // [rsp+8h] [rbp-590h]
  __int64 v474; // [rsp+8h] [rbp-590h]
  __int64 v475; // [rsp+8h] [rbp-590h]
  __int64 v476; // [rsp+8h] [rbp-590h]
  __int64 v477; // [rsp+8h] [rbp-590h]
  __int64 v478; // [rsp+8h] [rbp-590h]
  int v479; // [rsp+8h] [rbp-590h]
  int v480; // [rsp+8h] [rbp-590h]
  int v481; // [rsp+8h] [rbp-590h]
  __int64 v482; // [rsp+8h] [rbp-590h]
  __int64 v483; // [rsp+8h] [rbp-590h]
  _QWORD *v484; // [rsp+8h] [rbp-590h]
  int v485; // [rsp+8h] [rbp-590h]
  int v486; // [rsp+8h] [rbp-590h]
  __int64 v487; // [rsp+8h] [rbp-590h]
  int v488; // [rsp+8h] [rbp-590h]
  int v489; // [rsp+8h] [rbp-590h]
  __int64 v490; // [rsp+8h] [rbp-590h]
  __int64 v491; // [rsp+8h] [rbp-590h]
  __int64 v492; // [rsp+8h] [rbp-590h]
  __int64 v493; // [rsp+8h] [rbp-590h]
  __int64 v494; // [rsp+8h] [rbp-590h]
  int v495; // [rsp+8h] [rbp-590h]
  int v496; // [rsp+8h] [rbp-590h]
  __int64 v497; // [rsp+8h] [rbp-590h]
  __int64 v498; // [rsp+8h] [rbp-590h]
  __int64 v499; // [rsp+10h] [rbp-588h]
  __int64 v500; // [rsp+10h] [rbp-588h]
  __int64 v501; // [rsp+10h] [rbp-588h]
  __int64 v502; // [rsp+10h] [rbp-588h]
  int v503; // [rsp+10h] [rbp-588h]
  __int64 v504; // [rsp+10h] [rbp-588h]
  __int64 v505; // [rsp+10h] [rbp-588h]
  int v506; // [rsp+10h] [rbp-588h]
  __int64 v507; // [rsp+10h] [rbp-588h]
  __int64 v508; // [rsp+10h] [rbp-588h]
  __int64 v509; // [rsp+10h] [rbp-588h]
  __int64 v510; // [rsp+10h] [rbp-588h]
  __int64 v511; // [rsp+10h] [rbp-588h]
  __int64 v512; // [rsp+10h] [rbp-588h]
  __int64 v513; // [rsp+10h] [rbp-588h]
  __int64 v514; // [rsp+10h] [rbp-588h]
  __int64 v515; // [rsp+10h] [rbp-588h]
  int v516; // [rsp+10h] [rbp-588h]
  int v517; // [rsp+10h] [rbp-588h]
  __int64 v518; // [rsp+10h] [rbp-588h]
  __int64 v519; // [rsp+10h] [rbp-588h]
  int v520; // [rsp+10h] [rbp-588h]
  __int64 v521; // [rsp+10h] [rbp-588h]
  __int64 v522; // [rsp+10h] [rbp-588h]
  int v523; // [rsp+10h] [rbp-588h]
  int v524; // [rsp+10h] [rbp-588h]
  int v525; // [rsp+10h] [rbp-588h]
  int v526; // [rsp+10h] [rbp-588h]
  __int64 v527; // [rsp+10h] [rbp-588h]
  __int64 v528; // [rsp+10h] [rbp-588h]
  int v529; // [rsp+10h] [rbp-588h]
  int v530; // [rsp+10h] [rbp-588h]
  int v531; // [rsp+10h] [rbp-588h]
  int v532; // [rsp+10h] [rbp-588h]
  int v533; // [rsp+10h] [rbp-588h]
  __int64 v534; // [rsp+10h] [rbp-588h]
  __int64 v535; // [rsp+10h] [rbp-588h]
  int v536; // [rsp+10h] [rbp-588h]
  int v537; // [rsp+10h] [rbp-588h]
  int v538; // [rsp+10h] [rbp-588h]
  __int64 v539; // [rsp+10h] [rbp-588h]
  __int64 v540; // [rsp+10h] [rbp-588h]
  int v541; // [rsp+10h] [rbp-588h]
  __int64 v542; // [rsp+10h] [rbp-588h]
  __int64 v543; // [rsp+10h] [rbp-588h]
  int v544; // [rsp+10h] [rbp-588h]
  int v545; // [rsp+10h] [rbp-588h]
  int v546; // [rsp+10h] [rbp-588h]
  __int64 v547; // [rsp+10h] [rbp-588h]
  int v548; // [rsp+10h] [rbp-588h]
  __int64 v549; // [rsp+10h] [rbp-588h]
  __int64 v550; // [rsp+10h] [rbp-588h]
  int v551; // [rsp+10h] [rbp-588h]
  int v552; // [rsp+10h] [rbp-588h]
  int v553; // [rsp+10h] [rbp-588h]
  int v554; // [rsp+10h] [rbp-588h]
  int v555; // [rsp+10h] [rbp-588h]
  __int64 v556; // [rsp+10h] [rbp-588h]
  __int64 v557; // [rsp+10h] [rbp-588h]
  __int64 v558; // [rsp+10h] [rbp-588h]
  int v559; // [rsp+10h] [rbp-588h]
  int v560; // [rsp+10h] [rbp-588h]
  int v561; // [rsp+10h] [rbp-588h]
  __int64 v562; // [rsp+10h] [rbp-588h]
  __int64 v563; // [rsp+10h] [rbp-588h]
  int v564; // [rsp+10h] [rbp-588h]
  __int64 v565; // [rsp+10h] [rbp-588h]
  __int64 v566; // [rsp+10h] [rbp-588h]
  int v567; // [rsp+10h] [rbp-588h]
  int v568; // [rsp+10h] [rbp-588h]
  int v569; // [rsp+10h] [rbp-588h]
  int v570; // [rsp+10h] [rbp-588h]
  int v571; // [rsp+10h] [rbp-588h]
  __int64 v572; // [rsp+10h] [rbp-588h]
  __int64 v573; // [rsp+10h] [rbp-588h]
  int v574; // [rsp+10h] [rbp-588h]
  int v575; // [rsp+10h] [rbp-588h]
  int v576; // [rsp+18h] [rbp-580h]
  __m128i *v577; // [rsp+18h] [rbp-580h]
  int v578; // [rsp+18h] [rbp-580h]
  int v579; // [rsp+18h] [rbp-580h]
  int v580; // [rsp+18h] [rbp-580h]
  int v581; // [rsp+18h] [rbp-580h]
  _QWORD *v582; // [rsp+18h] [rbp-580h]
  int v583; // [rsp+18h] [rbp-580h]
  int v584; // [rsp+18h] [rbp-580h]
  int v585; // [rsp+18h] [rbp-580h]
  int v586; // [rsp+18h] [rbp-580h]
  __int64 v587; // [rsp+18h] [rbp-580h]
  int v588; // [rsp+18h] [rbp-580h]
  int v589; // [rsp+18h] [rbp-580h]
  int v590; // [rsp+18h] [rbp-580h]
  int v591; // [rsp+18h] [rbp-580h]
  int v592; // [rsp+18h] [rbp-580h]
  int v593; // [rsp+18h] [rbp-580h]
  int v594; // [rsp+18h] [rbp-580h]
  _QWORD *v595; // [rsp+18h] [rbp-580h]
  int v596; // [rsp+18h] [rbp-580h]
  int v597; // [rsp+18h] [rbp-580h]
  int v598; // [rsp+18h] [rbp-580h]
  int v599; // [rsp+18h] [rbp-580h]
  __int64 v600; // [rsp+18h] [rbp-580h]
  int v601; // [rsp+18h] [rbp-580h]
  int v602; // [rsp+18h] [rbp-580h]
  int v603; // [rsp+18h] [rbp-580h]
  int v604; // [rsp+18h] [rbp-580h]
  int v605; // [rsp+18h] [rbp-580h]
  int v606; // [rsp+18h] [rbp-580h]
  int v607; // [rsp+18h] [rbp-580h]
  __int64 v608; // [rsp+18h] [rbp-580h]
  int v609; // [rsp+18h] [rbp-580h]
  int v610; // [rsp+18h] [rbp-580h]
  int v611; // [rsp+18h] [rbp-580h]
  int v612; // [rsp+18h] [rbp-580h]
  int v613; // [rsp+20h] [rbp-578h]
  __m128i *v614; // [rsp+20h] [rbp-578h]
  int v615; // [rsp+20h] [rbp-578h]
  int v616; // [rsp+20h] [rbp-578h]
  int v617; // [rsp+20h] [rbp-578h]
  int v618; // [rsp+20h] [rbp-578h]
  int v619; // [rsp+20h] [rbp-578h]
  _QWORD *v620; // [rsp+20h] [rbp-578h]
  int v621; // [rsp+20h] [rbp-578h]
  __int64 v622; // [rsp+20h] [rbp-578h]
  int v623; // [rsp+20h] [rbp-578h]
  int v624; // [rsp+20h] [rbp-578h]
  int v625; // [rsp+20h] [rbp-578h]
  int v626; // [rsp+20h] [rbp-578h]
  int v627; // [rsp+20h] [rbp-578h]
  int v628; // [rsp+20h] [rbp-578h]
  int v629; // [rsp+20h] [rbp-578h]
  int v630; // [rsp+20h] [rbp-578h]
  int v631; // [rsp+20h] [rbp-578h]
  int v632; // [rsp+20h] [rbp-578h]
  _QWORD *v633; // [rsp+20h] [rbp-578h]
  int v634; // [rsp+20h] [rbp-578h]
  __int64 v635; // [rsp+20h] [rbp-578h]
  int v636; // [rsp+20h] [rbp-578h]
  int v637; // [rsp+20h] [rbp-578h]
  int v638; // [rsp+20h] [rbp-578h]
  int v639; // [rsp+20h] [rbp-578h]
  int v640; // [rsp+20h] [rbp-578h]
  int v641; // [rsp+20h] [rbp-578h]
  int v642; // [rsp+20h] [rbp-578h]
  __int64 v643; // [rsp+20h] [rbp-578h]
  int v644; // [rsp+20h] [rbp-578h]
  int v645; // [rsp+20h] [rbp-578h]
  int v646; // [rsp+20h] [rbp-578h]
  int v647; // [rsp+20h] [rbp-578h]
  int v648; // [rsp+20h] [rbp-578h]
  int v649; // [rsp+20h] [rbp-578h]
  int v650; // [rsp+28h] [rbp-570h]
  const __m128i *v651; // [rsp+28h] [rbp-570h]
  int v652; // [rsp+28h] [rbp-570h]
  int v653; // [rsp+28h] [rbp-570h]
  int v654; // [rsp+28h] [rbp-570h]
  int v655; // [rsp+28h] [rbp-570h]
  int v656; // [rsp+28h] [rbp-570h]
  int v657; // [rsp+28h] [rbp-570h]
  int v658; // [rsp+28h] [rbp-570h]
  int v659; // [rsp+28h] [rbp-570h]
  __int64 v660; // [rsp+28h] [rbp-570h]
  int v661; // [rsp+28h] [rbp-570h]
  int v662; // [rsp+28h] [rbp-570h]
  int v663; // [rsp+28h] [rbp-570h]
  int v664; // [rsp+28h] [rbp-570h]
  int v665; // [rsp+28h] [rbp-570h]
  int v666; // [rsp+28h] [rbp-570h]
  int v667; // [rsp+28h] [rbp-570h]
  int v668; // [rsp+28h] [rbp-570h]
  int v669; // [rsp+28h] [rbp-570h]
  int v670; // [rsp+28h] [rbp-570h]
  int v671; // [rsp+28h] [rbp-570h]
  int v672; // [rsp+28h] [rbp-570h]
  __int64 v673; // [rsp+28h] [rbp-570h]
  int v674; // [rsp+28h] [rbp-570h]
  int v675; // [rsp+28h] [rbp-570h]
  int v676; // [rsp+28h] [rbp-570h]
  int v677; // [rsp+28h] [rbp-570h]
  int v678; // [rsp+28h] [rbp-570h]
  _QWORD *v679; // [rsp+28h] [rbp-570h]
  int v680; // [rsp+28h] [rbp-570h]
  __int64 v681; // [rsp+28h] [rbp-570h]
  int v682; // [rsp+28h] [rbp-570h]
  int v683; // [rsp+28h] [rbp-570h]
  int v684; // [rsp+28h] [rbp-570h]
  int v685; // [rsp+28h] [rbp-570h]
  int v686; // [rsp+28h] [rbp-570h]
  __int64 v687; // [rsp+30h] [rbp-568h]
  __int64 v688; // [rsp+30h] [rbp-568h]
  __int64 v689; // [rsp+30h] [rbp-568h]
  __int64 v690; // [rsp+30h] [rbp-568h]
  __int64 v691; // [rsp+30h] [rbp-568h]
  __int64 v692; // [rsp+30h] [rbp-568h]
  __int64 v693; // [rsp+30h] [rbp-568h]
  __int64 v694; // [rsp+30h] [rbp-568h]
  __int64 v695; // [rsp+30h] [rbp-568h]
  __int64 v696; // [rsp+30h] [rbp-568h]
  __int64 v697; // [rsp+30h] [rbp-568h]
  __int64 v698; // [rsp+30h] [rbp-568h]
  __int64 v699; // [rsp+30h] [rbp-568h]
  __int64 v700; // [rsp+30h] [rbp-568h]
  __int64 v701; // [rsp+30h] [rbp-568h]
  __int64 v702; // [rsp+30h] [rbp-568h]
  __int64 v703; // [rsp+30h] [rbp-568h]
  __int64 v704; // [rsp+30h] [rbp-568h]
  __int64 v705; // [rsp+30h] [rbp-568h]
  __int64 v706; // [rsp+30h] [rbp-568h]
  __int64 v707; // [rsp+30h] [rbp-568h]
  __int64 v708; // [rsp+30h] [rbp-568h]
  __int64 v709; // [rsp+30h] [rbp-568h]
  __int64 v710; // [rsp+30h] [rbp-568h]
  __int64 v711; // [rsp+30h] [rbp-568h]
  __int64 v712; // [rsp+30h] [rbp-568h]
  __int64 v713; // [rsp+30h] [rbp-568h]
  __int64 v714; // [rsp+30h] [rbp-568h]
  __int64 v715; // [rsp+30h] [rbp-568h]
  __int64 v716; // [rsp+30h] [rbp-568h]
  __int64 v717; // [rsp+30h] [rbp-568h]
  __int64 v718; // [rsp+30h] [rbp-568h]
  __int64 v719; // [rsp+30h] [rbp-568h]
  __int64 v720; // [rsp+30h] [rbp-568h]
  __int64 v721; // [rsp+30h] [rbp-568h]
  __int64 v722; // [rsp+30h] [rbp-568h]
  __int64 v723; // [rsp+30h] [rbp-568h]
  int v724; // [rsp+38h] [rbp-560h]
  int v725; // [rsp+38h] [rbp-560h]
  int v726; // [rsp+38h] [rbp-560h]
  int v727; // [rsp+38h] [rbp-560h]
  int v728; // [rsp+38h] [rbp-560h]
  int v729; // [rsp+38h] [rbp-560h]
  int v730; // [rsp+38h] [rbp-560h]
  int v731; // [rsp+38h] [rbp-560h]
  int v732; // [rsp+38h] [rbp-560h]
  int v733; // [rsp+38h] [rbp-560h]
  int v734; // [rsp+38h] [rbp-560h]
  int v735; // [rsp+38h] [rbp-560h]
  int v736; // [rsp+38h] [rbp-560h]
  int v737; // [rsp+38h] [rbp-560h]
  int v738; // [rsp+38h] [rbp-560h]
  int v739; // [rsp+38h] [rbp-560h]
  int v740; // [rsp+38h] [rbp-560h]
  int v741; // [rsp+38h] [rbp-560h]
  int v742; // [rsp+38h] [rbp-560h]
  int v743; // [rsp+38h] [rbp-560h]
  int v744; // [rsp+38h] [rbp-560h]
  int v745; // [rsp+38h] [rbp-560h]
  int v746; // [rsp+38h] [rbp-560h]
  int v747; // [rsp+38h] [rbp-560h]
  int v748; // [rsp+38h] [rbp-560h]
  int v749; // [rsp+38h] [rbp-560h]
  int v750; // [rsp+38h] [rbp-560h]
  int v751; // [rsp+38h] [rbp-560h]
  int v752; // [rsp+38h] [rbp-560h]
  int v753; // [rsp+38h] [rbp-560h]
  int v754; // [rsp+38h] [rbp-560h]
  int v755; // [rsp+38h] [rbp-560h]
  int v756; // [rsp+38h] [rbp-560h]
  int v757; // [rsp+38h] [rbp-560h]
  int v758; // [rsp+38h] [rbp-560h]
  int v759; // [rsp+38h] [rbp-560h]
  int v760; // [rsp+38h] [rbp-560h]
  int v761; // [rsp+40h] [rbp-558h]
  __m128i *v762; // [rsp+40h] [rbp-558h]
  int v763; // [rsp+40h] [rbp-558h]
  _QWORD *v764; // [rsp+40h] [rbp-558h]
  int v765; // [rsp+40h] [rbp-558h]
  __int64 v766; // [rsp+40h] [rbp-558h]
  int v767; // [rsp+40h] [rbp-558h]
  int v768; // [rsp+40h] [rbp-558h]
  int v769; // [rsp+40h] [rbp-558h]
  int v770; // [rsp+40h] [rbp-558h]
  int v771; // [rsp+40h] [rbp-558h]
  int v772; // [rsp+40h] [rbp-558h]
  int v773; // [rsp+40h] [rbp-558h]
  int v774; // [rsp+40h] [rbp-558h]
  int v775; // [rsp+40h] [rbp-558h]
  int v776; // [rsp+40h] [rbp-558h]
  _QWORD *v777; // [rsp+40h] [rbp-558h]
  int v778; // [rsp+40h] [rbp-558h]
  __int64 v779; // [rsp+40h] [rbp-558h]
  int v780; // [rsp+40h] [rbp-558h]
  int v781; // [rsp+40h] [rbp-558h]
  int v782; // [rsp+40h] [rbp-558h]
  int v783; // [rsp+40h] [rbp-558h]
  int v784; // [rsp+40h] [rbp-558h]
  int v785; // [rsp+40h] [rbp-558h]
  int v786; // [rsp+40h] [rbp-558h]
  int v787; // [rsp+40h] [rbp-558h]
  int v788; // [rsp+40h] [rbp-558h]
  int v789; // [rsp+40h] [rbp-558h]
  int v790; // [rsp+40h] [rbp-558h]
  int v791; // [rsp+40h] [rbp-558h]
  int v792; // [rsp+40h] [rbp-558h]
  int v793; // [rsp+40h] [rbp-558h]
  int v794; // [rsp+40h] [rbp-558h]
  int v795; // [rsp+40h] [rbp-558h]
  int v796; // [rsp+40h] [rbp-558h]
  int v797; // [rsp+40h] [rbp-558h]
  int v798; // [rsp+48h] [rbp-550h]
  int v799; // [rsp+48h] [rbp-550h]
  int v800; // [rsp+48h] [rbp-550h]
  int v801; // [rsp+48h] [rbp-550h]
  int v802; // [rsp+48h] [rbp-550h]
  int v803; // [rsp+48h] [rbp-550h]
  int v804; // [rsp+48h] [rbp-550h]
  int v805; // [rsp+48h] [rbp-550h]
  int v806; // [rsp+48h] [rbp-550h]
  int v807; // [rsp+48h] [rbp-550h]
  int v808; // [rsp+48h] [rbp-550h]
  int v809; // [rsp+48h] [rbp-550h]
  int v810; // [rsp+48h] [rbp-550h]
  int v811; // [rsp+48h] [rbp-550h]
  int v812; // [rsp+48h] [rbp-550h]
  int v813; // [rsp+48h] [rbp-550h]
  int v814; // [rsp+48h] [rbp-550h]
  int v815; // [rsp+48h] [rbp-550h]
  int v816; // [rsp+48h] [rbp-550h]
  int v817; // [rsp+48h] [rbp-550h]
  int v818; // [rsp+48h] [rbp-550h]
  int v819; // [rsp+48h] [rbp-550h]
  int v820; // [rsp+48h] [rbp-550h]
  int v821; // [rsp+48h] [rbp-550h]
  int v822; // [rsp+48h] [rbp-550h]
  int v823; // [rsp+48h] [rbp-550h]
  int v824; // [rsp+48h] [rbp-550h]
  int v825; // [rsp+48h] [rbp-550h]
  int v826; // [rsp+48h] [rbp-550h]
  int v827; // [rsp+48h] [rbp-550h]
  int v828; // [rsp+48h] [rbp-550h]
  int v829; // [rsp+48h] [rbp-550h]
  int v830; // [rsp+48h] [rbp-550h]
  int v831; // [rsp+48h] [rbp-550h]
  int v832; // [rsp+48h] [rbp-550h]
  int v833; // [rsp+48h] [rbp-550h]
  int v834; // [rsp+48h] [rbp-550h]
  int v835; // [rsp+50h] [rbp-548h]
  int v836; // [rsp+50h] [rbp-548h]
  int v837; // [rsp+50h] [rbp-548h]
  int v838; // [rsp+50h] [rbp-548h]
  int v839; // [rsp+50h] [rbp-548h]
  int v840; // [rsp+50h] [rbp-548h]
  int v841; // [rsp+50h] [rbp-548h]
  int v842; // [rsp+50h] [rbp-548h]
  int v843; // [rsp+50h] [rbp-548h]
  int v844; // [rsp+50h] [rbp-548h]
  int v845; // [rsp+50h] [rbp-548h]
  int v846; // [rsp+50h] [rbp-548h]
  int v847; // [rsp+50h] [rbp-548h]
  int v848; // [rsp+50h] [rbp-548h]
  int v849; // [rsp+50h] [rbp-548h]
  int v850; // [rsp+50h] [rbp-548h]
  int v851; // [rsp+50h] [rbp-548h]
  int v852; // [rsp+50h] [rbp-548h]
  int v853; // [rsp+50h] [rbp-548h]
  int v854; // [rsp+50h] [rbp-548h]
  int v855; // [rsp+50h] [rbp-548h]
  int v856; // [rsp+50h] [rbp-548h]
  int v857; // [rsp+50h] [rbp-548h]
  int v858; // [rsp+50h] [rbp-548h]
  int v859; // [rsp+50h] [rbp-548h]
  int v860; // [rsp+50h] [rbp-548h]
  int v861; // [rsp+50h] [rbp-548h]
  int v862; // [rsp+50h] [rbp-548h]
  int v863; // [rsp+50h] [rbp-548h]
  int v864; // [rsp+50h] [rbp-548h]
  int v865; // [rsp+50h] [rbp-548h]
  int v866; // [rsp+50h] [rbp-548h]
  int v867; // [rsp+50h] [rbp-548h]
  int v868; // [rsp+50h] [rbp-548h]
  int v869; // [rsp+50h] [rbp-548h]
  int v870; // [rsp+50h] [rbp-548h]
  int v871; // [rsp+50h] [rbp-548h]
  char v872; // [rsp+58h] [rbp-540h]
  char v873; // [rsp+58h] [rbp-540h]
  char v874; // [rsp+58h] [rbp-540h]
  char v875; // [rsp+58h] [rbp-540h]
  char v876; // [rsp+58h] [rbp-540h]
  char v877; // [rsp+58h] [rbp-540h]
  char v878; // [rsp+58h] [rbp-540h]
  char v879; // [rsp+58h] [rbp-540h]
  char v880; // [rsp+58h] [rbp-540h]
  char v881; // [rsp+58h] [rbp-540h]
  char v882; // [rsp+58h] [rbp-540h]
  char v883; // [rsp+58h] [rbp-540h]
  char v884; // [rsp+58h] [rbp-540h]
  char v885; // [rsp+58h] [rbp-540h]
  char v886; // [rsp+58h] [rbp-540h]
  char v887; // [rsp+58h] [rbp-540h]
  char v888; // [rsp+58h] [rbp-540h]
  char v889; // [rsp+58h] [rbp-540h]
  char v890; // [rsp+58h] [rbp-540h]
  char v891; // [rsp+58h] [rbp-540h]
  char v892; // [rsp+58h] [rbp-540h]
  char v893; // [rsp+58h] [rbp-540h]
  char v894; // [rsp+58h] [rbp-540h]
  char v895; // [rsp+58h] [rbp-540h]
  char v896; // [rsp+58h] [rbp-540h]
  char v897; // [rsp+58h] [rbp-540h]
  char v898; // [rsp+58h] [rbp-540h]
  char v899; // [rsp+58h] [rbp-540h]
  char v900; // [rsp+58h] [rbp-540h]
  char v901; // [rsp+58h] [rbp-540h]
  char v902; // [rsp+58h] [rbp-540h]
  char v903; // [rsp+58h] [rbp-540h]
  char v904; // [rsp+58h] [rbp-540h]
  char v905; // [rsp+58h] [rbp-540h]
  char v906; // [rsp+58h] [rbp-540h]
  char v907; // [rsp+58h] [rbp-540h]
  char v908; // [rsp+58h] [rbp-540h]
  __int64 v909; // [rsp+60h] [rbp-538h]
  __int64 v910; // [rsp+60h] [rbp-538h]
  __int64 v911; // [rsp+60h] [rbp-538h]
  __int64 v912; // [rsp+60h] [rbp-538h]
  __int64 v913; // [rsp+60h] [rbp-538h]
  __int64 v914; // [rsp+60h] [rbp-538h]
  __int64 v915; // [rsp+60h] [rbp-538h]
  __int64 v916; // [rsp+60h] [rbp-538h]
  __int64 v917; // [rsp+60h] [rbp-538h]
  __int64 v918; // [rsp+60h] [rbp-538h]
  __int64 v919; // [rsp+60h] [rbp-538h]
  __int64 v920; // [rsp+60h] [rbp-538h]
  __int64 v921; // [rsp+60h] [rbp-538h]
  __int64 v922; // [rsp+60h] [rbp-538h]
  __int64 v923; // [rsp+60h] [rbp-538h]
  __int64 v924; // [rsp+60h] [rbp-538h]
  __int64 v925; // [rsp+60h] [rbp-538h]
  __int64 v926; // [rsp+60h] [rbp-538h]
  __int64 v927; // [rsp+60h] [rbp-538h]
  __int64 v928; // [rsp+60h] [rbp-538h]
  __int64 v929; // [rsp+60h] [rbp-538h]
  __int64 v930; // [rsp+60h] [rbp-538h]
  __int64 v931; // [rsp+60h] [rbp-538h]
  __int64 v932; // [rsp+60h] [rbp-538h]
  __int64 v933; // [rsp+60h] [rbp-538h]
  __int64 v934; // [rsp+60h] [rbp-538h]
  __int64 v935; // [rsp+60h] [rbp-538h]
  __int64 v936; // [rsp+60h] [rbp-538h]
  __int64 v937; // [rsp+60h] [rbp-538h]
  __int64 v938; // [rsp+60h] [rbp-538h]
  __int64 v939; // [rsp+60h] [rbp-538h]
  __int64 v940; // [rsp+60h] [rbp-538h]
  __int64 v941; // [rsp+60h] [rbp-538h]
  __int64 v942; // [rsp+60h] [rbp-538h]
  __int64 v943; // [rsp+60h] [rbp-538h]
  __int64 v944; // [rsp+60h] [rbp-538h]
  __int64 v945; // [rsp+60h] [rbp-538h]
  int v946; // [rsp+68h] [rbp-530h]
  const __m128i *v947; // [rsp+68h] [rbp-530h]
  int v948; // [rsp+68h] [rbp-530h]
  int v949; // [rsp+68h] [rbp-530h]
  int v950; // [rsp+68h] [rbp-530h]
  int v951; // [rsp+68h] [rbp-530h]
  __int64 v952; // [rsp+68h] [rbp-530h]
  int v953; // [rsp+68h] [rbp-530h]
  int v954; // [rsp+68h] [rbp-530h]
  int v955; // [rsp+68h] [rbp-530h]
  int v956; // [rsp+68h] [rbp-530h]
  int v957; // [rsp+68h] [rbp-530h]
  int v958; // [rsp+68h] [rbp-530h]
  int v959; // [rsp+68h] [rbp-530h]
  int v960; // [rsp+68h] [rbp-530h]
  int v961; // [rsp+68h] [rbp-530h]
  int v962; // [rsp+68h] [rbp-530h]
  int v963; // [rsp+68h] [rbp-530h]
  int v964; // [rsp+68h] [rbp-530h]
  __int64 v965; // [rsp+68h] [rbp-530h]
  int v966; // [rsp+68h] [rbp-530h]
  int v967; // [rsp+68h] [rbp-530h]
  int v968; // [rsp+68h] [rbp-530h]
  int v969; // [rsp+68h] [rbp-530h]
  int v970; // [rsp+68h] [rbp-530h]
  int v971; // [rsp+68h] [rbp-530h]
  int v972; // [rsp+68h] [rbp-530h]
  int v973; // [rsp+68h] [rbp-530h]
  int v974; // [rsp+68h] [rbp-530h]
  int v975; // [rsp+68h] [rbp-530h]
  int v976; // [rsp+68h] [rbp-530h]
  int v977; // [rsp+68h] [rbp-530h]
  _QWORD *v978; // [rsp+68h] [rbp-530h]
  __int64 v979; // [rsp+68h] [rbp-530h]
  int v980; // [rsp+68h] [rbp-530h]
  int v981; // [rsp+68h] [rbp-530h]
  int v982; // [rsp+68h] [rbp-530h]
  __int64 v983; // [rsp+70h] [rbp-528h]
  __int64 v984; // [rsp+70h] [rbp-528h]
  __int64 v985; // [rsp+70h] [rbp-528h]
  __int64 v986; // [rsp+70h] [rbp-528h]
  __int64 v987; // [rsp+70h] [rbp-528h]
  __int64 v988; // [rsp+70h] [rbp-528h]
  __int64 v989; // [rsp+70h] [rbp-528h]
  __int64 v990; // [rsp+70h] [rbp-528h]
  __int64 v991; // [rsp+70h] [rbp-528h]
  __int64 v992; // [rsp+70h] [rbp-528h]
  __int64 v993; // [rsp+70h] [rbp-528h]
  __int64 v994; // [rsp+70h] [rbp-528h]
  __int64 v995; // [rsp+70h] [rbp-528h]
  __int64 v996; // [rsp+70h] [rbp-528h]
  __int64 v997; // [rsp+70h] [rbp-528h]
  __int64 v998; // [rsp+70h] [rbp-528h]
  __int64 v999; // [rsp+70h] [rbp-528h]
  __int64 v1000; // [rsp+70h] [rbp-528h]
  __int64 v1001; // [rsp+70h] [rbp-528h]
  __int64 v1002; // [rsp+70h] [rbp-528h]
  __int64 v1003; // [rsp+70h] [rbp-528h]
  __int64 v1004; // [rsp+70h] [rbp-528h]
  __int64 v1005; // [rsp+70h] [rbp-528h]
  __int64 v1006; // [rsp+70h] [rbp-528h]
  __int64 v1007; // [rsp+70h] [rbp-528h]
  __int64 v1008; // [rsp+70h] [rbp-528h]
  __int64 v1009; // [rsp+70h] [rbp-528h]
  __int64 v1010; // [rsp+70h] [rbp-528h]
  __int64 v1011; // [rsp+70h] [rbp-528h]
  __int64 v1012; // [rsp+70h] [rbp-528h]
  __int64 v1013; // [rsp+70h] [rbp-528h]
  __int64 v1014; // [rsp+70h] [rbp-528h]
  __int64 v1015; // [rsp+70h] [rbp-528h]
  __int64 v1016; // [rsp+70h] [rbp-528h]
  __int64 v1017; // [rsp+70h] [rbp-528h]
  __int64 v1018; // [rsp+70h] [rbp-528h]
  __int64 v1019; // [rsp+70h] [rbp-528h]
  __m128 v1020; // [rsp+A0h] [rbp-4F8h] BYREF
  __int128 *v1021; // [rsp+B0h] [rbp-4E8h]
  ida_mcp::tools::frames *v1022; // [rsp+B8h] [rbp-4E0h]
  const __m128i *v1023; // [rsp+C0h] [rbp-4D8h]
  const __m128i *v1024; // [rsp+C8h] [rbp-4D0h]
  __int128 *v1025; // [rsp+D0h] [rbp-4C8h]
  char *v1026; // [rsp+D8h] [rbp-4C0h]
  char *v1027; // [rsp+E0h] [rbp-4B8h]
  char *v1028; // [rsp+E8h] [rbp-4B0h]
  char *v1029; // [rsp+F0h] [rbp-4A8h]
  __int8 *v1030; // [rsp+F8h] [rbp-4A0h]
  __m128i *v1031; // [rsp+100h] [rbp-498h]
  __int64 *v1032; // [rsp+108h] [rbp-490h]
  __int64 *v1033; // [rsp+110h] [rbp-488h]
  char *v1034; // [rsp+118h] [rbp-480h]
  __int64 *v1035; // [rsp+120h] [rbp-478h]
  __int64 *v1036; // [rsp+128h] [rbp-470h]
  __int64 *v1037; // [rsp+130h] [rbp-468h]
  __int64 *v1038; // [rsp+138h] [rbp-460h]
  _QWORD *v1039; // [rsp+140h] [rbp-458h]
  _BYTE *v1040; // [rsp+148h] [rbp-450h]
  _BYTE **v1041; // [rsp+150h] [rbp-448h]
  _BYTE *v1042; // [rsp+158h] [rbp-440h]
  char *v1043; // [rsp+160h] [rbp-438h]
  char *v1044; // [rsp+168h] [rbp-430h]
  __int64 *v1045; // [rsp+170h] [rbp-428h]
  char *v1046; // [rsp+178h] [rbp-420h]
  __int64 *v1047; // [rsp+180h] [rbp-418h]
  char *v1048; // [rsp+188h] [rbp-410h]
  char *v1049; // [rsp+190h] [rbp-408h]
  char *v1050; // [rsp+198h] [rbp-400h]
  char *v1051; // [rsp+1A0h] [rbp-3F8h]
  char *v1052; // [rsp+1A8h] [rbp-3F0h]
  __int64 *v1053; // [rsp+1B0h] [rbp-3E8h]
  __int64 *v1054; // [rsp+1B8h] [rbp-3E0h]
  __int64 *v1055; // [rsp+1C0h] [rbp-3D8h]
  char *v1056; // [rsp+1C8h] [rbp-3D0h]
  __m128i v1057; // [rsp+1D0h] [rbp-3C8h] BYREF
  __int64 v1058; // [rsp+1E0h] [rbp-3B8h] BYREF
  __int64 v1059; // [rsp+1E8h] [rbp-3B0h] BYREF
  char v1060; // [rsp+1F0h] [rbp-3A8h] BYREF
  __int128 v1061; // [rsp+1F8h] [rbp-3A0h]
  char v1062; // [rsp+208h] [rbp-390h]
  __int128 v1063; // [rsp+210h] [rbp-388h] BYREF
  __m128i v1064; // [rsp+220h] [rbp-378h] BYREF
  __int64 v1065; // [rsp+230h] [rbp-368h]
  char v1066; // [rsp+238h] [rbp-360h] BYREF
  char v1067; // [rsp+240h] [rbp-358h] BYREF
  __int64 v1068; // [rsp+248h] [rbp-350h]
  __m128i v1069; // [rsp+250h] [rbp-348h] BYREF
  __int64 v1070; // [rsp+260h] [rbp-338h]
  char v1071; // [rsp+268h] [rbp-330h] BYREF
  char v1072; // [rsp+270h] [rbp-328h] BYREF
  __int64 v1073; // [rsp+278h] [rbp-320h]
  char v1074; // [rsp+280h] [rbp-318h] BYREF
  __int128 v1075; // [rsp+288h] [rbp-310h]
  char v1076; // [rsp+298h] [rbp-300h]
  __int128 v1077; // [rsp+2A0h] [rbp-2F8h]
  char v1078; // [rsp+2B0h] [rbp-2E8h] BYREF
  __int128 v1079; // [rsp+2B8h] [rbp-2E0h] BYREF
  __int64 v1080; // [rsp+2C8h] [rbp-2D0h] BYREF
  char v1081; // [rsp+2D0h] [rbp-2C8h] BYREF
  __int64 v1082; // [rsp+2D8h] [rbp-2C0h]
  __int64 v1083; // [rsp+2E0h] [rbp-2B8h] BYREF
  __int128 v1084; // [rsp+2E8h] [rbp-2B0h] BYREF
  __int64 v1085; // [rsp+2F8h] [rbp-2A0h] BYREF
  char v1086; // [rsp+300h] [rbp-298h] BYREF
  __int64 v1087; // [rsp+308h] [rbp-290h]
  char v1088; // [rsp+310h] [rbp-288h] BYREF
  __int128 v1089; // [rsp+318h] [rbp-280h] BYREF
  char v1090; // [rsp+328h] [rbp-270h] BYREF
  char v1091; // [rsp+330h] [rbp-268h] BYREF
  __int64 v1092; // [rsp+338h] [rbp-260h]
  __int64 v1093; // [rsp+340h] [rbp-258h] BYREF
  __int128 v1094; // [rsp+348h] [rbp-250h] BYREF
  char v1095; // [rsp+358h] [rbp-240h] BYREF
  __int128 v1096; // [rsp+360h] [rbp-238h] BYREF
  char v1097; // [rsp+370h] [rbp-228h] BYREF
  __int128 v1098; // [rsp+378h] [rbp-220h] BYREF
  __int64 v1099; // [rsp+388h] [rbp-210h] BYREF
  __int128 v1100; // [rsp+390h] [rbp-208h] BYREF
  __int64 v1101; // [rsp+3A0h] [rbp-1F8h] BYREF
  __int128 v1102; // [rsp+3A8h] [rbp-1F0h] BYREF
  __int64 v1103; // [rsp+3B8h] [rbp-1E0h] BYREF
  char v1104; // [rsp+3C0h] [rbp-1D8h] BYREF
  __int64 v1105; // [rsp+3C8h] [rbp-1D0h]
  char v1106; // [rsp+3D0h] [rbp-1C8h] BYREF
  __int128 v1107; // [rsp+3D8h] [rbp-1C0h] BYREF
  __int64 v1108; // [rsp+3E8h] [rbp-1B0h] BYREF
  char v1109; // [rsp+3F0h] [rbp-1A8h] BYREF
  __int64 v1110; // [rsp+3F8h] [rbp-1A0h]
  char v1111; // [rsp+400h] [rbp-198h] BYREF
  __int128 v1112; // [rsp+408h] [rbp-190h]
  __int64 v1113; // [rsp+418h] [rbp-180h] BYREF
  char v1114; // [rsp+420h] [rbp-178h] BYREF
  __int64 v1115; // [rsp+428h] [rbp-170h]
  char v1116; // [rsp+430h] [rbp-168h] BYREF
  __int128 v1117; // [rsp+438h] [rbp-160h]
  __m128i v1118; // [rsp+448h] [rbp-150h] BYREF
  __int64 v1119; // [rsp+458h] [rbp-140h]
  void *v1120; // [rsp+460h] [rbp-138h] BYREF
  __int64 v1121; // [rsp+468h] [rbp-130h]
  __m128i v1122; // [rsp+470h] [rbp-128h] BYREF
  __int64 v1123; // [rsp+488h] [rbp-110h]
  _QWORD v1124[2]; // [rsp+490h] [rbp-108h] BYREF
  __int64 v1125; // [rsp+4A0h] [rbp-F8h]
  char v1126; // [rsp+4A8h] [rbp-F0h] BYREF
  _BYTE *v1127; // [rsp+4B0h] [rbp-E8h] BYREF
  __int64 v1128; // [rsp+4B8h] [rbp-E0h]
  _BYTE v1129[16]; // [rsp+4C0h] [rbp-D8h] BYREF
  _BYTE *v1130; // [rsp+4D0h] [rbp-C8h] BYREF
  __int64 v1131; // [rsp+4D8h] [rbp-C0h]
  _BYTE v1132[16]; // [rsp+4E0h] [rbp-B8h] BYREF
  char v1133; // [rsp+4F0h] [rbp-A8h]
  __int64 v1134; // [rsp+4F8h] [rbp-A0h]
  char v1135; // [rsp+510h] [rbp-88h]
  char v1136; // [rsp+548h] [rbp-50h]
  unsigned __int64 v1137; // [rsp+558h] [rbp-40h]

  v1022 = this;
  v1137 = __readfsqword(0x28u);
  v1040 = v1129;
  v1127 = v1129;
  v1128 = 0;
  v1129[0] = 0;
  v1042 = v1132;
  v1130 = v1132;
  v1132[0] = 0;
  v1131 = 0;
  v1133 = 0;
  v1134 = 0;
  v1135 = 0;
  v1136 = 0;
  std::string::_M_replace();
  v1041 = &v1130;
  std::string::_M_replace();
  v1021 = &v1089;
  *(_QWORD *)&v1089 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1088 = 3;
  v2 = operator new(0x20u);
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)v2 = v2 + 16;
  *(_QWORD *)(v2 + 8) = 4;
  v1034 = &v1090;
  v1089 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1092 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1120,
    (const __m128i *)&v1088,
    2,
    1);
  v1122.m128i_i64[0] = 0;
  v1111 = 0;
  *(_QWORD *)&v1112 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1111 = 3;
  v3 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v3, "properties", v4, v5, v6, v7, v344, (int)&v1088, v499);
  v1106 = 0;
  *(_QWORD *)&v1107 = 0;
  v1112 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1106 = 3;
  v8 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v8, "address", v9, v10, v11, v12, v345, v422, v500);
  v1107 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1093);
  *((_QWORD *)&v1094 + 1) = 0;
  v1056 = &v1095;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1096 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1101,
    (const __m128i *)&v1093,
    2,
    1);
  *((_QWORD *)&v1102 + 1) = 0;
  v1097 = 0;
  *(_QWORD *)&v1098 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1097 = 3;
  v13 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v13, "description", v14, v15, v16, v17, v346, v423, v501);
  LOBYTE(v1099) = 0;
  *(_QWORD *)&v1100 = 0;
  v1098 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1099) = 3;
  v18 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v18, "Hex address", v19, v20, v21, v22, v347, v424, v502);
  v1100 = (unsigned __int64)v18;
  v1035 = &v1103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1103,
    (const __m128i *)&v1097,
    2,
    1);
  v1036 = &v1108;
  v1105 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1108,
    (const __m128i *)&v1101,
    2,
    1);
  v1110 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1083,
    (const __m128i *)&v1106,
    2,
    1);
  *((_QWORD *)&v1084 + 1) = 0;
  v1037 = &v1113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1113,
    (__int64)&v1083,
    1,
    v23,
    v24,
    v25,
    v348,
    v425,
    v503,
    (int)&v1106,
    (int)&v1097,
    (int)&v1101,
    v687,
    v724,
    v761,
    v798,
    (int)&v1098,
    (char)&v1100,
    (__int64)&v1107,
    (int)&v1083,
    v983);
  v1115 = 0;
  v1023 = (const __m128i *)&v1111;
  v1038 = &v1122.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1122.m128i_i64[1],
    (const __m128i *)&v1111,
    2,
    1);
  v1123 = 0;
  v1116 = 0;
  *(_QWORD *)&v1117 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1116 = 3;
  v26 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v26, "required", v27, v28, v29, v30, v349, v426, v504);
  *(_QWORD *)&v1079 = 0;
  v1117 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1078 = 3;
  v31 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v31, "address", v32, v33, v34, v35, v350, v427, v505);
  v1031 = &v1057;
  v1020 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  v1079 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v36 = _mm_load_si128(&v1057);
  v1024 = (const __m128i *)&v1116;
  v1039 = v1124;
  v1119 = 0;
  v1118 = v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1124,
    (const __m128i *)&v1116,
    2,
    1);
  v1125 = 0;
  LOBYTE(v1058) = 0;
  v1032 = &v1058;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1058,
    (__int64)&v1120,
    3,
    v37,
    v38,
    v39,
    v351,
    v428,
    v506,
    v576,
    v613,
    v650,
    v688,
    v725,
    (int)&v1078,
    (int)&v1079,
    v835,
    v872,
    v909,
    v946,
    v984);
  v40 = v1133;
  v41 = (void **)&v1126;
  v42 = v1059;
  v1133 = v1058;
  LOBYTE(v1058) = v40;
  v1059 = v1134;
  v1134 = v42;
  v1033 = &v1059;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v41 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v41 != &v1120 );
  v1030 = &v1118.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1029 = &v1114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1028 = &v1109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1027 = &v1104;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1026 = &v1091;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v1020);
  v1121 = 0;
  v1120 = ida_mcp::tools::frames::`anonymous namespace'::handle_get_frame_info;
  v1122 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1122.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1122.m128i_i64[0])(&v1120, &v1120, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1127);
  v1128 = 0;
  v1129[0] = 0;
  v1127 = v1040;
  v1131 = 0;
  v1130 = v1042;
  v1132[0] = 0;
  v1133 = 0;
  v1134 = 0;
  v1135 = 0;
  v1136 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1064);
  v1065 = 0;
  v1051 = &v1066;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1068 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1120,
    &v1064,
    2,
    1);
  v1122.m128i_i64[0] = 0;
  v1111 = 0;
  *(_QWORD *)&v1112 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1111 = 3;
  v44 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v44, "properties", v45, v46, v47, v48, v352, v429, (__int64)&v1094);
  LOBYTE(v1083) = 0;
  *(_QWORD *)&v1084 = 0;
  v1112 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1083) = 3;
  v49 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v49, "function_address", v50, v51, v52, v53, v353, v430, v507);
  v1084 = (unsigned __int64)v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1069);
  v1070 = 0;
  v1052 = &v1071;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1073 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v762,
    &v1069,
    2,
    1);
  *((_QWORD *)&v1079 + 1) = 0;
  v1074 = 0;
  *(_QWORD *)&v1075 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1074 = 3;
  v54 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v54, "description", v55, v56, v57, v58, v354, v431, v508);
  v1076 = 0;
  *(_QWORD *)&v1077 = 0;
  v1075 = (unsigned __int64)v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1076 = 3;
  v59 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v59, "Function hex address", v60, v61, v62, v63, v355, v432, v509);
  v1077 = (unsigned __int64)v59;
  v1044 = &v1074;
  v1053 = &v1080;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1080,
    (const __m128i *)&v1074,
    2,
    1);
  v1054 = &v1085;
  v1082 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1085,
    v762,
    2,
    1);
  v1087 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v577,
    v947,
    2,
    1);
  *((_QWORD *)&v1107 + 1) = 0;
  LOBYTE(v1101) = 0;
  *(_QWORD *)&v1102 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1101) = 3;
  v64 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v64, "query_address", v65, v66, v67, v68, v356, v433, v510);
  v1102 = (unsigned __int64)v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v434);
  *((_QWORD *)&v1089 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1092 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v614,
    v434,
    2,
    1);
  *((_QWORD *)&v1098 + 1) = 0;
  LOBYTE(v1093) = 0;
  *(_QWORD *)&v1094 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1093) = 3;
  v69 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v69, "description", v70, v71, v72, v73, v357, (int)v434, v511);
  v1095 = 0;
  *(_QWORD *)&v1096 = 0;
  v1094 = (unsigned __int64)v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1095 = 3;
  v74 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v74, "Query hex address", v75, v76, v77, v78, v358, v435, v512);
  v1055 = &v1099;
  v1096 = (unsigned __int64)v74;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1099,
    (const __m128i *)&v1093,
    2,
    1);
  *((_QWORD *)&v1100 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1035,
    v614,
    2,
    1);
  v1105 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1036,
    v651,
    2,
    1);
  v1110 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1037,
    v577,
    2,
    1);
  v1115 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1038,
    v1023,
    2,
    1);
  v1123 = 0;
  v1116 = 0;
  *(_QWORD *)&v1117 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1116 = 3;
  v79 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v79, "required", v80, v81, v82, v83, v359, v436, v513);
  v1060 = 0;
  v1117 = (unsigned __int64)v79;
  *(_QWORD *)&v1061 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1060 = 3;
  v84 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v84, "function_address", v85, v86, v87, v88, v360, v437, v514);
  v1062 = 0;
  v1025 = &v1063;
  *(_QWORD *)&v1063 = 0;
  v1061 = (unsigned __int64)v84;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1062 = 3;
  v89 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v89, "query_address", v90, v91, v92, v93, v361, v438, v515);
  v1043 = &v1060;
  v1063 = (unsigned __int64)v89;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1031,
    (const __m128i *)&v1060,
    2,
    0);
  v94 = _mm_load_si128(&v1057);
  v1119 = 0;
  v1118 = v94;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    v1024,
    2,
    1);
  v1125 = 0;
  LOBYTE(v1058) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1032,
    (__int64)&v1120,
    3,
    v95,
    v96,
    v97,
    v362,
    v439,
    v516,
    (int)v577,
    (int)v614,
    (int)v651,
    (__int64)&v1084,
    (int)&v1096,
    (int)v762,
    v799,
    v836,
    v873,
    v910,
    (int)v947,
    (__int64)&v1102);
  v98 = v1133;
  v99 = (void **)&v1126;
  v1133 = v1058;
  v100 = v1134;
  LOBYTE(v1058) = v98;
  v1134 = v1059;
  v1059 = v100;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v99 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v99 != &v1120 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1050 = &v1086;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1049 = &v1081;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1048 = &v1072;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1047 = &v1069.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1046 = &v1067;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1045 = &v1064.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v101 = _mm_load_si128((const __m128i *)&v1020);
  v1121 = 0;
  v1120 = ida_mcp::tools::frames::`anonymous namespace'::handle_get_stack_pointer_delta;
  v1122 = v101;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1122.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1122.m128i_i64[0])(&v1120, &v1120, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1127);
  v1128 = 0;
  v1129[0] = 0;
  v1127 = v1040;
  v1131 = 0;
  v1130 = v1042;
  v1132[0] = 0;
  v1133 = 0;
  v1134 = 0;
  v1135 = 0;
  v1136 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1064);
  v1065 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1068 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1120,
    (__int64)&v1064,
    2,
    v102,
    v103,
    v104,
    v363,
    v440,
    v517,
    v578,
    v615,
    v652,
    v689,
    v726,
    v763,
    v800,
    v837,
    v874,
    v911,
    v948,
    v985);
  v1122.m128i_i64[0] = 0;
  v1111 = 0;
  *(_QWORD *)&v1112 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1111 = 3;
  v105 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v105, "properties", v106, v107, v108, v109, v364, v441, v518);
  LOBYTE(v1083) = 0;
  *(_QWORD *)&v1084 = 0;
  v1112 = (unsigned __int64)v105;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1083) = 3;
  v110 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v110, "function_address", v111, v112, v113, v114, v365, v442, v519);
  v1084 = (unsigned __int64)v110;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1069);
  v1070 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1073 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v764,
    (__int64)&v1069,
    2,
    v115,
    v116,
    v117,
    v366,
    v443,
    v520,
    v579,
    v616,
    v653,
    v690,
    v727,
    (int)v764,
    v801,
    v838,
    v875,
    v912,
    v949,
    v986);
  *((_QWORD *)&v1079 + 1) = 0;
  v1074 = 0;
  *(_QWORD *)&v1075 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1074 = 3;
  v118 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v118, "description", v119, v120, v121, v122, v367, v444, v521);
  v1076 = 0;
  *(_QWORD *)&v1077 = 0;
  v1075 = (unsigned __int64)v118;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1076 = 3;
  v123 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v123,
    "Function hex address",
    v124,
    v125,
    v126,
    v127,
    v368,
    v445,
    v522);
  v1077 = (unsigned __int64)v123;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1053,
    (__int64)v1044,
    2,
    v128,
    v129,
    v130,
    v369,
    v446,
    v523,
    v580,
    v617,
    v654,
    v691,
    v728,
    v765,
    v802,
    v839,
    v876,
    v913,
    v950,
    v987);
  v1082 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1054,
    v766,
    2,
    v131,
    v132,
    v133,
    v370,
    v447,
    v524,
    v581,
    v618,
    v655,
    v692,
    v729,
    v766,
    v803,
    v840,
    v877,
    v914,
    v951,
    v988);
  v1087 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v582,
    v952,
    2,
    v134,
    v135,
    v136,
    v371,
    v448,
    v525,
    (int)v582,
    v619,
    v656,
    v693,
    v730,
    v767,
    v804,
    v841,
    v878,
    v915,
    v952,
    v989);
  *((_QWORD *)&v1107 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1102 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v449);
  *((_QWORD *)&v1089 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1092 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v620,
    (__int64)v449,
    2,
    v137,
    v138,
    v139,
    v372,
    (__int64)v449,
    v526,
    v583,
    (int)v620,
    v657,
    v694,
    v731,
    v768,
    v805,
    v842,
    v879,
    v916,
    v953,
    v990);
  *((_QWORD *)&v1098 + 1) = 0;
  LOBYTE(v1093) = 0;
  *(_QWORD *)&v1094 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1093) = 3;
  v140 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v140, "description", v141, v142, v143, v144, v373, v450, v527);
  v1095 = 0;
  *(_QWORD *)&v1096 = 0;
  v1094 = (unsigned __int64)v140;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1095 = 3;
  v145 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v145, "Stack offset", v146, v147, v148, v149, v374, v451, v528);
  v1096 = (unsigned __int64)v145;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1055,
    (__int64)&v1093,
    2,
    v150,
    v151,
    v152,
    v375,
    v452,
    v529,
    v584,
    v621,
    v658,
    v695,
    v732,
    v769,
    v806,
    v843,
    v880,
    v917,
    v954,
    v991);
  *((_QWORD *)&v1100 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1035,
    v622,
    2,
    v153,
    v154,
    v155,
    v376,
    v453,
    v530,
    v585,
    v622,
    v659,
    v696,
    v733,
    v770,
    v807,
    v844,
    v881,
    v918,
    v955,
    v992);
  v1105 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1036,
    v660,
    2,
    v156,
    v157,
    v158,
    v377,
    v454,
    v531,
    v586,
    v623,
    v660,
    v697,
    v734,
    v771,
    v808,
    v845,
    v882,
    v919,
    v956,
    v993);
  v1110 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1037,
    v587,
    2,
    v159,
    v160,
    v161,
    v378,
    v455,
    v532,
    v587,
    v624,
    v661,
    v698,
    v735,
    v772,
    v809,
    v846,
    v883,
    v920,
    v957,
    v994);
  v1115 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1038,
    (__int64)v1023,
    2,
    v162,
    v163,
    v164,
    v379,
    v456,
    v533,
    v588,
    v625,
    v662,
    v699,
    v736,
    v773,
    v810,
    v847,
    v884,
    v921,
    v958,
    v995);
  v1123 = 0;
  v1116 = 0;
  *(_QWORD *)&v1117 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1116 = 3;
  v165 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v165, "required", v166, v167, v168, v169, v380, v457, v534);
  v1060 = 0;
  *(_QWORD *)&v1061 = 0;
  v1117 = (unsigned __int64)v165;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1060 = 3;
  v170 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v170, "function_address", v171, v172, v173, v174, v381, v458, v535);
  v1061 = (unsigned __int64)v170;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1063 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v175 = _mm_load_si128(&v1057);
  v1119 = 0;
  v1118 = v175;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    (__int64)v1024,
    2,
    v176,
    v177,
    v178,
    v382,
    v459,
    v536,
    v589,
    v626,
    v663,
    v700,
    v737,
    v774,
    v811,
    v848,
    v885,
    v922,
    v959,
    v996);
  v1125 = 0;
  LOBYTE(v1058) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1032,
    (__int64)&v1120,
    3,
    v179,
    v180,
    v181,
    v383,
    v460,
    v537,
    v590,
    v627,
    v664,
    v701,
    v738,
    v775,
    v812,
    v849,
    v886,
    v923,
    v960,
    v997);
  v182 = v1133;
  v183 = (void **)&v1126;
  v1133 = v1058;
  v184 = v1134;
  LOBYTE(v1058) = v182;
  v1134 = v1059;
  v1059 = v184;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v183 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v183 != &v1120 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v185 = _mm_load_si128((const __m128i *)&v1020);
  v1121 = 0;
  v1120 = ida_mcp::tools::frames::`anonymous namespace'::handle_get_stack_variable_name;
  v1122 = v185;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1122.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1122.m128i_i64[0])(&v1120, &v1120, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1127);
  v1128 = 0;
  v1129[0] = 0;
  v1127 = v1040;
  v1131 = 0;
  v1130 = v1042;
  v1132[0] = 0;
  v1133 = 0;
  v1134 = 0;
  v1135 = 0;
  v1136 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1064);
  v1065 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1068 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1120,
    (__int64)&v1064,
    2,
    v186,
    v187,
    v188,
    v384,
    v461,
    v538,
    v591,
    v628,
    v665,
    v702,
    v739,
    v776,
    v813,
    v850,
    v887,
    v924,
    v961,
    v998);
  v1122.m128i_i64[0] = 0;
  v1111 = 0;
  *(_QWORD *)&v1112 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1111 = 3;
  v189 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v189, "properties", v190, v191, v192, v193, v385, v462, v539);
  LOBYTE(v1083) = 0;
  *(_QWORD *)&v1084 = 0;
  v1112 = (unsigned __int64)v189;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1083) = 3;
  v194 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v194, "function_address", v195, v196, v197, v198, v386, v463, v540);
  v1084 = (unsigned __int64)v194;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1069);
  v1070 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1073 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v777,
    (__int64)&v1069,
    2,
    v199,
    v200,
    v201,
    v387,
    v464,
    v541,
    v592,
    v629,
    v666,
    v703,
    v740,
    (int)v777,
    v814,
    v851,
    v888,
    v925,
    v962,
    v999);
  *((_QWORD *)&v1079 + 1) = 0;
  v1074 = 0;
  *(_QWORD *)&v1075 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1074 = 3;
  v202 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v202, "description", v203, v204, v205, v206, v388, v465, v542);
  v1076 = 0;
  *(_QWORD *)&v1077 = 0;
  v1075 = (unsigned __int64)v202;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1076 = 3;
  v207 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v207,
    "Function hex address",
    v208,
    v209,
    v210,
    v211,
    v389,
    v466,
    v543);
  v1077 = (unsigned __int64)v207;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1053,
    (__int64)v1044,
    2,
    v212,
    v213,
    v214,
    v390,
    v467,
    v544,
    v593,
    v630,
    v667,
    v704,
    v741,
    v778,
    v815,
    v852,
    v889,
    v926,
    v963,
    v1000);
  v1082 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1054,
    v779,
    2,
    v215,
    v216,
    v217,
    v391,
    v468,
    v545,
    v594,
    v631,
    v668,
    v705,
    v742,
    v779,
    v816,
    v853,
    v890,
    v927,
    v964,
    v1001);
  v1087 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v595,
    v965,
    2,
    v218,
    v219,
    v220,
    v392,
    v469,
    v546,
    (int)v595,
    v632,
    v669,
    v706,
    v743,
    v780,
    v817,
    v854,
    v891,
    v928,
    v965,
    v1002);
  *((_QWORD *)&v1107 + 1) = 0;
  LOBYTE(v1101) = 0;
  *(_QWORD *)&v1102 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1101) = 3;
  v221 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v221, "part", v222, v223, v224, v225, v393, v470, v547);
  v1102 = (unsigned __int64)v221;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v471);
  *((_QWORD *)&v1089 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1092 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v633,
    (__int64)v471,
    2,
    v226,
    v227,
    v228,
    v394,
    (__int64)v471,
    v548,
    v596,
    (int)v633,
    v670,
    v707,
    v744,
    v781,
    v818,
    v855,
    v892,
    v929,
    v966,
    v1003);
  *((_QWORD *)&v1098 + 1) = 0;
  LOBYTE(v1093) = 0;
  *(_QWORD *)&v1094 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1093) = 3;
  v229 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v229, "description", v230, v231, v232, v233, v395, v472, v549);
  v1095 = 0;
  *(_QWORD *)&v1096 = 0;
  v1094 = (unsigned __int64)v229;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1095 = 3;
  v234 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v234, "Frame part ID", v235, v236, v237, v238, v396, v473, v550);
  v1096 = (unsigned __int64)v234;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1055,
    (__int64)&v1093,
    2,
    v239,
    v240,
    v241,
    v397,
    v474,
    v551,
    v597,
    v634,
    v671,
    v708,
    v745,
    v782,
    v819,
    v856,
    v893,
    v930,
    v967,
    v1004);
  *((_QWORD *)&v1100 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1035,
    v635,
    2,
    v242,
    v243,
    v244,
    v398,
    v475,
    v552,
    v598,
    v635,
    v672,
    v709,
    v746,
    v783,
    v820,
    v857,
    v894,
    v931,
    v968,
    v1005);
  v1105 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1036,
    v673,
    2,
    v245,
    v246,
    v247,
    v399,
    v476,
    v553,
    v599,
    v636,
    v673,
    v710,
    v747,
    v784,
    v821,
    v858,
    v895,
    v932,
    v969,
    v1006);
  v1110 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1037,
    v600,
    2,
    v248,
    v249,
    v250,
    v400,
    v477,
    v554,
    v600,
    v637,
    v674,
    v711,
    v748,
    v785,
    v822,
    v859,
    v896,
    v933,
    v970,
    v1007);
  v1115 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1038,
    (__int64)v1023,
    2,
    v251,
    v252,
    v253,
    v401,
    v478,
    v555,
    v601,
    v638,
    v675,
    v712,
    v749,
    v786,
    v823,
    v860,
    v897,
    v934,
    v971,
    v1008);
  v1123 = 0;
  v1116 = 0;
  *(_QWORD *)&v1117 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1116 = 3;
  v254 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v254, "required", v255, v256, v257, v258, v402, v479, v556);
  v1060 = 0;
  *(_QWORD *)&v1061 = 0;
  v1117 = (unsigned __int64)v254;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1060 = 3;
  v259 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v259, "function_address", v260, v261, v262, v263, v403, v480, v557);
  v1062 = 0;
  *(_QWORD *)&v1063 = 0;
  v1061 = (unsigned __int64)v259;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1062 = 3;
  v264 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v264, "part", v265, v266, v267, v268, v404, v481, v558);
  v1063 = (unsigned __int64)v264;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v269 = _mm_load_si128(&v1057);
  v1119 = 0;
  v1118 = v269;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    (__int64)v1024,
    2,
    v270,
    v271,
    v272,
    v405,
    v482,
    v559,
    v602,
    v639,
    v676,
    v713,
    v750,
    v787,
    v824,
    v861,
    v898,
    v935,
    v972,
    v1009);
  v1125 = 0;
  LOBYTE(v1058) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1032,
    (__int64)&v1120,
    3,
    v273,
    v274,
    v275,
    v406,
    v483,
    v560,
    v603,
    v640,
    v677,
    v714,
    v751,
    v788,
    v825,
    v862,
    v899,
    v936,
    v973,
    v1010);
  v276 = v1133;
  v277 = (void **)&v1126;
  v1133 = v1058;
  v278 = v1134;
  LOBYTE(v1058) = v276;
  v1134 = v1059;
  v1059 = v278;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v277 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v277 != &v1120 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v279 = _mm_load_si128((const __m128i *)&v1020);
  v1121 = 0;
  v1120 = ida_mcp::tools::frames::`anonymous namespace'::handle_get_frame_part;
  v1122 = v279;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1122.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1122.m128i_i64[0])(&v1120, &v1120, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1127);
  v1128 = 0;
  v1129[0] = 0;
  v1127 = v1040;
  v1131 = 0;
  v1130 = v1042;
  v1132[0] = 0;
  v1133 = 0;
  v1134 = 0;
  v1135 = 0;
  v1136 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v484);
  *((_QWORD *)&v1089 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1092 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1120,
    (__int64)v484,
    2,
    v280,
    v281,
    v282,
    v407,
    (__int64)v484,
    v561,
    v604,
    v641,
    v678,
    v715,
    v752,
    v789,
    v826,
    v863,
    v900,
    v937,
    v974,
    v1011);
  v1122.m128i_i64[0] = 0;
  v1111 = 0;
  *(_QWORD *)&v1112 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1111 = 3;
  v283 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v283, "properties", v284, v285, v286, v287, v408, v485, v562);
  v1106 = 0;
  *(_QWORD *)&v1107 = 0;
  v1112 = (unsigned __int64)v283;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1106 = 3;
  v288 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v288, "address", v289, v290, v291, v292, v409, v486, v563);
  LOBYTE(v1093) = 0;
  *(_QWORD *)&v1094 = 0;
  v1107 = (unsigned __int64)v288;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1093) = 3;
  v293 = operator new(0x20u);
  strcpy((char *)(v293 + 16), "type");
  *(_QWORD *)v293 = v293 + 16;
  *(_QWORD *)(v293 + 8) = 4;
  v1094 = (unsigned __int64)v293;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1096 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v679,
    (__int64)&v1093,
    2,
    v294,
    v295,
    v296,
    v410,
    v487,
    v564,
    v605,
    v642,
    (int)v679,
    v716,
    v753,
    v790,
    v827,
    v864,
    v901,
    v938,
    v975,
    v1012);
  *((_QWORD *)&v1102 + 1) = 0;
  v1097 = 0;
  *(_QWORD *)&v1098 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1097 = 3;
  v297 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v297, "description", v298, v299, v300, v301, v411, v488, v565);
  LOBYTE(v1099) = 0;
  *(_QWORD *)&v1100 = 0;
  v1098 = (unsigned __int64)v297;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1099) = 3;
  v302 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v302, "Hex address", v303, v304, v305, v306, v412, v489, v566);
  v1100 = (unsigned __int64)v302;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1035,
    v643,
    2,
    v307,
    v308,
    v309,
    v413,
    v490,
    v567,
    v606,
    v643,
    v680,
    v717,
    v754,
    v791,
    v828,
    v865,
    v902,
    v939,
    v976,
    v1013);
  v1105 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1036,
    v681,
    2,
    v310,
    v311,
    v312,
    v414,
    v491,
    v568,
    v607,
    v644,
    v681,
    v718,
    v755,
    v792,
    v829,
    v866,
    v903,
    v940,
    v977,
    v1014);
  v1110 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v978,
    v608,
    2,
    v313,
    v314,
    v315,
    v415,
    v492,
    v569,
    v608,
    v645,
    v682,
    v719,
    v756,
    v793,
    v830,
    v867,
    v904,
    v941,
    (int)v978,
    v1015);
  *((_QWORD *)&v1084 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1037,
    v979,
    1,
    v316,
    v317,
    v318,
    v416,
    v493,
    v570,
    v609,
    v646,
    v683,
    v720,
    v757,
    v794,
    v831,
    v868,
    v905,
    v942,
    v979,
    v1016);
  v1115 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1038,
    (__int64)v1023,
    2,
    v319,
    v320,
    v321,
    v417,
    v494,
    v571,
    v610,
    v647,
    v684,
    v721,
    v758,
    v795,
    v832,
    v869,
    v906,
    v943,
    v980,
    v1017);
  v1123 = 0;
  v1116 = 0;
  *(_QWORD *)&v1117 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1116 = 3;
  v322 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v322, "required", v323, v324, v325, v326, v418, v495, v572);
  v1078 = 0;
  *(_QWORD *)&v1079 = 0;
  v1117 = (unsigned __int64)v322;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1078 = 3;
  v327 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v327, "address", v328, v329, v330, v331, v419, v496, v573);
  v1079 = (unsigned __int64)v327;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v332 = _mm_load_si128(&v1057);
  v1119 = 0;
  v1118 = v332;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1039,
    (__int64)v1024,
    2,
    v333,
    v334,
    v335,
    v420,
    v497,
    v574,
    v611,
    v648,
    v685,
    v722,
    v759,
    v796,
    v833,
    v870,
    v907,
    v944,
    v981,
    v1018);
  v1125 = 0;
  LOBYTE(v1058) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1032,
    (__int64)&v1120,
    3,
    v336,
    v337,
    v338,
    v421,
    v498,
    v575,
    v612,
    v649,
    v686,
    v723,
    v760,
    v797,
    v834,
    v871,
    v908,
    v945,
    v982,
    v1019);
  v339 = v1133;
  v340 = (void **)&v1126;
  v1133 = v1058;
  v341 = v1134;
  LOBYTE(v1058) = v339;
  v1134 = v1059;
  v1059 = v341;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v340 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v340 != &v1120 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v342 = _mm_load_si128((const __m128i *)&v1020);
  v1121 = 0;
  v1120 = ida_mcp::tools::frames::`anonymous namespace'::handle_get_frame_size;
  v1122 = v342;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1122.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1122.m128i_i64[0])(&v1120, &v1120, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1127);
  return v1137 - __readfsqword(0x28u);
}

