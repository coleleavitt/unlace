unsigned __int64 __fastcall ida_mcp::tools::xref_manipulation::register_tools(
        ida_mcp::tools::xref_manipulation *this,
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
  __int64 *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
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
  __int64 *v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 *v45; // rbp
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __m128i v50; // xmm0
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _QWORD *v54; // r13
  __int64 *v55; // r13
  __int64 *v56; // rbp
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 *v61; // rbp
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 *v66; // rbp
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 *v71; // rbp
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 *v76; // rbp
  __int64 v77; // rdx
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
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 *v96; // rbp
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __m128i v101; // xmm0
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  _QWORD *v108; // r14
  __int64 *v109; // rbp
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 *v117; // rbp
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 *v125; // rbp
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 *v139; // rbp
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 *v147; // rbp
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 *v161; // rbp
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 *v169; // rbp
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 *v189; // rbp
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // r9
  __m128i v194; // xmm0
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r9
  _QWORD *v201; // r13
  __int64 *v202; // r13
  __int64 *v203; // rbp
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 *v211; // rbp
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 *v219; // rbp
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
  __int64 *v233; // rbp
  __int64 v234; // rdx
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
  __int64 *v246; // rbp
  __int64 v247; // rdx
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
  __int64 v263; // rcx
  __int64 v264; // r8
  __int64 v265; // r9
  __int64 *v266; // rbp
  __int64 v267; // rdx
  __int64 v268; // rcx
  __int64 v269; // r8
  __int64 v270; // r9
  __m128i v271; // xmm0
  __int64 v272; // rcx
  __int64 v273; // r8
  __int64 v274; // r9
  __int64 v275; // rcx
  __int64 v276; // r8
  __int64 v277; // r9
  _QWORD *v278; // r13
  __int64 *v279; // rbp
  __int64 v280; // rdx
  __int64 v281; // rcx
  __int64 v282; // r8
  __int64 v283; // r9
  __int64 v284; // rcx
  __int64 v285; // r8
  __int64 v286; // r9
  __int64 *v287; // rbp
  __int64 v288; // rdx
  __int64 v289; // rcx
  __int64 v290; // r8
  __int64 v291; // r9
  __int64 *v292; // rbp
  __int64 v293; // rdx
  __int64 v294; // rcx
  __int64 v295; // r8
  __int64 v296; // r9
  __int64 v297; // rcx
  __int64 v298; // r8
  __int64 v299; // r9
  __int64 *v300; // rbp
  __int64 v301; // rdx
  __int64 v302; // rcx
  __int64 v303; // r8
  __int64 v304; // r9
  __int64 v305; // rcx
  __int64 v306; // r8
  __int64 v307; // r9
  __int64 v308; // rcx
  __int64 v309; // r8
  __int64 v310; // r9
  __int64 v311; // rcx
  __int64 v312; // r8
  __int64 v313; // r9
  __int64 *v314; // rbp
  __int64 v315; // rdx
  __int64 v316; // rcx
  __int64 v317; // r8
  __int64 v318; // r9
  __int64 v319; // rcx
  __int64 v320; // r8
  __int64 v321; // r9
  __int64 *v322; // rbp
  __int64 v323; // rdx
  __int64 v324; // rcx
  __int64 v325; // r8
  __int64 v326; // r9
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
  __int64 *v339; // rbp
  __int64 v340; // rdx
  __int64 v341; // rcx
  __int64 v342; // r8
  __int64 v343; // r9
  __int64 v344; // rcx
  __int64 v345; // r8
  __int64 v346; // r9
  __int64 v347; // rcx
  __int64 v348; // r8
  __int64 v349; // r9
  __int64 v350; // rcx
  __int64 v351; // r8
  __int64 v352; // r9
  __int64 *v353; // rbp
  __int64 v354; // rdx
  __int64 v355; // rcx
  __int64 v356; // r8
  __int64 v357; // r9
  __int64 v358; // rcx
  __int64 v359; // r8
  __int64 v360; // r9
  __int64 *v361; // rbp
  __int64 v362; // rdx
  __int64 v363; // rcx
  __int64 v364; // r8
  __int64 v365; // r9
  __int64 v366; // rcx
  __int64 v367; // r8
  __int64 v368; // r9
  __int64 v369; // rcx
  __int64 v370; // r8
  __int64 v371; // r9
  __int64 v372; // rcx
  __int64 v373; // r8
  __int64 v374; // r9
  __int64 *v375; // rbp
  __int64 v376; // rdx
  __int64 v377; // rcx
  __int64 v378; // r8
  __int64 v379; // r9
  __int64 v380; // rcx
  __int64 v381; // r8
  __int64 v382; // r9
  __int64 *v383; // rbp
  __int64 v384; // rdx
  __int64 v385; // rcx
  __int64 v386; // r8
  __int64 v387; // r9
  __int64 v388; // rcx
  __int64 v389; // r8
  __int64 v390; // r9
  __int64 v391; // rcx
  __int64 v392; // r8
  __int64 v393; // r9
  __int64 v394; // rcx
  __int64 v395; // r8
  __int64 v396; // r9
  __int64 *v397; // rbp
  __int64 v398; // rdx
  __int64 v399; // rcx
  __int64 v400; // r8
  __int64 v401; // r9
  __int64 *v402; // rbp
  __int64 v403; // rdx
  __int64 v404; // rcx
  __int64 v405; // r8
  __int64 v406; // r9
  __int64 v407; // rcx
  __int64 v408; // r8
  __int64 v409; // r9
  __int64 *v410; // rbp
  __int64 v411; // rdx
  __int64 v412; // rcx
  __int64 v413; // r8
  __int64 v414; // r9
  __int64 v415; // rcx
  __int64 v416; // r8
  __int64 v417; // r9
  __int64 v418; // rcx
  __int64 v419; // r8
  __int64 v420; // r9
  __int64 *v421; // rbp
  __int64 v422; // rcx
  __int64 v423; // r8
  __int64 v424; // r9
  __int64 v425; // rcx
  __int64 v426; // r8
  __int64 v427; // r9
  __int64 v428; // rcx
  __int64 v429; // r8
  __int64 v430; // r9
  __int64 *v431; // r13
  __int64 v432; // rdx
  __int64 v433; // rcx
  __int64 v434; // r8
  __int64 v435; // r9
  __int64 *v436; // r13
  __int64 v437; // rdx
  __int64 v438; // rcx
  __int64 v439; // r8
  __int64 v440; // r9
  __int64 *v441; // r13
  __int64 v442; // rdx
  __int64 v443; // rcx
  __int64 v444; // r8
  __int64 v445; // r9
  __m128i v446; // xmm0
  __int64 v447; // rcx
  __int64 v448; // r8
  __int64 v449; // r9
  __int64 v450; // rcx
  __int64 v451; // r8
  __int64 v452; // r9
  __int64 *v453; // r13
  __int64 *v454; // rbp
  __int64 v455; // rdx
  __int64 v456; // rcx
  __int64 v457; // r8
  __int64 v458; // r9
  __int64 v459; // rcx
  __int64 v460; // r8
  __int64 v461; // r9
  __int64 *v462; // rbp
  __int64 v463; // rdx
  __int64 v464; // rcx
  __int64 v465; // r8
  __int64 v466; // r9
  __int64 v467; // rcx
  __int64 v468; // r8
  __int64 v469; // r9
  __int64 *v470; // rbp
  __int64 v471; // rdx
  __int64 v472; // rcx
  __int64 v473; // r8
  __int64 v474; // r9
  __int64 v475; // rcx
  __int64 v476; // r8
  __int64 v477; // r9
  __int64 v478; // rcx
  __int64 v479; // r8
  __int64 v480; // r9
  __int64 v481; // rcx
  __int64 v482; // r8
  __int64 v483; // r9
  __int64 v484; // rcx
  __int64 v485; // r8
  __int64 v486; // r9
  __int64 *v487; // rbp
  __int64 v488; // rdx
  __int64 v489; // rcx
  __int64 v490; // r8
  __int64 v491; // r9
  __int64 v492; // rcx
  __int64 v493; // r8
  __int64 v494; // r9
  __int64 v495; // rcx
  __int64 v496; // r8
  __int64 v497; // r9
  __int64 v498; // rcx
  __int64 v499; // r8
  __int64 v500; // r9
  __int64 *v501; // rbp
  __int64 v502; // rdx
  __int64 v503; // rcx
  __int64 v504; // r8
  __int64 v505; // r9
  __int64 v506; // rcx
  __int64 v507; // r8
  __int64 v508; // r9
  __int64 *v509; // rbp
  __int64 v510; // rdx
  __int64 v511; // rcx
  __int64 v512; // r8
  __int64 v513; // r9
  __int64 v514; // rcx
  __int64 v515; // r8
  __int64 v516; // r9
  __int64 v517; // rcx
  __int64 v518; // r8
  __int64 v519; // r9
  __int64 v520; // rcx
  __int64 v521; // r8
  __int64 v522; // r9
  __int64 *v523; // rbp
  __int64 v524; // rdx
  __int64 v525; // rcx
  __int64 v526; // r8
  __int64 v527; // r9
  __int64 v528; // rcx
  __int64 v529; // r8
  __int64 v530; // r9
  __int64 *v531; // rbp
  __int64 v532; // rdx
  __int64 v533; // rcx
  __int64 v534; // r8
  __int64 v535; // r9
  __int64 v536; // rcx
  __int64 v537; // r8
  __int64 v538; // r9
  __int64 v539; // rcx
  __int64 v540; // r8
  __int64 v541; // r9
  __int64 v542; // rcx
  __int64 v543; // r8
  __int64 v544; // r9
  __int64 v545; // rcx
  __int64 v546; // r8
  __int64 v547; // r9
  __int64 v548; // rcx
  __int64 v549; // r8
  __int64 v550; // r9
  __int64 *v551; // rbp
  __int64 v552; // rdx
  __int64 v553; // rcx
  __int64 v554; // r8
  __int64 v555; // r9
  __m128i v556; // xmm0
  __int64 v557; // rcx
  __int64 v558; // r8
  __int64 v559; // r9
  __int64 v560; // rcx
  __int64 v561; // r8
  __int64 v562; // r9
  __int64 *v563; // r13
  _QWORD *v564; // r13
  __int64 *v565; // rbp
  __int64 v566; // rdx
  __int64 v567; // rcx
  __int64 v568; // r8
  __int64 v569; // r9
  __int64 v570; // rcx
  __int64 v571; // r8
  __int64 v572; // r9
  __int64 *v573; // rbp
  __int64 v574; // rdx
  __int64 v575; // rcx
  __int64 v576; // r8
  __int64 v577; // r9
  __int64 v578; // rcx
  __int64 v579; // r8
  __int64 v580; // r9
  __int64 *v581; // rbp
  __int64 v582; // rdx
  __int64 v583; // rcx
  __int64 v584; // r8
  __int64 v585; // r9
  __int64 v586; // rcx
  __int64 v587; // r8
  __int64 v588; // r9
  __int64 v589; // rcx
  __int64 v590; // r8
  __int64 v591; // r9
  __int64 v592; // rcx
  __int64 v593; // r8
  __int64 v594; // r9
  __int64 *v595; // rbp
  __int64 v596; // rdx
  __int64 v597; // rcx
  __int64 v598; // r8
  __int64 v599; // r9
  __int64 v600; // rcx
  __int64 v601; // r8
  __int64 v602; // r9
  __int64 *v603; // rbp
  __int64 v604; // rdx
  __int64 v605; // rcx
  __int64 v606; // r8
  __int64 v607; // r9
  __int64 v608; // rcx
  __int64 v609; // r8
  __int64 v610; // r9
  __int64 v611; // rcx
  __int64 v612; // r8
  __int64 v613; // r9
  __int64 v614; // rcx
  __int64 v615; // r8
  __int64 v616; // r9
  __int64 v617; // rcx
  __int64 v618; // r8
  __int64 v619; // r9
  __int64 v620; // rcx
  __int64 v621; // r8
  __int64 v622; // r9
  __int64 *v623; // rbp
  __int64 v624; // rdx
  __int64 v625; // rcx
  __int64 v626; // r8
  __int64 v627; // r9
  __m128i v628; // xmm0
  __int64 v629; // rcx
  __int64 v630; // r8
  __int64 v631; // r9
  __int64 v632; // rcx
  __int64 v633; // r8
  __int64 v634; // r9
  _QWORD *v635; // r12
  int v637; // [rsp+0h] [rbp-998h]
  int v638; // [rsp+0h] [rbp-998h]
  int v639; // [rsp+0h] [rbp-998h]
  int v640; // [rsp+0h] [rbp-998h]
  int v641; // [rsp+0h] [rbp-998h]
  int v642; // [rsp+0h] [rbp-998h]
  int v643; // [rsp+0h] [rbp-998h]
  int v644; // [rsp+0h] [rbp-998h]
  int v645; // [rsp+0h] [rbp-998h]
  int v646; // [rsp+0h] [rbp-998h]
  int v647; // [rsp+0h] [rbp-998h]
  int v648; // [rsp+0h] [rbp-998h]
  int v649; // [rsp+0h] [rbp-998h]
  int v650; // [rsp+0h] [rbp-998h]
  int v651; // [rsp+0h] [rbp-998h]
  int v652; // [rsp+0h] [rbp-998h]
  int v653; // [rsp+0h] [rbp-998h]
  int v654; // [rsp+0h] [rbp-998h]
  int v655; // [rsp+0h] [rbp-998h]
  int v656; // [rsp+0h] [rbp-998h]
  int v657; // [rsp+0h] [rbp-998h]
  int v658; // [rsp+0h] [rbp-998h]
  int v659; // [rsp+0h] [rbp-998h]
  int v660; // [rsp+0h] [rbp-998h]
  int v661; // [rsp+0h] [rbp-998h]
  int v662; // [rsp+0h] [rbp-998h]
  int v663; // [rsp+0h] [rbp-998h]
  int v664; // [rsp+0h] [rbp-998h]
  int v665; // [rsp+0h] [rbp-998h]
  int v666; // [rsp+0h] [rbp-998h]
  int v667; // [rsp+0h] [rbp-998h]
  int v668; // [rsp+0h] [rbp-998h]
  int v669; // [rsp+0h] [rbp-998h]
  int v670; // [rsp+0h] [rbp-998h]
  int v671; // [rsp+0h] [rbp-998h]
  int v672; // [rsp+0h] [rbp-998h]
  int v673; // [rsp+0h] [rbp-998h]
  int v674; // [rsp+0h] [rbp-998h]
  int v675; // [rsp+0h] [rbp-998h]
  int v676; // [rsp+0h] [rbp-998h]
  int v677; // [rsp+0h] [rbp-998h]
  int v678; // [rsp+0h] [rbp-998h]
  int v679; // [rsp+0h] [rbp-998h]
  int v680; // [rsp+0h] [rbp-998h]
  int v681; // [rsp+0h] [rbp-998h]
  int v682; // [rsp+0h] [rbp-998h]
  int v683; // [rsp+0h] [rbp-998h]
  int v684; // [rsp+0h] [rbp-998h]
  int v685; // [rsp+0h] [rbp-998h]
  int v686; // [rsp+0h] [rbp-998h]
  int v687; // [rsp+0h] [rbp-998h]
  int v688; // [rsp+0h] [rbp-998h]
  int v689; // [rsp+0h] [rbp-998h]
  int v690; // [rsp+0h] [rbp-998h]
  int v691; // [rsp+0h] [rbp-998h]
  int v692; // [rsp+0h] [rbp-998h]
  int v693; // [rsp+0h] [rbp-998h]
  int v694; // [rsp+0h] [rbp-998h]
  int v695; // [rsp+0h] [rbp-998h]
  int v696; // [rsp+0h] [rbp-998h]
  int v697; // [rsp+0h] [rbp-998h]
  int v698; // [rsp+0h] [rbp-998h]
  int v699; // [rsp+0h] [rbp-998h]
  int v700; // [rsp+0h] [rbp-998h]
  int v701; // [rsp+0h] [rbp-998h]
  int v702; // [rsp+0h] [rbp-998h]
  int v703; // [rsp+0h] [rbp-998h]
  int v704; // [rsp+0h] [rbp-998h]
  int v705; // [rsp+0h] [rbp-998h]
  int v706; // [rsp+0h] [rbp-998h]
  int v707; // [rsp+0h] [rbp-998h]
  int v708; // [rsp+0h] [rbp-998h]
  int v709; // [rsp+0h] [rbp-998h]
  int v710; // [rsp+0h] [rbp-998h]
  int v711; // [rsp+0h] [rbp-998h]
  int v712; // [rsp+0h] [rbp-998h]
  int v713; // [rsp+0h] [rbp-998h]
  int v714; // [rsp+0h] [rbp-998h]
  int v715; // [rsp+0h] [rbp-998h]
  int v716; // [rsp+0h] [rbp-998h]
  int v717; // [rsp+0h] [rbp-998h]
  int v718; // [rsp+0h] [rbp-998h]
  int v719; // [rsp+0h] [rbp-998h]
  int v720; // [rsp+0h] [rbp-998h]
  int v721; // [rsp+0h] [rbp-998h]
  int v722; // [rsp+0h] [rbp-998h]
  int v723; // [rsp+0h] [rbp-998h]
  int v724; // [rsp+0h] [rbp-998h]
  int v725; // [rsp+0h] [rbp-998h]
  int v726; // [rsp+0h] [rbp-998h]
  int v727; // [rsp+0h] [rbp-998h]
  int v728; // [rsp+0h] [rbp-998h]
  int v729; // [rsp+0h] [rbp-998h]
  int v730; // [rsp+0h] [rbp-998h]
  int v731; // [rsp+0h] [rbp-998h]
  int v732; // [rsp+0h] [rbp-998h]
  int v733; // [rsp+0h] [rbp-998h]
  int v734; // [rsp+0h] [rbp-998h]
  int v735; // [rsp+0h] [rbp-998h]
  int v736; // [rsp+0h] [rbp-998h]
  int v737; // [rsp+0h] [rbp-998h]
  int v738; // [rsp+0h] [rbp-998h]
  int v739; // [rsp+0h] [rbp-998h]
  int v740; // [rsp+0h] [rbp-998h]
  int v741; // [rsp+0h] [rbp-998h]
  int v742; // [rsp+0h] [rbp-998h]
  int v743; // [rsp+0h] [rbp-998h]
  int v744; // [rsp+0h] [rbp-998h]
  int v745; // [rsp+0h] [rbp-998h]
  int v746; // [rsp+0h] [rbp-998h]
  int v747; // [rsp+0h] [rbp-998h]
  int v748; // [rsp+0h] [rbp-998h]
  int v749; // [rsp+0h] [rbp-998h]
  int v750; // [rsp+0h] [rbp-998h]
  int v751; // [rsp+0h] [rbp-998h]
  int v752; // [rsp+0h] [rbp-998h]
  int v753; // [rsp+0h] [rbp-998h]
  int v754; // [rsp+0h] [rbp-998h]
  int v755; // [rsp+0h] [rbp-998h]
  int v756; // [rsp+0h] [rbp-998h]
  int v757; // [rsp+0h] [rbp-998h]
  int v758; // [rsp+0h] [rbp-998h]
  int v759; // [rsp+0h] [rbp-998h]
  int v760; // [rsp+0h] [rbp-998h]
  int v761; // [rsp+0h] [rbp-998h]
  int v762; // [rsp+0h] [rbp-998h]
  int v763; // [rsp+0h] [rbp-998h]
  int v764; // [rsp+0h] [rbp-998h]
  int v765; // [rsp+0h] [rbp-998h]
  int v766; // [rsp+0h] [rbp-998h]
  int v767; // [rsp+0h] [rbp-998h]
  int v768; // [rsp+0h] [rbp-998h]
  int v769; // [rsp+0h] [rbp-998h]
  int v770; // [rsp+0h] [rbp-998h]
  int v771; // [rsp+0h] [rbp-998h]
  int v772; // [rsp+0h] [rbp-998h]
  int v773; // [rsp+0h] [rbp-998h]
  int v774; // [rsp+0h] [rbp-998h]
  int v775; // [rsp+0h] [rbp-998h]
  int v776; // [rsp+0h] [rbp-998h]
  int v777; // [rsp+0h] [rbp-998h]
  int v778; // [rsp+0h] [rbp-998h]
  int v779; // [rsp+0h] [rbp-998h]
  int v780; // [rsp+0h] [rbp-998h]
  int v781; // [rsp+0h] [rbp-998h]
  int v782; // [rsp+0h] [rbp-998h]
  int v783; // [rsp+0h] [rbp-998h]
  int v784; // [rsp+0h] [rbp-998h]
  int v785; // [rsp+0h] [rbp-998h]
  int v786; // [rsp+0h] [rbp-998h]
  int v787; // [rsp+0h] [rbp-998h]
  int v788; // [rsp+0h] [rbp-998h]
  int v789; // [rsp+0h] [rbp-998h]
  int v790; // [rsp+0h] [rbp-998h]
  int v791; // [rsp+0h] [rbp-998h]
  int v792; // [rsp+0h] [rbp-998h]
  int v793; // [rsp+0h] [rbp-998h]
  int v794; // [rsp+0h] [rbp-998h]
  int v795; // [rsp+0h] [rbp-998h]
  int v796; // [rsp+0h] [rbp-998h]
  int v797; // [rsp+0h] [rbp-998h]
  int v798; // [rsp+0h] [rbp-998h]
  int v799; // [rsp+0h] [rbp-998h]
  int v800; // [rsp+0h] [rbp-998h]
  int v801; // [rsp+8h] [rbp-990h]
  int v802; // [rsp+8h] [rbp-990h]
  int v803; // [rsp+8h] [rbp-990h]
  int v804; // [rsp+8h] [rbp-990h]
  int v805; // [rsp+8h] [rbp-990h]
  int v806; // [rsp+8h] [rbp-990h]
  const __m128i *v807; // [rsp+8h] [rbp-990h]
  int v808; // [rsp+8h] [rbp-990h]
  int v809; // [rsp+8h] [rbp-990h]
  __int64 v810; // [rsp+8h] [rbp-990h]
  int v811; // [rsp+8h] [rbp-990h]
  int v812; // [rsp+8h] [rbp-990h]
  int v813; // [rsp+8h] [rbp-990h]
  int v814; // [rsp+8h] [rbp-990h]
  _QWORD *v815; // [rsp+8h] [rbp-990h]
  __int64 v816; // [rsp+8h] [rbp-990h]
  __int64 v817; // [rsp+8h] [rbp-990h]
  __int64 v818; // [rsp+8h] [rbp-990h]
  __int64 v819; // [rsp+8h] [rbp-990h]
  __int64 v820; // [rsp+8h] [rbp-990h]
  int v821; // [rsp+8h] [rbp-990h]
  __int64 v822; // [rsp+8h] [rbp-990h]
  __int64 v823; // [rsp+8h] [rbp-990h]
  int v824; // [rsp+8h] [rbp-990h]
  __int64 v825; // [rsp+8h] [rbp-990h]
  int v826; // [rsp+8h] [rbp-990h]
  __int64 v827; // [rsp+8h] [rbp-990h]
  int v828; // [rsp+8h] [rbp-990h]
  __int64 v829; // [rsp+8h] [rbp-990h]
  __int64 v830; // [rsp+8h] [rbp-990h]
  __int64 v831; // [rsp+8h] [rbp-990h]
  int v832; // [rsp+8h] [rbp-990h]
  __int64 v833; // [rsp+8h] [rbp-990h]
  int v834; // [rsp+8h] [rbp-990h]
  __int64 v835; // [rsp+8h] [rbp-990h]
  __int64 v836; // [rsp+8h] [rbp-990h]
  __int64 v837; // [rsp+8h] [rbp-990h]
  int v838; // [rsp+8h] [rbp-990h]
  _QWORD *v839; // [rsp+8h] [rbp-990h]
  int v840; // [rsp+8h] [rbp-990h]
  __int64 v841; // [rsp+8h] [rbp-990h]
  __int64 v842; // [rsp+8h] [rbp-990h]
  __int64 v843; // [rsp+8h] [rbp-990h]
  __int64 v844; // [rsp+8h] [rbp-990h]
  __int64 v845; // [rsp+8h] [rbp-990h]
  int v846; // [rsp+8h] [rbp-990h]
  __int64 v847; // [rsp+8h] [rbp-990h]
  __int64 v848; // [rsp+8h] [rbp-990h]
  int v849; // [rsp+8h] [rbp-990h]
  __int64 v850; // [rsp+8h] [rbp-990h]
  int v851; // [rsp+8h] [rbp-990h]
  __int64 v852; // [rsp+8h] [rbp-990h]
  int v853; // [rsp+8h] [rbp-990h]
  __int64 v854; // [rsp+8h] [rbp-990h]
  __int64 v855; // [rsp+8h] [rbp-990h]
  __int64 v856; // [rsp+8h] [rbp-990h]
  int v857; // [rsp+8h] [rbp-990h]
  int v858; // [rsp+8h] [rbp-990h]
  _QWORD *v859; // [rsp+8h] [rbp-990h]
  int v860; // [rsp+8h] [rbp-990h]
  __int64 v861; // [rsp+8h] [rbp-990h]
  __int64 v862; // [rsp+8h] [rbp-990h]
  __int64 v863; // [rsp+8h] [rbp-990h]
  __int64 v864; // [rsp+8h] [rbp-990h]
  __int64 v865; // [rsp+8h] [rbp-990h]
  int v866; // [rsp+8h] [rbp-990h]
  __int64 v867; // [rsp+8h] [rbp-990h]
  __int64 v868; // [rsp+8h] [rbp-990h]
  int v869; // [rsp+8h] [rbp-990h]
  __int64 v870; // [rsp+8h] [rbp-990h]
  int v871; // [rsp+8h] [rbp-990h]
  int v872; // [rsp+8h] [rbp-990h]
  __int64 v873; // [rsp+8h] [rbp-990h]
  int v874; // [rsp+8h] [rbp-990h]
  __int64 v875; // [rsp+8h] [rbp-990h]
  __int64 v876; // [rsp+8h] [rbp-990h]
  __int64 v877; // [rsp+8h] [rbp-990h]
  int v878; // [rsp+8h] [rbp-990h]
  __int64 v879; // [rsp+8h] [rbp-990h]
  int v880; // [rsp+8h] [rbp-990h]
  __int64 v881; // [rsp+8h] [rbp-990h]
  __int64 v882; // [rsp+8h] [rbp-990h]
  __int64 v883; // [rsp+8h] [rbp-990h]
  __int64 v884; // [rsp+8h] [rbp-990h]
  int v885; // [rsp+8h] [rbp-990h]
  __int64 v886; // [rsp+8h] [rbp-990h]
  __int64 v887; // [rsp+8h] [rbp-990h]
  __int64 v888; // [rsp+8h] [rbp-990h]
  int v889; // [rsp+8h] [rbp-990h]
  __int64 v890; // [rsp+8h] [rbp-990h]
  int v891; // [rsp+8h] [rbp-990h]
  __int64 v892; // [rsp+8h] [rbp-990h]
  __int64 v893; // [rsp+8h] [rbp-990h]
  __int64 v894; // [rsp+8h] [rbp-990h]
  int v895; // [rsp+8h] [rbp-990h]
  __int64 v896; // [rsp+8h] [rbp-990h]
  int v897; // [rsp+8h] [rbp-990h]
  __int64 v898; // [rsp+8h] [rbp-990h]
  __int64 v899; // [rsp+8h] [rbp-990h]
  __int64 v900; // [rsp+8h] [rbp-990h]
  int v901; // [rsp+8h] [rbp-990h]
  int v902; // [rsp+8h] [rbp-990h]
  _QWORD *v903; // [rsp+8h] [rbp-990h]
  int v904; // [rsp+8h] [rbp-990h]
  __int64 v905; // [rsp+8h] [rbp-990h]
  __int64 v906; // [rsp+8h] [rbp-990h]
  __int64 v907; // [rsp+8h] [rbp-990h]
  __int64 v908; // [rsp+8h] [rbp-990h]
  __int64 v909; // [rsp+8h] [rbp-990h]
  int v910; // [rsp+8h] [rbp-990h]
  int v911; // [rsp+8h] [rbp-990h]
  int v912; // [rsp+8h] [rbp-990h]
  __int64 v913; // [rsp+8h] [rbp-990h]
  __int64 v914; // [rsp+8h] [rbp-990h]
  int v915; // [rsp+8h] [rbp-990h]
  __int64 v916; // [rsp+8h] [rbp-990h]
  int v917; // [rsp+8h] [rbp-990h]
  __int64 v918; // [rsp+8h] [rbp-990h]
  int v919; // [rsp+8h] [rbp-990h]
  __int64 v920; // [rsp+8h] [rbp-990h]
  __int64 v921; // [rsp+8h] [rbp-990h]
  __int64 v922; // [rsp+8h] [rbp-990h]
  __int64 v923; // [rsp+8h] [rbp-990h]
  int v924; // [rsp+8h] [rbp-990h]
  __int64 v925; // [rsp+8h] [rbp-990h]
  __int64 v926; // [rsp+8h] [rbp-990h]
  __int64 v927; // [rsp+8h] [rbp-990h]
  int v928; // [rsp+8h] [rbp-990h]
  __int64 v929; // [rsp+8h] [rbp-990h]
  int v930; // [rsp+8h] [rbp-990h]
  __int64 v931; // [rsp+8h] [rbp-990h]
  __int64 v932; // [rsp+8h] [rbp-990h]
  __int64 v933; // [rsp+8h] [rbp-990h]
  int v934; // [rsp+8h] [rbp-990h]
  _QWORD *v935; // [rsp+8h] [rbp-990h]
  int v936; // [rsp+8h] [rbp-990h]
  __int64 v937; // [rsp+8h] [rbp-990h]
  __int64 v938; // [rsp+8h] [rbp-990h]
  __int64 v939; // [rsp+8h] [rbp-990h]
  __int64 v940; // [rsp+8h] [rbp-990h]
  __int64 v941; // [rsp+8h] [rbp-990h]
  int v942; // [rsp+8h] [rbp-990h]
  __int64 v943; // [rsp+8h] [rbp-990h]
  __int64 v944; // [rsp+8h] [rbp-990h]
  int v945; // [rsp+8h] [rbp-990h]
  __int64 v946; // [rsp+8h] [rbp-990h]
  int v947; // [rsp+8h] [rbp-990h]
  __int64 v948; // [rsp+8h] [rbp-990h]
  int v949; // [rsp+8h] [rbp-990h]
  __int64 v950; // [rsp+8h] [rbp-990h]
  __int64 v951; // [rsp+8h] [rbp-990h]
  __int64 v952; // [rsp+8h] [rbp-990h]
  int v953; // [rsp+8h] [rbp-990h]
  _QWORD *v954; // [rsp+8h] [rbp-990h]
  int v955; // [rsp+8h] [rbp-990h]
  __int64 v956; // [rsp+8h] [rbp-990h]
  __int64 v957; // [rsp+8h] [rbp-990h]
  __int64 v958; // [rsp+8h] [rbp-990h]
  __int64 v959; // [rsp+8h] [rbp-990h]
  __int64 v960; // [rsp+8h] [rbp-990h]
  int v961; // [rsp+8h] [rbp-990h]
  __int64 v962; // [rsp+8h] [rbp-990h]
  __int64 v963; // [rsp+8h] [rbp-990h]
  __int64 v964; // [rsp+10h] [rbp-988h]
  __int64 v965; // [rsp+10h] [rbp-988h]
  __int64 v966; // [rsp+10h] [rbp-988h]
  __int64 v967; // [rsp+10h] [rbp-988h]
  __int64 v968; // [rsp+10h] [rbp-988h]
  __int64 v969; // [rsp+10h] [rbp-988h]
  int v970; // [rsp+10h] [rbp-988h]
  __int64 v971; // [rsp+10h] [rbp-988h]
  __int64 v972; // [rsp+10h] [rbp-988h]
  int v973; // [rsp+10h] [rbp-988h]
  __int64 v974; // [rsp+10h] [rbp-988h]
  __int64 v975; // [rsp+10h] [rbp-988h]
  __m128i *v976; // [rsp+10h] [rbp-988h]
  __int64 v977; // [rsp+10h] [rbp-988h]
  __int64 v978; // [rsp+10h] [rbp-988h]
  int v979; // [rsp+10h] [rbp-988h]
  int v980; // [rsp+10h] [rbp-988h]
  int v981; // [rsp+10h] [rbp-988h]
  int v982; // [rsp+10h] [rbp-988h]
  int v983; // [rsp+10h] [rbp-988h]
  __int64 v984; // [rsp+10h] [rbp-988h]
  int v985; // [rsp+10h] [rbp-988h]
  int v986; // [rsp+10h] [rbp-988h]
  __int64 v987; // [rsp+10h] [rbp-988h]
  int v988; // [rsp+10h] [rbp-988h]
  __int64 v989; // [rsp+10h] [rbp-988h]
  int v990; // [rsp+10h] [rbp-988h]
  __int64 v991; // [rsp+10h] [rbp-988h]
  int v992; // [rsp+10h] [rbp-988h]
  int v993; // [rsp+10h] [rbp-988h]
  int v994; // [rsp+10h] [rbp-988h]
  __int64 v995; // [rsp+10h] [rbp-988h]
  _QWORD *v996; // [rsp+10h] [rbp-988h]
  __int64 v997; // [rsp+10h] [rbp-988h]
  int v998; // [rsp+10h] [rbp-988h]
  int v999; // [rsp+10h] [rbp-988h]
  int v1000; // [rsp+10h] [rbp-988h]
  __int64 v1001; // [rsp+10h] [rbp-988h]
  int v1002; // [rsp+10h] [rbp-988h]
  __int64 v1003; // [rsp+10h] [rbp-988h]
  int v1004; // [rsp+10h] [rbp-988h]
  int v1005; // [rsp+10h] [rbp-988h]
  int v1006; // [rsp+10h] [rbp-988h]
  int v1007; // [rsp+10h] [rbp-988h]
  int v1008; // [rsp+10h] [rbp-988h]
  __int64 v1009; // [rsp+10h] [rbp-988h]
  int v1010; // [rsp+10h] [rbp-988h]
  int v1011; // [rsp+10h] [rbp-988h]
  __int64 v1012; // [rsp+10h] [rbp-988h]
  int v1013; // [rsp+10h] [rbp-988h]
  __int64 v1014; // [rsp+10h] [rbp-988h]
  _QWORD *v1015; // [rsp+10h] [rbp-988h]
  __int64 v1016; // [rsp+10h] [rbp-988h]
  int v1017; // [rsp+10h] [rbp-988h]
  int v1018; // [rsp+10h] [rbp-988h]
  int v1019; // [rsp+10h] [rbp-988h]
  __int64 v1020; // [rsp+10h] [rbp-988h]
  __int64 v1021; // [rsp+10h] [rbp-988h]
  int v1022; // [rsp+10h] [rbp-988h]
  __int64 v1023; // [rsp+10h] [rbp-988h]
  int v1024; // [rsp+10h] [rbp-988h]
  int v1025; // [rsp+10h] [rbp-988h]
  int v1026; // [rsp+10h] [rbp-988h]
  int v1027; // [rsp+10h] [rbp-988h]
  int v1028; // [rsp+10h] [rbp-988h]
  __int64 v1029; // [rsp+10h] [rbp-988h]
  int v1030; // [rsp+10h] [rbp-988h]
  int v1031; // [rsp+10h] [rbp-988h]
  __int64 v1032; // [rsp+10h] [rbp-988h]
  int v1033; // [rsp+10h] [rbp-988h]
  __int64 v1034; // [rsp+10h] [rbp-988h]
  __int64 v1035; // [rsp+10h] [rbp-988h]
  int v1036; // [rsp+10h] [rbp-988h]
  __int64 v1037; // [rsp+10h] [rbp-988h]
  int v1038; // [rsp+10h] [rbp-988h]
  int v1039; // [rsp+10h] [rbp-988h]
  int v1040; // [rsp+10h] [rbp-988h]
  __int64 v1041; // [rsp+10h] [rbp-988h]
  int v1042; // [rsp+10h] [rbp-988h]
  __int64 v1043; // [rsp+10h] [rbp-988h]
  int v1044; // [rsp+10h] [rbp-988h]
  int v1045; // [rsp+10h] [rbp-988h]
  int v1046; // [rsp+10h] [rbp-988h]
  int v1047; // [rsp+10h] [rbp-988h]
  __int64 v1048; // [rsp+10h] [rbp-988h]
  int v1049; // [rsp+10h] [rbp-988h]
  int v1050; // [rsp+10h] [rbp-988h]
  int v1051; // [rsp+10h] [rbp-988h]
  __int64 v1052; // [rsp+10h] [rbp-988h]
  int v1053; // [rsp+10h] [rbp-988h]
  __int64 v1054; // [rsp+10h] [rbp-988h]
  int v1055; // [rsp+10h] [rbp-988h]
  int v1056; // [rsp+10h] [rbp-988h]
  int v1057; // [rsp+10h] [rbp-988h]
  __int64 v1058; // [rsp+10h] [rbp-988h]
  _QWORD *v1059; // [rsp+10h] [rbp-988h]
  __int64 v1060; // [rsp+10h] [rbp-988h]
  int v1061; // [rsp+10h] [rbp-988h]
  int v1062; // [rsp+10h] [rbp-988h]
  int v1063; // [rsp+10h] [rbp-988h]
  __int64 v1064; // [rsp+10h] [rbp-988h]
  __int64 v1065; // [rsp+10h] [rbp-988h]
  int v1066; // [rsp+10h] [rbp-988h]
  __int64 v1067; // [rsp+10h] [rbp-988h]
  int v1068; // [rsp+10h] [rbp-988h]
  int v1069; // [rsp+10h] [rbp-988h]
  int v1070; // [rsp+10h] [rbp-988h]
  int v1071; // [rsp+10h] [rbp-988h]
  int v1072; // [rsp+10h] [rbp-988h]
  __int64 v1073; // [rsp+10h] [rbp-988h]
  __int64 v1074; // [rsp+10h] [rbp-988h]
  __int64 v1075; // [rsp+10h] [rbp-988h]
  int v1076; // [rsp+10h] [rbp-988h]
  int v1077; // [rsp+10h] [rbp-988h]
  __int64 v1078; // [rsp+10h] [rbp-988h]
  int v1079; // [rsp+10h] [rbp-988h]
  __int64 v1080; // [rsp+10h] [rbp-988h]
  int v1081; // [rsp+10h] [rbp-988h]
  __int64 v1082; // [rsp+10h] [rbp-988h]
  int v1083; // [rsp+10h] [rbp-988h]
  int v1084; // [rsp+10h] [rbp-988h]
  int v1085; // [rsp+10h] [rbp-988h]
  int v1086; // [rsp+10h] [rbp-988h]
  __int64 v1087; // [rsp+10h] [rbp-988h]
  int v1088; // [rsp+10h] [rbp-988h]
  int v1089; // [rsp+10h] [rbp-988h]
  int v1090; // [rsp+10h] [rbp-988h]
  __int64 v1091; // [rsp+10h] [rbp-988h]
  _QWORD *v1092; // [rsp+10h] [rbp-988h]
  __int64 v1093; // [rsp+10h] [rbp-988h]
  int v1094; // [rsp+10h] [rbp-988h]
  int v1095; // [rsp+10h] [rbp-988h]
  int v1096; // [rsp+10h] [rbp-988h]
  __int64 v1097; // [rsp+10h] [rbp-988h]
  int v1098; // [rsp+10h] [rbp-988h]
  __int64 v1099; // [rsp+10h] [rbp-988h]
  int v1100; // [rsp+10h] [rbp-988h]
  int v1101; // [rsp+10h] [rbp-988h]
  int v1102; // [rsp+10h] [rbp-988h]
  int v1103; // [rsp+10h] [rbp-988h]
  int v1104; // [rsp+10h] [rbp-988h]
  __int64 v1105; // [rsp+10h] [rbp-988h]
  int v1106; // [rsp+10h] [rbp-988h]
  int v1107; // [rsp+10h] [rbp-988h]
  __int64 v1108; // [rsp+10h] [rbp-988h]
  int v1109; // [rsp+10h] [rbp-988h]
  __int64 v1110; // [rsp+10h] [rbp-988h]
  _QWORD *v1111; // [rsp+10h] [rbp-988h]
  __int64 v1112; // [rsp+10h] [rbp-988h]
  int v1113; // [rsp+10h] [rbp-988h]
  int v1114; // [rsp+10h] [rbp-988h]
  int v1115; // [rsp+10h] [rbp-988h]
  __int64 v1116; // [rsp+10h] [rbp-988h]
  int v1117; // [rsp+10h] [rbp-988h]
  __int64 v1118; // [rsp+10h] [rbp-988h]
  int v1119; // [rsp+10h] [rbp-988h]
  int v1120; // [rsp+10h] [rbp-988h]
  int v1121; // [rsp+10h] [rbp-988h]
  int v1122; // [rsp+10h] [rbp-988h]
  int v1123; // [rsp+10h] [rbp-988h]
  __int64 v1124; // [rsp+10h] [rbp-988h]
  int v1125; // [rsp+10h] [rbp-988h]
  int v1126; // [rsp+10h] [rbp-988h]
  int v1127; // [rsp+18h] [rbp-980h]
  __m128i *v1128; // [rsp+18h] [rbp-980h]
  int v1129; // [rsp+18h] [rbp-980h]
  int v1130; // [rsp+18h] [rbp-980h]
  int v1131; // [rsp+18h] [rbp-980h]
  int v1132; // [rsp+18h] [rbp-980h]
  int v1133; // [rsp+18h] [rbp-980h]
  int v1134; // [rsp+18h] [rbp-980h]
  int v1135; // [rsp+18h] [rbp-980h]
  int v1136; // [rsp+18h] [rbp-980h]
  int v1137; // [rsp+18h] [rbp-980h]
  int v1138; // [rsp+18h] [rbp-980h]
  int v1139; // [rsp+18h] [rbp-980h]
  int v1140; // [rsp+18h] [rbp-980h]
  _QWORD *v1141; // [rsp+18h] [rbp-980h]
  int v1142; // [rsp+18h] [rbp-980h]
  int v1143; // [rsp+18h] [rbp-980h]
  int v1144; // [rsp+18h] [rbp-980h]
  int v1145; // [rsp+18h] [rbp-980h]
  int v1146; // [rsp+18h] [rbp-980h]
  int v1147; // [rsp+18h] [rbp-980h]
  int v1148; // [rsp+18h] [rbp-980h]
  int v1149; // [rsp+18h] [rbp-980h]
  int v1150; // [rsp+18h] [rbp-980h]
  int v1151; // [rsp+18h] [rbp-980h]
  int v1152; // [rsp+18h] [rbp-980h]
  int v1153; // [rsp+18h] [rbp-980h]
  _QWORD *v1154; // [rsp+18h] [rbp-980h]
  int v1155; // [rsp+18h] [rbp-980h]
  int v1156; // [rsp+18h] [rbp-980h]
  int v1157; // [rsp+18h] [rbp-980h]
  int v1158; // [rsp+18h] [rbp-980h]
  int v1159; // [rsp+18h] [rbp-980h]
  int v1160; // [rsp+18h] [rbp-980h]
  int v1161; // [rsp+18h] [rbp-980h]
  int v1162; // [rsp+18h] [rbp-980h]
  int v1163; // [rsp+18h] [rbp-980h]
  int v1164; // [rsp+18h] [rbp-980h]
  int v1165; // [rsp+18h] [rbp-980h]
  int v1166; // [rsp+18h] [rbp-980h]
  int v1167; // [rsp+18h] [rbp-980h]
  int v1168; // [rsp+18h] [rbp-980h]
  int v1169; // [rsp+18h] [rbp-980h]
  int v1170; // [rsp+18h] [rbp-980h]
  int v1171; // [rsp+18h] [rbp-980h]
  int v1172; // [rsp+18h] [rbp-980h]
  int v1173; // [rsp+18h] [rbp-980h]
  int v1174; // [rsp+18h] [rbp-980h]
  int v1175; // [rsp+18h] [rbp-980h]
  int v1176; // [rsp+18h] [rbp-980h]
  int v1177; // [rsp+18h] [rbp-980h]
  int v1178; // [rsp+18h] [rbp-980h]
  int v1179; // [rsp+18h] [rbp-980h]
  int v1180; // [rsp+18h] [rbp-980h]
  int v1181; // [rsp+18h] [rbp-980h]
  int v1182; // [rsp+18h] [rbp-980h]
  _QWORD *v1183; // [rsp+18h] [rbp-980h]
  int v1184; // [rsp+18h] [rbp-980h]
  int v1185; // [rsp+18h] [rbp-980h]
  int v1186; // [rsp+18h] [rbp-980h]
  int v1187; // [rsp+18h] [rbp-980h]
  int v1188; // [rsp+18h] [rbp-980h]
  int v1189; // [rsp+18h] [rbp-980h]
  int v1190; // [rsp+18h] [rbp-980h]
  int v1191; // [rsp+18h] [rbp-980h]
  int v1192; // [rsp+18h] [rbp-980h]
  int v1193; // [rsp+18h] [rbp-980h]
  int v1194; // [rsp+18h] [rbp-980h]
  int v1195; // [rsp+18h] [rbp-980h]
  int v1196; // [rsp+18h] [rbp-980h]
  int v1197; // [rsp+18h] [rbp-980h]
  int v1198; // [rsp+18h] [rbp-980h]
  int v1199; // [rsp+18h] [rbp-980h]
  int v1200; // [rsp+18h] [rbp-980h]
  int v1201; // [rsp+18h] [rbp-980h]
  int v1202; // [rsp+18h] [rbp-980h]
  int v1203; // [rsp+18h] [rbp-980h]
  _QWORD *v1204; // [rsp+18h] [rbp-980h]
  int v1205; // [rsp+18h] [rbp-980h]
  int v1206; // [rsp+18h] [rbp-980h]
  int v1207; // [rsp+18h] [rbp-980h]
  int v1208; // [rsp+18h] [rbp-980h]
  int v1209; // [rsp+18h] [rbp-980h]
  int v1210; // [rsp+18h] [rbp-980h]
  int v1211; // [rsp+18h] [rbp-980h]
  int v1212; // [rsp+18h] [rbp-980h]
  int v1213; // [rsp+18h] [rbp-980h]
  int v1214; // [rsp+18h] [rbp-980h]
  int v1215; // [rsp+18h] [rbp-980h]
  int v1216; // [rsp+18h] [rbp-980h]
  _QWORD *v1217; // [rsp+18h] [rbp-980h]
  int v1218; // [rsp+18h] [rbp-980h]
  int v1219; // [rsp+18h] [rbp-980h]
  int v1220; // [rsp+18h] [rbp-980h]
  int v1221; // [rsp+18h] [rbp-980h]
  int v1222; // [rsp+18h] [rbp-980h]
  int v1223; // [rsp+18h] [rbp-980h]
  int v1224; // [rsp+18h] [rbp-980h]
  int v1225; // [rsp+18h] [rbp-980h]
  int v1226; // [rsp+18h] [rbp-980h]
  int v1227; // [rsp+18h] [rbp-980h]
  int v1228; // [rsp+20h] [rbp-978h]
  int v1229; // [rsp+20h] [rbp-978h]
  int v1230; // [rsp+20h] [rbp-978h]
  int v1231; // [rsp+20h] [rbp-978h]
  int v1232; // [rsp+20h] [rbp-978h]
  int v1233; // [rsp+20h] [rbp-978h]
  int v1234; // [rsp+20h] [rbp-978h]
  int v1235; // [rsp+20h] [rbp-978h]
  int v1236; // [rsp+20h] [rbp-978h]
  int v1237; // [rsp+20h] [rbp-978h]
  int v1238; // [rsp+20h] [rbp-978h]
  int v1239; // [rsp+20h] [rbp-978h]
  int v1240; // [rsp+20h] [rbp-978h]
  int v1241; // [rsp+20h] [rbp-978h]
  int v1242; // [rsp+20h] [rbp-978h]
  int v1243; // [rsp+20h] [rbp-978h]
  int v1244; // [rsp+20h] [rbp-978h]
  int v1245; // [rsp+20h] [rbp-978h]
  int v1246; // [rsp+20h] [rbp-978h]
  int v1247; // [rsp+20h] [rbp-978h]
  int v1248; // [rsp+20h] [rbp-978h]
  int v1249; // [rsp+20h] [rbp-978h]
  int v1250; // [rsp+20h] [rbp-978h]
  int v1251; // [rsp+20h] [rbp-978h]
  int v1252; // [rsp+20h] [rbp-978h]
  int v1253; // [rsp+20h] [rbp-978h]
  int v1254; // [rsp+20h] [rbp-978h]
  int v1255; // [rsp+20h] [rbp-978h]
  int v1256; // [rsp+20h] [rbp-978h]
  int v1257; // [rsp+20h] [rbp-978h]
  int v1258; // [rsp+20h] [rbp-978h]
  int v1259; // [rsp+20h] [rbp-978h]
  int v1260; // [rsp+20h] [rbp-978h]
  int v1261; // [rsp+20h] [rbp-978h]
  int v1262; // [rsp+20h] [rbp-978h]
  int v1263; // [rsp+20h] [rbp-978h]
  int v1264; // [rsp+20h] [rbp-978h]
  int v1265; // [rsp+20h] [rbp-978h]
  int v1266; // [rsp+20h] [rbp-978h]
  int v1267; // [rsp+20h] [rbp-978h]
  int v1268; // [rsp+20h] [rbp-978h]
  int v1269; // [rsp+20h] [rbp-978h]
  int v1270; // [rsp+20h] [rbp-978h]
  int v1271; // [rsp+20h] [rbp-978h]
  int v1272; // [rsp+20h] [rbp-978h]
  int v1273; // [rsp+20h] [rbp-978h]
  int v1274; // [rsp+20h] [rbp-978h]
  int v1275; // [rsp+20h] [rbp-978h]
  int v1276; // [rsp+20h] [rbp-978h]
  int v1277; // [rsp+20h] [rbp-978h]
  int v1278; // [rsp+20h] [rbp-978h]
  int v1279; // [rsp+20h] [rbp-978h]
  int v1280; // [rsp+20h] [rbp-978h]
  int v1281; // [rsp+20h] [rbp-978h]
  int v1282; // [rsp+20h] [rbp-978h]
  int v1283; // [rsp+20h] [rbp-978h]
  int v1284; // [rsp+20h] [rbp-978h]
  int v1285; // [rsp+20h] [rbp-978h]
  int v1286; // [rsp+20h] [rbp-978h]
  int v1287; // [rsp+20h] [rbp-978h]
  int v1288; // [rsp+20h] [rbp-978h]
  int v1289; // [rsp+20h] [rbp-978h]
  int v1290; // [rsp+20h] [rbp-978h]
  int v1291; // [rsp+20h] [rbp-978h]
  int v1292; // [rsp+20h] [rbp-978h]
  int v1293; // [rsp+20h] [rbp-978h]
  int v1294; // [rsp+20h] [rbp-978h]
  int v1295; // [rsp+20h] [rbp-978h]
  int v1296; // [rsp+20h] [rbp-978h]
  int v1297; // [rsp+20h] [rbp-978h]
  int v1298; // [rsp+20h] [rbp-978h]
  int v1299; // [rsp+20h] [rbp-978h]
  int v1300; // [rsp+20h] [rbp-978h]
  int v1301; // [rsp+20h] [rbp-978h]
  int v1302; // [rsp+20h] [rbp-978h]
  int v1303; // [rsp+20h] [rbp-978h]
  int v1304; // [rsp+20h] [rbp-978h]
  int v1305; // [rsp+20h] [rbp-978h]
  int v1306; // [rsp+20h] [rbp-978h]
  int v1307; // [rsp+20h] [rbp-978h]
  int v1308; // [rsp+20h] [rbp-978h]
  int v1309; // [rsp+20h] [rbp-978h]
  int v1310; // [rsp+20h] [rbp-978h]
  int v1311; // [rsp+20h] [rbp-978h]
  int v1312; // [rsp+20h] [rbp-978h]
  int v1313; // [rsp+20h] [rbp-978h]
  int v1314; // [rsp+20h] [rbp-978h]
  int v1315; // [rsp+20h] [rbp-978h]
  int v1316; // [rsp+20h] [rbp-978h]
  int v1317; // [rsp+20h] [rbp-978h]
  int v1318; // [rsp+20h] [rbp-978h]
  int v1319; // [rsp+20h] [rbp-978h]
  int v1320; // [rsp+20h] [rbp-978h]
  int v1321; // [rsp+20h] [rbp-978h]
  int v1322; // [rsp+20h] [rbp-978h]
  int v1323; // [rsp+20h] [rbp-978h]
  int v1324; // [rsp+20h] [rbp-978h]
  int v1325; // [rsp+20h] [rbp-978h]
  int v1326; // [rsp+20h] [rbp-978h]
  int v1327; // [rsp+20h] [rbp-978h]
  int v1328; // [rsp+20h] [rbp-978h]
  int v1329; // [rsp+28h] [rbp-970h]
  __m128i *v1330; // [rsp+28h] [rbp-970h]
  int v1331; // [rsp+28h] [rbp-970h]
  int v1332; // [rsp+28h] [rbp-970h]
  int v1333; // [rsp+28h] [rbp-970h]
  int v1334; // [rsp+28h] [rbp-970h]
  int v1335; // [rsp+28h] [rbp-970h]
  int v1336; // [rsp+28h] [rbp-970h]
  int v1337; // [rsp+28h] [rbp-970h]
  int v1338; // [rsp+28h] [rbp-970h]
  int v1339; // [rsp+28h] [rbp-970h]
  int v1340; // [rsp+28h] [rbp-970h]
  int v1341; // [rsp+28h] [rbp-970h]
  int v1342; // [rsp+28h] [rbp-970h]
  int v1343; // [rsp+28h] [rbp-970h]
  int v1344; // [rsp+28h] [rbp-970h]
  int v1345; // [rsp+28h] [rbp-970h]
  _QWORD *v1346; // [rsp+28h] [rbp-970h]
  int v1347; // [rsp+28h] [rbp-970h]
  int v1348; // [rsp+28h] [rbp-970h]
  int v1349; // [rsp+28h] [rbp-970h]
  int v1350; // [rsp+28h] [rbp-970h]
  int v1351; // [rsp+28h] [rbp-970h]
  int v1352; // [rsp+28h] [rbp-970h]
  int v1353; // [rsp+28h] [rbp-970h]
  int v1354; // [rsp+28h] [rbp-970h]
  int v1355; // [rsp+28h] [rbp-970h]
  int v1356; // [rsp+28h] [rbp-970h]
  int v1357; // [rsp+28h] [rbp-970h]
  int v1358; // [rsp+28h] [rbp-970h]
  _QWORD *v1359; // [rsp+28h] [rbp-970h]
  int v1360; // [rsp+28h] [rbp-970h]
  int v1361; // [rsp+28h] [rbp-970h]
  int v1362; // [rsp+28h] [rbp-970h]
  int v1363; // [rsp+28h] [rbp-970h]
  int v1364; // [rsp+28h] [rbp-970h]
  int v1365; // [rsp+28h] [rbp-970h]
  int v1366; // [rsp+28h] [rbp-970h]
  int v1367; // [rsp+28h] [rbp-970h]
  int v1368; // [rsp+28h] [rbp-970h]
  int v1369; // [rsp+28h] [rbp-970h]
  int v1370; // [rsp+28h] [rbp-970h]
  int v1371; // [rsp+28h] [rbp-970h]
  int v1372; // [rsp+28h] [rbp-970h]
  int v1373; // [rsp+28h] [rbp-970h]
  int v1374; // [rsp+28h] [rbp-970h]
  int v1375; // [rsp+28h] [rbp-970h]
  int v1376; // [rsp+28h] [rbp-970h]
  int v1377; // [rsp+28h] [rbp-970h]
  int v1378; // [rsp+28h] [rbp-970h]
  int v1379; // [rsp+28h] [rbp-970h]
  int v1380; // [rsp+28h] [rbp-970h]
  int v1381; // [rsp+28h] [rbp-970h]
  int v1382; // [rsp+28h] [rbp-970h]
  int v1383; // [rsp+28h] [rbp-970h]
  int v1384; // [rsp+28h] [rbp-970h]
  int v1385; // [rsp+28h] [rbp-970h]
  int v1386; // [rsp+28h] [rbp-970h]
  int v1387; // [rsp+28h] [rbp-970h]
  _QWORD *v1388; // [rsp+28h] [rbp-970h]
  int v1389; // [rsp+28h] [rbp-970h]
  int v1390; // [rsp+28h] [rbp-970h]
  int v1391; // [rsp+28h] [rbp-970h]
  int v1392; // [rsp+28h] [rbp-970h]
  int v1393; // [rsp+28h] [rbp-970h]
  int v1394; // [rsp+28h] [rbp-970h]
  int v1395; // [rsp+28h] [rbp-970h]
  int v1396; // [rsp+28h] [rbp-970h]
  int v1397; // [rsp+28h] [rbp-970h]
  int v1398; // [rsp+28h] [rbp-970h]
  int v1399; // [rsp+28h] [rbp-970h]
  int v1400; // [rsp+28h] [rbp-970h]
  int v1401; // [rsp+28h] [rbp-970h]
  int v1402; // [rsp+28h] [rbp-970h]
  int v1403; // [rsp+28h] [rbp-970h]
  int v1404; // [rsp+28h] [rbp-970h]
  int v1405; // [rsp+28h] [rbp-970h]
  int v1406; // [rsp+28h] [rbp-970h]
  int v1407; // [rsp+28h] [rbp-970h]
  int v1408; // [rsp+28h] [rbp-970h]
  _QWORD *v1409; // [rsp+28h] [rbp-970h]
  int v1410; // [rsp+28h] [rbp-970h]
  int v1411; // [rsp+28h] [rbp-970h]
  int v1412; // [rsp+28h] [rbp-970h]
  int v1413; // [rsp+28h] [rbp-970h]
  int v1414; // [rsp+28h] [rbp-970h]
  int v1415; // [rsp+28h] [rbp-970h]
  int v1416; // [rsp+28h] [rbp-970h]
  int v1417; // [rsp+28h] [rbp-970h]
  int v1418; // [rsp+28h] [rbp-970h]
  int v1419; // [rsp+28h] [rbp-970h]
  int v1420; // [rsp+28h] [rbp-970h]
  int v1421; // [rsp+28h] [rbp-970h]
  _QWORD *v1422; // [rsp+28h] [rbp-970h]
  int v1423; // [rsp+28h] [rbp-970h]
  int v1424; // [rsp+28h] [rbp-970h]
  int v1425; // [rsp+28h] [rbp-970h]
  int v1426; // [rsp+28h] [rbp-970h]
  int v1427; // [rsp+28h] [rbp-970h]
  int v1428; // [rsp+28h] [rbp-970h]
  int v1429; // [rsp+28h] [rbp-970h]
  __int64 v1430; // [rsp+30h] [rbp-968h]
  _QWORD *v1431; // [rsp+30h] [rbp-968h]
  __int64 v1432; // [rsp+30h] [rbp-968h]
  __int64 v1433; // [rsp+30h] [rbp-968h]
  __int64 v1434; // [rsp+30h] [rbp-968h]
  __int64 v1435; // [rsp+30h] [rbp-968h]
  __int64 v1436; // [rsp+30h] [rbp-968h]
  __int64 v1437; // [rsp+30h] [rbp-968h]
  __int64 v1438; // [rsp+30h] [rbp-968h]
  __int64 v1439; // [rsp+30h] [rbp-968h]
  __int64 v1440; // [rsp+30h] [rbp-968h]
  __int64 v1441; // [rsp+30h] [rbp-968h]
  __int64 v1442; // [rsp+30h] [rbp-968h]
  __int64 v1443; // [rsp+30h] [rbp-968h]
  __int64 v1444; // [rsp+30h] [rbp-968h]
  __int64 v1445; // [rsp+30h] [rbp-968h]
  __int64 v1446; // [rsp+30h] [rbp-968h]
  __int64 v1447; // [rsp+30h] [rbp-968h]
  _QWORD *v1448; // [rsp+30h] [rbp-968h]
  __int64 v1449; // [rsp+30h] [rbp-968h]
  __int64 v1450; // [rsp+30h] [rbp-968h]
  __int64 v1451; // [rsp+30h] [rbp-968h]
  __int64 v1452; // [rsp+30h] [rbp-968h]
  __int64 v1453; // [rsp+30h] [rbp-968h]
  __int64 v1454; // [rsp+30h] [rbp-968h]
  __int64 v1455; // [rsp+30h] [rbp-968h]
  __int64 v1456; // [rsp+30h] [rbp-968h]
  __int64 v1457; // [rsp+30h] [rbp-968h]
  __int64 v1458; // [rsp+30h] [rbp-968h]
  __int64 v1459; // [rsp+30h] [rbp-968h]
  __int64 v1460; // [rsp+30h] [rbp-968h]
  _QWORD *v1461; // [rsp+30h] [rbp-968h]
  __int64 v1462; // [rsp+30h] [rbp-968h]
  __int64 v1463; // [rsp+30h] [rbp-968h]
  __int64 v1464; // [rsp+30h] [rbp-968h]
  __int64 v1465; // [rsp+30h] [rbp-968h]
  __int64 v1466; // [rsp+30h] [rbp-968h]
  __int64 v1467; // [rsp+30h] [rbp-968h]
  __int64 v1468; // [rsp+30h] [rbp-968h]
  __int64 v1469; // [rsp+30h] [rbp-968h]
  __int64 v1470; // [rsp+30h] [rbp-968h]
  __int64 v1471; // [rsp+30h] [rbp-968h]
  __int64 v1472; // [rsp+30h] [rbp-968h]
  __int64 v1473; // [rsp+30h] [rbp-968h]
  __int64 v1474; // [rsp+30h] [rbp-968h]
  __int64 v1475; // [rsp+30h] [rbp-968h]
  __int64 v1476; // [rsp+30h] [rbp-968h]
  __int64 v1477; // [rsp+30h] [rbp-968h]
  __int64 v1478; // [rsp+30h] [rbp-968h]
  __int64 v1479; // [rsp+30h] [rbp-968h]
  __int64 v1480; // [rsp+30h] [rbp-968h]
  __int64 v1481; // [rsp+30h] [rbp-968h]
  __int64 v1482; // [rsp+30h] [rbp-968h]
  __int64 v1483; // [rsp+30h] [rbp-968h]
  __int64 v1484; // [rsp+30h] [rbp-968h]
  __int64 v1485; // [rsp+30h] [rbp-968h]
  __int64 v1486; // [rsp+30h] [rbp-968h]
  __int64 v1487; // [rsp+30h] [rbp-968h]
  __int64 v1488; // [rsp+30h] [rbp-968h]
  __int64 v1489; // [rsp+30h] [rbp-968h]
  _QWORD *v1490; // [rsp+30h] [rbp-968h]
  __int64 v1491; // [rsp+30h] [rbp-968h]
  __int64 v1492; // [rsp+30h] [rbp-968h]
  __int64 v1493; // [rsp+30h] [rbp-968h]
  __int64 v1494; // [rsp+30h] [rbp-968h]
  __int64 v1495; // [rsp+30h] [rbp-968h]
  __int64 v1496; // [rsp+30h] [rbp-968h]
  __int64 v1497; // [rsp+30h] [rbp-968h]
  __int64 v1498; // [rsp+30h] [rbp-968h]
  __int64 v1499; // [rsp+30h] [rbp-968h]
  __int64 v1500; // [rsp+30h] [rbp-968h]
  __int64 v1501; // [rsp+30h] [rbp-968h]
  __int64 v1502; // [rsp+30h] [rbp-968h]
  __int64 v1503; // [rsp+30h] [rbp-968h]
  __int64 v1504; // [rsp+30h] [rbp-968h]
  __int64 v1505; // [rsp+30h] [rbp-968h]
  __int64 v1506; // [rsp+30h] [rbp-968h]
  __int64 v1507; // [rsp+30h] [rbp-968h]
  __int64 v1508; // [rsp+30h] [rbp-968h]
  __int64 v1509; // [rsp+30h] [rbp-968h]
  __int64 v1510; // [rsp+30h] [rbp-968h]
  _QWORD *v1511; // [rsp+30h] [rbp-968h]
  __int64 v1512; // [rsp+30h] [rbp-968h]
  __int64 v1513; // [rsp+30h] [rbp-968h]
  __int64 v1514; // [rsp+30h] [rbp-968h]
  __int64 v1515; // [rsp+30h] [rbp-968h]
  __int64 v1516; // [rsp+30h] [rbp-968h]
  __int64 v1517; // [rsp+30h] [rbp-968h]
  __int64 v1518; // [rsp+30h] [rbp-968h]
  __int64 v1519; // [rsp+30h] [rbp-968h]
  __int64 v1520; // [rsp+30h] [rbp-968h]
  __int64 v1521; // [rsp+30h] [rbp-968h]
  __int64 v1522; // [rsp+30h] [rbp-968h]
  __int64 v1523; // [rsp+30h] [rbp-968h]
  _QWORD *v1524; // [rsp+30h] [rbp-968h]
  __int64 v1525; // [rsp+30h] [rbp-968h]
  __int64 v1526; // [rsp+30h] [rbp-968h]
  __int64 v1527; // [rsp+30h] [rbp-968h]
  __int64 v1528; // [rsp+30h] [rbp-968h]
  __int64 v1529; // [rsp+30h] [rbp-968h]
  __int64 v1530; // [rsp+30h] [rbp-968h]
  int v1531; // [rsp+38h] [rbp-960h]
  int v1532; // [rsp+38h] [rbp-960h]
  int v1533; // [rsp+38h] [rbp-960h]
  int v1534; // [rsp+38h] [rbp-960h]
  int v1535; // [rsp+38h] [rbp-960h]
  int v1536; // [rsp+38h] [rbp-960h]
  int v1537; // [rsp+38h] [rbp-960h]
  int v1538; // [rsp+38h] [rbp-960h]
  int v1539; // [rsp+38h] [rbp-960h]
  int v1540; // [rsp+38h] [rbp-960h]
  int v1541; // [rsp+38h] [rbp-960h]
  int v1542; // [rsp+38h] [rbp-960h]
  int v1543; // [rsp+38h] [rbp-960h]
  int v1544; // [rsp+38h] [rbp-960h]
  int v1545; // [rsp+38h] [rbp-960h]
  int v1546; // [rsp+38h] [rbp-960h]
  int v1547; // [rsp+38h] [rbp-960h]
  int v1548; // [rsp+38h] [rbp-960h]
  int v1549; // [rsp+38h] [rbp-960h]
  int v1550; // [rsp+38h] [rbp-960h]
  int v1551; // [rsp+38h] [rbp-960h]
  int v1552; // [rsp+38h] [rbp-960h]
  int v1553; // [rsp+38h] [rbp-960h]
  int v1554; // [rsp+38h] [rbp-960h]
  int v1555; // [rsp+38h] [rbp-960h]
  int v1556; // [rsp+38h] [rbp-960h]
  int v1557; // [rsp+38h] [rbp-960h]
  int v1558; // [rsp+38h] [rbp-960h]
  int v1559; // [rsp+38h] [rbp-960h]
  int v1560; // [rsp+38h] [rbp-960h]
  int v1561; // [rsp+38h] [rbp-960h]
  int v1562; // [rsp+38h] [rbp-960h]
  int v1563; // [rsp+38h] [rbp-960h]
  int v1564; // [rsp+38h] [rbp-960h]
  int v1565; // [rsp+38h] [rbp-960h]
  int v1566; // [rsp+38h] [rbp-960h]
  int v1567; // [rsp+38h] [rbp-960h]
  int v1568; // [rsp+38h] [rbp-960h]
  int v1569; // [rsp+38h] [rbp-960h]
  int v1570; // [rsp+38h] [rbp-960h]
  int v1571; // [rsp+38h] [rbp-960h]
  int v1572; // [rsp+38h] [rbp-960h]
  int v1573; // [rsp+38h] [rbp-960h]
  int v1574; // [rsp+38h] [rbp-960h]
  int v1575; // [rsp+38h] [rbp-960h]
  int v1576; // [rsp+38h] [rbp-960h]
  int v1577; // [rsp+38h] [rbp-960h]
  int v1578; // [rsp+38h] [rbp-960h]
  int v1579; // [rsp+38h] [rbp-960h]
  int v1580; // [rsp+38h] [rbp-960h]
  int v1581; // [rsp+38h] [rbp-960h]
  int v1582; // [rsp+38h] [rbp-960h]
  int v1583; // [rsp+38h] [rbp-960h]
  int v1584; // [rsp+38h] [rbp-960h]
  int v1585; // [rsp+38h] [rbp-960h]
  int v1586; // [rsp+38h] [rbp-960h]
  int v1587; // [rsp+38h] [rbp-960h]
  int v1588; // [rsp+38h] [rbp-960h]
  int v1589; // [rsp+38h] [rbp-960h]
  int v1590; // [rsp+38h] [rbp-960h]
  int v1591; // [rsp+38h] [rbp-960h]
  int v1592; // [rsp+38h] [rbp-960h]
  int v1593; // [rsp+38h] [rbp-960h]
  int v1594; // [rsp+38h] [rbp-960h]
  int v1595; // [rsp+38h] [rbp-960h]
  int v1596; // [rsp+38h] [rbp-960h]
  int v1597; // [rsp+38h] [rbp-960h]
  int v1598; // [rsp+38h] [rbp-960h]
  int v1599; // [rsp+38h] [rbp-960h]
  int v1600; // [rsp+38h] [rbp-960h]
  int v1601; // [rsp+38h] [rbp-960h]
  int v1602; // [rsp+38h] [rbp-960h]
  int v1603; // [rsp+38h] [rbp-960h]
  int v1604; // [rsp+38h] [rbp-960h]
  int v1605; // [rsp+38h] [rbp-960h]
  int v1606; // [rsp+38h] [rbp-960h]
  int v1607; // [rsp+38h] [rbp-960h]
  int v1608; // [rsp+38h] [rbp-960h]
  int v1609; // [rsp+38h] [rbp-960h]
  int v1610; // [rsp+38h] [rbp-960h]
  int v1611; // [rsp+38h] [rbp-960h]
  int v1612; // [rsp+38h] [rbp-960h]
  int v1613; // [rsp+38h] [rbp-960h]
  int v1614; // [rsp+38h] [rbp-960h]
  int v1615; // [rsp+38h] [rbp-960h]
  int v1616; // [rsp+38h] [rbp-960h]
  int v1617; // [rsp+38h] [rbp-960h]
  int v1618; // [rsp+38h] [rbp-960h]
  int v1619; // [rsp+38h] [rbp-960h]
  int v1620; // [rsp+38h] [rbp-960h]
  int v1621; // [rsp+38h] [rbp-960h]
  int v1622; // [rsp+38h] [rbp-960h]
  int v1623; // [rsp+38h] [rbp-960h]
  int v1624; // [rsp+38h] [rbp-960h]
  int v1625; // [rsp+38h] [rbp-960h]
  int v1626; // [rsp+38h] [rbp-960h]
  int v1627; // [rsp+38h] [rbp-960h]
  int v1628; // [rsp+38h] [rbp-960h]
  int v1629; // [rsp+38h] [rbp-960h]
  int v1630; // [rsp+38h] [rbp-960h]
  int v1631; // [rsp+38h] [rbp-960h]
  int v1632; // [rsp+40h] [rbp-958h]
  int v1633; // [rsp+40h] [rbp-958h]
  int v1634; // [rsp+40h] [rbp-958h]
  int v1635; // [rsp+40h] [rbp-958h]
  int v1636; // [rsp+40h] [rbp-958h]
  int v1637; // [rsp+40h] [rbp-958h]
  int v1638; // [rsp+40h] [rbp-958h]
  int v1639; // [rsp+40h] [rbp-958h]
  int v1640; // [rsp+40h] [rbp-958h]
  int v1641; // [rsp+40h] [rbp-958h]
  int v1642; // [rsp+40h] [rbp-958h]
  int v1643; // [rsp+40h] [rbp-958h]
  int v1644; // [rsp+40h] [rbp-958h]
  int v1645; // [rsp+40h] [rbp-958h]
  int v1646; // [rsp+40h] [rbp-958h]
  int v1647; // [rsp+40h] [rbp-958h]
  int v1648; // [rsp+40h] [rbp-958h]
  int v1649; // [rsp+40h] [rbp-958h]
  int v1650; // [rsp+40h] [rbp-958h]
  int v1651; // [rsp+40h] [rbp-958h]
  int v1652; // [rsp+40h] [rbp-958h]
  int v1653; // [rsp+40h] [rbp-958h]
  int v1654; // [rsp+40h] [rbp-958h]
  int v1655; // [rsp+40h] [rbp-958h]
  int v1656; // [rsp+40h] [rbp-958h]
  int v1657; // [rsp+40h] [rbp-958h]
  int v1658; // [rsp+40h] [rbp-958h]
  int v1659; // [rsp+40h] [rbp-958h]
  int v1660; // [rsp+40h] [rbp-958h]
  int v1661; // [rsp+40h] [rbp-958h]
  int v1662; // [rsp+40h] [rbp-958h]
  int v1663; // [rsp+40h] [rbp-958h]
  int v1664; // [rsp+40h] [rbp-958h]
  int v1665; // [rsp+40h] [rbp-958h]
  int v1666; // [rsp+40h] [rbp-958h]
  int v1667; // [rsp+40h] [rbp-958h]
  int v1668; // [rsp+40h] [rbp-958h]
  int v1669; // [rsp+40h] [rbp-958h]
  int v1670; // [rsp+40h] [rbp-958h]
  int v1671; // [rsp+40h] [rbp-958h]
  int v1672; // [rsp+40h] [rbp-958h]
  int v1673; // [rsp+40h] [rbp-958h]
  int v1674; // [rsp+40h] [rbp-958h]
  int v1675; // [rsp+40h] [rbp-958h]
  int v1676; // [rsp+40h] [rbp-958h]
  int v1677; // [rsp+40h] [rbp-958h]
  int v1678; // [rsp+40h] [rbp-958h]
  int v1679; // [rsp+40h] [rbp-958h]
  int v1680; // [rsp+40h] [rbp-958h]
  int v1681; // [rsp+40h] [rbp-958h]
  int v1682; // [rsp+40h] [rbp-958h]
  int v1683; // [rsp+40h] [rbp-958h]
  int v1684; // [rsp+40h] [rbp-958h]
  int v1685; // [rsp+40h] [rbp-958h]
  int v1686; // [rsp+40h] [rbp-958h]
  int v1687; // [rsp+40h] [rbp-958h]
  int v1688; // [rsp+40h] [rbp-958h]
  int v1689; // [rsp+40h] [rbp-958h]
  int v1690; // [rsp+40h] [rbp-958h]
  int v1691; // [rsp+40h] [rbp-958h]
  int v1692; // [rsp+40h] [rbp-958h]
  int v1693; // [rsp+40h] [rbp-958h]
  int v1694; // [rsp+40h] [rbp-958h]
  int v1695; // [rsp+40h] [rbp-958h]
  int v1696; // [rsp+40h] [rbp-958h]
  int v1697; // [rsp+40h] [rbp-958h]
  int v1698; // [rsp+40h] [rbp-958h]
  int v1699; // [rsp+40h] [rbp-958h]
  int v1700; // [rsp+40h] [rbp-958h]
  int v1701; // [rsp+40h] [rbp-958h]
  int v1702; // [rsp+40h] [rbp-958h]
  int v1703; // [rsp+40h] [rbp-958h]
  int v1704; // [rsp+40h] [rbp-958h]
  int v1705; // [rsp+40h] [rbp-958h]
  int v1706; // [rsp+40h] [rbp-958h]
  int v1707; // [rsp+40h] [rbp-958h]
  int v1708; // [rsp+40h] [rbp-958h]
  int v1709; // [rsp+40h] [rbp-958h]
  int v1710; // [rsp+40h] [rbp-958h]
  int v1711; // [rsp+40h] [rbp-958h]
  int v1712; // [rsp+40h] [rbp-958h]
  int v1713; // [rsp+40h] [rbp-958h]
  int v1714; // [rsp+40h] [rbp-958h]
  int v1715; // [rsp+40h] [rbp-958h]
  int v1716; // [rsp+40h] [rbp-958h]
  int v1717; // [rsp+40h] [rbp-958h]
  int v1718; // [rsp+40h] [rbp-958h]
  int v1719; // [rsp+40h] [rbp-958h]
  int v1720; // [rsp+40h] [rbp-958h]
  int v1721; // [rsp+40h] [rbp-958h]
  int v1722; // [rsp+40h] [rbp-958h]
  int v1723; // [rsp+40h] [rbp-958h]
  int v1724; // [rsp+40h] [rbp-958h]
  int v1725; // [rsp+40h] [rbp-958h]
  int v1726; // [rsp+40h] [rbp-958h]
  int v1727; // [rsp+40h] [rbp-958h]
  int v1728; // [rsp+40h] [rbp-958h]
  int v1729; // [rsp+40h] [rbp-958h]
  int v1730; // [rsp+40h] [rbp-958h]
  int v1731; // [rsp+40h] [rbp-958h]
  int v1732; // [rsp+40h] [rbp-958h]
  int v1733; // [rsp+48h] [rbp-950h]
  int v1734; // [rsp+48h] [rbp-950h]
  int v1735; // [rsp+48h] [rbp-950h]
  int v1736; // [rsp+48h] [rbp-950h]
  int v1737; // [rsp+48h] [rbp-950h]
  int v1738; // [rsp+48h] [rbp-950h]
  _QWORD *v1739; // [rsp+48h] [rbp-950h]
  int v1740; // [rsp+48h] [rbp-950h]
  int v1741; // [rsp+48h] [rbp-950h]
  _QWORD *v1742; // [rsp+48h] [rbp-950h]
  int v1743; // [rsp+48h] [rbp-950h]
  __int64 v1744; // [rsp+48h] [rbp-950h]
  int v1745; // [rsp+48h] [rbp-950h]
  int v1746; // [rsp+48h] [rbp-950h]
  int v1747; // [rsp+48h] [rbp-950h]
  int v1748; // [rsp+48h] [rbp-950h]
  int v1749; // [rsp+48h] [rbp-950h]
  int v1750; // [rsp+48h] [rbp-950h]
  int v1751; // [rsp+48h] [rbp-950h]
  int v1752; // [rsp+48h] [rbp-950h]
  int v1753; // [rsp+48h] [rbp-950h]
  int v1754; // [rsp+48h] [rbp-950h]
  int v1755; // [rsp+48h] [rbp-950h]
  int v1756; // [rsp+48h] [rbp-950h]
  int v1757; // [rsp+48h] [rbp-950h]
  int v1758; // [rsp+48h] [rbp-950h]
  int v1759; // [rsp+48h] [rbp-950h]
  int v1760; // [rsp+48h] [rbp-950h]
  int v1761; // [rsp+48h] [rbp-950h]
  int v1762; // [rsp+48h] [rbp-950h]
  int v1763; // [rsp+48h] [rbp-950h]
  int v1764; // [rsp+48h] [rbp-950h]
  int v1765; // [rsp+48h] [rbp-950h]
  int v1766; // [rsp+48h] [rbp-950h]
  int v1767; // [rsp+48h] [rbp-950h]
  int v1768; // [rsp+48h] [rbp-950h]
  _QWORD *v1769; // [rsp+48h] [rbp-950h]
  int v1770; // [rsp+48h] [rbp-950h]
  int v1771; // [rsp+48h] [rbp-950h]
  int v1772; // [rsp+48h] [rbp-950h]
  int v1773; // [rsp+48h] [rbp-950h]
  int v1774; // [rsp+48h] [rbp-950h]
  int v1775; // [rsp+48h] [rbp-950h]
  int v1776; // [rsp+48h] [rbp-950h]
  int v1777; // [rsp+48h] [rbp-950h]
  int v1778; // [rsp+48h] [rbp-950h]
  int v1779; // [rsp+48h] [rbp-950h]
  int v1780; // [rsp+48h] [rbp-950h]
  int v1781; // [rsp+48h] [rbp-950h]
  int v1782; // [rsp+48h] [rbp-950h]
  int v1783; // [rsp+48h] [rbp-950h]
  _QWORD *v1784; // [rsp+48h] [rbp-950h]
  int v1785; // [rsp+48h] [rbp-950h]
  __int64 v1786; // [rsp+48h] [rbp-950h]
  int v1787; // [rsp+48h] [rbp-950h]
  int v1788; // [rsp+48h] [rbp-950h]
  int v1789; // [rsp+48h] [rbp-950h]
  int v1790; // [rsp+48h] [rbp-950h]
  int v1791; // [rsp+48h] [rbp-950h]
  int v1792; // [rsp+48h] [rbp-950h]
  int v1793; // [rsp+48h] [rbp-950h]
  int v1794; // [rsp+48h] [rbp-950h]
  int v1795; // [rsp+48h] [rbp-950h]
  int v1796; // [rsp+48h] [rbp-950h]
  int v1797; // [rsp+48h] [rbp-950h]
  int v1798; // [rsp+48h] [rbp-950h]
  int v1799; // [rsp+48h] [rbp-950h]
  int v1800; // [rsp+48h] [rbp-950h]
  int v1801; // [rsp+48h] [rbp-950h]
  int v1802; // [rsp+48h] [rbp-950h]
  int v1803; // [rsp+48h] [rbp-950h]
  int v1804; // [rsp+48h] [rbp-950h]
  _QWORD *v1805; // [rsp+48h] [rbp-950h]
  int v1806; // [rsp+48h] [rbp-950h]
  __int64 v1807; // [rsp+48h] [rbp-950h]
  int v1808; // [rsp+48h] [rbp-950h]
  int v1809; // [rsp+48h] [rbp-950h]
  int v1810; // [rsp+48h] [rbp-950h]
  int v1811; // [rsp+48h] [rbp-950h]
  int v1812; // [rsp+48h] [rbp-950h]
  int v1813; // [rsp+48h] [rbp-950h]
  int v1814; // [rsp+48h] [rbp-950h]
  int v1815; // [rsp+48h] [rbp-950h]
  int v1816; // [rsp+48h] [rbp-950h]
  int v1817; // [rsp+48h] [rbp-950h]
  int v1818; // [rsp+48h] [rbp-950h]
  int v1819; // [rsp+48h] [rbp-950h]
  int v1820; // [rsp+48h] [rbp-950h]
  int v1821; // [rsp+48h] [rbp-950h]
  int v1822; // [rsp+48h] [rbp-950h]
  int v1823; // [rsp+48h] [rbp-950h]
  int v1824; // [rsp+48h] [rbp-950h]
  int v1825; // [rsp+48h] [rbp-950h]
  int v1826; // [rsp+48h] [rbp-950h]
  int v1827; // [rsp+48h] [rbp-950h]
  int v1828; // [rsp+48h] [rbp-950h]
  int v1829; // [rsp+48h] [rbp-950h]
  int v1830; // [rsp+48h] [rbp-950h]
  int v1831; // [rsp+48h] [rbp-950h]
  _QWORD *v1832; // [rsp+48h] [rbp-950h]
  int v1833; // [rsp+48h] [rbp-950h]
  int v1834; // [rsp+50h] [rbp-948h]
  __m128i *v1835; // [rsp+50h] [rbp-948h]
  int v1836; // [rsp+50h] [rbp-948h]
  int v1837; // [rsp+50h] [rbp-948h]
  int v1838; // [rsp+50h] [rbp-948h]
  int v1839; // [rsp+50h] [rbp-948h]
  int v1840; // [rsp+50h] [rbp-948h]
  int v1841; // [rsp+50h] [rbp-948h]
  int v1842; // [rsp+50h] [rbp-948h]
  _QWORD *v1843; // [rsp+50h] [rbp-948h]
  int v1844; // [rsp+50h] [rbp-948h]
  int v1845; // [rsp+50h] [rbp-948h]
  __int64 v1846; // [rsp+50h] [rbp-948h]
  int v1847; // [rsp+50h] [rbp-948h]
  int v1848; // [rsp+50h] [rbp-948h]
  int v1849; // [rsp+50h] [rbp-948h]
  int v1850; // [rsp+50h] [rbp-948h]
  int v1851; // [rsp+50h] [rbp-948h]
  int v1852; // [rsp+50h] [rbp-948h]
  int v1853; // [rsp+50h] [rbp-948h]
  int v1854; // [rsp+50h] [rbp-948h]
  int v1855; // [rsp+50h] [rbp-948h]
  int v1856; // [rsp+50h] [rbp-948h]
  int v1857; // [rsp+50h] [rbp-948h]
  int v1858; // [rsp+50h] [rbp-948h]
  _QWORD *v1859; // [rsp+50h] [rbp-948h]
  int v1860; // [rsp+50h] [rbp-948h]
  int v1861; // [rsp+50h] [rbp-948h]
  int v1862; // [rsp+50h] [rbp-948h]
  int v1863; // [rsp+50h] [rbp-948h]
  int v1864; // [rsp+50h] [rbp-948h]
  int v1865; // [rsp+50h] [rbp-948h]
  int v1866; // [rsp+50h] [rbp-948h]
  int v1867; // [rsp+50h] [rbp-948h]
  int v1868; // [rsp+50h] [rbp-948h]
  int v1869; // [rsp+50h] [rbp-948h]
  int v1870; // [rsp+50h] [rbp-948h]
  int v1871; // [rsp+50h] [rbp-948h]
  int v1872; // [rsp+50h] [rbp-948h]
  int v1873; // [rsp+50h] [rbp-948h]
  int v1874; // [rsp+50h] [rbp-948h]
  int v1875; // [rsp+50h] [rbp-948h]
  int v1876; // [rsp+50h] [rbp-948h]
  int v1877; // [rsp+50h] [rbp-948h]
  int v1878; // [rsp+50h] [rbp-948h]
  int v1879; // [rsp+50h] [rbp-948h]
  int v1880; // [rsp+50h] [rbp-948h]
  int v1881; // [rsp+50h] [rbp-948h]
  int v1882; // [rsp+50h] [rbp-948h]
  int v1883; // [rsp+50h] [rbp-948h]
  int v1884; // [rsp+50h] [rbp-948h]
  int v1885; // [rsp+50h] [rbp-948h]
  int v1886; // [rsp+50h] [rbp-948h]
  int v1887; // [rsp+50h] [rbp-948h]
  __int64 v1888; // [rsp+50h] [rbp-948h]
  int v1889; // [rsp+50h] [rbp-948h]
  int v1890; // [rsp+50h] [rbp-948h]
  int v1891; // [rsp+50h] [rbp-948h]
  int v1892; // [rsp+50h] [rbp-948h]
  int v1893; // [rsp+50h] [rbp-948h]
  int v1894; // [rsp+50h] [rbp-948h]
  int v1895; // [rsp+50h] [rbp-948h]
  int v1896; // [rsp+50h] [rbp-948h]
  int v1897; // [rsp+50h] [rbp-948h]
  int v1898; // [rsp+50h] [rbp-948h]
  int v1899; // [rsp+50h] [rbp-948h]
  int v1900; // [rsp+50h] [rbp-948h]
  int v1901; // [rsp+50h] [rbp-948h]
  int v1902; // [rsp+50h] [rbp-948h]
  int v1903; // [rsp+50h] [rbp-948h]
  int v1904; // [rsp+50h] [rbp-948h]
  int v1905; // [rsp+50h] [rbp-948h]
  int v1906; // [rsp+50h] [rbp-948h]
  int v1907; // [rsp+50h] [rbp-948h]
  int v1908; // [rsp+50h] [rbp-948h]
  __int64 v1909; // [rsp+50h] [rbp-948h]
  int v1910; // [rsp+50h] [rbp-948h]
  int v1911; // [rsp+50h] [rbp-948h]
  int v1912; // [rsp+50h] [rbp-948h]
  int v1913; // [rsp+50h] [rbp-948h]
  int v1914; // [rsp+50h] [rbp-948h]
  int v1915; // [rsp+50h] [rbp-948h]
  int v1916; // [rsp+50h] [rbp-948h]
  int v1917; // [rsp+50h] [rbp-948h]
  int v1918; // [rsp+50h] [rbp-948h]
  int v1919; // [rsp+50h] [rbp-948h]
  int v1920; // [rsp+50h] [rbp-948h]
  int v1921; // [rsp+50h] [rbp-948h]
  _QWORD *v1922; // [rsp+50h] [rbp-948h]
  int v1923; // [rsp+50h] [rbp-948h]
  int v1924; // [rsp+50h] [rbp-948h]
  int v1925; // [rsp+50h] [rbp-948h]
  int v1926; // [rsp+50h] [rbp-948h]
  int v1927; // [rsp+50h] [rbp-948h]
  int v1928; // [rsp+50h] [rbp-948h]
  int v1929; // [rsp+50h] [rbp-948h]
  int v1930; // [rsp+50h] [rbp-948h]
  int v1931; // [rsp+50h] [rbp-948h]
  int v1932; // [rsp+50h] [rbp-948h]
  int v1933; // [rsp+50h] [rbp-948h]
  int v1934; // [rsp+50h] [rbp-948h]
  char v1935; // [rsp+58h] [rbp-940h]
  char v1936; // [rsp+58h] [rbp-940h]
  char v1937; // [rsp+58h] [rbp-940h]
  char v1938; // [rsp+58h] [rbp-940h]
  char v1939; // [rsp+58h] [rbp-940h]
  char v1940; // [rsp+58h] [rbp-940h]
  char v1941; // [rsp+58h] [rbp-940h]
  char v1942; // [rsp+58h] [rbp-940h]
  char v1943; // [rsp+58h] [rbp-940h]
  char v1944; // [rsp+58h] [rbp-940h]
  char v1945; // [rsp+58h] [rbp-940h]
  char v1946; // [rsp+58h] [rbp-940h]
  char v1947; // [rsp+58h] [rbp-940h]
  char v1948; // [rsp+58h] [rbp-940h]
  char v1949; // [rsp+58h] [rbp-940h]
  char v1950; // [rsp+58h] [rbp-940h]
  char v1951; // [rsp+58h] [rbp-940h]
  char v1952; // [rsp+58h] [rbp-940h]
  char v1953; // [rsp+58h] [rbp-940h]
  char v1954; // [rsp+58h] [rbp-940h]
  char v1955; // [rsp+58h] [rbp-940h]
  char v1956; // [rsp+58h] [rbp-940h]
  char v1957; // [rsp+58h] [rbp-940h]
  char v1958; // [rsp+58h] [rbp-940h]
  char v1959; // [rsp+58h] [rbp-940h]
  char v1960; // [rsp+58h] [rbp-940h]
  char v1961; // [rsp+58h] [rbp-940h]
  char v1962; // [rsp+58h] [rbp-940h]
  char v1963; // [rsp+58h] [rbp-940h]
  char v1964; // [rsp+58h] [rbp-940h]
  char v1965; // [rsp+58h] [rbp-940h]
  char v1966; // [rsp+58h] [rbp-940h]
  char v1967; // [rsp+58h] [rbp-940h]
  char v1968; // [rsp+58h] [rbp-940h]
  char v1969; // [rsp+58h] [rbp-940h]
  char v1970; // [rsp+58h] [rbp-940h]
  char v1971; // [rsp+58h] [rbp-940h]
  char v1972; // [rsp+58h] [rbp-940h]
  char v1973; // [rsp+58h] [rbp-940h]
  char v1974; // [rsp+58h] [rbp-940h]
  char v1975; // [rsp+58h] [rbp-940h]
  char v1976; // [rsp+58h] [rbp-940h]
  char v1977; // [rsp+58h] [rbp-940h]
  char v1978; // [rsp+58h] [rbp-940h]
  char v1979; // [rsp+58h] [rbp-940h]
  char v1980; // [rsp+58h] [rbp-940h]
  char v1981; // [rsp+58h] [rbp-940h]
  char v1982; // [rsp+58h] [rbp-940h]
  char v1983; // [rsp+58h] [rbp-940h]
  char v1984; // [rsp+58h] [rbp-940h]
  char v1985; // [rsp+58h] [rbp-940h]
  char v1986; // [rsp+58h] [rbp-940h]
  char v1987; // [rsp+58h] [rbp-940h]
  char v1988; // [rsp+58h] [rbp-940h]
  char v1989; // [rsp+58h] [rbp-940h]
  char v1990; // [rsp+58h] [rbp-940h]
  char v1991; // [rsp+58h] [rbp-940h]
  char v1992; // [rsp+58h] [rbp-940h]
  char v1993; // [rsp+58h] [rbp-940h]
  char v1994; // [rsp+58h] [rbp-940h]
  char v1995; // [rsp+58h] [rbp-940h]
  char v1996; // [rsp+58h] [rbp-940h]
  char v1997; // [rsp+58h] [rbp-940h]
  char v1998; // [rsp+58h] [rbp-940h]
  char v1999; // [rsp+58h] [rbp-940h]
  char v2000; // [rsp+58h] [rbp-940h]
  char v2001; // [rsp+58h] [rbp-940h]
  char v2002; // [rsp+58h] [rbp-940h]
  char v2003; // [rsp+58h] [rbp-940h]
  char v2004; // [rsp+58h] [rbp-940h]
  char v2005; // [rsp+58h] [rbp-940h]
  char v2006; // [rsp+58h] [rbp-940h]
  char v2007; // [rsp+58h] [rbp-940h]
  char v2008; // [rsp+58h] [rbp-940h]
  char v2009; // [rsp+58h] [rbp-940h]
  char v2010; // [rsp+58h] [rbp-940h]
  char v2011; // [rsp+58h] [rbp-940h]
  char v2012; // [rsp+58h] [rbp-940h]
  char v2013; // [rsp+58h] [rbp-940h]
  char v2014; // [rsp+58h] [rbp-940h]
  char v2015; // [rsp+58h] [rbp-940h]
  char v2016; // [rsp+58h] [rbp-940h]
  char v2017; // [rsp+58h] [rbp-940h]
  char v2018; // [rsp+58h] [rbp-940h]
  char v2019; // [rsp+58h] [rbp-940h]
  char v2020; // [rsp+58h] [rbp-940h]
  char v2021; // [rsp+58h] [rbp-940h]
  char v2022; // [rsp+58h] [rbp-940h]
  char v2023; // [rsp+58h] [rbp-940h]
  char v2024; // [rsp+58h] [rbp-940h]
  char v2025; // [rsp+58h] [rbp-940h]
  char v2026; // [rsp+58h] [rbp-940h]
  char v2027; // [rsp+58h] [rbp-940h]
  char v2028; // [rsp+58h] [rbp-940h]
  char v2029; // [rsp+58h] [rbp-940h]
  char v2030; // [rsp+58h] [rbp-940h]
  char v2031; // [rsp+58h] [rbp-940h]
  char v2032; // [rsp+58h] [rbp-940h]
  char v2033; // [rsp+58h] [rbp-940h]
  char v2034; // [rsp+58h] [rbp-940h]
  char v2035; // [rsp+58h] [rbp-940h]
  __int64 v2036; // [rsp+60h] [rbp-938h]
  __int64 v2037; // [rsp+60h] [rbp-938h]
  __int64 v2038; // [rsp+60h] [rbp-938h]
  __int64 v2039; // [rsp+60h] [rbp-938h]
  __int64 v2040; // [rsp+60h] [rbp-938h]
  __int64 v2041; // [rsp+60h] [rbp-938h]
  __int64 v2042; // [rsp+60h] [rbp-938h]
  __int64 v2043; // [rsp+60h] [rbp-938h]
  __int64 v2044; // [rsp+60h] [rbp-938h]
  __int64 v2045; // [rsp+60h] [rbp-938h]
  __int64 v2046; // [rsp+60h] [rbp-938h]
  __int64 v2047; // [rsp+60h] [rbp-938h]
  __int64 v2048; // [rsp+60h] [rbp-938h]
  __int64 v2049; // [rsp+60h] [rbp-938h]
  __int64 v2050; // [rsp+60h] [rbp-938h]
  __int64 v2051; // [rsp+60h] [rbp-938h]
  __int64 v2052; // [rsp+60h] [rbp-938h]
  __int64 v2053; // [rsp+60h] [rbp-938h]
  __int64 v2054; // [rsp+60h] [rbp-938h]
  __int64 v2055; // [rsp+60h] [rbp-938h]
  __int64 v2056; // [rsp+60h] [rbp-938h]
  __int64 v2057; // [rsp+60h] [rbp-938h]
  __int64 v2058; // [rsp+60h] [rbp-938h]
  __int64 v2059; // [rsp+60h] [rbp-938h]
  _QWORD *v2060; // [rsp+60h] [rbp-938h]
  __int64 v2061; // [rsp+60h] [rbp-938h]
  __int64 v2062; // [rsp+60h] [rbp-938h]
  __int64 v2063; // [rsp+60h] [rbp-938h]
  __int64 v2064; // [rsp+60h] [rbp-938h]
  __int64 v2065; // [rsp+60h] [rbp-938h]
  __int64 v2066; // [rsp+60h] [rbp-938h]
  __int64 v2067; // [rsp+60h] [rbp-938h]
  __int64 v2068; // [rsp+60h] [rbp-938h]
  __int64 v2069; // [rsp+60h] [rbp-938h]
  __int64 v2070; // [rsp+60h] [rbp-938h]
  __int64 v2071; // [rsp+60h] [rbp-938h]
  __int64 v2072; // [rsp+60h] [rbp-938h]
  _QWORD *v2073; // [rsp+60h] [rbp-938h]
  __int64 v2074; // [rsp+60h] [rbp-938h]
  __int64 v2075; // [rsp+60h] [rbp-938h]
  __int64 v2076; // [rsp+60h] [rbp-938h]
  __int64 v2077; // [rsp+60h] [rbp-938h]
  __int64 v2078; // [rsp+60h] [rbp-938h]
  __int64 v2079; // [rsp+60h] [rbp-938h]
  __int64 v2080; // [rsp+60h] [rbp-938h]
  __int64 v2081; // [rsp+60h] [rbp-938h]
  __int64 v2082; // [rsp+60h] [rbp-938h]
  __int64 v2083; // [rsp+60h] [rbp-938h]
  __int64 v2084; // [rsp+60h] [rbp-938h]
  __int64 v2085; // [rsp+60h] [rbp-938h]
  __int64 v2086; // [rsp+60h] [rbp-938h]
  __int64 v2087; // [rsp+60h] [rbp-938h]
  __int64 v2088; // [rsp+60h] [rbp-938h]
  __int64 v2089; // [rsp+60h] [rbp-938h]
  __int64 v2090; // [rsp+60h] [rbp-938h]
  __int64 v2091; // [rsp+60h] [rbp-938h]
  __int64 v2092; // [rsp+60h] [rbp-938h]
  __int64 v2093; // [rsp+60h] [rbp-938h]
  __int64 v2094; // [rsp+60h] [rbp-938h]
  __int64 v2095; // [rsp+60h] [rbp-938h]
  __int64 v2096; // [rsp+60h] [rbp-938h]
  __int64 v2097; // [rsp+60h] [rbp-938h]
  __int64 v2098; // [rsp+60h] [rbp-938h]
  __int64 v2099; // [rsp+60h] [rbp-938h]
  __int64 v2100; // [rsp+60h] [rbp-938h]
  __int64 v2101; // [rsp+60h] [rbp-938h]
  _QWORD *v2102; // [rsp+60h] [rbp-938h]
  __int64 v2103; // [rsp+60h] [rbp-938h]
  __int64 v2104; // [rsp+60h] [rbp-938h]
  __int64 v2105; // [rsp+60h] [rbp-938h]
  __int64 v2106; // [rsp+60h] [rbp-938h]
  __int64 v2107; // [rsp+60h] [rbp-938h]
  __int64 v2108; // [rsp+60h] [rbp-938h]
  __int64 v2109; // [rsp+60h] [rbp-938h]
  __int64 v2110; // [rsp+60h] [rbp-938h]
  __int64 v2111; // [rsp+60h] [rbp-938h]
  __int64 v2112; // [rsp+60h] [rbp-938h]
  __int64 v2113; // [rsp+60h] [rbp-938h]
  __int64 v2114; // [rsp+60h] [rbp-938h]
  __int64 v2115; // [rsp+60h] [rbp-938h]
  __int64 v2116; // [rsp+60h] [rbp-938h]
  __int64 v2117; // [rsp+60h] [rbp-938h]
  __int64 v2118; // [rsp+60h] [rbp-938h]
  __int64 v2119; // [rsp+60h] [rbp-938h]
  __int64 v2120; // [rsp+60h] [rbp-938h]
  __int64 v2121; // [rsp+60h] [rbp-938h]
  __int64 v2122; // [rsp+60h] [rbp-938h]
  _QWORD *v2123; // [rsp+60h] [rbp-938h]
  __int64 v2124; // [rsp+60h] [rbp-938h]
  __int64 v2125; // [rsp+60h] [rbp-938h]
  __int64 v2126; // [rsp+60h] [rbp-938h]
  __int64 v2127; // [rsp+60h] [rbp-938h]
  __int64 v2128; // [rsp+60h] [rbp-938h]
  __int64 v2129; // [rsp+60h] [rbp-938h]
  __int64 v2130; // [rsp+60h] [rbp-938h]
  __int64 v2131; // [rsp+60h] [rbp-938h]
  __int64 v2132; // [rsp+60h] [rbp-938h]
  __int64 v2133; // [rsp+60h] [rbp-938h]
  __int64 v2134; // [rsp+60h] [rbp-938h]
  __int64 v2135; // [rsp+60h] [rbp-938h]
  _QWORD *v2136; // [rsp+60h] [rbp-938h]
  __int64 v2137; // [rsp+60h] [rbp-938h]
  int v2138; // [rsp+68h] [rbp-930h]
  int v2139; // [rsp+68h] [rbp-930h]
  int v2140; // [rsp+68h] [rbp-930h]
  int v2141; // [rsp+68h] [rbp-930h]
  int v2142; // [rsp+68h] [rbp-930h]
  int v2143; // [rsp+68h] [rbp-930h]
  int v2144; // [rsp+68h] [rbp-930h]
  int v2145; // [rsp+68h] [rbp-930h]
  int v2146; // [rsp+68h] [rbp-930h]
  int v2147; // [rsp+68h] [rbp-930h]
  int v2148; // [rsp+68h] [rbp-930h]
  int v2149; // [rsp+68h] [rbp-930h]
  int v2150; // [rsp+68h] [rbp-930h]
  int v2151; // [rsp+68h] [rbp-930h]
  int v2152; // [rsp+68h] [rbp-930h]
  int v2153; // [rsp+68h] [rbp-930h]
  int v2154; // [rsp+68h] [rbp-930h]
  int v2155; // [rsp+68h] [rbp-930h]
  int v2156; // [rsp+68h] [rbp-930h]
  int v2157; // [rsp+68h] [rbp-930h]
  int v2158; // [rsp+68h] [rbp-930h]
  int v2159; // [rsp+68h] [rbp-930h]
  int v2160; // [rsp+68h] [rbp-930h]
  int v2161; // [rsp+68h] [rbp-930h]
  int v2162; // [rsp+68h] [rbp-930h]
  int v2163; // [rsp+68h] [rbp-930h]
  int v2164; // [rsp+68h] [rbp-930h]
  int v2165; // [rsp+68h] [rbp-930h]
  int v2166; // [rsp+68h] [rbp-930h]
  int v2167; // [rsp+68h] [rbp-930h]
  int v2168; // [rsp+68h] [rbp-930h]
  int v2169; // [rsp+68h] [rbp-930h]
  int v2170; // [rsp+68h] [rbp-930h]
  int v2171; // [rsp+68h] [rbp-930h]
  int v2172; // [rsp+68h] [rbp-930h]
  int v2173; // [rsp+68h] [rbp-930h]
  int v2174; // [rsp+68h] [rbp-930h]
  int v2175; // [rsp+68h] [rbp-930h]
  int v2176; // [rsp+68h] [rbp-930h]
  int v2177; // [rsp+68h] [rbp-930h]
  int v2178; // [rsp+68h] [rbp-930h]
  int v2179; // [rsp+68h] [rbp-930h]
  int v2180; // [rsp+68h] [rbp-930h]
  int v2181; // [rsp+68h] [rbp-930h]
  int v2182; // [rsp+68h] [rbp-930h]
  int v2183; // [rsp+68h] [rbp-930h]
  int v2184; // [rsp+68h] [rbp-930h]
  int v2185; // [rsp+68h] [rbp-930h]
  int v2186; // [rsp+68h] [rbp-930h]
  int v2187; // [rsp+68h] [rbp-930h]
  int v2188; // [rsp+68h] [rbp-930h]
  int v2189; // [rsp+68h] [rbp-930h]
  int v2190; // [rsp+68h] [rbp-930h]
  int v2191; // [rsp+68h] [rbp-930h]
  int v2192; // [rsp+68h] [rbp-930h]
  int v2193; // [rsp+68h] [rbp-930h]
  int v2194; // [rsp+68h] [rbp-930h]
  int v2195; // [rsp+68h] [rbp-930h]
  int v2196; // [rsp+68h] [rbp-930h]
  int v2197; // [rsp+68h] [rbp-930h]
  int v2198; // [rsp+68h] [rbp-930h]
  int v2199; // [rsp+68h] [rbp-930h]
  int v2200; // [rsp+68h] [rbp-930h]
  int v2201; // [rsp+68h] [rbp-930h]
  int v2202; // [rsp+68h] [rbp-930h]
  int v2203; // [rsp+68h] [rbp-930h]
  int v2204; // [rsp+68h] [rbp-930h]
  int v2205; // [rsp+68h] [rbp-930h]
  int v2206; // [rsp+68h] [rbp-930h]
  int v2207; // [rsp+68h] [rbp-930h]
  int v2208; // [rsp+68h] [rbp-930h]
  int v2209; // [rsp+68h] [rbp-930h]
  int v2210; // [rsp+68h] [rbp-930h]
  int v2211; // [rsp+68h] [rbp-930h]
  int v2212; // [rsp+68h] [rbp-930h]
  int v2213; // [rsp+68h] [rbp-930h]
  int v2214; // [rsp+68h] [rbp-930h]
  int v2215; // [rsp+68h] [rbp-930h]
  int v2216; // [rsp+68h] [rbp-930h]
  int v2217; // [rsp+68h] [rbp-930h]
  int v2218; // [rsp+68h] [rbp-930h]
  int v2219; // [rsp+68h] [rbp-930h]
  int v2220; // [rsp+68h] [rbp-930h]
  int v2221; // [rsp+68h] [rbp-930h]
  int v2222; // [rsp+68h] [rbp-930h]
  int v2223; // [rsp+68h] [rbp-930h]
  int v2224; // [rsp+68h] [rbp-930h]
  int v2225; // [rsp+68h] [rbp-930h]
  int v2226; // [rsp+68h] [rbp-930h]
  int v2227; // [rsp+68h] [rbp-930h]
  int v2228; // [rsp+68h] [rbp-930h]
  int v2229; // [rsp+68h] [rbp-930h]
  int v2230; // [rsp+68h] [rbp-930h]
  int v2231; // [rsp+68h] [rbp-930h]
  int v2232; // [rsp+68h] [rbp-930h]
  int v2233; // [rsp+68h] [rbp-930h]
  int v2234; // [rsp+68h] [rbp-930h]
  int v2235; // [rsp+68h] [rbp-930h]
  int v2236; // [rsp+68h] [rbp-930h]
  int v2237; // [rsp+68h] [rbp-930h]
  int v2238; // [rsp+68h] [rbp-930h]
  __int64 v2239; // [rsp+70h] [rbp-928h]
  __int64 v2240; // [rsp+70h] [rbp-928h]
  __int64 v2241; // [rsp+70h] [rbp-928h]
  __int64 v2242; // [rsp+70h] [rbp-928h]
  __int64 v2243; // [rsp+70h] [rbp-928h]
  __int64 v2244; // [rsp+70h] [rbp-928h]
  __int64 v2245; // [rsp+70h] [rbp-928h]
  __int64 v2246; // [rsp+70h] [rbp-928h]
  __int64 v2247; // [rsp+70h] [rbp-928h]
  __int64 v2248; // [rsp+70h] [rbp-928h]
  __int64 v2249; // [rsp+70h] [rbp-928h]
  __int64 v2250; // [rsp+70h] [rbp-928h]
  __int64 v2251; // [rsp+70h] [rbp-928h]
  __int64 v2252; // [rsp+70h] [rbp-928h]
  __int64 v2253; // [rsp+70h] [rbp-928h]
  __int64 v2254; // [rsp+70h] [rbp-928h]
  __int64 v2255; // [rsp+70h] [rbp-928h]
  __int64 v2256; // [rsp+70h] [rbp-928h]
  __int64 v2257; // [rsp+70h] [rbp-928h]
  __int64 v2258; // [rsp+70h] [rbp-928h]
  __int64 v2259; // [rsp+70h] [rbp-928h]
  __int64 v2260; // [rsp+70h] [rbp-928h]
  __int64 v2261; // [rsp+70h] [rbp-928h]
  __int64 v2262; // [rsp+70h] [rbp-928h]
  __int64 v2263; // [rsp+70h] [rbp-928h]
  __int64 v2264; // [rsp+70h] [rbp-928h]
  __int64 v2265; // [rsp+70h] [rbp-928h]
  __int64 v2266; // [rsp+70h] [rbp-928h]
  __int64 v2267; // [rsp+70h] [rbp-928h]
  __int64 v2268; // [rsp+70h] [rbp-928h]
  __int64 v2269; // [rsp+70h] [rbp-928h]
  __int64 v2270; // [rsp+70h] [rbp-928h]
  __int64 v2271; // [rsp+70h] [rbp-928h]
  __int64 v2272; // [rsp+70h] [rbp-928h]
  __int64 v2273; // [rsp+70h] [rbp-928h]
  __int64 v2274; // [rsp+70h] [rbp-928h]
  __int64 v2275; // [rsp+70h] [rbp-928h]
  __int64 v2276; // [rsp+70h] [rbp-928h]
  __int64 v2277; // [rsp+70h] [rbp-928h]
  __int64 v2278; // [rsp+70h] [rbp-928h]
  __int64 v2279; // [rsp+70h] [rbp-928h]
  __int64 v2280; // [rsp+70h] [rbp-928h]
  __int64 v2281; // [rsp+70h] [rbp-928h]
  __int64 v2282; // [rsp+70h] [rbp-928h]
  __int64 v2283; // [rsp+70h] [rbp-928h]
  __int64 v2284; // [rsp+70h] [rbp-928h]
  __int64 v2285; // [rsp+70h] [rbp-928h]
  __int64 v2286; // [rsp+70h] [rbp-928h]
  __int64 v2287; // [rsp+70h] [rbp-928h]
  __int64 v2288; // [rsp+70h] [rbp-928h]
  __int64 v2289; // [rsp+70h] [rbp-928h]
  __int64 v2290; // [rsp+70h] [rbp-928h]
  __int64 v2291; // [rsp+70h] [rbp-928h]
  __int64 v2292; // [rsp+70h] [rbp-928h]
  __int64 v2293; // [rsp+70h] [rbp-928h]
  __int64 v2294; // [rsp+70h] [rbp-928h]
  __int64 v2295; // [rsp+70h] [rbp-928h]
  __int64 v2296; // [rsp+70h] [rbp-928h]
  __int64 v2297; // [rsp+70h] [rbp-928h]
  __int64 v2298; // [rsp+70h] [rbp-928h]
  __int64 v2299; // [rsp+70h] [rbp-928h]
  __int64 v2300; // [rsp+70h] [rbp-928h]
  __int64 v2301; // [rsp+70h] [rbp-928h]
  __int64 v2302; // [rsp+70h] [rbp-928h]
  __int64 v2303; // [rsp+70h] [rbp-928h]
  __int64 v2304; // [rsp+70h] [rbp-928h]
  __int64 v2305; // [rsp+70h] [rbp-928h]
  __int64 v2306; // [rsp+70h] [rbp-928h]
  __int64 v2307; // [rsp+70h] [rbp-928h]
  __int64 v2308; // [rsp+70h] [rbp-928h]
  __int64 v2309; // [rsp+70h] [rbp-928h]
  __int64 v2310; // [rsp+70h] [rbp-928h]
  __int64 v2311; // [rsp+70h] [rbp-928h]
  __int64 v2312; // [rsp+70h] [rbp-928h]
  __int64 v2313; // [rsp+70h] [rbp-928h]
  __int64 v2314; // [rsp+70h] [rbp-928h]
  __int64 v2315; // [rsp+70h] [rbp-928h]
  __int64 v2316; // [rsp+70h] [rbp-928h]
  __int64 v2317; // [rsp+70h] [rbp-928h]
  __int64 v2318; // [rsp+70h] [rbp-928h]
  __int64 v2319; // [rsp+70h] [rbp-928h]
  __int64 v2320; // [rsp+70h] [rbp-928h]
  __int64 v2321; // [rsp+70h] [rbp-928h]
  __int64 v2322; // [rsp+70h] [rbp-928h]
  __int64 v2323; // [rsp+70h] [rbp-928h]
  __int64 v2324; // [rsp+70h] [rbp-928h]
  __int64 v2325; // [rsp+70h] [rbp-928h]
  __int64 v2326; // [rsp+70h] [rbp-928h]
  __int64 v2327; // [rsp+70h] [rbp-928h]
  __int64 v2328; // [rsp+70h] [rbp-928h]
  __int64 v2329; // [rsp+70h] [rbp-928h]
  __int64 v2330; // [rsp+70h] [rbp-928h]
  __int64 v2331; // [rsp+70h] [rbp-928h]
  __int64 v2332; // [rsp+70h] [rbp-928h]
  __int64 v2333; // [rsp+70h] [rbp-928h]
  __int64 v2334; // [rsp+70h] [rbp-928h]
  __int64 v2335; // [rsp+70h] [rbp-928h]
  __int64 v2336; // [rsp+70h] [rbp-928h]
  __int64 v2337; // [rsp+70h] [rbp-928h]
  __int64 v2338; // [rsp+70h] [rbp-928h]
  __int64 v2339; // [rsp+70h] [rbp-928h]
  char v2340; // [rsp+2BFh] [rbp-6D9h]
  ida_mcp::tools::xref_manipulation *v2341; // [rsp+2F8h] [rbp-6A0h] BYREF
  __int64 v2342; // [rsp+300h] [rbp-698h] BYREF
  __int64 v2343; // [rsp+310h] [rbp-688h] BYREF
  __m128i v2344; // [rsp+320h] [rbp-678h] BYREF
  char v2345; // [rsp+330h] [rbp-668h]
  __int128 v2346; // [rsp+338h] [rbp-660h]
  char v2347; // [rsp+348h] [rbp-650h]
  __int128 v2348; // [rsp+350h] [rbp-648h]
  _QWORD v2349[3]; // [rsp+360h] [rbp-638h] BYREF
  char v2350; // [rsp+378h] [rbp-620h]
  __int128 v2351; // [rsp+380h] [rbp-618h]
  _QWORD v2352[3]; // [rsp+390h] [rbp-608h] BYREF
  _QWORD v2353[3]; // [rsp+3A8h] [rbp-5F0h] BYREF
  _QWORD v2354[3]; // [rsp+3C0h] [rbp-5D8h] BYREF
  char v2355; // [rsp+3D8h] [rbp-5C0h]
  __int128 v2356; // [rsp+3E0h] [rbp-5B8h]
  _QWORD v2357[3]; // [rsp+3F0h] [rbp-5A8h] BYREF
  _QWORD v2358[3]; // [rsp+408h] [rbp-590h] BYREF
  char v2359[8]; // [rsp+420h] [rbp-578h] BYREF
  __int128 v2360; // [rsp+428h] [rbp-570h]
  _QWORD v2361[3]; // [rsp+438h] [rbp-560h] BYREF
  _QWORD v2362[3]; // [rsp+450h] [rbp-548h] BYREF
  _QWORD v2363[3]; // [rsp+468h] [rbp-530h] BYREF
  _QWORD v2364[3]; // [rsp+480h] [rbp-518h] BYREF
  char v2365; // [rsp+498h] [rbp-500h]
  __int128 v2366; // [rsp+4A0h] [rbp-4F8h]
  __int64 v2367; // [rsp+4B0h] [rbp-4E8h] BYREF
  __int64 v2368; // [rsp+4C0h] [rbp-4D8h]
  __int64 v2369; // [rsp+4C8h] [rbp-4D0h] BYREF
  __int64 v2370; // [rsp+4D8h] [rbp-4C0h]
  __int64 v2371; // [rsp+4E0h] [rbp-4B8h] BYREF
  __int128 v2372; // [rsp+4E8h] [rbp-4B0h]
  __int64 v2373; // [rsp+4F8h] [rbp-4A0h] BYREF
  __int128 v2374; // [rsp+500h] [rbp-498h]
  __int64 v2375; // [rsp+510h] [rbp-488h] BYREF
  __int64 v2376; // [rsp+520h] [rbp-478h]
  __int64 v2377; // [rsp+528h] [rbp-470h] BYREF
  __int64 v2378; // [rsp+538h] [rbp-460h]
  __int64 v2379; // [rsp+540h] [rbp-458h] BYREF
  __int64 v2380; // [rsp+550h] [rbp-448h]
  char v2381; // [rsp+558h] [rbp-440h]
  __int128 v2382; // [rsp+560h] [rbp-438h]
  __m128i v2383; // [rsp+570h] [rbp-428h] BYREF
  __int64 v2384; // [rsp+580h] [rbp-418h]
  __int64 v2385; // [rsp+588h] [rbp-410h] BYREF
  __int128 v2386; // [rsp+590h] [rbp-408h]
  __m128i v2387; // [rsp+5A0h] [rbp-3F8h] BYREF
  __int64 v2388; // [rsp+5B0h] [rbp-3E8h]
  __int64 v2389; // [rsp+5B8h] [rbp-3E0h] BYREF
  __int128 v2390; // [rsp+5C0h] [rbp-3D8h]
  __m128i v2391; // [rsp+5D0h] [rbp-3C8h] BYREF
  __int64 v2392; // [rsp+5E0h] [rbp-3B8h]
  __int64 v2393; // [rsp+5E8h] [rbp-3B0h] BYREF
  __int64 v2394; // [rsp+5F8h] [rbp-3A0h]
  __m128i v2395; // [rsp+600h] [rbp-398h] BYREF
  __int64 v2396; // [rsp+610h] [rbp-388h]
  char v2397; // [rsp+618h] [rbp-380h]
  __int128 v2398; // [rsp+620h] [rbp-378h]
  __m128i v2399; // [rsp+630h] [rbp-368h] BYREF
  __int64 v2400; // [rsp+640h] [rbp-358h]
  __int64 v2401; // [rsp+648h] [rbp-350h] BYREF
  __int64 v2402; // [rsp+658h] [rbp-340h]
  char v2403; // [rsp+660h] [rbp-338h] BYREF
  __int128 v2404; // [rsp+668h] [rbp-330h]
  __int64 v2405; // [rsp+678h] [rbp-320h] BYREF
  __int128 v2406; // [rsp+680h] [rbp-318h]
  __m128i v2407; // [rsp+690h] [rbp-308h] BYREF
  __int64 v2408; // [rsp+6A0h] [rbp-2F8h]
  __int64 v2409; // [rsp+6A8h] [rbp-2F0h] BYREF
  __int64 v2410; // [rsp+6B8h] [rbp-2E0h]
  __m128i v2411; // [rsp+6C0h] [rbp-2D8h] BYREF
  __int64 v2412; // [rsp+6D0h] [rbp-2C8h]
  char v2413; // [rsp+6D8h] [rbp-2C0h]
  __int128 v2414; // [rsp+6E0h] [rbp-2B8h] BYREF
  __m128i v2415; // [rsp+6F0h] [rbp-2A8h] BYREF
  __int64 v2416; // [rsp+700h] [rbp-298h]
  __int64 v2417; // [rsp+708h] [rbp-290h] BYREF
  __int64 v2418; // [rsp+718h] [rbp-280h]
  __int64 v2419; // [rsp+720h] [rbp-278h] BYREF
  __int128 v2420; // [rsp+728h] [rbp-270h] BYREF
  __int64 v2421; // [rsp+738h] [rbp-260h] BYREF
  __int64 v2422; // [rsp+748h] [rbp-250h]
  __m128i v2423; // [rsp+750h] [rbp-248h] BYREF
  __int64 v2424; // [rsp+760h] [rbp-238h]
  __int64 v2425; // [rsp+768h] [rbp-230h] BYREF
  __int128 v2426; // [rsp+770h] [rbp-228h] BYREF
  __m128i v2427; // [rsp+780h] [rbp-218h] BYREF
  __int64 v2428; // [rsp+790h] [rbp-208h]
  char v2429; // [rsp+798h] [rbp-200h]
  __int128 v2430; // [rsp+7A0h] [rbp-1F8h] BYREF
  __int64 v2431; // [rsp+7B0h] [rbp-1E8h] BYREF
  __int64 v2432; // [rsp+7C0h] [rbp-1D8h]
  __int64 v2433; // [rsp+7C8h] [rbp-1D0h] BYREF
  __int64 v2434; // [rsp+7D8h] [rbp-1C0h]
  __int64 v2435; // [rsp+7E0h] [rbp-1B8h] BYREF
  __int128 v2436; // [rsp+7E8h] [rbp-1B0h]
  __int64 v2437; // [rsp+7F8h] [rbp-1A0h] BYREF
  __int64 v2438; // [rsp+808h] [rbp-190h]
  __int64 v2439; // [rsp+810h] [rbp-188h] BYREF
  __int128 v2440; // [rsp+818h] [rbp-180h] BYREF
  __int64 v2441; // [rsp+828h] [rbp-170h] BYREF
  __int64 v2442; // [rsp+838h] [rbp-160h]
  char v2443; // [rsp+840h] [rbp-158h] BYREF
  __int128 v2444; // [rsp+848h] [rbp-150h] BYREF
  __m128i v2445; // [rsp+858h] [rbp-140h] BYREF
  __int64 v2446; // [rsp+868h] [rbp-130h]
  __int64 v2447; // [rsp+870h] [rbp-128h] BYREF
  __int128 v2448; // [rsp+878h] [rbp-120h]
  __m128i v2449; // [rsp+888h] [rbp-110h] BYREF
  __int64 v2450; // [rsp+898h] [rbp-100h]
  __int64 v2451; // [rsp+8A0h] [rbp-F8h] BYREF
  __int64 v2452; // [rsp+8A8h] [rbp-F0h] BYREF
  __int64 v2453; // [rsp+8B0h] [rbp-E8h]
  char v2454; // [rsp+8B8h] [rbp-E0h] BYREF
  _QWORD v2455[2]; // [rsp+8C0h] [rbp-D8h] BYREF
  __int64 v2456; // [rsp+8D0h] [rbp-C8h]
  _QWORD v2457[2]; // [rsp+8D8h] [rbp-C0h] BYREF
  __int64 v2458; // [rsp+8E8h] [rbp-B0h]
  _QWORD v2459[2]; // [rsp+8F0h] [rbp-A8h] BYREF
  __int64 v2460; // [rsp+900h] [rbp-98h]
  _QWORD v2461[2]; // [rsp+908h] [rbp-90h] BYREF
  __int64 v2462; // [rsp+918h] [rbp-80h]
  _QWORD v2463[3]; // [rsp+920h] [rbp-78h] BYREF
  _QWORD v2464[4]; // [rsp+938h] [rbp-60h] BYREF
  unsigned __int64 v2465; // [rsp+958h] [rbp-40h]

  v2465 = __readfsqword(0x28u);
  v2341 = this;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2387);
  v2388 = 0;
  LOBYTE(v2389) = 0;
  *(_QWORD *)&v2390 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2389) = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "object", v3, v4, v5, v6, v637, v801, v964);
  v2390 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2455,
    &v2387,
    2,
    1);
  v2456 = 0;
  LOBYTE(v2439) = 0;
  *(_QWORD *)&v2440 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2439) = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "properties", v8, v9, v10, v11, v638, v802, v965);
  v2440 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
  *((_QWORD *)&v2404 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2391);
  v2392 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2393);
  v2394 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2399,
    &v2391,
    2,
    1);
  v2400 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2395);
  v2396 = 0;
  v2397 = 0;
  *(_QWORD *)&v2398 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2397 = 3;
  v12 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v12, "Source hex address", v13, v14, v15, v16, v639, v803, v966);
  v2398 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2401,
    &v2395,
    2,
    1);
  v2402 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2405,
    &v2399,
    2,
    1);
  *((_QWORD *)&v2406 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2447,
    (const __m128i *)&v2403,
    2,
    1);
  *((_QWORD *)&v2448 + 1) = 0;
  LOBYTE(v2419) = 0;
  *(_QWORD *)&v2420 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2419) = 3;
  v17 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v17, "to", v18, v19, v20, v21, v640, v804, v967);
  v2420 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2407);
  v2408 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2409);
  v2410 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2415,
    &v2407,
    2,
    1);
  v2416 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2411);
  v2412 = 0;
  v2413 = 0;
  *(_QWORD *)&v2414 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2413 = 3;
  v22 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v22,
    "Target hex address",
    v23,
    v24,
    v25,
    v26,
    v641,
    v805,
    (__int64)&v2407);
  v2414 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2417,
    &v2411,
    2,
    1);
  v2418 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2421,
    &v2415,
    2,
    1);
  v2422 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2449,
    (const __m128i *)&v2419,
    2,
    1);
  v2450 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2435);
  *((_QWORD *)&v2436 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2423);
  v2424 = 0;
  LOBYTE(v2425) = 0;
  *(_QWORD *)&v2426 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2425) = 3;
  v27 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v27, "integer", v28, v29, v30, v31, v642, v806, v968);
  v2426 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2431,
    &v2423,
    2,
    1);
  v2432 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2427);
  v2428 = 0;
  v2429 = 0;
  *(_QWORD *)&v2430 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2429 = 3;
  v32 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v32,
    "Xref type (optional)",
    v33,
    v34,
    v35,
    v36,
    v643,
    (int)&v2431,
    v969);
  v2430 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2433,
    &v2427,
    2,
    1);
  v2434 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2437,
    v807,
    2,
    1);
  v2438 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2451,
    (const __m128i *)&v2435,
    2,
    1);
  v2453 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2441,
    (__int64)&v2447,
    3,
    v37,
    v38,
    v39,
    v644,
    (__int64)v807,
    v970,
    (int)&v2411,
    (int)&v2414,
    (int)&v2423,
    (__int64)&v2427,
    (int)&v2430,
    v1632,
    (int)&v2399,
    (int)&v2403,
    (char)&v2426,
    v2036,
    (int)&v2420,
    (__int64)&v2440);
  v2442 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2457,
    (const __m128i *)&v2439,
    2,
    1);
  v2458 = 0;
  v2443 = 0;
  *(_QWORD *)&v2444 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2443 = 3;
  v40 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v40, "required", v41, v42, v43, v44, v645, v808, v971);
  v2444 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
  v2384 = 0;
  LOBYTE(v2385) = 0;
  *(_QWORD *)&v2386 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2385) = 3;
  v45 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v45, "to", v46, v47, v48, v49, v646, v809, v972);
  v2386 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2344,
    &v2383,
    2,
    0);
  v50 = _mm_load_si128(&v2344);
  v2446 = 0;
  v2445 = v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2459,
    (const __m128i *)&v2443,
    2,
    1);
  v2460 = 0;
  LOBYTE(v2342) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2342,
    (__int64)v2455,
    3,
    v51,
    v52,
    v53,
    v647,
    v810,
    v973,
    v1127,
    v1228,
    v1329,
    v1430,
    v1531,
    (int)&v2444,
    v1733,
    v1834,
    v1935,
    v2037,
    v2138,
    v2239);
  v2340 = v2342;
  v54 = v2461;
  do
  {
    v54 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v54 != v2455 );
  v55 = (__int64 *)&v2454;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v55 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v55 != &v2447 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO_(
    (__int64)&v2341,
    "add_code_xref",
    "Add a code cross-reference between two addresses",
    (__int64)&v2342,
    (__int64)ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_add_cref);
  ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO_(
    (__int64)&v2341,
    "add_data_xref",
    "Add a data cross-reference between two addresses",
    (__int64)&v2342,
    (__int64)ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_add_dref);
  ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO_(
    (__int64)&v2341,
    "del_code_xref",
    "Delete a code cross-reference",
    (__int64)&v2342,
    (__int64)ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_del_cref);
  ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO_(
    (__int64)&v2341,
    "del_data_xref",
    "Delete a data cross-reference",
    (__int64)&v2342,
    (__int64)ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_del_dref);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1835);
  *((_QWORD *)&v2404 + 1) = 0;
  LOBYTE(v2405) = 0;
  *(_QWORD *)&v2406 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2405) = 3;
  v56 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v56, "object", v57, v58, v59, v60, v648, v811, v974);
  v2406 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2455,
    v1835,
    2,
    1);
  v2456 = 0;
  v2443 = 0;
  *(_QWORD *)&v2444 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2443 = 3;
  v61 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v61, "properties", v62, v63, v64, v65, v649, v812, v975);
  v2444 = (unsigned __int64)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v2419);
  *((_QWORD *)&v2420 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v976);
  v2408 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2409);
  v2410 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2415,
    v976,
    2,
    1);
  v2416 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1128);
  v2412 = 0;
  v2413 = 0;
  *(_QWORD *)&v2414 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2413 = 3;
  v66 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v66,
    "Function start address",
    v67,
    v68,
    v69,
    v70,
    v650,
    v813,
    (__int64)v976);
  v2414 = (unsigned __int64)v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2417,
    v1128,
    2,
    1);
  v2418 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2421,
    &v2415,
    2,
    1);
  v2422 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2439,
    (const __m128i *)&v2419,
    2,
    1);
  *((_QWORD *)&v2440 + 1) = 0;
  LOBYTE(v2435) = 0;
  *(_QWORD *)&v2436 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2435) = 3;
  v71 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v71, "end", v72, v73, v74, v75, v651, v814, v977);
  v2436 = (unsigned __int64)v71;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1330);
  v2424 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2425);
  *((_QWORD *)&v2426 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v815,
    v1330,
    2,
    1);
  v2432 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1431);
  v2428 = 0;
  v2429 = 0;
  *(_QWORD *)&v2430 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2429 = 3;
  v76 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v76,
    "Function end address (auto-detect if omitted)",
    v77,
    v78,
    v79,
    v80,
    v652,
    (int)v815,
    v978);
  v2430 = (unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2433,
    (__int64)v1431,
    2,
    v81,
    v82,
    v83,
    v653,
    v816,
    v979,
    (int)v1128,
    v1229,
    (int)v1330,
    (__int64)v1431,
    v1532,
    v1633,
    v1734,
    (int)v1835,
    v1936,
    v2038,
    v2139,
    v2240);
  v2434 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2437,
    v817,
    2,
    v84,
    v85,
    v86,
    v654,
    v817,
    v980,
    v1129,
    v1230,
    v1331,
    v1432,
    v1533,
    v1634,
    v1735,
    v1836,
    v1937,
    v2039,
    v2140,
    v2241);
  v2438 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2441,
    (__int64)&v2435,
    2,
    v87,
    v88,
    v89,
    v655,
    v818,
    v981,
    v1130,
    v1231,
    v1332,
    v1433,
    v1534,
    v1635,
    v1736,
    v1837,
    v1938,
    v2040,
    v2141,
    v2242);
  v2442 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2445,
    (__int64)&v2439,
    2,
    v90,
    v91,
    v92,
    v656,
    v819,
    v982,
    v1131,
    v1232,
    v1333,
    v1434,
    v1535,
    v1636,
    v1737,
    v1838,
    v1939,
    v2041,
    v2142,
    v2243);
  v2446 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2457,
    (__int64)&v2443,
    2,
    v93,
    v94,
    v95,
    v657,
    v820,
    v983,
    v1132,
    v1233,
    v1334,
    v1435,
    v1536,
    v1637,
    v1738,
    v1839,
    v1940,
    v2042,
    v2143,
    v2244);
  v2458 = 0;
  LOBYTE(v2447) = 0;
  *(_QWORD *)&v2448 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2447) = 3;
  v96 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v96, "required", v97, v98, v99, v100, v658, v821, v984);
  v2448 = (unsigned __int64)v96;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1739);
  v2400 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v101 = _mm_load_si128(&v2344);
  v2450 = 0;
  v2449 = v101;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2459,
    (__int64)&v2447,
    2,
    v102,
    v103,
    v104,
    v659,
    v822,
    v985,
    v1133,
    v1234,
    v1335,
    v1436,
    v1537,
    v1638,
    (int)v1739,
    v1840,
    v1941,
    v2043,
    v2144,
    v2245);
  v2460 = 0;
  LOBYTE(v2343) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2343,
    (__int64)v2455,
    3,
    v105,
    v106,
    v107,
    v660,
    v823,
    v986,
    v1134,
    v1235,
    v1336,
    v1437,
    v1538,
    v1639,
    v1740,
    v1841,
    v1942,
    (__int64)&v2343,
    v2145,
    v2246);
  v108 = v2461;
  do
  {
    v108 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v108 != v2455 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO_(
    (__int64)&v2341,
    "create_function",
    "Create a new function at address",
    v2044,
    (__int64)ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_add_func);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  ida_mcp::tools::xref_manipulation::register_tools(ida_mcp::mcp::McpServer &)::{lambda(std::initializer_list<std::pair<char const*,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>)#1}::operator()(
    &v2344,
    nullptr,
    0);
  ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO_(
    (__int64)&v2341,
    "delete_function",
    "Delete a function",
    (__int64)&v2344,
    (__int64)ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_del_func);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2387);
  v2388 = 0;
  LOBYTE(v2389) = 0;
  *(_QWORD *)&v2390 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2389) = 3;
  v109 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v109, "object", v110, v111, v112, v113, v661, v824, v987);
  v2390 = (unsigned __int64)v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2455,
    (__int64)&v2387,
    2,
    v114,
    v115,
    v116,
    v662,
    v825,
    v988,
    v1135,
    v1236,
    v1337,
    v1438,
    v1539,
    v1640,
    v1741,
    v1842,
    v1943,
    v2044,
    v2146,
    v2247);
  v2456 = 0;
  LOBYTE(v2439) = 0;
  *(_QWORD *)&v2440 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2439) = 3;
  v117 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v117, "properties", v118, v119, v120, v121, v663, v826, v989);
  v2440 = (unsigned __int64)v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1843);
  *((_QWORD *)&v2404 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2391);
  v2392 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2393);
  v2394 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1742,
    (__int64)&v2391,
    2,
    v122,
    v123,
    v124,
    v664,
    v827,
    v990,
    v1136,
    v1237,
    v1338,
    v1439,
    v1540,
    v1641,
    (int)v1742,
    (int)v1843,
    v1944,
    v2045,
    v2147,
    v2248);
  v2400 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2395);
  v2396 = 0;
  v2397 = 0;
  *(_QWORD *)&v2398 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2397 = 3;
  v125 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v125,
    "Address within the function",
    v126,
    v127,
    v128,
    v129,
    v665,
    v828,
    v991);
  v2398 = (unsigned __int64)v125;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2401,
    (__int64)&v2395,
    2,
    v130,
    v131,
    v132,
    v666,
    v829,
    v992,
    v1137,
    v1238,
    v1339,
    v1440,
    v1541,
    v1642,
    v1743,
    v1844,
    v1945,
    v2046,
    v2148,
    v2249);
  v2402 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2405,
    v1744,
    2,
    v133,
    v134,
    v135,
    v667,
    v830,
    v993,
    v1138,
    v1239,
    v1340,
    v1441,
    v1542,
    v1643,
    v1744,
    v1845,
    v1946,
    v2047,
    v2149,
    v2250);
  *((_QWORD *)&v2406 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2447,
    v1846,
    2,
    v136,
    v137,
    v138,
    v668,
    v831,
    v994,
    v1139,
    v1240,
    v1341,
    v1442,
    v1543,
    v1644,
    v1745,
    v1846,
    v1947,
    v2048,
    v2150,
    v2251);
  *((_QWORD *)&v2448 + 1) = 0;
  LOBYTE(v2419) = 0;
  *(_QWORD *)&v2420 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2419) = 3;
  v139 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v139, "new_start", v140, v141, v142, v143, v669, v832, v995);
  v2420 = (unsigned __int64)v139;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v996);
  v2408 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2409);
  v2410 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2415,
    (__int64)v996,
    2,
    v144,
    v145,
    v146,
    v670,
    v833,
    (int)v996,
    v1140,
    v1241,
    v1342,
    v1443,
    v1544,
    v1645,
    v1746,
    v1847,
    v1948,
    v2049,
    v2151,
    v2252);
  v2416 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1141);
  v2412 = 0;
  v2413 = 0;
  *(_QWORD *)&v2414 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2413 = 3;
  v147 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v147, "New start address", v148, v149, v150, v151, v671, v834, v997);
  v2414 = (unsigned __int64)v147;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2417,
    (__int64)v1141,
    2,
    v152,
    v153,
    v154,
    v672,
    v835,
    v998,
    (int)v1141,
    v1242,
    v1343,
    v1444,
    v1545,
    v1646,
    v1747,
    v1848,
    v1949,
    v2050,
    v2152,
    v2253);
  v2418 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2421,
    (__int64)&v2415,
    2,
    v155,
    v156,
    v157,
    v673,
    v836,
    v999,
    v1142,
    v1243,
    v1344,
    v1445,
    v1546,
    v1647,
    v1748,
    v1849,
    v1950,
    v2051,
    v2153,
    v2254);
  v2422 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2449,
    (__int64)&v2419,
    2,
    v158,
    v159,
    v160,
    v674,
    v837,
    v1000,
    v1143,
    v1244,
    v1345,
    v1446,
    v1547,
    v1648,
    v1749,
    v1850,
    v1951,
    v2052,
    v2154,
    v2255);
  v2450 = 0;
  LOBYTE(v2435) = 0;
  *(_QWORD *)&v2436 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2435) = 3;
  v161 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v161, "new_end", v162, v163, v164, v165, v675, v838, v1001);
  v2436 = (unsigned __int64)v161;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1346);
  v2424 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2425);
  *((_QWORD *)&v2426 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v839,
    (__int64)v1346,
    2,
    v166,
    v167,
    v168,
    v676,
    (__int64)v839,
    v1002,
    v1144,
    v1245,
    (int)v1346,
    v1447,
    v1548,
    v1649,
    v1750,
    v1851,
    v1952,
    v2053,
    v2155,
    v2256);
  v2432 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1448);
  v2428 = 0;
  v2429 = 0;
  *(_QWORD *)&v2430 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2429 = 3;
  v169 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v169, "New end address", v170, v171, v172, v173, v677, v840, v1003);
  v2430 = (unsigned __int64)v169;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2433,
    (__int64)v1448,
    2,
    v174,
    v175,
    v176,
    v678,
    v841,
    v1004,
    v1145,
    v1246,
    v1347,
    (__int64)v1448,
    v1549,
    v1650,
    v1751,
    v1852,
    v1953,
    v2054,
    v2156,
    v2257);
  v2434 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2437,
    v842,
    2,
    v177,
    v178,
    v179,
    v679,
    v842,
    v1005,
    v1146,
    v1247,
    v1348,
    v1449,
    v1550,
    v1651,
    v1752,
    v1853,
    v1954,
    v2055,
    v2157,
    v2258);
  v2438 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2451,
    (__int64)&v2435,
    2,
    v180,
    v181,
    v182,
    v680,
    v843,
    v1006,
    v1147,
    v1248,
    v1349,
    v1450,
    v1551,
    v1652,
    v1753,
    v1854,
    v1955,
    v2056,
    v2158,
    v2259);
  v2453 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2441,
    (__int64)&v2447,
    3,
    v183,
    v184,
    v185,
    v681,
    v844,
    v1007,
    v1148,
    v1249,
    v1350,
    v1451,
    v1552,
    v1653,
    v1754,
    v1855,
    v1956,
    v2057,
    v2159,
    v2260);
  v2442 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2457,
    (__int64)&v2439,
    2,
    v186,
    v187,
    v188,
    v682,
    v845,
    v1008,
    v1149,
    v1250,
    v1351,
    v1452,
    v1553,
    v1654,
    v1755,
    v1856,
    v1957,
    v2058,
    v2160,
    v2261);
  v2458 = 0;
  v2443 = 0;
  *(_QWORD *)&v2444 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2443 = 3;
  v189 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v189, "required", v190, v191, v192, v193, v683, v846, v1009);
  v2444 = (unsigned __int64)v189;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v2383);
  v2384 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v194 = _mm_load_si128(&v2344);
  v2446 = 0;
  v2445 = v194;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2459,
    (__int64)&v2443,
    2,
    v195,
    v196,
    v197,
    v684,
    v847,
    v1010,
    v1150,
    v1251,
    v1352,
    v1453,
    v1554,
    v1655,
    v1756,
    v1857,
    v1958,
    v2059,
    v2161,
    v2262);
  v2460 = 0;
  LOBYTE(v2343) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2060,
    (__int64)v2455,
    3,
    v198,
    v199,
    v200,
    v685,
    v848,
    v1011,
    v1151,
    v1252,
    v1353,
    v1454,
    v1555,
    v1656,
    v1757,
    v1858,
    v1959,
    (__int64)v2060,
    v2162,
    v2263);
  v201 = v2461;
  do
  {
    v201 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v201 != v2455 );
  v202 = (__int64 *)&v2454;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v202 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v202 != &v2447 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO_(
    (__int64)&v2341,
    "set_function_bounds",
    "Change function start and/or end address",
    v2061,
    (__int64)ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_set_func_bounds);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1859);
  *((_QWORD *)&v2404 + 1) = 0;
  LOBYTE(v2405) = 0;
  *(_QWORD *)&v2406 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2405) = 3;
  v203 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v203, "object", v204, v205, v206, v207, v686, v849, v1012);
  v2406 = (unsigned __int64)v203;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2455,
    (__int64)v1859,
    2,
    v208,
    v209,
    v210,
    v687,
    v850,
    v1013,
    v1152,
    v1253,
    v1354,
    v1455,
    v1556,
    v1657,
    v1758,
    (int)v1859,
    v1960,
    v2061,
    v2163,
    v2264);
  v2456 = 0;
  v2443 = 0;
  *(_QWORD *)&v2444 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2443 = 3;
  v211 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v211, "properties", v212, v213, v214, v215, v688, v851, v1014);
  v2444 = (unsigned __int64)v211;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v2419);
  *((_QWORD *)&v2420 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1015);
  v2408 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2409);
  v2410 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2415,
    (__int64)v1015,
    2,
    v216,
    v217,
    v218,
    v689,
    v852,
    (int)v1015,
    v1153,
    v1254,
    v1355,
    v1456,
    v1557,
    v1658,
    v1759,
    v1860,
    v1961,
    v2062,
    v2164,
    v2265);
  v2416 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1154);
  v2412 = 0;
  v2413 = 0;
  *(_QWORD *)&v2414 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2413 = 3;
  v219 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v219, "Hex address", v220, v221, v222, v223, v690, v853, v1016);
  v2414 = (unsigned __int64)v219;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2417,
    (__int64)v1154,
    2,
    v224,
    v225,
    v226,
    v691,
    v854,
    v1017,
    (int)v1154,
    v1255,
    v1356,
    v1457,
    v1558,
    v1659,
    v1760,
    v1861,
    v1962,
    v2063,
    v2165,
    v2266);
  v2418 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2421,
    (__int64)&v2415,
    2,
    v227,
    v228,
    v229,
    v692,
    v855,
    v1018,
    v1155,
    v1256,
    v1357,
    v1458,
    v1559,
    v1660,
    v1761,
    v1862,
    v1963,
    v2064,
    v2166,
    v2267);
  v2422 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2439,
    (__int64)&v2419,
    2,
    v230,
    v231,
    v232,
    v693,
    v856,
    v1019,
    v1156,
    v1257,
    v1358,
    v1459,
    v1560,
    v1661,
    v1762,
    v1863,
    v1964,
    v2065,
    v2167,
    v2268);
  *((_QWORD *)&v2440 + 1) = 0;
  LOBYTE(v2435) = 0;
  *(_QWORD *)&v2436 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2435) = 3;
  v233 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v233, "color", v234, v235, v236, v237, v694, v857, v1020);
  v2436 = (unsigned __int64)v233;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1359);
  v2424 = 0;
  LOBYTE(v2425) = 0;
  *(_QWORD *)&v2426 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2425) = 3;
  v238 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v238, "integer", v239, v240, v241, v242, v695, v858, v1021);
  v2426 = (unsigned __int64)v238;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v859,
    (__int64)v1359,
    2,
    v243,
    v244,
    v245,
    v696,
    (__int64)v859,
    v1022,
    v1157,
    v1258,
    (int)v1359,
    v1460,
    v1561,
    v1662,
    v1763,
    v1864,
    v1965,
    v2066,
    v2168,
    v2269);
  v2432 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1461);
  v2428 = 0;
  v2429 = 0;
  *(_QWORD *)&v2430 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2429 = 3;
  v246 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v246,
    "BGR color value (omit to clear color)",
    v247,
    v248,
    v249,
    v250,
    v697,
    v860,
    v1023);
  v2430 = (unsigned __int64)v246;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2433,
    (__int64)v1461,
    2,
    v251,
    v252,
    v253,
    v698,
    v861,
    v1024,
    v1158,
    v1259,
    v1360,
    (__int64)v1461,
    v1562,
    v1663,
    v1764,
    v1865,
    v1966,
    v2067,
    v2169,
    v2270);
  v2434 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2437,
    v862,
    2,
    v254,
    v255,
    v256,
    v699,
    v862,
    v1025,
    v1159,
    v1260,
    v1361,
    v1462,
    v1563,
    v1664,
    v1765,
    v1866,
    v1967,
    v2068,
    v2170,
    v2271);
  v2438 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2441,
    (__int64)&v2435,
    2,
    v257,
    v258,
    v259,
    v700,
    v863,
    v1026,
    v1160,
    v1261,
    v1362,
    v1463,
    v1564,
    v1665,
    v1766,
    v1867,
    v1968,
    v2069,
    v2171,
    v2272);
  v2442 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2445,
    (__int64)&v2439,
    2,
    v260,
    v261,
    v262,
    v701,
    v864,
    v1027,
    v1161,
    v1262,
    v1363,
    v1464,
    v1565,
    v1666,
    v1767,
    v1868,
    v1969,
    v2070,
    v2172,
    v2273);
  v2446 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2457,
    (__int64)&v2443,
    2,
    v263,
    v264,
    v265,
    v702,
    v865,
    v1028,
    v1162,
    v1263,
    v1364,
    v1465,
    v1566,
    v1667,
    v1768,
    v1869,
    v1970,
    v2071,
    v2173,
    v2274);
  v2458 = 0;
  LOBYTE(v2447) = 0;
  *(_QWORD *)&v2448 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2447) = 3;
  v266 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v266, "required", v267, v268, v269, v270, v703, v866, v1029);
  v2448 = (unsigned __int64)v266;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1769);
  v2400 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v271 = _mm_load_si128(&v2344);
  v2450 = 0;
  v2449 = v271;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2459,
    (__int64)&v2447,
    2,
    v272,
    v273,
    v274,
    v704,
    v867,
    v1030,
    v1163,
    v1264,
    v1365,
    v1466,
    v1567,
    v1668,
    (int)v1769,
    v1870,
    v1971,
    v2072,
    v2174,
    v2275);
  v2460 = 0;
  LOBYTE(v2343) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2073,
    (__int64)v2455,
    3,
    v275,
    v276,
    v277,
    v705,
    v868,
    v1031,
    v1164,
    v1265,
    v1366,
    v1467,
    v1568,
    v1669,
    v1770,
    v1871,
    v1972,
    (__int64)v2073,
    v2175,
    v2276);
  v278 = v2461;
  do
  {
    v278 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v278 != v2455 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO_(
    (__int64)&v2341,
    "set_item_color",
    "Set background color for a disassembly item (for visual marking)",
    v2074,
    (__int64)ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_set_item_color);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  ida_mcp::tools::xref_manipulation::register_tools(ida_mcp::mcp::McpServer &)::{lambda(std::initializer_list<std::pair<char const*,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>)#1}::operator()(
    &v2344,
    nullptr,
    0);
  ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO_(
    (__int64)&v2341,
    "get_item_color",
    "Get the custom background color of a disassembly item",
    (__int64)&v2344,
    (__int64)ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_get_item_color);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v2349);
  v2349[2] = 0;
  v2350 = 0;
  *(_QWORD *)&v2351 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2350 = 3;
  v279 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v279, "object", v280, v281, v282, v283, v706, v869, v1032);
  v2351 = (unsigned __int64)v279;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2447,
    (__int64)v2349,
    2,
    v284,
    v285,
    v286,
    v707,
    v870,
    v1033,
    v1165,
    v1266,
    v1367,
    v1468,
    v1569,
    v1670,
    v1771,
    v1872,
    v1973,
    v2074,
    v2176,
    v2277);
  *((_QWORD *)&v2448 + 1) = 0;
  LOBYTE(v2439) = 0;
  *(_QWORD *)&v2440 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2439) = 3;
  v287 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v287, "properties", v288, v289, v290, v291, v708, v871, v1034);
  v2359[0] = 0;
  *(_QWORD *)&v2360 = 0;
  v2440 = (unsigned __int64)v287;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2359[0] = 3;
  v292 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v292, "start", v293, v294, v295, v296, v709, v872, v1035);
  v2360 = (unsigned __int64)v292;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v2352);
  v2352[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v2353);
  v2353[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2357,
    (__int64)v2352,
    2,
    v297,
    v298,
    v299,
    v710,
    v873,
    v1036,
    v1166,
    v1267,
    v1368,
    v1469,
    v1570,
    v1671,
    v1772,
    v1873,
    v1974,
    v2075,
    v2177,
    v2278);
  v2357[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v2354);
  v2354[2] = 0;
  v2355 = 0;
  *(_QWORD *)&v2356 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2355 = 3;
  v300 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v300, "Start hex address", v301, v302, v303, v304, v711, v874, v1037);
  v2356 = (unsigned __int64)v300;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2358,
    (__int64)v2354,
    2,
    v305,
    v306,
    v307,
    v712,
    v875,
    v1038,
    v1167,
    v1268,
    v1369,
    v1470,
    v1571,
    v1672,
    v1773,
    v1874,
    v1975,
    v2076,
    v2178,
    v2279);
  v2358[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2361,
    (__int64)v2357,
    2,
    v308,
    v309,
    v310,
    v713,
    v876,
    v1039,
    v1168,
    v1269,
    v1370,
    v1471,
    v1572,
    v1673,
    v1774,
    v1875,
    v1976,
    v2077,
    v2179,
    v2280);
  v2361[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2455,
    (__int64)v2359,
    2,
    v311,
    v312,
    v313,
    v714,
    v877,
    v1040,
    v1169,
    v1270,
    v1371,
    v1472,
    v1573,
    v1674,
    v1775,
    v1876,
    v1977,
    v2078,
    v2180,
    v2281);
  v2456 = 0;
  LOBYTE(v2371) = 0;
  *(_QWORD *)&v2372 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2371) = 3;
  v314 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v314, "end", v315, v316, v317, v318, v715, v878, v1041);
  v2372 = (unsigned __int64)v314;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v2362);
  v2362[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(v2363);
  v2363[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2367,
    (__int64)v2362,
    2,
    v319,
    v320,
    v321,
    v716,
    v879,
    v1042,
    v1170,
    v1271,
    v1372,
    v1473,
    v1574,
    v1675,
    v1776,
    v1877,
    v1978,
    v2079,
    v2181,
    v2282);
  v2368 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v2364);
  v2364[2] = 0;
  v2365 = 0;
  *(_QWORD *)&v2366 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2365 = 3;
  v322 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v322, "End hex address", v323, v324, v325, v326, v717, v880, v1043);
  v2366 = (unsigned __int64)v322;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2369,
    (__int64)v2364,
    2,
    v327,
    v328,
    v329,
    v718,
    v881,
    v1044,
    v1171,
    v1272,
    v1373,
    v1474,
    v1575,
    v1676,
    v1777,
    v1878,
    v1979,
    v2080,
    v2182,
    v2283);
  v2370 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2373,
    (__int64)&v2367,
    2,
    v330,
    v331,
    v332,
    v719,
    v882,
    v1045,
    v1172,
    v1273,
    v1374,
    v1475,
    v1576,
    v1677,
    v1778,
    v1879,
    v1980,
    v2081,
    v2183,
    v2284);
  *((_QWORD *)&v2374 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2457,
    (__int64)&v2371,
    2,
    v333,
    v334,
    v335,
    v720,
    v883,
    v1046,
    v1173,
    v1274,
    v1375,
    v1476,
    v1577,
    v1678,
    v1779,
    v1880,
    v1981,
    v2082,
    v2184,
    v2285);
  v2458 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2387);
  v2388 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2375);
  v2376 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2377);
  v2378 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2383,
    (__int64)&v2375,
    2,
    v336,
    v337,
    v338,
    v721,
    v884,
    v1047,
    v1174,
    v1275,
    v1376,
    v1477,
    v1578,
    v1679,
    v1780,
    v1881,
    v1982,
    v2083,
    v2185,
    v2286);
  v2384 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2379);
  v2380 = 0;
  v2381 = 0;
  *(_QWORD *)&v2382 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2381 = 3;
  v339 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v339, "Description text", v340, v341, v342, v343, v722, v885, v1048);
  v2382 = (unsigned __int64)v339;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2385,
    (__int64)&v2379,
    2,
    v344,
    v345,
    v346,
    v723,
    v886,
    v1049,
    v1175,
    v1276,
    v1377,
    v1478,
    v1579,
    v1680,
    v1781,
    v1882,
    v1983,
    v2084,
    v2186,
    v2287);
  *((_QWORD *)&v2386 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2389,
    (__int64)&v2383,
    2,
    v347,
    v348,
    v349,
    v724,
    v887,
    v1050,
    v1176,
    v1277,
    v1378,
    v1479,
    v1580,
    v1681,
    v1782,
    v1883,
    v1984,
    v2085,
    v2187,
    v2288);
  *((_QWORD *)&v2390 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2459,
    (__int64)&v2387,
    2,
    v350,
    v351,
    v352,
    v725,
    v888,
    v1051,
    v1177,
    v1278,
    v1379,
    v1480,
    v1581,
    v1682,
    v1783,
    v1884,
    v1985,
    v2086,
    v2188,
    v2289);
  v2460 = 0;
  v2403 = 0;
  *(_QWORD *)&v2404 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2403 = 3;
  v353 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v353, "header", v354, v355, v356, v357, v726, v889, v1052);
  v2404 = (unsigned __int64)v353;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2391);
  v2392 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2393);
  v2394 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1784,
    (__int64)&v2391,
    2,
    v358,
    v359,
    v360,
    v727,
    v890,
    v1053,
    v1178,
    v1279,
    v1380,
    v1481,
    v1582,
    v1683,
    (int)v1784,
    v1885,
    v1986,
    v2087,
    v2189,
    v2290);
  v2400 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2395);
  v2396 = 0;
  v2397 = 0;
  *(_QWORD *)&v2398 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2397 = 3;
  v361 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v361,
    "Header shown when collapsed",
    v362,
    v363,
    v364,
    v365,
    v728,
    v891,
    v1054);
  v2398 = (unsigned __int64)v361;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2401,
    (__int64)&v2395,
    2,
    v366,
    v367,
    v368,
    v729,
    v892,
    v1055,
    v1179,
    v1280,
    v1381,
    v1482,
    v1583,
    v1684,
    v1785,
    v1886,
    v1987,
    v2088,
    v2190,
    v2291);
  v2402 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2405,
    v1786,
    2,
    v369,
    v370,
    v371,
    v730,
    v893,
    v1056,
    v1180,
    v1281,
    v1382,
    v1483,
    v1584,
    v1685,
    v1786,
    v1887,
    v1988,
    v2089,
    v2191,
    v2292);
  *((_QWORD *)&v2406 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2461,
    v1888,
    2,
    v372,
    v373,
    v374,
    v731,
    v894,
    v1057,
    v1181,
    v1282,
    v1383,
    v1484,
    v1585,
    v1686,
    v1787,
    v1888,
    v1989,
    v2090,
    v2192,
    v2293);
  v2462 = 0;
  LOBYTE(v2419) = 0;
  *(_QWORD *)&v2420 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2419) = 3;
  v375 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v375, "footer", v376, v377, v378, v379, v732, v895, v1058);
  v2420 = (unsigned __int64)v375;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1059);
  v2408 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2409);
  v2410 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2415,
    (__int64)v1059,
    2,
    v380,
    v381,
    v382,
    v733,
    v896,
    (int)v1059,
    v1182,
    v1283,
    v1384,
    v1485,
    v1586,
    v1687,
    v1788,
    v1889,
    v1990,
    v2091,
    v2193,
    v2294);
  v2416 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1183);
  v2412 = 0;
  v2413 = 0;
  *(_QWORD *)&v2414 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2413 = 3;
  v383 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v383, "Footer text", v384, v385, v386, v387, v734, v897, v1060);
  v2414 = (unsigned __int64)v383;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2417,
    (__int64)v1183,
    2,
    v388,
    v389,
    v390,
    v735,
    v898,
    v1061,
    (int)v1183,
    v1284,
    v1385,
    v1486,
    v1587,
    v1688,
    v1789,
    v1890,
    v1991,
    v2092,
    v2194,
    v2295);
  v2418 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2421,
    (__int64)&v2415,
    2,
    v391,
    v392,
    v393,
    v736,
    v899,
    v1062,
    v1184,
    v1285,
    v1386,
    v1487,
    v1588,
    v1689,
    v1790,
    v1891,
    v1992,
    v2093,
    v2195,
    v2296);
  v2422 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2463,
    (__int64)&v2419,
    2,
    v394,
    v395,
    v396,
    v737,
    v900,
    v1063,
    v1185,
    v1286,
    v1387,
    v1488,
    v1589,
    v1690,
    v1791,
    v1892,
    v1993,
    v2094,
    v2196,
    v2297);
  v2463[2] = 0;
  LOBYTE(v2435) = 0;
  *(_QWORD *)&v2436 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2435) = 3;
  v397 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v397, "color", v398, v399, v400, v401, v738, v901, v1064);
  v2436 = (unsigned __int64)v397;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1388);
  v2424 = 0;
  LOBYTE(v2425) = 0;
  *(_QWORD *)&v2426 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2425) = 3;
  v402 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v402, "integer", v403, v404, v405, v406, v739, v902, v1065);
  v2426 = (unsigned __int64)v402;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v903,
    (__int64)v1388,
    2,
    v407,
    v408,
    v409,
    v740,
    (__int64)v903,
    v1066,
    v1186,
    v1287,
    (int)v1388,
    v1489,
    v1590,
    v1691,
    v1792,
    v1893,
    v1994,
    v2095,
    v2197,
    v2298);
  v2432 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1490);
  v2428 = 0;
  v2429 = 0;
  *(_QWORD *)&v2430 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2429 = 3;
  v410 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v410,
    "Background color (BGR)",
    v411,
    v412,
    v413,
    v414,
    v741,
    v904,
    v1067);
  v2430 = (unsigned __int64)v410;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2433,
    (__int64)v1490,
    2,
    v415,
    v416,
    v417,
    v742,
    v905,
    v1068,
    v1187,
    v1288,
    v1389,
    (__int64)v1490,
    v1591,
    v1692,
    v1793,
    v1894,
    v1995,
    v2096,
    v2198,
    v2299);
  v2434 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2437,
    v906,
    2,
    v418,
    v419,
    v420,
    v743,
    v906,
    v1069,
    v1188,
    v1289,
    v1390,
    v1491,
    v1592,
    v1693,
    v1794,
    v1895,
    v1996,
    v2097,
    v2199,
    v2300);
  v421 = v2464;
  v2438 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2464,
    (__int64)&v2435,
    2,
    v422,
    v423,
    v424,
    v744,
    v907,
    v1070,
    v1189,
    v1290,
    v1391,
    v1492,
    v1593,
    v1694,
    v1795,
    v1896,
    v1997,
    v2098,
    v2200,
    v2301);
  v2464[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2441,
    (__int64)v2455,
    6,
    v425,
    v426,
    v427,
    v745,
    v908,
    v1071,
    v1190,
    v1291,
    v1392,
    v1493,
    v1594,
    v1695,
    v1796,
    v1897,
    v1998,
    v2099,
    v2201,
    v2302);
  v2442 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2449,
    (__int64)&v2439,
    2,
    v428,
    v429,
    v430,
    v746,
    v909,
    v1072,
    v1191,
    v1292,
    v1393,
    v1494,
    v1595,
    v1696,
    v1797,
    v1898,
    v1999,
    v2100,
    v2202,
    v2303);
  v2450 = 0;
  v2443 = 0;
  *(_QWORD *)&v2444 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2443 = 3;
  v431 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v431, "required", v432, v433, v434, v435, v747, v910, v1073);
  v2345 = 0;
  v2444 = (unsigned __int64)v431;
  *(_QWORD *)&v2346 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2345 = 3;
  v436 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v436, "start", v437, v438, v439, v440, v748, v911, v1074);
  v2347 = 0;
  *(_QWORD *)&v2348 = 0;
  v2346 = (unsigned __int64)v436;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2347 = 3;
  v441 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v441, "end", v442, v443, v444, v445, v749, v912, v1075);
  v2348 = (unsigned __int64)v441;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v446 = _mm_load_si128(&v2344);
  v2446 = 0;
  v2445 = v446;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2451,
    (__int64)&v2443,
    2,
    v447,
    v448,
    v449,
    v750,
    v913,
    v1076,
    v1192,
    v1293,
    v1394,
    v1495,
    v1596,
    v1697,
    v1798,
    v1899,
    v2000,
    v2101,
    v2203,
    v2304);
  v2453 = 0;
  LOBYTE(v2343) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2102,
    (__int64)&v2447,
    3,
    v450,
    v451,
    v452,
    v751,
    v914,
    v1077,
    v1193,
    v1294,
    v1395,
    v1496,
    v1597,
    v1698,
    v1799,
    v1900,
    v2001,
    (__int64)v2102,
    v2204,
    v2305);
  v453 = (__int64 *)&v2454;
  do
  {
    v453 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v453 != &v2447 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v421 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( &v2452 != v421 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO_(
    (__int64)&v2341,
    "add_hidden_range",
    "Create a hidden/collapsible range in the listing",
    v2103,
    (__int64)ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_add_hidden_range);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  ida_mcp::tools::xref_manipulation::register_tools(ida_mcp::mcp::McpServer &)::{lambda(std::initializer_list<std::pair<char const*,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>)#1}::operator()(
    &v2344,
    nullptr,
    0);
  ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO_(
    (__int64)&v2341,
    "get_extra_comments",
    "Get anterior and posterior extra comments at address",
    (__int64)&v2344,
    (__int64)ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_get_extra_cmt);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2371);
  *((_QWORD *)&v2372 + 1) = 0;
  LOBYTE(v2373) = 0;
  *(_QWORD *)&v2374 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2373) = 3;
  v454 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v454, "object", v455, v456, v457, v458, v752, v915, v1078);
  v2374 = (unsigned __int64)v454;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2447,
    (__int64)&v2371,
    2,
    v459,
    v460,
    v461,
    v753,
    v916,
    v1079,
    v1194,
    v1295,
    v1396,
    v1497,
    v1598,
    v1699,
    v1800,
    v1901,
    v2002,
    v2103,
    v2205,
    v2306);
  *((_QWORD *)&v2448 + 1) = 0;
  LOBYTE(v2439) = 0;
  *(_QWORD *)&v2440 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2439) = 3;
  v462 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v462, "properties", v463, v464, v465, v466, v754, v917, v1080);
  v2440 = (unsigned __int64)v462;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v2387);
  v2388 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2375);
  v2376 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2377);
  v2378 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2383,
    (__int64)&v2375,
    2,
    v467,
    v468,
    v469,
    v755,
    v918,
    v1081,
    v1195,
    v1296,
    v1397,
    v1498,
    v1599,
    v1700,
    v1801,
    v1902,
    v2003,
    v2104,
    v2206,
    v2307);
  v2384 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2379);
  v2380 = 0;
  v2381 = 0;
  *(_QWORD *)&v2382 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2381 = 3;
  v470 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v470, "Hex address", v471, v472, v473, v474, v756, v919, v1082);
  v2382 = (unsigned __int64)v470;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2385,
    (__int64)&v2379,
    2,
    v475,
    v476,
    v477,
    v757,
    v920,
    v1083,
    v1196,
    v1297,
    v1398,
    v1499,
    v1600,
    v1701,
    v1802,
    v1903,
    v2004,
    v2105,
    v2207,
    v2308);
  *((_QWORD *)&v2386 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2389,
    (__int64)&v2383,
    2,
    v478,
    v479,
    v480,
    v758,
    v921,
    v1084,
    v1197,
    v1298,
    v1399,
    v1500,
    v1601,
    v1702,
    v1803,
    v1904,
    v2005,
    v2106,
    v2208,
    v2309);
  *((_QWORD *)&v2390 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2455,
    (__int64)&v2387,
    2,
    v481,
    v482,
    v483,
    v759,
    v922,
    v1085,
    v1198,
    v1299,
    v1400,
    v1501,
    v1602,
    v1703,
    v1804,
    v1905,
    v2006,
    v2107,
    v2209,
    v2310);
  v2456 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
  *((_QWORD *)&v2404 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v2391);
  v2392 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2393);
  v2394 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1805,
    (__int64)&v2391,
    2,
    v484,
    v485,
    v486,
    v760,
    v923,
    v1086,
    v1199,
    v1300,
    v1401,
    v1502,
    v1603,
    v1704,
    (int)v1805,
    v1906,
    v2007,
    v2108,
    v2210,
    v2311);
  v2400 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(&v2395);
  v2396 = 0;
  v2397 = 0;
  *(_QWORD *)&v2398 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2397 = 3;
  v487 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v487, "Comment text", v488, v489, v490, v491, v761, v924, v1087);
  v2398 = (unsigned __int64)v487;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2401,
    (__int64)&v2395,
    2,
    v492,
    v493,
    v494,
    v762,
    v925,
    v1088,
    v1200,
    v1301,
    v1402,
    v1503,
    v1604,
    v1705,
    v1806,
    v1907,
    v2008,
    v2109,
    v2211,
    v2312);
  v2402 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2405,
    v1807,
    2,
    v495,
    v496,
    v497,
    v763,
    v926,
    v1089,
    v1201,
    v1302,
    v1403,
    v1504,
    v1605,
    v1706,
    v1807,
    v1908,
    v2009,
    v2110,
    v2212,
    v2313);
  *((_QWORD *)&v2406 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2457,
    v1909,
    2,
    v498,
    v499,
    v500,
    v764,
    v927,
    v1090,
    v1202,
    v1303,
    v1404,
    v1505,
    v1606,
    v1707,
    v1808,
    v1909,
    v2010,
    v2111,
    v2213,
    v2314);
  v2458 = 0;
  LOBYTE(v2419) = 0;
  *(_QWORD *)&v2420 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2419) = 3;
  v501 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v501, "position", v502, v503, v504, v505, v765, v928, v1091);
  v2420 = (unsigned __int64)v501;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1092);
  v2408 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2409);
  v2410 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2415,
    (__int64)v1092,
    2,
    v506,
    v507,
    v508,
    v766,
    v929,
    (int)v1092,
    v1203,
    v1304,
    v1405,
    v1506,
    v1607,
    v1708,
    v1809,
    v1910,
    v2011,
    v2112,
    v2214,
    v2315);
  v2416 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1204);
  v2412 = 0;
  v2413 = 0;
  *(_QWORD *)&v2414 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2413 = 3;
  v509 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v509,
    "anterior or posterior (default: anterior)",
    v510,
    v511,
    v512,
    v513,
    v767,
    v930,
    v1093);
  v2414 = (unsigned __int64)v509;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2417,
    (__int64)v1204,
    2,
    v514,
    v515,
    v516,
    v768,
    v931,
    v1094,
    (int)v1204,
    v1305,
    v1406,
    v1507,
    v1608,
    v1709,
    v1810,
    v1911,
    v2012,
    v2113,
    v2215,
    v2316);
  v2418 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2421,
    (__int64)&v2415,
    2,
    v517,
    v518,
    v519,
    v769,
    v932,
    v1095,
    v1205,
    v1306,
    v1407,
    v1508,
    v1609,
    v1710,
    v1811,
    v1912,
    v2013,
    v2114,
    v2216,
    v2317);
  v2422 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2459,
    (__int64)&v2419,
    2,
    v520,
    v521,
    v522,
    v770,
    v933,
    v1096,
    v1206,
    v1307,
    v1408,
    v1509,
    v1610,
    v1711,
    v1812,
    v1913,
    v2014,
    v2115,
    v2217,
    v2318);
  v2460 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
  *((_QWORD *)&v2436 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1409);
  v2424 = 0;
  LOBYTE(v2425) = 0;
  *(_QWORD *)&v2426 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2425) = 3;
  v523 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v523, "integer", v524, v525, v526, v527, v771, v934, v1097);
  v2426 = (unsigned __int64)v523;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v935,
    (__int64)v1409,
    2,
    v528,
    v529,
    v530,
    v772,
    (__int64)v935,
    v1098,
    v1207,
    v1308,
    (int)v1409,
    v1510,
    v1611,
    v1712,
    v1813,
    v1914,
    v2015,
    v2116,
    v2218,
    v2319);
  v2432 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1511);
  v2428 = 0;
  v2429 = 0;
  *(_QWORD *)&v2430 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2429 = 3;
  v531 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v531,
    "Line index within the comment block (default 0)",
    v532,
    v533,
    v534,
    v535,
    v773,
    v936,
    v1099);
  v2430 = (unsigned __int64)v531;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2433,
    (__int64)v1511,
    2,
    v536,
    v537,
    v538,
    v774,
    v937,
    v1100,
    v1208,
    v1309,
    v1410,
    (__int64)v1511,
    v1612,
    v1713,
    v1814,
    v1915,
    v2016,
    v2117,
    v2219,
    v2320);
  v2434 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2437,
    v938,
    2,
    v539,
    v540,
    v541,
    v775,
    v938,
    v1101,
    v1209,
    v1310,
    v1411,
    v1512,
    v1613,
    v1714,
    v1815,
    v1916,
    v2017,
    v2118,
    v2220,
    v2321);
  v2438 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2461,
    (__int64)&v2435,
    2,
    v542,
    v543,
    v544,
    v776,
    v939,
    v1102,
    v1210,
    v1311,
    v1412,
    v1513,
    v1614,
    v1715,
    v1816,
    v1917,
    v2018,
    v2119,
    v2221,
    v2322);
  v2462 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2441,
    (__int64)v2455,
    4,
    v545,
    v546,
    v547,
    v777,
    v940,
    v1103,
    v1211,
    v1312,
    v1413,
    v1514,
    v1615,
    v1716,
    v1817,
    v1918,
    v2019,
    v2120,
    v2222,
    v2323);
  v2442 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2449,
    (__int64)&v2439,
    2,
    v548,
    v549,
    v550,
    v778,
    v941,
    v1104,
    v1212,
    v1313,
    v1414,
    v1515,
    v1616,
    v1717,
    v1818,
    v1919,
    v2020,
    v2121,
    v2223,
    v2324);
  v2450 = 0;
  v2443 = 0;
  *(_QWORD *)&v2444 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2443 = 3;
  v551 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v551, "required", v552, v553, v554, v555, v779, v942, v1105);
  v2444 = (unsigned __int64)v551;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v2367);
  v2368 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
  v2370 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v556 = _mm_load_si128(&v2344);
  v2446 = 0;
  v2445 = v556;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2451,
    (__int64)&v2443,
    2,
    v557,
    v558,
    v559,
    v780,
    v943,
    v1106,
    v1213,
    v1314,
    v1415,
    v1516,
    v1617,
    v1718,
    v1819,
    v1920,
    v2021,
    v2122,
    v2224,
    v2325);
  v2453 = 0;
  LOBYTE(v2343) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2123,
    (__int64)&v2447,
    3,
    v560,
    v561,
    v562,
    v781,
    v944,
    v1107,
    v1214,
    v1315,
    v1416,
    v1517,
    v1618,
    v1719,
    v1820,
    v1921,
    v2022,
    (__int64)v2123,
    v2225,
    v2326);
  v563 = (__int64 *)&v2454;
  do
  {
    v563 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v563 != &v2447 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v564 = v2463;
  do
  {
    v564 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v564 != v2455 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO_(
    (__int64)&v2341,
    "set_extra_comment",
    "Set anterior or posterior extra comment at address",
    v2124,
    (__int64)ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_set_extra_cmt);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1922);
  *((_QWORD *)&v2404 + 1) = 0;
  LOBYTE(v2405) = 0;
  *(_QWORD *)&v2406 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2405) = 3;
  v565 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v565, "object", v566, v567, v568, v569, v782, v945, v1108);
  v2406 = (unsigned __int64)v565;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2455,
    (__int64)v1922,
    2,
    v570,
    v571,
    v572,
    v783,
    v946,
    v1109,
    v1215,
    v1316,
    v1417,
    v1518,
    v1619,
    v1720,
    v1821,
    (int)v1922,
    v2023,
    v2124,
    v2226,
    v2327);
  v2456 = 0;
  v2443 = 0;
  *(_QWORD *)&v2444 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2443 = 3;
  v573 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v573, "properties", v574, v575, v576, v577, v784, v947, v1110);
  v2444 = (unsigned __int64)v573;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v2419);
  *((_QWORD *)&v2420 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1111);
  v2408 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>(&v2409);
  v2410 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2415,
    (__int64)v1111,
    2,
    v578,
    v579,
    v580,
    v785,
    v948,
    (int)v1111,
    v1216,
    v1317,
    v1418,
    v1519,
    v1620,
    v1721,
    v1822,
    v1923,
    v2024,
    v2125,
    v2227,
    v2328);
  v2416 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1217);
  v2412 = 0;
  v2413 = 0;
  *(_QWORD *)&v2414 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2413 = 3;
  v581 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v581, "Start hex address", v582, v583, v584, v585, v786, v949, v1112);
  v2414 = (unsigned __int64)v581;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2417,
    (__int64)v1217,
    2,
    v586,
    v587,
    v588,
    v787,
    v950,
    v1113,
    (int)v1217,
    v1318,
    v1419,
    v1520,
    v1621,
    v1722,
    v1823,
    v1924,
    v2025,
    v2126,
    v2228,
    v2329);
  v2418 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2421,
    (__int64)&v2415,
    2,
    v589,
    v590,
    v591,
    v788,
    v951,
    v1114,
    v1218,
    v1319,
    v1420,
    v1521,
    v1622,
    v1723,
    v1824,
    v1925,
    v2026,
    v2127,
    v2229,
    v2330);
  v2422 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2439,
    (__int64)&v2419,
    2,
    v592,
    v593,
    v594,
    v789,
    v952,
    v1115,
    v1219,
    v1320,
    v1421,
    v1522,
    v1623,
    v1724,
    v1825,
    v1926,
    v2027,
    v2128,
    v2230,
    v2331);
  *((_QWORD *)&v2440 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
  *((_QWORD *)&v2436 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v1422);
  v2424 = 0;
  LOBYTE(v2425) = 0;
  *(_QWORD *)&v2426 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2425) = 3;
  v595 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v595, "integer", v596, v597, v598, v599, v790, v953, v1116);
  v2426 = (unsigned __int64)v595;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v954,
    (__int64)v1422,
    2,
    v600,
    v601,
    v602,
    v791,
    (__int64)v954,
    v1117,
    v1220,
    v1321,
    (int)v1422,
    v1523,
    v1624,
    v1725,
    v1826,
    v1927,
    v2028,
    v2129,
    v2231,
    v2332);
  v2432 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(v1524);
  v2428 = 0;
  v2429 = 0;
  *(_QWORD *)&v2430 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2429 = 3;
  v603 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v603,
    "Number of bytes to re-analyze (default 1)",
    v604,
    v605,
    v606,
    v607,
    v792,
    v955,
    v1118);
  v2430 = (unsigned __int64)v603;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2433,
    (__int64)v1524,
    2,
    v608,
    v609,
    v610,
    v793,
    v956,
    v1119,
    v1221,
    v1322,
    v1423,
    (__int64)v1524,
    v1625,
    v1726,
    v1827,
    v1928,
    v2029,
    v2130,
    v2232,
    v2333);
  v2434 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2437,
    v957,
    2,
    v611,
    v612,
    v613,
    v794,
    v957,
    v1120,
    v1222,
    v1323,
    v1424,
    v1525,
    v1626,
    v1727,
    v1828,
    v1929,
    v2030,
    v2131,
    v2233,
    v2334);
  v2438 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2441,
    (__int64)&v2435,
    2,
    v614,
    v615,
    v616,
    v795,
    v958,
    v1121,
    v1223,
    v1324,
    v1425,
    v1526,
    v1627,
    v1728,
    v1829,
    v1930,
    v2031,
    v2132,
    v2234,
    v2335);
  v2442 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v2445,
    (__int64)&v2439,
    2,
    v617,
    v618,
    v619,
    v796,
    v959,
    v1122,
    v1224,
    v1325,
    v1426,
    v1527,
    v1628,
    v1729,
    v1830,
    v1931,
    v2032,
    v2133,
    v2235,
    v2336);
  v2446 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2457,
    (__int64)&v2443,
    2,
    v620,
    v621,
    v622,
    v797,
    v960,
    v1123,
    v1225,
    v1326,
    v1427,
    v1528,
    v1629,
    v1730,
    v1831,
    v1932,
    v2033,
    v2134,
    v2236,
    v2337);
  v2458 = 0;
  LOBYTE(v2447) = 0;
  *(_QWORD *)&v2448 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2447) = 3;
  v623 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v623, "required", v624, v625, v626, v627, v798, v961, v1124);
  v2448 = (unsigned __int64)v623;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(v1832);
  v2400 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v628 = _mm_load_si128(&v2344);
  v2450 = 0;
  v2449 = v628;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2459,
    (__int64)&v2447,
    2,
    v629,
    v630,
    v631,
    v799,
    v962,
    v1125,
    v1226,
    v1327,
    v1428,
    v1529,
    v1630,
    v1731,
    (int)v1832,
    v1933,
    v2034,
    v2135,
    v2237,
    v2338);
  v2460 = 0;
  LOBYTE(v2343) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v2136,
    (__int64)v2455,
    3,
    v632,
    v633,
    v634,
    v800,
    v963,
    v1126,
    v1227,
    v1328,
    v1429,
    v1530,
    v1631,
    v1732,
    v1833,
    v1934,
    v2035,
    (__int64)v2136,
    v2238,
    v2339);
  v635 = v2461;
  do
  {
    v635 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v635 != v2455 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO_(
    (__int64)&v2341,
    "reanalyze",
    "Mark address range for re-analysis by the auto-analyzer",
    v2137,
    (__int64)ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_reanalyze);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v2342) = v2340;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v2465 - __readfsqword(0x28u);
}

