unsigned __int64 __fastcall ida_mcp::tools::objc_analysis::register_tools(
        ida_mcp::tools::objc_analysis *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // si
  __int64 v38; // rdx
  __m128i si128; // xmm2
  __int64 v40; // rax
  __int64 *v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 *v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 *v57; // r14
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 *v67; // r14
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  char v75; // si
  __int64 v76; // rax
  __m128i v77; // xmm3
  __int64 *v78; // r14
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 *v83; // r14
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 *v88; // r14
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 *v93; // r14
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
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
  __int64 *v108; // r14
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 *v113; // r14
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 *v118; // r14
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 *v123; // r14
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
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  char v146; // si
  __int64 v147; // rax
  __m128i v148; // xmm4
  __int64 *v149; // r14
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 *v157; // r14
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 *v162; // r14
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 *v167; // r14
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 *v175; // r14
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 *v180; // r14
  __int64 v181; // rdx
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
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  char v203; // si
  __int64 v204; // rax
  __m128i v205; // xmm5
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
  __int64 v224; // rax
  __int64 *v225; // r14
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // r9
  __int64 v230; // rcx
  __int64 v231; // r8
  __int64 v232; // r9
  __int64 *v233; // r14
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 *v238; // r14
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
  __int64 *v258; // r14
  __int64 v259; // rdx
  __int64 v260; // rcx
  __int64 v261; // r8
  __int64 v262; // r9
  __int64 *v263; // r14
  __int64 v264; // rdx
  __int64 v265; // rcx
  __int64 v266; // r8
  __int64 v267; // r9
  __m128i v268; // xmm0
  __int64 v269; // rcx
  __int64 v270; // r8
  __int64 v271; // r9
  __int64 v272; // rcx
  __int64 v273; // r8
  __int64 v274; // r9
  char v275; // si
  __m128i *v276; // r14
  __int64 v277; // rax
  __m128i v278; // xmm6
  __int64 v279; // rax
  __int64 *v280; // r14
  __int64 v281; // rdx
  __int64 v282; // rcx
  __int64 v283; // r8
  __int64 v284; // r9
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // r9
  __int64 *v288; // r14
  __int64 v289; // rdx
  __int64 v290; // rcx
  __int64 v291; // r8
  __int64 v292; // r9
  __m128i v293; // xmm0
  __int64 v294; // rcx
  __int64 v295; // r8
  __int64 v296; // r9
  __int64 v297; // rcx
  __int64 v298; // r8
  __int64 v299; // r9
  char v300; // si
  __int64 v301; // rax
  __m128i v302; // xmm7
  __int64 v303; // rax
  __int64 *v304; // r14
  __int64 v305; // rdx
  __int64 v306; // rcx
  __int64 v307; // r8
  __int64 v308; // r9
  __int64 v309; // rcx
  __int64 v310; // r8
  __int64 v311; // r9
  __int64 *v312; // r14
  __int64 v313; // rdx
  __int64 v314; // rcx
  __int64 v315; // r8
  __int64 v316; // r9
  __m128i v317; // xmm0
  __int64 v318; // rcx
  __int64 v319; // r8
  __int64 v320; // r9
  __int64 v321; // rcx
  __int64 v322; // r8
  __int64 v323; // r9
  char v324; // si
  __int64 v325; // rax
  __m128i v326; // xmm2
  int v328; // [rsp+0h] [rbp-4A8h]
  int v329; // [rsp+0h] [rbp-4A8h]
  int v330; // [rsp+0h] [rbp-4A8h]
  int v331; // [rsp+0h] [rbp-4A8h]
  int v332; // [rsp+0h] [rbp-4A8h]
  int v333; // [rsp+0h] [rbp-4A8h]
  int v334; // [rsp+0h] [rbp-4A8h]
  int v335; // [rsp+0h] [rbp-4A8h]
  int v336; // [rsp+0h] [rbp-4A8h]
  int v337; // [rsp+0h] [rbp-4A8h]
  int v338; // [rsp+0h] [rbp-4A8h]
  int v339; // [rsp+0h] [rbp-4A8h]
  int v340; // [rsp+0h] [rbp-4A8h]
  int v341; // [rsp+0h] [rbp-4A8h]
  int v342; // [rsp+0h] [rbp-4A8h]
  int v343; // [rsp+0h] [rbp-4A8h]
  int v344; // [rsp+0h] [rbp-4A8h]
  int v345; // [rsp+0h] [rbp-4A8h]
  int v346; // [rsp+0h] [rbp-4A8h]
  int v347; // [rsp+0h] [rbp-4A8h]
  int v348; // [rsp+0h] [rbp-4A8h]
  int v349; // [rsp+0h] [rbp-4A8h]
  int v350; // [rsp+0h] [rbp-4A8h]
  int v351; // [rsp+0h] [rbp-4A8h]
  int v352; // [rsp+0h] [rbp-4A8h]
  int v353; // [rsp+0h] [rbp-4A8h]
  int v354; // [rsp+0h] [rbp-4A8h]
  int v355; // [rsp+0h] [rbp-4A8h]
  int v356; // [rsp+0h] [rbp-4A8h]
  int v357; // [rsp+0h] [rbp-4A8h]
  int v358; // [rsp+0h] [rbp-4A8h]
  int v359; // [rsp+0h] [rbp-4A8h]
  int v360; // [rsp+0h] [rbp-4A8h]
  int v361; // [rsp+0h] [rbp-4A8h]
  int v362; // [rsp+0h] [rbp-4A8h]
  int v363; // [rsp+0h] [rbp-4A8h]
  int v364; // [rsp+0h] [rbp-4A8h]
  int v365; // [rsp+0h] [rbp-4A8h]
  int v366; // [rsp+0h] [rbp-4A8h]
  int v367; // [rsp+0h] [rbp-4A8h]
  int v368; // [rsp+0h] [rbp-4A8h]
  int v369; // [rsp+0h] [rbp-4A8h]
  int v370; // [rsp+0h] [rbp-4A8h]
  int v371; // [rsp+0h] [rbp-4A8h]
  int v372; // [rsp+0h] [rbp-4A8h]
  int v373; // [rsp+0h] [rbp-4A8h]
  int v374; // [rsp+0h] [rbp-4A8h]
  int v375; // [rsp+0h] [rbp-4A8h]
  int v376; // [rsp+0h] [rbp-4A8h]
  int v377; // [rsp+0h] [rbp-4A8h]
  int v378; // [rsp+0h] [rbp-4A8h]
  int v379; // [rsp+0h] [rbp-4A8h]
  int v380; // [rsp+0h] [rbp-4A8h]
  int v381; // [rsp+0h] [rbp-4A8h]
  int v382; // [rsp+0h] [rbp-4A8h]
  int v383; // [rsp+0h] [rbp-4A8h]
  int v384; // [rsp+0h] [rbp-4A8h]
  int v385; // [rsp+0h] [rbp-4A8h]
  int v386; // [rsp+0h] [rbp-4A8h]
  int v387; // [rsp+0h] [rbp-4A8h]
  int v388; // [rsp+0h] [rbp-4A8h]
  int v389; // [rsp+0h] [rbp-4A8h]
  int v390; // [rsp+0h] [rbp-4A8h]
  int v391; // [rsp+0h] [rbp-4A8h]
  int v392; // [rsp+0h] [rbp-4A8h]
  int v393; // [rsp+0h] [rbp-4A8h]
  int v394; // [rsp+0h] [rbp-4A8h]
  int v395; // [rsp+0h] [rbp-4A8h]
  int v396; // [rsp+0h] [rbp-4A8h]
  int v397; // [rsp+0h] [rbp-4A8h]
  int v398; // [rsp+8h] [rbp-4A0h]
  int v399; // [rsp+8h] [rbp-4A0h]
  int v400; // [rsp+8h] [rbp-4A0h]
  int v401; // [rsp+8h] [rbp-4A0h]
  int v402; // [rsp+8h] [rbp-4A0h]
  __int64 v403; // [rsp+8h] [rbp-4A0h]
  int v404; // [rsp+8h] [rbp-4A0h]
  int v405; // [rsp+8h] [rbp-4A0h]
  int v406; // [rsp+8h] [rbp-4A0h]
  int v407; // [rsp+8h] [rbp-4A0h]
  int v408; // [rsp+8h] [rbp-4A0h]
  int v409; // [rsp+8h] [rbp-4A0h]
  __int64 v410; // [rsp+8h] [rbp-4A0h]
  int v411; // [rsp+8h] [rbp-4A0h]
  int v412; // [rsp+8h] [rbp-4A0h]
  int v413; // [rsp+8h] [rbp-4A0h]
  int v414; // [rsp+8h] [rbp-4A0h]
  int v415; // [rsp+8h] [rbp-4A0h]
  int v416; // [rsp+8h] [rbp-4A0h]
  int v417; // [rsp+8h] [rbp-4A0h]
  int v418; // [rsp+8h] [rbp-4A0h]
  int v419; // [rsp+8h] [rbp-4A0h]
  int v420; // [rsp+8h] [rbp-4A0h]
  __int64 v421; // [rsp+8h] [rbp-4A0h]
  __int64 v422; // [rsp+8h] [rbp-4A0h]
  __int64 v423; // [rsp+8h] [rbp-4A0h]
  __int64 v424; // [rsp+8h] [rbp-4A0h]
  __int64 v425; // [rsp+8h] [rbp-4A0h]
  __int64 v426; // [rsp+8h] [rbp-4A0h]
  int v427; // [rsp+8h] [rbp-4A0h]
  __int64 v428; // [rsp+8h] [rbp-4A0h]
  int v429; // [rsp+8h] [rbp-4A0h]
  int v430; // [rsp+8h] [rbp-4A0h]
  int v431; // [rsp+8h] [rbp-4A0h]
  __int64 v432; // [rsp+8h] [rbp-4A0h]
  int v433; // [rsp+8h] [rbp-4A0h]
  int v434; // [rsp+8h] [rbp-4A0h]
  __int64 v435; // [rsp+8h] [rbp-4A0h]
  __int64 v436; // [rsp+8h] [rbp-4A0h]
  __int64 v437; // [rsp+8h] [rbp-4A0h]
  __int64 v438; // [rsp+8h] [rbp-4A0h]
  __int64 v439; // [rsp+8h] [rbp-4A0h]
  __int64 v440; // [rsp+8h] [rbp-4A0h]
  int v441; // [rsp+8h] [rbp-4A0h]
  __int64 v442; // [rsp+8h] [rbp-4A0h]
  int v443; // [rsp+8h] [rbp-4A0h]
  int v444; // [rsp+8h] [rbp-4A0h]
  int v445; // [rsp+8h] [rbp-4A0h]
  __int64 v446; // [rsp+8h] [rbp-4A0h]
  int v447; // [rsp+8h] [rbp-4A0h]
  int v448; // [rsp+8h] [rbp-4A0h]
  __int64 v449; // [rsp+8h] [rbp-4A0h]
  __int64 v450; // [rsp+8h] [rbp-4A0h]
  __int64 v451; // [rsp+8h] [rbp-4A0h]
  __int64 v452; // [rsp+8h] [rbp-4A0h]
  __int64 v453; // [rsp+8h] [rbp-4A0h]
  int v454; // [rsp+8h] [rbp-4A0h]
  int v455; // [rsp+8h] [rbp-4A0h]
  __int64 v456; // [rsp+8h] [rbp-4A0h]
  __int64 v457; // [rsp+8h] [rbp-4A0h]
  int v458; // [rsp+8h] [rbp-4A0h]
  __int64 v459; // [rsp+8h] [rbp-4A0h]
  int v460; // [rsp+8h] [rbp-4A0h]
  __int64 v461; // [rsp+8h] [rbp-4A0h]
  __int64 v462; // [rsp+8h] [rbp-4A0h]
  int v463; // [rsp+8h] [rbp-4A0h]
  __int64 v464; // [rsp+8h] [rbp-4A0h]
  int v465; // [rsp+8h] [rbp-4A0h]
  __int64 v466; // [rsp+8h] [rbp-4A0h]
  __int64 v467; // [rsp+8h] [rbp-4A0h]
  __int64 v468; // [rsp+10h] [rbp-498h]
  __int64 v469; // [rsp+10h] [rbp-498h]
  __int64 v470; // [rsp+10h] [rbp-498h]
  __int64 v471; // [rsp+10h] [rbp-498h]
  __int64 v472; // [rsp+10h] [rbp-498h]
  int v473; // [rsp+10h] [rbp-498h]
  __int64 v474; // [rsp+10h] [rbp-498h]
  __int64 v475; // [rsp+10h] [rbp-498h]
  __int64 v476; // [rsp+10h] [rbp-498h]
  __int64 v477; // [rsp+10h] [rbp-498h]
  __int64 v478; // [rsp+10h] [rbp-498h]
  __int64 v479; // [rsp+10h] [rbp-498h]
  int v480; // [rsp+10h] [rbp-498h]
  __int64 v481; // [rsp+10h] [rbp-498h]
  __int64 v482; // [rsp+10h] [rbp-498h]
  __int64 v483; // [rsp+10h] [rbp-498h]
  __int64 v484; // [rsp+10h] [rbp-498h]
  __int64 v485; // [rsp+10h] [rbp-498h]
  __int64 v486; // [rsp+10h] [rbp-498h]
  __int64 v487; // [rsp+10h] [rbp-498h]
  __int64 v488; // [rsp+10h] [rbp-498h]
  __int64 v489; // [rsp+10h] [rbp-498h]
  __int64 v490; // [rsp+10h] [rbp-498h]
  int v491; // [rsp+10h] [rbp-498h]
  int v492; // [rsp+10h] [rbp-498h]
  int v493; // [rsp+10h] [rbp-498h]
  int v494; // [rsp+10h] [rbp-498h]
  int v495; // [rsp+10h] [rbp-498h]
  int v496; // [rsp+10h] [rbp-498h]
  __int64 v497; // [rsp+10h] [rbp-498h]
  int v498; // [rsp+10h] [rbp-498h]
  __int64 v499; // [rsp+10h] [rbp-498h]
  __int64 v500; // [rsp+10h] [rbp-498h]
  __int64 v501; // [rsp+10h] [rbp-498h]
  int v502; // [rsp+10h] [rbp-498h]
  __int64 v503; // [rsp+10h] [rbp-498h]
  __int64 v504; // [rsp+10h] [rbp-498h]
  int v505; // [rsp+10h] [rbp-498h]
  int v506; // [rsp+10h] [rbp-498h]
  int v507; // [rsp+10h] [rbp-498h]
  int v508; // [rsp+10h] [rbp-498h]
  int v509; // [rsp+10h] [rbp-498h]
  int v510; // [rsp+10h] [rbp-498h]
  __int64 v511; // [rsp+10h] [rbp-498h]
  int v512; // [rsp+10h] [rbp-498h]
  __int64 v513; // [rsp+10h] [rbp-498h]
  __int64 v514; // [rsp+10h] [rbp-498h]
  __int64 v515; // [rsp+10h] [rbp-498h]
  int v516; // [rsp+10h] [rbp-498h]
  __int64 v517; // [rsp+10h] [rbp-498h]
  __int64 v518; // [rsp+10h] [rbp-498h]
  int v519; // [rsp+10h] [rbp-498h]
  int v520; // [rsp+10h] [rbp-498h]
  int v521; // [rsp+10h] [rbp-498h]
  int v522; // [rsp+10h] [rbp-498h]
  int v523; // [rsp+10h] [rbp-498h]
  __int64 v524; // [rsp+10h] [rbp-498h]
  __int64 v525; // [rsp+10h] [rbp-498h]
  int v526; // [rsp+10h] [rbp-498h]
  int v527; // [rsp+10h] [rbp-498h]
  __int64 v528; // [rsp+10h] [rbp-498h]
  int v529; // [rsp+10h] [rbp-498h]
  __int64 v530; // [rsp+10h] [rbp-498h]
  int v531; // [rsp+10h] [rbp-498h]
  int v532; // [rsp+10h] [rbp-498h]
  __int64 v533; // [rsp+10h] [rbp-498h]
  int v534; // [rsp+10h] [rbp-498h]
  __int64 v535; // [rsp+10h] [rbp-498h]
  int v536; // [rsp+10h] [rbp-498h]
  int v537; // [rsp+10h] [rbp-498h]
  int v538; // [rsp+18h] [rbp-490h]
  int v539; // [rsp+18h] [rbp-490h]
  int v540; // [rsp+18h] [rbp-490h]
  int v541; // [rsp+18h] [rbp-490h]
  int v542; // [rsp+18h] [rbp-490h]
  int v543; // [rsp+18h] [rbp-490h]
  int v544; // [rsp+18h] [rbp-490h]
  int v545; // [rsp+18h] [rbp-490h]
  int v546; // [rsp+18h] [rbp-490h]
  int v547; // [rsp+18h] [rbp-490h]
  int v548; // [rsp+18h] [rbp-490h]
  int v549; // [rsp+18h] [rbp-490h]
  int v550; // [rsp+18h] [rbp-490h]
  int v551; // [rsp+18h] [rbp-490h]
  int v552; // [rsp+18h] [rbp-490h]
  int v553; // [rsp+18h] [rbp-490h]
  int v554; // [rsp+18h] [rbp-490h]
  int v555; // [rsp+18h] [rbp-490h]
  int v556; // [rsp+18h] [rbp-490h]
  int v557; // [rsp+18h] [rbp-490h]
  int v558; // [rsp+18h] [rbp-490h]
  int v559; // [rsp+18h] [rbp-490h]
  int v560; // [rsp+18h] [rbp-490h]
  int v561; // [rsp+18h] [rbp-490h]
  int v562; // [rsp+18h] [rbp-490h]
  int v563; // [rsp+18h] [rbp-490h]
  int v564; // [rsp+18h] [rbp-490h]
  int v565; // [rsp+18h] [rbp-490h]
  int v566; // [rsp+18h] [rbp-490h]
  int v567; // [rsp+18h] [rbp-490h]
  _QWORD *v568; // [rsp+20h] [rbp-488h]
  const __m128i *v569; // [rsp+20h] [rbp-488h]
  int v570; // [rsp+20h] [rbp-488h]
  int v571; // [rsp+20h] [rbp-488h]
  int v572; // [rsp+20h] [rbp-488h]
  int v573; // [rsp+20h] [rbp-488h]
  int v574; // [rsp+20h] [rbp-488h]
  int v575; // [rsp+20h] [rbp-488h]
  int v576; // [rsp+20h] [rbp-488h]
  int v577; // [rsp+20h] [rbp-488h]
  int v578; // [rsp+20h] [rbp-488h]
  _QWORD *v579; // [rsp+20h] [rbp-488h]
  __int64 v580; // [rsp+20h] [rbp-488h]
  int v581; // [rsp+20h] [rbp-488h]
  int v582; // [rsp+20h] [rbp-488h]
  _QWORD *v583; // [rsp+20h] [rbp-488h]
  int v584; // [rsp+20h] [rbp-488h]
  int v585; // [rsp+20h] [rbp-488h]
  int v586; // [rsp+20h] [rbp-488h]
  int v587; // [rsp+20h] [rbp-488h]
  int v588; // [rsp+20h] [rbp-488h]
  int v589; // [rsp+20h] [rbp-488h]
  int v590; // [rsp+20h] [rbp-488h]
  int v591; // [rsp+20h] [rbp-488h]
  int v592; // [rsp+20h] [rbp-488h]
  int v593; // [rsp+20h] [rbp-488h]
  int v594; // [rsp+20h] [rbp-488h]
  int v595; // [rsp+20h] [rbp-488h]
  int v596; // [rsp+20h] [rbp-488h]
  int v597; // [rsp+20h] [rbp-488h]
  const __m128i *v598; // [rsp+28h] [rbp-480h]
  _QWORD *v599; // [rsp+28h] [rbp-480h]
  int v600; // [rsp+28h] [rbp-480h]
  int v601; // [rsp+28h] [rbp-480h]
  __int64 v602; // [rsp+28h] [rbp-480h]
  int v603; // [rsp+28h] [rbp-480h]
  int v604; // [rsp+28h] [rbp-480h]
  int v605; // [rsp+28h] [rbp-480h]
  int v606; // [rsp+28h] [rbp-480h]
  int v607; // [rsp+28h] [rbp-480h]
  int v608; // [rsp+28h] [rbp-480h]
  __int64 v609; // [rsp+28h] [rbp-480h]
  int v610; // [rsp+28h] [rbp-480h]
  int v611; // [rsp+28h] [rbp-480h]
  int v612; // [rsp+28h] [rbp-480h]
  int v613; // [rsp+28h] [rbp-480h]
  int v614; // [rsp+28h] [rbp-480h]
  int v615; // [rsp+28h] [rbp-480h]
  int v616; // [rsp+28h] [rbp-480h]
  int v617; // [rsp+28h] [rbp-480h]
  int v618; // [rsp+28h] [rbp-480h]
  __int64 v619; // [rsp+28h] [rbp-480h]
  int v620; // [rsp+28h] [rbp-480h]
  int v621; // [rsp+28h] [rbp-480h]
  __int64 v622; // [rsp+28h] [rbp-480h]
  int v623; // [rsp+28h] [rbp-480h]
  int v624; // [rsp+28h] [rbp-480h]
  __int64 v625; // [rsp+28h] [rbp-480h]
  int v626; // [rsp+28h] [rbp-480h]
  int v627; // [rsp+28h] [rbp-480h]
  __m128i *v628; // [rsp+30h] [rbp-478h]
  __int64 v629; // [rsp+30h] [rbp-478h]
  __int64 v630; // [rsp+30h] [rbp-478h]
  __int64 v631; // [rsp+30h] [rbp-478h]
  __int64 v632; // [rsp+30h] [rbp-478h]
  __int64 v633; // [rsp+30h] [rbp-478h]
  __int64 v634; // [rsp+30h] [rbp-478h]
  __int64 v635; // [rsp+30h] [rbp-478h]
  _QWORD *v636; // [rsp+30h] [rbp-478h]
  __int64 v637; // [rsp+30h] [rbp-478h]
  __int64 v638; // [rsp+30h] [rbp-478h]
  __int64 v639; // [rsp+30h] [rbp-478h]
  __int64 v640; // [rsp+30h] [rbp-478h]
  __int64 v641; // [rsp+30h] [rbp-478h]
  __int64 v642; // [rsp+30h] [rbp-478h]
  __int64 v643; // [rsp+30h] [rbp-478h]
  __int64 v644; // [rsp+30h] [rbp-478h]
  __int64 v645; // [rsp+30h] [rbp-478h]
  __int64 v646; // [rsp+30h] [rbp-478h]
  __int64 v647; // [rsp+30h] [rbp-478h]
  __int64 v648; // [rsp+30h] [rbp-478h]
  __int64 v649; // [rsp+30h] [rbp-478h]
  __int64 v650; // [rsp+30h] [rbp-478h]
  __int64 v651; // [rsp+30h] [rbp-478h]
  __int64 v652; // [rsp+30h] [rbp-478h]
  __int64 v653; // [rsp+30h] [rbp-478h]
  __int64 v654; // [rsp+30h] [rbp-478h]
  __int64 v655; // [rsp+30h] [rbp-478h]
  __int64 v656; // [rsp+30h] [rbp-478h]
  __int64 v657; // [rsp+30h] [rbp-478h]
  int v658; // [rsp+38h] [rbp-470h]
  int v659; // [rsp+38h] [rbp-470h]
  int v660; // [rsp+38h] [rbp-470h]
  int v661; // [rsp+38h] [rbp-470h]
  int v662; // [rsp+38h] [rbp-470h]
  int v663; // [rsp+38h] [rbp-470h]
  int v664; // [rsp+38h] [rbp-470h]
  int v665; // [rsp+38h] [rbp-470h]
  int v666; // [rsp+38h] [rbp-470h]
  int v667; // [rsp+38h] [rbp-470h]
  int v668; // [rsp+38h] [rbp-470h]
  int v669; // [rsp+38h] [rbp-470h]
  int v670; // [rsp+38h] [rbp-470h]
  int v671; // [rsp+38h] [rbp-470h]
  int v672; // [rsp+38h] [rbp-470h]
  int v673; // [rsp+38h] [rbp-470h]
  int v674; // [rsp+38h] [rbp-470h]
  int v675; // [rsp+38h] [rbp-470h]
  int v676; // [rsp+38h] [rbp-470h]
  int v677; // [rsp+38h] [rbp-470h]
  int v678; // [rsp+38h] [rbp-470h]
  int v679; // [rsp+38h] [rbp-470h]
  int v680; // [rsp+38h] [rbp-470h]
  int v681; // [rsp+38h] [rbp-470h]
  int v682; // [rsp+38h] [rbp-470h]
  int v683; // [rsp+38h] [rbp-470h]
  int v684; // [rsp+38h] [rbp-470h]
  int v685; // [rsp+38h] [rbp-470h]
  int v686; // [rsp+38h] [rbp-470h]
  int v687; // [rsp+38h] [rbp-470h]
  int v688; // [rsp+40h] [rbp-468h]
  int v689; // [rsp+40h] [rbp-468h]
  int v690; // [rsp+40h] [rbp-468h]
  int v691; // [rsp+40h] [rbp-468h]
  int v692; // [rsp+40h] [rbp-468h]
  int v693; // [rsp+40h] [rbp-468h]
  int v694; // [rsp+40h] [rbp-468h]
  int v695; // [rsp+40h] [rbp-468h]
  int v696; // [rsp+40h] [rbp-468h]
  int v697; // [rsp+40h] [rbp-468h]
  int v698; // [rsp+40h] [rbp-468h]
  int v699; // [rsp+40h] [rbp-468h]
  int v700; // [rsp+40h] [rbp-468h]
  int v701; // [rsp+40h] [rbp-468h]
  int v702; // [rsp+40h] [rbp-468h]
  int v703; // [rsp+40h] [rbp-468h]
  int v704; // [rsp+40h] [rbp-468h]
  int v705; // [rsp+40h] [rbp-468h]
  int v706; // [rsp+40h] [rbp-468h]
  int v707; // [rsp+40h] [rbp-468h]
  int v708; // [rsp+40h] [rbp-468h]
  int v709; // [rsp+40h] [rbp-468h]
  int v710; // [rsp+40h] [rbp-468h]
  int v711; // [rsp+40h] [rbp-468h]
  int v712; // [rsp+40h] [rbp-468h]
  int v713; // [rsp+40h] [rbp-468h]
  int v714; // [rsp+40h] [rbp-468h]
  int v715; // [rsp+40h] [rbp-468h]
  int v716; // [rsp+40h] [rbp-468h]
  int v717; // [rsp+40h] [rbp-468h]
  int v718; // [rsp+48h] [rbp-460h]
  int v719; // [rsp+48h] [rbp-460h]
  int v720; // [rsp+48h] [rbp-460h]
  int v721; // [rsp+48h] [rbp-460h]
  int v722; // [rsp+48h] [rbp-460h]
  int v723; // [rsp+48h] [rbp-460h]
  int v724; // [rsp+48h] [rbp-460h]
  int v725; // [rsp+48h] [rbp-460h]
  int v726; // [rsp+48h] [rbp-460h]
  int v727; // [rsp+48h] [rbp-460h]
  int v728; // [rsp+48h] [rbp-460h]
  int v729; // [rsp+48h] [rbp-460h]
  int v730; // [rsp+48h] [rbp-460h]
  int v731; // [rsp+48h] [rbp-460h]
  int v732; // [rsp+48h] [rbp-460h]
  int v733; // [rsp+48h] [rbp-460h]
  int v734; // [rsp+48h] [rbp-460h]
  int v735; // [rsp+48h] [rbp-460h]
  int v736; // [rsp+48h] [rbp-460h]
  int v737; // [rsp+48h] [rbp-460h]
  int v738; // [rsp+48h] [rbp-460h]
  int v739; // [rsp+48h] [rbp-460h]
  int v740; // [rsp+48h] [rbp-460h]
  int v741; // [rsp+48h] [rbp-460h]
  int v742; // [rsp+48h] [rbp-460h]
  int v743; // [rsp+48h] [rbp-460h]
  int v744; // [rsp+48h] [rbp-460h]
  int v745; // [rsp+48h] [rbp-460h]
  int v746; // [rsp+48h] [rbp-460h]
  int v747; // [rsp+48h] [rbp-460h]
  __m128 v748; // [rsp+50h] [rbp-458h] BYREF
  ida_mcp::tools::objc_analysis *v749; // [rsp+60h] [rbp-448h]
  const __m128i *v750; // [rsp+68h] [rbp-440h]
  __m128i *v751; // [rsp+70h] [rbp-438h]
  __m128i *v752; // [rsp+78h] [rbp-430h]
  __int128 *v753; // [rsp+80h] [rbp-428h]
  __int8 *v754; // [rsp+88h] [rbp-420h]
  __int64 *v755; // [rsp+90h] [rbp-418h]
  _BYTE *v756; // [rsp+98h] [rbp-410h]
  _BYTE **v757; // [rsp+A0h] [rbp-408h]
  __int64 *v758; // [rsp+A8h] [rbp-400h]
  __int64 *v759; // [rsp+B0h] [rbp-3F8h]
  __m128i *v760; // [rsp+B8h] [rbp-3F0h]
  char *v761; // [rsp+C0h] [rbp-3E8h]
  __int128 *v762; // [rsp+C8h] [rbp-3E0h]
  __int64 *v763; // [rsp+D0h] [rbp-3D8h]
  char *v764; // [rsp+D8h] [rbp-3D0h]
  __m128i *v765; // [rsp+E0h] [rbp-3C8h]
  __int64 *v766; // [rsp+E8h] [rbp-3C0h]
  __int128 *v767; // [rsp+F0h] [rbp-3B8h]
  __m128i *v768; // [rsp+F8h] [rbp-3B0h]
  __m128i *v769; // [rsp+100h] [rbp-3A8h]
  const __m128i *v770; // [rsp+108h] [rbp-3A0h]
  char *v771; // [rsp+110h] [rbp-398h]
  __int128 *v772; // [rsp+118h] [rbp-390h]
  const __m128i *v773; // [rsp+120h] [rbp-388h]
  __int128 *v774; // [rsp+128h] [rbp-380h]
  __int128 *v775; // [rsp+130h] [rbp-378h]
  __int64 *v776; // [rsp+138h] [rbp-370h]
  __m128i v777; // [rsp+140h] [rbp-368h] BYREF
  __int64 v778; // [rsp+150h] [rbp-358h] BYREF
  __int64 v779; // [rsp+158h] [rbp-350h] BYREF
  _QWORD v780[3]; // [rsp+160h] [rbp-348h] BYREF
  char v781; // [rsp+178h] [rbp-330h]
  __int128 v782; // [rsp+180h] [rbp-328h] BYREF
  _QWORD v783[3]; // [rsp+190h] [rbp-318h] BYREF
  char v784; // [rsp+1A8h] [rbp-300h]
  __int128 v785; // [rsp+1B0h] [rbp-2F8h] BYREF
  char v786; // [rsp+1C0h] [rbp-2E8h] BYREF
  __int128 v787; // [rsp+1C8h] [rbp-2E0h] BYREF
  char v788; // [rsp+1D8h] [rbp-2D0h]
  __int128 v789; // [rsp+1E0h] [rbp-2C8h] BYREF
  __int64 v790; // [rsp+1F0h] [rbp-2B8h] BYREF
  char v791; // [rsp+1F8h] [rbp-2B0h] BYREF
  __int64 v792; // [rsp+200h] [rbp-2A8h]
  _QWORD v793[3]; // [rsp+208h] [rbp-2A0h] BYREF
  __int64 v794; // [rsp+220h] [rbp-288h] BYREF
  __int128 v795; // [rsp+228h] [rbp-280h] BYREF
  __int64 v796; // [rsp+238h] [rbp-270h] BYREF
  __int128 v797; // [rsp+240h] [rbp-268h] BYREF
  char v798; // [rsp+250h] [rbp-258h] BYREF
  __int128 v799; // [rsp+258h] [rbp-250h] BYREF
  char v800; // [rsp+268h] [rbp-240h]
  __int128 v801; // [rsp+270h] [rbp-238h] BYREF
  char v802; // [rsp+280h] [rbp-228h] BYREF
  __int128 v803; // [rsp+288h] [rbp-220h] BYREF
  char v804; // [rsp+298h] [rbp-210h]
  __int128 v805; // [rsp+2A0h] [rbp-208h] BYREF
  char v806; // [rsp+2B0h] [rbp-1F8h] BYREF
  __int128 v807; // [rsp+2B8h] [rbp-1F0h] BYREF
  __int64 v808; // [rsp+2C8h] [rbp-1E0h] BYREF
  __int128 v809; // [rsp+2D0h] [rbp-1D8h] BYREF
  __int64 v810; // [rsp+2E0h] [rbp-1C8h] BYREF
  __int128 v811; // [rsp+2E8h] [rbp-1C0h] BYREF
  __int64 v812; // [rsp+2F8h] [rbp-1B0h] BYREF
  char v813; // [rsp+300h] [rbp-1A8h] BYREF
  __int64 v814; // [rsp+308h] [rbp-1A0h]
  char v815; // [rsp+310h] [rbp-198h] BYREF
  __int128 v816; // [rsp+318h] [rbp-190h]
  __int64 v817; // [rsp+328h] [rbp-180h] BYREF
  __int128 v818; // [rsp+330h] [rbp-178h] BYREF
  char v819; // [rsp+340h] [rbp-168h] BYREF
  __int128 v820; // [rsp+348h] [rbp-160h]
  __m128i v821; // [rsp+358h] [rbp-150h] BYREF
  __int64 v822; // [rsp+368h] [rbp-140h]
  __m128i v823; // [rsp+370h] [rbp-138h] BYREF
  __m128i v824; // [rsp+380h] [rbp-128h] BYREF
  char v825; // [rsp+390h] [rbp-118h] BYREF
  __int64 v826; // [rsp+398h] [rbp-110h]
  _QWORD v827[3]; // [rsp+3A0h] [rbp-108h] BYREF
  char v828; // [rsp+3B8h] [rbp-F0h] BYREF
  _BYTE *v829; // [rsp+3C0h] [rbp-E8h] BYREF
  __int64 v830; // [rsp+3C8h] [rbp-E0h]
  _BYTE v831[16]; // [rsp+3D0h] [rbp-D8h] BYREF
  _BYTE *v832; // [rsp+3E0h] [rbp-C8h] BYREF
  __int64 v833; // [rsp+3E8h] [rbp-C0h]
  _BYTE v834[16]; // [rsp+3F0h] [rbp-B8h] BYREF
  char v835; // [rsp+400h] [rbp-A8h]
  __int64 v836; // [rsp+408h] [rbp-A0h]
  char v837; // [rsp+420h] [rbp-88h]
  char v838; // [rsp+458h] [rbp-50h]
  unsigned __int64 v839; // [rsp+468h] [rbp-40h]

  v749 = this;
  v839 = __readfsqword(0x28u);
  v756 = v831;
  v829 = v831;
  v830 = 0;
  v831[0] = 0;
  v832 = v834;
  v833 = 0;
  v834[0] = 0;
  v835 = 0;
  v836 = 0;
  v837 = 0;
  v838 = 0;
  std::string::_M_replace();
  v757 = &v832;
  std::string::_M_replace();
  *(_QWORD *)&v799 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v798 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v800 = 0;
  *(_QWORD *)&v801 = 0;
  v799 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v800 = 3;
  v3 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v3, "object", v4, v5, v6, v7, (int)&v801, v398, v468);
  v751 = (__m128i *)&v798;
  v801 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v823,
    (const __m128i *)&v798);
  v824.m128i_i64[0] = 0;
  v819 = 0;
  *(_QWORD *)&v820 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v819 = 3;
  v8 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v8, "properties", v9, v10, v11, v12, v328, v399, v469);
  v815 = 0;
  v820 = (unsigned __int64)v8;
  *(_QWORD *)&v816 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v815 = 3;
  v13 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v13, "limit", v14, v15, v16, v17, v329, v400, v470);
  v802 = 0;
  *(_QWORD *)&v803 = 0;
  v816 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v802 = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "type");
  *(_QWORD *)(v18 + 8) = 4;
  v804 = 0;
  *(_QWORD *)&v805 = 0;
  v803 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v804 = 3;
  v19 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v19, "integer", v20, v21, v22, v23, v330, (int)&v805, (__int64)&v803);
  v760 = (__m128i *)&v802;
  v805 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v810,
    (const __m128i *)&v802);
  *((_QWORD *)&v811 + 1) = 0;
  v806 = 0;
  *(_QWORD *)&v807 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v806 = 3;
  v24 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v24, "description", v25, v26, v27, v28, v331, v401, v471);
  LOBYTE(v808) = 0;
  *(_QWORD *)&v809 = 0;
  v807 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v808) = 3;
  v29 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v29,
    "Max results (default 100)",
    v30,
    v31,
    v32,
    v33,
    v332,
    v402,
    v472);
  v752 = (__m128i *)&v806;
  v765 = (__m128i *)&v812;
  v748 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  v809 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v812,
    (const __m128i *)&v806);
  v814 = 0;
  v766 = &v817;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v817,
    (const __m128i *)&v810);
  *((_QWORD *)&v818 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v794,
    (const __m128i *)&v815);
  *((_QWORD *)&v795 + 1) = 0;
  v769 = &v821;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v821,
    (__int64)&v794,
    1,
    v34,
    v35,
    v36,
    v333,
    v403,
    v473,
    v538,
    (int)&v794,
    (int)&v815,
    (__int64)&v810,
    (int)&v799,
    (int)&v807,
    (int)&v809,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v822 = 0;
  v750 = (const __m128i *)&v819;
  v755 = &v824.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v824.m128i_i64[1],
    (const __m128i *)&v819);
  v826 = 0;
  LOBYTE(v778) = 0;
  v758 = &v778;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v778,
    &v823);
  v37 = v835;
  v38 = v779;
  v835 = v778;
  LOBYTE(v778) = v37;
  v779 = v836;
  v836 = v38;
  v759 = &v779;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v761 = &v825;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v763 = &v823.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v754 = &v821.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v762 = &v795;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v764 = &v813;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v753 = &v811;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v748);
  v823.m128i_i64[1] = 0;
  v823.m128i_i64[0] = (__int64)ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_list_objc_selectors;
  v824 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v824.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v824.m128i_i64[0])(&v823, &v823, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v829);
  v830 = 0;
  v831[0] = 0;
  v829 = v756;
  v832 = v834;
  v833 = 0;
  v834[0] = 0;
  v835 = 0;
  v836 = 0;
  v837 = 0;
  v838 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v798 = 0;
  *(_QWORD *)&v799 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v798 = 3;
  v40 = operator new(0x20u);
  *(_QWORD *)v40 = v40 + 16;
  strcpy((char *)(v40 + 16), "type");
  *(_QWORD *)(v40 + 8) = 4;
  v800 = 0;
  *(_QWORD *)&v801 = 0;
  v799 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v800 = 3;
  v41 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v41, "object", v42, v43, v44, v45, v334, v404, v474);
  v801 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v823,
    v751);
  v824.m128i_i64[0] = 0;
  v819 = 0;
  *(_QWORD *)&v820 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v819 = 3;
  v46 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v46, "properties", v47, v48, v49, v50, v335, v405, v475);
  v815 = 0;
  *(_QWORD *)&v816 = 0;
  v820 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v815 = 3;
  v51 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v51, "limit", v52, v53, v54, v55, v336, v406, v476);
  v802 = 0;
  *(_QWORD *)&v803 = 0;
  v816 = (unsigned __int64)v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v802 = 3;
  v56 = operator new(0x20u);
  *(_QWORD *)v56 = v56 + 16;
  strcpy((char *)(v56 + 16), "type");
  *(_QWORD *)(v56 + 8) = 4;
  v804 = 0;
  *(_QWORD *)&v805 = 0;
  v803 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v804 = 3;
  v57 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v57, "integer", v58, v59, v60, v61, v337, v407, v477);
  v805 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v628,
    v760);
  *((_QWORD *)&v811 + 1) = 0;
  v806 = 0;
  *(_QWORD *)&v807 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v806 = 3;
  v62 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v62, "description", v63, v64, v65, v66, v338, v408, v478);
  LOBYTE(v808) = 0;
  *(_QWORD *)&v809 = 0;
  v807 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v808) = 3;
  v67 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v67,
    "Max results (default 100)",
    v68,
    v69,
    v70,
    v71,
    v339,
    v409,
    v479);
  v809 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v765,
    v752);
  v814 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v766,
    v628);
  *((_QWORD *)&v818 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v568,
    v598);
  *((_QWORD *)&v795 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v769,
    (__int64)v568,
    1,
    v72,
    v73,
    v74,
    v340,
    v410,
    v480,
    (int)&v818,
    (int)v568,
    (int)v598,
    (__int64)v628,
    v658,
    v688,
    v718,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v822 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v755,
    v750);
  v826 = 0;
  LOBYTE(v778) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v758,
    &v823);
  v75 = v835;
  v835 = v778;
  v76 = v836;
  LOBYTE(v778) = v75;
  v836 = v779;
  v779 = v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v77 = _mm_load_si128((const __m128i *)&v748);
  v823.m128i_i64[1] = 0;
  v823.m128i_i64[0] = (__int64)ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_list_objc_classes;
  v824 = v77;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v824.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v824.m128i_i64[0])(&v823, &v823, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v829);
  v830 = 0;
  v831[0] = 0;
  v829 = v756;
  v832 = v834;
  v833 = 0;
  v834[0] = 0;
  v835 = 0;
  v836 = 0;
  v837 = 0;
  v838 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v770 = (const __m128i *)v780;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v780);
  v780[2] = 0;
  v781 = 0;
  *(_QWORD *)&v782 = 0;
  v772 = &v782;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v781 = 3;
  v78 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v78, "object", v79, v80, v81, v82, v341, v411, v481);
  v782 = (unsigned __int64)v78;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v823,
    v770);
  v824.m128i_i64[0] = 0;
  v819 = 0;
  *(_QWORD *)&v820 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v819 = 3;
  v83 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v83, "properties", v84, v85, v86, v87, v342, v412, v482);
  LOBYTE(v794) = 0;
  *(_QWORD *)&v795 = 0;
  v820 = (unsigned __int64)v83;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v794) = 3;
  v88 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v88, "limit", v89, v90, v91, v92, v343, v413, v483);
  v773 = (const __m128i *)v783;
  v795 = (unsigned __int64)v88;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v783);
  v783[2] = 0;
  v784 = 0;
  *(_QWORD *)&v785 = 0;
  v774 = &v785;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v784 = 3;
  v93 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v93, "integer", v94, v95, v96, v97, v344, v414, v484);
  v768 = (__m128i *)&v790;
  v785 = (unsigned __int64)v93;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v790,
    v773);
  v792 = 0;
  v786 = 0;
  *(_QWORD *)&v787 = 0;
  v767 = &v787;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v786 = 3;
  v98 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v98, "description", v99, v100, v101, v102, v345, v415, v485);
  v788 = 0;
  v775 = &v789;
  *(_QWORD *)&v789 = 0;
  v787 = (unsigned __int64)v98;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v788 = 3;
  v103 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v103,
    "Max results (default 200)",
    v104,
    v105,
    v106,
    v107,
    v346,
    v416,
    v486);
  v771 = &v786;
  v789 = (unsigned __int64)v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v793,
    (const __m128i *)&v786);
  v793[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v796,
    v768);
  *((_QWORD *)&v797 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v599,
    v569);
  *((_QWORD *)&v816 + 1) = 0;
  LOBYTE(v810) = 0;
  *(_QWORD *)&v811 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v810) = 3;
  v108 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v108, "class_filter", v109, v110, v111, v112, v347, v417, v487);
  v811 = (unsigned __int64)v108;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v751);
  *((_QWORD *)&v799 + 1) = 0;
  v800 = 0;
  *(_QWORD *)&v801 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v800 = 3;
  v113 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v113, "string", v114, v115, v116, v117, v348, v418, v488);
  v801 = (unsigned __int64)v113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v752,
    v751);
  *((_QWORD *)&v807 + 1) = 0;
  v802 = 0;
  *(_QWORD *)&v803 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v802 = 3;
  v118 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v118, "description", v119, v120, v121, v122, v349, v419, v489);
  v804 = 0;
  *(_QWORD *)&v805 = 0;
  v803 = (unsigned __int64)v118;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v804 = 3;
  v123 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v123,
    "Filter by class name substring",
    v124,
    v125,
    v126,
    v127,
    v350,
    v420,
    v490);
  v776 = &v808;
  v805 = (unsigned __int64)v123;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v808,
    (__int64)v760,
    2,
    v128,
    v129,
    v130,
    v351,
    v421,
    v491,
    v539,
    (int)v569,
    (int)v599,
    v629,
    v659,
    v689,
    v719,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  *((_QWORD *)&v809 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v765,
    (__int64)v752,
    2,
    v131,
    v132,
    v133,
    v352,
    v422,
    v492,
    v540,
    v570,
    v600,
    v630,
    v660,
    v690,
    v720,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v814 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v766,
    v631,
    2,
    v134,
    v135,
    v136,
    v353,
    v423,
    v493,
    v541,
    v571,
    v601,
    v631,
    v661,
    v691,
    v721,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  *((_QWORD *)&v818 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v769,
    v602,
    2,
    v137,
    v138,
    v139,
    v354,
    v424,
    v494,
    v542,
    v572,
    v602,
    v632,
    v662,
    v692,
    v722,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v822 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v755,
    (__int64)v750,
    2,
    v140,
    v141,
    v142,
    v355,
    v425,
    v495,
    v543,
    v573,
    v603,
    v633,
    v663,
    v693,
    v723,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v826 = 0;
  LOBYTE(v778) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v758,
    (__int64)&v823,
    2,
    v143,
    v144,
    v145,
    v356,
    v426,
    v496,
    v544,
    v574,
    v604,
    v634,
    v664,
    v694,
    v724,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v146 = v835;
  v835 = v778;
  v147 = v836;
  LOBYTE(v778) = v146;
  v836 = v779;
  v779 = v147;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v770 = (const __m128i *)&v797;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v773 = (const __m128i *)&v791;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = _mm_load_si128((const __m128i *)&v748);
  v823.m128i_i64[1] = 0;
  v823.m128i_i64[0] = (__int64)ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_list_objc_methods;
  v824 = v148;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v824.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v824.m128i_i64[0])(&v823, &v823, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v829);
  v830 = 0;
  v831[0] = 0;
  v829 = v756;
  v832 = v834;
  v833 = 0;
  v834[0] = 0;
  v835 = 0;
  v836 = 0;
  v837 = 0;
  v838 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v751);
  *((_QWORD *)&v799 + 1) = 0;
  v800 = 0;
  *(_QWORD *)&v801 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v800 = 3;
  v149 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v149, "object", v150, v151, v152, v153, v357, v427, v497);
  v801 = (unsigned __int64)v149;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v823,
    (__int64)v751,
    2,
    v154,
    v155,
    v156,
    v358,
    v428,
    v498,
    v545,
    v575,
    v605,
    v635,
    v665,
    v695,
    v725,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v824.m128i_i64[0] = 0;
  v819 = 0;
  *(_QWORD *)&v820 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v819 = 3;
  v157 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v157, "properties", v158, v159, v160, v161, v359, v429, v499);
  v815 = 0;
  *(_QWORD *)&v816 = 0;
  v820 = (unsigned __int64)v157;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v815 = 3;
  v162 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v162, "limit", v163, v164, v165, v166, v360, v430, v500);
  v816 = (unsigned __int64)v162;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v760);
  *((_QWORD *)&v803 + 1) = 0;
  v804 = 0;
  *(_QWORD *)&v805 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v804 = 3;
  v167 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v167, "integer", v168, v169, v170, v171, v361, v431, v501);
  v805 = (unsigned __int64)v167;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v636,
    (__int64)v760,
    2,
    v172,
    v173,
    v174,
    v362,
    v432,
    v502,
    v546,
    v576,
    v606,
    (__int64)v636,
    v666,
    v696,
    v726,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  *((_QWORD *)&v811 + 1) = 0;
  v806 = 0;
  *(_QWORD *)&v807 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v806 = 3;
  v175 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v175, "description", v176, v177, v178, v179, v363, v433, v503);
  LOBYTE(v808) = 0;
  *(_QWORD *)&v809 = 0;
  v807 = (unsigned __int64)v175;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v808) = 3;
  v180 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v180,
    "Max results (default 100)",
    v181,
    v182,
    v183,
    v184,
    v364,
    v434,
    v504);
  v809 = (unsigned __int64)v180;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v765,
    (__int64)v752,
    2,
    v185,
    v186,
    v187,
    v365,
    v435,
    v505,
    v547,
    v577,
    v607,
    v637,
    v667,
    v697,
    v727,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v814 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v766,
    v638,
    2,
    v188,
    v189,
    v190,
    v366,
    v436,
    v506,
    v548,
    v578,
    v608,
    v638,
    v668,
    v698,
    v728,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  *((_QWORD *)&v818 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v579,
    v609,
    2,
    v191,
    v192,
    v193,
    v367,
    v437,
    v507,
    v549,
    (int)v579,
    v609,
    v639,
    v669,
    v699,
    v729,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  *((_QWORD *)&v795 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v769,
    v580,
    1,
    v194,
    v195,
    v196,
    v368,
    v438,
    v508,
    v550,
    v580,
    v610,
    v640,
    v670,
    v700,
    v730,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v822 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v755,
    (__int64)v750,
    2,
    v197,
    v198,
    v199,
    v369,
    v439,
    v509,
    v551,
    v581,
    v611,
    v641,
    v671,
    v701,
    v731,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v826 = 0;
  LOBYTE(v778) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v758,
    (__int64)&v823,
    2,
    v200,
    v201,
    v202,
    v370,
    v440,
    v510,
    v552,
    v582,
    v612,
    v642,
    v672,
    v702,
    v732,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v203 = v835;
  v835 = v778;
  v204 = v836;
  LOBYTE(v778) = v203;
  v836 = v779;
  v779 = v204;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v205 = _mm_load_si128((const __m128i *)&v748);
  v823.m128i_i64[1] = 0;
  v823.m128i_i64[0] = (__int64)ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_list_objc_protocols;
  v824 = v205;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v824.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v824.m128i_i64[0])(&v823, &v823, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v829);
  v830 = 0;
  v831[0] = 0;
  v829 = v756;
  v832 = v834;
  v833 = 0;
  v834[0] = 0;
  v835 = 0;
  v836 = 0;
  v837 = 0;
  v838 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v583);
  *((_QWORD *)&v795 + 1) = 0;
  LOBYTE(v796) = 0;
  *(_QWORD *)&v797 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v796) = 3;
  v206 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v206, "object", v207, v208, v209, v210, v371, v441, v511);
  v797 = (unsigned __int64)v206;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v823,
    (__int64)v583,
    2,
    v211,
    v212,
    v213,
    v372,
    v442,
    v512,
    v553,
    (int)v583,
    v613,
    v643,
    v673,
    v703,
    v733,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v824.m128i_i64[0] = 0;
  v815 = 0;
  *(_QWORD *)&v816 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v815 = 3;
  v214 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v214, "properties", v215, v216, v217, v218, v373, v443, v513);
  LOBYTE(v810) = 0;
  *(_QWORD *)&v811 = 0;
  v816 = (unsigned __int64)v214;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v810) = 3;
  v219 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v219, "address", v220, v221, v222, v223, v374, v444, v514);
  v798 = 0;
  *(_QWORD *)&v799 = 0;
  v811 = (unsigned __int64)v219;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v798 = 3;
  v224 = operator new(0x20u);
  *(_QWORD *)v224 = v224 + 16;
  strcpy((char *)(v224 + 16), "type");
  *(_QWORD *)(v224 + 8) = 4;
  v800 = 0;
  *(_QWORD *)&v801 = 0;
  v799 = (unsigned __int64)v224;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v800 = 3;
  v225 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v225, "string", v226, v227, v228, v229, v375, v445, v515);
  v801 = (unsigned __int64)v225;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v752,
    (__int64)v751,
    2,
    v230,
    v231,
    v232,
    v376,
    v446,
    v516,
    v554,
    v584,
    v614,
    v644,
    v674,
    v704,
    v734,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  *((_QWORD *)&v807 + 1) = 0;
  v802 = 0;
  *(_QWORD *)&v803 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v802 = 3;
  v233 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v233, "description", v234, v235, v236, v237, v377, v447, v517);
  v804 = 0;
  *(_QWORD *)&v805 = 0;
  v803 = (unsigned __int64)v233;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v804 = 3;
  v238 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v238,
    "Address of BL objc_msgSend instruction",
    v239,
    v240,
    v241,
    v242,
    v378,
    v448,
    v518);
  v805 = (unsigned __int64)v238;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v776,
    (__int64)v760,
    2,
    v243,
    v244,
    v245,
    v379,
    v449,
    v519,
    v555,
    v585,
    v615,
    v645,
    v675,
    v705,
    v735,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  *((_QWORD *)&v809 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v765,
    (__int64)v752,
    2,
    v246,
    v247,
    v248,
    v380,
    v450,
    v520,
    v556,
    v586,
    v616,
    v646,
    v676,
    v706,
    v736,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v814 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v768,
    v647,
    2,
    v249,
    v250,
    v251,
    v381,
    v451,
    v521,
    v557,
    v587,
    v617,
    v647,
    v677,
    v707,
    v737,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v792 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v766,
    (__int64)v768,
    1,
    v252,
    v253,
    v254,
    v382,
    v452,
    v522,
    v558,
    v588,
    v618,
    v648,
    v678,
    v708,
    v738,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  *((_QWORD *)&v818 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v755,
    v619,
    2,
    v255,
    v256,
    v257,
    v383,
    v453,
    v523,
    v559,
    v589,
    v619,
    v649,
    v679,
    v709,
    v739,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v826 = 0;
  v819 = 0;
  *(_QWORD *)&v820 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v819 = 3;
  v258 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v258, "required", v259, v260, v261, v262, v384, v454, v524);
  v786 = 0;
  *(_QWORD *)&v787 = 0;
  v820 = (unsigned __int64)v258;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v786 = 3;
  v263 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v263, "address", v264, v265, v266, v267, v385, v455, v525);
  v787 = (unsigned __int64)v263;
  v765 = &v777;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v268 = _mm_load_si128(&v777);
  v822 = 0;
  v821 = v268;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v827,
    (__int64)v750,
    2,
    v269,
    v270,
    v271,
    v386,
    v456,
    v526,
    v560,
    v590,
    v620,
    v650,
    v680,
    v710,
    v740,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v827[2] = 0;
  LOBYTE(v778) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v758,
    (__int64)&v823,
    3,
    v272,
    v273,
    v274,
    v387,
    v457,
    v527,
    v561,
    v591,
    v621,
    v651,
    v681,
    v711,
    v741,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v275 = v835;
  v276 = (__m128i *)&v828;
  v835 = v778;
  v277 = v836;
  LOBYTE(v778) = v275;
  v836 = v779;
  v779 = v277;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v276 = (__m128i *)((char *)v276 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v276 != &v823 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v278 = _mm_load_si128((const __m128i *)&v748);
  v823.m128i_i64[1] = 0;
  v823.m128i_i64[0] = (__int64)ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_resolve_objc_call;
  v824 = v278;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v824.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v824.m128i_i64[0])(&v823, &v823, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v829);
  v830 = 0;
  v831[0] = 0;
  v829 = v756;
  v832 = v834;
  v833 = 0;
  v834[0] = 0;
  v835 = 0;
  v836 = 0;
  v837 = 0;
  v838 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v815 = 0;
  *(_QWORD *)&v816 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v815 = 3;
  v279 = operator new(0x20u);
  *(_QWORD *)v279 = v279 + 16;
  strcpy((char *)(v279 + 16), "type");
  *(_QWORD *)(v279 + 8) = 4;
  LOBYTE(v817) = 0;
  *(_QWORD *)&v818 = 0;
  v816 = (unsigned __int64)v279;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v817) = 3;
  v280 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v280, "object", v281, v282, v283, v284, v388, v458, v528);
  v818 = (unsigned __int64)v280;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v823,
    v622,
    2,
    v285,
    v286,
    v287,
    v389,
    v459,
    v529,
    v562,
    v592,
    v622,
    v652,
    v682,
    v712,
    v742,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v824.m128i_i64[0] = 0;
  v819 = 0;
  *(_QWORD *)&v820 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v819 = 3;
  v288 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v288, "properties", v289, v290, v291, v292, v390, v460, v530);
  v820 = (unsigned __int64)v288;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v293 = _mm_load_si128(&v777);
  v822 = 0;
  v821 = v293;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v755,
    (__int64)v750,
    2,
    v294,
    v295,
    v296,
    v391,
    v461,
    v531,
    v563,
    v593,
    v623,
    v653,
    v683,
    v713,
    v743,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v826 = 0;
  LOBYTE(v778) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v758,
    (__int64)&v823,
    2,
    v297,
    v298,
    v299,
    v392,
    v462,
    v532,
    v564,
    v594,
    v624,
    v654,
    v684,
    v714,
    v744,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v300 = v835;
  v835 = v778;
  v301 = v836;
  LOBYTE(v778) = v300;
  v836 = v779;
  v779 = v301;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v302 = _mm_load_si128((const __m128i *)&v748);
  v823.m128i_i64[1] = 0;
  v823.m128i_i64[0] = (__int64)ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_get_xpc_services;
  v824 = v302;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v824.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v824.m128i_i64[0])(&v823, &v823, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v829);
  v830 = 0;
  v831[0] = 0;
  v829 = v756;
  v832 = v834;
  v833 = 0;
  v834[0] = 0;
  v835 = 0;
  v836 = 0;
  v837 = 0;
  v838 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v815 = 0;
  *(_QWORD *)&v816 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v815 = 3;
  v303 = operator new(0x20u);
  *(_QWORD *)v303 = v303 + 16;
  strcpy((char *)(v303 + 16), "type");
  *(_QWORD *)(v303 + 8) = 4;
  LOBYTE(v817) = 0;
  *(_QWORD *)&v818 = 0;
  v816 = (unsigned __int64)v303;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v817) = 3;
  v304 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v304, "object", v305, v306, v307, v308, v393, v463, v533);
  v818 = (unsigned __int64)v304;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v823,
    v625,
    2,
    v309,
    v310,
    v311,
    v394,
    v464,
    v534,
    v565,
    v595,
    v625,
    v655,
    v685,
    v715,
    v745,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v824.m128i_i64[0] = 0;
  v819 = 0;
  *(_QWORD *)&v820 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v819 = 3;
  v312 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v312, "properties", v313, v314, v315, v316, v395, v465, v535);
  v820 = (unsigned __int64)v312;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v317 = _mm_load_si128(&v777);
  v822 = 0;
  v821 = v317;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v755,
    (__int64)v750,
    2,
    v318,
    v319,
    v320,
    v396,
    v466,
    v536,
    v566,
    v596,
    v626,
    v656,
    v686,
    v716,
    v746,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v826 = 0;
  LOBYTE(v778) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v758,
    (__int64)&v823,
    2,
    v321,
    v322,
    v323,
    v397,
    v467,
    v537,
    v567,
    v597,
    v627,
    v657,
    v687,
    v717,
    v747,
    v748.m128_i32[0],
    v748.m128_i8[8],
    (__int64)v749,
    (int)v750,
    (__int64)v751);
  v324 = v835;
  v835 = v778;
  v325 = v836;
  LOBYTE(v778) = v324;
  v836 = v779;
  v779 = v325;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v326 = _mm_load_si128((const __m128i *)&v748);
  v823.m128i_i64[1] = 0;
  v823.m128i_i64[0] = (__int64)ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_get_entitlements;
  v824 = v326;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v824.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v824.m128i_i64[0])(&v823, &v823, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition((ida_mcp::mcp::ToolDefinition *)&v829);
  return v839 - __readfsqword(0x28u);
}

