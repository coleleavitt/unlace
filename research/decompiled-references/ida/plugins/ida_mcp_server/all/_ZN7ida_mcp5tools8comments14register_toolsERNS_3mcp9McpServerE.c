unsigned __int64 __fastcall ida_mcp::tools::comments::register_tools(
        ida_mcp::tools::comments *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 *v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 *v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // r12
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 *v56; // r12
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __m128 v62; // xmm1
  __m128i v63; // xmm0
  char v64; // si
  __m128i *v65; // r15
  __int64 v66; // rdx
  __m128i *v67; // r15
  __m128i v68; // xmm2
  __int64 v69; // rax
  __int64 *v70; // r15
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 *v75; // r15
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 *v80; // r15
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 *v87; // r15
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 *v92; // r15
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 *v97; // r15
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  __int64 *v103; // r15
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 *v108; // r15
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 *v113; // r15
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 *v118; // r15
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rax
  __int64 *v124; // r15
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 *v129; // r15
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 *v134; // r15
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 *v139; // r15
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 *v144; // r15
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 *v149; // r15
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 *v154; // r15
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __m128i v159; // xmm0
  char v160; // si
  __m128i *v161; // r15
  __int64 v162; // rax
  __m128i *v163; // r15
  __int64 *v164; // r15
  __m128i v165; // xmm3
  __int64 v166; // rax
  __int64 *v167; // r15
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 *v172; // r15
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 *v177; // r15
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rax
  __int64 *v183; // r15
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 *v188; // r15
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  __int64 *v193; // r15
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 *v198; // r15
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 v203; // rax
  __int64 *v204; // r15
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // r8
  __int64 v208; // r9
  __int64 *v209; // r15
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  __int64 v213; // r9
  __int64 *v214; // r15
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 *v219; // r15
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // r9
  __int64 *v224; // r15
  __int64 v225; // rdx
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  __int64 *v229; // r15
  __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // r8
  __int64 v233; // r9
  __m128i v234; // xmm0
  char v235; // si
  __m128i *v236; // r15
  __int64 v237; // rax
  __m128i *v238; // r15
  __m128i v239; // xmm4
  __int64 v240; // rax
  __int64 *v241; // r15
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // r8
  __int64 v245; // r9
  __int64 *v246; // r15
  __int64 v247; // rdx
  __int64 v248; // rcx
  __int64 v249; // r8
  __int64 v250; // r9
  __int64 *v251; // r15
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  __int64 v256; // rax
  __int64 *v257; // r15
  __int64 v258; // rdx
  __int64 v259; // rcx
  __int64 v260; // r8
  __int64 v261; // r9
  __int64 *v262; // r15
  __int64 v263; // rdx
  __int64 v264; // rcx
  __int64 v265; // r8
  __int64 v266; // r9
  __int64 *v267; // r15
  __int64 v268; // rdx
  __int64 v269; // rcx
  __int64 v270; // r8
  __int64 v271; // r9
  __int64 *v272; // r15
  __int64 v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // r8
  __int64 v276; // r9
  __int64 v277; // rax
  __int64 *v278; // r15
  __int64 v279; // rdx
  __int64 v280; // rcx
  __int64 v281; // r8
  __int64 v282; // r9
  __int64 *v283; // r15
  __int64 v284; // rdx
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // r9
  __int64 *v288; // r15
  __int64 v289; // rdx
  __int64 v290; // rcx
  __int64 v291; // r8
  __int64 v292; // r9
  __int64 *v293; // r15
  __int64 v294; // rdx
  __int64 v295; // rcx
  __int64 v296; // r8
  __int64 v297; // r9
  __int64 v298; // rax
  __int64 *v299; // r15
  __int64 v300; // rdx
  __int64 v301; // rcx
  __int64 v302; // r8
  __int64 v303; // r9
  __int64 *v304; // r15
  __int64 v305; // rdx
  __int64 v306; // rcx
  __int64 v307; // r8
  __int64 v308; // r9
  __int64 *v309; // r15
  __int64 v310; // rdx
  __int64 v311; // rcx
  __int64 v312; // r8
  __int64 v313; // r9
  __int64 *v314; // r15
  __int64 v315; // rdx
  __int64 v316; // rcx
  __int64 v317; // r8
  __int64 v318; // r9
  __int64 *v319; // r15
  __int64 v320; // rdx
  __int64 v321; // rcx
  __int64 v322; // r8
  __int64 v323; // r9
  __int64 *v324; // r15
  __int64 v325; // rdx
  __int64 v326; // rcx
  __int64 v327; // r8
  __int64 v328; // r9
  __int64 *v329; // r15
  __int64 v330; // rdx
  __int64 v331; // rcx
  __int64 v332; // r8
  __int64 v333; // r9
  __m128i v334; // xmm0
  char v335; // si
  __m128i *v336; // r15
  __int64 v337; // rax
  __m128i *v338; // r15
  __int64 *v339; // rbp
  __m128i v340; // xmm5
  int v342; // [rsp+0h] [rbp-738h]
  int v343; // [rsp+0h] [rbp-738h]
  int v344; // [rsp+0h] [rbp-738h]
  int v345; // [rsp+0h] [rbp-738h]
  int v346; // [rsp+0h] [rbp-738h]
  const __m128i *v347; // [rsp+0h] [rbp-738h]
  int v348; // [rsp+0h] [rbp-738h]
  int v349; // [rsp+0h] [rbp-738h]
  int v350; // [rsp+0h] [rbp-738h]
  int v351; // [rsp+0h] [rbp-738h]
  int v352; // [rsp+0h] [rbp-738h]
  int v353; // [rsp+0h] [rbp-738h]
  int v354; // [rsp+0h] [rbp-738h]
  int v355; // [rsp+0h] [rbp-738h]
  int v356; // [rsp+0h] [rbp-738h]
  int v357; // [rsp+0h] [rbp-738h]
  int v358; // [rsp+0h] [rbp-738h]
  _QWORD *v359; // [rsp+0h] [rbp-738h]
  int v360; // [rsp+0h] [rbp-738h]
  const __m128i *v361; // [rsp+0h] [rbp-738h]
  int v362; // [rsp+0h] [rbp-738h]
  int v363; // [rsp+0h] [rbp-738h]
  int v364; // [rsp+0h] [rbp-738h]
  int v365; // [rsp+0h] [rbp-738h]
  int v366; // [rsp+0h] [rbp-738h]
  int v367; // [rsp+0h] [rbp-738h]
  int v368; // [rsp+0h] [rbp-738h]
  int v369; // [rsp+0h] [rbp-738h]
  int v370; // [rsp+0h] [rbp-738h]
  int v371; // [rsp+0h] [rbp-738h]
  int v372; // [rsp+0h] [rbp-738h]
  _QWORD *v373; // [rsp+0h] [rbp-738h]
  int v374; // [rsp+0h] [rbp-738h]
  const __m128i *v375; // [rsp+0h] [rbp-738h]
  int v376; // [rsp+0h] [rbp-738h]
  int v377; // [rsp+0h] [rbp-738h]
  int v378; // [rsp+0h] [rbp-738h]
  int v379; // [rsp+0h] [rbp-738h]
  int v380; // [rsp+0h] [rbp-738h]
  int v381; // [rsp+0h] [rbp-738h]
  int v382; // [rsp+0h] [rbp-738h]
  int v383; // [rsp+0h] [rbp-738h]
  int v384; // [rsp+0h] [rbp-738h]
  int v385; // [rsp+0h] [rbp-738h]
  int v386; // [rsp+0h] [rbp-738h]
  int v387; // [rsp+0h] [rbp-738h]
  int v388; // [rsp+0h] [rbp-738h]
  int v389; // [rsp+0h] [rbp-738h]
  _QWORD *v390; // [rsp+0h] [rbp-738h]
  int v391; // [rsp+0h] [rbp-738h]
  const __m128i *v392; // [rsp+0h] [rbp-738h]
  int v393; // [rsp+0h] [rbp-738h]
  int v394; // [rsp+0h] [rbp-738h]
  int v395; // [rsp+0h] [rbp-738h]
  int v396; // [rsp+0h] [rbp-738h]
  int v397; // [rsp+0h] [rbp-738h]
  int v398; // [rsp+0h] [rbp-738h]
  int v399; // [rsp+0h] [rbp-738h]
  int v400; // [rsp+8h] [rbp-730h]
  int v401; // [rsp+8h] [rbp-730h]
  int v402; // [rsp+8h] [rbp-730h]
  int v403; // [rsp+8h] [rbp-730h]
  int v404; // [rsp+8h] [rbp-730h]
  int v405; // [rsp+8h] [rbp-730h]
  int v406; // [rsp+8h] [rbp-730h]
  int v407; // [rsp+8h] [rbp-730h]
  int v408; // [rsp+8h] [rbp-730h]
  int v409; // [rsp+8h] [rbp-730h]
  int v410; // [rsp+8h] [rbp-730h]
  int v411; // [rsp+8h] [rbp-730h]
  int v412; // [rsp+8h] [rbp-730h]
  int v413; // [rsp+8h] [rbp-730h]
  int v414; // [rsp+8h] [rbp-730h]
  int v415; // [rsp+8h] [rbp-730h]
  int v416; // [rsp+8h] [rbp-730h]
  int v417; // [rsp+8h] [rbp-730h]
  int v418; // [rsp+8h] [rbp-730h]
  int v419; // [rsp+8h] [rbp-730h]
  int v420; // [rsp+8h] [rbp-730h]
  int v421; // [rsp+8h] [rbp-730h]
  int v422; // [rsp+8h] [rbp-730h]
  int v423; // [rsp+8h] [rbp-730h]
  int v424; // [rsp+8h] [rbp-730h]
  int v425; // [rsp+8h] [rbp-730h]
  int v426; // [rsp+8h] [rbp-730h]
  int v427; // [rsp+8h] [rbp-730h]
  int v428; // [rsp+8h] [rbp-730h]
  int v429; // [rsp+8h] [rbp-730h]
  int v430; // [rsp+8h] [rbp-730h]
  int v431; // [rsp+8h] [rbp-730h]
  int v432; // [rsp+8h] [rbp-730h]
  int v433; // [rsp+8h] [rbp-730h]
  int v434; // [rsp+8h] [rbp-730h]
  int v435; // [rsp+8h] [rbp-730h]
  int v436; // [rsp+8h] [rbp-730h]
  int v437; // [rsp+8h] [rbp-730h]
  int v438; // [rsp+8h] [rbp-730h]
  int v439; // [rsp+8h] [rbp-730h]
  int v440; // [rsp+8h] [rbp-730h]
  int v441; // [rsp+8h] [rbp-730h]
  int v442; // [rsp+8h] [rbp-730h]
  int v443; // [rsp+8h] [rbp-730h]
  int v444; // [rsp+8h] [rbp-730h]
  int v445; // [rsp+8h] [rbp-730h]
  int v446; // [rsp+8h] [rbp-730h]
  int v447; // [rsp+8h] [rbp-730h]
  int v448; // [rsp+8h] [rbp-730h]
  int v449; // [rsp+8h] [rbp-730h]
  int v450; // [rsp+8h] [rbp-730h]
  int v451; // [rsp+8h] [rbp-730h]
  int v452; // [rsp+8h] [rbp-730h]
  int v453; // [rsp+8h] [rbp-730h]
  int v454; // [rsp+8h] [rbp-730h]
  int v455; // [rsp+8h] [rbp-730h]
  int v456; // [rsp+8h] [rbp-730h]
  int v457; // [rsp+8h] [rbp-730h]
  __int64 v458; // [rsp+10h] [rbp-728h]
  __int64 v459; // [rsp+10h] [rbp-728h]
  __int64 v460; // [rsp+10h] [rbp-728h]
  __int64 v461; // [rsp+10h] [rbp-728h]
  __int64 v462; // [rsp+10h] [rbp-728h]
  __int64 v463; // [rsp+10h] [rbp-728h]
  __int64 v464; // [rsp+10h] [rbp-728h]
  __int64 v465; // [rsp+10h] [rbp-728h]
  __int64 v466; // [rsp+10h] [rbp-728h]
  __int64 v467; // [rsp+10h] [rbp-728h]
  __int64 v468; // [rsp+10h] [rbp-728h]
  __int64 v469; // [rsp+10h] [rbp-728h]
  __int64 v470; // [rsp+10h] [rbp-728h]
  __int64 v471; // [rsp+10h] [rbp-728h]
  __int64 v472; // [rsp+10h] [rbp-728h]
  __int64 v473; // [rsp+10h] [rbp-728h]
  __int64 v474; // [rsp+10h] [rbp-728h]
  __int64 v475; // [rsp+10h] [rbp-728h]
  __int64 v476; // [rsp+10h] [rbp-728h]
  __int64 v477; // [rsp+10h] [rbp-728h]
  __int64 v478; // [rsp+10h] [rbp-728h]
  __int64 v479; // [rsp+10h] [rbp-728h]
  __int64 v480; // [rsp+10h] [rbp-728h]
  __int64 v481; // [rsp+10h] [rbp-728h]
  __int64 v482; // [rsp+10h] [rbp-728h]
  __int64 v483; // [rsp+10h] [rbp-728h]
  __int64 v484; // [rsp+10h] [rbp-728h]
  __int64 v485; // [rsp+10h] [rbp-728h]
  __int64 v486; // [rsp+10h] [rbp-728h]
  __int64 v487; // [rsp+10h] [rbp-728h]
  __int64 v488; // [rsp+10h] [rbp-728h]
  __int64 v489; // [rsp+10h] [rbp-728h]
  __int64 v490; // [rsp+10h] [rbp-728h]
  __int64 v491; // [rsp+10h] [rbp-728h]
  __int64 v492; // [rsp+10h] [rbp-728h]
  __int64 v493; // [rsp+10h] [rbp-728h]
  __int64 v494; // [rsp+10h] [rbp-728h]
  __int64 v495; // [rsp+10h] [rbp-728h]
  __int64 v496; // [rsp+10h] [rbp-728h]
  __int64 v497; // [rsp+10h] [rbp-728h]
  __int64 v498; // [rsp+10h] [rbp-728h]
  __int64 v499; // [rsp+10h] [rbp-728h]
  __int64 v500; // [rsp+10h] [rbp-728h]
  __int64 v501; // [rsp+10h] [rbp-728h]
  __int64 v502; // [rsp+10h] [rbp-728h]
  __int64 v503; // [rsp+10h] [rbp-728h]
  __int64 v504; // [rsp+10h] [rbp-728h]
  __int64 v505; // [rsp+10h] [rbp-728h]
  __int64 v506; // [rsp+10h] [rbp-728h]
  __int64 v507; // [rsp+10h] [rbp-728h]
  __int64 v508; // [rsp+10h] [rbp-728h]
  __int64 v509; // [rsp+10h] [rbp-728h]
  __int64 v510; // [rsp+10h] [rbp-728h]
  __int64 v511; // [rsp+10h] [rbp-728h]
  __int64 v512; // [rsp+10h] [rbp-728h]
  __int64 v513; // [rsp+10h] [rbp-728h]
  __int64 v514; // [rsp+10h] [rbp-728h]
  __int64 v515; // [rsp+10h] [rbp-728h]
  __m128i v516; // [rsp+A0h] [rbp-698h] BYREF
  ida_mcp::tools::comments *v517; // [rsp+B0h] [rbp-688h]
  const __m128i *v518; // [rsp+B8h] [rbp-680h]
  const __m128i *v519; // [rsp+C0h] [rbp-678h]
  const __m128i *v520; // [rsp+C8h] [rbp-670h]
  const __m128i *v521; // [rsp+D0h] [rbp-668h]
  const __m128i *v522; // [rsp+D8h] [rbp-660h]
  const __m128i *v523; // [rsp+E0h] [rbp-658h]
  const __m128i *v524; // [rsp+E8h] [rbp-650h]
  const __m128i *v525; // [rsp+F0h] [rbp-648h]
  __int128 *v526; // [rsp+F8h] [rbp-640h]
  __int128 *v527; // [rsp+100h] [rbp-638h]
  __int128 *v528; // [rsp+108h] [rbp-630h]
  __int128 *v529; // [rsp+110h] [rbp-628h]
  __int128 *v530; // [rsp+118h] [rbp-620h]
  __int128 *v531; // [rsp+120h] [rbp-618h]
  __int128 *v532; // [rsp+128h] [rbp-610h]
  __int128 *v533; // [rsp+130h] [rbp-608h]
  __int128 *v534; // [rsp+138h] [rbp-600h]
  char *v535; // [rsp+140h] [rbp-5F8h]
  char *v536; // [rsp+148h] [rbp-5F0h]
  char *v537; // [rsp+150h] [rbp-5E8h]
  __int64 *v538; // [rsp+158h] [rbp-5E0h]
  char *v539; // [rsp+160h] [rbp-5D8h]
  __int8 *v540; // [rsp+168h] [rbp-5D0h]
  __m128i *v541; // [rsp+170h] [rbp-5C8h]
  char v542[8]; // [rsp+178h] [rbp-5C0h]
  __int64 *v543; // [rsp+180h] [rbp-5B8h]
  char v544[8]; // [rsp+188h] [rbp-5B0h]
  char v545[8]; // [rsp+190h] [rbp-5A8h]
  const __m128i *v546; // [rsp+198h] [rbp-5A0h]
  char v547[8]; // [rsp+1A0h] [rbp-598h]
  char v548[8]; // [rsp+1A8h] [rbp-590h]
  char v549[8]; // [rsp+1B0h] [rbp-588h]
  char v550[8]; // [rsp+1B8h] [rbp-580h]
  char v551[8]; // [rsp+1C0h] [rbp-578h]
  char v552[8]; // [rsp+1C8h] [rbp-570h]
  void **v553; // [rsp+1D0h] [rbp-568h]
  __int64 *v554; // [rsp+1D8h] [rbp-560h]
  char *v555; // [rsp+1E0h] [rbp-558h]
  char *v556; // [rsp+1E8h] [rbp-550h]
  const __m128i *v557; // [rsp+1F0h] [rbp-548h]
  const __m128i *v558; // [rsp+1F8h] [rbp-540h]
  const __m128i *v559; // [rsp+200h] [rbp-538h]
  char *v560; // [rsp+208h] [rbp-530h]
  char *v561; // [rsp+210h] [rbp-528h]
  char v562[8]; // [rsp+218h] [rbp-520h]
  char v563[8]; // [rsp+220h] [rbp-518h]
  char v564[8]; // [rsp+228h] [rbp-510h]
  char v565[8]; // [rsp+230h] [rbp-508h]
  char v566[8]; // [rsp+238h] [rbp-500h]
  __m128i v567; // [rsp+240h] [rbp-4F8h] BYREF
  __int64 v568; // [rsp+250h] [rbp-4E8h] BYREF
  __int64 v569; // [rsp+258h] [rbp-4E0h] BYREF
  char v570; // [rsp+260h] [rbp-4D8h] BYREF
  __int128 v571; // [rsp+268h] [rbp-4D0h] BYREF
  char v572; // [rsp+278h] [rbp-4C0h]
  __int128 v573; // [rsp+280h] [rbp-4B8h] BYREF
  char v574; // [rsp+290h] [rbp-4A8h] BYREF
  __int128 v575; // [rsp+298h] [rbp-4A0h] BYREF
  char v576; // [rsp+2A8h] [rbp-490h]
  __int128 v577; // [rsp+2B0h] [rbp-488h] BYREF
  char v578; // [rsp+2C0h] [rbp-478h] BYREF
  __int128 v579; // [rsp+2C8h] [rbp-470h] BYREF
  char v580; // [rsp+2D8h] [rbp-460h]
  __int128 v581; // [rsp+2E0h] [rbp-458h] BYREF
  char v582; // [rsp+2F0h] [rbp-448h] BYREF
  __int128 v583; // [rsp+2F8h] [rbp-440h] BYREF
  char v584; // [rsp+308h] [rbp-430h]
  __int128 v585; // [rsp+310h] [rbp-428h] BYREF
  __int64 v586; // [rsp+320h] [rbp-418h] BYREF
  __int128 v587; // [rsp+328h] [rbp-410h]
  __int64 v588; // [rsp+338h] [rbp-400h] BYREF
  char v589; // [rsp+340h] [rbp-3F8h] BYREF
  __int64 v590; // [rsp+348h] [rbp-3F0h]
  char v591; // [rsp+350h] [rbp-3E8h] BYREF
  int v592[4]; // [rsp+358h] [rbp-3E0h] BYREF
  __int64 v593; // [rsp+368h] [rbp-3D0h] BYREF
  __int128 v594; // [rsp+370h] [rbp-3C8h]
  char v595; // [rsp+380h] [rbp-3B8h] BYREF
  int v596[4]; // [rsp+388h] [rbp-3B0h] BYREF
  char v597; // [rsp+398h] [rbp-3A0h]
  int v598[4]; // [rsp+3A0h] [rbp-398h]
  char v599; // [rsp+3B0h] [rbp-388h] BYREF
  int v600[4]; // [rsp+3B8h] [rbp-380h]
  char v601; // [rsp+3C8h] [rbp-370h]
  int v602[4]; // [rsp+3D0h] [rbp-368h]
  __int64 v603; // [rsp+3E0h] [rbp-358h] BYREF
  char v604; // [rsp+3E8h] [rbp-350h] BYREF
  __int64 v605; // [rsp+3F0h] [rbp-348h]
  __int64 v606; // [rsp+3F8h] [rbp-340h] BYREF
  char v607; // [rsp+400h] [rbp-338h] BYREF
  __int64 v608; // [rsp+408h] [rbp-330h]
  char v609; // [rsp+410h] [rbp-328h] BYREF
  __int64 v610[2]; // [rsp+418h] [rbp-320h]
  __int64 v611; // [rsp+428h] [rbp-310h] BYREF
  char v612; // [rsp+430h] [rbp-308h] BYREF
  __int64 v613; // [rsp+438h] [rbp-300h]
  char v614; // [rsp+440h] [rbp-2F8h] BYREF
  int v615[4]; // [rsp+448h] [rbp-2F0h]
  char v616; // [rsp+458h] [rbp-2E0h]
  int v617[4]; // [rsp+460h] [rbp-2D8h]
  char v618; // [rsp+470h] [rbp-2C8h] BYREF
  char v619[16]; // [rsp+478h] [rbp-2C0h]
  char v620; // [rsp+488h] [rbp-2B0h]
  __int128 v621; // [rsp+490h] [rbp-2A8h]
  char v622; // [rsp+4A0h] [rbp-298h] BYREF
  __int128 v623; // [rsp+4A8h] [rbp-290h]
  __int64 v624; // [rsp+4B8h] [rbp-280h]
  __int64 v625; // [rsp+4C0h] [rbp-278h] BYREF
  __int64 v626; // [rsp+4C8h] [rbp-270h]
  char v627; // [rsp+4D0h] [rbp-268h] BYREF
  __int128 v628; // [rsp+4D8h] [rbp-260h]
  __int64 v629; // [rsp+4E8h] [rbp-250h] BYREF
  char v630; // [rsp+4F0h] [rbp-248h] BYREF
  __int64 v631; // [rsp+4F8h] [rbp-240h]
  __int64 v632; // [rsp+500h] [rbp-238h] BYREF
  __int128 v633; // [rsp+508h] [rbp-230h]
  __int64 v634; // [rsp+518h] [rbp-220h] BYREF
  char v635; // [rsp+520h] [rbp-218h] BYREF
  __int64 v636; // [rsp+528h] [rbp-210h]
  char v637; // [rsp+530h] [rbp-208h] BYREF
  __int128 v638; // [rsp+538h] [rbp-200h]
  __m128i v639; // [rsp+548h] [rbp-1F0h] BYREF
  __int64 v640; // [rsp+558h] [rbp-1E0h]
  __int64 v641; // [rsp+560h] [rbp-1D8h] BYREF
  __int128 v642; // [rsp+568h] [rbp-1D0h] BYREF
  char v643[16]; // [rsp+578h] [rbp-1C0h] BYREF
  __int64 v644; // [rsp+588h] [rbp-1B0h]
  char v645[16]; // [rsp+590h] [rbp-1A8h] BYREF
  __int64 v646; // [rsp+5A0h] [rbp-198h]
  char v647; // [rsp+5A8h] [rbp-190h] BYREF
  __m128i v648; // [rsp+5B0h] [rbp-188h] BYREF
  __int64 v649; // [rsp+5C0h] [rbp-178h]
  _QWORD v650[2]; // [rsp+5C8h] [rbp-170h] BYREF
  __int64 v651; // [rsp+5D8h] [rbp-160h]
  _QWORD v652[2]; // [rsp+5E0h] [rbp-158h] BYREF
  __int64 v653; // [rsp+5F0h] [rbp-148h]
  char v654; // [rsp+5F8h] [rbp-140h] BYREF
  __m128i v655; // [rsp+600h] [rbp-138h] BYREF
  __m128i v656; // [rsp+610h] [rbp-128h] BYREF
  __int64 v657; // [rsp+628h] [rbp-110h]
  _QWORD v658[2]; // [rsp+630h] [rbp-108h] BYREF
  __int64 v659; // [rsp+640h] [rbp-F8h]
  char v660; // [rsp+648h] [rbp-F0h] BYREF
  void *v661; // [rsp+650h] [rbp-E8h]
  __int64 v662; // [rsp+658h] [rbp-E0h]
  _QWORD v663[2]; // [rsp+660h] [rbp-D8h] BYREF
  void *v664; // [rsp+670h] [rbp-C8h] BYREF
  __int64 v665; // [rsp+678h] [rbp-C0h]
  _QWORD v666[2]; // [rsp+680h] [rbp-B8h] BYREF
  char v667; // [rsp+690h] [rbp-A8h]
  __int64 v668; // [rsp+698h] [rbp-A0h] BYREF
  char v669; // [rsp+6B0h] [rbp-88h]
  ida_mcp::tools::comments *v670; // [rsp+6B8h] [rbp-80h]
  _QWORD v671[2]; // [rsp+6C8h] [rbp-70h] BYREF
  char v672; // [rsp+6D8h] [rbp-60h]
  char v673; // [rsp+6E8h] [rbp-50h]
  unsigned __int64 v674; // [rsp+6F8h] [rbp-40h]

  v517 = this;
  v674 = __readfsqword(0x28u);
  v661 = v663;
  v662 = 0;
  LOBYTE(v663[0]) = 0;
  v664 = v666;
  v665 = 0;
  LOBYTE(v666[0]) = 0;
  v667 = 0;
  v668 = 0;
  v669 = 0;
  v673 = 0;
  std::string::_M_replace();
  v553 = &v664;
  std::string::_M_replace();
  *(_QWORD *)v592 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v591 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  LOBYTE(v593) = 0;
  *(_QWORD *)&v594 = 0;
  *(_OWORD *)v592 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v593) = 3;
  v3 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v3, "object", v4, v5, v6, v7, v342, (int)v592, v458);
  v521 = (const __m128i *)&v591;
  v594 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v655,
    (const __m128i *)&v591);
  v656.m128i_i64[0] = 0;
  v637 = 0;
  *(_QWORD *)&v638 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v637 = 3;
  v8 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v8, "properties", v9, v10, v11, v12, v343, v400, v459);
  v609 = 0;
  v610[0] = 0;
  v638 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v609 = 3;
  v13 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v13, "address", v14, v15, v16, v17, v344, v401, v460);
  v595 = 0;
  *(_QWORD *)v596 = 0;
  *(_OWORD *)v610 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v595 = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "type");
  *(_QWORD *)(v18 + 8) = 4;
  v597 = 0;
  *(_QWORD *)v598 = 0;
  *(_OWORD *)v596 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v597 = 3;
  v19 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v19, "string", v20, v21, v22, v23, v345, v402, (__int64)v596);
  v522 = (const __m128i *)&v595;
  *(_OWORD *)v598 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v603,
    (const __m128i *)&v595);
  v605 = 0;
  v599 = 0;
  *(_QWORD *)v600 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v599 = 3;
  v24 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v24, "description", v25, v26, v27, v28, (int)&v603, v403, v461);
  v601 = 0;
  *(_QWORD *)v602 = 0;
  *(_OWORD *)v600 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v601 = 3;
  v29 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v29, "Hex address", v30, v31, v32, v33, v346, v404, v462);
  v523 = (const __m128i *)&v599;
  *(_QWORD *)v544 = &v606;
  *(_OWORD *)v602 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v606,
    (const __m128i *)&v599);
  v608 = 0;
  *(_QWORD *)v545 = &v611;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v611,
    v347);
  v613 = 0;
  v520 = (const __m128i *)&v609;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v632,
    (const __m128i *)&v609);
  *((_QWORD *)&v633 + 1) = 0;
  v627 = 0;
  *(_QWORD *)&v628 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v627 = 3;
  v34 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v34, "repeatable", v35, v36, v37, v38, (int)v347, v405, v463);
  v614 = 0;
  *(_QWORD *)v615 = 0;
  v628 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v614 = 3;
  v39 = operator new(0x20u);
  *(_QWORD *)v39 = v39 + 16;
  strcpy((char *)(v39 + 16), "type");
  *(_QWORD *)(v39 + 8) = 4;
  v616 = 0;
  *(_QWORD *)v617 = 0;
  *(_OWORD *)v615 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v616 = 3;
  v40 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v40, "boolean", v41, v42, v43, v44, v348, v406, v464);
  v524 = (const __m128i *)&v614;
  *(_OWORD *)v617 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v648,
    (const __m128i *)&v614);
  v649 = 0;
  v618 = 0;
  *(_QWORD *)v619 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v618 = 3;
  v45 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v45, "description", v46, v47, v48, v49, v349, v407, v465);
  v620 = 0;
  *(_QWORD *)&v621 = 0;
  *(_OWORD *)v619 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v620 = 3;
  v50 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v50, "Get repeatable", v51, v52, v53, v54, v350, v408, v466);
  v525 = (const __m128i *)&v618;
  *(_QWORD *)v549 = v650;
  v621 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v650,
    (const __m128i *)&v618);
  v651 = 0;
  v622 = 0;
  *(_QWORD *)&v623 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v622 = 3;
  v55 = operator new(0x20u);
  strcpy((char *)(v55 + 16), "default");
  *(_QWORD *)v55 = v55 + 16;
  *(_QWORD *)(v55 + 8) = 7;
  v546 = (const __m128i *)&v622;
  v624 = 4;
  v625 = 0;
  v626 = 0;
  *(_QWORD *)v550 = v652;
  v623 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v652,
    (const __m128i *)&v622);
  v653 = 0;
  *(_QWORD *)v547 = &v629;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v629,
    &v648,
    3);
  v631 = 0;
  v519 = (const __m128i *)&v627;
  *(_QWORD *)v548 = &v634;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v634,
    (const __m128i *)&v627);
  v636 = 0;
  *(_QWORD *)v564 = &v639;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v639,
    (const __m128i *)&v632);
  v640 = 0;
  v518 = (const __m128i *)&v637;
  *(_QWORD *)v551 = &v656.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v656.m128i_i64[1],
    (const __m128i *)&v637);
  v657 = 0;
  LOBYTE(v641) = 0;
  *(_QWORD *)&v642 = 0;
  v534 = &v642;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v641) = 3;
  v56 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v56, "required", v57, v58, v59, v60, v351, v409, v467);
  *(_QWORD *)&v587 = 0;
  v642 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v586) = 3;
  v61 = operator new(0x20u);
  *(_QWORD *)v61 = v61 + 16;
  strcpy((char *)(v61 + 16), "address");
  v62 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v61 + 8) = 7;
  v541 = &v567;
  v516 = (__m128i)v62;
  v587 = (unsigned __int64)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v63 = _mm_load_si128(&v567);
  v644 = 0;
  *(_QWORD *)v552 = v658;
  *(__m128i *)v643 = v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v658,
    (const __m128i *)&v641);
  v659 = 0;
  LOBYTE(v568) = 0;
  *(_QWORD *)v542 = &v568;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v568,
    &v655,
    3);
  v64 = v667;
  v65 = (__m128i *)&v660;
  v66 = v569;
  v667 = v568;
  LOBYTE(v568) = v64;
  v569 = v668;
  v668 = v66;
  v543 = &v569;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v65 = (__m128i *)((char *)v65 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v65 != &v655 );
  v67 = (__m128i *)&v654;
  v561 = &v643[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v540 = &v639.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v539 = &v635;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v555 = &v630;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v67 = (__m128i *)((char *)v67 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v67 != &v648 );
  v538 = &v625;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v537 = &v612;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v536 = &v607;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v535 = &v604;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v68 = _mm_load_si128(&v516);
  v655.m128i_i64[1] = 0;
  v655.m128i_i64[0] = (__int64)ida_mcp::tools::comments::`anonymous namespace'::handle_get_cmt;
  v656 = v68;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v656.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v656.m128i_i64[0])(&v655, &v655, 3);
  if ( v673 && v672 && v670 != (ida_mcp::tools::comments *)v671 )
    operator delete(v670, v671[0] + 1LL);
  if ( v669 )
  {
    v669 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v554 = &v668;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v664 != v666 )
    operator delete(v664, v666[0] + 1LL);
  if ( v661 != v663 )
    operator delete(v661, v663[0] + 1LL);
  v661 = v663;
  v662 = 0;
  LOBYTE(v663[0]) = 0;
  v664 = v666;
  v665 = 0;
  LOBYTE(v666[0]) = 0;
  v667 = 0;
  v668 = 0;
  v669 = 0;
  v673 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v574 = 0;
  v528 = &v575;
  *(_QWORD *)&v575 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v574 = 3;
  v69 = operator new(0x20u);
  *(_QWORD *)v69 = v69 + 16;
  strcpy((char *)(v69 + 16), "type");
  *(_QWORD *)(v69 + 8) = 4;
  v576 = 0;
  *(_QWORD *)&v577 = 0;
  v529 = &v577;
  v575 = (unsigned __int64)v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v576 = 3;
  v70 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v70, "object", v71, v72, v73, v74, v352, v410, v468);
  v557 = (const __m128i *)&v574;
  v577 = (unsigned __int64)v70;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v655,
    (const __m128i *)&v574);
  v656.m128i_i64[0] = 0;
  LOBYTE(v632) = 0;
  *(_QWORD *)&v633 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v632) = 3;
  v75 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v75, "properties", v76, v77, v78, v79, v353, v411, v469);
  v591 = 0;
  *(_QWORD *)v592 = 0;
  v633 = (unsigned __int64)v75;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v591 = 3;
  v80 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v80, "address", v81, v82, v83, v84, v354, v412, v470);
  v578 = 0;
  v530 = &v579;
  *(_QWORD *)&v579 = 0;
  *(_OWORD *)v592 = (unsigned __int64)v80;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v578 = 3;
  v85 = operator new(0x20u);
  *(_QWORD *)v85 = v85 + 16;
  strcpy((char *)(v85 + 16), "type");
  *(_QWORD *)(v85 + 8) = 4;
  v580 = 0;
  *(_QWORD *)&v581 = 0;
  v531 = &v581;
  v579 = (unsigned __int64)v85;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v580 = 3;
  v86 = operator new(0x20u);
  *(_QWORD *)v86 = v86 + 16;
  strcpy((char *)(v86 + 16), "string");
  *(_QWORD *)(v86 + 8) = 6;
  v558 = (const __m128i *)&v578;
  v581 = (unsigned __int64)v86;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v586,
    (const __m128i *)&v578);
  *((_QWORD *)&v587 + 1) = 0;
  v582 = 0;
  *(_QWORD *)&v583 = 0;
  v532 = &v583;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v582 = 3;
  v87 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v87, "description", v88, v89, v90, v91, v355, v413, v471);
  v584 = 0;
  v533 = &v585;
  *(_QWORD *)&v585 = 0;
  v583 = (unsigned __int64)v87;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v584 = 3;
  v92 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v92, "Hex address", v93, v94, v95, v96, v356, v414, v472);
  v559 = (const __m128i *)&v582;
  *(_QWORD *)v562 = &v588;
  v585 = (unsigned __int64)v92;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v588,
    (const __m128i *)&v582);
  v590 = 0;
  *(_QWORD *)v563 = &v593;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v593,
    (const __m128i *)&v586);
  *((_QWORD *)&v594 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v648,
    v521);
  v649 = 0;
  v609 = 0;
  v610[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v609 = 3;
  v97 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v97, "comment", v98, v99, v100, v101, v357, v415, v473);
  v595 = 0;
  *(_QWORD *)v596 = 0;
  *(_OWORD *)v610 = (unsigned __int64)v97;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v595 = 3;
  v102 = operator new(0x20u);
  *(_QWORD *)v102 = v102 + 16;
  strcpy((char *)(v102 + 16), "type");
  *(_QWORD *)(v102 + 8) = 4;
  v597 = 0;
  *(_QWORD *)v598 = 0;
  *(_OWORD *)v596 = (unsigned __int64)v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v597 = 3;
  v103 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v103, "string", v104, v105, v106, v107, v358, v416, v474);
  *(_OWORD *)v598 = (unsigned __int64)v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v359,
    v522);
  v605 = 0;
  v599 = 0;
  *(_QWORD *)v600 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v599 = 3;
  v108 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v108, "description", v109, v110, v111, v112, (int)v359, v417, v475);
  v601 = 0;
  *(_QWORD *)v602 = 0;
  *(_OWORD *)v600 = (unsigned __int64)v108;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v601 = 3;
  v113 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v113, "Comment text", v114, v115, v116, v117, v360, v418, v476);
  *(_OWORD *)v602 = (unsigned __int64)v113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v544,
    v523);
  v608 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v545,
    v361);
  v613 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v549,
    v520);
  v651 = 0;
  v627 = 0;
  *(_QWORD *)&v628 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v627 = 3;
  v118 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v118, "repeatable", v119, v120, v121, v122, (int)v361, v419, v477);
  v614 = 0;
  *(_QWORD *)v615 = 0;
  v628 = (unsigned __int64)v118;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v614 = 3;
  v123 = operator new(0x20u);
  *(_QWORD *)v123 = v123 + 16;
  strcpy((char *)(v123 + 16), "type");
  *(_QWORD *)(v123 + 8) = 4;
  v616 = 0;
  *(_QWORD *)v617 = 0;
  *(_OWORD *)v615 = (unsigned __int64)v123;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v616 = 3;
  v124 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v124, "boolean", v125, v126, v127, v128, v362, v420, v478);
  *(_OWORD *)v617 = (unsigned __int64)v124;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v641,
    v524,
    2);
  *((_QWORD *)&v642 + 1) = 0;
  v618 = 0;
  *(_QWORD *)v619 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v618 = 3;
  v129 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v129, "description", v130, v131, v132, v133, v363, v421, v479);
  v620 = 0;
  *(_QWORD *)&v621 = 0;
  *(_OWORD *)v619 = (unsigned __int64)v129;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v620 = 3;
  v134 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v134, "Set repeatable", v135, v136, v137, v138, v364, v422, v480);
  *(_QWORD *)v565 = v643;
  v621 = (unsigned __int64)v134;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v643,
    v525,
    2);
  v644 = 0;
  v622 = 0;
  *(_QWORD *)&v623 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v622 = 3;
  v139 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v139, "default", v140, v141, v142, v143, v365, v423, v481);
  v624 = 4;
  v625 = 0;
  v626 = 0;
  *(_QWORD *)v566 = v645;
  v623 = (unsigned __int64)v139;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v645,
    v546,
    2);
  v646 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v547,
    (const __m128i *)&v641,
    3);
  v631 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v550,
    v519,
    2);
  v653 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v548,
    &v648,
    3);
  v636 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v551,
    (const __m128i *)&v632,
    2);
  v657 = 0;
  v637 = 0;
  *(_QWORD *)&v638 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v637 = 3;
  v144 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v144, "required", v145, v146, v147, v148, v366, v424, v482);
  v570 = 0;
  v526 = &v571;
  *(_QWORD *)&v571 = 0;
  v638 = (unsigned __int64)v144;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v570 = 3;
  v149 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v149, "address", v150, v151, v152, v153, v367, v425, v483);
  v572 = 0;
  v527 = &v573;
  *(_QWORD *)&v573 = 0;
  v571 = (unsigned __int64)v149;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v572 = 3;
  v154 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v154, "comment", v155, v156, v157, v158, v368, v426, v484);
  v556 = &v570;
  v573 = (unsigned __int64)v154;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v159 = _mm_load_si128(&v567);
  v640 = 0;
  v639 = v159;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v552,
    v518,
    2);
  v659 = 0;
  LOBYTE(v568) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v542,
    &v655,
    3);
  v160 = v667;
  v161 = (__m128i *)&v660;
  v667 = v568;
  v162 = v668;
  LOBYTE(v568) = v160;
  v668 = v569;
  v569 = v162;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v161 = (__m128i *)((char *)v161 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v161 != &v655 );
  v163 = (__m128i *)&v654;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v163 = (__m128i *)((char *)v163 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v163 != &v648 );
  v164 = (__int64 *)&v647;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v164 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v164 != &v641 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v560 = &v589;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v165 = _mm_load_si128(&v516);
  v655.m128i_i64[1] = 0;
  v655.m128i_i64[0] = (__int64)ida_mcp::tools::comments::`anonymous namespace'::handle_set_cmt;
  v656 = v165;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v656.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v656.m128i_i64[0])(&v655, &v655, 3);
  if ( v673 && v672 && v670 != (ida_mcp::tools::comments *)v671 )
    operator delete(v670, v671[0] + 1LL);
  if ( v669 )
  {
    v669 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v664 != v666 )
    operator delete(v664, v666[0] + 1LL);
  if ( v661 != v663 )
    operator delete(v661, v663[0] + 1LL);
  v661 = v663;
  v662 = 0;
  LOBYTE(v663[0]) = 0;
  v664 = v666;
  v665 = 0;
  LOBYTE(v666[0]) = 0;
  v667 = 0;
  v668 = 0;
  v669 = 0;
  v673 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v591 = 0;
  *(_QWORD *)v592 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v591 = 3;
  v166 = operator new(0x20u);
  *(_QWORD *)v166 = v166 + 16;
  strcpy((char *)(v166 + 16), "type");
  *(_QWORD *)(v166 + 8) = 4;
  LOBYTE(v593) = 0;
  *(_QWORD *)&v594 = 0;
  *(_OWORD *)v592 = (unsigned __int64)v166;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v593) = 3;
  v167 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v167, "object", v168, v169, v170, v171, v369, v427, v485);
  v594 = (unsigned __int64)v167;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v655,
    v521,
    2);
  v656.m128i_i64[0] = 0;
  v637 = 0;
  *(_QWORD *)&v638 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v637 = 3;
  v172 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v172, "properties", v173, v174, v175, v176, v370, v428, v486);
  v609 = 0;
  v610[0] = 0;
  v638 = (unsigned __int64)v172;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v609 = 3;
  v177 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v177, "address", v178, v179, v180, v181, v371, v429, v487);
  v595 = 0;
  *(_QWORD *)v596 = 0;
  *(_OWORD *)v610 = (unsigned __int64)v177;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v595 = 3;
  v182 = operator new(0x20u);
  *(_QWORD *)v182 = v182 + 16;
  strcpy((char *)(v182 + 16), "type");
  *(_QWORD *)(v182 + 8) = 4;
  v597 = 0;
  *(_QWORD *)v598 = 0;
  *(_OWORD *)v596 = (unsigned __int64)v182;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v597 = 3;
  v183 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v183, "string", v184, v185, v186, v187, v372, v430, v488);
  *(_OWORD *)v598 = (unsigned __int64)v183;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v373,
    v522,
    2);
  v605 = 0;
  v599 = 0;
  *(_QWORD *)v600 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v599 = 3;
  v188 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v188, "description", v189, v190, v191, v192, (int)v373, v431, v489);
  v601 = 0;
  *(_QWORD *)v602 = 0;
  *(_OWORD *)v600 = (unsigned __int64)v188;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v601 = 3;
  v193 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v193, "Hex address", v194, v195, v196, v197, v374, v432, v490);
  *(_OWORD *)v602 = (unsigned __int64)v193;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v544,
    v523,
    2);
  v608 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v545,
    v375,
    2);
  v613 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v632,
    v520,
    2);
  *((_QWORD *)&v633 + 1) = 0;
  v627 = 0;
  *(_QWORD *)&v628 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v627 = 3;
  v198 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v198, "repeatable", v199, v200, v201, v202, (int)v375, v433, v491);
  v614 = 0;
  *(_QWORD *)v615 = 0;
  v628 = (unsigned __int64)v198;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v614 = 3;
  v203 = operator new(0x20u);
  *(_QWORD *)v203 = v203 + 16;
  strcpy((char *)(v203 + 16), "type");
  *(_QWORD *)(v203 + 8) = 4;
  v616 = 0;
  *(_QWORD *)v617 = 0;
  *(_OWORD *)v615 = (unsigned __int64)v203;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v616 = 3;
  v204 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v204, "boolean", v205, v206, v207, v208, v376, v434, v492);
  *(_OWORD *)v617 = (unsigned __int64)v204;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v648,
    v524,
    2);
  v649 = 0;
  v618 = 0;
  *(_QWORD *)v619 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v618 = 3;
  v209 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v209, "description", v210, v211, v212, v213, v377, v435, v493);
  v620 = 0;
  *(_QWORD *)&v621 = 0;
  *(_OWORD *)v619 = (unsigned __int64)v209;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v620 = 3;
  v214 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v214, "Get repeatable", v215, v216, v217, v218, v378, v436, v494);
  v621 = (unsigned __int64)v214;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v549,
    v525,
    2);
  v651 = 0;
  v622 = 0;
  *(_QWORD *)&v623 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v622 = 3;
  v219 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v219, "default", v220, v221, v222, v223, v379, v437, v495);
  v624 = 4;
  v625 = 0;
  v626 = 0;
  v623 = (unsigned __int64)v219;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v550,
    v546,
    2);
  v653 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v547,
    &v648,
    3);
  v631 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v548,
    v519,
    2);
  v636 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v564,
    (const __m128i *)&v632,
    2);
  v640 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v551,
    v518,
    2);
  v657 = 0;
  LOBYTE(v641) = 0;
  *(_QWORD *)&v642 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v641) = 3;
  v224 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v224, "required", v225, v226, v227, v228, v380, v438, v496);
  LOBYTE(v586) = 0;
  *(_QWORD *)&v587 = 0;
  v642 = (unsigned __int64)v224;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v586) = 3;
  v229 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v229, "address", v230, v231, v232, v233, v381, v439, v497);
  v587 = (unsigned __int64)v229;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v234 = _mm_load_si128(&v567);
  v644 = 0;
  *(__m128i *)v643 = v234;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v552,
    (const __m128i *)&v641,
    2);
  v659 = 0;
  LOBYTE(v568) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v542,
    &v655,
    3);
  v235 = v667;
  v236 = (__m128i *)&v660;
  v667 = v568;
  v237 = v668;
  LOBYTE(v568) = v235;
  v668 = v569;
  v569 = v237;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v236 = (__m128i *)((char *)v236 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v236 != &v655 );
  v238 = (__m128i *)&v654;
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
    v238 = (__m128i *)((char *)v238 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v238 != &v648 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v239 = _mm_load_si128(&v516);
  v655.m128i_i64[1] = 0;
  v655.m128i_i64[0] = (__int64)ida_mcp::tools::comments::`anonymous namespace'::get_func_cmt;
  v656 = v239;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v656.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v656.m128i_i64[0])(&v655, &v655, 3);
  if ( v673 && v672 && v670 != (ida_mcp::tools::comments *)v671 )
    operator delete(v670, v671[0] + 1LL);
  if ( v669 )
  {
    v669 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v664 != v666 )
    operator delete(v664, v666[0] + 1LL);
  if ( v661 != v663 )
    operator delete(v661, v663[0] + 1LL);
  v661 = v663;
  v662 = 0;
  LOBYTE(v663[0]) = 0;
  v664 = v666;
  v665 = 0;
  LOBYTE(v666[0]) = 0;
  v667 = 0;
  v668 = 0;
  v669 = 0;
  v673 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v574 = 0;
  *(_QWORD *)&v575 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v574 = 3;
  v240 = operator new(0x20u);
  *(_QWORD *)v240 = v240 + 16;
  strcpy((char *)(v240 + 16), "type");
  *(_QWORD *)(v240 + 8) = 4;
  v576 = 0;
  *(_QWORD *)&v577 = 0;
  v575 = (unsigned __int64)v240;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v576 = 3;
  v241 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v241, "object", v242, v243, v244, v245, v382, v440, v498);
  v577 = (unsigned __int64)v241;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v655,
    v557,
    2);
  v656.m128i_i64[0] = 0;
  LOBYTE(v632) = 0;
  *(_QWORD *)&v633 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v632) = 3;
  v246 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v246, "properties", v247, v248, v249, v250, v383, v441, v499);
  v591 = 0;
  *(_QWORD *)v592 = 0;
  v633 = (unsigned __int64)v246;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v591 = 3;
  v251 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v251, "address", v252, v253, v254, v255, v384, v442, v500);
  v578 = 0;
  *(_QWORD *)&v579 = 0;
  *(_OWORD *)v592 = (unsigned __int64)v251;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v578 = 3;
  v256 = operator new(0x20u);
  *(_QWORD *)v256 = v256 + 16;
  strcpy((char *)(v256 + 16), "type");
  *(_QWORD *)(v256 + 8) = 4;
  v580 = 0;
  *(_QWORD *)&v581 = 0;
  v579 = (unsigned __int64)v256;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v580 = 3;
  v257 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v257, "string", v258, v259, v260, v261, v385, v443, v501);
  v581 = (unsigned __int64)v257;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v586,
    v558,
    2);
  *((_QWORD *)&v587 + 1) = 0;
  v582 = 0;
  *(_QWORD *)&v583 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v582 = 3;
  v262 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v262, "description", v263, v264, v265, v266, v386, v444, v502);
  v584 = 0;
  *(_QWORD *)&v585 = 0;
  v583 = (unsigned __int64)v262;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v584 = 3;
  v267 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v267, "Hex address", v268, v269, v270, v271, v387, v445, v503);
  v585 = (unsigned __int64)v267;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v562,
    v559,
    2);
  v590 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v563,
    (const __m128i *)&v586,
    2);
  *((_QWORD *)&v594 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v648,
    v521,
    2);
  v649 = 0;
  v609 = 0;
  v610[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v609 = 3;
  v272 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v272, "comment", v273, v274, v275, v276, v388, v446, v504);
  v595 = 0;
  *(_QWORD *)v596 = 0;
  *(_OWORD *)v610 = (unsigned __int64)v272;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v595 = 3;
  v277 = operator new(0x20u);
  *(_QWORD *)v277 = v277 + 16;
  strcpy((char *)(v277 + 16), "type");
  *(_QWORD *)(v277 + 8) = 4;
  v597 = 0;
  *(_QWORD *)v598 = 0;
  *(_OWORD *)v596 = (unsigned __int64)v277;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v597 = 3;
  v278 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v278, "string", v279, v280, v281, v282, v389, v447, v505);
  *(_OWORD *)v598 = (unsigned __int64)v278;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v390,
    v522,
    2);
  v605 = 0;
  v599 = 0;
  *(_QWORD *)v600 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v599 = 3;
  v283 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v283, "description", v284, v285, v286, v287, (int)v390, v448, v506);
  v601 = 0;
  *(_QWORD *)v602 = 0;
  *(_OWORD *)v600 = (unsigned __int64)v283;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v601 = 3;
  v288 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v288, "Comment text", v289, v290, v291, v292, v391, v449, v507);
  *(_OWORD *)v602 = (unsigned __int64)v288;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v544,
    v523,
    2);
  v608 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v545,
    v392,
    2);
  v613 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v549,
    v520,
    2);
  v651 = 0;
  v627 = 0;
  *(_QWORD *)&v628 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v627 = 3;
  v293 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v293, "repeatable", v294, v295, v296, v297, (int)v392, v450, v508);
  v614 = 0;
  *(_QWORD *)v615 = 0;
  v628 = (unsigned __int64)v293;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v614 = 3;
  v298 = operator new(0x20u);
  *(_QWORD *)v298 = v298 + 16;
  strcpy((char *)(v298 + 16), "type");
  *(_QWORD *)(v298 + 8) = 4;
  v616 = 0;
  *(_QWORD *)v617 = 0;
  *(_OWORD *)v615 = (unsigned __int64)v298;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v616 = 3;
  v299 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v299, "boolean", v300, v301, v302, v303, v393, v451, v509);
  *(_OWORD *)v617 = (unsigned __int64)v299;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v641,
    v524,
    2);
  *((_QWORD *)&v642 + 1) = 0;
  v618 = 0;
  *(_QWORD *)v619 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v618 = 3;
  v304 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v304, "description", v305, v306, v307, v308, v394, v452, v510);
  v620 = 0;
  *(_QWORD *)&v621 = 0;
  *(_OWORD *)v619 = (unsigned __int64)v304;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v620 = 3;
  v309 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v309, "Set repeatable", v310, v311, v312, v313, v395, v453, v511);
  v621 = (unsigned __int64)v309;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v565,
    v525,
    2);
  v644 = 0;
  v622 = 0;
  *(_QWORD *)&v623 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v622 = 3;
  v314 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v314, "default", v315, v316, v317, v318, v396, v454, v512);
  v624 = 4;
  v625 = 0;
  v626 = 0;
  v623 = (unsigned __int64)v314;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v566,
    v546,
    2);
  v646 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v547,
    (const __m128i *)&v641,
    3);
  v631 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v550,
    v519,
    2);
  v653 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v548,
    &v648,
    3);
  v636 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v551,
    (const __m128i *)&v632,
    2);
  v657 = 0;
  v637 = 0;
  *(_QWORD *)&v638 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v637 = 3;
  v319 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v319, "required", v320, v321, v322, v323, v397, v455, v513);
  v570 = 0;
  *(_QWORD *)&v571 = 0;
  v638 = (unsigned __int64)v319;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v570 = 3;
  v324 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v324, "address", v325, v326, v327, v328, v398, v456, v514);
  v572 = 0;
  *(_QWORD *)&v573 = 0;
  v571 = (unsigned __int64)v324;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v572 = 3;
  v329 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v329, "comment", v330, v331, v332, v333, v399, v457, v515);
  v573 = (unsigned __int64)v329;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v334 = _mm_load_si128(&v567);
  v640 = 0;
  v639 = v334;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v552,
    v518,
    2);
  v659 = 0;
  LOBYTE(v568) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v542,
    &v655,
    3);
  v335 = v667;
  v336 = (__m128i *)&v660;
  v667 = v568;
  v337 = v668;
  LOBYTE(v568) = v335;
  v668 = v569;
  v569 = v337;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v336 = (__m128i *)((char *)v336 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v336 != &v655 );
  v338 = (__m128i *)&v654;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v338 = (__m128i *)((char *)v338 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v338 != &v648 );
  v339 = (__int64 *)&v647;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v339 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v339 != &v641 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v340 = _mm_load_si128(&v516);
  v655.m128i_i64[1] = 0;
  v655.m128i_i64[0] = (__int64)ida_mcp::tools::comments::`anonymous namespace'::set_func_cmt;
  v656 = v340;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v656.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v656.m128i_i64[0])(&v655, &v655, 3);
  if ( v673 && v672 && v670 != (ida_mcp::tools::comments *)v671 )
    operator delete(v670, v671[0] + 1LL);
  if ( v669 )
  {
    v669 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v664 != v666 )
    operator delete(v664, v666[0] + 1LL);
  if ( v661 != v663 )
    operator delete(v661, v663[0] + 1LL);
  return v674 - __readfsqword(0x28u);
}

