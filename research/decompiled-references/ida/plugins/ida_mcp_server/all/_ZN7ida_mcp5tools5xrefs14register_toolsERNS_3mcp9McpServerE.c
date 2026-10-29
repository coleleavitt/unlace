unsigned __int64 __fastcall ida_mcp::tools::xrefs::register_tools(
        ida_mcp::tools::xrefs *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // rbp
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128i v40; // xmm0
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  char v44; // si
  void **v45; // rbp
  __int64 v46; // rdx
  __int64 *v47; // rbp
  __m128i si128; // xmm2
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 *v52; // rbp
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 *v57; // rbp
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // rbp
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 *v68; // rbp
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 *v73; // rbp
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 *v90; // rbp
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __m128i v95; // xmm0
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  char v102; // si
  void **v103; // rbp
  __int64 v104; // rax
  __int64 *v105; // rbp
  __m128i v106; // xmm3
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rax
  __int64 *v114; // rbp
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
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
  __int64 *v134; // r12
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __m128i v139; // xmm0
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  char v146; // si
  void **v147; // r12
  __int64 v148; // rax
  __m128i v149; // xmm4
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rax
  __int64 *v157; // r13
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 *v177; // r13
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __m128i v182; // xmm0
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  char v189; // si
  void **v190; // r13
  __int64 v191; // rax
  __m128i v192; // xmm5
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 v201; // rax
  __int64 *v202; // rbp
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
  __int64 *v216; // rbp
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 *v221; // rbp
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  __int64 v229; // rax
  __int64 *v230; // rbp
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 *v238; // rbp
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // r8
  __int64 v242; // r9
  __int64 v243; // rcx
  __int64 v244; // r8
  __int64 v245; // r9
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 v248; // r9
  __int64 v249; // rcx
  __int64 v250; // r8
  __int64 v251; // r9
  __int64 v252; // rcx
  __int64 v253; // r8
  __int64 v254; // r9
  __int64 v255; // rcx
  __int64 v256; // r8
  __int64 v257; // r9
  __int64 *v258; // rbp
  __int64 v259; // rdx
  __int64 v260; // rcx
  __int64 v261; // r8
  __int64 v262; // r9
  __m128i v263; // xmm0
  __int64 v264; // rcx
  __int64 v265; // r8
  __int64 v266; // r9
  __int64 v267; // rcx
  __int64 v268; // r8
  __int64 v269; // r9
  char v270; // si
  void **v271; // rbp
  __int64 v272; // rax
  __int64 *v273; // rbp
  __m128i v274; // xmm6
  __int64 v275; // rax
  __int64 v276; // rcx
  __int64 v277; // r8
  __int64 v278; // r9
  __int64 v279; // rax
  __int64 v280; // rax
  __int64 v281; // rcx
  __int64 v282; // r8
  __int64 v283; // r9
  __int64 v284; // rax
  __int64 *v285; // rbp
  __int64 v286; // rdx
  __int64 v287; // rcx
  __int64 v288; // r8
  __int64 v289; // r9
  __int64 v290; // rcx
  __int64 v291; // r8
  __int64 v292; // r9
  __int64 v293; // rcx
  __int64 v294; // r8
  __int64 v295; // r9
  __int64 v296; // rcx
  __int64 v297; // r8
  __int64 v298; // r9
  __int64 *v299; // rbp
  __int64 v300; // rdx
  __int64 v301; // rcx
  __int64 v302; // r8
  __int64 v303; // r9
  __int64 *v304; // rbp
  __int64 v305; // rdx
  __int64 v306; // rcx
  __int64 v307; // r8
  __int64 v308; // r9
  __int64 v309; // rcx
  __int64 v310; // r8
  __int64 v311; // r9
  __int64 v312; // rax
  __int64 *v313; // rbp
  __int64 v314; // rdx
  __int64 v315; // rcx
  __int64 v316; // r8
  __int64 v317; // r9
  __int64 v318; // rcx
  __int64 v319; // r8
  __int64 v320; // r9
  __int64 *v321; // rbp
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
  __int64 *v341; // rbp
  __int64 v342; // rdx
  __int64 v343; // rcx
  __int64 v344; // r8
  __int64 v345; // r9
  __m128i v346; // xmm0
  __int64 v347; // rcx
  __int64 v348; // r8
  __int64 v349; // r9
  __int64 v350; // rcx
  __int64 v351; // r8
  __int64 v352; // r9
  char v353; // si
  void **v354; // rbp
  __int64 v355; // rax
  __int64 *v356; // rbp
  __m128i v357; // xmm7
  int v359; // [rsp+0h] [rbp-5D8h]
  int v360; // [rsp+0h] [rbp-5D8h]
  int v361; // [rsp+0h] [rbp-5D8h]
  int v362; // [rsp+0h] [rbp-5D8h]
  int v363; // [rsp+0h] [rbp-5D8h]
  const __m128i *v364; // [rsp+0h] [rbp-5D8h]
  int v365; // [rsp+0h] [rbp-5D8h]
  int v366; // [rsp+0h] [rbp-5D8h]
  _QWORD *v367; // [rsp+0h] [rbp-5D8h]
  int v368; // [rsp+0h] [rbp-5D8h]
  int v369; // [rsp+0h] [rbp-5D8h]
  int v370; // [rsp+0h] [rbp-5D8h]
  int v371; // [rsp+0h] [rbp-5D8h]
  int v372; // [rsp+0h] [rbp-5D8h]
  __int64 v373; // [rsp+0h] [rbp-5D8h]
  int v374; // [rsp+0h] [rbp-5D8h]
  int v375; // [rsp+0h] [rbp-5D8h]
  int v376; // [rsp+0h] [rbp-5D8h]
  int v377; // [rsp+0h] [rbp-5D8h]
  int v378; // [rsp+0h] [rbp-5D8h]
  _QWORD *v379; // [rsp+0h] [rbp-5D8h]
  int v380; // [rsp+0h] [rbp-5D8h]
  int v381; // [rsp+0h] [rbp-5D8h]
  __int64 v382; // [rsp+0h] [rbp-5D8h]
  int v383; // [rsp+0h] [rbp-5D8h]
  int v384; // [rsp+0h] [rbp-5D8h]
  int v385; // [rsp+0h] [rbp-5D8h]
  int v386; // [rsp+0h] [rbp-5D8h]
  int v387; // [rsp+0h] [rbp-5D8h]
  int v388; // [rsp+0h] [rbp-5D8h]
  int v389; // [rsp+0h] [rbp-5D8h]
  _QWORD *v390; // [rsp+0h] [rbp-5D8h]
  int v391; // [rsp+0h] [rbp-5D8h]
  int v392; // [rsp+0h] [rbp-5D8h]
  __int64 v393; // [rsp+0h] [rbp-5D8h]
  int v394; // [rsp+0h] [rbp-5D8h]
  int v395; // [rsp+0h] [rbp-5D8h]
  int v396; // [rsp+0h] [rbp-5D8h]
  int v397; // [rsp+0h] [rbp-5D8h]
  int v398; // [rsp+0h] [rbp-5D8h]
  int v399; // [rsp+0h] [rbp-5D8h]
  int v400; // [rsp+0h] [rbp-5D8h]
  int v401; // [rsp+0h] [rbp-5D8h]
  int v402; // [rsp+0h] [rbp-5D8h]
  int v403; // [rsp+0h] [rbp-5D8h]
  int v404; // [rsp+0h] [rbp-5D8h]
  _QWORD *v405; // [rsp+0h] [rbp-5D8h]
  int v406; // [rsp+0h] [rbp-5D8h]
  int v407; // [rsp+0h] [rbp-5D8h]
  int v408; // [rsp+0h] [rbp-5D8h]
  int v409; // [rsp+0h] [rbp-5D8h]
  int v410; // [rsp+0h] [rbp-5D8h]
  int v411; // [rsp+0h] [rbp-5D8h]
  int v412; // [rsp+0h] [rbp-5D8h]
  int v413; // [rsp+0h] [rbp-5D8h]
  int v414; // [rsp+0h] [rbp-5D8h]
  __int64 v415; // [rsp+0h] [rbp-5D8h]
  int v416; // [rsp+0h] [rbp-5D8h]
  int v417; // [rsp+0h] [rbp-5D8h]
  int v418; // [rsp+0h] [rbp-5D8h]
  int v419; // [rsp+0h] [rbp-5D8h]
  int v420; // [rsp+0h] [rbp-5D8h]
  int v421; // [rsp+0h] [rbp-5D8h]
  int v422; // [rsp+0h] [rbp-5D8h]
  int v423; // [rsp+0h] [rbp-5D8h]
  int v424; // [rsp+0h] [rbp-5D8h]
  _QWORD *v425; // [rsp+0h] [rbp-5D8h]
  int v426; // [rsp+0h] [rbp-5D8h]
  int v427; // [rsp+0h] [rbp-5D8h]
  int v428; // [rsp+0h] [rbp-5D8h]
  int v429; // [rsp+0h] [rbp-5D8h]
  int v430; // [rsp+0h] [rbp-5D8h]
  int v431; // [rsp+0h] [rbp-5D8h]
  int v432; // [rsp+0h] [rbp-5D8h]
  int v433; // [rsp+0h] [rbp-5D8h]
  int v434; // [rsp+0h] [rbp-5D8h]
  __int64 v435; // [rsp+0h] [rbp-5D8h]
  int v436; // [rsp+0h] [rbp-5D8h]
  int v437; // [rsp+0h] [rbp-5D8h]
  int v438; // [rsp+0h] [rbp-5D8h]
  int v439; // [rsp+0h] [rbp-5D8h]
  int v440; // [rsp+8h] [rbp-5D0h]
  int v441; // [rsp+8h] [rbp-5D0h]
  int v442; // [rsp+8h] [rbp-5D0h]
  int v443; // [rsp+8h] [rbp-5D0h]
  __int64 v444; // [rsp+8h] [rbp-5D0h]
  int v445; // [rsp+8h] [rbp-5D0h]
  __int64 v446; // [rsp+8h] [rbp-5D0h]
  int v447; // [rsp+8h] [rbp-5D0h]
  int v448; // [rsp+8h] [rbp-5D0h]
  int v449; // [rsp+8h] [rbp-5D0h]
  int v450; // [rsp+8h] [rbp-5D0h]
  int v451; // [rsp+8h] [rbp-5D0h]
  __int64 v452; // [rsp+8h] [rbp-5D0h]
  __int64 v453; // [rsp+8h] [rbp-5D0h]
  __int64 v454; // [rsp+8h] [rbp-5D0h]
  __int64 v455; // [rsp+8h] [rbp-5D0h]
  int v456; // [rsp+8h] [rbp-5D0h]
  __int64 v457; // [rsp+8h] [rbp-5D0h]
  __int64 v458; // [rsp+8h] [rbp-5D0h]
  __int64 v459; // [rsp+8h] [rbp-5D0h]
  __int64 v460; // [rsp+8h] [rbp-5D0h]
  int v461; // [rsp+8h] [rbp-5D0h]
  __int64 v462; // [rsp+8h] [rbp-5D0h]
  __int64 v463; // [rsp+8h] [rbp-5D0h]
  __int64 v464; // [rsp+8h] [rbp-5D0h]
  __int64 v465; // [rsp+8h] [rbp-5D0h]
  __int64 v466; // [rsp+8h] [rbp-5D0h]
  int v467; // [rsp+8h] [rbp-5D0h]
  __int64 v468; // [rsp+8h] [rbp-5D0h]
  __int64 v469; // [rsp+8h] [rbp-5D0h]
  __int64 v470; // [rsp+8h] [rbp-5D0h]
  __int64 v471; // [rsp+8h] [rbp-5D0h]
  int v472; // [rsp+8h] [rbp-5D0h]
  __int64 v473; // [rsp+8h] [rbp-5D0h]
  __int64 v474; // [rsp+8h] [rbp-5D0h]
  __int64 v475; // [rsp+8h] [rbp-5D0h]
  __int64 v476; // [rsp+8h] [rbp-5D0h]
  __int64 v477; // [rsp+8h] [rbp-5D0h]
  int v478; // [rsp+8h] [rbp-5D0h]
  __int64 v479; // [rsp+8h] [rbp-5D0h]
  __int64 v480; // [rsp+8h] [rbp-5D0h]
  __int64 v481; // [rsp+8h] [rbp-5D0h]
  __int64 v482; // [rsp+8h] [rbp-5D0h]
  int v483; // [rsp+8h] [rbp-5D0h]
  __int64 v484; // [rsp+8h] [rbp-5D0h]
  __int64 v485; // [rsp+8h] [rbp-5D0h]
  __int64 v486; // [rsp+8h] [rbp-5D0h]
  int v487; // [rsp+8h] [rbp-5D0h]
  int v488; // [rsp+8h] [rbp-5D0h]
  __int64 v489; // [rsp+8h] [rbp-5D0h]
  int v490; // [rsp+8h] [rbp-5D0h]
  __int64 v491; // [rsp+8h] [rbp-5D0h]
  int v492; // [rsp+8h] [rbp-5D0h]
  __int64 v493; // [rsp+8h] [rbp-5D0h]
  __int64 v494; // [rsp+8h] [rbp-5D0h]
  __int64 v495; // [rsp+8h] [rbp-5D0h]
  __int64 v496; // [rsp+8h] [rbp-5D0h]
  __int64 v497; // [rsp+8h] [rbp-5D0h]
  int v498; // [rsp+8h] [rbp-5D0h]
  __int64 v499; // [rsp+8h] [rbp-5D0h]
  __int64 v500; // [rsp+8h] [rbp-5D0h]
  __int64 v501; // [rsp+8h] [rbp-5D0h]
  __int64 v502; // [rsp+8h] [rbp-5D0h]
  int v503; // [rsp+8h] [rbp-5D0h]
  __int64 v504; // [rsp+8h] [rbp-5D0h]
  __int64 v505; // [rsp+8h] [rbp-5D0h]
  __int64 v506; // [rsp+8h] [rbp-5D0h]
  int v507; // [rsp+8h] [rbp-5D0h]
  int v508; // [rsp+8h] [rbp-5D0h]
  __int64 v509; // [rsp+8h] [rbp-5D0h]
  int v510; // [rsp+8h] [rbp-5D0h]
  __int64 v511; // [rsp+8h] [rbp-5D0h]
  int v512; // [rsp+8h] [rbp-5D0h]
  __int64 v513; // [rsp+8h] [rbp-5D0h]
  __int64 v514; // [rsp+8h] [rbp-5D0h]
  __int64 v515; // [rsp+8h] [rbp-5D0h]
  __int64 v516; // [rsp+8h] [rbp-5D0h]
  __int64 v517; // [rsp+8h] [rbp-5D0h]
  int v518; // [rsp+8h] [rbp-5D0h]
  __int64 v519; // [rsp+8h] [rbp-5D0h]
  __int64 v520; // [rsp+8h] [rbp-5D0h]
  const __m128i *v521; // [rsp+10h] [rbp-5C8h]
  __int64 v522; // [rsp+10h] [rbp-5C8h]
  __int64 v523; // [rsp+10h] [rbp-5C8h]
  __int64 v524; // [rsp+10h] [rbp-5C8h]
  int v525; // [rsp+10h] [rbp-5C8h]
  __int64 v526; // [rsp+10h] [rbp-5C8h]
  int v527; // [rsp+10h] [rbp-5C8h]
  _QWORD *v528; // [rsp+10h] [rbp-5C8h]
  const __m128i *v529; // [rsp+10h] [rbp-5C8h]
  __int64 v530; // [rsp+10h] [rbp-5C8h]
  __int64 v531; // [rsp+10h] [rbp-5C8h]
  __int64 v532; // [rsp+10h] [rbp-5C8h]
  int v533; // [rsp+10h] [rbp-5C8h]
  int v534; // [rsp+10h] [rbp-5C8h]
  int v535; // [rsp+10h] [rbp-5C8h]
  int v536; // [rsp+10h] [rbp-5C8h]
  __int64 v537; // [rsp+10h] [rbp-5C8h]
  int v538; // [rsp+10h] [rbp-5C8h]
  int v539; // [rsp+10h] [rbp-5C8h]
  int v540; // [rsp+10h] [rbp-5C8h]
  int v541; // [rsp+10h] [rbp-5C8h]
  __int64 v542; // [rsp+10h] [rbp-5C8h]
  int v543; // [rsp+10h] [rbp-5C8h]
  int v544; // [rsp+10h] [rbp-5C8h]
  int v545; // [rsp+10h] [rbp-5C8h]
  int v546; // [rsp+10h] [rbp-5C8h]
  int v547; // [rsp+10h] [rbp-5C8h]
  __int64 v548; // [rsp+10h] [rbp-5C8h]
  _QWORD *v549; // [rsp+10h] [rbp-5C8h]
  int v550; // [rsp+10h] [rbp-5C8h]
  int v551; // [rsp+10h] [rbp-5C8h]
  int v552; // [rsp+10h] [rbp-5C8h]
  __int64 v553; // [rsp+10h] [rbp-5C8h]
  int v554; // [rsp+10h] [rbp-5C8h]
  int v555; // [rsp+10h] [rbp-5C8h]
  int v556; // [rsp+10h] [rbp-5C8h]
  int v557; // [rsp+10h] [rbp-5C8h]
  int v558; // [rsp+10h] [rbp-5C8h]
  __int64 v559; // [rsp+10h] [rbp-5C8h]
  _QWORD *v560; // [rsp+10h] [rbp-5C8h]
  int v561; // [rsp+10h] [rbp-5C8h]
  int v562; // [rsp+10h] [rbp-5C8h]
  _QWORD *v563; // [rsp+10h] [rbp-5C8h]
  __int64 v564; // [rsp+10h] [rbp-5C8h]
  int v565; // [rsp+10h] [rbp-5C8h]
  int v566; // [rsp+10h] [rbp-5C8h]
  __int64 v567; // [rsp+10h] [rbp-5C8h]
  __int64 v568; // [rsp+10h] [rbp-5C8h]
  __int64 v569; // [rsp+10h] [rbp-5C8h]
  int v570; // [rsp+10h] [rbp-5C8h]
  __int64 v571; // [rsp+10h] [rbp-5C8h]
  int v572; // [rsp+10h] [rbp-5C8h]
  __int64 v573; // [rsp+10h] [rbp-5C8h]
  int v574; // [rsp+10h] [rbp-5C8h]
  int v575; // [rsp+10h] [rbp-5C8h]
  int v576; // [rsp+10h] [rbp-5C8h]
  int v577; // [rsp+10h] [rbp-5C8h]
  int v578; // [rsp+10h] [rbp-5C8h]
  __int64 v579; // [rsp+10h] [rbp-5C8h]
  int v580; // [rsp+10h] [rbp-5C8h]
  int v581; // [rsp+10h] [rbp-5C8h]
  int v582; // [rsp+10h] [rbp-5C8h]
  _QWORD *v583; // [rsp+10h] [rbp-5C8h]
  __int64 v584; // [rsp+10h] [rbp-5C8h]
  int v585; // [rsp+10h] [rbp-5C8h]
  int v586; // [rsp+10h] [rbp-5C8h]
  __int64 v587; // [rsp+10h] [rbp-5C8h]
  __int64 v588; // [rsp+10h] [rbp-5C8h]
  __int64 v589; // [rsp+10h] [rbp-5C8h]
  int v590; // [rsp+10h] [rbp-5C8h]
  __int64 v591; // [rsp+10h] [rbp-5C8h]
  int v592; // [rsp+10h] [rbp-5C8h]
  __int64 v593; // [rsp+10h] [rbp-5C8h]
  int v594; // [rsp+10h] [rbp-5C8h]
  int v595; // [rsp+10h] [rbp-5C8h]
  int v596; // [rsp+10h] [rbp-5C8h]
  int v597; // [rsp+10h] [rbp-5C8h]
  int v598; // [rsp+10h] [rbp-5C8h]
  __int64 v599; // [rsp+10h] [rbp-5C8h]
  int v600; // [rsp+10h] [rbp-5C8h]
  int v601; // [rsp+10h] [rbp-5C8h]
  int v602; // [rsp+18h] [rbp-5C0h]
  __m128i *v603; // [rsp+18h] [rbp-5C0h]
  int v604; // [rsp+18h] [rbp-5C0h]
  int v605; // [rsp+18h] [rbp-5C0h]
  int v606; // [rsp+18h] [rbp-5C0h]
  int v607; // [rsp+18h] [rbp-5C0h]
  int v608; // [rsp+18h] [rbp-5C0h]
  int v609; // [rsp+18h] [rbp-5C0h]
  int v610; // [rsp+18h] [rbp-5C0h]
  int v611; // [rsp+18h] [rbp-5C0h]
  int v612; // [rsp+18h] [rbp-5C0h]
  _QWORD *v613; // [rsp+18h] [rbp-5C0h]
  __int64 v614; // [rsp+18h] [rbp-5C0h]
  int v615; // [rsp+18h] [rbp-5C0h]
  int v616; // [rsp+18h] [rbp-5C0h]
  int v617; // [rsp+18h] [rbp-5C0h]
  int v618; // [rsp+18h] [rbp-5C0h]
  int v619; // [rsp+18h] [rbp-5C0h]
  int v620; // [rsp+18h] [rbp-5C0h]
  int v621; // [rsp+18h] [rbp-5C0h]
  _QWORD *v622; // [rsp+18h] [rbp-5C0h]
  __int64 v623; // [rsp+18h] [rbp-5C0h]
  int v624; // [rsp+18h] [rbp-5C0h]
  int v625; // [rsp+18h] [rbp-5C0h]
  int v626; // [rsp+18h] [rbp-5C0h]
  int v627; // [rsp+18h] [rbp-5C0h]
  int v628; // [rsp+18h] [rbp-5C0h]
  int v629; // [rsp+18h] [rbp-5C0h]
  int v630; // [rsp+18h] [rbp-5C0h]
  int v631; // [rsp+18h] [rbp-5C0h]
  _QWORD *v632; // [rsp+18h] [rbp-5C0h]
  int v633; // [rsp+18h] [rbp-5C0h]
  int v634; // [rsp+18h] [rbp-5C0h]
  int v635; // [rsp+18h] [rbp-5C0h]
  int v636; // [rsp+18h] [rbp-5C0h]
  int v637; // [rsp+18h] [rbp-5C0h]
  int v638; // [rsp+18h] [rbp-5C0h]
  int v639; // [rsp+18h] [rbp-5C0h]
  int v640; // [rsp+18h] [rbp-5C0h]
  int v641; // [rsp+18h] [rbp-5C0h]
  int v642; // [rsp+18h] [rbp-5C0h]
  int v643; // [rsp+18h] [rbp-5C0h]
  int v644; // [rsp+18h] [rbp-5C0h]
  int v645; // [rsp+18h] [rbp-5C0h]
  _QWORD *v646; // [rsp+18h] [rbp-5C0h]
  int v647; // [rsp+18h] [rbp-5C0h]
  int v648; // [rsp+18h] [rbp-5C0h]
  int v649; // [rsp+18h] [rbp-5C0h]
  int v650; // [rsp+18h] [rbp-5C0h]
  int v651; // [rsp+18h] [rbp-5C0h]
  int v652; // [rsp+18h] [rbp-5C0h]
  int v653; // [rsp+18h] [rbp-5C0h]
  int v654; // [rsp+18h] [rbp-5C0h]
  int v655; // [rsp+20h] [rbp-5B8h]
  int v656; // [rsp+20h] [rbp-5B8h]
  int v657; // [rsp+20h] [rbp-5B8h]
  int v658; // [rsp+20h] [rbp-5B8h]
  int v659; // [rsp+20h] [rbp-5B8h]
  int v660; // [rsp+20h] [rbp-5B8h]
  int v661; // [rsp+20h] [rbp-5B8h]
  int v662; // [rsp+20h] [rbp-5B8h]
  int v663; // [rsp+20h] [rbp-5B8h]
  int v664; // [rsp+20h] [rbp-5B8h]
  int v665; // [rsp+20h] [rbp-5B8h]
  int v666; // [rsp+20h] [rbp-5B8h]
  int v667; // [rsp+20h] [rbp-5B8h]
  int v668; // [rsp+20h] [rbp-5B8h]
  int v669; // [rsp+20h] [rbp-5B8h]
  int v670; // [rsp+20h] [rbp-5B8h]
  int v671; // [rsp+20h] [rbp-5B8h]
  int v672; // [rsp+20h] [rbp-5B8h]
  int v673; // [rsp+20h] [rbp-5B8h]
  int v674; // [rsp+20h] [rbp-5B8h]
  int v675; // [rsp+20h] [rbp-5B8h]
  int v676; // [rsp+20h] [rbp-5B8h]
  int v677; // [rsp+20h] [rbp-5B8h]
  int v678; // [rsp+20h] [rbp-5B8h]
  int v679; // [rsp+20h] [rbp-5B8h]
  int v680; // [rsp+20h] [rbp-5B8h]
  int v681; // [rsp+20h] [rbp-5B8h]
  int v682; // [rsp+20h] [rbp-5B8h]
  int v683; // [rsp+20h] [rbp-5B8h]
  int v684; // [rsp+20h] [rbp-5B8h]
  int v685; // [rsp+20h] [rbp-5B8h]
  int v686; // [rsp+20h] [rbp-5B8h]
  int v687; // [rsp+20h] [rbp-5B8h]
  int v688; // [rsp+20h] [rbp-5B8h]
  int v689; // [rsp+20h] [rbp-5B8h]
  int v690; // [rsp+20h] [rbp-5B8h]
  int v691; // [rsp+20h] [rbp-5B8h]
  int v692; // [rsp+20h] [rbp-5B8h]
  int v693; // [rsp+20h] [rbp-5B8h]
  int v694; // [rsp+20h] [rbp-5B8h]
  int v695; // [rsp+20h] [rbp-5B8h]
  int v696; // [rsp+20h] [rbp-5B8h]
  int v697; // [rsp+20h] [rbp-5B8h]
  int v698; // [rsp+20h] [rbp-5B8h]
  int v699; // [rsp+20h] [rbp-5B8h]
  int v700; // [rsp+20h] [rbp-5B8h]
  int v701; // [rsp+20h] [rbp-5B8h]
  int v702; // [rsp+20h] [rbp-5B8h]
  int v703; // [rsp+20h] [rbp-5B8h]
  int v704; // [rsp+20h] [rbp-5B8h]
  int v705; // [rsp+20h] [rbp-5B8h]
  int v706; // [rsp+20h] [rbp-5B8h]
  int v707; // [rsp+20h] [rbp-5B8h]
  int v708; // [rsp+28h] [rbp-5B0h]
  int v709; // [rsp+28h] [rbp-5B0h]
  int v710; // [rsp+28h] [rbp-5B0h]
  int v711; // [rsp+28h] [rbp-5B0h]
  int v712; // [rsp+28h] [rbp-5B0h]
  int v713; // [rsp+28h] [rbp-5B0h]
  int v714; // [rsp+28h] [rbp-5B0h]
  int v715; // [rsp+28h] [rbp-5B0h]
  int v716; // [rsp+28h] [rbp-5B0h]
  int v717; // [rsp+28h] [rbp-5B0h]
  int v718; // [rsp+28h] [rbp-5B0h]
  int v719; // [rsp+28h] [rbp-5B0h]
  int v720; // [rsp+28h] [rbp-5B0h]
  int v721; // [rsp+28h] [rbp-5B0h]
  int v722; // [rsp+28h] [rbp-5B0h]
  int v723; // [rsp+28h] [rbp-5B0h]
  int v724; // [rsp+28h] [rbp-5B0h]
  int v725; // [rsp+28h] [rbp-5B0h]
  int v726; // [rsp+28h] [rbp-5B0h]
  int v727; // [rsp+28h] [rbp-5B0h]
  int v728; // [rsp+28h] [rbp-5B0h]
  int v729; // [rsp+28h] [rbp-5B0h]
  int v730; // [rsp+28h] [rbp-5B0h]
  int v731; // [rsp+28h] [rbp-5B0h]
  int v732; // [rsp+28h] [rbp-5B0h]
  int v733; // [rsp+28h] [rbp-5B0h]
  int v734; // [rsp+28h] [rbp-5B0h]
  int v735; // [rsp+28h] [rbp-5B0h]
  int v736; // [rsp+28h] [rbp-5B0h]
  int v737; // [rsp+28h] [rbp-5B0h]
  int v738; // [rsp+28h] [rbp-5B0h]
  int v739; // [rsp+28h] [rbp-5B0h]
  int v740; // [rsp+28h] [rbp-5B0h]
  int v741; // [rsp+28h] [rbp-5B0h]
  int v742; // [rsp+28h] [rbp-5B0h]
  int v743; // [rsp+28h] [rbp-5B0h]
  int v744; // [rsp+28h] [rbp-5B0h]
  int v745; // [rsp+28h] [rbp-5B0h]
  int v746; // [rsp+28h] [rbp-5B0h]
  int v747; // [rsp+28h] [rbp-5B0h]
  int v748; // [rsp+28h] [rbp-5B0h]
  int v749; // [rsp+28h] [rbp-5B0h]
  int v750; // [rsp+28h] [rbp-5B0h]
  int v751; // [rsp+28h] [rbp-5B0h]
  int v752; // [rsp+28h] [rbp-5B0h]
  int v753; // [rsp+28h] [rbp-5B0h]
  int v754; // [rsp+28h] [rbp-5B0h]
  int v755; // [rsp+28h] [rbp-5B0h]
  int v756; // [rsp+28h] [rbp-5B0h]
  int v757; // [rsp+28h] [rbp-5B0h]
  int v758; // [rsp+28h] [rbp-5B0h]
  int v759; // [rsp+28h] [rbp-5B0h]
  int v760; // [rsp+28h] [rbp-5B0h]
  __int64 v761; // [rsp+30h] [rbp-5A8h]
  __int64 v762; // [rsp+30h] [rbp-5A8h]
  __int64 v763; // [rsp+30h] [rbp-5A8h]
  __int64 v764; // [rsp+30h] [rbp-5A8h]
  __int64 v765; // [rsp+30h] [rbp-5A8h]
  __int64 v766; // [rsp+30h] [rbp-5A8h]
  __int64 v767; // [rsp+30h] [rbp-5A8h]
  __int64 v768; // [rsp+30h] [rbp-5A8h]
  __int64 v769; // [rsp+30h] [rbp-5A8h]
  __int64 v770; // [rsp+30h] [rbp-5A8h]
  __int64 v771; // [rsp+30h] [rbp-5A8h]
  __int64 v772; // [rsp+30h] [rbp-5A8h]
  __int64 v773; // [rsp+30h] [rbp-5A8h]
  __int64 v774; // [rsp+30h] [rbp-5A8h]
  __int64 v775; // [rsp+30h] [rbp-5A8h]
  __int64 v776; // [rsp+30h] [rbp-5A8h]
  __int64 v777; // [rsp+30h] [rbp-5A8h]
  __int64 v778; // [rsp+30h] [rbp-5A8h]
  __int64 v779; // [rsp+30h] [rbp-5A8h]
  __int64 v780; // [rsp+30h] [rbp-5A8h]
  __int64 v781; // [rsp+30h] [rbp-5A8h]
  __int64 v782; // [rsp+30h] [rbp-5A8h]
  __int64 v783; // [rsp+30h] [rbp-5A8h]
  __int64 v784; // [rsp+30h] [rbp-5A8h]
  __int64 v785; // [rsp+30h] [rbp-5A8h]
  __int64 v786; // [rsp+30h] [rbp-5A8h]
  __int64 v787; // [rsp+30h] [rbp-5A8h]
  __int64 v788; // [rsp+30h] [rbp-5A8h]
  __int64 v789; // [rsp+30h] [rbp-5A8h]
  __int64 v790; // [rsp+30h] [rbp-5A8h]
  __int64 v791; // [rsp+30h] [rbp-5A8h]
  __int64 v792; // [rsp+30h] [rbp-5A8h]
  __int64 v793; // [rsp+30h] [rbp-5A8h]
  __int64 v794; // [rsp+30h] [rbp-5A8h]
  __int64 v795; // [rsp+30h] [rbp-5A8h]
  __int64 v796; // [rsp+30h] [rbp-5A8h]
  __int64 v797; // [rsp+30h] [rbp-5A8h]
  __int64 v798; // [rsp+30h] [rbp-5A8h]
  __int64 v799; // [rsp+30h] [rbp-5A8h]
  __int64 v800; // [rsp+30h] [rbp-5A8h]
  __int64 v801; // [rsp+30h] [rbp-5A8h]
  __int64 v802; // [rsp+30h] [rbp-5A8h]
  __int64 v803; // [rsp+30h] [rbp-5A8h]
  __int64 v804; // [rsp+30h] [rbp-5A8h]
  __int64 v805; // [rsp+30h] [rbp-5A8h]
  __int64 v806; // [rsp+30h] [rbp-5A8h]
  __int64 v807; // [rsp+30h] [rbp-5A8h]
  __int64 v808; // [rsp+30h] [rbp-5A8h]
  __int64 v809; // [rsp+30h] [rbp-5A8h]
  __int64 v810; // [rsp+30h] [rbp-5A8h]
  __int64 v811; // [rsp+30h] [rbp-5A8h]
  __int64 v812; // [rsp+30h] [rbp-5A8h]
  __int64 v813; // [rsp+30h] [rbp-5A8h]
  int v814; // [rsp+38h] [rbp-5A0h]
  int v815; // [rsp+38h] [rbp-5A0h]
  int v816; // [rsp+38h] [rbp-5A0h]
  int v817; // [rsp+38h] [rbp-5A0h]
  int v818; // [rsp+38h] [rbp-5A0h]
  int v819; // [rsp+38h] [rbp-5A0h]
  int v820; // [rsp+38h] [rbp-5A0h]
  int v821; // [rsp+38h] [rbp-5A0h]
  int v822; // [rsp+38h] [rbp-5A0h]
  int v823; // [rsp+38h] [rbp-5A0h]
  int v824; // [rsp+38h] [rbp-5A0h]
  int v825; // [rsp+38h] [rbp-5A0h]
  int v826; // [rsp+38h] [rbp-5A0h]
  int v827; // [rsp+38h] [rbp-5A0h]
  int v828; // [rsp+38h] [rbp-5A0h]
  int v829; // [rsp+38h] [rbp-5A0h]
  int v830; // [rsp+38h] [rbp-5A0h]
  int v831; // [rsp+38h] [rbp-5A0h]
  int v832; // [rsp+38h] [rbp-5A0h]
  int v833; // [rsp+38h] [rbp-5A0h]
  int v834; // [rsp+38h] [rbp-5A0h]
  int v835; // [rsp+38h] [rbp-5A0h]
  int v836; // [rsp+38h] [rbp-5A0h]
  int v837; // [rsp+38h] [rbp-5A0h]
  int v838; // [rsp+38h] [rbp-5A0h]
  int v839; // [rsp+38h] [rbp-5A0h]
  int v840; // [rsp+38h] [rbp-5A0h]
  int v841; // [rsp+38h] [rbp-5A0h]
  int v842; // [rsp+38h] [rbp-5A0h]
  int v843; // [rsp+38h] [rbp-5A0h]
  int v844; // [rsp+38h] [rbp-5A0h]
  int v845; // [rsp+38h] [rbp-5A0h]
  int v846; // [rsp+38h] [rbp-5A0h]
  int v847; // [rsp+38h] [rbp-5A0h]
  int v848; // [rsp+38h] [rbp-5A0h]
  int v849; // [rsp+38h] [rbp-5A0h]
  int v850; // [rsp+38h] [rbp-5A0h]
  int v851; // [rsp+38h] [rbp-5A0h]
  int v852; // [rsp+38h] [rbp-5A0h]
  int v853; // [rsp+38h] [rbp-5A0h]
  int v854; // [rsp+38h] [rbp-5A0h]
  int v855; // [rsp+38h] [rbp-5A0h]
  int v856; // [rsp+38h] [rbp-5A0h]
  int v857; // [rsp+38h] [rbp-5A0h]
  int v858; // [rsp+38h] [rbp-5A0h]
  int v859; // [rsp+38h] [rbp-5A0h]
  int v860; // [rsp+38h] [rbp-5A0h]
  int v861; // [rsp+38h] [rbp-5A0h]
  int v862; // [rsp+38h] [rbp-5A0h]
  int v863; // [rsp+38h] [rbp-5A0h]
  int v864; // [rsp+38h] [rbp-5A0h]
  int v865; // [rsp+38h] [rbp-5A0h]
  int v866; // [rsp+38h] [rbp-5A0h]
  int v867; // [rsp+40h] [rbp-598h]
  int v868; // [rsp+40h] [rbp-598h]
  int v869; // [rsp+40h] [rbp-598h]
  int v870; // [rsp+40h] [rbp-598h]
  int v871; // [rsp+40h] [rbp-598h]
  int v872; // [rsp+40h] [rbp-598h]
  int v873; // [rsp+40h] [rbp-598h]
  int v874; // [rsp+40h] [rbp-598h]
  int v875; // [rsp+40h] [rbp-598h]
  int v876; // [rsp+40h] [rbp-598h]
  int v877; // [rsp+40h] [rbp-598h]
  int v878; // [rsp+40h] [rbp-598h]
  int v879; // [rsp+40h] [rbp-598h]
  int v880; // [rsp+40h] [rbp-598h]
  int v881; // [rsp+40h] [rbp-598h]
  int v882; // [rsp+40h] [rbp-598h]
  int v883; // [rsp+40h] [rbp-598h]
  int v884; // [rsp+40h] [rbp-598h]
  int v885; // [rsp+40h] [rbp-598h]
  int v886; // [rsp+40h] [rbp-598h]
  int v887; // [rsp+40h] [rbp-598h]
  int v888; // [rsp+40h] [rbp-598h]
  int v889; // [rsp+40h] [rbp-598h]
  int v890; // [rsp+40h] [rbp-598h]
  int v891; // [rsp+40h] [rbp-598h]
  int v892; // [rsp+40h] [rbp-598h]
  int v893; // [rsp+40h] [rbp-598h]
  int v894; // [rsp+40h] [rbp-598h]
  int v895; // [rsp+40h] [rbp-598h]
  int v896; // [rsp+40h] [rbp-598h]
  int v897; // [rsp+40h] [rbp-598h]
  int v898; // [rsp+40h] [rbp-598h]
  int v899; // [rsp+40h] [rbp-598h]
  int v900; // [rsp+40h] [rbp-598h]
  int v901; // [rsp+40h] [rbp-598h]
  int v902; // [rsp+40h] [rbp-598h]
  int v903; // [rsp+40h] [rbp-598h]
  int v904; // [rsp+40h] [rbp-598h]
  int v905; // [rsp+40h] [rbp-598h]
  int v906; // [rsp+40h] [rbp-598h]
  int v907; // [rsp+40h] [rbp-598h]
  int v908; // [rsp+40h] [rbp-598h]
  int v909; // [rsp+40h] [rbp-598h]
  int v910; // [rsp+40h] [rbp-598h]
  int v911; // [rsp+40h] [rbp-598h]
  int v912; // [rsp+40h] [rbp-598h]
  int v913; // [rsp+40h] [rbp-598h]
  int v914; // [rsp+40h] [rbp-598h]
  int v915; // [rsp+40h] [rbp-598h]
  int v916; // [rsp+40h] [rbp-598h]
  int v917; // [rsp+40h] [rbp-598h]
  int v918; // [rsp+40h] [rbp-598h]
  int v919; // [rsp+40h] [rbp-598h]
  int v920; // [rsp+48h] [rbp-590h]
  int v921; // [rsp+48h] [rbp-590h]
  int v922; // [rsp+48h] [rbp-590h]
  int v923; // [rsp+48h] [rbp-590h]
  __int64 v924; // [rsp+48h] [rbp-590h]
  int v925; // [rsp+48h] [rbp-590h]
  int v926; // [rsp+48h] [rbp-590h]
  int v927; // [rsp+48h] [rbp-590h]
  _QWORD *v928; // [rsp+48h] [rbp-590h]
  int v929; // [rsp+48h] [rbp-590h]
  int v930; // [rsp+48h] [rbp-590h]
  __int64 v931; // [rsp+48h] [rbp-590h]
  int v932; // [rsp+48h] [rbp-590h]
  int v933; // [rsp+48h] [rbp-590h]
  int v934; // [rsp+48h] [rbp-590h]
  int v935; // [rsp+48h] [rbp-590h]
  int v936; // [rsp+48h] [rbp-590h]
  _QWORD *v937; // [rsp+48h] [rbp-590h]
  int v938; // [rsp+48h] [rbp-590h]
  int v939; // [rsp+48h] [rbp-590h]
  __int64 v940; // [rsp+48h] [rbp-590h]
  int v941; // [rsp+48h] [rbp-590h]
  int v942; // [rsp+48h] [rbp-590h]
  int v943; // [rsp+48h] [rbp-590h]
  int v944; // [rsp+48h] [rbp-590h]
  int v945; // [rsp+48h] [rbp-590h]
  int v946; // [rsp+48h] [rbp-590h]
  int v947; // [rsp+48h] [rbp-590h]
  int v948; // [rsp+48h] [rbp-590h]
  int v949; // [rsp+48h] [rbp-590h]
  int v950; // [rsp+48h] [rbp-590h]
  int v951; // [rsp+48h] [rbp-590h]
  int v952; // [rsp+48h] [rbp-590h]
  int v953; // [rsp+48h] [rbp-590h]
  int v954; // [rsp+48h] [rbp-590h]
  int v955; // [rsp+48h] [rbp-590h]
  __int64 v956; // [rsp+48h] [rbp-590h]
  int v957; // [rsp+48h] [rbp-590h]
  int v958; // [rsp+48h] [rbp-590h]
  int v959; // [rsp+48h] [rbp-590h]
  int v960; // [rsp+48h] [rbp-590h]
  int v961; // [rsp+48h] [rbp-590h]
  int v962; // [rsp+48h] [rbp-590h]
  int v963; // [rsp+48h] [rbp-590h]
  int v964; // [rsp+48h] [rbp-590h]
  int v965; // [rsp+48h] [rbp-590h]
  int v966; // [rsp+48h] [rbp-590h]
  int v967; // [rsp+48h] [rbp-590h]
  int v968; // [rsp+48h] [rbp-590h]
  int v969; // [rsp+48h] [rbp-590h]
  __int64 v970; // [rsp+48h] [rbp-590h]
  int v971; // [rsp+48h] [rbp-590h]
  int v972; // [rsp+48h] [rbp-590h]
  int v973; // [rsp+50h] [rbp-588h]
  int v974; // [rsp+50h] [rbp-588h]
  int v975; // [rsp+50h] [rbp-588h]
  int v976; // [rsp+50h] [rbp-588h]
  int v977; // [rsp+50h] [rbp-588h]
  __int64 v978; // [rsp+50h] [rbp-588h]
  int v979; // [rsp+50h] [rbp-588h]
  int v980; // [rsp+50h] [rbp-588h]
  int v981; // [rsp+50h] [rbp-588h]
  int v982; // [rsp+50h] [rbp-588h]
  int v983; // [rsp+50h] [rbp-588h]
  int v984; // [rsp+50h] [rbp-588h]
  int v985; // [rsp+50h] [rbp-588h]
  __int64 v986; // [rsp+50h] [rbp-588h]
  int v987; // [rsp+50h] [rbp-588h]
  int v988; // [rsp+50h] [rbp-588h]
  int v989; // [rsp+50h] [rbp-588h]
  int v990; // [rsp+50h] [rbp-588h]
  int v991; // [rsp+50h] [rbp-588h]
  int v992; // [rsp+50h] [rbp-588h]
  int v993; // [rsp+50h] [rbp-588h]
  int v994; // [rsp+50h] [rbp-588h]
  __int64 v995; // [rsp+50h] [rbp-588h]
  int v996; // [rsp+50h] [rbp-588h]
  int v997; // [rsp+50h] [rbp-588h]
  int v998; // [rsp+50h] [rbp-588h]
  int v999; // [rsp+50h] [rbp-588h]
  int v1000; // [rsp+50h] [rbp-588h]
  int v1001; // [rsp+50h] [rbp-588h]
  int v1002; // [rsp+50h] [rbp-588h]
  int v1003; // [rsp+50h] [rbp-588h]
  int v1004; // [rsp+50h] [rbp-588h]
  int v1005; // [rsp+50h] [rbp-588h]
  int v1006; // [rsp+50h] [rbp-588h]
  int v1007; // [rsp+50h] [rbp-588h]
  int v1008; // [rsp+50h] [rbp-588h]
  int v1009; // [rsp+50h] [rbp-588h]
  __int64 v1010; // [rsp+50h] [rbp-588h]
  int v1011; // [rsp+50h] [rbp-588h]
  int v1012; // [rsp+50h] [rbp-588h]
  int v1013; // [rsp+50h] [rbp-588h]
  int v1014; // [rsp+50h] [rbp-588h]
  int v1015; // [rsp+50h] [rbp-588h]
  int v1016; // [rsp+50h] [rbp-588h]
  int v1017; // [rsp+50h] [rbp-588h]
  int v1018; // [rsp+50h] [rbp-588h]
  int v1019; // [rsp+50h] [rbp-588h]
  int v1020; // [rsp+50h] [rbp-588h]
  int v1021; // [rsp+50h] [rbp-588h]
  int v1022; // [rsp+50h] [rbp-588h]
  int v1023; // [rsp+50h] [rbp-588h]
  __int64 v1024; // [rsp+50h] [rbp-588h]
  int v1025; // [rsp+50h] [rbp-588h]
  char v1026; // [rsp+58h] [rbp-580h]
  const __m128i *v1027; // [rsp+58h] [rbp-580h]
  char v1028; // [rsp+58h] [rbp-580h]
  char v1029; // [rsp+58h] [rbp-580h]
  char v1030; // [rsp+58h] [rbp-580h]
  char v1031; // [rsp+58h] [rbp-580h]
  char v1032; // [rsp+58h] [rbp-580h]
  _QWORD *v1033; // [rsp+58h] [rbp-580h]
  char v1034; // [rsp+58h] [rbp-580h]
  char v1035; // [rsp+58h] [rbp-580h]
  char v1036; // [rsp+58h] [rbp-580h]
  char v1037; // [rsp+58h] [rbp-580h]
  char v1038; // [rsp+58h] [rbp-580h]
  char v1039; // [rsp+58h] [rbp-580h]
  char v1040; // [rsp+58h] [rbp-580h]
  char v1041; // [rsp+58h] [rbp-580h]
  _QWORD *v1042; // [rsp+58h] [rbp-580h]
  char v1043; // [rsp+58h] [rbp-580h]
  char v1044; // [rsp+58h] [rbp-580h]
  char v1045; // [rsp+58h] [rbp-580h]
  char v1046; // [rsp+58h] [rbp-580h]
  char v1047; // [rsp+58h] [rbp-580h]
  char v1048; // [rsp+58h] [rbp-580h]
  char v1049; // [rsp+58h] [rbp-580h]
  char v1050; // [rsp+58h] [rbp-580h]
  char v1051; // [rsp+58h] [rbp-580h]
  char v1052; // [rsp+58h] [rbp-580h]
  char v1053; // [rsp+58h] [rbp-580h]
  char v1054; // [rsp+58h] [rbp-580h]
  char v1055; // [rsp+58h] [rbp-580h]
  char v1056; // [rsp+58h] [rbp-580h]
  __int64 v1057; // [rsp+58h] [rbp-580h]
  char v1058; // [rsp+58h] [rbp-580h]
  char v1059; // [rsp+58h] [rbp-580h]
  char v1060; // [rsp+58h] [rbp-580h]
  char v1061; // [rsp+58h] [rbp-580h]
  char v1062; // [rsp+58h] [rbp-580h]
  char v1063; // [rsp+58h] [rbp-580h]
  char v1064; // [rsp+58h] [rbp-580h]
  char v1065; // [rsp+58h] [rbp-580h]
  char v1066; // [rsp+58h] [rbp-580h]
  char v1067; // [rsp+58h] [rbp-580h]
  char v1068; // [rsp+58h] [rbp-580h]
  char v1069; // [rsp+58h] [rbp-580h]
  char v1070; // [rsp+58h] [rbp-580h]
  __int64 v1071; // [rsp+58h] [rbp-580h]
  char v1072; // [rsp+58h] [rbp-580h]
  char v1073; // [rsp+58h] [rbp-580h]
  char v1074; // [rsp+58h] [rbp-580h]
  char v1075; // [rsp+58h] [rbp-580h]
  char v1076; // [rsp+58h] [rbp-580h]
  char v1077; // [rsp+58h] [rbp-580h]
  char v1078; // [rsp+58h] [rbp-580h]
  __int64 v1079; // [rsp+60h] [rbp-578h]
  __m128i *v1080; // [rsp+60h] [rbp-578h]
  __int64 v1081; // [rsp+60h] [rbp-578h]
  __int64 v1082; // [rsp+60h] [rbp-578h]
  __int64 v1083; // [rsp+60h] [rbp-578h]
  __int64 v1084; // [rsp+60h] [rbp-578h]
  __int64 v1085; // [rsp+60h] [rbp-578h]
  __int64 v1086; // [rsp+60h] [rbp-578h]
  __int64 v1087; // [rsp+60h] [rbp-578h]
  __int64 v1088; // [rsp+60h] [rbp-578h]
  __int64 v1089; // [rsp+60h] [rbp-578h]
  __int64 v1090; // [rsp+60h] [rbp-578h]
  __int64 v1091; // [rsp+60h] [rbp-578h]
  __int64 v1092; // [rsp+60h] [rbp-578h]
  __int64 v1093; // [rsp+60h] [rbp-578h]
  __int64 v1094; // [rsp+60h] [rbp-578h]
  __int64 v1095; // [rsp+60h] [rbp-578h]
  __int64 v1096; // [rsp+60h] [rbp-578h]
  __int64 v1097; // [rsp+60h] [rbp-578h]
  __int64 v1098; // [rsp+60h] [rbp-578h]
  __int64 v1099; // [rsp+60h] [rbp-578h]
  __int64 v1100; // [rsp+60h] [rbp-578h]
  __int64 v1101; // [rsp+60h] [rbp-578h]
  __int64 v1102; // [rsp+60h] [rbp-578h]
  __int64 v1103; // [rsp+60h] [rbp-578h]
  __int64 v1104; // [rsp+60h] [rbp-578h]
  _QWORD *v1105; // [rsp+60h] [rbp-578h]
  __int64 v1106; // [rsp+60h] [rbp-578h]
  __int64 v1107; // [rsp+60h] [rbp-578h]
  __int64 v1108; // [rsp+60h] [rbp-578h]
  __int64 v1109; // [rsp+60h] [rbp-578h]
  __int64 v1110; // [rsp+60h] [rbp-578h]
  __int64 v1111; // [rsp+60h] [rbp-578h]
  __int64 v1112; // [rsp+60h] [rbp-578h]
  __int64 v1113; // [rsp+60h] [rbp-578h]
  __int64 v1114; // [rsp+60h] [rbp-578h]
  __int64 v1115; // [rsp+60h] [rbp-578h]
  __int64 v1116; // [rsp+60h] [rbp-578h]
  __int64 v1117; // [rsp+60h] [rbp-578h]
  __int64 v1118; // [rsp+60h] [rbp-578h]
  _QWORD *v1119; // [rsp+60h] [rbp-578h]
  __int64 v1120; // [rsp+60h] [rbp-578h]
  __int64 v1121; // [rsp+60h] [rbp-578h]
  __int64 v1122; // [rsp+60h] [rbp-578h]
  __int64 v1123; // [rsp+60h] [rbp-578h]
  __int64 v1124; // [rsp+60h] [rbp-578h]
  __int64 v1125; // [rsp+60h] [rbp-578h]
  __int64 v1126; // [rsp+60h] [rbp-578h]
  __int64 v1127; // [rsp+60h] [rbp-578h]
  __int64 v1128; // [rsp+60h] [rbp-578h]
  __int64 v1129; // [rsp+60h] [rbp-578h]
  __int64 v1130; // [rsp+60h] [rbp-578h]
  __int64 v1131; // [rsp+60h] [rbp-578h]
  int v1132; // [rsp+68h] [rbp-570h]
  __m128i *v1133; // [rsp+68h] [rbp-570h]
  int v1134; // [rsp+68h] [rbp-570h]
  int v1135; // [rsp+68h] [rbp-570h]
  int v1136; // [rsp+68h] [rbp-570h]
  int v1137; // [rsp+68h] [rbp-570h]
  int v1138; // [rsp+68h] [rbp-570h]
  int v1139; // [rsp+68h] [rbp-570h]
  int v1140; // [rsp+68h] [rbp-570h]
  int v1141; // [rsp+68h] [rbp-570h]
  int v1142; // [rsp+68h] [rbp-570h]
  int v1143; // [rsp+68h] [rbp-570h]
  int v1144; // [rsp+68h] [rbp-570h]
  int v1145; // [rsp+68h] [rbp-570h]
  int v1146; // [rsp+68h] [rbp-570h]
  int v1147; // [rsp+68h] [rbp-570h]
  int v1148; // [rsp+68h] [rbp-570h]
  int v1149; // [rsp+68h] [rbp-570h]
  int v1150; // [rsp+68h] [rbp-570h]
  int v1151; // [rsp+68h] [rbp-570h]
  int v1152; // [rsp+68h] [rbp-570h]
  int v1153; // [rsp+68h] [rbp-570h]
  int v1154; // [rsp+68h] [rbp-570h]
  int v1155; // [rsp+68h] [rbp-570h]
  int v1156; // [rsp+68h] [rbp-570h]
  _QWORD *v1157; // [rsp+68h] [rbp-570h]
  int v1158; // [rsp+68h] [rbp-570h]
  int v1159; // [rsp+68h] [rbp-570h]
  int v1160; // [rsp+68h] [rbp-570h]
  int v1161; // [rsp+68h] [rbp-570h]
  int v1162; // [rsp+68h] [rbp-570h]
  int v1163; // [rsp+68h] [rbp-570h]
  int v1164; // [rsp+68h] [rbp-570h]
  int v1165; // [rsp+68h] [rbp-570h]
  int v1166; // [rsp+68h] [rbp-570h]
  int v1167; // [rsp+68h] [rbp-570h]
  int v1168; // [rsp+68h] [rbp-570h]
  int v1169; // [rsp+68h] [rbp-570h]
  int v1170; // [rsp+68h] [rbp-570h]
  _QWORD *v1171; // [rsp+68h] [rbp-570h]
  int v1172; // [rsp+68h] [rbp-570h]
  int v1173; // [rsp+68h] [rbp-570h]
  int v1174; // [rsp+68h] [rbp-570h]
  int v1175; // [rsp+68h] [rbp-570h]
  int v1176; // [rsp+68h] [rbp-570h]
  int v1177; // [rsp+68h] [rbp-570h]
  int v1178; // [rsp+68h] [rbp-570h]
  int v1179; // [rsp+68h] [rbp-570h]
  int v1180; // [rsp+68h] [rbp-570h]
  int v1181; // [rsp+68h] [rbp-570h]
  int v1182; // [rsp+68h] [rbp-570h]
  int v1183; // [rsp+68h] [rbp-570h]
  int v1184; // [rsp+68h] [rbp-570h]
  __int64 v1185; // [rsp+70h] [rbp-568h]
  __m128i *v1186; // [rsp+70h] [rbp-568h]
  __int64 v1187; // [rsp+70h] [rbp-568h]
  __int64 v1188; // [rsp+70h] [rbp-568h]
  __int64 v1189; // [rsp+70h] [rbp-568h]
  __int64 v1190; // [rsp+70h] [rbp-568h]
  __int64 v1191; // [rsp+70h] [rbp-568h]
  __int64 v1192; // [rsp+70h] [rbp-568h]
  __int64 v1193; // [rsp+70h] [rbp-568h]
  __int64 v1194; // [rsp+70h] [rbp-568h]
  __int64 v1195; // [rsp+70h] [rbp-568h]
  __int64 v1196; // [rsp+70h] [rbp-568h]
  __int64 v1197; // [rsp+70h] [rbp-568h]
  __int64 v1198; // [rsp+70h] [rbp-568h]
  __int64 v1199; // [rsp+70h] [rbp-568h]
  __int64 v1200; // [rsp+70h] [rbp-568h]
  __int64 v1201; // [rsp+70h] [rbp-568h]
  __int64 v1202; // [rsp+70h] [rbp-568h]
  __int64 v1203; // [rsp+70h] [rbp-568h]
  __int64 v1204; // [rsp+70h] [rbp-568h]
  __int64 v1205; // [rsp+70h] [rbp-568h]
  __int64 v1206; // [rsp+70h] [rbp-568h]
  __int64 v1207; // [rsp+70h] [rbp-568h]
  __int64 v1208; // [rsp+70h] [rbp-568h]
  __int64 v1209; // [rsp+70h] [rbp-568h]
  __int64 v1210; // [rsp+70h] [rbp-568h]
  _QWORD *v1211; // [rsp+70h] [rbp-568h]
  __int64 v1212; // [rsp+70h] [rbp-568h]
  __int64 v1213; // [rsp+70h] [rbp-568h]
  __int64 v1214; // [rsp+70h] [rbp-568h]
  __int64 v1215; // [rsp+70h] [rbp-568h]
  __int64 v1216; // [rsp+70h] [rbp-568h]
  __int64 v1217; // [rsp+70h] [rbp-568h]
  __int64 v1218; // [rsp+70h] [rbp-568h]
  __int64 v1219; // [rsp+70h] [rbp-568h]
  __int64 v1220; // [rsp+70h] [rbp-568h]
  __int64 v1221; // [rsp+70h] [rbp-568h]
  __int64 v1222; // [rsp+70h] [rbp-568h]
  __int64 v1223; // [rsp+70h] [rbp-568h]
  __int64 v1224; // [rsp+70h] [rbp-568h]
  _QWORD *v1225; // [rsp+70h] [rbp-568h]
  __int64 v1226; // [rsp+70h] [rbp-568h]
  __int64 v1227; // [rsp+70h] [rbp-568h]
  __int64 v1228; // [rsp+70h] [rbp-568h]
  __int64 v1229; // [rsp+70h] [rbp-568h]
  __int64 v1230; // [rsp+70h] [rbp-568h]
  __int64 v1231; // [rsp+70h] [rbp-568h]
  __int64 v1232; // [rsp+70h] [rbp-568h]
  __int64 v1233; // [rsp+70h] [rbp-568h]
  __int64 v1234; // [rsp+70h] [rbp-568h]
  __int64 v1235; // [rsp+70h] [rbp-568h]
  __int64 v1236; // [rsp+70h] [rbp-568h]
  __int64 v1237; // [rsp+70h] [rbp-568h]
  __m128 v1238; // [rsp+B0h] [rbp-528h] BYREF
  __int128 *v1239; // [rsp+C0h] [rbp-518h]
  ida_mcp::tools::xrefs *v1240; // [rsp+C8h] [rbp-510h]
  char *v1241; // [rsp+D0h] [rbp-508h]
  char *v1242; // [rsp+D8h] [rbp-500h]
  __int64 *v1243; // [rsp+E0h] [rbp-4F8h]
  __int64 *v1244; // [rsp+E8h] [rbp-4F0h]
  char *v1245; // [rsp+F0h] [rbp-4E8h]
  char *v1246; // [rsp+F8h] [rbp-4E0h]
  char *v1247; // [rsp+100h] [rbp-4D8h]
  __int8 *v1248; // [rsp+108h] [rbp-4D0h]
  __m128i *v1249; // [rsp+110h] [rbp-4C8h]
  __int64 *v1250; // [rsp+118h] [rbp-4C0h]
  __int64 *v1251; // [rsp+120h] [rbp-4B8h]
  __int64 *v1252; // [rsp+128h] [rbp-4B0h]
  __int64 *v1253; // [rsp+130h] [rbp-4A8h]
  __int64 *v1254; // [rsp+138h] [rbp-4A0h]
  _QWORD *v1255; // [rsp+140h] [rbp-498h]
  _BYTE *v1256; // [rsp+148h] [rbp-490h]
  _BYTE **v1257; // [rsp+150h] [rbp-488h]
  _BYTE *v1258; // [rsp+158h] [rbp-480h]
  const __m128i *v1259; // [rsp+160h] [rbp-478h]
  char *v1260; // [rsp+168h] [rbp-470h]
  __int64 *v1261; // [rsp+170h] [rbp-468h]
  __int64 *v1262; // [rsp+178h] [rbp-460h]
  __int64 *v1263; // [rsp+180h] [rbp-458h]
  char *v1264; // [rsp+188h] [rbp-450h]
  char *v1265; // [rsp+190h] [rbp-448h]
  __int64 *v1266; // [rsp+198h] [rbp-440h]
  __int64 *v1267; // [rsp+1A0h] [rbp-438h]
  __int64 *v1268; // [rsp+1A8h] [rbp-430h]
  __m128i *v1269; // [rsp+1B0h] [rbp-428h]
  _QWORD *v1270; // [rsp+1B8h] [rbp-420h]
  char *v1271; // [rsp+1C0h] [rbp-418h]
  __m128i *v1272; // [rsp+1C8h] [rbp-410h]
  __m128i v1273; // [rsp+1D0h] [rbp-408h] BYREF
  __int64 v1274; // [rsp+1E0h] [rbp-3F8h] BYREF
  __int64 v1275; // [rsp+1E8h] [rbp-3F0h] BYREF
  __int64 v1276; // [rsp+1F0h] [rbp-3E8h] BYREF
  char v1277; // [rsp+1F8h] [rbp-3E0h] BYREF
  __int64 v1278; // [rsp+200h] [rbp-3D8h]
  __m128i v1279; // [rsp+210h] [rbp-3C8h] BYREF
  __int64 v1280; // [rsp+220h] [rbp-3B8h]
  char v1281; // [rsp+228h] [rbp-3B0h]
  __int128 v1282; // [rsp+230h] [rbp-3A8h]
  __m128i v1283; // [rsp+240h] [rbp-398h] BYREF
  __int64 v1284; // [rsp+250h] [rbp-388h]
  char v1285; // [rsp+258h] [rbp-380h]
  __int128 v1286; // [rsp+260h] [rbp-378h] BYREF
  char v1287; // [rsp+270h] [rbp-368h] BYREF
  __int128 v1288; // [rsp+278h] [rbp-360h]
  char v1289; // [rsp+288h] [rbp-350h]
  __int128 v1290; // [rsp+290h] [rbp-348h]
  __m128i v1291; // [rsp+2A0h] [rbp-338h] BYREF
  __int64 v1292; // [rsp+2B0h] [rbp-328h]
  __int64 v1293; // [rsp+2B8h] [rbp-320h] BYREF
  char v1294; // [rsp+2C0h] [rbp-318h] BYREF
  __int64 v1295; // [rsp+2C8h] [rbp-310h]
  __int64 v1296; // [rsp+2D0h] [rbp-308h] BYREF
  char v1297; // [rsp+2D8h] [rbp-300h] BYREF
  __int64 v1298; // [rsp+2E0h] [rbp-2F8h]
  __int64 v1299; // [rsp+2E8h] [rbp-2F0h] BYREF
  char v1300; // [rsp+2F0h] [rbp-2E8h] BYREF
  __int64 v1301; // [rsp+2F8h] [rbp-2E0h]
  __m128i v1302; // [rsp+300h] [rbp-2D8h] BYREF
  __int64 v1303; // [rsp+310h] [rbp-2C8h]
  char v1304; // [rsp+318h] [rbp-2C0h]
  __int128 v1305; // [rsp+320h] [rbp-2B8h]
  char v1306; // [rsp+330h] [rbp-2A8h] BYREF
  __int128 v1307; // [rsp+338h] [rbp-2A0h] BYREF
  char v1308; // [rsp+348h] [rbp-290h] BYREF
  __int128 v1309; // [rsp+350h] [rbp-288h] BYREF
  __int64 v1310; // [rsp+360h] [rbp-278h] BYREF
  __int128 v1311; // [rsp+368h] [rbp-270h] BYREF
  __int64 v1312; // [rsp+378h] [rbp-260h]
  __int64 v1313; // [rsp+380h] [rbp-258h] BYREF
  __int64 v1314; // [rsp+388h] [rbp-250h]
  char v1315; // [rsp+390h] [rbp-248h] BYREF
  __int128 v1316; // [rsp+398h] [rbp-240h] BYREF
  __int64 v1317; // [rsp+3A8h] [rbp-230h] BYREF
  __int128 v1318; // [rsp+3B0h] [rbp-228h]
  __int64 v1319; // [rsp+3C0h] [rbp-218h] BYREF
  char v1320; // [rsp+3C8h] [rbp-210h] BYREF
  __int64 v1321; // [rsp+3D0h] [rbp-208h]
  __int64 v1322; // [rsp+3D8h] [rbp-200h] BYREF
  char v1323; // [rsp+3E0h] [rbp-1F8h] BYREF
  __int64 v1324; // [rsp+3E8h] [rbp-1F0h]
  char v1325; // [rsp+3F0h] [rbp-1E8h] BYREF
  __int128 v1326; // [rsp+3F8h] [rbp-1E0h] BYREF
  __int64 v1327; // [rsp+408h] [rbp-1D0h] BYREF
  char v1328; // [rsp+410h] [rbp-1C8h] BYREF
  __int64 v1329; // [rsp+418h] [rbp-1C0h]
  char v1330; // [rsp+420h] [rbp-1B8h] BYREF
  __int128 v1331; // [rsp+428h] [rbp-1B0h] BYREF
  __m128i v1332; // [rsp+438h] [rbp-1A0h] BYREF
  __int64 v1333; // [rsp+448h] [rbp-190h]
  __int64 v1334; // [rsp+450h] [rbp-188h] BYREF
  __int128 v1335; // [rsp+458h] [rbp-180h]
  __m128i v1336; // [rsp+468h] [rbp-170h] BYREF
  __int64 v1337; // [rsp+478h] [rbp-160h]
  _QWORD v1338[2]; // [rsp+480h] [rbp-158h] BYREF
  __int64 v1339; // [rsp+490h] [rbp-148h]
  char v1340; // [rsp+498h] [rbp-140h] BYREF
  void *v1341; // [rsp+4A0h] [rbp-138h] BYREF
  __int64 v1342; // [rsp+4A8h] [rbp-130h]
  __m128i v1343; // [rsp+4B0h] [rbp-128h] BYREF
  __int64 v1344; // [rsp+4C8h] [rbp-110h]
  _QWORD v1345[2]; // [rsp+4D0h] [rbp-108h] BYREF
  __int64 v1346; // [rsp+4E0h] [rbp-F8h]
  char v1347; // [rsp+4E8h] [rbp-F0h] BYREF
  _BYTE *v1348; // [rsp+4F0h] [rbp-E8h] BYREF
  __int64 v1349; // [rsp+4F8h] [rbp-E0h]
  _BYTE v1350[16]; // [rsp+500h] [rbp-D8h] BYREF
  _BYTE *v1351; // [rsp+510h] [rbp-C8h] BYREF
  __int64 v1352; // [rsp+518h] [rbp-C0h]
  _BYTE v1353[16]; // [rsp+520h] [rbp-B8h] BYREF
  char v1354; // [rsp+530h] [rbp-A8h]
  __int64 v1355; // [rsp+538h] [rbp-A0h]
  char v1356; // [rsp+550h] [rbp-88h]
  char v1357; // [rsp+588h] [rbp-50h]
  unsigned __int64 v1358; // [rsp+598h] [rbp-40h]

  v1240 = this;
  v1358 = __readfsqword(0x28u);
  v1256 = v1350;
  v1348 = v1350;
  v1349 = 0;
  v1350[0] = 0;
  v1258 = v1353;
  v1351 = v1353;
  v1353[0] = 0;
  v1352 = 0;
  v1354 = 0;
  v1355 = 0;
  v1356 = 0;
  v1357 = 0;
  std::string::_M_replace();
  v1257 = &v1351;
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1279);
  v1280 = 0;
  v1281 = 0;
  *(_QWORD *)&v1282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1281 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "object");
  *(_QWORD *)(v2 + 8) = 6;
  v1282 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1341,
    &v1279);
  v1343.m128i_i64[0] = 0;
  v1325 = 0;
  *(_QWORD *)&v1326 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1325 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "properties");
  *(_QWORD *)(v3 + 8) = 10;
  v1326 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1296);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1283);
  v1284 = 0;
  v1285 = 0;
  *(_QWORD *)&v1286 = 0;
  v1239 = &v1286;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1285 = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "string");
  *(_QWORD *)(v4 + 8) = 6;
  v1286 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1291,
    &v1283);
  v1292 = 0;
  v1287 = 0;
  *(_QWORD *)&v1288 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1287 = 3;
  v5 = operator new(0x20u);
  *(_QWORD *)v5 = v5 + 16;
  strcpy((char *)(v5 + 16), "description");
  *(_QWORD *)(v5 + 8) = 11;
  v1289 = 0;
  *(_QWORD *)&v1290 = 0;
  v1288 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1289 = 3;
  v6 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v6, "Hex address", v7, v8, v9, v10, v359, v440, (__int64)&v1296);
  v1259 = (const __m128i *)&v1287;
  v1266 = &v1293;
  v1290 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1293,
    (const __m128i *)&v1287);
  v1295 = 0;
  v1267 = &v1299;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1299,
    &v1291);
  v1301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1319,
    v521);
  v1321 = 0;
  v1315 = 0;
  *(_QWORD *)&v1316 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1315 = 3;
  v11 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v11,
    "include_flow",
    v12,
    v13,
    v14,
    v15,
    (int)&v1319,
    (int)&v1316,
    (__int64)v521);
  v1316 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1302);
  v1303 = 0;
  v1304 = 0;
  *(_QWORD *)&v1305 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1304 = 3;
  v16 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v16, "boolean", v17, v18, v19, v20, v360, v441, v522);
  v1305 = (unsigned __int64)v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1334,
    &v1302);
  *((_QWORD *)&v1335 + 1) = 0;
  v1306 = 0;
  *(_QWORD *)&v1307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1306 = 3;
  v21 = operator new(0x20u);
  *(_QWORD *)v21 = v21 + 16;
  strcpy((char *)(v21 + 16), "description");
  *(_QWORD *)(v21 + 8) = 11;
  v1308 = 0;
  *(_QWORD *)&v1309 = 0;
  v1307 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1308 = 3;
  v22 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v22, "Include flow xrefs", v23, v24, v25, v26, v361, v442, v523);
  v1269 = &v1336;
  v1309 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1336,
    (const __m128i *)&v1306);
  v1337 = 0;
  LOBYTE(v1310) = 0;
  *(_QWORD *)&v1311 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1310) = 3;
  v27 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v27, "default", v28, v29, v30, v31, v362, v443, v524);
  v1312 = 4;
  v1270 = v1338;
  v1313 = 0;
  v1314 = 0;
  v1311 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1338,
    (const __m128i *)&v1310);
  v1339 = 0;
  v1268 = &v1317;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1317,
    (__int64)&v1334,
    3,
    v32,
    v33,
    v34,
    v363,
    v444,
    v525,
    (int)&v1302,
    (int)&v1307,
    (int)&v1309,
    (__int64)&v1311,
    (int)&v1326,
    v867,
    v920,
    v973,
    (char)&v1306,
    (__int64)&v1291,
    (int)&v1279,
    (__int64)&v1283);
  *((_QWORD *)&v1318 + 1) = 0;
  v1241 = &v1315;
  v1252 = &v1322;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1322,
    (const __m128i *)&v1315);
  v1324 = 0;
  v1253 = &v1327;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1327,
    v364);
  v1329 = 0;
  v1254 = &v1343.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1343.m128i_i64[1],
    (const __m128i *)&v1325);
  v1344 = 0;
  v1330 = 0;
  *(_QWORD *)&v1331 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1330 = 3;
  v35 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v35, "required", v36, v37, v38, v39, (int)v364, v445, v526);
  v1238 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  v1331 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1276);
  v1278 = 0;
  v1249 = &v1273;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v40 = _mm_load_si128(&v1273);
  v1333 = 0;
  v1255 = v1345;
  v1332 = v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1345,
    (const __m128i *)&v1330);
  v1346 = 0;
  LOBYTE(v1274) = 0;
  v1250 = &v1274;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1274,
    (__int64)&v1341,
    3,
    v41,
    v42,
    v43,
    v365,
    v446,
    v527,
    v602,
    v655,
    v708,
    v761,
    v814,
    (int)&v1331,
    (int)&v1325,
    (int)&v1330,
    v1026,
    v1079,
    v1132,
    v1185);
  v44 = v1354;
  v45 = (void **)&v1347;
  v46 = v1275;
  v1354 = v1274;
  LOBYTE(v1274) = v44;
  v1275 = v1355;
  v1355 = v46;
  v1251 = &v1275;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v45 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v45 != &v1341 );
  v47 = (__int64 *)&v1340;
  v1248 = &v1332.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1260 = &v1277;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1247 = &v1328;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1246 = &v1323;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1245 = &v1320;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v47 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v47 != &v1334 );
  v1244 = &v1313;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1243 = &v1302.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1265 = &v1300;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1242 = &v1297;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1264 = &v1294;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1263 = &v1291.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1262 = &v1283.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1261 = &v1279.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v1238);
  v1342 = 0;
  v1341 = ida_mcp::tools::xrefs::get_xrefs_to;
  v1343 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1343.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1343.m128i_i64[0])(&v1341, &v1341, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1348);
  v1349 = 0;
  v1350[0] = 0;
  v1348 = v1256;
  v1352 = 0;
  v1351 = v1258;
  v1353[0] = 0;
  v1354 = 0;
  v1355 = 0;
  v1356 = 0;
  v1357 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1133);
  v1280 = 0;
  v1281 = 0;
  *(_QWORD *)&v1282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1281 = 3;
  v49 = operator new(0x20u);
  *(_QWORD *)v49 = v49 + 16;
  strcpy((char *)(v49 + 16), "object");
  *(_QWORD *)(v49 + 8) = 6;
  v1282 = (unsigned __int64)v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1341,
    v1133);
  v1343.m128i_i64[0] = 0;
  v1325 = 0;
  *(_QWORD *)&v1326 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1325 = 3;
  v50 = operator new(0x20u);
  *(_QWORD *)v50 = v50 + 16;
  strcpy((char *)(v50 + 16), "properties");
  *(_QWORD *)(v50 + 8) = 10;
  v1326 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v528);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1186);
  v1284 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1286 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1080,
    v1186);
  v1292 = 0;
  v1287 = 0;
  *(_QWORD *)&v1288 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1287 = 3;
  v51 = operator new(0x20u);
  *(_QWORD *)v51 = v51 + 16;
  strcpy((char *)(v51 + 16), "description");
  *(_QWORD *)(v51 + 8) = 11;
  v1289 = 0;
  *(_QWORD *)&v1290 = 0;
  v1288 = (unsigned __int64)v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1289 = 3;
  v52 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v52, "Hex address", v53, v54, v55, v56, v366, v447, (__int64)v528);
  v1290 = (unsigned __int64)v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1266,
    v1259);
  v1295 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1267,
    v1080);
  v1301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v367,
    v529);
  v1321 = 0;
  v1315 = 0;
  *(_QWORD *)&v1316 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1315 = 3;
  v57 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v57,
    "include_flow",
    v58,
    v59,
    v60,
    v61,
    (int)v367,
    v448,
    (__int64)v529);
  v1316 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v603);
  v1303 = 0;
  v1304 = 0;
  *(_QWORD *)&v1305 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1304 = 3;
  v62 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v62, "boolean", v63, v64, v65, v66, v368, v449, v530);
  v1305 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1334,
    v603);
  *((_QWORD *)&v1335 + 1) = 0;
  v1306 = 0;
  *(_QWORD *)&v1307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1306 = 3;
  v67 = operator new(0x20u);
  *(_QWORD *)v67 = v67 + 16;
  strcpy((char *)(v67 + 16), "description");
  *(_QWORD *)(v67 + 8) = 11;
  v1308 = 0;
  *(_QWORD *)&v1309 = 0;
  v1307 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1308 = 3;
  v68 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v68, "Include flow xrefs", v69, v70, v71, v72, v369, v450, v531);
  v1309 = (unsigned __int64)v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1269,
    v1027);
  v1337 = 0;
  LOBYTE(v1310) = 0;
  *(_QWORD *)&v1311 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1310) = 3;
  v73 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v73, "default", v74, v75, v76, v77, v370, v451, v532);
  v1312 = 4;
  v1313 = 0;
  v1314 = 0;
  v1311 = (unsigned __int64)v73;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1270,
    (const __m128i *)&v1310);
  v1339 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1268,
    (__int64)&v1334,
    3,
    v78,
    v79,
    v80,
    v371,
    v452,
    v533,
    (int)v603,
    v656,
    v709,
    v762,
    v815,
    v868,
    v921,
    v974,
    (char)v1027,
    (__int64)v1080,
    (int)v1133,
    (__int64)v1186);
  *((_QWORD *)&v1318 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1252,
    (__int64)v1241,
    2,
    v81,
    v82,
    v83,
    v372,
    v453,
    v534,
    v604,
    v657,
    v710,
    v763,
    v816,
    v869,
    v922,
    v975,
    v1028,
    v1081,
    v1134,
    v1187);
  v1324 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    v373,
    2,
    v84,
    v85,
    v86,
    v373,
    v454,
    v535,
    v605,
    v658,
    v711,
    v764,
    v817,
    v870,
    v923,
    v976,
    v1029,
    v1082,
    v1135,
    v1188);
  v1329 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1254,
    v924,
    2,
    v87,
    v88,
    v89,
    v374,
    v455,
    v536,
    v606,
    v659,
    v712,
    v765,
    v818,
    v871,
    v924,
    v977,
    v1030,
    v1083,
    v1136,
    v1189);
  v1344 = 0;
  v1330 = 0;
  *(_QWORD *)&v1331 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1330 = 3;
  v90 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v90, "required", v91, v92, v93, v94, v375, v456, v537);
  v1331 = (unsigned __int64)v90;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1276);
  v1278 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v95 = _mm_load_si128(&v1273);
  v1333 = 0;
  v1332 = v95;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1255,
    v978,
    2,
    v96,
    v97,
    v98,
    v376,
    v457,
    v538,
    v607,
    v660,
    v713,
    v766,
    v819,
    v872,
    v925,
    v978,
    v1031,
    v1084,
    v1137,
    v1190);
  v1346 = 0;
  LOBYTE(v1274) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1250,
    (__int64)&v1341,
    3,
    v99,
    v100,
    v101,
    v377,
    v458,
    v539,
    v608,
    v661,
    v714,
    v767,
    v820,
    v873,
    v926,
    v979,
    v1032,
    v1085,
    v1138,
    v1191);
  v102 = v1354;
  v103 = (void **)&v1347;
  v1354 = v1274;
  v104 = v1355;
  LOBYTE(v1274) = v102;
  v1355 = v1275;
  v1275 = v104;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v103 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v103 != &v1341 );
  v105 = (__int64 *)&v1340;
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
    v105 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v105 != &v1334 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v106 = _mm_load_si128((const __m128i *)&v1238);
  v1342 = 0;
  v1341 = ida_mcp::tools::xrefs::get_xrefs_from;
  v1343 = v106;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1343.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1343.m128i_i64[0])(&v1341, &v1341, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1348);
  v1349 = 0;
  v1350[0] = 0;
  v1348 = v1256;
  v1352 = 0;
  v1351 = v1258;
  v1353[0] = 0;
  v1354 = 0;
  v1355 = 0;
  v1356 = 0;
  v1357 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1033);
  *((_QWORD *)&v1307 + 1) = 0;
  v1271 = &v1308;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1309 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1341,
    (__int64)v1033,
    2,
    v107,
    v108,
    v109,
    v378,
    v459,
    v540,
    v609,
    v662,
    v715,
    v768,
    v821,
    v874,
    v927,
    v980,
    (char)v1033,
    v1086,
    v1139,
    v1192);
  v1343.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  *((_QWORD *)&v1331 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v928);
  *((_QWORD *)&v1326 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1310);
  *((_QWORD *)&v1311 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1314 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v379,
    (__int64)&v1310,
    2,
    v110,
    v111,
    v112,
    (int)v379,
    v460,
    v541,
    v610,
    v663,
    v716,
    v769,
    v822,
    v875,
    (int)v928,
    v981,
    v1034,
    v1087,
    v1140,
    v1193);
  v1321 = 0;
  v1315 = 0;
  *(_QWORD *)&v1316 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1315 = 3;
  v113 = operator new(0x20u);
  *(_QWORD *)v113 = v113 + 16;
  strcpy((char *)(v113 + 16), "description");
  *(_QWORD *)(v113 + 8) = 11;
  LOBYTE(v1317) = 0;
  *(_QWORD *)&v1318 = 0;
  v1316 = (unsigned __int64)v113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1317) = 3;
  v114 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v114, "Hex address", v115, v116, v117, v118, v380, v461, v542);
  v1318 = (unsigned __int64)v114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1252,
    (__int64)v1241,
    2,
    v119,
    v120,
    v121,
    v381,
    v462,
    v543,
    v611,
    v664,
    v717,
    v770,
    v823,
    v876,
    v929,
    v982,
    v1035,
    v1088,
    v1141,
    v1194);
  v1324 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    v382,
    2,
    v122,
    v123,
    v124,
    v382,
    v463,
    v544,
    v612,
    v665,
    v718,
    v771,
    v824,
    v877,
    v930,
    v983,
    v1036,
    v1089,
    v1142,
    v1195);
  v1329 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v613,
    v931,
    2,
    v125,
    v126,
    v127,
    v383,
    v464,
    v545,
    (int)v613,
    v666,
    v719,
    v772,
    v825,
    v878,
    v931,
    v984,
    v1037,
    v1090,
    v1143,
    v1196);
  v1303 = 0;
  v1272 = &v1332;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1332,
    v614,
    1,
    v128,
    v129,
    v130,
    v384,
    v465,
    v546,
    v614,
    v667,
    v720,
    v773,
    v826,
    v879,
    v932,
    v985,
    v1038,
    v1091,
    v1144,
    v1197);
  v1333 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1254,
    v986,
    2,
    v131,
    v132,
    v133,
    v385,
    v466,
    v547,
    v615,
    v668,
    v721,
    v774,
    v827,
    v880,
    v933,
    v986,
    v1039,
    v1092,
    v1145,
    v1198);
  v1344 = 0;
  LOBYTE(v1334) = 0;
  *(_QWORD *)&v1335 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1334) = 3;
  v134 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v134, "required", v135, v136, v137, v138, v386, v467, v548);
  v1335 = (unsigned __int64)v134;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v549);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v139 = _mm_load_si128(&v1273);
  v1337 = 0;
  v1336 = v139;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1255,
    (__int64)&v1334,
    2,
    v140,
    v141,
    v142,
    v387,
    v468,
    (int)v549,
    v616,
    v669,
    v722,
    v775,
    v828,
    v881,
    v934,
    v987,
    v1040,
    v1093,
    v1146,
    v1199);
  v1346 = 0;
  LOBYTE(v1274) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1250,
    (__int64)&v1341,
    3,
    v143,
    v144,
    v145,
    v388,
    v469,
    v550,
    v617,
    v670,
    v723,
    v776,
    v829,
    v882,
    v935,
    v988,
    v1041,
    v1094,
    v1147,
    v1200);
  v146 = v1354;
  v147 = (void **)&v1347;
  v1354 = v1274;
  v148 = v1355;
  LOBYTE(v1274) = v146;
  v1355 = v1275;
  v1275 = v148;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v147 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v147 != &v1341 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v149 = _mm_load_si128((const __m128i *)&v1238);
  v1342 = 0;
  v1341 = ida_mcp::tools::xrefs::get_data_xrefs_to;
  v1343 = v149;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1343.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1343.m128i_i64[0])(&v1341, &v1341, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1348);
  v1349 = 0;
  v1350[0] = 0;
  v1348 = v1256;
  v1352 = 0;
  v1351 = v1258;
  v1353[0] = 0;
  v1354 = 0;
  v1355 = 0;
  v1356 = 0;
  v1357 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1042);
  *((_QWORD *)&v1307 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1309 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1341,
    (__int64)v1042,
    2,
    v150,
    v151,
    v152,
    v389,
    v470,
    v551,
    v618,
    v671,
    v724,
    v777,
    v830,
    v883,
    v936,
    v989,
    (char)v1042,
    v1095,
    v1148,
    v1201);
  v1343.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  *((_QWORD *)&v1331 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v937);
  *((_QWORD *)&v1326 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v1310);
  *((_QWORD *)&v1311 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  v1314 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v390,
    (__int64)&v1310,
    2,
    v153,
    v154,
    v155,
    (int)v390,
    v471,
    v552,
    v619,
    v672,
    v725,
    v778,
    v831,
    v884,
    (int)v937,
    v990,
    v1043,
    v1096,
    v1149,
    v1202);
  v1321 = 0;
  v1315 = 0;
  *(_QWORD *)&v1316 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1315 = 3;
  v156 = operator new(0x20u);
  *(_QWORD *)v156 = v156 + 16;
  strcpy((char *)(v156 + 16), "description");
  *(_QWORD *)(v156 + 8) = 11;
  LOBYTE(v1317) = 0;
  *(_QWORD *)&v1318 = 0;
  v1316 = (unsigned __int64)v156;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1317) = 3;
  v157 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v157, "Hex address", v158, v159, v160, v161, v391, v472, v553);
  v1318 = (unsigned __int64)v157;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1252,
    (__int64)v1241,
    2,
    v162,
    v163,
    v164,
    v392,
    v473,
    v554,
    v620,
    v673,
    v726,
    v779,
    v832,
    v885,
    v938,
    v991,
    v1044,
    v1097,
    v1150,
    v1203);
  v1324 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    v393,
    2,
    v165,
    v166,
    v167,
    v393,
    v474,
    v555,
    v621,
    v674,
    v727,
    v780,
    v833,
    v886,
    v939,
    v992,
    v1045,
    v1098,
    v1151,
    v1204);
  v1329 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v622,
    v940,
    2,
    v168,
    v169,
    v170,
    v394,
    v475,
    v556,
    (int)v622,
    v675,
    v728,
    v781,
    v834,
    v887,
    v940,
    v993,
    v1046,
    v1099,
    v1152,
    v1205);
  v1303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1272,
    v623,
    1,
    v171,
    v172,
    v173,
    v395,
    v476,
    v557,
    v623,
    v676,
    v729,
    v782,
    v835,
    v888,
    v941,
    v994,
    v1047,
    v1100,
    v1153,
    v1206);
  v1333 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1254,
    v995,
    2,
    v174,
    v175,
    v176,
    v396,
    v477,
    v558,
    v624,
    v677,
    v730,
    v783,
    v836,
    v889,
    v942,
    v995,
    v1048,
    v1101,
    v1154,
    v1207);
  v1344 = 0;
  LOBYTE(v1334) = 0;
  *(_QWORD *)&v1335 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1334) = 3;
  v177 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v177, "required", v178, v179, v180, v181, v397, v478, v559);
  v1335 = (unsigned __int64)v177;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v560);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v182 = _mm_load_si128(&v1273);
  v1337 = 0;
  v1336 = v182;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1255,
    (__int64)&v1334,
    2,
    v183,
    v184,
    v185,
    v398,
    v479,
    (int)v560,
    v625,
    v678,
    v731,
    v784,
    v837,
    v890,
    v943,
    v996,
    v1049,
    v1102,
    v1155,
    v1208);
  v1346 = 0;
  LOBYTE(v1274) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1250,
    (__int64)&v1341,
    3,
    v186,
    v187,
    v188,
    v399,
    v480,
    v561,
    v626,
    v679,
    v732,
    v785,
    v838,
    v891,
    v944,
    v997,
    v1050,
    v1103,
    v1156,
    v1209);
  v189 = v1354;
  v190 = (void **)&v1347;
  v1354 = v1274;
  v191 = v1355;
  LOBYTE(v1274) = v189;
  v1355 = v1275;
  v1275 = v191;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v190 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v190 != &v1341 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v192 = _mm_load_si128((const __m128i *)&v1238);
  v1342 = 0;
  v1341 = ida_mcp::tools::xrefs::get_data_xrefs_from;
  v1343 = v192;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1343.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1343.m128i_i64[0])(&v1341, &v1341, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1348);
  v1349 = 0;
  v1350[0] = 0;
  v1348 = v1256;
  v1352 = 0;
  v1351 = v1258;
  v1353[0] = 0;
  v1354 = 0;
  v1355 = 0;
  v1356 = 0;
  v1357 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1157);
  v1280 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
  *((_QWORD *)&v1282 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1341,
    (__int64)v1157,
    2,
    v193,
    v194,
    v195,
    v400,
    v481,
    v562,
    v627,
    v680,
    v733,
    v786,
    v839,
    v892,
    v945,
    v998,
    v1051,
    v1104,
    (int)v1157,
    v1210);
  v1343.m128i_i64[0] = 0;
  v1325 = 0;
  *(_QWORD *)&v1326 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1325 = 3;
  v196 = operator new(0x20u);
  *(_QWORD *)v196 = v196 + 16;
  strcpy((char *)(v196 + 16), "properties");
  *(_QWORD *)(v196 + 8) = 10;
  v1326 = (unsigned __int64)v196;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v563);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1211);
  v1284 = 0;
  v1285 = 0;
  *(_QWORD *)&v1286 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1285 = 3;
  v197 = operator new(0x20u);
  *(_QWORD *)v197 = v197 + 16;
  strcpy((char *)(v197 + 16), "string");
  *(_QWORD *)(v197 + 8) = 6;
  v1286 = (unsigned __int64)v197;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1105,
    (__int64)v1211,
    2,
    v198,
    v199,
    v200,
    v401,
    v482,
    (int)v563,
    v628,
    v681,
    v734,
    v787,
    v840,
    v893,
    v946,
    v999,
    v1052,
    (__int64)v1105,
    v1158,
    (__int64)v1211);
  v1292 = 0;
  v1287 = 0;
  *(_QWORD *)&v1288 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1287 = 3;
  v201 = operator new(0x20u);
  *(_QWORD *)v201 = v201 + 16;
  strcpy((char *)(v201 + 16), "description");
  *(_QWORD *)(v201 + 8) = 11;
  v1289 = 0;
  *(_QWORD *)&v1290 = 0;
  v1288 = (unsigned __int64)v201;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1289 = 3;
  v202 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v202, "Hex address", v203, v204, v205, v206, v402, v483, v564);
  v1290 = (unsigned __int64)v202;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1266,
    (__int64)v1259,
    2,
    v207,
    v208,
    v209,
    v403,
    v484,
    v565,
    v629,
    v682,
    v735,
    v788,
    v841,
    v894,
    v947,
    v1000,
    v1053,
    v1106,
    v1159,
    v1212);
  v1295 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1267,
    v1107,
    2,
    v210,
    v211,
    v212,
    v404,
    v485,
    v566,
    v630,
    v683,
    v736,
    v789,
    v842,
    v895,
    v948,
    v1001,
    v1054,
    v1107,
    v1160,
    v1213);
  v1301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v405,
    v567,
    2,
    v213,
    v214,
    v215,
    (int)v405,
    v486,
    v567,
    v631,
    v684,
    v737,
    v790,
    v843,
    v896,
    v949,
    v1002,
    v1055,
    v1108,
    v1161,
    v1214);
  v1321 = 0;
  v1315 = 0;
  *(_QWORD *)&v1316 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1315 = 3;
  v216 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v216, "include_flow", v217, v218, v219, v220, v406, v487, v568);
  v1316 = (unsigned __int64)v216;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v632);
  v1303 = 0;
  v1304 = 0;
  *(_QWORD *)&v1305 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1304 = 3;
  v221 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v221, "boolean", v222, v223, v224, v225, v407, v488, v569);
  v1305 = (unsigned __int64)v221;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1334,
    (__int64)v632,
    2,
    v226,
    v227,
    v228,
    v408,
    v489,
    v570,
    (int)v632,
    v685,
    v738,
    v791,
    v844,
    v897,
    v950,
    v1003,
    v1056,
    v1109,
    v1162,
    v1215);
  *((_QWORD *)&v1335 + 1) = 0;
  v1306 = 0;
  *(_QWORD *)&v1307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1306 = 3;
  v229 = operator new(0x20u);
  *(_QWORD *)v229 = v229 + 16;
  strcpy((char *)(v229 + 16), "description");
  *(_QWORD *)(v229 + 8) = 11;
  v1308 = 0;
  *(_QWORD *)&v1309 = 0;
  v1307 = (unsigned __int64)v229;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1308 = 3;
  v230 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v230, "Include flow xrefs", v231, v232, v233, v234, v409, v490, v571);
  v1309 = (unsigned __int64)v230;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1269,
    v1057,
    2,
    v235,
    v236,
    v237,
    v410,
    v491,
    v572,
    v633,
    v686,
    v739,
    v792,
    v845,
    v898,
    v951,
    v1004,
    v1057,
    v1110,
    v1163,
    v1216);
  v1337 = 0;
  LOBYTE(v1310) = 0;
  *(_QWORD *)&v1311 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1310) = 3;
  v238 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v238, "default", v239, v240, v241, v242, v411, v492, v573);
  v1312 = 4;
  v1313 = 0;
  v1314 = 0;
  v1311 = (unsigned __int64)v238;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1270,
    (__int64)&v1310,
    2,
    v243,
    v244,
    v245,
    v412,
    v493,
    v574,
    v634,
    v687,
    v740,
    v793,
    v846,
    v899,
    v952,
    v1005,
    v1058,
    v1111,
    v1164,
    v1217);
  v1339 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1268,
    (__int64)&v1334,
    3,
    v246,
    v247,
    v248,
    v413,
    v494,
    v575,
    v635,
    v688,
    v741,
    v794,
    v847,
    v900,
    v953,
    v1006,
    v1059,
    v1112,
    v1165,
    v1218);
  *((_QWORD *)&v1318 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1252,
    (__int64)v1241,
    2,
    v249,
    v250,
    v251,
    v414,
    v495,
    v576,
    v636,
    v689,
    v742,
    v795,
    v848,
    v901,
    v954,
    v1007,
    v1060,
    v1113,
    v1166,
    v1219);
  v1324 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    v415,
    2,
    v252,
    v253,
    v254,
    v415,
    v496,
    v577,
    v637,
    v690,
    v743,
    v796,
    v849,
    v902,
    v955,
    v1008,
    v1061,
    v1114,
    v1167,
    v1220);
  v1329 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1254,
    v956,
    2,
    v255,
    v256,
    v257,
    v416,
    v497,
    v578,
    v638,
    v691,
    v744,
    v797,
    v850,
    v903,
    v956,
    v1009,
    v1062,
    v1115,
    v1168,
    v1221);
  v1344 = 0;
  v1330 = 0;
  *(_QWORD *)&v1331 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1330 = 3;
  v258 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v258, "required", v259, v260, v261, v262, v417, v498, v579);
  v1331 = (unsigned __int64)v258;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1276);
  v1278 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v263 = _mm_load_si128(&v1273);
  v1333 = 0;
  v1332 = v263;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1255,
    v1010,
    2,
    v264,
    v265,
    v266,
    v418,
    v499,
    v580,
    v639,
    v692,
    v745,
    v798,
    v851,
    v904,
    v957,
    v1010,
    v1063,
    v1116,
    v1169,
    v1222);
  v1346 = 0;
  LOBYTE(v1274) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1250,
    (__int64)&v1341,
    3,
    v267,
    v268,
    v269,
    v419,
    v500,
    v581,
    v640,
    v693,
    v746,
    v799,
    v852,
    v905,
    v958,
    v1011,
    v1064,
    v1117,
    v1170,
    v1223);
  v270 = v1354;
  v271 = (void **)&v1347;
  v1354 = v1274;
  v272 = v1355;
  LOBYTE(v1274) = v270;
  v1355 = v1275;
  v1275 = v272;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v271 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v271 != &v1341 );
  v273 = (__int64 *)&v1340;
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
    v273 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v273 != &v1334 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v274 = _mm_load_si128((const __m128i *)&v1238);
  v1342 = 0;
  v1341 = ida_mcp::tools::xrefs::get_code_xrefs_to;
  v1343 = v274;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1343.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1343.m128i_i64[0])(&v1341, &v1341, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1348);
  v1349 = 0;
  v1350[0] = 0;
  v1348 = v1256;
  v1352 = 0;
  v1351 = v1258;
  v1353[0] = 0;
  v1354 = 0;
  v1355 = 0;
  v1356 = 0;
  v1357 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1171);
  v1280 = 0;
  v1281 = 0;
  *(_QWORD *)&v1282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1281 = 3;
  v275 = operator new(0x20u);
  *(_QWORD *)v275 = v275 + 16;
  strcpy((char *)(v275 + 16), "object");
  *(_QWORD *)(v275 + 8) = 6;
  v1282 = (unsigned __int64)v275;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1341,
    (__int64)v1171,
    2,
    v276,
    v277,
    v278,
    v420,
    v501,
    v582,
    v641,
    v694,
    v747,
    v800,
    v853,
    v906,
    v959,
    v1012,
    v1065,
    v1118,
    (int)v1171,
    v1224);
  v1343.m128i_i64[0] = 0;
  v1325 = 0;
  *(_QWORD *)&v1326 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1325 = 3;
  v279 = operator new(0x20u);
  strcpy((char *)(v279 + 16), "properties");
  *(_QWORD *)v279 = v279 + 16;
  *(_QWORD *)(v279 + 8) = 10;
  v1326 = (unsigned __int64)v279;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v583);
  v1298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1225);
  v1284 = 0;
  v1285 = 0;
  *(_QWORD *)&v1286 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1285 = 3;
  v280 = operator new(0x20u);
  *(_QWORD *)v280 = v280 + 16;
  strcpy((char *)(v280 + 16), "string");
  *(_QWORD *)(v280 + 8) = 6;
  v1286 = (unsigned __int64)v280;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1119,
    (__int64)v1225,
    2,
    v281,
    v282,
    v283,
    v421,
    v502,
    (int)v583,
    v642,
    v695,
    v748,
    v801,
    v854,
    v907,
    v960,
    v1013,
    v1066,
    (__int64)v1119,
    v1172,
    (__int64)v1225);
  v1292 = 0;
  v1287 = 0;
  *(_QWORD *)&v1288 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1287 = 3;
  v284 = operator new(0x20u);
  *(_QWORD *)v284 = v284 + 16;
  strcpy((char *)(v284 + 16), "description");
  *(_QWORD *)(v284 + 8) = 11;
  v1289 = 0;
  *(_QWORD *)&v1290 = 0;
  v1288 = (unsigned __int64)v284;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1289 = 3;
  v285 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v285, "Hex address", v286, v287, v288, v289, v422, v503, v584);
  v1290 = (unsigned __int64)v285;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1266,
    (__int64)v1259,
    2,
    v290,
    v291,
    v292,
    v423,
    v504,
    v585,
    v643,
    v696,
    v749,
    v802,
    v855,
    v908,
    v961,
    v1014,
    v1067,
    v1120,
    v1173,
    v1226);
  v1295 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1267,
    v1121,
    2,
    v293,
    v294,
    v295,
    v424,
    v505,
    v586,
    v644,
    v697,
    v750,
    v803,
    v856,
    v909,
    v962,
    v1015,
    v1068,
    v1121,
    v1174,
    v1227);
  v1301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v425,
    v587,
    2,
    v296,
    v297,
    v298,
    (int)v425,
    v506,
    v587,
    v645,
    v698,
    v751,
    v804,
    v857,
    v910,
    v963,
    v1016,
    v1069,
    v1122,
    v1175,
    v1228);
  v1321 = 0;
  v1315 = 0;
  *(_QWORD *)&v1316 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1315 = 3;
  v299 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v299, "include_flow", v300, v301, v302, v303, v426, v507, v588);
  v1316 = (unsigned __int64)v299;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v646);
  v1303 = 0;
  v1304 = 0;
  *(_QWORD *)&v1305 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1304 = 3;
  v304 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v304, "boolean", v305, v306, v307, v308, v427, v508, v589);
  v1305 = (unsigned __int64)v304;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1334,
    (__int64)v646,
    2,
    v309,
    v310,
    v311,
    v428,
    v509,
    v590,
    (int)v646,
    v699,
    v752,
    v805,
    v858,
    v911,
    v964,
    v1017,
    v1070,
    v1123,
    v1176,
    v1229);
  *((_QWORD *)&v1335 + 1) = 0;
  v1306 = 0;
  *(_QWORD *)&v1307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1306 = 3;
  v312 = operator new(0x20u);
  *(_QWORD *)v312 = v312 + 16;
  strcpy((char *)(v312 + 16), "description");
  *(_QWORD *)(v312 + 8) = 11;
  v1308 = 0;
  *(_QWORD *)&v1309 = 0;
  v1307 = (unsigned __int64)v312;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1308 = 3;
  v313 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v313, "Include flow xrefs", v314, v315, v316, v317, v429, v510, v591);
  v1309 = (unsigned __int64)v313;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1269,
    v1071,
    2,
    v318,
    v319,
    v320,
    v430,
    v511,
    v592,
    v647,
    v700,
    v753,
    v806,
    v859,
    v912,
    v965,
    v1018,
    v1071,
    v1124,
    v1177,
    v1230);
  v1337 = 0;
  LOBYTE(v1310) = 0;
  *(_QWORD *)&v1311 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1310) = 3;
  v321 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v321, "default", v322, v323, v324, v325, v431, v512, v593);
  v1312 = 4;
  v1313 = 0;
  v1314 = 0;
  v1311 = (unsigned __int64)v321;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1270,
    (__int64)&v1310,
    2,
    v326,
    v327,
    v328,
    v432,
    v513,
    v594,
    v648,
    v701,
    v754,
    v807,
    v860,
    v913,
    v966,
    v1019,
    v1072,
    v1125,
    v1178,
    v1231);
  v1339 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1268,
    (__int64)&v1334,
    3,
    v329,
    v330,
    v331,
    v433,
    v514,
    v595,
    v649,
    v702,
    v755,
    v808,
    v861,
    v914,
    v967,
    v1020,
    v1073,
    v1126,
    v1179,
    v1232);
  *((_QWORD *)&v1318 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1252,
    (__int64)v1241,
    2,
    v332,
    v333,
    v334,
    v434,
    v515,
    v596,
    v650,
    v703,
    v756,
    v809,
    v862,
    v915,
    v968,
    v1021,
    v1074,
    v1127,
    v1180,
    v1233);
  v1324 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1253,
    v435,
    2,
    v335,
    v336,
    v337,
    v435,
    v516,
    v597,
    v651,
    v704,
    v757,
    v810,
    v863,
    v916,
    v969,
    v1022,
    v1075,
    v1128,
    v1181,
    v1234);
  v1329 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1254,
    v970,
    2,
    v338,
    v339,
    v340,
    v436,
    v517,
    v598,
    v652,
    v705,
    v758,
    v811,
    v864,
    v917,
    v970,
    v1023,
    v1076,
    v1129,
    v1182,
    v1235);
  v1344 = 0;
  v1330 = 0;
  *(_QWORD *)&v1331 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1330 = 3;
  v341 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v341, "required", v342, v343, v344, v345, v437, v518, v599);
  v1331 = (unsigned __int64)v341;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v1276);
  v1278 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v346 = _mm_load_si128(&v1273);
  v1333 = 0;
  v1332 = v346;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1255,
    v1024,
    2,
    v347,
    v348,
    v349,
    v438,
    v519,
    v600,
    v653,
    v706,
    v759,
    v812,
    v865,
    v918,
    v971,
    v1024,
    v1077,
    v1130,
    v1183,
    v1236);
  v1346 = 0;
  LOBYTE(v1274) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1250,
    (__int64)&v1341,
    3,
    v350,
    v351,
    v352,
    v439,
    v520,
    v601,
    v654,
    v707,
    v760,
    v813,
    v866,
    v919,
    v972,
    v1025,
    v1078,
    v1131,
    v1184,
    v1237);
  v353 = v1354;
  v354 = (void **)&v1347;
  v1354 = v1274;
  v355 = v1355;
  LOBYTE(v1274) = v353;
  v1355 = v1275;
  v1275 = v355;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v354 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v354 != &v1341 );
  v356 = (__int64 *)&v1340;
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
    v356 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v356 != &v1334 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v357 = _mm_load_si128((const __m128i *)&v1238);
  v1342 = 0;
  v1341 = ida_mcp::tools::xrefs::get_code_xrefs_from;
  v1343 = v357;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1343.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v1343.m128i_i64[0])(&v1341, &v1341, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1348);
  return v1358 - __readfsqword(0x28u);
}

