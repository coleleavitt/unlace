__int64 __fastcall ida_mcp::tools::indirect_branches::`anonymous namespace'::handle_analyze_indirect_branch(
        __int64 a1,
        __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v4; // r12
  char *v5; // rax
  char *v6; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v7; // rbx
  char *v8; // rax
  void *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // r14
  size_t v14; // rdx
  int v15; // eax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rbp
  size_t v18; // rdx
  int v19; // eax
  char v20; // al
  char *v21; // rbp
  int *v22; // rax
  int *v23; // r12
  std::runtime_error *v24; // rax
  size_t v25; // rax
  unsigned int v26; // r14d
  char *v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rbp
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 *v33; // rax
  __int64 v34; // r15
  __int64 *v35; // rbp
  char *v36; // rax
  size_t v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbp
  __int64 v40; // rax
  char v41; // si
  unsigned __int8 v42; // r13
  __int64 v43; // rax
  char v44; // si
  __int64 v45; // rdx
  __int16 v46; // ax
  const char *v47; // r12
  _QWORD *v48; // rax
  _QWORD *v49; // r15
  _QWORD *v50; // rbp
  size_t v51; // rax
  size_t v52; // rdx
  __int64 v53; // rax
  __int8 v54; // si
  __int64 v55; // rdx
  __int64 v56; // rax
  char v57; // si
  __int64 v58; // rdx
  int v59; // ebp
  __int64 v60; // rax
  char v61; // si
  __int64 v62; // rdx
  size_t v63; // rax
  unsigned int v64; // r12d
  char *v65; // rdx
  _QWORD *v66; // rax
  _QWORD *v67; // rdx
  _QWORD *v68; // rbp
  __int64 v69; // rcx
  __int64 v70; // rax
  char v71; // si
  __int64 v72; // rdx
  size_t v73; // rax
  unsigned int v74; // r12d
  char *v75; // rdx
  _QWORD *v76; // rax
  _QWORD *v77; // rdx
  _QWORD *v78; // rbp
  __int64 v79; // rcx
  __int64 v80; // rax
  char v81; // si
  __int64 v82; // rdx
  __int64 v83; // rbx
  int v84; // eax
  __int64 v85; // rax
  char v86; // si
  __int64 v87; // rdx
  const char *v88; // rbp
  _QWORD *v89; // rax
  _QWORD *v90; // r12
  _QWORD *v91; // rbx
  size_t v92; // rdx
  unsigned int v93; // eax
  __int64 v94; // rcx
  __int64 v95; // rax
  char v96; // si
  __int64 v97; // rdx
  int v98; // edx
  __int64 v99; // r13
  __int16 v100; // ax
  unsigned __int64 v101; // rbx
  int v102; // eax
  __int64 v103; // rbp
  __int64 v104; // rax
  __int64 v105; // rax
  size_t v106; // rax
  unsigned int v107; // r14d
  char *v108; // rdx
  _QWORD *v109; // rax
  _OWORD *v110; // rdx
  _QWORD *v111; // rcx
  __int64 v112; // rsi
  __int64 v113; // rax
  char v114; // si
  __int64 v115; // rax
  char v116; // bp
  __int64 v117; // rax
  __int64 v118; // rcx
  char v119; // si
  __int64 v120; // rdx
  size_t v121; // rax
  unsigned int v122; // r13d
  int *v123; // rdx
  _QWORD *v124; // rax
  _QWORD *v125; // rdx
  _QWORD *v126; // rbp
  __int64 v127; // rcx
  __int64 v128; // rax
  char v129; // si
  __int64 v130; // rdx
  __int64 v131; // rax
  char v132; // si
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rbp
  __int64 v136; // rax
  char v137; // si
  __int64 v138; // rdx
  char v139; // r14
  _QWORD *v140; // rbp
  char i; // al
  size_t v142; // rax
  unsigned int v143; // ecx
  int *v144; // rdx
  _QWORD *v145; // rax
  _QWORD *v146; // rdx
  __int64 v147; // rbx
  __int64 v148; // rcx
  __int64 v149; // rax
  __int8 v150; // si
  __int64 v151; // rax
  unsigned __int64 v152; // rax
  __int8 v153; // r12
  __int64 v154; // rax
  __int64 v155; // rcx
  __int8 v156; // si
  __int64 v157; // rdx
  __int64 v158; // rbx
  __int64 v159; // rax
  __int8 v160; // si
  __int64 v161; // rdx
  int *v163; // rax
  unsigned int v164; // eax
  unsigned __int64 v165; // rdx
  char *v166; // rax
  char *v167; // rbx
  unsigned int v168; // ecx
  unsigned int v169; // ecx
  unsigned int v170; // eax
  __int64 v171; // rsi
  __int64 v172; // rax
  unsigned __int64 v173; // r12
  __int64 v174; // rax
  __int64 v175; // rax
  _QWORD *v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  unsigned __int64 v179; // rsi
  char *v180; // rdx
  char *v181; // r8
  unsigned int v182; // eax
  unsigned int v183; // eax
  unsigned int v184; // edx
  __int64 v185; // rdi
  unsigned __int64 v186; // rdx
  char *v187; // rax
  char *v188; // rbp
  unsigned int v189; // eax
  unsigned int v190; // eax
  unsigned int v191; // ecx
  __int64 v192; // rsi
  size_t v193; // rax
  unsigned int v194; // r12d
  char *v195; // rdx
  _QWORD *v196; // rax
  _QWORD *v197; // rsi
  _QWORD *v198; // rbp
  __int64 v199; // rdx
  __int64 v200; // rax
  char v201; // si
  __int64 v202; // rdx
  _QWORD *v203; // rdx
  _QWORD *v204; // rdx
  const char *v205; // rbp
  _QWORD *v206; // rax
  _QWORD *v207; // r15
  size_t v208; // rax
  size_t v209; // rcx
  __int64 v210; // rax
  __int128 v211; // xmm0
  char v212; // al
  const char *v213; // rbp
  _QWORD *v214; // r15
  size_t v215; // rax
  _QWORD *v216; // rdx
  size_t v217; // rcx
  __int64 v218; // rax
  __int128 v219; // xmm0
  char v220; // al
  const char *v221; // rbp
  _QWORD *v222; // r15
  size_t v223; // rax
  _QWORD *v224; // rdx
  size_t v225; // rsi
  __int64 v226; // rax
  char v227; // bp
  __int64 v228; // rax
  char v229; // si
  __int64 v230; // rdx
  void **v231; // rbp
  _QWORD *v232; // rax
  int dword; // eax
  unsigned int v234; // edi
  unsigned __int64 v235; // rdx
  char *v236; // rax
  char *v237; // r12
  unsigned int v238; // r14d
  unsigned int v239; // r14d
  unsigned int v240; // eax
  __int64 v241; // rcx
  __int64 v242; // rax
  __int64 v243; // rax
  unsigned __int64 v244; // r8
  const char *v245; // r12
  unsigned int v246; // eax
  unsigned int v247; // eax
  unsigned int v248; // ecx
  __int64 v249; // rsi
  unsigned __int64 v250; // r8
  char *v251; // rcx
  char *v252; // r9
  unsigned int v253; // edx
  unsigned int v254; // ecx
  __int64 v255; // rdi
  unsigned int v256; // r10d
  unsigned __int64 v257; // rdi
  const char *v258; // rcx
  unsigned int v259; // eax
  unsigned int v260; // eax
  unsigned int v261; // r8d
  __int64 v262; // rdx
  unsigned __int64 v263; // rsi
  const char *v264; // rbp
  unsigned int v265; // eax
  unsigned int v266; // eax
  unsigned int v267; // edi
  __int64 v268; // r8
  unsigned __int64 v269; // rsi
  int v270; // eax
  const char *v271; // rdx
  unsigned int v272; // eax
  unsigned int v273; // eax
  unsigned int v274; // edi
  __int64 v275; // r8
  __int64 v276; // rbp
  __int64 v277; // rax
  char v278; // si
  __int64 v279; // rdx
  __int64 *v280; // rbp
  __int64 v281; // rdx
  __int64 v282; // rcx
  __int64 v283; // r8
  __int64 v284; // r9
  __int64 v285; // rax
  char v286; // si
  __int64 v287; // rdx
  __int64 v288; // rbp
  __int64 v289; // rax
  char v290; // si
  __int64 v291; // rdx
  __int64 *v292; // rax
  void *v293; // r14
  __int64 *v294; // rbp
  size_t v295; // rax
  size_t v296; // r15
  __int64 v297; // rax
  char v298; // si
  __int64 v299; // rdx
  unsigned __int64 v300; // r8
  char *v301; // r9
  unsigned int v302; // eax
  unsigned int v303; // edx
  __int64 v304; // rsi
  char *v305; // r12
  __int64 *v306; // rax
  void *v307; // r13
  __int64 *v308; // rbp
  size_t v309; // rax
  size_t v310; // r14
  __int64 v311; // rax
  char v312; // si
  __int64 v313; // rdx
  int *v314; // rax
  unsigned __int64 v315; // rsi
  char *v316; // rdx
  char *v317; // rbp
  unsigned int v318; // eax
  unsigned int v319; // edx
  __int64 v320; // rcx
  unsigned __int64 v321; // rsi
  char *v322; // rdx
  char *v323; // rbp
  unsigned int v324; // eax
  unsigned int v325; // edx
  __int64 v326; // rcx
  unsigned __int64 v327; // rsi
  char *v328; // rax
  char *v329; // rbp
  unsigned int v330; // eax
  unsigned int v331; // eax
  unsigned int v332; // edx
  __int64 v333; // rcx
  __int64 v334; // rax
  _QWORD *v335; // rax
  unsigned int v336; // eax
  unsigned int v337; // eax
  __int64 v338; // rax
  unsigned int v339; // eax
  unsigned int v340; // edi
  unsigned __int64 v341; // rdi
  char *v342; // rdx
  char *v343; // rsi
  unsigned int v344; // eax
  unsigned int v345; // eax
  unsigned int v346; // edx
  __int64 v347; // r8
  unsigned __int64 v348; // rdi
  char *v349; // rdx
  char *v350; // rsi
  unsigned int v351; // eax
  unsigned int v352; // eax
  unsigned int v353; // edx
  __int64 v354; // r8
  unsigned __int64 v355; // rdx
  char *v356; // rax
  char *v357; // rbp
  unsigned int v358; // eax
  unsigned int v359; // eax
  unsigned int v360; // ecx
  __int64 v361; // rsi
  __int64 *v362; // r12
  __int64 v363; // rdx
  __int64 v364; // rcx
  __int64 v365; // r8
  __int64 v366; // r9
  const char *v367; // r14
  _QWORD *v368; // rax
  _QWORD *v369; // r15
  _QWORD *v370; // r13
  size_t v371; // rax
  size_t v372; // rcx
  __int8 v373; // r13
  __int64 v374; // rax
  __int64 v375; // rcx
  __int64 v376; // rdx
  __int8 v377; // si
  _QWORD *v378; // rax
  _QWORD *v379; // r15
  unsigned __int64 v380; // r14
  size_t v381; // rax
  unsigned int v382; // r12d
  char *v383; // rdx
  __int64 v384; // rax
  _OWORD *v385; // rdx
  _QWORD *v386; // r12
  __int64 v387; // rax
  __int64 v388; // rcx
  __int64 v389; // rax
  __int64 v390; // rax
  __int8 v391; // si
  __int64 v392; // rdx
  const char *v393; // r13
  __int64 *v394; // rax
  __int64 *v395; // r12
  size_t v396; // rax
  void *v397; // rcx
  size_t v398; // r8
  __int64 v399; // rax
  __int64 v400; // rax
  __int64 v401; // rax
  _QWORD *v402; // rax
  unsigned __int64 v403; // rsi
  char *v404; // rdx
  char *v405; // r8
  unsigned int v406; // eax
  unsigned int v407; // eax
  unsigned int v408; // edx
  __int64 v409; // rdi
  __int8 v410; // bl
  __int64 v411; // rax
  __int64 v412; // rcx
  __int8 v413; // si
  __int64 v414; // rdx
  unsigned int v415; // esi
  unsigned __int64 v416; // rcx
  char *v417; // rax
  char *v418; // rbp
  unsigned int v419; // eax
  unsigned int v420; // eax
  unsigned int v421; // edx
  __int64 v422; // rsi
  unsigned __int64 v423; // r8
  char *v424; // r9
  unsigned int v425; // eax
  unsigned int v426; // ecx
  __int64 v427; // rsi
  size_t v428; // rax
  unsigned int v429; // ebp
  char *v430; // rdx
  _QWORD *v431; // rax
  _QWORD *v432; // rdx
  _QWORD *v433; // rbp
  __int64 v434; // rsi
  __int64 v435; // rax
  __int8 v436; // si
  __int64 v437; // rdx
  __int64 *v438; // rbp
  __int64 v439; // rdx
  __int64 v440; // rcx
  __int64 v441; // r8
  __int64 v442; // r9
  __int64 v443; // rax
  __int8 v444; // si
  __int64 v445; // rdx
  char v446; // bp
  __int64 v447; // rax
  char v448; // si
  __int64 v449; // rdx
  unsigned __int64 v450; // rsi
  const char *v451; // r14
  unsigned int v452; // eax
  unsigned int v453; // eax
  unsigned int v454; // edx
  __int64 v455; // rdi
  unsigned __int64 v456; // rdi
  unsigned __int64 v457; // rax
  char *v458; // r8
  unsigned int v459; // eax
  unsigned int v460; // eax
  unsigned int v461; // edx
  __int64 v462; // rsi
  _QWORD *v463; // rax
  unsigned __int64 v464; // rsi
  char *v465; // rax
  char *v466; // rdx
  unsigned int v467; // eax
  unsigned int v468; // eax
  unsigned int v469; // ecx
  __int64 v470; // rdi
  unsigned int v471; // eax
  unsigned __int64 v472; // rcx
  char *v473; // rdx
  char *v474; // r8
  unsigned int v475; // eax
  unsigned int v476; // eax
  unsigned int v477; // edx
  __int64 v478; // rdi
  int v479; // [rsp+648h] [rbp-668h]
  unsigned int v480; // [rsp+648h] [rbp-668h]
  int v481; // [rsp+648h] [rbp-668h]
  int v482; // [rsp+648h] [rbp-668h]
  char v483; // [rsp+648h] [rbp-668h]
  int v484; // [rsp+650h] [rbp-660h]
  int v485; // [rsp+650h] [rbp-660h]
  int v486; // [rsp+650h] [rbp-660h]
  __int64 v487; // [rsp+658h] [rbp-658h]
  __int64 v488; // [rsp+658h] [rbp-658h]
  __int64 v489; // [rsp+658h] [rbp-658h]
  int v491[2]; // [rsp+670h] [rbp-640h]
  __int64 v492; // [rsp+678h] [rbp-638h]
  int v493[2]; // [rsp+678h] [rbp-638h]
  char v494; // [rsp+680h] [rbp-630h]
  _QWORD *dest; // [rsp+688h] [rbp-628h]
  void *desta; // [rsp+688h] [rbp-628h]
  void *destb; // [rsp+688h] [rbp-628h]
  size_t v498; // [rsp+6F0h] [rbp-5C0h]
  size_t v499; // [rsp+6F0h] [rbp-5C0h]
  size_t v500; // [rsp+6F8h] [rbp-5B8h]
  char v501[8]; // [rsp+768h] [rbp-548h] BYREF
  __int128 v502; // [rsp+770h] [rbp-540h]
  __m128i v503; // [rsp+788h] [rbp-528h] BYREF
  _QWORD *v504; // [rsp+7A8h] [rbp-508h] BYREF
  char v505[16]; // [rsp+7B0h] [rbp-500h]
  char v506; // [rsp+7C0h] [rbp-4F0h]
  char *v507; // [rsp+7C8h] [rbp-4E8h]
  __m128i si128; // [rsp+7D0h] [rbp-4E0h]
  __int128 v509; // [rsp+7E0h] [rbp-4D0h]
  __int64 v510; // [rsp+7F0h] [rbp-4C0h]
  __int64 v511; // [rsp+7F8h] [rbp-4B8h]
  __int64 v512; // [rsp+800h] [rbp-4B0h]
  __int64 v513; // [rsp+808h] [rbp-4A8h]
  __int64 v514; // [rsp+810h] [rbp-4A0h]
  __int64 v515; // [rsp+818h] [rbp-498h]
  __int64 v516; // [rsp+820h] [rbp-490h]
  __int64 v517; // [rsp+828h] [rbp-488h]
  __int128 v518; // [rsp+830h] [rbp-480h]
  char v519; // [rsp+848h] [rbp-468h] BYREF
  int v520[4]; // [rsp+850h] [rbp-460h]
  __int64 v521; // [rsp+860h] [rbp-450h]
  __int64 v522; // [rsp+868h] [rbp-448h]
  __int64 v523; // [rsp+870h] [rbp-440h]
  void *v524; // [rsp+878h] [rbp-438h] BYREF
  __int128 v525; // [rsp+880h] [rbp-430h] BYREF
  char v526; // [rsp+890h] [rbp-420h]
  __int128 v527; // [rsp+898h] [rbp-418h]
  void *v528; // [rsp+8A8h] [rbp-408h] BYREF
  __int128 v529; // [rsp+8B0h] [rbp-400h] BYREF
  char v530; // [rsp+8C0h] [rbp-3F0h]
  __int128 v531; // [rsp+8C8h] [rbp-3E8h]
  void *v532; // [rsp+8D8h] [rbp-3D8h] BYREF
  int v533[4]; // [rsp+8E0h] [rbp-3D0h] BYREF
  char v534; // [rsp+8F0h] [rbp-3C0h]
  __int128 v535; // [rsp+8F8h] [rbp-3B8h]
  void *v536; // [rsp+908h] [rbp-3A8h] BYREF
  int v537[4]; // [rsp+910h] [rbp-3A0h] BYREF
  char v538; // [rsp+920h] [rbp-390h]
  __int128 v539; // [rsp+928h] [rbp-388h]
  void *v540; // [rsp+938h] [rbp-378h] BYREF
  __int128 s2; // [rsp+940h] [rbp-370h] BYREF
  __int64 v542; // [rsp+950h] [rbp-360h] BYREF
  __int128 v543; // [rsp+958h] [rbp-358h]
  _QWORD v544[3]; // [rsp+968h] [rbp-348h] BYREF
  _QWORD v545[3]; // [rsp+980h] [rbp-330h] BYREF
  _QWORD v546[3]; // [rsp+998h] [rbp-318h] BYREF
  char v547; // [rsp+9B0h] [rbp-300h] BYREF
  __int128 v548; // [rsp+9B8h] [rbp-2F8h]
  __int64 v549; // [rsp+9C8h] [rbp-2E8h]
  __int64 v550; // [rsp+9D0h] [rbp-2E0h]
  __int64 v551; // [rsp+9D8h] [rbp-2D8h]
  __int64 v552; // [rsp+9E0h] [rbp-2D0h]
  __int128 v553; // [rsp+9E8h] [rbp-2C8h]
  __int64 v554; // [rsp+9F8h] [rbp-2B8h]
  __int64 v555; // [rsp+A00h] [rbp-2B0h]
  __int64 v556; // [rsp+A08h] [rbp-2A8h]
  __int128 v557; // [rsp+A10h] [rbp-2A0h]
  __int64 v558; // [rsp+A20h] [rbp-290h]
  __int64 v559; // [rsp+A28h] [rbp-288h]
  __int64 v560; // [rsp+A30h] [rbp-280h]
  __int128 v561; // [rsp+A38h] [rbp-278h]
  __int64 v562; // [rsp+A48h] [rbp-268h]
  __int64 v563; // [rsp+A50h] [rbp-260h]
  __int64 v564; // [rsp+A58h] [rbp-258h]
  __int128 v565; // [rsp+A60h] [rbp-250h]
  __int64 v566; // [rsp+A70h] [rbp-240h]
  __int64 v567; // [rsp+A78h] [rbp-238h]
  __int64 v568; // [rsp+A80h] [rbp-230h]
  __int128 v569; // [rsp+A88h] [rbp-228h]
  __int64 v570; // [rsp+A98h] [rbp-218h]
  __int64 v571; // [rsp+AA0h] [rbp-210h]
  __int64 v572; // [rsp+AA8h] [rbp-208h]
  __int128 v573; // [rsp+AB0h] [rbp-200h]
  __int64 v574; // [rsp+AC0h] [rbp-1F0h]
  __int64 v575; // [rsp+AC8h] [rbp-1E8h]
  __int64 v576; // [rsp+AD0h] [rbp-1E0h]
  __int128 v577; // [rsp+AD8h] [rbp-1D8h]
  __int64 v578; // [rsp+AE8h] [rbp-1C8h]
  __int64 v579; // [rsp+AF0h] [rbp-1C0h]
  __int64 v580; // [rsp+AF8h] [rbp-1B8h]
  __int128 v581; // [rsp+B00h] [rbp-1B0h]
  __int64 v582; // [rsp+B10h] [rbp-1A0h]
  int v583; // [rsp+B18h] [rbp-198h]
  _BYTE v584[8]; // [rsp+B20h] [rbp-190h]
  char s[24]; // [rsp+B28h] [rbp-188h] BYREF
  _BYTE v586[8]; // [rsp+B40h] [rbp-170h]
  char v587[32]; // [rsp+B48h] [rbp-168h] BYREF
  _BYTE v588[8]; // [rsp+B80h] [rbp-130h]
  char v589[24]; // [rsp+B88h] [rbp-128h] BYREF
  _BYTE v590[8]; // [rsp+BA0h] [rbp-110h]
  char v591[24]; // [rsp+BA8h] [rbp-108h] BYREF
  _BYTE v592[8]; // [rsp+BC0h] [rbp-F0h]
  char v593[24]; // [rsp+BC8h] [rbp-E8h] BYREF
  _BYTE v594[8]; // [rsp+BE0h] [rbp-D0h]
  char v595[24]; // [rsp+BE8h] [rbp-C8h] BYREF
  _BYTE v596[8]; // [rsp+C00h] [rbp-B0h]
  char v597[24]; // [rsp+C08h] [rbp-A8h] BYREF
  _BYTE v598[8]; // [rsp+C20h] [rbp-90h]
  char v599[24]; // [rsp+C28h] [rbp-88h] BYREF
  _BYTE v600[8]; // [rsp+C40h] [rbp-70h]
  char v601[40]; // [rsp+C48h] [rbp-68h] BYREF
  unsigned __int64 v602; // [rsp+C70h] [rbp-40h]

  v602 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v540 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v5 = "null";
        break;
      case 1:
        v5 = "object";
        break;
      case 2:
        v5 = (char *)"array";
        break;
      case 3:
        v5 = "string";
        break;
      case 4:
        v5 = "boolean";
        break;
      case 8:
        v5 = "binary";
        break;
      case 9:
        v5 = "discarded";
        break;
      default:
        v5 = "number";
        break;
    }
    v507 = v5;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v10 = *(_QWORD *)(a2 + 8);
  v11 = *(_QWORD *)(v10 + 16);
  v12 = v10 + 8;
  if ( v11 )
  {
    v13 = v10 + 8;
    do
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(v11 + 40);
        if ( !v16 )
          break;
        v14 = 7;
        if ( v16 <= 7 )
          v14 = *(_QWORD *)(v11 + 40);
        v15 = memcmp(*(const void **)(v11 + 32), (char *)&s2 + 8, v14);
        if ( v15 || (v15 = v16 - 7, (__int64)(v16 - 7) <= 0x7FFFFFFF) )
        {
          if ( v15 < 0 )
            break;
        }
        v13 = v11;
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v11 )
          goto LABEL_12;
      }
      v11 = *(_QWORD *)(v11 + 24);
    }
    while ( v11 );
LABEL_12:
    if ( v12 != v13 )
    {
      v17 = *(_QWORD *)(v13 + 40);
      if ( v17 )
      {
        v18 = 7;
        if ( v17 <= 7 )
          v18 = *(_QWORD *)(v13 + 40);
        v19 = memcmp((char *)&s2 + 8, *(const void **)(v13 + 32), v18);
        if ( v19 || (v19 = 7 - v17, (__int64)(7 - v17) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v19 >= 0 )
            v12 = v13;
        }
      }
      else
      {
        v12 = v13;
      }
    }
  }
  BYTE8(s2) = 0;
  v20 = *(_BYTE *)(v12 + 64);
  v540 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  if ( v20 != 3 )
  {
    v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v12 + 64) )
    {
      case 0:
        v6 = "null";
        break;
      case 1:
        v6 = "object";
        break;
      case 2:
        v6 = (char *)"array";
        break;
      case 3:
        v6 = "string";
        break;
      case 4:
        v6 = "boolean";
        break;
      case 8:
        v6 = "binary";
        break;
      case 9:
        v6 = "discarded";
        break;
      default:
        v6 = "number";
        break;
    }
    v507 = v6;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v2,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v21 = (char *)v540;
  v22 = __errno_location();
  *v22 = 0;
  v23 = v22;
  v492 = __isoc23_strtoull();
  if ( v21 == v507 || *v507 || *v23 == 34 && v492 == -1 )
  {
    if ( v540 != (char *)&s2 + 8 )
      operator delete(v540, *((_QWORD *)&s2 + 1) + 1LL);
    v24 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v24, "Invalid address format");
    JUMPOUT(0xE177C);
  }
  if ( v540 != (char *)&s2 + 8 )
    operator delete(v540, *((_QWORD *)&s2 + 1) + 1LL);
  v549 = -1;
  v548 = -1;
  v550 = 0;
  v551 = 0;
  v552 = 0;
  v554 = 0;
  v555 = 0;
  v556 = 0;
  v558 = 0;
  v559 = 0;
  v560 = 0;
  v562 = 0;
  v563 = 0;
  v564 = 0;
  v566 = 0;
  v567 = 0;
  v568 = 0;
  v570 = 0;
  v571 = 0;
  v572 = 0;
  v574 = 0;
  v575 = 0;
  v576 = 0;
  v578 = 0;
  v579 = 0;
  v553 = 0;
  v557 = 0;
  v561 = 0;
  v565 = 0;
  v569 = 0;
  v573 = 0;
  v577 = 0;
  v580 = 0;
  v582 = 0;
  v583 = 0;
  v581 = 0;
  if ( !(unsigned int)decode_insn() )
  {
    v9 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v9,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  print_insn_mnem();
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  qsnprintf();
  v528 = (char *)&v529 + 8;
  v25 = strlen(s);
  v498 = v25;
  v26 = v25;
  if ( v25 > 0xF )
  {
    v176 = (_QWORD *)std::string::_M_create();
    v528 = v176;
    *((_QWORD *)&v529 + 1) = v498;
  }
  else
  {
    if ( v25 == 1 )
    {
      BYTE8(v529) = s[0];
      goto LABEL_34;
    }
    if ( !v25 )
    {
LABEL_34:
      v27 = (char *)&v529 + 8;
      goto LABEL_35;
    }
    v176 = (_QWORD *)&v529 + 1;
  }
  if ( v26 >= 8 )
  {
    *v176 = *(_QWORD *)s;
    *(_QWORD *)((char *)v176 + v26 - 8) = *(_QWORD *)&v584[v26];
    v186 = (unsigned __int64)(v176 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v187 = (char *)v176 - v186;
    v188 = (char *)(s - v187);
    v189 = (v26 + (_DWORD)v187) & 0xFFFFFFF8;
    if ( v189 >= 8 )
    {
      v190 = v189 & 0xFFFFFFF8;
      v191 = 0;
      do
      {
        v192 = v191;
        v191 += 8;
        *(_QWORD *)(v186 + v192) = *(_QWORD *)&v188[v192];
      }
      while ( v191 < v190 );
    }
  }
  else if ( (v26 & 4) != 0 )
  {
    *(_DWORD *)v176 = *(_DWORD *)s;
    *(_DWORD *)((char *)v176 + v26 - 4) = *(_DWORD *)&v584[v26 + 4];
  }
  else if ( v26 )
  {
    *(_BYTE *)v176 = s[0];
    if ( (v26 & 2) != 0 )
      *(_WORD *)((char *)v176 + v26 - 2) = *(_WORD *)&v584[v26 + 6];
  }
  v25 = v498;
  v27 = (char *)v528;
LABEL_35:
  *(_QWORD *)&v529 = v25;
  v27[v25] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v28 = (_QWORD *)operator new(0x20u);
  v29 = v28 + 2;
  v30 = v28;
  v31 = v529;
  *v28 = v28 + 2;
  if ( v528 == (char *)&v529 + 8 )
  {
    v256 = v31 + 1;
    if ( (unsigned int)(v31 + 1) >= 8 )
    {
      v300 = (unsigned __int64)(v28 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v28[2] = *((_QWORD *)&v529 + 1);
      v301 = (char *)((char *)&v529 + 8 - ((char *)v29 - v300));
      *(_QWORD *)((char *)v29 + v256 - 8) = *(_QWORD *)((char *)&v529 + v256);
      if ( ((v256 + (_DWORD)v29 - (_DWORD)v300) & 0xFFFFFFF8) >= 8 )
      {
        v302 = (v256 + (_DWORD)v29 - v300) & 0xFFFFFFF8;
        v303 = 0;
        do
        {
          v304 = v303;
          v303 += 8;
          *(_QWORD *)(v300 + v304) = *(_QWORD *)&v301[v304];
        }
        while ( v303 < v302 );
      }
    }
    else if ( (v256 & 4) != 0 )
    {
      *((_DWORD *)v28 + 4) = DWORD2(v529);
      *(_DWORD *)((char *)v29 + v256 - 4) = *(_DWORD *)((char *)&v529 + v256 + 4);
    }
    else if ( (_DWORD)v31 != -1 )
    {
      *((_BYTE *)v28 + 16) = BYTE8(v529);
      if ( (v256 & 2) != 0 )
        *(_WORD *)((char *)v29 + v256 - 2) = *(_WORD *)((char *)&v529 + v256 + 6);
    }
  }
  else
  {
    *v28 = v528;
    v28[2] = *((_QWORD *)&v529 + 1);
  }
  v30[1] = v31;
  v528 = (char *)&v529 + 8;
  *(_QWORD *)&v529 = 0;
  BYTE8(v529) = 0;
  v32 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v32 = 3;
  *(_QWORD *)(v32 + 8) = v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v528 != (char *)&v529 + 8 )
    operator delete(v528, *((_QWORD *)&v529 + 1) + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v33 = (__int64 *)operator new(0x20u);
  v34 = (__int64)(v33 + 2);
  v35 = v33;
  *v33 = (__int64)(v33 + 2);
  if ( !_qstring<char>::c_str(void)const::nullstr )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v36 = (char *)strlen(_qstring<char>::c_str(void)const::nullstr);
  v507 = v36;
  v37 = (size_t)v36;
  if ( (unsigned __int64)v36 > 0xF )
  {
    *(_QWORD *)v491 = v36;
    v172 = std::string::_M_create();
    *v35 = v172;
    v34 = v172;
    v37 = *(_QWORD *)v491;
    v35[2] = (__int64)v507;
  }
  else
  {
    if ( v36 == (_BYTE *)&dword_0 + 1 )
    {
      *((_BYTE *)v35 + 16) = _qstring<char>::c_str(void)const::nullstr[0];
      goto LABEL_43;
    }
    if ( !v36 )
      goto LABEL_43;
  }
  memcpy((void *)v34, _qstring<char>::c_str(void)const::nullstr, v37);
  v36 = v507;
  v34 = *v35;
LABEL_43:
  v35[1] = (__int64)v36;
  v36[v34] = 0;
  v38 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v38 = 3;
  *(_QWORD *)(v38 + 8) = v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v39 = (unsigned __int16)v550;
  v40 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v41 = *(_BYTE *)v40;
  *(_BYTE *)v40 = 6;
  LOBYTE(v507) = v41;
  *(_QWORD *)(v40 + 8) = v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v42 = is_indirect_jump_insn();
  si128.m128i_i64[0] = v42;
  v43 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v44 = *(_BYTE *)v43;
  v45 = *(_QWORD *)(v43 + 8);
  *(_BYTE *)v43 = 4;
  LOBYTE(v507) = v44;
  *(_QWORD *)(v43 + 8) = si128.m128i_i64[0];
  si128.m128i_i64[0] = v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( (v550 & 0x1000000000000LL) != 0 )
  {
    v519 = 0;
    v173 = SBYTE1(v551);
    *(_QWORD *)v520 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v519 = 3;
    v174 = operator new(0x20u);
    *(_QWORD *)v174 = v174 + 16;
    strcpy((char *)(v174 + 16), "authenticated");
    *(_QWORD *)(v174 + 8) = 13;
    v521 = 4;
    v522 = 1;
    v523 = 0;
    *(_OWORD *)v520 = (unsigned __int64)v174;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v540,
      (const __m128i *)&v519,
      2);
    *((_QWORD *)&s2 + 1) = 0;
    LOBYTE(v524) = 0;
    *(_QWORD *)&v525 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v524) = 3;
    v175 = operator new(0x20u);
    *(_BYTE *)(v175 + 18) = 121;
    *(_QWORD *)v175 = v175 + 16;
    *(_WORD *)(v175 + 16) = 25963;
    *(_QWORD *)(v175 + 8) = 3;
    *(_BYTE *)(v175 + 19) = 0;
    v525 = (unsigned __int64)v175;
    switch ( v173 & 7 )
    {
      case 0uLL:
        v205 = "IA";
        break;
      case 1uLL:
        v205 = "IB";
        break;
      case 2uLL:
        v205 = "DA";
        break;
      case 3uLL:
        v205 = "DB";
        break;
      case 4uLL:
        v205 = "GA";
        break;
      default:
        v205 = "unknown";
        break;
    }
    v526 = 0;
    *(_QWORD *)&v527 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v526 = 3;
    v206 = (_QWORD *)operator new(0x20u);
    v207 = v206 + 2;
    dest = v206;
    *v206 = v206 + 2;
    v208 = strlen(v205);
    v209 = v208;
    if ( (unsigned int)v208 >= 8 )
    {
      dest[2] = *(_QWORD *)v205;
      *(_QWORD *)((char *)v207 + (unsigned int)v208 - 8) = *(_QWORD *)&v205[(unsigned int)v208 - 8];
      v263 = (unsigned __int64)(dest + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v264 = (const char *)(v205 - ((const char *)v207 - v263));
      v265 = (v208 + (_DWORD)v207 - v263) & 0xFFFFFFF8;
      if ( v265 >= 8 )
      {
        v266 = v265 & 0xFFFFFFF8;
        v267 = 0;
        do
        {
          v268 = v267;
          v267 += 8;
          *(_QWORD *)(v263 + v268) = *(_QWORD *)&v264[v268];
        }
        while ( v267 < v266 );
      }
    }
    else if ( (v208 & 4) != 0 )
    {
      *((_DWORD *)dest + 4) = *(_DWORD *)v205;
      *(_DWORD *)((char *)v207 + (unsigned int)v208 - 4) = *(_DWORD *)&v205[(unsigned int)v208 - 4];
    }
    else if ( (_DWORD)v208 )
    {
      *((_BYTE *)dest + 16) = *v205;
      if ( (v208 & 2) != 0 )
        *(_WORD *)((char *)v207 + (unsigned int)v208 - 2) = *(_WORD *)&v205[(unsigned int)v208 - 2];
    }
    dest[1] = v209;
    *((_BYTE *)dest + v209 + 16) = 0;
    v527 = (unsigned __int64)dest;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v542,
      (const __m128i *)&v524,
      2);
    *((_QWORD *)&v543 + 1) = 0;
    LOBYTE(v528) = 0;
    *(_QWORD *)&v529 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v528) = 3;
    v210 = operator new(0x20u);
    v211 = (unsigned __int64)v210;
    strcpy((char *)(v210 + 16), "address_reg");
    *(_QWORD *)v210 = v210 + 16;
    *(_QWORD *)(v210 + 8) = 11;
    v212 = v173 & 0x18;
    v529 = v211;
    if ( (v173 & 0x18) == 8 )
    {
      v213 = "x17";
    }
    else
    {
      v213 = "lr";
      if ( v212 != 16 )
      {
        v213 = "gpr";
        if ( v212 )
          v213 = "unknown";
      }
    }
    v530 = 0;
    *(_QWORD *)&v531 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v530 = 3;
    v214 = (_QWORD *)operator new(0x20u);
    *v214 = v214 + 2;
    v215 = strlen(v213);
    v216 = v214 + 2;
    v217 = v215;
    if ( (unsigned int)v215 >= 8 )
    {
      v214[2] = *(_QWORD *)v213;
      *(_QWORD *)((char *)v216 + (unsigned int)v215 - 8) = *(_QWORD *)&v213[(unsigned int)v215 - 8];
      v269 = (unsigned __int64)(v214 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v270 = (_DWORD)v216 - v269;
      v271 = (const char *)(v213 - ((const char *)v216 - v269));
      v272 = (v217 + v270) & 0xFFFFFFF8;
      if ( v272 >= 8 )
      {
        v273 = v272 & 0xFFFFFFF8;
        v274 = 0;
        do
        {
          v275 = v274;
          v274 += 8;
          *(_QWORD *)(v269 + v275) = *(_QWORD *)&v271[v275];
        }
        while ( v274 < v273 );
      }
    }
    else if ( (v215 & 4) != 0 )
    {
      *((_DWORD *)v214 + 4) = *(_DWORD *)v213;
      *(_DWORD *)((char *)v216 + (unsigned int)v215 - 4) = *(_DWORD *)&v213[(unsigned int)v215 - 4];
    }
    else if ( (_DWORD)v215 )
    {
      *((_BYTE *)v214 + 16) = *v213;
      if ( (v215 & 2) != 0 )
        *(_WORD *)((char *)v216 + (unsigned int)v215 - 2) = *(_WORD *)&v213[(unsigned int)v215 - 2];
    }
    v214[1] = v217;
    *((_BYTE *)v214 + v217 + 16) = 0;
    v531 = (unsigned __int64)v214;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v544,
      (const __m128i *)&v528,
      2);
    v544[2] = 0;
    LOBYTE(v532) = 0;
    *(_QWORD *)v533 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v532) = 3;
    v218 = operator new(0x20u);
    v219 = (unsigned __int64)v218;
    *(_QWORD *)v218 = v218 + 16;
    strcpy((char *)(v218 + 16), "modifier");
    *(_QWORD *)(v218 + 8) = 8;
    v220 = v173 & 0x60;
    *(_OWORD *)v533 = v219;
    if ( (v173 & 0x60) == 0x40 )
    {
      v221 = "x16";
    }
    else if ( (v173 & 0x60) > 0x40 )
    {
      v221 = "sp";
      if ( v220 != 96 )
        v221 = "unknown";
    }
    else
    {
      v221 = "gpr";
      if ( v220 )
        v221 = "zero";
    }
    v534 = 0;
    *(_QWORD *)&v535 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v534 = 3;
    v222 = (_QWORD *)operator new(0x20u);
    *v222 = v222 + 2;
    v223 = strlen(v221);
    v224 = v222 + 2;
    v225 = v223;
    if ( (unsigned int)v223 >= 8 )
    {
      v222[2] = *(_QWORD *)v221;
      *(_QWORD *)((char *)v224 + (unsigned int)v223 - 8) = *(_QWORD *)&v221[(unsigned int)v223 - 8];
      v257 = (unsigned __int64)(v222 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v258 = (const char *)(v221 - ((const char *)v224 - v257));
      v259 = (v223 + (_DWORD)v224 - v257) & 0xFFFFFFF8;
      if ( v259 >= 8 )
      {
        v260 = v259 & 0xFFFFFFF8;
        v261 = 0;
        do
        {
          v262 = v261;
          v261 += 8;
          *(_QWORD *)(v257 + v262) = *(_QWORD *)&v258[v262];
        }
        while ( v261 < v260 );
      }
    }
    else if ( (v223 & 4) != 0 )
    {
      *((_DWORD *)v222 + 4) = *(_DWORD *)v221;
      *(_DWORD *)((char *)v224 + (unsigned int)v223 - 4) = *(_DWORD *)&v221[(unsigned int)v223 - 4];
    }
    else if ( (_DWORD)v223 )
    {
      *((_BYTE *)v222 + 16) = *v221;
      if ( (v223 & 2) != 0 )
        *(_WORD *)((char *)v224 + (unsigned int)v223 - 2) = *(_WORD *)&v221[(unsigned int)v223 - 2];
    }
    v222[1] = v225;
    *((_BYTE *)v222 + v225 + 16) = 0;
    v535 = (unsigned __int64)v222;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v545,
      (const __m128i *)&v532,
      2);
    v545[2] = 0;
    LOBYTE(v536) = 0;
    *(_QWORD *)v537 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v536) = 3;
    v226 = operator new(0x20u);
    *(_QWORD *)v226 = v226 + 16;
    strcpy((char *)(v226 + 16), "raw_flags");
    *(_QWORD *)(v226 + 8) = 9;
    v538 = 5;
    v539 = v173;
    *(_OWORD *)v537 = (unsigned __int64)v226;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v546,
      (const __m128i *)&v536,
      2);
    v546[2] = 0;
    v501[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v501,
      (const __m128i *)&v540,
      5);
    v227 = v501[0];
    v228 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v229 = *(_BYTE *)v228;
    v230 = *(_QWORD *)(v228 + 8);
    *(_BYTE *)v228 = v227;
    v231 = (void **)&v547;
    *(_QWORD *)(v228 + 8) = v502;
    *(_QWORD *)&v502 = v230;
    v501[0] = v229;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    do
    {
      v231 -= 3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v231 != &v540 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v46 = v550;
  if ( (unsigned __int16)v550 > 0x2Eu )
  {
    if ( (_WORD)v550 == 275 )
    {
      v47 = "TBH";
    }
    else if ( (_WORD)v550 == 470 )
    {
      v47 = "BRAA/BRAB_v2";
    }
    else
    {
      v47 = "TBB";
      if ( (_WORD)v550 != 274 )
        goto LABEL_57;
    }
LABEL_51:
    v503 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v48 = (_QWORD *)operator new(0x20u);
    v49 = v48 + 2;
    v50 = v48;
    *v48 = v48 + 2;
    v51 = strlen(v47);
    v52 = v51;
    if ( (unsigned int)v51 >= 8 )
    {
      v244 = (unsigned __int64)(v50 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v50[2] = *(_QWORD *)v47;
      *(_QWORD *)((char *)v49 + (unsigned int)v51 - 8) = *(_QWORD *)&v47[(unsigned int)v51 - 8];
      v245 = (const char *)(v47 - ((const char *)v49 - v244));
      v246 = (v51 + (_DWORD)v49 - v244) & 0xFFFFFFF8;
      if ( v246 >= 8 )
      {
        v247 = v246 & 0xFFFFFFF8;
        v248 = 0;
        do
        {
          v249 = v248;
          v248 += 8;
          *(_QWORD *)(v244 + v249) = *(_QWORD *)&v245[v249];
        }
        while ( v248 < v247 );
      }
    }
    else if ( (v51 & 4) != 0 )
    {
      *((_DWORD *)v50 + 4) = *(_DWORD *)v47;
      *(_DWORD *)((char *)v49 + (unsigned int)v51 - 4) = *(_DWORD *)&v47[(unsigned int)v51 - 4];
    }
    else if ( (_DWORD)v51 )
    {
      *((_BYTE *)v50 + 16) = *v47;
      if ( (v51 & 2) != 0 )
        *(_WORD *)((char *)v49 + (unsigned int)v51 - 2) = *(_WORD *)&v47[(unsigned int)v51 - 2];
    }
    v50[1] = v52;
    *((_BYTE *)v50 + v52 + 16) = 0;
    v53 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v54 = *(_BYTE *)v53;
    v55 = *(_QWORD *)(v53 + 8);
    *(_BYTE *)v53 = 3;
    *(_QWORD *)(v53 + 8) = v50;
    v503.m128i_i8[0] = v54;
    v503.m128i_i64[1] = v55;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v46 = v550;
  }
  else if ( (unsigned __int16)v550 > 3u )
  {
    switch ( (__int16)v550 )
    {
      case 4:
        v47 = "BR";
        goto LABEL_51;
      case 14:
        v47 = "BLR";
        goto LABEL_51;
      case 23:
        v47 = "BLRAA/BLRAB";
        goto LABEL_51;
      case 31:
        v47 = "LDR_PC";
        goto LABEL_51;
      case 41:
        v47 = "BRAA/BRAB";
        goto LABEL_51;
      case 46:
        v47 = "thunk";
        goto LABEL_51;
      default:
        break;
    }
  }
LABEL_57:
  if ( v46 != 46 && !v42 || !get_func() || calc_thunk_func_target() == -1 )
    goto LABEL_59;
  qsnprintf();
  v532 = &v533[2];
  v121 = strlen(v587);
  v500 = v121;
  v122 = v121;
  if ( v121 > 0xF )
  {
    v314 = (int *)std::string::_M_create();
    v532 = v314;
    *(_QWORD *)&v533[2] = v500;
  }
  else
  {
    if ( v121 == 1 )
    {
      LOBYTE(v533[2]) = v587[0];
      goto LABEL_123;
    }
    if ( !v121 )
    {
LABEL_123:
      v123 = &v533[2];
      goto LABEL_124;
    }
    v314 = &v533[2];
  }
  if ( v122 >= 8 )
  {
    v327 = (unsigned __int64)(v314 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v314 = *(_QWORD *)v587;
    *(_QWORD *)((char *)v314 + v122 - 8) = *(_QWORD *)&v586[v122];
    v328 = (char *)v314 - v327;
    v329 = (char *)(v587 - v328);
    v330 = (v122 + (_DWORD)v328) & 0xFFFFFFF8;
    if ( v330 >= 8 )
    {
      v331 = v330 & 0xFFFFFFF8;
      v332 = 0;
      do
      {
        v333 = v332;
        v332 += 8;
        *(_QWORD *)(v327 + v333) = *(_QWORD *)&v329[v333];
      }
      while ( v332 < v331 );
    }
  }
  else if ( (v122 & 4) != 0 )
  {
    *v314 = *(_DWORD *)v587;
    *(int *)((char *)v314 + v122 - 4) = *(_DWORD *)&v586[v122 + 4];
  }
  else if ( v122 )
  {
    *(_BYTE *)v314 = v587[0];
    if ( (v122 & 2) != 0 )
      *(_WORD *)((char *)v314 + v122 - 2) = *(_WORD *)&v586[v122 + 6];
  }
  v121 = v500;
  v123 = (int *)v532;
LABEL_124:
  *(_QWORD *)v533 = v121;
  *((_BYTE *)v123 + v121) = 0;
  v504 = nullptr;
  *(_QWORD *)v505 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v124 = (_QWORD *)operator new(0x20u);
  v125 = v124 + 2;
  v126 = v124;
  v127 = *(_QWORD *)v533;
  *v124 = v124 + 2;
  if ( v532 == &v533[2] )
  {
    v339 = v127 + 1;
    if ( (unsigned int)(v127 + 1) >= 8 )
    {
      v126[2] = *(_QWORD *)&v533[2];
      *(_QWORD *)((char *)v125 + v339 - 8) = *(_QWORD *)((char *)v533 + v339);
      v403 = (unsigned __int64)(v126 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v404 = (char *)v125 - v403;
      v405 = (char *)((char *)&v533[2] - v404);
      v406 = ((_DWORD)v404 + v339) & 0xFFFFFFF8;
      if ( v406 >= 8 )
      {
        v407 = v406 & 0xFFFFFFF8;
        v408 = 0;
        do
        {
          v409 = v408;
          v408 += 8;
          *(_QWORD *)(v403 + v409) = *(_QWORD *)&v405[v409];
        }
        while ( v408 < v407 );
      }
    }
    else if ( (v339 & 4) != 0 )
    {
      *((_DWORD *)v126 + 4) = v533[2];
      *(_DWORD *)((char *)v125 + v339 - 4) = *(int *)((char *)&v533[1] + v339);
    }
    else if ( (_DWORD)v127 != -1 )
    {
      *((_BYTE *)v126 + 16) = v533[2];
      if ( (v339 & 2) != 0 )
        *(_WORD *)((char *)v125 + v339 - 2) = *(_WORD *)((char *)&v533[1] + v339 + 2);
    }
  }
  else
  {
    *v124 = v532;
    v124[2] = *(_QWORD *)&v533[2];
  }
  v126[1] = v127;
  v532 = &v533[2];
  *(_QWORD *)v533 = 0;
  LOBYTE(v533[2]) = 0;
  v128 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v129 = *(_BYTE *)v128;
  v130 = *(_QWORD *)(v128 + 8);
  *(_BYTE *)v128 = 3;
  *(_QWORD *)(v128 + 8) = v126;
  LOBYTE(v504) = v129;
  *(_QWORD *)v505 = v130;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v532 != &v533[2] )
    operator delete(v532, *(_QWORD *)&v533[2] + 1LL);
  v507 = nullptr;
  si128 = 0;
  get_func_name();
  if ( si128.m128i_i64[0] <= 1uLL )
    goto LABEL_129;
  v504 = nullptr;
  *(_QWORD *)v505 = 0;
  v305 = v507;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v306 = (__int64 *)operator new(0x20u);
  v307 = v306 + 2;
  v308 = v306;
  *v306 = (__int64)(v306 + 2);
  if ( !v305 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v309 = strlen(v305);
  v503.m128i_i64[0] = v309;
  v310 = v309;
  if ( v309 > 0xF )
  {
    v334 = std::string::_M_create();
    *v308 = v334;
    v307 = (void *)v334;
    v308[2] = v503.m128i_i64[0];
LABEL_372:
    memcpy(v307, v305, v310);
    v309 = v503.m128i_i64[0];
    v307 = (void *)*v308;
    goto LABEL_348;
  }
  if ( v309 == 1 )
  {
    *((_BYTE *)v308 + 16) = *v305;
    goto LABEL_348;
  }
  if ( v309 )
    goto LABEL_372;
LABEL_348:
  v308[1] = v309;
  *((_BYTE *)v307 + v309) = 0;
  v311 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v312 = *(_BYTE *)v311;
  v313 = *(_QWORD *)(v311 + 8);
  *(_BYTE *)v311 = 3;
  *(_QWORD *)(v311 + 8) = v308;
  LOBYTE(v504) = v312;
  *(_QWORD *)v505 = v313;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_129:
  if ( v507 )
  {
    si128.m128i_i64[0] = 0;
    qfree();
  }
LABEL_59:
  v507 = (char *)0x800000;
  v510 = 0;
  v511 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2390);
  v509 = -1;
  v512 = 0;
  v513 = 0xFFFFFFFFLL;
  v514 = 0;
  v515 = 2;
  v516 = -1;
  v517 = 0;
  v518 = 0;
  if ( get_switch_info() )
  {
    *(_QWORD *)v505 = 1;
    v56 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v57 = *(_BYTE *)v56;
    v58 = *(_QWORD *)(v56 + 8);
    *(_BYTE *)v56 = 4;
    LOBYTE(v504) = v57;
    *(_QWORD *)(v56 + 8) = *(_QWORD *)v505;
    *(_QWORD *)v505 = v58;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v59 = WORD2(v507);
    if ( (BYTE2(v507) & 1) != 0 )
      v59 = v510;
    v60 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v61 = *(_BYTE *)v60;
    v62 = *(_QWORD *)(v60 + 8);
    *(_BYTE *)v60 = 5;
    LOBYTE(v504) = v61;
    *(_QWORD *)(v60 + 8) = v59;
    *(_QWORD *)v505 = v62;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( si128.m128i_i64[0] == -1 )
    {
LABEL_71:
      if ( v512 == -1 )
        goto LABEL_80;
      qsnprintf();
      v540 = (char *)&s2 + 8;
      v73 = strlen(v591);
      v504 = (_QWORD *)v73;
      v74 = v73;
      if ( v73 > 0xF )
      {
        v540 = (void *)std::string::_M_create();
        v203 = v540;
        *((_QWORD *)&s2 + 1) = v504;
      }
      else
      {
        if ( v73 == 1 )
        {
          BYTE8(s2) = v591[0];
          goto LABEL_75;
        }
        if ( !v73 )
        {
LABEL_75:
          v75 = (char *)&s2 + 8;
LABEL_76:
          *(_QWORD *)&s2 = v73;
          v75[v73] = 0;
          v504 = nullptr;
          *(_QWORD *)v505 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v76 = (_QWORD *)operator new(0x20u);
          v77 = v76 + 2;
          v78 = v76;
          v79 = s2;
          *v76 = v76 + 2;
          if ( v540 == (char *)&s2 + 8 )
          {
            v337 = v79 + 1;
            if ( (unsigned int)(v79 + 1) >= 8 )
            {
              v78[2] = *((_QWORD *)&s2 + 1);
              *(_QWORD *)((char *)v77 + v337 - 8) = *(_QWORD *)((char *)&s2 + v337);
              v348 = (unsigned __int64)(v78 + 3) & 0xFFFFFFFFFFFFFFF8LL;
              v349 = (char *)v77 - v348;
              v350 = (char *)((char *)&s2 + 8 - v349);
              v351 = ((_DWORD)v349 + v337) & 0xFFFFFFF8;
              if ( v351 >= 8 )
              {
                v352 = v351 & 0xFFFFFFF8;
                v353 = 0;
                do
                {
                  v354 = v353;
                  v353 += 8;
                  *(_QWORD *)(v348 + v354) = *(_QWORD *)&v350[v354];
                }
                while ( v353 < v352 );
              }
            }
            else if ( (v337 & 4) != 0 )
            {
              *((_DWORD *)v78 + 4) = DWORD2(s2);
              *(_DWORD *)((char *)v77 + v337 - 4) = *(_DWORD *)((char *)&s2 + v337 + 4);
            }
            else if ( (_DWORD)v79 != -1 )
            {
              *((_BYTE *)v78 + 16) = BYTE8(s2);
              if ( (v337 & 2) != 0 )
                *(_WORD *)((char *)v77 + v337 - 2) = *(_WORD *)((char *)&s2 + v337 + 6);
            }
          }
          else
          {
            *v76 = v540;
            v76[2] = *((_QWORD *)&s2 + 1);
          }
          v78[1] = v79;
          v540 = (char *)&s2 + 8;
          *(_QWORD *)&s2 = 0;
          BYTE8(s2) = 0;
          v80 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v81 = *(_BYTE *)v80;
          v82 = *(_QWORD *)(v80 + 8);
          *(_BYTE *)v80 = 3;
          *(_QWORD *)(v80 + 8) = v78;
          LOBYTE(v504) = v81;
          *(_QWORD *)v505 = v82;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( v540 != (char *)&s2 + 8 )
            operator delete(v540, *((_QWORD *)&s2 + 1) + 1LL);
LABEL_80:
          v83 = 2;
          v84 = (unsigned __int16)v507 & 0x404;
          if ( ((unsigned __int16)v507 & 0x404) != 0 )
          {
            if ( v84 == 4 )
            {
              v83 = 4;
            }
            else
            {
              v83 = 1;
              if ( v84 != 1024 )
                v83 = 8;
            }
          }
          v85 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v86 = *(_BYTE *)v85;
          v87 = *(_QWORD *)(v85 + 8);
          *(_BYTE *)v85 = 5;
          LOBYTE(v504) = v86;
          *(_QWORD *)(v85 + 8) = v83;
          *(_QWORD *)v505 = v87;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( (_WORD)v550 == 31 )
          {
            v88 = "ldrpc";
            goto LABEL_88;
          }
          if ( (unsigned __int16)v550 > 0x1Fu )
          {
            if ( (unsigned __int16)v550 > 0x113u )
            {
              v88 = "ptn2";
              if ( (_WORD)v550 == 470 )
                goto LABEL_88;
              goto LABEL_92;
            }
            if ( (unsigned __int16)v550 <= 0x111u )
            {
              v88 = "ptn2";
              if ( (_WORD)v550 == 41 )
                goto LABEL_88;
              goto LABEL_92;
            }
          }
          else if ( (_WORD)v550 != 4 )
          {
            v88 = "ptn1";
            if ( (_WORD)v550 == 14 )
            {
LABEL_88:
              v504 = nullptr;
              *(_QWORD *)v505 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v89 = (_QWORD *)operator new(0x20u);
              v90 = v89 + 2;
              v91 = v89;
              *v89 = v89 + 2;
              v92 = strlen(v88);
              if ( (_DWORD)v92 )
              {
                v93 = 0;
                do
                {
                  v94 = v93++;
                  *((_BYTE *)v90 + v94) = v88[v94];
                }
                while ( v93 < (unsigned int)v92 );
              }
              v91[1] = v92;
              *((_BYTE *)v91 + v92 + 16) = 0;
              v95 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v96 = *(_BYTE *)v95;
              v97 = *(_QWORD *)(v95 + 8);
              *(_BYTE *)v95 = 3;
              *(_QWORD *)(v95 + 8) = v91;
              LOBYTE(v504) = v96;
              *(_QWORD *)v505 = v97;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
LABEL_92:
            v503.m128i_i8[0] = 0;
            v503.m128i_i64[1] = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
            v98 = WORD2(v507);
            v99 = v503.m128i_i64[1];
            v494 = v503.m128i_i8[0];
            v100 = (__int16)v507;
            if ( ((unsigned int)v507 & 0x10000) != 0 )
              v98 = v510;
            *(_QWORD *)v493 = v98;
            if ( !v98 )
            {
LABEL_117:
              LOBYTE(v504) = 0;
              v503.m128i_i64[1] = v99;
              v503.m128i_i8[0] = v494;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
              v116 = (char)v504;
              v117 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v118 = *(_QWORD *)v505;
              v119 = *(_BYTE *)v117;
              *(_BYTE *)v117 = v116;
              v120 = *(_QWORD *)(v117 + 8);
              *(_QWORD *)(v117 + 8) = v118;
              LOBYTE(v504) = v119;
              *(_QWORD *)v505 = v120;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              goto LABEL_157;
            }
            v101 = 0;
            while ( 1 )
            {
              v102 = v100 & 0x404;
              if ( v102 )
              {
                if ( v102 == 4 )
                {
                  dword = get_dword();
                  if ( dword == -1 )
                  {
LABEL_97:
                    if ( ++v101 >= *(_QWORD *)v493 )
                      goto LABEL_117;
                    goto LABEL_98;
                  }
                  v103 = v512 + dword;
                }
                else
                {
                  if ( v102 != 1024 )
                  {
                    if ( get_qword() == -1 )
                      goto LABEL_97;
                    goto LABEL_105;
                  }
                  v103 = v512 + ((2 * (unsigned __int16)get_byte()) & 0x1FE);
                }
              }
              else
              {
                v103 = v512 + (__int16)get_word();
              }
              if ( v103 == -1 )
                goto LABEL_97;
LABEL_105:
              LOBYTE(v532) = 0;
              *(_QWORD *)v533 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              LOBYTE(v532) = 3;
              v104 = operator new(0x20u);
              *(_QWORD *)(v104 + 8) = 10;
              *(_QWORD *)v104 = v104 + 16;
              strcpy((char *)(v104 + 16), "case_index");
              v534 = 6;
              v535 = v101;
              *(_OWORD *)v533 = (unsigned __int64)v104;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                &v540,
                (const __m128i *)&v532,
                2);
              *((_QWORD *)&s2 + 1) = 0;
              LOBYTE(v536) = 0;
              *(_QWORD *)v537 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              LOBYTE(v536) = 3;
              v105 = operator new(0x20u);
              *(_QWORD *)v105 = v105 + 16;
              strcpy((char *)(v105 + 16), "target");
              *(_QWORD *)(v105 + 8) = 6;
              *(_OWORD *)v537 = (unsigned __int64)v105;
              qsnprintf();
              v524 = (char *)&v525 + 8;
              v106 = strlen(v593);
              v504 = (_QWORD *)v106;
              v107 = v106;
              if ( v106 > 0xF )
              {
                v232 = (_QWORD *)std::string::_M_create();
                v524 = v232;
                *((_QWORD *)&v525 + 1) = v504;
              }
              else
              {
                if ( v106 == 1 )
                {
                  BYTE8(v525) = v593[0];
LABEL_108:
                  v108 = (char *)&v525 + 8;
                  goto LABEL_109;
                }
                if ( !v106 )
                  goto LABEL_108;
                v232 = (_QWORD *)&v525 + 1;
              }
              if ( v107 >= 8 )
              {
                *v232 = *(_QWORD *)v593;
                *(_QWORD *)((char *)v232 + v107 - 8) = *(_QWORD *)&v592[v107];
                v235 = (unsigned __int64)(v232 + 1) & 0xFFFFFFFFFFFFFFF8LL;
                v236 = (char *)v232 - v235;
                v237 = (char *)(v593 - v236);
                v238 = ((_DWORD)v236 + v107) & 0xFFFFFFF8;
                if ( v238 >= 8 )
                {
                  v239 = v238 & 0xFFFFFFF8;
                  v240 = 0;
                  do
                  {
                    v241 = v240;
                    v240 += 8;
                    *(_QWORD *)(v235 + v241) = *(_QWORD *)&v237[v241];
                  }
                  while ( v240 < v239 );
                }
              }
              else if ( (v107 & 4) != 0 )
              {
                *(_DWORD *)v232 = *(_DWORD *)v593;
                *(_DWORD *)((char *)v232 + v107 - 4) = *(_DWORD *)&v592[v107 + 4];
              }
              else if ( v107 )
              {
                *(_BYTE *)v232 = v593[0];
                if ( (v107 & 2) != 0 )
                  *(_WORD *)((char *)v232 + v107 - 2) = *(_WORD *)&v592[v107 + 6];
              }
              v106 = (size_t)v504;
              v108 = (char *)v524;
LABEL_109:
              *(_QWORD *)&v525 = v106;
              v108[v106] = 0;
              v538 = 0;
              *(_QWORD *)&v539 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v538 = 3;
              v109 = (_QWORD *)operator new(0x20u);
              v110 = v524;
              v111 = v109 + 2;
              v112 = v525;
              *v109 = v109 + 2;
              if ( v110 == (__int128 *)((char *)&v525 + 8) )
              {
                v234 = v112 + 1;
                if ( (unsigned int)(v112 + 1) >= 8 )
                {
                  v109[2] = *((_QWORD *)&v525 + 1);
                  *(_QWORD *)((char *)v111 + v234 - 8) = *(_QWORD *)((char *)&v525 + v234);
                  v250 = (unsigned __int64)(v109 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                  v251 = (char *)v111 - v250;
                  v252 = (char *)((char *)&v525 + 8 - v251);
                  if ( (((_DWORD)v251 + v234) & 0xFFFFFFF8) >= 8 )
                  {
                    v253 = ((_DWORD)v251 + v234) & 0xFFFFFFF8;
                    v254 = 0;
                    do
                    {
                      v255 = v254;
                      v254 += 8;
                      *(_QWORD *)(v250 + v255) = *(_QWORD *)&v252[v255];
                    }
                    while ( v254 < v253 );
                  }
                }
                else if ( (v234 & 4) != 0 )
                {
                  *((_DWORD *)v109 + 4) = DWORD2(v525);
                  *(_DWORD *)((char *)v111 + v234 - 4) = *(_DWORD *)((char *)&v525 + v234 + 4);
                }
                else if ( (_DWORD)v112 != -1 )
                {
                  *((_BYTE *)v109 + 16) = BYTE8(v525);
                  if ( (v234 & 2) != 0 )
                    *(_WORD *)((char *)v111 + v234 - 2) = *(_WORD *)((char *)&v525 + v234 + 6);
                }
              }
              else
              {
                *v109 = v110;
                v109[2] = *((_QWORD *)&v525 + 1);
              }
              v109[1] = v112;
              v524 = (char *)&v525 + 8;
              *(_QWORD *)&v525 = 0;
              BYTE8(v525) = 0;
              v539 = (unsigned __int64)v109;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                &v542,
                (const __m128i *)&v536,
                2);
              *((_QWORD *)&v543 + 1) = 0;
              LOBYTE(v504) = 0;
              *(_QWORD *)v505 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                &v504,
                (const __m128i *)&v540,
                2);
              if ( !v494 )
              {
                v113 = operator new(0x18u);
                *(_QWORD *)(v113 + 16) = 0;
                v99 = v113;
                *(_OWORD *)v113 = 0;
LABEL_113:
                std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
                v114 = (char)v504;
                v115 = *(_QWORD *)v505;
                goto LABEL_114;
              }
              if ( v494 != 2 )
              {
                v7 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
                switch ( v494 )
                {
                  case 1:
                    v8 = "object";
                    break;
                  case 3:
                    v8 = "string";
                    break;
                  case 4:
                    v8 = "boolean";
                    break;
                  case 8:
                    v8 = "binary";
                    break;
                  case 9:
                    v8 = "discarded";
                    break;
                  default:
                    v8 = "number";
                    break;
                }
                *(_QWORD *)v501 = v8;
                nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
                nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
                  v7,
                  308);
                std::string::_M_dispose();
                __cxa_throw(
                  v7,
                  (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                  (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
              }
              v242 = *(_QWORD *)(v99 + 8);
              if ( v242 == *(_QWORD *)(v99 + 16) )
                goto LABEL_113;
              v243 = v242 + 16;
              v114 = 0;
              *(__m128i *)(v243 - 16) = _mm_load_si128((const __m128i *)&v504);
              *(_QWORD *)(v99 + 8) = v243;
              v115 = 0;
LABEL_114:
              *(_QWORD *)v505 = v115;
              LOBYTE(v504) = v114;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              if ( v524 != (char *)&v525 + 8 )
                operator delete(v524, *((_QWORD *)&v525 + 1) + 1LL);
              ++v101;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v494 = 2;
              if ( v101 >= *(_QWORD *)v493 )
                goto LABEL_117;
LABEL_98:
              if ( v101 == 100 )
                goto LABEL_117;
              v100 = (__int16)v507;
            }
          }
          v88 = "tb";
          goto LABEL_88;
        }
        v203 = (_QWORD *)&s2 + 1;
      }
      if ( v74 >= 8 )
      {
        v321 = (unsigned __int64)(v203 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        *v203 = *(_QWORD *)v591;
        *(_QWORD *)((char *)v203 + v74 - 8) = *(_QWORD *)&v590[v74];
        v322 = (char *)v203 - v321;
        v323 = (char *)(v591 - v322);
        if ( ((v74 + (_DWORD)v322) & 0xFFFFFFF8) >= 8 )
        {
          v324 = (v74 + (_DWORD)v322) & 0xFFFFFFF8;
          v325 = 0;
          do
          {
            v326 = v325;
            v325 += 8;
            *(_QWORD *)(v321 + v326) = *(_QWORD *)&v323[v326];
          }
          while ( v325 < v324 );
        }
      }
      else if ( (v74 & 4) != 0 )
      {
        *(_DWORD *)v203 = *(_DWORD *)v591;
        *(_DWORD *)((char *)v203 + v74 - 4) = *(_DWORD *)&v590[v74 + 4];
      }
      else if ( v74 )
      {
        *(_BYTE *)v203 = v591[0];
        if ( (v74 & 2) != 0 )
          *(_WORD *)((char *)v203 + v74 - 2) = *(_WORD *)&v590[v74 + 6];
      }
      v73 = (size_t)v504;
      v75 = (char *)v540;
      goto LABEL_76;
    }
    qsnprintf();
    v540 = (char *)&s2 + 8;
    v63 = strlen(v589);
    v504 = (_QWORD *)v63;
    v64 = v63;
    if ( v63 > 0xF )
    {
      v540 = (void *)std::string::_M_create();
      v204 = v540;
      *((_QWORD *)&s2 + 1) = v504;
    }
    else
    {
      if ( v63 == 1 )
      {
        BYTE8(s2) = v589[0];
        goto LABEL_66;
      }
      if ( !v63 )
      {
LABEL_66:
        v65 = (char *)&s2 + 8;
LABEL_67:
        *(_QWORD *)&s2 = v63;
        v65[v63] = 0;
        v504 = nullptr;
        *(_QWORD *)v505 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v66 = (_QWORD *)operator new(0x20u);
        v67 = v66 + 2;
        v68 = v66;
        v69 = s2;
        *v66 = v66 + 2;
        if ( v540 == (char *)&s2 + 8 )
        {
          v336 = v69 + 1;
          if ( (unsigned int)(v69 + 1) >= 8 )
          {
            v68[2] = *((_QWORD *)&s2 + 1);
            *(_QWORD *)((char *)v67 + v336 - 8) = *(_QWORD *)((char *)&s2 + v336);
            v341 = (unsigned __int64)(v68 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v342 = (char *)v67 - v341;
            v343 = (char *)((char *)&s2 + 8 - v342);
            v344 = ((_DWORD)v342 + v336) & 0xFFFFFFF8;
            if ( v344 >= 8 )
            {
              v345 = v344 & 0xFFFFFFF8;
              v346 = 0;
              do
              {
                v347 = v346;
                v346 += 8;
                *(_QWORD *)(v341 + v347) = *(_QWORD *)&v343[v347];
              }
              while ( v346 < v345 );
            }
          }
          else if ( (v336 & 4) != 0 )
          {
            *((_DWORD *)v68 + 4) = DWORD2(s2);
            *(_DWORD *)((char *)v67 + v336 - 4) = *(_DWORD *)((char *)&s2 + v336 + 4);
          }
          else if ( (_DWORD)v69 != -1 )
          {
            *((_BYTE *)v68 + 16) = BYTE8(s2);
            if ( (v336 & 2) != 0 )
              *(_WORD *)((char *)v67 + v336 - 2) = *(_WORD *)((char *)&s2 + v336 + 6);
          }
        }
        else
        {
          *v66 = v540;
          v66[2] = *((_QWORD *)&s2 + 1);
        }
        v68[1] = v69;
        v540 = (char *)&s2 + 8;
        *(_QWORD *)&s2 = 0;
        BYTE8(s2) = 0;
        v70 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v71 = *(_BYTE *)v70;
        v72 = *(_QWORD *)(v70 + 8);
        *(_BYTE *)v70 = 3;
        *(_QWORD *)(v70 + 8) = v68;
        LOBYTE(v504) = v71;
        *(_QWORD *)v505 = v72;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v540 != (char *)&s2 + 8 )
          operator delete(v540, *((_QWORD *)&s2 + 1) + 1LL);
        goto LABEL_71;
      }
      v204 = (_QWORD *)&s2 + 1;
    }
    if ( v64 >= 8 )
    {
      v315 = (unsigned __int64)(v204 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v204 = *(_QWORD *)v589;
      *(_QWORD *)((char *)v204 + v64 - 8) = *(_QWORD *)&v588[v64];
      v316 = (char *)v204 - v315;
      v317 = (char *)(v589 - v316);
      if ( ((v64 + (_DWORD)v316) & 0xFFFFFFF8) >= 8 )
      {
        v318 = (v64 + (_DWORD)v316) & 0xFFFFFFF8;
        v319 = 0;
        do
        {
          v320 = v319;
          v319 += 8;
          *(_QWORD *)(v315 + v320) = *(_QWORD *)&v317[v320];
        }
        while ( v319 < v318 );
      }
    }
    else if ( (v64 & 4) != 0 )
    {
      *(_DWORD *)v204 = *(_DWORD *)v589;
      *(_DWORD *)((char *)v204 + v64 - 4) = *(_DWORD *)&v588[v64 + 4];
    }
    else if ( v64 )
    {
      *(_BYTE *)v204 = v589[0];
      if ( (v64 & 2) != 0 )
        *(_WORD *)((char *)v204 + v64 - 2) = *(_WORD *)&v588[v64 + 6];
    }
    v63 = (size_t)v504;
    v65 = (char *)v540;
    goto LABEL_67;
  }
  *(_QWORD *)v505 = 0;
  v131 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v132 = *(_BYTE *)v131;
  v133 = *(_QWORD *)v505;
  *(_BYTE *)v131 = 4;
  v134 = *(_QWORD *)(v131 + 8);
  LOBYTE(v504) = v132;
  *(_QWORD *)(v131 + 8) = v133;
  *(_QWORD *)v505 = v134;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( BYTE1(v552) == 1 )
  {
    v504 = nullptr;
    *(_QWORD *)v505 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v280 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v280, "register_indirect", v281, v282, v283, v284, v479, v484, v487);
    v285 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v286 = *(_BYTE *)v285;
    v287 = *(_QWORD *)(v285 + 8);
    *(_BYTE *)v285 = 3;
    *(_QWORD *)(v285 + 8) = v280;
    LOBYTE(v504) = v286;
    *(_QWORD *)v505 = v287;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v288 = HIWORD(v552);
    v289 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v290 = *(_BYTE *)v289;
    v291 = *(_QWORD *)(v289 + 8);
    *(_BYTE *)v289 = 6;
    LOBYTE(v504) = v290;
    *(_QWORD *)(v289 + 8) = v288;
    *(_QWORD *)v505 = v291;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    get_dtype_size();
    get_reg_name();
    v504 = nullptr;
    *(_QWORD *)v505 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v292 = (__int64 *)operator new(0x20u);
    v293 = v292 + 2;
    v294 = v292;
    *v292 = (__int64)(v292 + 2);
    if ( !_qstring<char>::c_str(void)const::nullstr )
      JUMPOUT(0xE19EF);
    v295 = strlen(_qstring<char>::c_str(void)const::nullstr);
    v503.m128i_i64[0] = v295;
    v296 = v295;
    if ( v295 > 0xF )
    {
      v338 = std::string::_M_create();
      *v294 = v338;
      v293 = (void *)v338;
      v294[2] = v503.m128i_i64[0];
    }
    else
    {
      if ( v295 == 1 )
      {
        *((_BYTE *)v294 + 16) = _qstring<char>::c_str(void)const::nullstr[0];
        goto LABEL_326;
      }
      if ( !v295 )
        goto LABEL_326;
    }
    memcpy(v293, _qstring<char>::c_str(void)const::nullstr, v296);
    v295 = v503.m128i_i64[0];
    v293 = (void *)*v294;
LABEL_326:
    v294[1] = v295;
    *((_BYTE *)v293 + v295) = 0;
    v297 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v298 = *(_BYTE *)v297;
    v299 = *(_QWORD *)(v297 + 8);
    *(_BYTE *)v297 = 3;
    *(_QWORD *)(v297 + 8) = v294;
    LOBYTE(v504) = v298;
    *(_QWORD *)v505 = v299;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( !get_func() )
      goto LABEL_134;
    v506 = 0;
    v504 = nullptr;
    *(_OWORD *)v505 = 0;
    if ( !(unsigned __int8)find_reg_value_info() )
    {
LABEL_328:
      if ( v504 )
      {
        *(_QWORD *)v505 = 0;
        qfree();
      }
      goto LABEL_134;
    }
    LOBYTE(v540) = 0;
    *(_QWORD *)&s2 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v540) = 3;
    v362 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v362, "state", v363, v364, v365, v366, v481, v485, v488);
    v367 = "unknown";
    s2 = (unsigned __int64)v362;
    if ( (unsigned __int8)(v506 - 3) > 6u )
    {
      v367 = "spd";
      if ( (unsigned __int8)(v506 - 10) <= 1u )
        v367 = "resolved";
    }
    LOBYTE(v542) = 0;
    *(_QWORD *)&v543 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v542) = 3;
    v368 = (_QWORD *)operator new(0x20u);
    v369 = v368 + 2;
    v370 = v368;
    *v368 = v368 + 2;
    v371 = strlen(v367);
    v372 = v371;
    if ( (unsigned int)v371 >= 8 )
    {
      v450 = (unsigned __int64)(v370 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v370[2] = *(_QWORD *)v367;
      *(_QWORD *)((char *)v369 + (unsigned int)v371 - 8) = *(_QWORD *)&v367[(unsigned int)v371 - 8];
      v451 = (const char *)(v367 - ((const char *)v369 - v450));
      v452 = (v371 + (_DWORD)v369 - v450) & 0xFFFFFFF8;
      if ( v452 >= 8 )
      {
        v453 = v452 & 0xFFFFFFF8;
        v454 = 0;
        do
        {
          v455 = v454;
          v454 += 8;
          *(_QWORD *)(v450 + v455) = *(_QWORD *)&v451[v455];
        }
        while ( v454 < v453 );
      }
    }
    else if ( (v371 & 4) != 0 )
    {
      *((_DWORD *)v370 + 4) = *(_DWORD *)v367;
      *(_DWORD *)((char *)v369 + (unsigned int)v371 - 4) = *(_DWORD *)&v367[(unsigned int)v371 - 4];
    }
    else if ( (_DWORD)v371 )
    {
      *((_BYTE *)v370 + 16) = *v367;
      if ( (v371 & 2) != 0 )
        *(_WORD *)((char *)v369 + (unsigned int)v371 - 2) = *(_WORD *)&v367[(unsigned int)v371 - 2];
    }
    v370[1] = v372;
    *((_BYTE *)v370 + v372 + 16) = 0;
    v543 = (unsigned __int64)v370;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v536,
      (const __m128i *)&v540,
      2);
    *(_QWORD *)&v537[2] = 0;
    v503.m128i_i8[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v503,
      (const __m128i *)&v536,
      1);
    v373 = v503.m128i_i8[0];
    v374 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v375 = v503.m128i_i64[1];
    v376 = *(_QWORD *)(v374 + 8);
    v377 = *(_BYTE *)v374;
    *(_BYTE *)v374 = v373;
    *(_QWORD *)(v374 + 8) = v375;
    v503.m128i_i64[1] = v376;
    v503.m128i_i8[0] = v377;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( (unsigned __int8)(v506 - 10) > 1u )
    {
LABEL_441:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v379 = nullptr;
      v483 = 0;
      if ( !*(_QWORD *)v505 )
      {
LABEL_489:
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_328;
      }
      v380 = 0;
      if ( v504[1] == -1 )
        goto LABEL_461;
LABEL_443:
      qsnprintf();
      v540 = (char *)&s2 + 8;
      v381 = strlen(v597);
      v503.m128i_i64[0] = v381;
      v382 = v381;
      if ( v381 > 0xF )
      {
        v402 = (_QWORD *)std::string::_M_create();
        v540 = v402;
        *((_QWORD *)&s2 + 1) = v503.m128i_i64[0];
      }
      else
      {
        if ( v381 == 1 )
        {
          BYTE8(s2) = v597[0];
          goto LABEL_446;
        }
        if ( !v381 )
        {
LABEL_446:
          v383 = (char *)&s2 + 8;
          goto LABEL_447;
        }
        v402 = (_QWORD *)&s2 + 1;
      }
      if ( v382 >= 8 )
      {
        *v402 = *(_QWORD *)v597;
        *(_QWORD *)((char *)v402 + v382 - 8) = *(_QWORD *)&v596[v382];
        v416 = (unsigned __int64)(v402 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v417 = (char *)v402 - v416;
        v418 = (char *)(v597 - v417);
        v419 = (v382 + (_DWORD)v417) & 0xFFFFFFF8;
        if ( v419 >= 8 )
        {
          v420 = v419 & 0xFFFFFFF8;
          v421 = 0;
          do
          {
            v422 = v421;
            v421 += 8;
            *(_QWORD *)(v416 + v422) = *(_QWORD *)&v418[v422];
          }
          while ( v421 < v420 );
        }
      }
      else if ( (v382 & 4) != 0 )
      {
        *(_DWORD *)v402 = *(_DWORD *)v597;
        *(_DWORD *)((char *)v402 + v382 - 4) = *(_DWORD *)&v596[v382 + 4];
      }
      else if ( v382 )
      {
        *(_BYTE *)v402 = v597[0];
        if ( (v382 & 2) != 0 )
          *(_WORD *)((char *)v402 + v382 - 2) = *(_WORD *)&v596[v382 + 6];
      }
      v381 = v503.m128i_i64[0];
      v383 = (char *)v540;
LABEL_447:
      *(_QWORD *)&s2 = v381;
      v383[v381] = 0;
      v503 = 0u;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v384 = operator new(0x20u);
      v385 = v540;
      v386 = (_QWORD *)v384;
      v387 = v384 + 16;
      v388 = s2;
      *v386 = v387;
      if ( v385 == (__int128 *)((char *)&s2 + 8) )
      {
        v415 = v388 + 1;
        if ( (unsigned int)(v388 + 1) >= 8 )
        {
          v386[2] = *((_QWORD *)&s2 + 1);
          *(_QWORD *)(v387 + v415 - 8) = *(_QWORD *)((char *)&s2 + v415);
          v456 = (unsigned __int64)(v386 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v457 = v387 - v456;
          v458 = (char *)&s2 - v457 + 8;
          v459 = (v415 + v457) & 0xFFFFFFF8;
          if ( v459 >= 8 )
          {
            v460 = v459 & 0xFFFFFFF8;
            v461 = 0;
            do
            {
              v462 = v461;
              v461 += 8;
              *(_QWORD *)(v456 + v462) = *(_QWORD *)&v458[v462];
            }
            while ( v461 < v460 );
          }
        }
        else if ( (v415 & 4) != 0 )
        {
          *((_DWORD *)v386 + 4) = DWORD2(s2);
          *(_DWORD *)(v387 + v415 - 4) = *(_DWORD *)((char *)&s2 + v415 + 4);
        }
        else if ( (_DWORD)v388 != -1 )
        {
          *((_BYTE *)v386 + 16) = BYTE8(s2);
          if ( (v415 & 2) != 0 )
            *(_WORD *)(v387 + v415 - 2) = *(_WORD *)((char *)&s2 + v415 + 6);
        }
      }
      else
      {
        v389 = *((_QWORD *)&s2 + 1);
        *v386 = v385;
        v386[2] = v389;
      }
      v386[1] = v388;
      v540 = (char *)&s2 + 8;
      *(_QWORD *)&s2 = 0;
      BYTE8(s2) = 0;
      v390 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v391 = *(_BYTE *)v390;
      v392 = *(_QWORD *)(v390 + 8);
      *(_BYTE *)v390 = 3;
      *(_QWORD *)(v390 + 8) = v386;
      v503.m128i_i8[0] = v391;
      v503.m128i_i64[1] = v392;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v540 != (char *)&s2 + 8 )
        operator delete(v540, *((_QWORD *)&s2 + 1) + 1LL);
      *(_QWORD *)v501 = 0;
      memset(&v503, 0, 24);
      v502 = 0;
      generate_disasm_line();
      tag_remove();
      v393 = (const char *)v503.m128i_i64[0];
      if ( !v503.m128i_i64[1] )
        v393 = _qstring<char>::c_str(void)const::nullstr;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v394 = (__int64 *)operator new(0x20u);
      v395 = v394;
      *v394 = (__int64)(v394 + 2);
      if ( !v393 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      desta = v394 + 2;
      v396 = strlen(v393);
      v397 = desta;
      v499 = v396;
      v398 = v396;
      if ( v396 > 0xF )
      {
        destb = (void *)v396;
        v401 = std::string::_M_create();
        *v395 = v401;
        v397 = (void *)v401;
        v398 = (size_t)destb;
        v395[2] = v499;
      }
      else
      {
        if ( v396 == 1 )
        {
          *((_BYTE *)v395 + 16) = *v393;
          goto LABEL_457;
        }
        if ( !v396 )
          goto LABEL_457;
      }
      memcpy(v397, v393, v398);
      v396 = v499;
      v397 = (void *)*v395;
LABEL_457:
      v395[1] = v396;
      *((_BYTE *)v397 + v396) = 0;
      v399 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      *(_BYTE *)v399 = 3;
      *(_QWORD *)(v399 + 8) = v395;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v503.m128i_i64[0] )
      {
        v503.m128i_i64[1] = 0;
        qfree();
      }
      if ( *(_QWORD *)v501 )
      {
        *(_QWORD *)&v502 = 0;
        qfree();
      }
LABEL_461:
      if ( !v483 )
      {
        v400 = operator new(0x18u);
        *(_QWORD *)(v400 + 16) = 0;
        v379 = (_QWORD *)v400;
        *(_OWORD *)v400 = 0;
LABEL_463:
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
        goto LABEL_464;
      }
      while ( 1 )
      {
        if ( v379[1] == v379[2] )
          goto LABEL_463;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v379[1] += 16LL;
LABEL_464:
        ++v380;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v380 >= *(_QWORD *)v505 || v380 == 10 )
          break;
        v483 = 2;
        if ( v504[3 * v380 + 1] != -1 )
          goto LABEL_443;
      }
      if ( v379[1] != *v379 )
      {
        v503.m128i_i8[0] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v410 = v503.m128i_i8[0];
        v411 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v412 = v503.m128i_i64[1];
        v413 = *(_BYTE *)v411;
        *(_BYTE *)v411 = v410;
        v414 = *(_QWORD *)(v411 + 8);
        *(_QWORD *)(v411 + 8) = v412;
        v503.m128i_i64[1] = v414;
        v503.m128i_i8[0] = v413;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      goto LABEL_489;
    }
    if ( *(_QWORD *)v505 != 1 && 24LL * *(_QWORD *)v505 != 24 )
    {
      v378 = v504 + 3;
      while ( *v504 == *v378 )
      {
        v378 += 3;
        if ( v378 == &v504[3 * *(_QWORD *)v505] )
          goto LABEL_504;
      }
      goto LABEL_441;
    }
LABEL_504:
    qsnprintf();
    v540 = (char *)&s2 + 8;
    v428 = strlen(v595);
    v503.m128i_i64[0] = v428;
    v429 = v428;
    if ( v428 > 0xF )
    {
      v463 = (_QWORD *)std::string::_M_create();
      v540 = v463;
      *((_QWORD *)&s2 + 1) = v503.m128i_i64[0];
    }
    else
    {
      if ( v428 == 1 )
      {
        BYTE8(s2) = v595[0];
        goto LABEL_507;
      }
      if ( !v428 )
      {
LABEL_507:
        v430 = (char *)&s2 + 8;
LABEL_508:
        *(_QWORD *)&s2 = v428;
        v430[v428] = 0;
        v503 = 0u;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v431 = (_QWORD *)operator new(0x20u);
        v432 = v431 + 2;
        v433 = v431;
        v434 = s2;
        *v431 = v431 + 2;
        if ( v540 == (char *)&s2 + 8 )
        {
          v471 = v434 + 1;
          if ( (unsigned int)(v434 + 1) >= 8 )
          {
            v433[2] = *((_QWORD *)&s2 + 1);
            *(_QWORD *)((char *)v432 + v471 - 8) = *(_QWORD *)((char *)&s2 + v471);
            v472 = (unsigned __int64)(v433 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v473 = (char *)v432 - v472;
            v474 = (char *)((char *)&s2 + 8 - v473);
            v475 = ((_DWORD)v473 + v471) & 0xFFFFFFF8;
            if ( v475 >= 8 )
            {
              v476 = v475 & 0xFFFFFFF8;
              v477 = 0;
              do
              {
                v478 = v477;
                v477 += 8;
                *(_QWORD *)(v472 + v478) = *(_QWORD *)&v474[v478];
              }
              while ( v477 < v476 );
            }
          }
          else if ( (v471 & 4) != 0 )
          {
            *((_DWORD *)v433 + 4) = DWORD2(s2);
            *(_DWORD *)((char *)v432 + v471 - 4) = *(_DWORD *)((char *)&s2 + v471 + 4);
          }
          else if ( (_DWORD)v434 != -1 )
          {
            *((_BYTE *)v433 + 16) = BYTE8(s2);
            if ( (v471 & 2) != 0 )
              *(_WORD *)((char *)v432 + v471 - 2) = *(_WORD *)((char *)&s2 + v471 + 6);
          }
        }
        else
        {
          *v431 = v540;
          v431[2] = *((_QWORD *)&s2 + 1);
        }
        v433[1] = v434;
        v540 = (char *)&s2 + 8;
        *(_QWORD *)&s2 = 0;
        BYTE8(s2) = 0;
        v435 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v436 = *(_BYTE *)v435;
        v437 = *(_QWORD *)(v435 + 8);
        *(_BYTE *)v435 = 3;
        *(_QWORD *)(v435 + 8) = v433;
        v503.m128i_i8[0] = v436;
        v503.m128i_i64[1] = v437;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v540 != (char *)&s2 + 8 )
          operator delete(v540, *((_QWORD *)&s2 + 1) + 1LL);
        v503 = 0u;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v438 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(
          v438,
          "register_tracking",
          v439,
          v440,
          v441,
          v442,
          v482,
          v486,
          v489);
        v443 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v444 = *(_BYTE *)v443;
        v445 = *(_QWORD *)(v443 + 8);
        *(_BYTE *)v443 = 3;
        *(_QWORD *)(v443 + 8) = v438;
        v503.m128i_i8[0] = v444;
        v503.m128i_i64[1] = v445;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( get_func() )
        {
          memset(&v503, 0, 24);
          get_func_name();
          v501[0] = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
          v446 = v501[0];
          v447 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v448 = *(_BYTE *)v447;
          v449 = *(_QWORD *)(v447 + 8);
          *(_BYTE *)v447 = v446;
          *(_QWORD *)(v447 + 8) = v502;
          *(_QWORD *)&v502 = v449;
          v501[0] = v448;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( v503.m128i_i64[0] )
          {
            v503.m128i_i64[1] = 0;
            qfree();
          }
        }
        goto LABEL_441;
      }
      v463 = (_QWORD *)&s2 + 1;
    }
    if ( v429 >= 8 )
    {
      v464 = (unsigned __int64)(v463 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v463 = *(_QWORD *)v595;
      *(_QWORD *)((char *)v463 + v429 - 8) = *(_QWORD *)&v594[v429];
      v465 = (char *)v463 - v464;
      v466 = (char *)(v595 - v465);
      v467 = (v429 + (_DWORD)v465) & 0xFFFFFFF8;
      if ( v467 >= 8 )
      {
        v468 = v467 & 0xFFFFFFF8;
        v469 = 0;
        do
        {
          v470 = v469;
          v469 += 8;
          *(_QWORD *)(v464 + v470) = *(_QWORD *)&v466[v470];
        }
        while ( v469 < v468 );
      }
    }
    else if ( (v429 & 4) != 0 )
    {
      *(_DWORD *)v463 = *(_DWORD *)v595;
      *(_DWORD *)((char *)v463 + v429 - 4) = *(_DWORD *)&v594[v429 + 4];
    }
    else if ( v429 )
    {
      *(_BYTE *)v463 = v595[0];
      if ( (v429 & 2) != 0 )
        *(_WORD *)((char *)v463 + v429 - 2) = *(_WORD *)&v594[v429 + 6];
    }
    v428 = v503.m128i_i64[0];
    v430 = (char *)v540;
    goto LABEL_508;
  }
  v504 = nullptr;
  *(_QWORD *)v505 = 0;
  if ( (unsigned __int8)(BYTE1(v552) - 2) > 2u )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v276 = operator new(0x20u);
    *(_QWORD *)v276 = v276 + 16;
    strcpy((char *)(v276 + 16), "unknown");
    *(_QWORD *)(v276 + 8) = 7;
    v277 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v278 = *(_BYTE *)v277;
    v279 = *(_QWORD *)(v277 + 8);
    *(_BYTE *)v277 = 3;
    *(_QWORD *)(v277 + 8) = v276;
    LOBYTE(v504) = v278;
    *(_QWORD *)v505 = v279;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    goto LABEL_134;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v135 = operator new(0x20u);
  strcpy((char *)(v135 + 16), "memory_indirect");
  *(_QWORD *)v135 = v135 + 16;
  *(_QWORD *)(v135 + 8) = 15;
  v136 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v137 = *(_BYTE *)v136;
  v138 = *(_QWORD *)(v136 + 8);
  *(_BYTE *)v136 = 3;
  *(_QWORD *)(v136 + 8) = v135;
  LOBYTE(v504) = v137;
  *(_QWORD *)v505 = v138;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( *((_QWORD *)&v553 + 1) != -1 )
  {
    qsnprintf();
    v540 = (char *)&s2 + 8;
    v193 = strlen(v599);
    v504 = (_QWORD *)v193;
    v194 = v193;
    if ( v193 > 0xF )
    {
      v335 = (_QWORD *)std::string::_M_create();
      v540 = v335;
      *((_QWORD *)&s2 + 1) = v504;
    }
    else
    {
      if ( v193 == 1 )
      {
        BYTE8(s2) = v599[0];
        goto LABEL_210;
      }
      if ( !v193 )
      {
LABEL_210:
        v195 = (char *)&s2 + 8;
LABEL_211:
        *(_QWORD *)&s2 = v193;
        v195[v193] = 0;
        v504 = nullptr;
        *(_QWORD *)v505 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v196 = (_QWORD *)operator new(0x20u);
        v197 = v196 + 2;
        v198 = v196;
        v199 = s2;
        *v196 = v196 + 2;
        if ( v540 == (char *)&s2 + 8 )
        {
          v340 = v199 + 1;
          if ( (unsigned int)(v199 + 1) >= 8 )
          {
            v423 = (unsigned __int64)(v196 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v196[2] = *((_QWORD *)&s2 + 1);
            *(_QWORD *)((char *)v197 + v340 - 8) = *(_QWORD *)((char *)&s2 + v340);
            v424 = (char *)((char *)&s2 + 8 - ((char *)v197 - v423));
            if ( ((v340 + (_DWORD)v197 - (_DWORD)v423) & 0xFFFFFFF8) >= 8 )
            {
              v425 = (v340 + (_DWORD)v197 - v423) & 0xFFFFFFF8;
              v426 = 0;
              do
              {
                v427 = v426;
                v426 += 8;
                *(_QWORD *)(v423 + v427) = *(_QWORD *)&v424[v427];
              }
              while ( v426 < v425 );
            }
          }
          else if ( (v340 & 4) != 0 )
          {
            *((_DWORD *)v196 + 4) = DWORD2(s2);
            *(_DWORD *)((char *)v197 + v340 - 4) = *(_DWORD *)((char *)&s2 + v340 + 4);
          }
          else if ( (_DWORD)v199 != -1 )
          {
            *((_BYTE *)v196 + 16) = BYTE8(s2);
            if ( (v340 & 2) != 0 )
              *(_WORD *)((char *)v197 + v340 - 2) = *(_WORD *)((char *)&s2 + v340 + 6);
          }
        }
        else
        {
          *v196 = v540;
          v196[2] = *((_QWORD *)&s2 + 1);
        }
        v198[1] = v199;
        v540 = (char *)&s2 + 8;
        *(_QWORD *)&s2 = 0;
        BYTE8(s2) = 0;
        v200 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v201 = *(_BYTE *)v200;
        v202 = *(_QWORD *)(v200 + 8);
        *(_BYTE *)v200 = 3;
        *(_QWORD *)(v200 + 8) = v198;
        LOBYTE(v504) = v201;
        *(_QWORD *)v505 = v202;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v540 != (char *)&s2 + 8 )
          operator delete(v540, *((_QWORD *)&s2 + 1) + 1LL);
        goto LABEL_134;
      }
      v335 = (_QWORD *)&s2 + 1;
    }
    if ( v194 >= 8 )
    {
      *v335 = *(_QWORD *)v599;
      *(_QWORD *)((char *)v335 + v194 - 8) = *(_QWORD *)&v598[v194];
      v355 = (unsigned __int64)(v335 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v356 = (char *)v335 - v355;
      v357 = (char *)(v599 - v356);
      v358 = (v194 + (_DWORD)v356) & 0xFFFFFFF8;
      if ( v358 >= 8 )
      {
        v359 = v358 & 0xFFFFFFF8;
        v360 = 0;
        do
        {
          v361 = v360;
          v360 += 8;
          *(_QWORD *)(v355 + v361) = *(_QWORD *)&v357[v361];
        }
        while ( v360 < v359 );
      }
    }
    else if ( (v194 & 4) != 0 )
    {
      *(_DWORD *)v335 = *(_DWORD *)v599;
      *(_DWORD *)((char *)v335 + v194 - 4) = *(_DWORD *)&v598[v194 + 4];
    }
    else if ( v194 )
    {
      *(_BYTE *)v335 = v599[0];
      if ( (v194 & 2) != 0 )
        *(_WORD *)((char *)v335 + v194 - 2) = *(_WORD *)&v598[v194 + 6];
    }
    v193 = (size_t)v504;
    v195 = (char *)v540;
    goto LABEL_211;
  }
LABEL_134:
  v501[0] = 0;
  *(_QWORD *)&v502 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v139 = v501[0];
  v140 = (_QWORD *)v502;
  for ( i = xrefblk_t_first_from(); ; i = xrefblk_t_next_from() )
  {
    if ( !i )
      goto LABEL_153;
    if ( v139 == 1 )
    {
      v152 = v140[5];
      goto LABEL_152;
    }
    if ( v139 == 2 )
    {
LABEL_151:
      v139 = 2;
      v152 = (__int64)(v140[1] - *v140) >> 4;
LABEL_152:
      if ( v152 > 0x63 )
        goto LABEL_153;
    }
    if ( v505[8] )
      break;
  }
  qsnprintf();
  v536 = &v537[2];
  v142 = strlen(v601);
  v503.m128i_i64[0] = v142;
  v143 = v142;
  if ( v142 > 0xF )
  {
    v480 = v142;
    v163 = (int *)std::string::_M_create();
    v143 = v480;
    v536 = v163;
    *(_QWORD *)&v537[2] = v503.m128i_i64[0];
  }
  else
  {
    if ( v142 == 1 )
    {
      LOBYTE(v537[2]) = v601[0];
      goto LABEL_142;
    }
    if ( !v142 )
    {
LABEL_142:
      v144 = &v537[2];
      goto LABEL_143;
    }
    v163 = &v537[2];
  }
  if ( v143 >= 8 )
  {
    *(_QWORD *)v163 = *(_QWORD *)v601;
    *(_QWORD *)((char *)v163 + v143 - 8) = *(_QWORD *)&v600[v143];
    v165 = (unsigned __int64)(v163 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    v166 = (char *)v163 - v165;
    v167 = (char *)(v601 - v166);
    v168 = ((_DWORD)v166 + v143) & 0xFFFFFFF8;
    if ( v168 >= 8 )
    {
      v169 = v168 & 0xFFFFFFF8;
      v170 = 0;
      do
      {
        v171 = v170;
        v170 += 8;
        *(_QWORD *)(v165 + v171) = *(_QWORD *)&v167[v171];
      }
      while ( v170 < v169 );
    }
  }
  else if ( (v143 & 4) != 0 )
  {
    *v163 = *(_DWORD *)v601;
    *(int *)((char *)v163 + v143 - 4) = *(_DWORD *)&v600[v143 + 4];
  }
  else if ( v143 )
  {
    *(_BYTE *)v163 = v601[0];
    if ( (v143 & 2) != 0 )
      *(_WORD *)((char *)v163 + v143 - 2) = *(_WORD *)&v600[v143 + 6];
  }
  v142 = v503.m128i_i64[0];
  v144 = (int *)v536;
LABEL_143:
  *(_QWORD *)v537 = v142;
  *((_BYTE *)v144 + v142) = 0;
  v503 = 0u;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v145 = (_QWORD *)operator new(0x20u);
  v146 = v145 + 2;
  v147 = (__int64)v145;
  v148 = *(_QWORD *)v537;
  *v145 = v145 + 2;
  if ( v536 == &v537[2] )
  {
    v164 = v148 + 1;
    if ( (unsigned int)(v148 + 1) >= 8 )
    {
      *v146 = *(_QWORD *)&v537[2];
      *(_QWORD *)((char *)v146 + v164 - 8) = *(_QWORD *)((char *)v537 + v164);
      v179 = (v147 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      v180 = (char *)v146 - v179;
      v181 = (char *)((char *)&v537[2] - v180);
      v182 = ((_DWORD)v180 + v164) & 0xFFFFFFF8;
      if ( v182 >= 8 )
      {
        v183 = v182 & 0xFFFFFFF8;
        v184 = 0;
        do
        {
          v185 = v184;
          v184 += 8;
          *(_QWORD *)(v179 + v185) = *(_QWORD *)&v181[v185];
        }
        while ( v184 < v183 );
      }
    }
    else if ( (v164 & 4) != 0 )
    {
      *(_DWORD *)v146 = v537[2];
      *(_DWORD *)((char *)v146 + v164 - 4) = *(int *)((char *)&v537[1] + v164);
    }
    else if ( (_DWORD)v148 != -1 )
    {
      *(_BYTE *)v146 = v537[2];
      if ( (v164 & 2) != 0 )
        *(_WORD *)((char *)v146 + v164 - 2) = *(_WORD *)((char *)&v537[1] + v164 + 2);
    }
  }
  else
  {
    *v145 = v536;
    v145[2] = *(_QWORD *)&v537[2];
  }
  *(_QWORD *)(v147 + 8) = v148;
  v536 = &v537[2];
  *(_QWORD *)v537 = 0;
  LOBYTE(v537[2]) = 0;
  if ( !v139 )
  {
    v149 = operator new(0x18u);
    *(_QWORD *)(v149 + 16) = 0;
    v140 = (_QWORD *)v149;
    *(_OWORD *)v149 = 0;
LABEL_147:
    v503.m128i_i8[0] = 3;
    v503.m128i_i64[1] = v147;
    std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    v150 = v503.m128i_i8[0];
    v151 = v503.m128i_i64[1];
    goto LABEL_148;
  }
  if ( v139 != 2 )
  {
    v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
      v4,
      308);
    std::string::_M_dispose();
    __cxa_throw(
      v4,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v177 = v140[1];
  if ( v177 == v140[2] )
    goto LABEL_147;
  v503.m128i_i8[0] = 3;
  v178 = v177 + 16;
  v150 = 0;
  v503.m128i_i64[1] = v147;
  *(__m128i *)(v178 - 16) = _mm_load_si128(&v503);
  v140[1] = v178;
  v151 = 0;
LABEL_148:
  v503.m128i_i8[0] = v150;
  v503.m128i_i64[1] = v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v536 != &v537[2] )
    operator delete(v536, *(_QWORD *)&v537[2] + 1LL);
  if ( (unsigned __int8)xrefblk_t_next_from() )
    goto LABEL_151;
  v139 = 2;
LABEL_153:
  v503.m128i_i8[0] = 0;
  v501[0] = v139;
  *(_QWORD *)&v502 = v140;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v153 = v503.m128i_i8[0];
  v154 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v155 = v503.m128i_i64[1];
  v156 = *(_BYTE *)v154;
  *(_BYTE *)v154 = v153;
  v157 = *(_QWORD *)(v154 + 8);
  *(_QWORD *)(v154 + 8) = v155;
  v503.m128i_i64[1] = v157;
  v503.m128i_i8[0] = v156;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v139 == 1 )
  {
    v158 = v140[5];
  }
  else if ( v139 == 2 )
  {
    v158 = (__int64)(v140[1] - *v140) >> 4;
  }
  else
  {
    v158 = v139 != 0;
  }
  v159 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v160 = *(_BYTE *)v159;
  v161 = *(_QWORD *)(v159 + 8);
  *(_BYTE *)v159 = 6;
  v503.m128i_i8[0] = v160;
  *(_QWORD *)(v159 + 8) = v158;
  v503.m128i_i64[1] = v161;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_157:
  if ( v517 )
  {
    *(_QWORD *)&v518 = 0;
    qfree();
  }
  return a1;
}

