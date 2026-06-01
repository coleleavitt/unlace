unsigned __int64 __fastcall ida_mcp::tools::problems::register_tools(
        ida_mcp::tools::problems *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i v9; // xmm0
  char v10; // si
  __int64 v11; // rdx
  __m128i si128; // xmm2
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
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
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 *v61; // r14
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 *v66; // r14
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
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
  __m128i v84; // xmm0
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  char v88; // si
  __m128i *v89; // r14
  __int64 v90; // rax
  __int64 *v91; // r14
  __m128i v92; // xmm3
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rsi
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 *v98; // r14
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 *v103; // r14
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rsi
  char *v111; // rdi
  __int64 v112; // rcx
  __int64 v113; // r9
  __int64 *v114; // r14
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 *v119; // r14
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
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
  __int64 *v139; // r14
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 *v144; // r14
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __m128i v149; // xmm0
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __m128i *v156; // r14
  __int64 v157; // rax
  __m128i v158; // xmm4
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rsi
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 *v165; // r14
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 *v170; // r14
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rsi
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 *v181; // r14
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 *v186; // r14
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 *v200; // r14
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rax
  __int64 *v206; // r14
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // rcx
  __int64 v212; // r8
  __int64 v213; // r9
  __int64 *v214; // r14
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 *v219; // r14
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
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  __int64 v236; // rcx
  __int64 v237; // r8
  __int64 v238; // r9
  __int64 *v239; // r14
  __int64 v240; // rdx
  __int64 v241; // rcx
  __int64 v242; // r8
  __int64 v243; // r9
  __int64 *v244; // r14
  __int64 v245; // rdx
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 v248; // r9
  __m128i v249; // xmm0
  __int64 v250; // rcx
  __int64 v251; // r8
  __int64 v252; // r9
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  __m128i *v256; // r14
  __int64 v257; // rax
  __m128i v258; // xmm5
  __int64 v259; // rax
  __int64 v260; // rax
  __int64 v261; // rsi
  __int64 v262; // rcx
  __int64 v263; // r8
  __int64 v264; // r9
  __int64 *v265; // r14
  __int64 v266; // rdx
  __int64 v267; // rcx
  __int64 v268; // r8
  __int64 v269; // r9
  __int64 *v270; // r14
  __int64 v271; // rdx
  __int64 v272; // rcx
  __int64 v273; // r8
  __int64 v274; // r9
  __int64 v275; // rax
  __int64 v276; // rax
  __int64 v277; // rsi
  __int64 v278; // rcx
  __int64 v279; // r8
  __int64 v280; // r9
  __int64 *v281; // r14
  __int64 v282; // rdx
  __int64 v283; // rcx
  __int64 v284; // r8
  __int64 v285; // r9
  __int64 *v286; // r14
  __int64 v287; // rdx
  __int64 v288; // rcx
  __int64 v289; // r8
  __int64 v290; // r9
  __int64 v291; // rcx
  __int64 v292; // r8
  __int64 v293; // r9
  __int64 v294; // rcx
  __int64 v295; // r8
  __int64 v296; // r9
  __int64 v297; // rcx
  __int64 v298; // r8
  __int64 v299; // r9
  __int64 *v300; // r14
  __int64 v301; // rdx
  __int64 v302; // rcx
  __int64 v303; // r8
  __int64 v304; // r9
  __int64 v305; // rax
  __int64 v306; // rax
  __int64 v307; // rsi
  __int64 v308; // rcx
  __int64 v309; // r8
  __int64 v310; // r9
  __int64 *v311; // r14
  __int64 v312; // rdx
  __int64 v313; // rcx
  __int64 v314; // r8
  __int64 v315; // r9
  __int64 *v316; // r14
  __int64 v317; // rdx
  __int64 v318; // rcx
  __int64 v319; // r8
  __int64 v320; // r9
  __int64 v321; // rcx
  __int64 v322; // r8
  __int64 v323; // r9
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
  __int64 *v336; // r14
  __int64 v337; // rdx
  __int64 v338; // rcx
  __int64 v339; // r8
  __int64 v340; // r9
  __int64 *v341; // r14
  __int64 v342; // rdx
  __int64 v343; // rcx
  __int64 v344; // r8
  __int64 v345; // r9
  __int64 *v346; // r14
  __int64 v347; // rdx
  __int64 v348; // rcx
  __int64 v349; // r8
  __int64 v350; // r9
  __m128i v351; // xmm0
  __int64 v352; // rcx
  __int64 v353; // r8
  __int64 v354; // r9
  __int64 v355; // rcx
  __int64 v356; // r8
  __int64 v357; // r9
  __m128i *v358; // r13
  __int64 v359; // rax
  __m128i v360; // xmm6
  int v362; // [rsp+0h] [rbp-668h]
  int v363; // [rsp+0h] [rbp-668h]
  int v364; // [rsp+0h] [rbp-668h]
  int v365; // [rsp+0h] [rbp-668h]
  int v366; // [rsp+0h] [rbp-668h]
  int v367; // [rsp+0h] [rbp-668h]
  int v368; // [rsp+0h] [rbp-668h]
  int v369; // [rsp+0h] [rbp-668h]
  int v370; // [rsp+0h] [rbp-668h]
  int v371; // [rsp+0h] [rbp-668h]
  int v372; // [rsp+0h] [rbp-668h]
  int v373; // [rsp+0h] [rbp-668h]
  int v374; // [rsp+0h] [rbp-668h]
  int v375; // [rsp+0h] [rbp-668h]
  int v376; // [rsp+0h] [rbp-668h]
  int v377; // [rsp+0h] [rbp-668h]
  int v378; // [rsp+0h] [rbp-668h]
  int v379; // [rsp+0h] [rbp-668h]
  int v380; // [rsp+0h] [rbp-668h]
  int v381; // [rsp+0h] [rbp-668h]
  int v382; // [rsp+0h] [rbp-668h]
  int v383; // [rsp+0h] [rbp-668h]
  int v384; // [rsp+0h] [rbp-668h]
  int v385; // [rsp+0h] [rbp-668h]
  int v386; // [rsp+0h] [rbp-668h]
  int v387; // [rsp+0h] [rbp-668h]
  int v388; // [rsp+0h] [rbp-668h]
  int v389; // [rsp+0h] [rbp-668h]
  int v390; // [rsp+0h] [rbp-668h]
  int v391; // [rsp+0h] [rbp-668h]
  int v392; // [rsp+0h] [rbp-668h]
  int v393; // [rsp+0h] [rbp-668h]
  int v394; // [rsp+0h] [rbp-668h]
  int v395; // [rsp+0h] [rbp-668h]
  int v396; // [rsp+0h] [rbp-668h]
  int v397; // [rsp+0h] [rbp-668h]
  int v398; // [rsp+0h] [rbp-668h]
  int v399; // [rsp+0h] [rbp-668h]
  int v400; // [rsp+0h] [rbp-668h]
  int v401; // [rsp+0h] [rbp-668h]
  int v402; // [rsp+0h] [rbp-668h]
  int v403; // [rsp+0h] [rbp-668h]
  int v404; // [rsp+0h] [rbp-668h]
  int v405; // [rsp+0h] [rbp-668h]
  int v406; // [rsp+0h] [rbp-668h]
  int v407; // [rsp+0h] [rbp-668h]
  int v408; // [rsp+0h] [rbp-668h]
  int v409; // [rsp+0h] [rbp-668h]
  int v410; // [rsp+0h] [rbp-668h]
  int v411; // [rsp+0h] [rbp-668h]
  int v412; // [rsp+0h] [rbp-668h]
  int v413; // [rsp+0h] [rbp-668h]
  int v414; // [rsp+0h] [rbp-668h]
  int v415; // [rsp+0h] [rbp-668h]
  int v416; // [rsp+0h] [rbp-668h]
  int v417; // [rsp+0h] [rbp-668h]
  int v418; // [rsp+0h] [rbp-668h]
  int v419; // [rsp+0h] [rbp-668h]
  int v420; // [rsp+0h] [rbp-668h]
  int v421; // [rsp+0h] [rbp-668h]
  int v422; // [rsp+0h] [rbp-668h]
  int v423; // [rsp+0h] [rbp-668h]
  int v424; // [rsp+0h] [rbp-668h]
  int v425; // [rsp+0h] [rbp-668h]
  int v426; // [rsp+0h] [rbp-668h]
  int v427; // [rsp+0h] [rbp-668h]
  int v428; // [rsp+0h] [rbp-668h]
  int v429; // [rsp+0h] [rbp-668h]
  int v430; // [rsp+0h] [rbp-668h]
  int v431; // [rsp+0h] [rbp-668h]
  int v432; // [rsp+0h] [rbp-668h]
  int v433; // [rsp+0h] [rbp-668h]
  int v434; // [rsp+0h] [rbp-668h]
  int v435; // [rsp+0h] [rbp-668h]
  int v436; // [rsp+0h] [rbp-668h]
  int v437; // [rsp+8h] [rbp-660h]
  int v438; // [rsp+8h] [rbp-660h]
  int v439; // [rsp+8h] [rbp-660h]
  int v440; // [rsp+8h] [rbp-660h]
  int v441; // [rsp+8h] [rbp-660h]
  int v442; // [rsp+8h] [rbp-660h]
  int v443; // [rsp+8h] [rbp-660h]
  int v444; // [rsp+8h] [rbp-660h]
  int v445; // [rsp+8h] [rbp-660h]
  int v446; // [rsp+8h] [rbp-660h]
  __int64 v447; // [rsp+8h] [rbp-660h]
  int v448; // [rsp+8h] [rbp-660h]
  int v449; // [rsp+8h] [rbp-660h]
  __int64 v450; // [rsp+8h] [rbp-660h]
  __int64 v451; // [rsp+8h] [rbp-660h]
  int v452; // [rsp+8h] [rbp-660h]
  int v453; // [rsp+8h] [rbp-660h]
  __int64 v454; // [rsp+8h] [rbp-660h]
  int v455; // [rsp+8h] [rbp-660h]
  int v456; // [rsp+8h] [rbp-660h]
  __int64 v457; // [rsp+8h] [rbp-660h]
  __int64 v458; // [rsp+8h] [rbp-660h]
  __int64 v459; // [rsp+8h] [rbp-660h]
  __int64 v460; // [rsp+8h] [rbp-660h]
  __int64 v461; // [rsp+8h] [rbp-660h]
  int v462; // [rsp+8h] [rbp-660h]
  int v463; // [rsp+8h] [rbp-660h]
  __int64 v464; // [rsp+8h] [rbp-660h]
  __int64 v465; // [rsp+8h] [rbp-660h]
  __int64 v466; // [rsp+8h] [rbp-660h]
  int v467; // [rsp+8h] [rbp-660h]
  int v468; // [rsp+8h] [rbp-660h]
  __int64 v469; // [rsp+8h] [rbp-660h]
  int v470; // [rsp+8h] [rbp-660h]
  int v471; // [rsp+8h] [rbp-660h]
  __int64 v472; // [rsp+8h] [rbp-660h]
  __int64 v473; // [rsp+8h] [rbp-660h]
  __int64 v474; // [rsp+8h] [rbp-660h]
  int v475; // [rsp+8h] [rbp-660h]
  int v476; // [rsp+8h] [rbp-660h]
  __int64 v477; // [rsp+8h] [rbp-660h]
  int v478; // [rsp+8h] [rbp-660h]
  int v479; // [rsp+8h] [rbp-660h]
  __int64 v480; // [rsp+8h] [rbp-660h]
  __int64 v481; // [rsp+8h] [rbp-660h]
  __int64 v482; // [rsp+8h] [rbp-660h]
  __int64 v483; // [rsp+8h] [rbp-660h]
  __int64 v484; // [rsp+8h] [rbp-660h]
  int v485; // [rsp+8h] [rbp-660h]
  int v486; // [rsp+8h] [rbp-660h]
  __int64 v487; // [rsp+8h] [rbp-660h]
  __int64 v488; // [rsp+8h] [rbp-660h]
  __int64 v489; // [rsp+8h] [rbp-660h]
  int v490; // [rsp+8h] [rbp-660h]
  int v491; // [rsp+8h] [rbp-660h]
  __int64 v492; // [rsp+8h] [rbp-660h]
  int v493; // [rsp+8h] [rbp-660h]
  int v494; // [rsp+8h] [rbp-660h]
  __int64 v495; // [rsp+8h] [rbp-660h]
  __int64 v496; // [rsp+8h] [rbp-660h]
  __int64 v497; // [rsp+8h] [rbp-660h]
  int v498; // [rsp+8h] [rbp-660h]
  __int64 v499; // [rsp+8h] [rbp-660h]
  int v500; // [rsp+8h] [rbp-660h]
  int v501; // [rsp+8h] [rbp-660h]
  __int64 v502; // [rsp+8h] [rbp-660h]
  __int64 v503; // [rsp+8h] [rbp-660h]
  __int64 v504; // [rsp+8h] [rbp-660h]
  __int64 v505; // [rsp+8h] [rbp-660h]
  __int64 v506; // [rsp+8h] [rbp-660h]
  int v507; // [rsp+8h] [rbp-660h]
  int v508; // [rsp+8h] [rbp-660h]
  int v509; // [rsp+8h] [rbp-660h]
  __int64 v510; // [rsp+8h] [rbp-660h]
  __int64 v511; // [rsp+8h] [rbp-660h]
  __int64 v512; // [rsp+10h] [rbp-658h]
  __int64 v513; // [rsp+10h] [rbp-658h]
  __int64 v514; // [rsp+10h] [rbp-658h]
  __int64 v515; // [rsp+10h] [rbp-658h]
  __int64 v516; // [rsp+10h] [rbp-658h]
  __int64 v517; // [rsp+10h] [rbp-658h]
  __int64 v518; // [rsp+10h] [rbp-658h]
  __int64 v519; // [rsp+10h] [rbp-658h]
  __int64 v520; // [rsp+10h] [rbp-658h]
  __int64 v521; // [rsp+10h] [rbp-658h]
  int v522; // [rsp+10h] [rbp-658h]
  __int64 v523; // [rsp+10h] [rbp-658h]
  __int64 v524; // [rsp+10h] [rbp-658h]
  int v525; // [rsp+10h] [rbp-658h]
  int v526; // [rsp+10h] [rbp-658h]
  __int64 v527; // [rsp+10h] [rbp-658h]
  __int64 v528; // [rsp+10h] [rbp-658h]
  int v529; // [rsp+10h] [rbp-658h]
  __int64 v530; // [rsp+10h] [rbp-658h]
  __int64 v531; // [rsp+10h] [rbp-658h]
  int v532; // [rsp+10h] [rbp-658h]
  int v533; // [rsp+10h] [rbp-658h]
  int v534; // [rsp+10h] [rbp-658h]
  int v535; // [rsp+10h] [rbp-658h]
  int v536; // [rsp+10h] [rbp-658h]
  __int64 v537; // [rsp+10h] [rbp-658h]
  __int64 v538; // [rsp+10h] [rbp-658h]
  int v539; // [rsp+10h] [rbp-658h]
  int v540; // [rsp+10h] [rbp-658h]
  int v541; // [rsp+10h] [rbp-658h]
  __int64 v542; // [rsp+10h] [rbp-658h]
  __int64 v543; // [rsp+10h] [rbp-658h]
  int v544; // [rsp+10h] [rbp-658h]
  __int64 v545; // [rsp+10h] [rbp-658h]
  __int64 v546; // [rsp+10h] [rbp-658h]
  int v547; // [rsp+10h] [rbp-658h]
  int v548; // [rsp+10h] [rbp-658h]
  int v549; // [rsp+10h] [rbp-658h]
  __int64 v550; // [rsp+10h] [rbp-658h]
  __int64 v551; // [rsp+10h] [rbp-658h]
  int v552; // [rsp+10h] [rbp-658h]
  __int64 v553; // [rsp+10h] [rbp-658h]
  __int64 v554; // [rsp+10h] [rbp-658h]
  int v555; // [rsp+10h] [rbp-658h]
  int v556; // [rsp+10h] [rbp-658h]
  int v557; // [rsp+10h] [rbp-658h]
  int v558; // [rsp+10h] [rbp-658h]
  int v559; // [rsp+10h] [rbp-658h]
  __int64 v560; // [rsp+10h] [rbp-658h]
  __int64 v561; // [rsp+10h] [rbp-658h]
  int v562; // [rsp+10h] [rbp-658h]
  int v563; // [rsp+10h] [rbp-658h]
  int v564; // [rsp+10h] [rbp-658h]
  __int64 v565; // [rsp+10h] [rbp-658h]
  __int64 v566; // [rsp+10h] [rbp-658h]
  int v567; // [rsp+10h] [rbp-658h]
  __int64 v568; // [rsp+10h] [rbp-658h]
  __int64 v569; // [rsp+10h] [rbp-658h]
  int v570; // [rsp+10h] [rbp-658h]
  int v571; // [rsp+10h] [rbp-658h]
  int v572; // [rsp+10h] [rbp-658h]
  __int64 v573; // [rsp+10h] [rbp-658h]
  int v574; // [rsp+10h] [rbp-658h]
  __int64 v575; // [rsp+10h] [rbp-658h]
  __int64 v576; // [rsp+10h] [rbp-658h]
  int v577; // [rsp+10h] [rbp-658h]
  int v578; // [rsp+10h] [rbp-658h]
  int v579; // [rsp+10h] [rbp-658h]
  int v580; // [rsp+10h] [rbp-658h]
  int v581; // [rsp+10h] [rbp-658h]
  __int64 v582; // [rsp+10h] [rbp-658h]
  __int64 v583; // [rsp+10h] [rbp-658h]
  __int64 v584; // [rsp+10h] [rbp-658h]
  int v585; // [rsp+10h] [rbp-658h]
  int v586; // [rsp+10h] [rbp-658h]
  int v587; // [rsp+18h] [rbp-650h]
  int v588; // [rsp+18h] [rbp-650h]
  int v589; // [rsp+18h] [rbp-650h]
  int v590; // [rsp+18h] [rbp-650h]
  int v591; // [rsp+18h] [rbp-650h]
  int v592; // [rsp+18h] [rbp-650h]
  int v593; // [rsp+18h] [rbp-650h]
  int v594; // [rsp+18h] [rbp-650h]
  int v595; // [rsp+18h] [rbp-650h]
  int v596; // [rsp+18h] [rbp-650h]
  int v597; // [rsp+18h] [rbp-650h]
  int v598; // [rsp+18h] [rbp-650h]
  int v599; // [rsp+18h] [rbp-650h]
  int v600; // [rsp+18h] [rbp-650h]
  int v601; // [rsp+18h] [rbp-650h]
  int v602; // [rsp+18h] [rbp-650h]
  int v603; // [rsp+18h] [rbp-650h]
  int v604; // [rsp+18h] [rbp-650h]
  int v605; // [rsp+18h] [rbp-650h]
  int v606; // [rsp+18h] [rbp-650h]
  int v607; // [rsp+18h] [rbp-650h]
  int v608; // [rsp+18h] [rbp-650h]
  int v609; // [rsp+18h] [rbp-650h]
  int v610; // [rsp+18h] [rbp-650h]
  int v611; // [rsp+18h] [rbp-650h]
  int v612; // [rsp+18h] [rbp-650h]
  int v613; // [rsp+18h] [rbp-650h]
  int v614; // [rsp+18h] [rbp-650h]
  int v615; // [rsp+18h] [rbp-650h]
  int v616; // [rsp+18h] [rbp-650h]
  int v617; // [rsp+18h] [rbp-650h]
  int v618; // [rsp+18h] [rbp-650h]
  int v619; // [rsp+18h] [rbp-650h]
  int v620; // [rsp+18h] [rbp-650h]
  int v621; // [rsp+18h] [rbp-650h]
  int v622; // [rsp+18h] [rbp-650h]
  int v623; // [rsp+20h] [rbp-648h]
  int v624; // [rsp+20h] [rbp-648h]
  int v625; // [rsp+20h] [rbp-648h]
  int v626; // [rsp+20h] [rbp-648h]
  int v627; // [rsp+20h] [rbp-648h]
  int v628; // [rsp+20h] [rbp-648h]
  int v629; // [rsp+20h] [rbp-648h]
  int v630; // [rsp+20h] [rbp-648h]
  int v631; // [rsp+20h] [rbp-648h]
  int v632; // [rsp+20h] [rbp-648h]
  int v633; // [rsp+20h] [rbp-648h]
  int v634; // [rsp+20h] [rbp-648h]
  int v635; // [rsp+20h] [rbp-648h]
  int v636; // [rsp+20h] [rbp-648h]
  int v637; // [rsp+20h] [rbp-648h]
  int v638; // [rsp+20h] [rbp-648h]
  int v639; // [rsp+20h] [rbp-648h]
  int v640; // [rsp+20h] [rbp-648h]
  int v641; // [rsp+20h] [rbp-648h]
  int v642; // [rsp+20h] [rbp-648h]
  int v643; // [rsp+20h] [rbp-648h]
  int v644; // [rsp+20h] [rbp-648h]
  int v645; // [rsp+20h] [rbp-648h]
  int v646; // [rsp+20h] [rbp-648h]
  int v647; // [rsp+20h] [rbp-648h]
  int v648; // [rsp+20h] [rbp-648h]
  int v649; // [rsp+20h] [rbp-648h]
  int v650; // [rsp+20h] [rbp-648h]
  int v651; // [rsp+20h] [rbp-648h]
  int v652; // [rsp+20h] [rbp-648h]
  int v653; // [rsp+20h] [rbp-648h]
  int v654; // [rsp+20h] [rbp-648h]
  int v655; // [rsp+20h] [rbp-648h]
  int v656; // [rsp+20h] [rbp-648h]
  int v657; // [rsp+20h] [rbp-648h]
  int v658; // [rsp+20h] [rbp-648h]
  int v659; // [rsp+28h] [rbp-640h]
  int v660; // [rsp+28h] [rbp-640h]
  int v661; // [rsp+28h] [rbp-640h]
  __int64 v662; // [rsp+28h] [rbp-640h]
  int v663; // [rsp+28h] [rbp-640h]
  int v664; // [rsp+28h] [rbp-640h]
  int v665; // [rsp+28h] [rbp-640h]
  int v666; // [rsp+28h] [rbp-640h]
  int v667; // [rsp+28h] [rbp-640h]
  int v668; // [rsp+28h] [rbp-640h]
  int v669; // [rsp+28h] [rbp-640h]
  int v670; // [rsp+28h] [rbp-640h]
  int v671; // [rsp+28h] [rbp-640h]
  int v672; // [rsp+28h] [rbp-640h]
  int v673; // [rsp+28h] [rbp-640h]
  _QWORD *v674; // [rsp+28h] [rbp-640h]
  int v675; // [rsp+28h] [rbp-640h]
  __int64 v676; // [rsp+28h] [rbp-640h]
  int v677; // [rsp+28h] [rbp-640h]
  int v678; // [rsp+28h] [rbp-640h]
  int v679; // [rsp+28h] [rbp-640h]
  int v680; // [rsp+28h] [rbp-640h]
  int v681; // [rsp+28h] [rbp-640h]
  int v682; // [rsp+28h] [rbp-640h]
  int v683; // [rsp+28h] [rbp-640h]
  int v684; // [rsp+28h] [rbp-640h]
  int v685; // [rsp+28h] [rbp-640h]
  int v686; // [rsp+28h] [rbp-640h]
  _QWORD *v687; // [rsp+28h] [rbp-640h]
  int v688; // [rsp+28h] [rbp-640h]
  __int64 v689; // [rsp+28h] [rbp-640h]
  int v690; // [rsp+28h] [rbp-640h]
  int v691; // [rsp+28h] [rbp-640h]
  int v692; // [rsp+28h] [rbp-640h]
  int v693; // [rsp+28h] [rbp-640h]
  int v694; // [rsp+28h] [rbp-640h]
  __int64 v695; // [rsp+30h] [rbp-638h]
  __int64 v696; // [rsp+30h] [rbp-638h]
  __int64 v697; // [rsp+30h] [rbp-638h]
  __int64 v698; // [rsp+30h] [rbp-638h]
  __int64 v699; // [rsp+30h] [rbp-638h]
  __int64 v700; // [rsp+30h] [rbp-638h]
  __int64 v701; // [rsp+30h] [rbp-638h]
  __int64 v702; // [rsp+30h] [rbp-638h]
  __int64 v703; // [rsp+30h] [rbp-638h]
  __int64 v704; // [rsp+30h] [rbp-638h]
  __int64 v705; // [rsp+30h] [rbp-638h]
  _QWORD *v706; // [rsp+30h] [rbp-638h]
  __int64 v707; // [rsp+30h] [rbp-638h]
  __int64 v708; // [rsp+30h] [rbp-638h]
  __int64 v709; // [rsp+30h] [rbp-638h]
  __int64 v710; // [rsp+30h] [rbp-638h]
  __int64 v711; // [rsp+30h] [rbp-638h]
  __int64 v712; // [rsp+30h] [rbp-638h]
  __int64 v713; // [rsp+30h] [rbp-638h]
  __int64 v714; // [rsp+30h] [rbp-638h]
  __int64 v715; // [rsp+30h] [rbp-638h]
  __int64 v716; // [rsp+30h] [rbp-638h]
  __int64 v717; // [rsp+30h] [rbp-638h]
  __int64 v718; // [rsp+30h] [rbp-638h]
  _QWORD *v719; // [rsp+30h] [rbp-638h]
  __int64 v720; // [rsp+30h] [rbp-638h]
  __int64 v721; // [rsp+30h] [rbp-638h]
  __int64 v722; // [rsp+30h] [rbp-638h]
  __int64 v723; // [rsp+30h] [rbp-638h]
  __int64 v724; // [rsp+30h] [rbp-638h]
  __int64 v725; // [rsp+30h] [rbp-638h]
  __int64 v726; // [rsp+30h] [rbp-638h]
  __int64 v727; // [rsp+30h] [rbp-638h]
  __int64 v728; // [rsp+30h] [rbp-638h]
  __int64 v729; // [rsp+30h] [rbp-638h]
  __int64 v730; // [rsp+30h] [rbp-638h]
  int v731; // [rsp+38h] [rbp-630h]
  int v732; // [rsp+38h] [rbp-630h]
  int v733; // [rsp+38h] [rbp-630h]
  int v734; // [rsp+38h] [rbp-630h]
  int v735; // [rsp+38h] [rbp-630h]
  int v736; // [rsp+38h] [rbp-630h]
  int v737; // [rsp+38h] [rbp-630h]
  int v738; // [rsp+38h] [rbp-630h]
  int v739; // [rsp+38h] [rbp-630h]
  int v740; // [rsp+38h] [rbp-630h]
  int v741; // [rsp+38h] [rbp-630h]
  int v742; // [rsp+38h] [rbp-630h]
  int v743; // [rsp+38h] [rbp-630h]
  int v744; // [rsp+38h] [rbp-630h]
  int v745; // [rsp+38h] [rbp-630h]
  int v746; // [rsp+38h] [rbp-630h]
  int v747; // [rsp+38h] [rbp-630h]
  int v748; // [rsp+38h] [rbp-630h]
  int v749; // [rsp+38h] [rbp-630h]
  int v750; // [rsp+38h] [rbp-630h]
  int v751; // [rsp+38h] [rbp-630h]
  int v752; // [rsp+38h] [rbp-630h]
  int v753; // [rsp+38h] [rbp-630h]
  int v754; // [rsp+38h] [rbp-630h]
  int v755; // [rsp+38h] [rbp-630h]
  int v756; // [rsp+38h] [rbp-630h]
  int v757; // [rsp+38h] [rbp-630h]
  int v758; // [rsp+38h] [rbp-630h]
  int v759; // [rsp+38h] [rbp-630h]
  int v760; // [rsp+38h] [rbp-630h]
  int v761; // [rsp+38h] [rbp-630h]
  int v762; // [rsp+38h] [rbp-630h]
  int v763; // [rsp+38h] [rbp-630h]
  int v764; // [rsp+38h] [rbp-630h]
  int v765; // [rsp+38h] [rbp-630h]
  int v766; // [rsp+38h] [rbp-630h]
  int v767; // [rsp+40h] [rbp-628h]
  int v768; // [rsp+40h] [rbp-628h]
  int v769; // [rsp+40h] [rbp-628h]
  int v770; // [rsp+40h] [rbp-628h]
  int v771; // [rsp+40h] [rbp-628h]
  int v772; // [rsp+40h] [rbp-628h]
  int v773; // [rsp+40h] [rbp-628h]
  int v774; // [rsp+40h] [rbp-628h]
  int v775; // [rsp+40h] [rbp-628h]
  int v776; // [rsp+40h] [rbp-628h]
  int v777; // [rsp+40h] [rbp-628h]
  int v778; // [rsp+40h] [rbp-628h]
  int v779; // [rsp+40h] [rbp-628h]
  int v780; // [rsp+40h] [rbp-628h]
  int v781; // [rsp+40h] [rbp-628h]
  int v782; // [rsp+40h] [rbp-628h]
  int v783; // [rsp+40h] [rbp-628h]
  int v784; // [rsp+40h] [rbp-628h]
  int v785; // [rsp+40h] [rbp-628h]
  int v786; // [rsp+40h] [rbp-628h]
  int v787; // [rsp+40h] [rbp-628h]
  int v788; // [rsp+40h] [rbp-628h]
  int v789; // [rsp+40h] [rbp-628h]
  int v790; // [rsp+40h] [rbp-628h]
  int v791; // [rsp+40h] [rbp-628h]
  int v792; // [rsp+40h] [rbp-628h]
  int v793; // [rsp+40h] [rbp-628h]
  int v794; // [rsp+40h] [rbp-628h]
  int v795; // [rsp+40h] [rbp-628h]
  int v796; // [rsp+40h] [rbp-628h]
  int v797; // [rsp+40h] [rbp-628h]
  int v798; // [rsp+40h] [rbp-628h]
  int v799; // [rsp+40h] [rbp-628h]
  int v800; // [rsp+40h] [rbp-628h]
  int v801; // [rsp+40h] [rbp-628h]
  int v802; // [rsp+40h] [rbp-628h]
  int v803; // [rsp+48h] [rbp-620h]
  int v804; // [rsp+48h] [rbp-620h]
  int v805; // [rsp+48h] [rbp-620h]
  int v806; // [rsp+48h] [rbp-620h]
  int v807; // [rsp+48h] [rbp-620h]
  __int64 v808; // [rsp+48h] [rbp-620h]
  int v809; // [rsp+48h] [rbp-620h]
  int v810; // [rsp+48h] [rbp-620h]
  int v811; // [rsp+48h] [rbp-620h]
  int v812; // [rsp+48h] [rbp-620h]
  int v813; // [rsp+48h] [rbp-620h]
  int v814; // [rsp+48h] [rbp-620h]
  int v815; // [rsp+48h] [rbp-620h]
  int v816; // [rsp+48h] [rbp-620h]
  _QWORD *v817; // [rsp+48h] [rbp-620h]
  int v818; // [rsp+48h] [rbp-620h]
  int v819; // [rsp+48h] [rbp-620h]
  int v820; // [rsp+48h] [rbp-620h]
  int v821; // [rsp+48h] [rbp-620h]
  __int64 v822; // [rsp+48h] [rbp-620h]
  int v823; // [rsp+48h] [rbp-620h]
  int v824; // [rsp+48h] [rbp-620h]
  int v825; // [rsp+48h] [rbp-620h]
  int v826; // [rsp+48h] [rbp-620h]
  int v827; // [rsp+48h] [rbp-620h]
  int v828; // [rsp+48h] [rbp-620h]
  int v829; // [rsp+48h] [rbp-620h]
  _QWORD *v830; // [rsp+48h] [rbp-620h]
  int v831; // [rsp+48h] [rbp-620h]
  int v832; // [rsp+48h] [rbp-620h]
  int v833; // [rsp+48h] [rbp-620h]
  int v834; // [rsp+48h] [rbp-620h]
  __int64 v835; // [rsp+48h] [rbp-620h]
  int v836; // [rsp+48h] [rbp-620h]
  int v837; // [rsp+48h] [rbp-620h]
  int v838; // [rsp+48h] [rbp-620h]
  int v839; // [rsp+50h] [rbp-618h]
  int v840; // [rsp+50h] [rbp-618h]
  int v841; // [rsp+50h] [rbp-618h]
  int v842; // [rsp+50h] [rbp-618h]
  int v843; // [rsp+50h] [rbp-618h]
  int v844; // [rsp+50h] [rbp-618h]
  int v845; // [rsp+50h] [rbp-618h]
  int v846; // [rsp+50h] [rbp-618h]
  int v847; // [rsp+50h] [rbp-618h]
  int v848; // [rsp+50h] [rbp-618h]
  int v849; // [rsp+50h] [rbp-618h]
  int v850; // [rsp+50h] [rbp-618h]
  int v851; // [rsp+50h] [rbp-618h]
  int v852; // [rsp+50h] [rbp-618h]
  int v853; // [rsp+50h] [rbp-618h]
  int v854; // [rsp+50h] [rbp-618h]
  int v855; // [rsp+50h] [rbp-618h]
  int v856; // [rsp+50h] [rbp-618h]
  int v857; // [rsp+50h] [rbp-618h]
  int v858; // [rsp+50h] [rbp-618h]
  int v859; // [rsp+50h] [rbp-618h]
  int v860; // [rsp+50h] [rbp-618h]
  int v861; // [rsp+50h] [rbp-618h]
  int v862; // [rsp+50h] [rbp-618h]
  int v863; // [rsp+50h] [rbp-618h]
  int v864; // [rsp+50h] [rbp-618h]
  int v865; // [rsp+50h] [rbp-618h]
  int v866; // [rsp+50h] [rbp-618h]
  int v867; // [rsp+50h] [rbp-618h]
  int v868; // [rsp+50h] [rbp-618h]
  int v869; // [rsp+50h] [rbp-618h]
  int v870; // [rsp+50h] [rbp-618h]
  int v871; // [rsp+50h] [rbp-618h]
  int v872; // [rsp+50h] [rbp-618h]
  int v873; // [rsp+50h] [rbp-618h]
  int v874; // [rsp+50h] [rbp-618h]
  char v875; // [rsp+58h] [rbp-610h]
  char v876; // [rsp+58h] [rbp-610h]
  char v877; // [rsp+58h] [rbp-610h]
  char v878; // [rsp+58h] [rbp-610h]
  char v879; // [rsp+58h] [rbp-610h]
  char v880; // [rsp+58h] [rbp-610h]
  char v881; // [rsp+58h] [rbp-610h]
  char v882; // [rsp+58h] [rbp-610h]
  char v883; // [rsp+58h] [rbp-610h]
  char v884; // [rsp+58h] [rbp-610h]
  char v885; // [rsp+58h] [rbp-610h]
  char v886; // [rsp+58h] [rbp-610h]
  char v887; // [rsp+58h] [rbp-610h]
  char v888; // [rsp+58h] [rbp-610h]
  char v889; // [rsp+58h] [rbp-610h]
  char v890; // [rsp+58h] [rbp-610h]
  char v891; // [rsp+58h] [rbp-610h]
  char v892; // [rsp+58h] [rbp-610h]
  char v893; // [rsp+58h] [rbp-610h]
  char v894; // [rsp+58h] [rbp-610h]
  char v895; // [rsp+58h] [rbp-610h]
  char v896; // [rsp+58h] [rbp-610h]
  char v897; // [rsp+58h] [rbp-610h]
  char v898; // [rsp+58h] [rbp-610h]
  char v899; // [rsp+58h] [rbp-610h]
  char v900; // [rsp+58h] [rbp-610h]
  char v901; // [rsp+58h] [rbp-610h]
  char v902; // [rsp+58h] [rbp-610h]
  char v903; // [rsp+58h] [rbp-610h]
  char v904; // [rsp+58h] [rbp-610h]
  char v905; // [rsp+58h] [rbp-610h]
  char v906; // [rsp+58h] [rbp-610h]
  char v907; // [rsp+58h] [rbp-610h]
  char v908; // [rsp+58h] [rbp-610h]
  char v909; // [rsp+58h] [rbp-610h]
  char v910; // [rsp+58h] [rbp-610h]
  __int64 v911; // [rsp+60h] [rbp-608h]
  __int64 v912; // [rsp+60h] [rbp-608h]
  __int64 v913; // [rsp+60h] [rbp-608h]
  __int64 v914; // [rsp+60h] [rbp-608h]
  __int64 v915; // [rsp+60h] [rbp-608h]
  __int64 v916; // [rsp+60h] [rbp-608h]
  __int64 v917; // [rsp+60h] [rbp-608h]
  __int64 v918; // [rsp+60h] [rbp-608h]
  __int64 v919; // [rsp+60h] [rbp-608h]
  __int64 v920; // [rsp+60h] [rbp-608h]
  __int64 v921; // [rsp+60h] [rbp-608h]
  __int64 v922; // [rsp+60h] [rbp-608h]
  __int64 v923; // [rsp+60h] [rbp-608h]
  __int64 v924; // [rsp+60h] [rbp-608h]
  __int64 v925; // [rsp+60h] [rbp-608h]
  __int64 v926; // [rsp+60h] [rbp-608h]
  __int64 v927; // [rsp+60h] [rbp-608h]
  __int64 v928; // [rsp+60h] [rbp-608h]
  __int64 v929; // [rsp+60h] [rbp-608h]
  __int64 v930; // [rsp+60h] [rbp-608h]
  __int64 v931; // [rsp+60h] [rbp-608h]
  __int64 v932; // [rsp+60h] [rbp-608h]
  __int64 v933; // [rsp+60h] [rbp-608h]
  __int64 v934; // [rsp+60h] [rbp-608h]
  __int64 v935; // [rsp+60h] [rbp-608h]
  __int64 v936; // [rsp+60h] [rbp-608h]
  __int64 v937; // [rsp+60h] [rbp-608h]
  __int64 v938; // [rsp+60h] [rbp-608h]
  __int64 v939; // [rsp+60h] [rbp-608h]
  __int64 v940; // [rsp+60h] [rbp-608h]
  __int64 v941; // [rsp+60h] [rbp-608h]
  __int64 v942; // [rsp+60h] [rbp-608h]
  __int64 v943; // [rsp+60h] [rbp-608h]
  __int64 v944; // [rsp+60h] [rbp-608h]
  __int64 v945; // [rsp+60h] [rbp-608h]
  __int64 v946; // [rsp+60h] [rbp-608h]
  int v947; // [rsp+68h] [rbp-600h]
  int v948; // [rsp+68h] [rbp-600h]
  int v949; // [rsp+68h] [rbp-600h]
  int v950; // [rsp+68h] [rbp-600h]
  int v951; // [rsp+68h] [rbp-600h]
  int v952; // [rsp+68h] [rbp-600h]
  int v953; // [rsp+68h] [rbp-600h]
  int v954; // [rsp+68h] [rbp-600h]
  int v955; // [rsp+68h] [rbp-600h]
  int v956; // [rsp+68h] [rbp-600h]
  int v957; // [rsp+68h] [rbp-600h]
  int v958; // [rsp+68h] [rbp-600h]
  int v959; // [rsp+68h] [rbp-600h]
  int v960; // [rsp+68h] [rbp-600h]
  int v961; // [rsp+68h] [rbp-600h]
  int v962; // [rsp+68h] [rbp-600h]
  int v963; // [rsp+68h] [rbp-600h]
  int v964; // [rsp+68h] [rbp-600h]
  int v965; // [rsp+68h] [rbp-600h]
  int v966; // [rsp+68h] [rbp-600h]
  int v967; // [rsp+68h] [rbp-600h]
  int v968; // [rsp+68h] [rbp-600h]
  int v969; // [rsp+68h] [rbp-600h]
  int v970; // [rsp+68h] [rbp-600h]
  int v971; // [rsp+68h] [rbp-600h]
  int v972; // [rsp+68h] [rbp-600h]
  int v973; // [rsp+68h] [rbp-600h]
  int v974; // [rsp+68h] [rbp-600h]
  int v975; // [rsp+68h] [rbp-600h]
  int v976; // [rsp+68h] [rbp-600h]
  int v977; // [rsp+68h] [rbp-600h]
  int v978; // [rsp+68h] [rbp-600h]
  int v979; // [rsp+68h] [rbp-600h]
  int v980; // [rsp+68h] [rbp-600h]
  int v981; // [rsp+68h] [rbp-600h]
  int v982; // [rsp+68h] [rbp-600h]
  __int64 v983; // [rsp+70h] [rbp-5F8h]
  __int64 v984; // [rsp+70h] [rbp-5F8h]
  __int64 v985; // [rsp+70h] [rbp-5F8h]
  __int64 v986; // [rsp+70h] [rbp-5F8h]
  __int64 v987; // [rsp+70h] [rbp-5F8h]
  __int64 v988; // [rsp+70h] [rbp-5F8h]
  __int64 v989; // [rsp+70h] [rbp-5F8h]
  __int64 v990; // [rsp+70h] [rbp-5F8h]
  __int64 v991; // [rsp+70h] [rbp-5F8h]
  __int64 v992; // [rsp+70h] [rbp-5F8h]
  __int64 v993; // [rsp+70h] [rbp-5F8h]
  __int64 v994; // [rsp+70h] [rbp-5F8h]
  __int64 v995; // [rsp+70h] [rbp-5F8h]
  __int64 v996; // [rsp+70h] [rbp-5F8h]
  __int64 v997; // [rsp+70h] [rbp-5F8h]
  __int64 v998; // [rsp+70h] [rbp-5F8h]
  __int64 v999; // [rsp+70h] [rbp-5F8h]
  __int64 v1000; // [rsp+70h] [rbp-5F8h]
  __int64 v1001; // [rsp+70h] [rbp-5F8h]
  __int64 v1002; // [rsp+70h] [rbp-5F8h]
  __int64 v1003; // [rsp+70h] [rbp-5F8h]
  __int64 v1004; // [rsp+70h] [rbp-5F8h]
  __int64 v1005; // [rsp+70h] [rbp-5F8h]
  __int64 v1006; // [rsp+70h] [rbp-5F8h]
  __int64 v1007; // [rsp+70h] [rbp-5F8h]
  __int64 v1008; // [rsp+70h] [rbp-5F8h]
  __int64 v1009; // [rsp+70h] [rbp-5F8h]
  __int64 v1010; // [rsp+70h] [rbp-5F8h]
  __int64 v1011; // [rsp+70h] [rbp-5F8h]
  __int64 v1012; // [rsp+70h] [rbp-5F8h]
  __int64 v1013; // [rsp+70h] [rbp-5F8h]
  __int64 v1014; // [rsp+70h] [rbp-5F8h]
  __int64 v1015; // [rsp+70h] [rbp-5F8h]
  __int64 v1016; // [rsp+70h] [rbp-5F8h]
  __int64 v1017; // [rsp+70h] [rbp-5F8h]
  __int64 v1018; // [rsp+70h] [rbp-5F8h]
  __m128 v1019; // [rsp+80h] [rbp-5E8h] BYREF
  _BYTE *v1020; // [rsp+90h] [rbp-5D8h]
  ida_mcp::tools::problems *v1021; // [rsp+98h] [rbp-5D0h]
  char *v1022; // [rsp+A0h] [rbp-5C8h]
  char *v1023; // [rsp+A8h] [rbp-5C0h]
  const __m128i *v1024; // [rsp+B0h] [rbp-5B8h]
  char *v1025; // [rsp+B8h] [rbp-5B0h]
  char *v1026; // [rsp+C0h] [rbp-5A8h]
  char *v1027; // [rsp+C8h] [rbp-5A0h]
  __int128 *v1028; // [rsp+D0h] [rbp-598h]
  __int64 *v1029; // [rsp+D8h] [rbp-590h]
  _BYTE *v1030; // [rsp+E0h] [rbp-588h]
  _BYTE **v1031; // [rsp+E8h] [rbp-580h]
  _BYTE *v1032; // [rsp+F0h] [rbp-578h]
  __m128i *v1033; // [rsp+F8h] [rbp-570h]
  __int64 *v1034; // [rsp+100h] [rbp-568h]
  __int64 *v1035; // [rsp+108h] [rbp-560h]
  char *v1036; // [rsp+110h] [rbp-558h]
  char *v1037; // [rsp+118h] [rbp-550h]
  const __m128i *v1038; // [rsp+120h] [rbp-548h]
  char *v1039; // [rsp+128h] [rbp-540h]
  char *v1040; // [rsp+130h] [rbp-538h]
  __int8 *v1041; // [rsp+138h] [rbp-530h]
  __int64 *v1042; // [rsp+140h] [rbp-528h]
  __int64 *v1043; // [rsp+148h] [rbp-520h]
  _QWORD *v1044; // [rsp+150h] [rbp-518h]
  char *v1045; // [rsp+158h] [rbp-510h]
  char *v1046; // [rsp+160h] [rbp-508h]
  char *v1047; // [rsp+168h] [rbp-500h]
  __int128 *v1048; // [rsp+170h] [rbp-4F8h]
  char *v1049; // [rsp+178h] [rbp-4F0h]
  char *v1050; // [rsp+180h] [rbp-4E8h]
  __int64 *v1051; // [rsp+188h] [rbp-4E0h]
  __int64 *v1052; // [rsp+190h] [rbp-4D8h]
  __int64 *v1053; // [rsp+198h] [rbp-4D0h]
  __int128 *v1054; // [rsp+1A0h] [rbp-4C8h]
  __int128 *v1055; // [rsp+1A8h] [rbp-4C0h]
  __int128 *v1056; // [rsp+1B0h] [rbp-4B8h]
  __int128 *v1057; // [rsp+1B8h] [rbp-4B0h]
  __int128 *v1058; // [rsp+1C0h] [rbp-4A8h]
  __int128 *v1059; // [rsp+1C8h] [rbp-4A0h]
  __m128i v1060; // [rsp+1D0h] [rbp-498h] BYREF
  __int64 v1061; // [rsp+1E0h] [rbp-488h] BYREF
  __int64 v1062; // [rsp+1E8h] [rbp-480h] BYREF
  char v1063; // [rsp+1F0h] [rbp-478h]
  __int128 v1064; // [rsp+1F8h] [rbp-470h]
  char v1065; // [rsp+210h] [rbp-458h] BYREF
  __int128 v1066; // [rsp+218h] [rbp-450h] BYREF
  char v1067; // [rsp+228h] [rbp-440h]
  __int128 v1068; // [rsp+230h] [rbp-438h] BYREF
  char v1069; // [rsp+240h] [rbp-428h] BYREF
  __int128 v1070; // [rsp+248h] [rbp-420h] BYREF
  char v1071; // [rsp+258h] [rbp-410h]
  __int128 v1072; // [rsp+260h] [rbp-408h] BYREF
  char v1073; // [rsp+270h] [rbp-3F8h] BYREF
  __int128 v1074; // [rsp+278h] [rbp-3F0h] BYREF
  char v1075; // [rsp+288h] [rbp-3E0h]
  __int128 v1076; // [rsp+290h] [rbp-3D8h] BYREF
  __int64 v1077; // [rsp+2A0h] [rbp-3C8h] BYREF
  __int128 v1078; // [rsp+2A8h] [rbp-3C0h]
  __int64 v1079; // [rsp+2B8h] [rbp-3B0h] BYREF
  __int128 v1080; // [rsp+2C0h] [rbp-3A8h] BYREF
  char v1081; // [rsp+2D0h] [rbp-398h] BYREF
  __int128 v1082; // [rsp+2D8h] [rbp-390h] BYREF
  __int64 v1083; // [rsp+2E8h] [rbp-380h] BYREF
  __int128 v1084; // [rsp+2F0h] [rbp-378h] BYREF
  char v1085; // [rsp+300h] [rbp-368h] BYREF
  __int128 v1086; // [rsp+308h] [rbp-360h] BYREF
  char v1087; // [rsp+318h] [rbp-350h]
  __int128 v1088; // [rsp+320h] [rbp-348h] BYREF
  char v1089; // [rsp+330h] [rbp-338h] BYREF
  __int128 v1090; // [rsp+338h] [rbp-330h] BYREF
  char v1091; // [rsp+348h] [rbp-320h]
  __int128 v1092; // [rsp+350h] [rbp-318h] BYREF
  __int64 v1093; // [rsp+360h] [rbp-308h] BYREF
  __int128 v1094; // [rsp+368h] [rbp-300h] BYREF
  __int64 v1095; // [rsp+378h] [rbp-2F0h] BYREF
  char v1096; // [rsp+380h] [rbp-2E8h] BYREF
  __int64 v1097; // [rsp+388h] [rbp-2E0h]
  char v1098; // [rsp+390h] [rbp-2D8h] BYREF
  __int128 v1099; // [rsp+398h] [rbp-2D0h] BYREF
  __int64 v1100; // [rsp+3A8h] [rbp-2C0h] BYREF
  char v1101; // [rsp+3B0h] [rbp-2B8h] BYREF
  __int64 v1102; // [rsp+3B8h] [rbp-2B0h]
  char v1103; // [rsp+3C0h] [rbp-2A8h] BYREF
  __int128 v1104; // [rsp+3C8h] [rbp-2A0h] BYREF
  char v1105; // [rsp+3D8h] [rbp-290h]
  __int128 v1106; // [rsp+3E0h] [rbp-288h] BYREF
  char v1107; // [rsp+3F0h] [rbp-278h] BYREF
  __int128 v1108; // [rsp+3F8h] [rbp-270h] BYREF
  char v1109; // [rsp+408h] [rbp-260h]
  __int128 v1110; // [rsp+410h] [rbp-258h] BYREF
  __int64 v1111; // [rsp+420h] [rbp-248h] BYREF
  __int128 v1112; // [rsp+428h] [rbp-240h] BYREF
  __int64 v1113; // [rsp+438h] [rbp-230h] BYREF
  __int128 v1114; // [rsp+440h] [rbp-228h] BYREF
  char v1115; // [rsp+450h] [rbp-218h] BYREF
  __int128 v1116; // [rsp+458h] [rbp-210h] BYREF
  __int64 v1117; // [rsp+468h] [rbp-200h] BYREF
  char v1118; // [rsp+470h] [rbp-1F8h] BYREF
  __int64 v1119; // [rsp+478h] [rbp-1F0h]
  char v1120; // [rsp+480h] [rbp-1E8h] BYREF
  __int128 v1121; // [rsp+488h] [rbp-1E0h]
  __int64 v1122; // [rsp+498h] [rbp-1D0h] BYREF
  char v1123; // [rsp+4A0h] [rbp-1C8h] BYREF
  __int64 v1124; // [rsp+4A8h] [rbp-1C0h]
  char v1125; // [rsp+4B0h] [rbp-1B8h] BYREF
  __int128 v1126; // [rsp+4B8h] [rbp-1B0h]
  _BYTE v1127[24]; // [rsp+4C8h] [rbp-1A0h] BYREF
  __int64 v1128; // [rsp+4E0h] [rbp-188h] BYREF
  __int128 v1129; // [rsp+4E8h] [rbp-180h] BYREF
  __m128i v1130; // [rsp+4F8h] [rbp-170h] BYREF
  __int64 v1131; // [rsp+508h] [rbp-160h]
  _QWORD v1132[3]; // [rsp+510h] [rbp-158h] BYREF
  char v1133; // [rsp+528h] [rbp-140h] BYREF
  __m128i v1134; // [rsp+530h] [rbp-138h] BYREF
  __m128i v1135; // [rsp+540h] [rbp-128h] BYREF
  __int64 v1136; // [rsp+558h] [rbp-110h]
  _QWORD v1137[2]; // [rsp+560h] [rbp-108h] BYREF
  __int64 v1138; // [rsp+570h] [rbp-F8h]
  char v1139; // [rsp+578h] [rbp-F0h] BYREF
  _BYTE *v1140; // [rsp+580h] [rbp-E8h] BYREF
  __int64 v1141; // [rsp+588h] [rbp-E0h]
  _BYTE v1142[16]; // [rsp+590h] [rbp-D8h] BYREF
  _BYTE *v1143; // [rsp+5A0h] [rbp-C8h] BYREF
  __int64 v1144; // [rsp+5A8h] [rbp-C0h]
  _BYTE v1145[16]; // [rsp+5B0h] [rbp-B8h] BYREF
  char v1146; // [rsp+5C0h] [rbp-A8h]
  __int64 v1147; // [rsp+5C8h] [rbp-A0h]
  char v1148; // [rsp+5E0h] [rbp-88h]
  char v1149; // [rsp+618h] [rbp-50h]
  unsigned __int64 v1150; // [rsp+628h] [rbp-40h]

  v1021 = this;
  v1150 = __readfsqword(0x28u);
  v1030 = v1142;
  v1140 = v1142;
  v1141 = 0;
  v1142[0] = 0;
  v1032 = v1145;
  v1143 = v1145;
  v1145[0] = 0;
  v1144 = 0;
  v1146 = 0;
  v1147 = 0;
  v1148 = 0;
  v1149 = 0;
  std::string::_M_replace();
  v1031 = &v1143;
  std::string::_M_replace();
  *(_QWORD *)&v1126 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1125 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v1127[0] = 0;
  *(_QWORD *)&v1127[8] = 0;
  v1020 = &v1127[8];
  v1126 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1127[0] = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v1024 = (const __m128i *)&v1125;
  *(_OWORD *)&v1127[8] = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1134,
    (const __m128i *)&v1125);
  v1135.m128i_i64[0] = 0;
  LOBYTE(v1128) = 0;
  *(_QWORD *)&v1129 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1128) = 3;
  v4 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v4, "properties", v5, v6, v7, v8, v362, v437, v512);
  v1129 = (unsigned __int64)v4;
  v1033 = &v1060;
  v1019 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v9 = _mm_load_si128(&v1060);
  v1131 = 0;
  v1029 = &v1135.m128i_i64[1];
  v1130 = v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1135.m128i_i64[1],
    (const __m128i *)&v1128);
  v1136 = 0;
  LOBYTE(v1061) = 0;
  v1034 = &v1061;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1061,
    &v1134);
  v10 = v1146;
  v11 = v1062;
  v1146 = v1061;
  LOBYTE(v1061) = v10;
  v1062 = v1147;
  v1147 = v11;
  v1035 = &v1062;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1041 = &v1130.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v1019);
  v1134.m128i_i64[1] = 0;
  v1134.m128i_i64[0] = (__int64)ida_mcp::tools::problems::`anonymous namespace'::handle_list_all_problems;
  v1135 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1135.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v1135.m128i_i64[0])(&v1134, &v1134, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1140);
  v1141 = 0;
  v1142[0] = 0;
  v1140 = v1030;
  v1144 = 0;
  v1143 = v1032;
  v1145[0] = 0;
  v1146 = 0;
  v1147 = 0;
  v1148 = 0;
  v1149 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v1065 = 0;
  v1058 = &v1066;
  *(_QWORD *)&v1066 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1065 = 3;
  v13 = operator new(0x20u);
  *(_QWORD *)v13 = v13 + 16;
  strcpy((char *)(v13 + 16), "type");
  *(_QWORD *)(v13 + 8) = 4;
  v1067 = 0;
  *(_QWORD *)&v1068 = 0;
  v1059 = &v1068;
  v1066 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1067 = 3;
  v14 = operator new(0x20u);
  *(_QWORD *)v14 = v14 + 16;
  strcpy((char *)(v14 + 16), "object");
  *(_QWORD *)(v14 + 8) = 6;
  v1027 = &v1065;
  v1068 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1134,
    (const __m128i *)&v1065);
  v1135.m128i_i64[0] = 0;
  v1120 = 0;
  *(_QWORD *)&v1121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1120 = 3;
  v15 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v15, "properties", v16, v17, v18, v19, v363, v438, v513);
  v1081 = 0;
  *(_QWORD *)&v1082 = 0;
  v1121 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1081 = 3;
  v20 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v20, "problem_type", v21, v22, v23, v24, v364, v439, v514);
  v1069 = 0;
  v1054 = &v1070;
  *(_QWORD *)&v1070 = 0;
  v1082 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1069 = 3;
  v25 = operator new(0x20u);
  *(_QWORD *)v25 = v25 + 16;
  strcpy((char *)(v25 + 16), "type");
  *(_QWORD *)(v25 + 8) = 4;
  v1071 = 0;
  *(_QWORD *)&v1072 = 0;
  v1055 = &v1072;
  v1070 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1071 = 3;
  v26 = operator new(0x20u);
  strcpy((char *)(v26 + 16), "number");
  *(_QWORD *)v26 = v26 + 16;
  *(_QWORD *)(v26 + 8) = 6;
  v1025 = &v1069;
  v1038 = (const __m128i *)&v1077;
  v1072 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1077,
    (const __m128i *)&v1069);
  *((_QWORD *)&v1078 + 1) = 0;
  v1073 = 0;
  *(_QWORD *)&v1074 = 0;
  v1056 = &v1074;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1073 = 3;
  v27 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v27, "description", v28, v29, v30, v31, v365, v440, v515);
  v1075 = 0;
  v1057 = &v1076;
  *(_QWORD *)&v1076 = 0;
  v1074 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1075 = 3;
  v32 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v32, "Problem type ID", v33, v34, v35, v36, v366, v441, v516);
  v1026 = &v1073;
  v1076 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1079,
    (const __m128i *)&v1073);
  *((_QWORD *)&v1080 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1083,
    v1038);
  *((_QWORD *)&v1084 + 1) = 0;
  v1045 = &v1081;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1128,
    (const __m128i *)&v1081);
  *((_QWORD *)&v1129 + 1) = 0;
  v1098 = 0;
  *(_QWORD *)&v1099 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1098 = 3;
  v37 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v37, "start_address", v38, v39, v40, v41, v367, v442, v517);
  v1085 = 0;
  *(_QWORD *)&v1086 = 0;
  v1099 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1085 = 3;
  v42 = operator new(0x20u);
  *(_QWORD *)v42 = v42 + 16;
  strcpy((char *)(v42 + 16), "type");
  *(_QWORD *)(v42 + 8) = 4;
  v1087 = 0;
  *(_QWORD *)&v1088 = 0;
  v1086 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1087 = 3;
  v43 = operator new(0x20u);
  strcpy((char *)(v43 + 16), "string");
  *(_QWORD *)v43 = v43 + 16;
  *(_QWORD *)(v43 + 8) = 6;
  v1046 = &v1085;
  v1088 = (unsigned __int64)v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1093,
    (const __m128i *)&v1085);
  *((_QWORD *)&v1094 + 1) = 0;
  v1089 = 0;
  *(_QWORD *)&v1090 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1089 = 3;
  v44 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v44, "description", v45, v46, v47, v48, v368, v443, v518);
  v1091 = 0;
  *(_QWORD *)&v1092 = 0;
  v1090 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1091 = 3;
  v49 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v49, "Start hex address", v50, v51, v52, v53, v369, v444, v519);
  v1047 = &v1089;
  v1051 = &v1095;
  v1092 = (unsigned __int64)v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1095,
    (const __m128i *)&v1089);
  v1097 = 0;
  v1052 = &v1100;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1100,
    (const __m128i *)&v1093);
  v1102 = 0;
  v1023 = &v1098;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1130,
    (const __m128i *)&v1098);
  v1131 = 0;
  v1115 = 0;
  *(_QWORD *)&v1116 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1115 = 3;
  v54 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v54, "end_address", v55, v56, v57, v58, v370, v445, v520);
  v1103 = 0;
  *(_QWORD *)&v1104 = 0;
  v1116 = (unsigned __int64)v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1103 = 3;
  v59 = operator new(0x20u);
  *(_QWORD *)v59 = v59 + 16;
  strcpy((char *)(v59 + 16), "type");
  *(_QWORD *)(v59 + 8) = 4;
  v1105 = 0;
  *(_QWORD *)&v1106 = 0;
  v1104 = (unsigned __int64)v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1105 = 3;
  v60 = operator new(0x20u);
  strcpy((char *)(v60 + 16), "string");
  *(_QWORD *)v60 = v60 + 16;
  *(_QWORD *)(v60 + 8) = 6;
  v1036 = &v1103;
  v1106 = (unsigned __int64)v60;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1111,
    (const __m128i *)&v1103);
  *((_QWORD *)&v1112 + 1) = 0;
  v1107 = 0;
  *(_QWORD *)&v1108 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1107 = 3;
  v61 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v61,
    "description",
    v62,
    v63,
    v64,
    v65,
    (int)&v1104,
    (int)&v1106,
    (__int64)&v1108);
  v1109 = 0;
  *(_QWORD *)&v1110 = 0;
  v1108 = (unsigned __int64)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1109 = 3;
  v66 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v66, "End hex address", v67, v68, v69, v70, v371, v446, v521);
  v1037 = &v1107;
  v1053 = &v1113;
  v1110 = (unsigned __int64)v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1113,
    (const __m128i *)&v1107);
  *((_QWORD *)&v1114 + 1) = 0;
  v1042 = &v1117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1117,
    (const __m128i *)&v1111);
  v1119 = 0;
  v1022 = &v1115;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1132,
    (const __m128i *)&v1115);
  v1132[2] = 0;
  v1043 = &v1122;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1122,
    (__int64)&v1128,
    3,
    v71,
    v72,
    v73,
    v372,
    v447,
    v522,
    (int)&v1110,
    (int)&v1129,
    (int)&v1111,
    (__int64)&v1093,
    (int)&v1099,
    (int)&v1116,
    v803,
    (int)&v1082,
    (char)&v1086,
    (__int64)&v1088,
    (int)&v1090,
    (__int64)&v1092);
  v1124 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1029,
    (const __m128i *)&v1120);
  v1136 = 0;
  v1125 = 0;
  *(_QWORD *)&v1126 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1125 = 3;
  v74 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v74, "required", v75, v76, v77, v78, v373, v448, v523);
  v1063 = 0;
  v1126 = (unsigned __int64)v74;
  *(_QWORD *)&v1064 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1063 = 3;
  v79 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v79, "problem_type", v80, v81, v82, v83, v374, v449, v524);
  v1064 = (unsigned __int64)v79;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v84 = _mm_load_si128(&v1060);
  v1044 = v1137;
  *(_QWORD *)&v1127[16] = 0;
  *(__m128i *)v1127 = v84;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1137,
    v1024);
  v1138 = 0;
  LOBYTE(v1061) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1034,
    (__int64)&v1134,
    3,
    v85,
    v86,
    v87,
    v375,
    v450,
    v525,
    v587,
    v623,
    v659,
    v695,
    v731,
    v767,
    (int)&v1120,
    v839,
    v875,
    v911,
    v947,
    v983);
  v88 = v1146;
  v89 = (__m128i *)&v1139;
  v1146 = v1061;
  v90 = v1147;
  LOBYTE(v1061) = v88;
  v1147 = v1062;
  v1062 = v90;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v89 = (__m128i *)((char *)v89 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v89 != &v1134 );
  v91 = (__int64 *)&v1133;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1040 = &v1123;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v91 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v91 != &v1128 );
  v1039 = &v1118;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1028 = &v1114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1027 = (char *)&v1112;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1050 = &v1101;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1049 = &v1096;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1026 = (char *)&v1094;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1025 = (char *)&v1084;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1048 = &v1080;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v92 = _mm_load_si128((const __m128i *)&v1019);
  v1134.m128i_i64[1] = 0;
  v1134.m128i_i64[0] = (__int64)ida_mcp::tools::problems::`anonymous namespace'::handle_list_problems_by_type;
  v1135 = v92;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1135.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v1135.m128i_i64[0])(&v1134, &v1134, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1140);
  v1141 = 0;
  v1142[0] = 0;
  v1140 = v1030;
  v1144 = 0;
  v1143 = v1032;
  v1145[0] = 0;
  v1146 = 0;
  v1147 = 0;
  v1148 = 0;
  v1149 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v1103 = 0;
  *(_QWORD *)&v1104 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1103 = 3;
  v93 = operator new(0x20u);
  *(_QWORD *)v93 = v93 + 16;
  strcpy((char *)(v93 + 16), "type");
  *(_QWORD *)(v93 + 8) = 4;
  v1105 = 0;
  *(_QWORD *)&v1106 = 0;
  v1104 = (unsigned __int64)v93;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1105 = 3;
  v94 = operator new(0x20u);
  *(_QWORD *)v94 = v94 + 16;
  v95 = (__int64)v1036;
  strcpy((char *)(v94 + 16), "object");
  *(_QWORD *)(v94 + 8) = 6;
  v1106 = (unsigned __int64)v94;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1134,
    v95,
    2,
    v96,
    v97,
    29795,
    v376,
    v451,
    v526,
    v588,
    v624,
    v660,
    v696,
    v732,
    v768,
    v804,
    v840,
    v876,
    v912,
    v948,
    v984);
  v1135.m128i_i64[0] = 0;
  v1125 = 0;
  *(_QWORD *)&v1126 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1125 = 3;
  v98 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v98, "properties", v99, v100, v101, v102, v377, v452, v527);
  v1120 = 0;
  *(_QWORD *)&v1121 = 0;
  v1126 = (unsigned __int64)v98;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1120 = 3;
  v103 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v103, "address", v104, v105, v106, v107, v378, v453, v528);
  v1107 = 0;
  *(_QWORD *)&v1108 = 0;
  v1121 = (unsigned __int64)v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1107 = 3;
  v108 = operator new(0x20u);
  *(_QWORD *)v108 = v108 + 16;
  strcpy((char *)(v108 + 16), "type");
  *(_QWORD *)(v108 + 8) = 4;
  v1109 = 0;
  *(_QWORD *)&v1110 = 0;
  v1108 = (unsigned __int64)v108;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1109 = 3;
  v109 = operator new(0x20u);
  v110 = (__int64)v1037;
  *(_QWORD *)v109 = v109 + 16;
  v111 = v1022;
  strcpy((char *)(v109 + 16), "string");
  *(_QWORD *)(v109 + 8) = 6;
  v1110 = (unsigned __int64)v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v111,
    v110,
    2,
    v112,
    26478,
    v113,
    v379,
    v454,
    v529,
    v589,
    v625,
    v661,
    v697,
    v733,
    v769,
    v805,
    v841,
    v877,
    v913,
    v949,
    v985);
  *((_QWORD *)&v1116 + 1) = 0;
  LOBYTE(v1111) = 0;
  *(_QWORD *)&v1112 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1111) = 3;
  v114 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v114, "description", v115, v116, v117, v118, v380, v455, v530);
  LOBYTE(v1113) = 0;
  *(_QWORD *)&v1114 = 0;
  v1112 = (unsigned __int64)v114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1113) = 3;
  v119 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v119, "Hex address", v120, v121, v122, v123, v381, v456, v531);
  v1114 = (unsigned __int64)v119;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1042,
    v662,
    2,
    v124,
    v125,
    v126,
    v382,
    v457,
    v532,
    v590,
    v626,
    v662,
    v698,
    v734,
    v770,
    v806,
    v842,
    v878,
    v914,
    v950,
    v986);
  v1119 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1043,
    (__int64)v1022,
    2,
    v127,
    v128,
    v129,
    v383,
    v458,
    v533,
    v591,
    v627,
    v663,
    v699,
    v735,
    v771,
    v807,
    v843,
    v879,
    v915,
    v951,
    v987);
  v1124 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1023,
    v808,
    2,
    v130,
    v131,
    v132,
    v384,
    v459,
    v534,
    v592,
    v628,
    v664,
    v700,
    v736,
    v772,
    v808,
    v844,
    v880,
    v916,
    v952,
    v988);
  *((_QWORD *)&v1099 + 1) = 0;
  v1054 = (__int128 *)v1127;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1127,
    (__int64)v1023,
    1,
    v133,
    v134,
    v135,
    v385,
    v460,
    v535,
    v593,
    v629,
    v665,
    v701,
    v737,
    v773,
    v809,
    v845,
    v881,
    v917,
    v953,
    v989);
  *(_QWORD *)&v1127[16] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1029,
    (__int64)v1024,
    2,
    v136,
    v137,
    v138,
    v386,
    v461,
    v536,
    v594,
    v630,
    v666,
    v702,
    v738,
    v774,
    v810,
    v846,
    v882,
    v918,
    v954,
    v990);
  v1136 = 0;
  LOBYTE(v1128) = 0;
  *(_QWORD *)&v1129 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1128) = 3;
  v139 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v139, "required", v140, v141, v142, v143, v387, v462, v537);
  LOBYTE(v1093) = 0;
  *(_QWORD *)&v1094 = 0;
  v1129 = (unsigned __int64)v139;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1093) = 3;
  v144 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v144, "address", v145, v146, v147, v148, v388, v463, v538);
  v1094 = (unsigned __int64)v144;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v149 = _mm_load_si128(&v1060);
  v1131 = 0;
  v1130 = v149;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1044,
    (__int64)&v1128,
    2,
    v150,
    v151,
    v152,
    v389,
    v464,
    v539,
    v595,
    v631,
    v667,
    v703,
    v739,
    v775,
    v811,
    v847,
    v883,
    v919,
    v955,
    v991);
  v1138 = 0;
  LOBYTE(v1061) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1034,
    (__int64)&v1134,
    3,
    v153,
    v154,
    v155,
    v390,
    v465,
    v540,
    v596,
    v632,
    v668,
    v704,
    v740,
    v776,
    v812,
    v848,
    v884,
    v920,
    v956,
    v992);
  LOBYTE(v110) = v1146;
  v156 = (__m128i *)&v1139;
  v1146 = v1061;
  v157 = v1147;
  LOBYTE(v1061) = v110;
  v1147 = v1062;
  v1062 = v157;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v156 = (__m128i *)((char *)v156 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v156 != &v1134 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v158 = _mm_load_si128((const __m128i *)&v1019);
  v1134.m128i_i64[1] = 0;
  v1134.m128i_i64[0] = (__int64)ida_mcp::tools::problems::`anonymous namespace'::handle_get_problems_at_address;
  v1135 = v158;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1135.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v1135.m128i_i64[0])(&v1134, &v1134, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1140);
  v1141 = 0;
  v1142[0] = 0;
  v1140 = v1030;
  v1144 = 0;
  v1143 = v1032;
  v1145[0] = 0;
  v1146 = 0;
  v1147 = 0;
  v1148 = 0;
  v1149 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v1081 = 0;
  *(_QWORD *)&v1082 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1081 = 3;
  v159 = operator new(0x20u);
  *(_QWORD *)v159 = v159 + 16;
  strcpy((char *)(v159 + 16), "type");
  *(_QWORD *)(v159 + 8) = 4;
  LOBYTE(v1083) = 0;
  *(_QWORD *)&v1084 = 0;
  v1082 = (unsigned __int64)v159;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1083) = 3;
  v160 = operator new(0x20u);
  *(_QWORD *)v160 = v160 + 16;
  v161 = (__int64)v1045;
  strcpy((char *)(v160 + 16), "object");
  *(_QWORD *)(v160 + 8) = 6;
  v1084 = (unsigned __int64)v160;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1134,
    v161,
    2,
    v162,
    v163,
    v164,
    v391,
    v466,
    v541,
    v597,
    v633,
    v669,
    v705,
    v741,
    v777,
    v813,
    v849,
    v885,
    v921,
    v957,
    v993);
  v1135.m128i_i64[0] = 0;
  v1125 = 0;
  *(_QWORD *)&v1126 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1125 = 3;
  v165 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v165, "properties", v166, v167, v168, v169, v392, v467, v542);
  v1098 = 0;
  *(_QWORD *)&v1099 = 0;
  v1126 = (unsigned __int64)v165;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1098 = 3;
  v170 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v170, "problem_type", v171, v172, v173, v174, v393, v468, v543);
  v1085 = 0;
  *(_QWORD *)&v1086 = 0;
  v1099 = (unsigned __int64)v170;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1085 = 3;
  v175 = operator new(0x20u);
  *(_QWORD *)v175 = v175 + 16;
  strcpy((char *)(v175 + 16), "type");
  *(_QWORD *)(v175 + 8) = 4;
  v1087 = 0;
  *(_QWORD *)&v1088 = 0;
  v1086 = (unsigned __int64)v175;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1087 = 3;
  v176 = operator new(0x20u);
  v177 = (__int64)v1046;
  *(_QWORD *)v176 = v176 + 16;
  strcpy((char *)(v176 + 16), "number");
  *(_QWORD *)(v176 + 8) = 6;
  v1088 = (unsigned __int64)v176;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v706,
    v177,
    2,
    v178,
    v179,
    v180,
    v394,
    v469,
    v544,
    v598,
    v634,
    v670,
    (__int64)v706,
    v742,
    v778,
    v814,
    v850,
    v886,
    v922,
    v958,
    v994);
  *((_QWORD *)&v1094 + 1) = 0;
  v1089 = 0;
  *(_QWORD *)&v1090 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1089 = 3;
  v181 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v181, "description", v182, v183, v184, v185, v395, v470, v545);
  v1091 = 0;
  *(_QWORD *)&v1092 = 0;
  v1090 = (unsigned __int64)v181;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1091 = 3;
  v186 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v186,
    "Problem type ID (1-16)",
    v187,
    v188,
    v189,
    v190,
    v396,
    v471,
    v546);
  v1092 = (unsigned __int64)v186;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1051,
    (__int64)v1047,
    2,
    v191,
    v192,
    v193,
    v397,
    v472,
    v547,
    v599,
    v635,
    v671,
    v707,
    v743,
    v779,
    v815,
    v851,
    v887,
    v923,
    v959,
    v995);
  v1097 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1052,
    v708,
    2,
    v194,
    v195,
    v196,
    v398,
    v473,
    v548,
    v600,
    v636,
    v672,
    v708,
    v744,
    v780,
    v816,
    v852,
    v888,
    v924,
    v960,
    v996);
  v1102 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v817,
    (__int64)v1023,
    2,
    v197,
    v198,
    v199,
    v399,
    v474,
    v549,
    v601,
    v637,
    v673,
    v709,
    v745,
    v781,
    (int)v817,
    v853,
    v889,
    v925,
    v961,
    v997);
  *((_QWORD *)&v1121 + 1) = 0;
  v1115 = 0;
  *(_QWORD *)&v1116 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1115 = 3;
  v200 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v200, "long_name", v201, v202, v203, v204, v400, v475, v550);
  v1103 = 0;
  *(_QWORD *)&v1104 = 0;
  v1116 = (unsigned __int64)v200;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1103 = 3;
  v205 = operator new(0x20u);
  *(_QWORD *)v205 = v205 + 16;
  strcpy((char *)(v205 + 16), "type");
  *(_QWORD *)(v205 + 8) = 4;
  v1105 = 0;
  *(_QWORD *)&v1106 = 0;
  v1104 = (unsigned __int64)v205;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1105 = 3;
  v206 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v206, "boolean", v207, v208, v209, v210, v401, v476, v551);
  v1106 = (unsigned __int64)v206;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v674,
    (__int64)v1036,
    2,
    v211,
    v212,
    v213,
    v402,
    v477,
    v552,
    v602,
    v638,
    (int)v674,
    v710,
    v746,
    v782,
    v818,
    v854,
    v890,
    v926,
    v962,
    v998);
  *((_QWORD *)&v1112 + 1) = 0;
  v1107 = 0;
  *(_QWORD *)&v1108 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1107 = 3;
  v214 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v214, "description", v215, v216, v217, v218, v403, v478, v553);
  v1109 = 0;
  *(_QWORD *)&v1110 = 0;
  v1108 = (unsigned __int64)v214;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1109 = 3;
  v219 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v219, "Long/short name", v220, v221, v222, v223, v404, v479, v554);
  v1110 = (unsigned __int64)v219;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1053,
    (__int64)v1037,
    2,
    v224,
    v225,
    v226,
    v405,
    v480,
    v555,
    v603,
    v639,
    v675,
    v711,
    v747,
    v783,
    v819,
    v855,
    v891,
    v927,
    v963,
    v999);
  *((_QWORD *)&v1114 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1042,
    v676,
    2,
    v227,
    v228,
    v229,
    v406,
    v481,
    v556,
    v604,
    v640,
    v676,
    v712,
    v748,
    v784,
    v820,
    v856,
    v892,
    v928,
    v964,
    v1000);
  v1119 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1043,
    (__int64)v1022,
    2,
    v230,
    v231,
    v232,
    v407,
    v482,
    v557,
    v605,
    v641,
    v677,
    v713,
    v749,
    v785,
    v821,
    v857,
    v893,
    v929,
    v965,
    v1001);
  v1124 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1054,
    v822,
    2,
    v233,
    v234,
    v235,
    v408,
    v483,
    v558,
    v606,
    v642,
    v678,
    v714,
    v750,
    v786,
    v822,
    v858,
    v894,
    v930,
    v966,
    v1002);
  *(_QWORD *)&v1127[16] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1029,
    (__int64)v1024,
    2,
    v236,
    v237,
    v238,
    v409,
    v484,
    v559,
    v607,
    v643,
    v679,
    v715,
    v751,
    v787,
    v823,
    v859,
    v895,
    v931,
    v967,
    v1003);
  v1136 = 0;
  LOBYTE(v1128) = 0;
  *(_QWORD *)&v1129 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1128) = 3;
  v239 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v239, "required", v240, v241, v242, v243, v410, v485, v560);
  LOBYTE(v1077) = 0;
  *(_QWORD *)&v1078 = 0;
  v1129 = (unsigned __int64)v239;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1077) = 3;
  v244 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v244, "problem_type", v245, v246, v247, v248, v411, v486, v561);
  v1078 = (unsigned __int64)v244;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v249 = _mm_load_si128(&v1060);
  v1131 = 0;
  v1130 = v249;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1044,
    (__int64)&v1128,
    2,
    v250,
    v251,
    v252,
    v412,
    v487,
    v562,
    v608,
    v644,
    v680,
    v716,
    v752,
    v788,
    v824,
    v860,
    v896,
    v932,
    v968,
    v1004);
  v1138 = 0;
  LOBYTE(v1061) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1034,
    (__int64)&v1134,
    3,
    v253,
    v254,
    v255,
    v413,
    v488,
    v563,
    v609,
    v645,
    v681,
    v717,
    v753,
    v789,
    v825,
    v861,
    v897,
    v933,
    v969,
    v1005);
  LOBYTE(v177) = v1146;
  v256 = (__m128i *)&v1139;
  v1146 = v1061;
  v257 = v1147;
  LOBYTE(v1061) = v177;
  v1147 = v1062;
  v1062 = v257;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v256 = (__m128i *)((char *)v256 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v256 != &v1134 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v258 = _mm_load_si128((const __m128i *)&v1019);
  v1134.m128i_i64[1] = 0;
  v1134.m128i_i64[0] = (__int64)ida_mcp::tools::problems::`anonymous namespace'::handle_get_problem_type_name;
  v1135 = v258;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1135.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v1135.m128i_i64[0])(&v1134, &v1134, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1140);
  v1141 = 0;
  v1142[0] = 0;
  v1140 = v1030;
  v1144 = 0;
  v1143 = v1032;
  v1145[0] = 0;
  v1146 = 0;
  v1147 = 0;
  v1148 = 0;
  v1149 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v1081 = 0;
  *(_QWORD *)&v1082 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1081 = 3;
  v259 = operator new(0x20u);
  *(_QWORD *)v259 = v259 + 16;
  strcpy((char *)(v259 + 16), "type");
  *(_QWORD *)(v259 + 8) = 4;
  LOBYTE(v1083) = 0;
  *(_QWORD *)&v1084 = 0;
  v1082 = (unsigned __int64)v259;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1083) = 3;
  v260 = operator new(0x20u);
  *(_QWORD *)v260 = v260 + 16;
  v261 = (__int64)v1045;
  strcpy((char *)(v260 + 16), "object");
  *(_QWORD *)(v260 + 8) = 6;
  v1084 = (unsigned __int64)v260;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v1134,
    v261,
    2,
    v262,
    v263,
    v264,
    v414,
    v489,
    v564,
    v610,
    v646,
    v682,
    v718,
    v754,
    v790,
    v826,
    v862,
    v898,
    v934,
    v970,
    v1006);
  v1135.m128i_i64[0] = 0;
  v1125 = 0;
  *(_QWORD *)&v1126 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1125 = 3;
  v265 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v265, "properties", v266, v267, v268, v269, v415, v490, v565);
  v1098 = 0;
  *(_QWORD *)&v1099 = 0;
  v1126 = (unsigned __int64)v265;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1098 = 3;
  v270 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v270, "problem_type", v271, v272, v273, v274, v416, v491, v566);
  v1085 = 0;
  *(_QWORD *)&v1086 = 0;
  v1099 = (unsigned __int64)v270;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1085 = 3;
  v275 = operator new(0x20u);
  *(_QWORD *)v275 = v275 + 16;
  strcpy((char *)(v275 + 16), "type");
  *(_QWORD *)(v275 + 8) = 4;
  v1087 = 0;
  *(_QWORD *)&v1088 = 0;
  v1086 = (unsigned __int64)v275;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1087 = 3;
  v276 = operator new(0x20u);
  v277 = (__int64)v1046;
  *(_QWORD *)v276 = v276 + 16;
  strcpy((char *)(v276 + 16), "number");
  *(_QWORD *)(v276 + 8) = 6;
  v1088 = (unsigned __int64)v276;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v719,
    v277,
    2,
    v278,
    v279,
    v280,
    v417,
    v492,
    v567,
    v611,
    v647,
    v683,
    (__int64)v719,
    v755,
    v791,
    v827,
    v863,
    v899,
    v935,
    v971,
    v1007);
  *((_QWORD *)&v1094 + 1) = 0;
  v1089 = 0;
  *(_QWORD *)&v1090 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1089 = 3;
  v281 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v281, "description", v282, v283, v284, v285, v418, v493, v568);
  v1091 = 0;
  *(_QWORD *)&v1092 = 0;
  v1090 = (unsigned __int64)v281;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1091 = 3;
  v286 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v286,
    "Problem type ID (1-16)",
    v287,
    v288,
    v289,
    v290,
    v419,
    v494,
    v569);
  v1092 = (unsigned __int64)v286;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1051,
    (__int64)v1047,
    2,
    v291,
    v292,
    v293,
    v420,
    v495,
    v570,
    v612,
    v648,
    v684,
    v720,
    v756,
    v792,
    v828,
    v864,
    v900,
    v936,
    v972,
    v1008);
  v1097 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1052,
    v721,
    2,
    v294,
    v295,
    v296,
    v421,
    v496,
    v571,
    v613,
    v649,
    v685,
    v721,
    v757,
    v793,
    v829,
    v865,
    v901,
    v937,
    v973,
    v1009);
  v1102 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v830,
    (__int64)v1023,
    2,
    v297,
    v298,
    v299,
    v422,
    v497,
    v572,
    v614,
    v650,
    v686,
    v722,
    v758,
    v794,
    (int)v830,
    v866,
    v902,
    v938,
    v974,
    v1010);
  *((_QWORD *)&v1121 + 1) = 0;
  v1115 = 0;
  *(_QWORD *)&v1116 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1115 = 3;
  v300 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v300, "address", v301, v302, v303, v304, v423, v498, v573);
  v1103 = 0;
  *(_QWORD *)&v1104 = 0;
  v1116 = (unsigned __int64)v300;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1103 = 3;
  v305 = operator new(0x20u);
  *(_QWORD *)v305 = v305 + 16;
  strcpy((char *)(v305 + 16), "type");
  *(_QWORD *)(v305 + 8) = 4;
  v1105 = 0;
  *(_QWORD *)&v1106 = 0;
  v1104 = (unsigned __int64)v305;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1105 = 3;
  v306 = operator new(0x20u);
  v307 = (__int64)v1036;
  *(_QWORD *)v306 = v306 + 16;
  strcpy((char *)(v306 + 16), "string");
  *(_QWORD *)(v306 + 8) = 6;
  v1106 = (unsigned __int64)v306;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v687,
    v307,
    2,
    v308,
    v309,
    v310,
    v424,
    v499,
    v574,
    v615,
    v651,
    (int)v687,
    v723,
    v759,
    v795,
    v831,
    v867,
    v903,
    v939,
    v975,
    v1011);
  *((_QWORD *)&v1112 + 1) = 0;
  v1107 = 0;
  *(_QWORD *)&v1108 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1107 = 3;
  v311 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v311, "description", v312, v313, v314, v315, v425, v500, v575);
  v1109 = 0;
  *(_QWORD *)&v1110 = 0;
  v1108 = (unsigned __int64)v311;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v1109 = 3;
  v316 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v316, "Hex address", v317, v318, v319, v320, v426, v501, v576);
  v1110 = (unsigned __int64)v316;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1053,
    (__int64)v1037,
    2,
    v321,
    v322,
    v323,
    v427,
    v502,
    v577,
    v616,
    v652,
    v688,
    v724,
    v760,
    v796,
    v832,
    v868,
    v904,
    v940,
    v976,
    v1012);
  *((_QWORD *)&v1114 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1042,
    v689,
    2,
    v324,
    v325,
    v326,
    v428,
    v503,
    v578,
    v617,
    v653,
    v689,
    v725,
    v761,
    v797,
    v833,
    v869,
    v905,
    v941,
    v977,
    v1013);
  v1119 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1043,
    (__int64)v1022,
    2,
    v327,
    v328,
    v329,
    v429,
    v504,
    v579,
    v618,
    v654,
    v690,
    v726,
    v762,
    v798,
    v834,
    v870,
    v906,
    v942,
    v978,
    v1014);
  v1124 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1054,
    v835,
    2,
    v330,
    v331,
    v332,
    v430,
    v505,
    v580,
    v619,
    v655,
    v691,
    v727,
    v763,
    v799,
    v835,
    v871,
    v907,
    v943,
    v979,
    v1015);
  *(_QWORD *)&v1127[16] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1029,
    (__int64)v1024,
    2,
    v333,
    v334,
    v335,
    v431,
    v506,
    v581,
    v620,
    v656,
    v692,
    v728,
    v764,
    v800,
    v836,
    v872,
    v908,
    v944,
    v980,
    v1016);
  v1136 = 0;
  LOBYTE(v1128) = 0;
  *(_QWORD *)&v1129 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1128) = 3;
  v336 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v336, "required", v337, v338, v339, v340, v432, v507, v582);
  LOBYTE(v1077) = 0;
  *(_QWORD *)&v1078 = 0;
  v1129 = (unsigned __int64)v336;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1077) = 3;
  v341 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v341, "problem_type", v342, v343, v344, v345, v433, v508, v583);
  LOBYTE(v1079) = 0;
  *(_QWORD *)&v1080 = 0;
  v1078 = (unsigned __int64)v341;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v1079) = 3;
  v346 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v346, "address", v347, v348, v349, v350, v434, v509, v584);
  v1080 = (unsigned __int64)v346;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v351 = _mm_load_si128(&v1060);
  v1131 = 0;
  v1130 = v351;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1044,
    (__int64)&v1128,
    2,
    v352,
    v353,
    v354,
    v435,
    v510,
    v585,
    v621,
    v657,
    v693,
    v729,
    v765,
    v801,
    v837,
    v873,
    v909,
    v945,
    v981,
    v1017);
  v1138 = 0;
  LOBYTE(v1061) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v1034,
    (__int64)&v1134,
    3,
    v355,
    v356,
    v357,
    v436,
    v511,
    v586,
    v622,
    v658,
    v694,
    v730,
    v766,
    v802,
    v838,
    v874,
    v910,
    v946,
    v982,
    v1018);
  LOBYTE(v307) = v1146;
  v358 = (__m128i *)&v1139;
  v1146 = v1061;
  v359 = v1147;
  LOBYTE(v1061) = v307;
  v1147 = v1062;
  v1062 = v359;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v358 = (__m128i *)((char *)v358 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v358 != &v1134 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v360 = _mm_load_si128((const __m128i *)&v1019);
  v1134.m128i_i64[1] = 0;
  v1134.m128i_i64[0] = (__int64)ida_mcp::tools::problems::`anonymous namespace'::handle_check_problem_exists;
  v1135 = v360;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v1135.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v1135.m128i_i64[0])(&v1134, &v1134, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v1140);
  return v1150 - __readfsqword(0x28u);
}

