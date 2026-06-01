_QWORD *__fastcall ida_mcp::tools::frames::`anonymous namespace'::handle_get_frame_info(_QWORD *a1)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r15
  char *v2; // rax
  void *v3; // r15
  std::runtime_error *v4; // rbx
  void *v5; // r15
  _BYTE *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // bl
  unsigned __int64 v10; // r12
  const char *v11; // r14
  __int64 *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  char v18; // si
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rax
  char v22; // si
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rax
  char v26; // si
  __int64 v27; // rdx
  const char *v28; // r14
  __int64 *v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  char v35; // si
  __int64 v36; // rdx
  __int64 v37; // rax
  char *v38; // rbx
  size_t v39; // rax
  unsigned int v40; // r14d
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  _QWORD *v43; // rdx
  _QWORD *v44; // r14
  size_t v45; // rcx
  __int64 v46; // rax
  char v47; // si
  __int64 v48; // rdx
  size_t v49; // rax
  unsigned int v50; // ecx
  _QWORD *v51; // rdx
  _QWORD *v52; // rax
  _QWORD *v53; // rdx
  _QWORD *v54; // r14
  size_t v55; // rcx
  __int64 v56; // rax
  char v57; // si
  __int64 v58; // rdx
  char v59; // r12
  const char *v60; // r14
  __int64 *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  char v67; // si
  __int64 v68; // rdx
  const char *v69; // r14
  __int64 *v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  char v76; // si
  __int64 v77; // rdx
  const char *v78; // r14
  __int64 *v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  char v85; // si
  __int64 v86; // rdx
  __int64 v87; // rax
  unsigned __int64 v88; // rbx
  __int64 *v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  _QWORD *v94; // rax
  _QWORD *v95; // rcx
  _QWORD *v96; // rsi
  __int64 v97; // rdi
  __int64 *v98; // rbx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 *v103; // rbx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 *v108; // rbx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 *v113; // rbx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 *v118; // rbx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 *v123; // rbx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 *v128; // rbx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 *v136; // rbx
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 *v141; // rbx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 *v146; // rbx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 *v151; // rbx
  __int64 v152; // rdx
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
  __int64 *v165; // rbx
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 *v170; // rbx
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 *v178; // rbx
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 *v186; // rbx
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
  __int64 *v200; // rbx
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 *v205; // rbx
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 v210; // rcx
  __int64 v211; // r8
  __int64 v212; // r9
  __int64 *v213; // r15
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 v223; // r8
  __int64 v224; // r9
  __m128i v225; // xmm0
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 v238; // rcx
  __int64 v239; // r8
  __int64 v240; // r9
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // r9
  __m128i v245; // xmm0
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 v248; // r9
  __int64 v249; // rcx
  __int64 v250; // r8
  __int64 v251; // r9
  __int64 v252; // rbx
  char *v253; // rbx
  char *v254; // rbx
  char *v255; // rbx
  char v256; // bl
  __int64 v257; // rax
  char v258; // si
  __int64 v259; // rcx
  __int64 v260; // rdx
  __int64 v261; // rax
  char v262; // si
  __int64 v263; // rdx
  char *v264; // rdi
  __int64 v265; // r12
  __int64 v266; // r15
  char *v267; // rbx
  _QWORD *v269; // rax
  _QWORD *v270; // rax
  unsigned int v271; // eax
  unsigned int v272; // eax
  unsigned __int64 v273; // rdx
  char *v274; // rax
  char *v275; // r13
  unsigned int v276; // r14d
  __int64 v277; // rdi
  unsigned int v278; // r14d
  unsigned int v279; // eax
  __int64 v280; // rcx
  unsigned __int64 v281; // rdx
  char *v282; // rax
  char *v283; // r14
  unsigned int v284; // ecx
  __int64 v285; // r11
  unsigned int v286; // ecx
  unsigned int v287; // eax
  __int64 v288; // rsi
  unsigned __int64 v289; // rsi
  char *v290; // rdx
  char *v291; // r8
  unsigned int v292; // eax
  __int64 v293; // r10
  unsigned int v294; // eax
  unsigned int v295; // edx
  __int64 v296; // rdi
  unsigned __int64 v297; // rsi
  char *v298; // rdx
  char *v299; // r8
  unsigned int v300; // eax
  __int64 v301; // r10
  unsigned int v302; // eax
  unsigned int v303; // edx
  __int64 v304; // rdi
  unsigned int v305; // ecx
  __int64 v306; // rbx
  unsigned __int64 v307; // r8
  char *v308; // rsi
  char *v309; // r9
  unsigned int v310; // ecx
  unsigned int v311; // ecx
  unsigned int v312; // esi
  __int64 v313; // r10
  int v314; // [rsp+0h] [rbp-8D0h]
  int v315; // [rsp+0h] [rbp-8D0h]
  int v316; // [rsp+0h] [rbp-8D0h]
  int v317; // [rsp+0h] [rbp-8D0h]
  int v318; // [rsp+0h] [rbp-8D0h]
  int v319; // [rsp+0h] [rbp-8D0h]
  int v320; // [rsp+0h] [rbp-8D0h]
  int v321; // [rsp+0h] [rbp-8D0h]
  int v322; // [rsp+0h] [rbp-8D0h]
  int v323; // [rsp+0h] [rbp-8D0h]
  int v324; // [rsp+0h] [rbp-8D0h]
  int v325; // [rsp+0h] [rbp-8D0h]
  int v326; // [rsp+0h] [rbp-8D0h]
  int v327; // [rsp+0h] [rbp-8D0h]
  int v328; // [rsp+0h] [rbp-8D0h]
  int v329; // [rsp+0h] [rbp-8D0h]
  int v330; // [rsp+0h] [rbp-8D0h]
  int v331; // [rsp+0h] [rbp-8D0h]
  int v332; // [rsp+0h] [rbp-8D0h]
  int v333; // [rsp+0h] [rbp-8D0h]
  int v334; // [rsp+0h] [rbp-8D0h]
  int v335; // [rsp+0h] [rbp-8D0h]
  int v336; // [rsp+0h] [rbp-8D0h]
  int v337; // [rsp+0h] [rbp-8D0h]
  int v338; // [rsp+0h] [rbp-8D0h]
  int v339; // [rsp+0h] [rbp-8D0h]
  int v340; // [rsp+0h] [rbp-8D0h]
  int v341; // [rsp+0h] [rbp-8D0h]
  int v342; // [rsp+0h] [rbp-8D0h]
  int v343; // [rsp+0h] [rbp-8D0h]
  int v344; // [rsp+0h] [rbp-8D0h]
  int v345; // [rsp+0h] [rbp-8D0h]
  int v346; // [rsp+0h] [rbp-8D0h]
  int v347; // [rsp+0h] [rbp-8D0h]
  int v348; // [rsp+0h] [rbp-8D0h]
  int v349; // [rsp+0h] [rbp-8D0h]
  int v350; // [rsp+0h] [rbp-8D0h]
  int v351; // [rsp+0h] [rbp-8D0h]
  int v352; // [rsp+0h] [rbp-8D0h]
  int v353; // [rsp+8h] [rbp-8C8h]
  int v354; // [rsp+8h] [rbp-8C8h]
  int v355; // [rsp+8h] [rbp-8C8h]
  int v356; // [rsp+8h] [rbp-8C8h]
  int v357; // [rsp+8h] [rbp-8C8h]
  int v358; // [rsp+8h] [rbp-8C8h]
  int v359; // [rsp+8h] [rbp-8C8h]
  int v360; // [rsp+8h] [rbp-8C8h]
  int v361; // [rsp+8h] [rbp-8C8h]
  __int64 v362; // [rsp+8h] [rbp-8C8h]
  int v363; // [rsp+8h] [rbp-8C8h]
  int v364; // [rsp+8h] [rbp-8C8h]
  int v365; // [rsp+8h] [rbp-8C8h]
  int v366; // [rsp+8h] [rbp-8C8h]
  __int64 v367; // [rsp+8h] [rbp-8C8h]
  __int64 v368; // [rsp+8h] [rbp-8C8h]
  __int64 v369; // [rsp+8h] [rbp-8C8h]
  int v370; // [rsp+8h] [rbp-8C8h]
  int v371; // [rsp+8h] [rbp-8C8h]
  __int64 v372; // [rsp+8h] [rbp-8C8h]
  int v373; // [rsp+8h] [rbp-8C8h]
  __int64 v374; // [rsp+8h] [rbp-8C8h]
  int v375; // [rsp+8h] [rbp-8C8h]
  __int64 v376; // [rsp+8h] [rbp-8C8h]
  __int64 v377; // [rsp+8h] [rbp-8C8h]
  __int64 v378; // [rsp+8h] [rbp-8C8h]
  int v379; // [rsp+8h] [rbp-8C8h]
  int v380; // [rsp+8h] [rbp-8C8h]
  __int64 v381; // [rsp+8h] [rbp-8C8h]
  int v382; // [rsp+8h] [rbp-8C8h]
  __int64 v383; // [rsp+8h] [rbp-8C8h]
  int v384; // [rsp+8h] [rbp-8C8h]
  __int64 v385; // [rsp+8h] [rbp-8C8h]
  __int64 v386; // [rsp+8h] [rbp-8C8h]
  __int64 v387; // [rsp+8h] [rbp-8C8h]
  __int64 v388; // [rsp+8h] [rbp-8C8h]
  int v389; // [rsp+8h] [rbp-8C8h]
  __int64 v390; // [rsp+8h] [rbp-8C8h]
  __int64 v391; // [rsp+8h] [rbp-8C8h]
  __int64 v392; // [rsp+10h] [rbp-8C0h]
  __int64 v393; // [rsp+10h] [rbp-8C0h]
  __int64 v394; // [rsp+10h] [rbp-8C0h]
  __int64 v395; // [rsp+10h] [rbp-8C0h]
  __int64 v396; // [rsp+10h] [rbp-8C0h]
  __int64 v397; // [rsp+10h] [rbp-8C0h]
  __int64 v398; // [rsp+10h] [rbp-8C0h]
  __int64 v399; // [rsp+10h] [rbp-8C0h]
  __int64 v400; // [rsp+10h] [rbp-8C0h]
  int v401; // [rsp+10h] [rbp-8C0h]
  __int64 v402; // [rsp+10h] [rbp-8C0h]
  __int64 v403; // [rsp+10h] [rbp-8C0h]
  __int64 v404; // [rsp+10h] [rbp-8C0h]
  __int64 v405; // [rsp+10h] [rbp-8C0h]
  int v406; // [rsp+10h] [rbp-8C0h]
  int v407; // [rsp+10h] [rbp-8C0h]
  int v408; // [rsp+10h] [rbp-8C0h]
  __int64 v409; // [rsp+10h] [rbp-8C0h]
  __int64 v410; // [rsp+10h] [rbp-8C0h]
  int v411; // [rsp+10h] [rbp-8C0h]
  __int64 v412; // [rsp+10h] [rbp-8C0h]
  int v413; // [rsp+10h] [rbp-8C0h]
  __int64 v414; // [rsp+10h] [rbp-8C0h]
  int v415; // [rsp+10h] [rbp-8C0h]
  int v416; // [rsp+10h] [rbp-8C0h]
  __int64 v417; // [rsp+10h] [rbp-8C0h]
  __int64 v418; // [rsp+10h] [rbp-8C0h]
  int v419; // [rsp+10h] [rbp-8C0h]
  __int64 v420; // [rsp+10h] [rbp-8C0h]
  int v421; // [rsp+10h] [rbp-8C0h]
  __int64 v422; // [rsp+10h] [rbp-8C0h]
  int v423; // [rsp+10h] [rbp-8C0h]
  int v424; // [rsp+10h] [rbp-8C0h]
  int v425; // [rsp+10h] [rbp-8C0h]
  int v426; // [rsp+10h] [rbp-8C0h]
  int v427; // [rsp+10h] [rbp-8C0h]
  __int64 v428; // [rsp+10h] [rbp-8C0h]
  int v429; // [rsp+10h] [rbp-8C0h]
  int v430; // [rsp+10h] [rbp-8C0h]
  int v431; // [rsp+18h] [rbp-8B8h]
  int v432; // [rsp+18h] [rbp-8B8h]
  int v433; // [rsp+18h] [rbp-8B8h]
  int v434; // [rsp+18h] [rbp-8B8h]
  int v435; // [rsp+18h] [rbp-8B8h]
  int v436; // [rsp+18h] [rbp-8B8h]
  int v437; // [rsp+18h] [rbp-8B8h]
  int v438; // [rsp+18h] [rbp-8B8h]
  int v439; // [rsp+18h] [rbp-8B8h]
  int v440; // [rsp+18h] [rbp-8B8h]
  int v441; // [rsp+18h] [rbp-8B8h]
  int v442; // [rsp+18h] [rbp-8B8h]
  int v443; // [rsp+18h] [rbp-8B8h]
  int v444; // [rsp+18h] [rbp-8B8h]
  int v445; // [rsp+18h] [rbp-8B8h]
  int v446; // [rsp+18h] [rbp-8B8h]
  int v447; // [rsp+18h] [rbp-8B8h]
  int v448; // [rsp+20h] [rbp-8B0h]
  int v449; // [rsp+20h] [rbp-8B0h]
  int v450; // [rsp+20h] [rbp-8B0h]
  int v451; // [rsp+20h] [rbp-8B0h]
  int v452; // [rsp+20h] [rbp-8B0h]
  int v453; // [rsp+20h] [rbp-8B0h]
  int v454; // [rsp+20h] [rbp-8B0h]
  int v455; // [rsp+20h] [rbp-8B0h]
  int v456; // [rsp+20h] [rbp-8B0h]
  int v457; // [rsp+20h] [rbp-8B0h]
  int v458; // [rsp+20h] [rbp-8B0h]
  int v459; // [rsp+20h] [rbp-8B0h]
  int v460; // [rsp+20h] [rbp-8B0h]
  int v461; // [rsp+20h] [rbp-8B0h]
  int v462; // [rsp+20h] [rbp-8B0h]
  int v463; // [rsp+20h] [rbp-8B0h]
  int v464; // [rsp+20h] [rbp-8B0h]
  int v465; // [rsp+28h] [rbp-8A8h]
  int v466; // [rsp+28h] [rbp-8A8h]
  int v467; // [rsp+28h] [rbp-8A8h]
  int v468; // [rsp+28h] [rbp-8A8h]
  int v469; // [rsp+28h] [rbp-8A8h]
  int v470; // [rsp+28h] [rbp-8A8h]
  int v471; // [rsp+28h] [rbp-8A8h]
  int v472; // [rsp+28h] [rbp-8A8h]
  int v473; // [rsp+28h] [rbp-8A8h]
  int v474; // [rsp+28h] [rbp-8A8h]
  int v475; // [rsp+28h] [rbp-8A8h]
  int v476; // [rsp+28h] [rbp-8A8h]
  int v477; // [rsp+28h] [rbp-8A8h]
  int v478; // [rsp+28h] [rbp-8A8h]
  int v479; // [rsp+28h] [rbp-8A8h]
  int v480; // [rsp+28h] [rbp-8A8h]
  int v481; // [rsp+28h] [rbp-8A8h]
  __int64 v482; // [rsp+30h] [rbp-8A0h]
  __int64 v483; // [rsp+30h] [rbp-8A0h]
  __int64 v484; // [rsp+30h] [rbp-8A0h]
  __int64 v485; // [rsp+30h] [rbp-8A0h]
  __int64 v486; // [rsp+30h] [rbp-8A0h]
  __int64 v487; // [rsp+30h] [rbp-8A0h]
  __int64 v488; // [rsp+30h] [rbp-8A0h]
  __int64 v489; // [rsp+30h] [rbp-8A0h]
  __int64 v490; // [rsp+30h] [rbp-8A0h]
  __int64 v491; // [rsp+30h] [rbp-8A0h]
  __int64 v492; // [rsp+30h] [rbp-8A0h]
  __int64 v493; // [rsp+30h] [rbp-8A0h]
  __int64 v494; // [rsp+30h] [rbp-8A0h]
  __int64 v495; // [rsp+30h] [rbp-8A0h]
  __int64 v496; // [rsp+30h] [rbp-8A0h]
  __int64 v497; // [rsp+30h] [rbp-8A0h]
  __int64 v498; // [rsp+30h] [rbp-8A0h]
  int v499; // [rsp+38h] [rbp-898h]
  int v500; // [rsp+38h] [rbp-898h]
  int v501; // [rsp+38h] [rbp-898h]
  int v502; // [rsp+38h] [rbp-898h]
  int v503; // [rsp+38h] [rbp-898h]
  int v504; // [rsp+38h] [rbp-898h]
  int v505; // [rsp+38h] [rbp-898h]
  int v506; // [rsp+38h] [rbp-898h]
  int v507; // [rsp+38h] [rbp-898h]
  int v508; // [rsp+38h] [rbp-898h]
  int v509; // [rsp+38h] [rbp-898h]
  int v510; // [rsp+38h] [rbp-898h]
  int v511; // [rsp+38h] [rbp-898h]
  int v512; // [rsp+38h] [rbp-898h]
  int v513; // [rsp+38h] [rbp-898h]
  int v514; // [rsp+38h] [rbp-898h]
  int v515; // [rsp+38h] [rbp-898h]
  int v516; // [rsp+40h] [rbp-890h]
  int v517; // [rsp+40h] [rbp-890h]
  int v518; // [rsp+40h] [rbp-890h]
  int v519; // [rsp+40h] [rbp-890h]
  int v520; // [rsp+40h] [rbp-890h]
  int v521; // [rsp+40h] [rbp-890h]
  int v522; // [rsp+40h] [rbp-890h]
  int v523; // [rsp+40h] [rbp-890h]
  int v524; // [rsp+40h] [rbp-890h]
  int v525; // [rsp+40h] [rbp-890h]
  int v526; // [rsp+40h] [rbp-890h]
  int v527; // [rsp+40h] [rbp-890h]
  int v528; // [rsp+40h] [rbp-890h]
  int v529; // [rsp+40h] [rbp-890h]
  int v530; // [rsp+40h] [rbp-890h]
  int v531; // [rsp+40h] [rbp-890h]
  int v532; // [rsp+40h] [rbp-890h]
  int v533; // [rsp+48h] [rbp-888h]
  int v534; // [rsp+48h] [rbp-888h]
  int v535; // [rsp+48h] [rbp-888h]
  int v536; // [rsp+48h] [rbp-888h]
  int v537; // [rsp+48h] [rbp-888h]
  int v538; // [rsp+48h] [rbp-888h]
  int v539; // [rsp+48h] [rbp-888h]
  int v540; // [rsp+48h] [rbp-888h]
  int v541; // [rsp+48h] [rbp-888h]
  int v542; // [rsp+48h] [rbp-888h]
  int v543; // [rsp+48h] [rbp-888h]
  int v544; // [rsp+48h] [rbp-888h]
  int v545; // [rsp+48h] [rbp-888h]
  int v546; // [rsp+48h] [rbp-888h]
  int v547; // [rsp+48h] [rbp-888h]
  int v548; // [rsp+48h] [rbp-888h]
  int v549; // [rsp+48h] [rbp-888h]
  int v550; // [rsp+50h] [rbp-880h]
  int v551; // [rsp+50h] [rbp-880h]
  int v552; // [rsp+50h] [rbp-880h]
  int v553; // [rsp+50h] [rbp-880h]
  int v554; // [rsp+50h] [rbp-880h]
  int v555; // [rsp+50h] [rbp-880h]
  int v556; // [rsp+50h] [rbp-880h]
  int v557; // [rsp+50h] [rbp-880h]
  int v558; // [rsp+50h] [rbp-880h]
  int v559; // [rsp+50h] [rbp-880h]
  int v560; // [rsp+50h] [rbp-880h]
  int v561; // [rsp+50h] [rbp-880h]
  int v562; // [rsp+50h] [rbp-880h]
  int v563; // [rsp+50h] [rbp-880h]
  int v564; // [rsp+50h] [rbp-880h]
  int v565; // [rsp+50h] [rbp-880h]
  int v566; // [rsp+50h] [rbp-880h]
  char v567; // [rsp+58h] [rbp-878h]
  char v568; // [rsp+58h] [rbp-878h]
  char v569; // [rsp+58h] [rbp-878h]
  char v570; // [rsp+58h] [rbp-878h]
  char v571; // [rsp+58h] [rbp-878h]
  char v572; // [rsp+58h] [rbp-878h]
  char v573; // [rsp+58h] [rbp-878h]
  char v574; // [rsp+58h] [rbp-878h]
  char v575; // [rsp+58h] [rbp-878h]
  char v576; // [rsp+58h] [rbp-878h]
  char v577; // [rsp+58h] [rbp-878h]
  char v578; // [rsp+58h] [rbp-878h]
  char v579; // [rsp+58h] [rbp-878h]
  char v580; // [rsp+58h] [rbp-878h]
  char v581; // [rsp+58h] [rbp-878h]
  char v582; // [rsp+58h] [rbp-878h]
  char v583; // [rsp+58h] [rbp-878h]
  __int64 v584; // [rsp+60h] [rbp-870h]
  __int64 v585; // [rsp+60h] [rbp-870h]
  __int64 v586; // [rsp+60h] [rbp-870h]
  __int64 v587; // [rsp+60h] [rbp-870h]
  __int64 v588; // [rsp+60h] [rbp-870h]
  __int64 v589; // [rsp+60h] [rbp-870h]
  __int64 v590; // [rsp+60h] [rbp-870h]
  __int64 v591; // [rsp+60h] [rbp-870h]
  __int64 v592; // [rsp+60h] [rbp-870h]
  __int64 v593; // [rsp+60h] [rbp-870h]
  __int64 v594; // [rsp+60h] [rbp-870h]
  __int64 v595; // [rsp+60h] [rbp-870h]
  __int64 v596; // [rsp+60h] [rbp-870h]
  __int64 v597; // [rsp+60h] [rbp-870h]
  __int64 v598; // [rsp+60h] [rbp-870h]
  __int64 v599; // [rsp+60h] [rbp-870h]
  __int64 v600; // [rsp+60h] [rbp-870h]
  int v601; // [rsp+68h] [rbp-868h]
  int v602; // [rsp+68h] [rbp-868h]
  int v603; // [rsp+68h] [rbp-868h]
  int v604; // [rsp+68h] [rbp-868h]
  int v605; // [rsp+68h] [rbp-868h]
  int v606; // [rsp+68h] [rbp-868h]
  int v607; // [rsp+68h] [rbp-868h]
  int v608; // [rsp+68h] [rbp-868h]
  int v609; // [rsp+68h] [rbp-868h]
  int v610; // [rsp+68h] [rbp-868h]
  int v611; // [rsp+68h] [rbp-868h]
  int v612; // [rsp+68h] [rbp-868h]
  int v613; // [rsp+68h] [rbp-868h]
  int v614; // [rsp+68h] [rbp-868h]
  int v615; // [rsp+68h] [rbp-868h]
  int v616; // [rsp+68h] [rbp-868h]
  int v617; // [rsp+68h] [rbp-868h]
  __int64 v618; // [rsp+70h] [rbp-860h]
  __int64 v619; // [rsp+70h] [rbp-860h]
  __int64 v620; // [rsp+70h] [rbp-860h]
  __int64 v621; // [rsp+70h] [rbp-860h]
  __int64 v622; // [rsp+70h] [rbp-860h]
  __int64 v623; // [rsp+70h] [rbp-860h]
  __int64 v624; // [rsp+70h] [rbp-860h]
  __int64 v625; // [rsp+70h] [rbp-860h]
  __int64 v626; // [rsp+70h] [rbp-860h]
  __int64 v627; // [rsp+70h] [rbp-860h]
  __int64 v628; // [rsp+70h] [rbp-860h]
  __int64 v629; // [rsp+70h] [rbp-860h]
  __int64 v630; // [rsp+70h] [rbp-860h]
  __int64 v631; // [rsp+70h] [rbp-860h]
  __int64 v632; // [rsp+70h] [rbp-860h]
  __int64 v633; // [rsp+70h] [rbp-860h]
  __int64 v634; // [rsp+70h] [rbp-860h]
  int frame_retsize; // [rsp+C0h] [rbp-810h]
  __int64 frame_size; // [rsp+C8h] [rbp-808h]
  unsigned int v638; // [rsp+E8h] [rbp-7E8h]
  __int64 v639; // [rsp+F0h] [rbp-7E0h]
  unsigned __int64 *func; // [rsp+F8h] [rbp-7D8h]
  char v641; // [rsp+106h] [rbp-7CAh]
  char v642; // [rsp+107h] [rbp-7C9h]
  unsigned __int64 v643; // [rsp+118h] [rbp-7B8h]
  _QWORD *v644; // [rsp+120h] [rbp-7B0h]
  __m128i v645; // [rsp+128h] [rbp-7A8h] BYREF
  _QWORD v646[3]; // [rsp+138h] [rbp-798h] BYREF
  __int128 v647; // [rsp+150h] [rbp-780h]
  __int128 v648; // [rsp+160h] [rbp-770h]
  __int128 v649; // [rsp+170h] [rbp-760h]
  __int128 v650; // [rsp+180h] [rbp-750h]
  char v651; // [rsp+190h] [rbp-740h] BYREF
  __int64 v652; // [rsp+198h] [rbp-738h]
  char v653; // [rsp+1A0h] [rbp-730h]
  _QWORD *v654; // [rsp+1A8h] [rbp-728h]
  __int64 v655; // [rsp+1B0h] [rbp-720h]
  __int64 v656; // [rsp+1B8h] [rbp-718h] BYREF
  const char *v657; // [rsp+1C0h] [rbp-710h]
  __int128 v658; // [rsp+1C8h] [rbp-708h]
  char *v659; // [rsp+1E0h] [rbp-6F0h]
  __int128 v660; // [rsp+1E8h] [rbp-6E8h]
  __int128 v661; // [rsp+1F8h] [rbp-6D8h]
  __int64 v662; // [rsp+208h] [rbp-6C8h]
  int v663; // [rsp+210h] [rbp-6C0h]
  _QWORD *v664; // [rsp+220h] [rbp-6B0h] BYREF
  __int64 v665; // [rsp+228h] [rbp-6A8h]
  _QWORD v666[2]; // [rsp+230h] [rbp-6A0h] BYREF
  char v667; // [rsp+240h] [rbp-690h] BYREF
  __int128 v668; // [rsp+248h] [rbp-688h]
  char v669; // [rsp+258h] [rbp-678h]
  __int128 v670; // [rsp+260h] [rbp-670h]
  char v671; // [rsp+270h] [rbp-660h] BYREF
  __int128 v672; // [rsp+278h] [rbp-658h]
  char v673; // [rsp+288h] [rbp-648h]
  __int64 v674; // [rsp+290h] [rbp-640h]
  __int64 v675; // [rsp+298h] [rbp-638h]
  char v676; // [rsp+2A0h] [rbp-630h] BYREF
  __int128 v677; // [rsp+2A8h] [rbp-628h]
  char v678; // [rsp+2B8h] [rbp-618h]
  __int64 v679; // [rsp+2C0h] [rbp-610h]
  __int64 v680; // [rsp+2C8h] [rbp-608h]
  char v681; // [rsp+2D0h] [rbp-600h] BYREF
  __int128 v682; // [rsp+2D8h] [rbp-5F8h]
  char v683; // [rsp+2E8h] [rbp-5E8h]
  __int64 v684; // [rsp+2F0h] [rbp-5E0h]
  __int64 v685; // [rsp+2F8h] [rbp-5D8h]
  char v686; // [rsp+300h] [rbp-5D0h] BYREF
  __int128 v687; // [rsp+308h] [rbp-5C8h]
  char v688; // [rsp+318h] [rbp-5B8h]
  __int64 v689; // [rsp+320h] [rbp-5B0h]
  __int64 v690; // [rsp+328h] [rbp-5A8h]
  char v691; // [rsp+330h] [rbp-5A0h] BYREF
  __int128 v692; // [rsp+338h] [rbp-598h]
  char v693; // [rsp+348h] [rbp-588h]
  __int64 v694; // [rsp+350h] [rbp-580h]
  __int64 v695; // [rsp+358h] [rbp-578h]
  char v696; // [rsp+360h] [rbp-570h] BYREF
  __int128 v697; // [rsp+368h] [rbp-568h]
  _QWORD v698[3]; // [rsp+378h] [rbp-558h] BYREF
  char v699; // [rsp+390h] [rbp-540h] BYREF
  __int128 v700; // [rsp+398h] [rbp-538h]
  char v701; // [rsp+3A8h] [rbp-528h]
  __int64 v702; // [rsp+3B0h] [rbp-520h]
  __int64 v703; // [rsp+3B8h] [rbp-518h]
  char v704; // [rsp+3C0h] [rbp-510h] BYREF
  __int128 v705; // [rsp+3C8h] [rbp-508h]
  char v706; // [rsp+3D8h] [rbp-4F8h]
  __int64 v707; // [rsp+3E0h] [rbp-4F0h]
  __int64 v708; // [rsp+3E8h] [rbp-4E8h]
  char v709[8]; // [rsp+3F0h] [rbp-4E0h] BYREF
  __int128 v710; // [rsp+3F8h] [rbp-4D8h]
  char v711; // [rsp+408h] [rbp-4C8h]
  __int64 v712; // [rsp+410h] [rbp-4C0h]
  __int64 v713; // [rsp+418h] [rbp-4B8h]
  char v714[8]; // [rsp+420h] [rbp-4B0h] BYREF
  __int128 v715; // [rsp+428h] [rbp-4A8h]
  _QWORD v716[3]; // [rsp+438h] [rbp-498h] BYREF
  char v717[8]; // [rsp+450h] [rbp-480h] BYREF
  __int128 v718; // [rsp+458h] [rbp-478h]
  char v719; // [rsp+468h] [rbp-468h]
  __int64 v720; // [rsp+470h] [rbp-460h]
  __int64 v721; // [rsp+478h] [rbp-458h]
  char v722[8]; // [rsp+480h] [rbp-450h] BYREF
  __int128 v723; // [rsp+488h] [rbp-448h]
  char v724; // [rsp+498h] [rbp-438h]
  __int64 v725; // [rsp+4A0h] [rbp-430h]
  __int64 v726; // [rsp+4A8h] [rbp-428h]
  char v727[8]; // [rsp+4B0h] [rbp-420h] BYREF
  __int128 v728; // [rsp+4B8h] [rbp-418h]
  char v729; // [rsp+4C8h] [rbp-408h]
  __int64 v730; // [rsp+4D0h] [rbp-400h]
  __int64 v731; // [rsp+4D8h] [rbp-3F8h]
  char v732[8]; // [rsp+4E0h] [rbp-3F0h] BYREF
  __int128 v733; // [rsp+4E8h] [rbp-3E8h] BYREF
  _QWORD v734[3]; // [rsp+4F8h] [rbp-3D8h] BYREF
  char v735[8]; // [rsp+510h] [rbp-3C0h] BYREF
  __int128 v736; // [rsp+518h] [rbp-3B8h] BYREF
  char v737; // [rsp+528h] [rbp-3A8h]
  __int64 v738; // [rsp+530h] [rbp-3A0h]
  __int64 v739; // [rsp+538h] [rbp-398h]
  char v740[8]; // [rsp+540h] [rbp-390h] BYREF
  __int128 v741; // [rsp+548h] [rbp-388h] BYREF
  char v742; // [rsp+558h] [rbp-378h]
  __int64 v743; // [rsp+560h] [rbp-370h]
  __int64 v744; // [rsp+568h] [rbp-368h]
  char v745[8]; // [rsp+570h] [rbp-360h] BYREF
  __m128i v746; // [rsp+578h] [rbp-358h]
  char v747; // [rsp+588h] [rbp-348h]
  __int64 v748; // [rsp+590h] [rbp-340h]
  __int64 v749; // [rsp+598h] [rbp-338h]
  char v750[8]; // [rsp+5A0h] [rbp-330h] BYREF
  __int128 v751; // [rsp+5A8h] [rbp-328h] BYREF
  _QWORD v752[3]; // [rsp+5B8h] [rbp-318h] BYREF
  char v753[8]; // [rsp+5D0h] [rbp-300h] BYREF
  __int128 v754; // [rsp+5D8h] [rbp-2F8h] BYREF
  _QWORD v755[3]; // [rsp+5E8h] [rbp-2E8h] BYREF
  char v756[8]; // [rsp+600h] [rbp-2D0h] BYREF
  __m128i v757; // [rsp+608h] [rbp-2C8h] BYREF
  __int64 v758; // [rsp+628h] [rbp-2A8h]
  _QWORD v759[3]; // [rsp+630h] [rbp-2A0h] BYREF
  _QWORD v760[3]; // [rsp+648h] [rbp-288h] BYREF
  _QWORD v761[3]; // [rsp+660h] [rbp-270h] BYREF
  char v762; // [rsp+678h] [rbp-258h] BYREF
  _QWORD v763[3]; // [rsp+680h] [rbp-250h] BYREF
  _QWORD v764[3]; // [rsp+698h] [rbp-238h] BYREF
  _QWORD v765[3]; // [rsp+6B0h] [rbp-220h] BYREF
  char v766; // [rsp+6C8h] [rbp-208h] BYREF
  _QWORD v767[3]; // [rsp+6D0h] [rbp-200h] BYREF
  _QWORD v768[3]; // [rsp+6E8h] [rbp-1E8h] BYREF
  _QWORD v769[3]; // [rsp+700h] [rbp-1D0h] BYREF
  char v770; // [rsp+718h] [rbp-1B8h] BYREF
  _QWORD v771[3]; // [rsp+720h] [rbp-1B0h] BYREF
  _QWORD v772[3]; // [rsp+738h] [rbp-198h] BYREF
  _QWORD v773[3]; // [rsp+750h] [rbp-180h] BYREF
  char v774; // [rsp+768h] [rbp-168h] BYREF
  __int64 *v775; // [rsp+770h] [rbp-160h] BYREF
  unsigned __int64 v776; // [rsp+778h] [rbp-158h]
  __int64 v777; // [rsp+780h] [rbp-150h] BYREF
  _QWORD v778[3]; // [rsp+788h] [rbp-148h] BYREF
  _QWORD v779[3]; // [rsp+7A0h] [rbp-130h] BYREF
  void *v780[3]; // [rsp+7B8h] [rbp-118h] BYREF
  void *v781; // [rsp+7D0h] [rbp-100h] BYREF
  size_t v782; // [rsp+7D8h] [rbp-F8h]
  const char *v783; // [rsp+7E0h] [rbp-F0h] BYREF
  _QWORD v784[3]; // [rsp+7E8h] [rbp-E8h] BYREF
  _QWORD v785[3]; // [rsp+800h] [rbp-D0h] BYREF
  _QWORD v786[3]; // [rsp+818h] [rbp-B8h] BYREF
  _QWORD v787[3]; // [rsp+830h] [rbp-A0h] BYREF
  char v788[8]; // [rsp+848h] [rbp-88h] BYREF
  char s[24]; // [rsp+850h] [rbp-80h] BYREF
  _BYTE v790[8]; // [rsp+868h] [rbp-68h]
  char v791[40]; // [rsp+870h] [rbp-60h] BYREF
  unsigned __int64 v792; // [rsp+898h] [rbp-38h]

  v792 = __readfsqword(0x28u);
  LOBYTE(v777) = 0;
  v776 = 0;
  v6 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v775 = &v777;
  if ( *v6 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v6 )
    {
      case 0:
        v2 = "null";
        break;
      case 1:
        v2 = "object";
        break;
      case 2:
        v2 = (char *)"array";
        break;
      case 3:
        v2 = "string";
        break;
      case 4:
        v2 = "boolean";
        break;
      case 8:
        v2 = "binary";
        break;
      case 9:
        v2 = "discarded";
        break;
      default:
        v2 = "number";
        break;
    }
    v659 = v2;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v7 = ida_mcp::parse_ea(v775, v776);
  v646[2] = v8;
  v9 = v8;
  v646[1] = v7;
  std::string::_M_dispose();
  if ( !v9 )
  {
    v4 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v4, "Invalid address format");
    __cxa_throw(
      v4,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  func = (unsigned __int64 *)get_func();
  if ( !func )
  {
    v3 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v646[0] = 0;
  if ( !(unsigned __int8)get_func_frame() )
  {
    v5 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v5,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v647 = 0;
  v648 = 0;
  v649 = 0;
  v650 = 0;
  get_frame_part();
  get_frame_part();
  get_frame_part();
  get_frame_part();
  frame_size = get_frame_size();
  frame_retsize = get_frame_retsize();
  v659 = nullptr;
  v651 = 0;
  v662 = 0;
  v663 = 1;
  v652 = 0;
  v660 = 0;
  v661 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v641 = 0;
  v639 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v10 = 0;
    if ( (_QWORD)v660 )
    {
      while ( 1 )
      {
        v658 = 0;
        v38 = &v659[144 * v10];
        v657 = nullptr;
        print_tinfo();
        v654 = nullptr;
        if ( *((_QWORD *)v38 + 3) )
          v11 = *((const char **)v38 + 2);
        else
          v11 = _qstring<char>::c_str(void)const::nullstr;
        v655 = 0;
        v645.m128i_i64[0] = (__int64)&v656;
        v656 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v12 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v12, v11, v13, v14, v15, v16, v314, v353, v392);
        v653 = 0;
        v17 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v18 = *(_BYTE *)v17;
        v19 = *(_QWORD *)(v17 + 8);
        *(_BYTE *)v17 = 3;
        *(_QWORD *)(v17 + 8) = v12;
        LOBYTE(v655) = v18;
        v656 = v19;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v20 = *(_QWORD *)v38 >> 3;
        v21 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v22 = *(_BYTE *)v21;
        v23 = *(_QWORD *)(v21 + 8);
        *(_BYTE *)v21 = 6;
        *(_QWORD *)(v21 + 8) = v20;
        LOBYTE(v655) = v22;
        v656 = v23;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v24 = *((_QWORD *)v38 + 1) >> 3;
        v25 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v26 = *(_BYTE *)v25;
        v27 = *(_QWORD *)(v25 + 8);
        *(_BYTE *)v25 = 6;
        *(_QWORD *)(v25 + 8) = v24;
        LOBYTE(v655) = v26;
        v656 = v27;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v28 = v657;
        if ( !(_QWORD)v658 )
          v28 = _qstring<char>::c_str(void)const::nullstr;
        v655 = 0;
        v656 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v29 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v29, v28, v30, v31, v32, v33, v315, v354, v393);
        v34 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v35 = *(_BYTE *)v34;
        v36 = *(_QWORD *)(v34 + 8);
        *(_BYTE *)v34 = 3;
        *(_QWORD *)(v34 + 8) = v29;
        LOBYTE(v655) = v35;
        v656 = v36;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( !v641 )
          break;
        if ( *(_QWORD *)(v639 + 16) == *(_QWORD *)(v639 + 8) )
          goto LABEL_13;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        *(_QWORD *)(v639 + 8) += 16LL;
LABEL_14:
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v657 )
        {
          *(_QWORD *)&v658 = 0;
          ++v10;
          qfree();
          if ( v10 >= (unsigned __int64)v660 )
            goto LABEL_20;
        }
        else if ( ++v10 >= (unsigned __int64)v660 )
        {
LABEL_20:
          v641 = 2;
          goto LABEL_21;
        }
        v641 = 2;
      }
      v37 = operator new(0x18u);
      *(_QWORD *)(v37 + 16) = 0;
      v639 = v37;
      *(_OWORD *)v37 = 0;
LABEL_13:
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
      goto LABEL_14;
    }
  }
LABEL_21:
  v653 = 0;
  v654 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v644 = nullptr;
  v642 = 0;
  v643 = *func;
  do
  {
    v645.m128i_i64[0] = find_regvar();
    if ( !v645.m128i_i64[0] )
      break;
    LOBYTE(v655) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    qsnprintf();
    v781 = &v783;
    v39 = strlen(s);
    v657 = (const char *)v39;
    v40 = v39;
    if ( v39 > 0xF )
    {
      v269 = (_QWORD *)std::string::_M_create();
      v781 = v269;
      v783 = v657;
    }
    else
    {
      if ( v39 == 1 )
      {
        LOBYTE(v783) = s[0];
LABEL_26:
        v41 = &v783;
        goto LABEL_27;
      }
      if ( !v39 )
        goto LABEL_26;
      v269 = &v783;
    }
    if ( v40 >= 8 )
    {
      *v269 = *(_QWORD *)s;
      *(_QWORD *)((char *)v269 + v40 - 8) = *(_QWORD *)&v788[v40];
      v273 = (unsigned __int64)(v269 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v274 = (char *)v269 - v273;
      v275 = (char *)(s - v274);
      v276 = ((_DWORD)v274 + v40) & 0xFFFFFFF8;
      if ( v276 >= 8 )
      {
        v277 = v645.m128i_i64[0];
        v278 = v276 & 0xFFFFFFF8;
        v279 = 0;
        do
        {
          v280 = v279;
          v279 += 8;
          *(_QWORD *)(v273 + v280) = *(_QWORD *)&v275[v280];
        }
        while ( v279 < v278 );
        v645.m128i_i64[0] = v277;
      }
    }
    else if ( (v40 & 4) != 0 )
    {
      *(_DWORD *)v269 = *(_DWORD *)s;
      *(_DWORD *)((char *)v269 + v40 - 4) = *(_DWORD *)&v788[v40 + 4];
    }
    else if ( v40 )
    {
      *(_BYTE *)v269 = s[0];
      if ( (v40 & 2) != 0 )
        *(_WORD *)((char *)v269 + v40 - 2) = *(_WORD *)&v788[v40 + 6];
    }
    v39 = (size_t)v657;
    v41 = v781;
LABEL_27:
    v782 = v39;
    *((_BYTE *)v41 + v39) = 0;
    v657 = nullptr;
    *(_QWORD *)&v658 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v42 = (_QWORD *)operator new(0x20u);
    v43 = v42 + 2;
    v44 = v42;
    v45 = v782;
    *v42 = v42 + 2;
    if ( v781 == &v783 )
    {
      v271 = v45 + 1;
      if ( (unsigned int)(v45 + 1) >= 8 )
      {
        v44[2] = v783;
        *(_QWORD *)((char *)v43 + v271 - 8) = *(size_t *)((char *)&v782 + v271);
        v297 = (unsigned __int64)(v44 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v298 = (char *)v43 - v297;
        v299 = (char *)((char *)&v783 - v298);
        v300 = ((_DWORD)v298 + v271) & 0xFFFFFFF8;
        if ( v300 >= 8 )
        {
          v301 = v645.m128i_i64[0];
          v302 = v300 & 0xFFFFFFF8;
          v303 = 0;
          do
          {
            v304 = v303;
            v303 += 8;
            *(_QWORD *)(v297 + v304) = *(_QWORD *)&v299[v304];
          }
          while ( v303 < v302 );
          v645.m128i_i64[0] = v301;
        }
      }
      else if ( (v271 & 4) != 0 )
      {
        *((_DWORD *)v44 + 4) = (_DWORD)v783;
        *(_DWORD *)((char *)v43 + v271 - 4) = *(_DWORD *)((char *)&v782 + v271 + 4);
      }
      else if ( (_DWORD)v45 != -1 )
      {
        *((_BYTE *)v44 + 16) = (_BYTE)v783;
        if ( (v271 & 2) != 0 )
          *(_WORD *)((char *)v43 + v271 - 2) = *(_WORD *)((char *)&v782 + v271 + 6);
      }
    }
    else
    {
      *v42 = v781;
      v42[2] = v783;
    }
    v44[1] = v45;
    v781 = &v783;
    v782 = 0;
    LOBYTE(v783) = 0;
    v46 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v47 = *(_BYTE *)v46;
    v48 = *(_QWORD *)(v46 + 8);
    *(_BYTE *)v46 = 3;
    *(_QWORD *)(v46 + 8) = v44;
    LOBYTE(v657) = v47;
    *(_QWORD *)&v658 = v48;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v781 != &v783 )
      operator delete(v781, (unsigned __int64)(v783 + 1));
    qsnprintf();
    v781 = &v783;
    v49 = strlen(v791);
    v657 = (const char *)v49;
    v50 = v49;
    if ( v49 > 0xF )
    {
      v638 = v49;
      v270 = (_QWORD *)std::string::_M_create();
      v781 = v270;
      v50 = v638;
      v783 = v657;
    }
    else
    {
      if ( v49 == 1 )
      {
        LOBYTE(v783) = v791[0];
LABEL_34:
        v51 = &v783;
        goto LABEL_35;
      }
      if ( !v49 )
        goto LABEL_34;
      v270 = &v783;
    }
    if ( v50 >= 8 )
    {
      *v270 = *(_QWORD *)v791;
      *(_QWORD *)((char *)v270 + v50 - 8) = *(_QWORD *)&v790[v50];
      v281 = (unsigned __int64)(v270 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v282 = (char *)v270 - v281;
      v283 = (char *)(v791 - v282);
      v284 = ((_DWORD)v282 + v50) & 0xFFFFFFF8;
      if ( v284 >= 8 )
      {
        v285 = v645.m128i_i64[0];
        v286 = v284 & 0xFFFFFFF8;
        v287 = 0;
        do
        {
          v288 = v287;
          v287 += 8;
          *(_QWORD *)(v281 + v288) = *(_QWORD *)&v283[v288];
        }
        while ( v287 < v286 );
        v645.m128i_i64[0] = v285;
      }
    }
    else if ( (v50 & 4) != 0 )
    {
      *(_DWORD *)v270 = *(_DWORD *)v791;
      *(_DWORD *)((char *)v270 + v50 - 4) = *(_DWORD *)&v790[v50 + 4];
    }
    else if ( v50 )
    {
      *(_BYTE *)v270 = v791[0];
      if ( (v50 & 2) != 0 )
        *(_WORD *)((char *)v270 + v50 - 2) = *(_WORD *)&v790[v50 + 6];
    }
    v49 = (size_t)v657;
    v51 = v781;
LABEL_35:
    v782 = v49;
    *((_BYTE *)v51 + v49) = 0;
    v657 = nullptr;
    *(_QWORD *)&v658 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v52 = (_QWORD *)operator new(0x20u);
    v53 = v52 + 2;
    v54 = v52;
    v55 = v782;
    *v52 = v52 + 2;
    if ( v781 == &v783 )
    {
      v272 = v55 + 1;
      if ( (unsigned int)(v55 + 1) >= 8 )
      {
        v54[2] = v783;
        *(_QWORD *)((char *)v53 + v272 - 8) = *(size_t *)((char *)&v782 + v272);
        v289 = (unsigned __int64)(v54 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v290 = (char *)v53 - v289;
        v291 = (char *)((char *)&v783 - v290);
        v292 = ((_DWORD)v290 + v272) & 0xFFFFFFF8;
        if ( v292 >= 8 )
        {
          v293 = v645.m128i_i64[0];
          v294 = v292 & 0xFFFFFFF8;
          v295 = 0;
          do
          {
            v296 = v295;
            v295 += 8;
            *(_QWORD *)(v289 + v296) = *(_QWORD *)&v291[v296];
          }
          while ( v295 < v294 );
          v645.m128i_i64[0] = v293;
        }
      }
      else if ( (v272 & 4) != 0 )
      {
        *((_DWORD *)v54 + 4) = (_DWORD)v783;
        *(_DWORD *)((char *)v53 + v272 - 4) = *(_DWORD *)((char *)&v782 + v272 + 4);
      }
      else if ( (_DWORD)v55 != -1 )
      {
        *((_BYTE *)v54 + 16) = (_BYTE)v783;
        if ( (v272 & 2) != 0 )
          *(_WORD *)((char *)v53 + v272 - 2) = *(_WORD *)((char *)&v782 + v272 + 6);
      }
    }
    else
    {
      *v52 = v781;
      v52[2] = v783;
    }
    v54[1] = v55;
    v781 = &v783;
    v782 = 0;
    LOBYTE(v783) = 0;
    v56 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v57 = *(_BYTE *)v56;
    v58 = *(_QWORD *)(v56 + 8);
    *(_BYTE *)v56 = 3;
    *(_QWORD *)(v56 + 8) = v54;
    v59 = v655;
    LOBYTE(v657) = v57;
    *(_QWORD *)&v658 = v58;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v781 != &v783 )
      operator delete(v781, (unsigned __int64)(v783 + 1));
    if ( *(_QWORD *)(v645.m128i_i64[0] + 16) )
    {
      v657 = nullptr;
      *(_QWORD *)&v658 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v60 = *(const char **)(v645.m128i_i64[0] + 16);
      v61 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(v61, v60, v62, v63, v64, v65, v314, v353, v392);
      v66 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v67 = *(_BYTE *)v66;
      v68 = *(_QWORD *)(v66 + 8);
      *(_BYTE *)v66 = 3;
      *(_QWORD *)(v66 + 8) = v61;
      v59 = v655;
      LOBYTE(v657) = v67;
      *(_QWORD *)&v658 = v68;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    if ( *(_QWORD *)(v645.m128i_i64[0] + 24) )
    {
      v657 = nullptr;
      *(_QWORD *)&v658 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v69 = *(const char **)(v645.m128i_i64[0] + 24);
      v70 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(v70, v69, v71, v72, v73, v74, v314, v353, v392);
      LOBYTE(v655) = v59;
      v75 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v76 = *(_BYTE *)v75;
      v77 = *(_QWORD *)(v75 + 8);
      *(_BYTE *)v75 = 3;
      *(_QWORD *)(v75 + 8) = v70;
      v59 = v655;
      LOBYTE(v657) = v76;
      *(_QWORD *)&v658 = v77;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    if ( *(_QWORD *)(v645.m128i_i64[0] + 32) )
    {
      v657 = nullptr;
      *(_QWORD *)&v658 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v78 = *(const char **)(v645.m128i_i64[0] + 32);
      v79 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(v79, v78, v80, v81, v82, v83, v314, v353, v392);
      LOBYTE(v655) = v59;
      v84 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v85 = *(_BYTE *)v84;
      v86 = *(_QWORD *)(v84 + 8);
      *(_BYTE *)v84 = 3;
      *(_QWORD *)(v84 + 8) = v79;
      v59 = v655;
      LOBYTE(v657) = v85;
      *(_QWORD *)&v658 = v86;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    if ( !v642 )
    {
      v87 = operator new(0x18u);
      *(_QWORD *)(v87 + 16) = 0;
      v644 = (_QWORD *)v87;
      *(_OWORD *)v87 = 0;
LABEL_47:
      LOBYTE(v655) = v59;
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
      goto LABEL_48;
    }
    if ( v644[2] == v644[1] )
      goto LABEL_47;
    LOBYTE(v655) = v59;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v644[1] += 16LL;
LABEL_48:
    v88 = *(_QWORD *)(v645.m128i_i64[0] + 8);
    if ( v643 >= v88 )
    {
      LOBYTE(v655) = v59;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v642 = 2;
      break;
    }
    LOBYTE(v655) = v59;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v643 = v88;
    v642 = 2;
  }
  while ( (unsigned __int64)((__int64)(v644[1] - *v644) >> 4) <= 0x63 );
  v667 = 0;
  *(_QWORD *)&v668 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v667 = 3;
  v89 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v89, "address", v90, v91, v92, v93, v314, v353, v392);
  v668 = (unsigned __int64)v89;
  ida_mcp::format_ea[abi:cxx11]();
  v669 = 0;
  *(_QWORD *)&v670 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v669 = 3;
  v94 = (_QWORD *)operator new(0x20u);
  v95 = v664;
  v96 = v94 + 2;
  v97 = v665;
  *v94 = v94 + 2;
  if ( v95 == v666 )
  {
    v305 = v97 + 1;
    if ( (unsigned int)(v97 + 1) >= 8 )
    {
      v94[2] = v666[0];
      *(_QWORD *)((char *)v96 + v305 - 8) = *(_QWORD *)((char *)&v666[-1] + v305);
      v307 = (unsigned __int64)(v94 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v308 = (char *)v96 - v307;
      v309 = (char *)((char *)v666 - v308);
      v310 = ((_DWORD)v308 + v305) & 0xFFFFFFF8;
      if ( v310 >= 8 )
      {
        v311 = v310 & 0xFFFFFFF8;
        v312 = 0;
        do
        {
          v313 = v312;
          v312 += 8;
          *(_QWORD *)(v307 + v313) = *(_QWORD *)&v309[v313];
        }
        while ( v312 < v311 );
      }
    }
    else if ( (v305 & 4) != 0 )
    {
      *((_DWORD *)v94 + 4) = v666[0];
      *(_DWORD *)((char *)v96 + v305 - 4) = *(_DWORD *)((char *)&v665 + v305 + 4);
    }
    else if ( (_DWORD)v97 != -1 )
    {
      *((_BYTE *)v94 + 16) = v666[0];
      if ( (v305 & 2) != 0 )
        *(_WORD *)((char *)v96 + v305 - 2) = *(_WORD *)((char *)&v665 + v305 + 6);
    }
  }
  else
  {
    *v94 = v95;
    v94[2] = v666[0];
  }
  v94[1] = v97;
  v664 = v666;
  v665 = 0;
  LOBYTE(v666[0]) = 0;
  v670 = (unsigned __int64)v94;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v781,
    (const __m128i *)&v667,
    2,
    1);
  v671 = 0;
  v783 = nullptr;
  *(_QWORD *)&v672 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v671 = 3;
  v98 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v98,
    "total_frame_size",
    v99,
    v100,
    v101,
    v102,
    (int)&v667,
    v355,
    v394);
  v673 = 6;
  v674 = frame_size;
  v675 = 0;
  v672 = (unsigned __int64)v98;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v784,
    (const __m128i *)&v671,
    2,
    1);
  v676 = 0;
  v784[2] = 0;
  *(_QWORD *)&v677 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v676 = 3;
  v103 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v103, "return_address_size", v104, v105, v106, v107, v316, v356, v395);
  v678 = 5;
  v679 = frame_retsize;
  v680 = 0;
  v677 = (unsigned __int64)v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v785,
    (const __m128i *)&v676,
    2,
    1);
  v753[0] = 0;
  v785[2] = 0;
  *(_QWORD *)&v754 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v753[0] = 3;
  v108 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v108, "parts", v109, v110, v111, v112, v317, v357, v396);
  v696 = 0;
  *(_QWORD *)&v697 = 0;
  v754 = (unsigned __int64)v108;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v696 = 3;
  v113 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v113, "args", v114, v115, v116, v117, v318, v358, v397);
  v681 = 0;
  *(_QWORD *)&v682 = 0;
  v697 = (unsigned __int64)v113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v681 = 3;
  v118 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v118, "start", v119, v120, v121, v122, v319, v359, v398);
  v683 = 5;
  v684 = v647;
  v685 = 0;
  v682 = (unsigned __int64)v118;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v759,
    (const __m128i *)&v681,
    2,
    1);
  v686 = 0;
  v759[2] = 0;
  *(_QWORD *)&v687 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v686 = 3;
  v123 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v123, "end", v124, v125, v126, v127, v320, v360, v399);
  v688 = 5;
  v689 = *((_QWORD *)&v647 + 1);
  v690 = 0;
  v687 = (unsigned __int64)v123;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v760,
    (const __m128i *)&v686,
    2,
    1);
  v691 = 0;
  v760[2] = 0;
  *(_QWORD *)&v692 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v691 = 3;
  v128 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v128, "size", v129, v130, v131, v132, v321, v361, v400);
  v693 = 6;
  v694 = *((_QWORD *)&v647 + 1) - v647;
  v695 = 0;
  v692 = (unsigned __int64)v128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v761,
    (const __m128i *)&v691,
    2,
    1);
  v761[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v698,
    (__int64)v759,
    3,
    v133,
    v134,
    v135,
    v322,
    v362,
    v401,
    v431,
    v448,
    v465,
    v482,
    (int)&v651,
    (int)&v664,
    (int)v646,
    v550,
    (char)&v754,
    v584,
    v601,
    v618);
  v698[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v775,
    (const __m128i *)&v696,
    2,
    1);
  v714[0] = 0;
  v777 = 0;
  *(_QWORD *)&v715 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v714[0] = 3;
  v136 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v136, "retaddr", v137, v138, v139, v140, v323, v363, v402);
  v699 = 0;
  *(_QWORD *)&v700 = 0;
  v715 = (unsigned __int64)v136;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v699 = 3;
  v141 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v141, "start", v142, v143, v144, v145, v324, v364, v403);
  v701 = 5;
  v702 = v648;
  v703 = 0;
  v700 = (unsigned __int64)v141;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v763,
    (const __m128i *)&v699,
    2,
    1);
  v704 = 0;
  v763[2] = 0;
  *(_QWORD *)&v705 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v704 = 3;
  v146 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v146, "end", v147, v148, v149, v150, v325, v365, v404);
  v706 = 5;
  v707 = *((_QWORD *)&v648 + 1);
  v708 = 0;
  v705 = (unsigned __int64)v146;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v764,
    (const __m128i *)&v704,
    2,
    1);
  v709[0] = 0;
  v764[2] = 0;
  *(_QWORD *)&v710 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v709[0] = 3;
  v151 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v151, "size", v152, v153, v154, v155, v326, v366, v405);
  v711 = 6;
  v712 = *((_QWORD *)&v648 + 1) - v648;
  v713 = 0;
  v710 = (unsigned __int64)v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v765,
    (__int64)v709,
    2,
    v156,
    v157,
    v158,
    v327,
    v367,
    v406,
    v432,
    (int)&v696,
    v466,
    v483,
    v499,
    v516,
    v533,
    v551,
    v567,
    v585,
    v602,
    v619);
  v765[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v716,
    (__int64)v763,
    3,
    v159,
    v160,
    v161,
    v328,
    v368,
    v407,
    v433,
    v449,
    v467,
    v484,
    v500,
    v517,
    v534,
    v552,
    v568,
    v586,
    v603,
    v620);
  v716[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v778,
    (__int64)v714,
    2,
    v162,
    v163,
    v164,
    v329,
    v369,
    v408,
    (int)v714,
    v450,
    v468,
    v485,
    v501,
    v518,
    v535,
    v553,
    v569,
    v587,
    v604,
    v621);
  v732[0] = 0;
  v778[2] = 0;
  *(_QWORD *)&v733 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v732[0] = 3;
  v165 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v165, "saved_regs", v166, v167, v168, v169, v330, v370, v409);
  v717[0] = 0;
  *(_QWORD *)&v718 = 0;
  v733 = (unsigned __int64)v165;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v717[0] = 3;
  v170 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v170, "start", v171, v172, v173, v174, v331, v371, v410);
  v719 = 5;
  v720 = v649;
  v721 = 0;
  v718 = (unsigned __int64)v170;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v767,
    (__int64)v717,
    2,
    v175,
    v176,
    v177,
    v332,
    v372,
    v411,
    v434,
    v451,
    v469,
    v486,
    v502,
    v519,
    v536,
    v554,
    v570,
    v588,
    v605,
    (__int64)&v733);
  v722[0] = 0;
  v767[2] = 0;
  *(_QWORD *)&v723 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v722[0] = 3;
  v178 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v178, "end", v179, v180, v181, v182, v333, v373, v412);
  v724 = 5;
  v725 = *((_QWORD *)&v649 + 1);
  v726 = 0;
  v723 = (unsigned __int64)v178;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v768,
    (__int64)v722,
    2,
    v183,
    v184,
    v185,
    v334,
    v374,
    v413,
    v435,
    v452,
    v470,
    v487,
    v503,
    v520,
    v537,
    v555,
    v571,
    v589,
    v606,
    v622);
  v727[0] = 0;
  v768[2] = 0;
  *(_QWORD *)&v728 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v727[0] = 3;
  v186 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v186, "size", v187, v188, v189, v190, v335, v375, v414);
  v729 = 6;
  v730 = *((_QWORD *)&v649 + 1) - v649;
  v731 = 0;
  v728 = (unsigned __int64)v186;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v769,
    (__int64)v727,
    2,
    v191,
    v192,
    v193,
    v336,
    v376,
    v415,
    v436,
    v453,
    v471,
    v488,
    v504,
    v521,
    v538,
    v556,
    v572,
    v590,
    v607,
    v623);
  v769[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v734,
    (__int64)v767,
    3,
    v194,
    v195,
    v196,
    v337,
    v377,
    v416,
    v437,
    v454,
    v472,
    v489,
    v505,
    v522,
    v539,
    v557,
    v573,
    v591,
    v608,
    v624);
  v734[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v779,
    (__int64)v732,
    2,
    v197,
    v198,
    v199,
    v338,
    v378,
    (int)v732,
    v438,
    v455,
    v473,
    v490,
    v506,
    v523,
    v540,
    v558,
    v574,
    v592,
    v609,
    v625);
  v750[0] = 0;
  v779[2] = 0;
  *(_QWORD *)&v751 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v750[0] = 3;
  v200 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v200, "lvars", v201, v202, v203, v204, v339, v379, v417);
  v735[0] = 0;
  *(_QWORD *)&v736 = 0;
  v751 = (unsigned __int64)v200;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v735[0] = 3;
  v205 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v205, "start", v206, v207, v208, v209, v340, v380, v418);
  v737 = 5;
  v738 = v650;
  v739 = 0;
  v736 = (unsigned __int64)v205;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v771,
    (__int64)v735,
    2,
    v210,
    v211,
    v212,
    v341,
    v381,
    v419,
    v439,
    v456,
    v474,
    (__int64)&v751,
    v507,
    v524,
    v541,
    v559,
    v575,
    v593,
    (int)&v736,
    v626);
  v740[0] = 0;
  v771[2] = 0;
  *(_QWORD *)&v741 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v740[0] = 3;
  v213 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v213, "end", v214, v215, v216, v217, v342, v382, v420);
  v742 = 5;
  v743 = *((_QWORD *)&v650 + 1);
  v744 = 0;
  v741 = (unsigned __int64)v213;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v772,
    (__int64)v740,
    2,
    v218,
    v219,
    v220,
    v343,
    v383,
    v421,
    v440,
    v457,
    v475,
    v491,
    v508,
    v525,
    v542,
    v560,
    v576,
    (__int64)&v741,
    v610,
    v627);
  v745[0] = 0;
  v772[2] = 0;
  v746.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v745[0] = 3;
  v645.m128i_i64[0] = operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)v645.m128i_i64[0],
    "size",
    v221,
    v222,
    v223,
    v224,
    v344,
    v384,
    v422);
  v225 = _mm_loadl_epi64(&v645);
  v747 = 6;
  v748 = *((_QWORD *)&v650 + 1) - v650;
  v749 = 0;
  v746 = v225;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v773,
    (__int64)v745,
    2,
    v226,
    v227,
    v228,
    v345,
    v385,
    v423,
    v441,
    v458,
    v476,
    v492,
    v509,
    v526,
    v543,
    v561,
    v577,
    v594,
    v611,
    v628);
  v773[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v752,
    (__int64)v771,
    3,
    v229,
    v230,
    v231,
    v346,
    v386,
    v424,
    v442,
    v459,
    v477,
    v493,
    v510,
    v527,
    v544,
    v562,
    v578,
    v595,
    v612,
    v629);
  v752[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v780,
    (__int64)v750,
    2,
    v232,
    v233,
    v234,
    v347,
    (__int64)v750,
    v425,
    v443,
    v460,
    v478,
    v494,
    v511,
    v528,
    v545,
    v563,
    v579,
    v596,
    v613,
    v630);
  v780[2] = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v755,
    (__int64)&v775,
    4,
    v235,
    v236,
    v237,
    v348,
    v387,
    v426,
    v444,
    v461,
    v479,
    v495,
    v512,
    v529,
    v546,
    v564,
    v580,
    v597,
    v614,
    v631);
  v755[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v786,
    (__int64)v753,
    2,
    v238,
    v239,
    v240,
    v349,
    v388,
    v427,
    v445,
    v462,
    (int)v753,
    v496,
    v513,
    v530,
    v547,
    v565,
    v581,
    v598,
    v615,
    v632);
  v756[0] = 0;
  v786[2] = 0;
  v757.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v756[0] = 3;
  v645.m128i_i64[0] = operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)v645.m128i_i64[0],
    "members",
    v241,
    v242,
    v243,
    v244,
    v350,
    v389,
    v428);
  v245 = _mm_loadl_epi64(&v645);
  v651 = v641;
  v757 = v245;
  v652 = v639;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v758 = 0;
  v645.m128i_i64[0] = (__int64)v756;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v787,
    (__int64)v756,
    2,
    v246,
    v247,
    v248,
    v351,
    v390,
    v429,
    v446,
    v463,
    v480,
    v497,
    v514,
    v531,
    v548,
    (int)&v757,
    v582,
    v599,
    v616,
    v633);
  v787[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)&v781,
    5,
    v249,
    v250,
    v251,
    v352,
    v391,
    v430,
    v447,
    v464,
    v481,
    v498,
    v515,
    v532,
    v549,
    v566,
    v583,
    v600,
    v617,
    v634);
  v645.m128i_i64[0] = (__int64)v788;
  do
  {
    v645.m128i_i64[0] -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( (void **)v645.m128i_i64[0] != &v781 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v252 = v645.m128i_i64[0];
  v645.m128i_i64[0] = (__int64)&v775;
  do
  {
    v252 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v252 != v645.m128i_i64[0] );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v645.m128i_i64[0] = (__int64)&v774;
  do
  {
    v645.m128i_i64[0] -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( (_QWORD *)v645.m128i_i64[0] != v771 );
  v253 = &v770;
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
    v253 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v253 != (char *)v767 );
  v254 = &v766;
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
    v254 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v254 != (char *)v763 );
  v255 = &v762;
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
    v255 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v255 != (char *)v759 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  if ( v642 == 2 && v644[1] != *v644 )
  {
    LOBYTE(v657) = 0;
    v653 = v642;
    v654 = v644;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v256 = (char)v657;
    v257 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v258 = *(_BYTE *)v257;
    v259 = v658;
    *(_BYTE *)v257 = v256;
    v260 = *(_QWORD *)(v257 + 8);
    *(_QWORD *)(v257 + 8) = v259;
    *(_QWORD *)&v658 = v260;
    LOBYTE(v657) = v258;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v306 = (__int64)(v644[1] - *v644) >> 4;
    v261 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v262 = *(_BYTE *)v261;
    v263 = *(_QWORD *)(v261 + 8);
    *(_BYTE *)v261 = 6;
    LOBYTE(v657) = v262;
    *(_QWORD *)(v261 + 8) = v306;
    *(_QWORD *)&v658 = v263;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v653 = v642;
  v654 = v644;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v264 = v659;
  if ( v659 )
  {
    if ( (_QWORD)v660 )
    {
      v265 = 0;
      v266 = v660;
      do
      {
        while ( 1 )
        {
          v267 = &v264[144 * v265];
          clear_tinfo_t();
          if ( *((_QWORD *)v267 + 5) )
          {
            *((_QWORD *)v267 + 6) = 0;
            qfree();
          }
          if ( !*((_QWORD *)v267 + 2) )
            break;
          *((_QWORD *)v267 + 3) = 0;
          ++v265;
          qfree();
          v264 = v659;
          if ( v266 == v265 )
            goto LABEL_74;
        }
        ++v265;
        v264 = v659;
      }
      while ( v266 != v265 );
    }
LABEL_74:
    *(_QWORD *)&v660 = 0;
    qfree();
  }
  clear_tinfo_t();
  return a1;
}

