// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall ida_mcp::tools::hexrays::decompile_function(__int64 a1, __int64 a2)
{
  void *v2; // rax
  unsigned __int64 v3; // rbx
  void *v4; // r14
  std::runtime_error *v5; // rbx
  std::runtime_error *v6; // rbx
  std::runtime_error *exception; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *v8; // r14
  char *v9; // rax
  std::runtime_error *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r13
  size_t v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // r12
  _BYTE *v18; // rbx
  __int64 *v19; // rbx
  int *v20; // rax
  int *v21; // r15
  __int64 v22; // r9
  void **func; // rbx
  __int64 v24; // rax
  __int64 v25; // r12
  void *v26; // rax
  int v27; // r13d
  char *v28; // rax
  int v29; // r8d
  int v30; // r9d
  unsigned int v31; // ecx
  void (__fastcall **v32)(void **, void **, __int64); // rdx
  int v33; // ecx
  void *v34; // rax
  void *v35; // r12
  _QWORD *v36; // rax
  unsigned __int64 v37; // rdx
  char *v38; // rax
  char *v39; // r12
  unsigned int v40; // ecx
  void *v41; // r10
  unsigned int v42; // ecx
  unsigned int v43; // eax
  __int64 v44; // rsi
  unsigned __int64 v45; // rax
  const char *v46; // rdx
  const char *v47; // r12
  const char *v48; // r14
  const char *v49; // r11
  const char *v50; // rdx
  const char *v51; // rax
  const char *v52; // r15
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  char *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  char *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 *v65; // r14
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  const char *v70; // rax
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
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 *v87; // r14
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 *v95; // r14
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 *v103; // rbx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 *v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 *v123; // rbx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  char *v128; // rax
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 *v132; // rbx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  char *v148; // rax
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  const __m128i *v152; // rsi
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 (__fastcall *hexdsp)(__int64, __m256i *, void **, __int64); // rax
  __int64 (__fastcall *v161)(__int64, struct _Unwind_Exception *); // rax
  __int64 v162; // r14
  unsigned __int64 v163; // r13
  size_t v164; // r15
  _BYTE *v165; // rsi
  __int64 v166; // r8
  size_t v167; // r9
  unsigned __int64 v168; // rdx
  _BYTE *v169; // rsi
  __int64 v170; // rax
  __int64 v171; // r15
  __int64 v172; // rdx
  unsigned __int8 (__fastcall *v173)(__int64, struct _Unwind_Exception *, char **); // rax
  __int64 (__fastcall *v174)(__int64, struct _Unwind_Exception *); // rax
  __int64 v175; // rax
  __int64 v176; // rax
  char *v177; // rax
  __int64 v178; // rax
  char *v179; // rax
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  void **v183; // r12
  const char *v184; // rcx
  char *v185; // rax
  __int64 v186; // rax
  __int64 *v187; // rbx
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // rax
  char *v193; // rax
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  void **v197; // rbx
  size_t v198; // rax
  size_t v199; // r15
  size_t v200; // r12
  char *v201; // rax
  int v202; // r8d
  int v203; // r9d
  char *v204; // rdi
  __int64 v205; // rax
  size_t v206; // r14
  __int64 v207; // rsi
  __int64 v208; // r10
  __int64 v209; // r8
  unsigned __int64 v210; // rdx
  __int64 v211; // r13
  __int8 v212; // r12
  void (__fastcall *v213)(__int64, char **, void **); // rax
  unsigned __int64 v214; // r13
  unsigned __int64 v215; // r9
  int v216; // r12d
  char *v217; // r14
  int v218; // r8d
  int v219; // r9d
  unsigned __int64 head; // rax
  unsigned __int64 v221; // r14
  unsigned __int64 v222; // rax
  const char *v223; // r8
  __int64 v224; // r9
  char *v225; // r14
  const char *v226; // r13
  char *v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  char *v231; // rax
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  char *v235; // rax
  __int64 v236; // rcx
  __int64 v237; // r8
  __int64 v238; // r9
  __int64 v239; // rax
  __int64 v240; // rcx
  __int64 v241; // r8
  __int64 v242; // r9
  __int64 *v243; // r13
  __int64 v244; // rax
  char *v245; // rdx
  __m128i si128; // xmm0
  char *v247; // rax
  __int64 v248; // rdx
  __int64 v249; // rdx
  __int64 v250; // rcx
  __int64 v251; // r8
  __int64 v252; // r9
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  char *v256; // rax
  __int64 v257; // rcx
  __int64 v258; // r8
  __int64 v259; // r9
  _BYTE *v260; // rax
  __int64 v261; // rcx
  __int64 v262; // r8
  __int64 v263; // r9
  __int64 v264; // rcx
  __int64 v265; // r8
  __int64 v266; // r9
  __int64 *v267; // r14
  __int64 v268; // rdx
  __int64 v269; // rcx
  __int64 v270; // r8
  __int64 v271; // r9
  __int64 v272; // rcx
  __int64 v273; // r8
  __int64 v274; // r9
  __int64 v275; // rcx
  __int64 v276; // r8
  __int64 v277; // r9
  __int64 v278; // rcx
  __int64 v279; // r8
  __int64 v280; // r9
  void **v281; // r14
  void (__fastcall *v282)(__int64, const char *); // rax
  __int64 (__fastcall *v283)(__int64, void *, void **, __int64); // rax
  __int64 v284; // r13
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // r9
  char *v288; // rax
  __int64 v289; // rcx
  __int64 v290; // r8
  __int64 v291; // r9
  __int64 v292; // rcx
  __int64 v293; // r8
  __int64 v294; // r9
  __int64 v295; // rcx
  __int64 v296; // r8
  __int64 v297; // r9
  __int64 v298; // rcx
  __int64 v299; // r8
  __int64 v300; // r9
  __int64 v301; // rdx
  __int64 v302; // rcx
  __int64 v303; // r8
  __int64 v304; // r9
  __m128i v305; // xmm0
  int v306; // eax
  __int64 v307; // rcx
  __int64 v308; // r8
  __int64 v309; // r9
  __int64 v310; // rcx
  __int64 v311; // r8
  __int64 v312; // r9
  __int64 v313; // rcx
  __int64 v314; // r8
  __int64 v315; // r9
  void **v316; // r14
  char *v317; // rax
  __int64 v318; // rcx
  __int64 v319; // r8
  __int64 v320; // r9
  __int64 v321; // rcx
  __int64 v322; // r8
  __int64 v323; // r9
  __int64 v324; // rcx
  __int64 v325; // r8
  __int64 v326; // r9
  __int64 v327; // rax
  int v328; // eax
  __int64 v329; // rcx
  __int64 v330; // r8
  __int64 v331; // r9
  __int64 v332; // rcx
  __int64 v333; // r8
  __int64 v334; // r9
  __int64 v335; // rcx
  __int64 v336; // r8
  __int64 v337; // r9
  void **v338; // r14
  const char *v339; // [rsp+20h] [rbp-11600h]
  const char *v340; // [rsp+28h] [rbp-115F8h]
  const char *v341; // [rsp+30h] [rbp-115F0h]
  __int64 extlang; // [rsp+30h] [rbp-115F0h]
  const char *v343; // [rsp+40h] [rbp-115E0h]
  const char *v344; // [rsp+48h] [rbp-115D8h]
  const char *v345; // [rsp+50h] [rbp-115D0h]
  unsigned __int8 is_go_pathological_func; // [rsp+50h] [rbp-115D0h]
  const char *v347; // [rsp+58h] [rbp-115C8h]
  const char *v348; // [rsp+60h] [rbp-115C0h]
  char v349; // [rsp+68h] [rbp-115B8h]
  __int64 v350; // [rsp+68h] [rbp-115B8h]
  bool v351; // [rsp+70h] [rbp-115B0h]
  unsigned int v352; // [rsp+78h] [rbp-115A8h]
  signed __int64 v353; // [rsp+78h] [rbp-115A8h]
  size_t v354; // [rsp+78h] [rbp-115A8h]
  __int64 v355; // [rsp+78h] [rbp-115A8h]
  const char *v356; // [rsp+78h] [rbp-115A8h]
  __m128i v357; // [rsp+80h] [rbp-115A0h] BYREF
  const __m128i *v358; // [rsp+90h] [rbp-11590h]
  const __m128i *v359; // [rsp+98h] [rbp-11588h]
  struct _Unwind_Exception *v360; // [rsp+A0h] [rbp-11580h]
  void **v361; // [rsp+A8h] [rbp-11578h]
  void *v362[2]; // [rsp+B0h] [rbp-11570h] BYREF
  __int64 v363; // [rsp+C0h] [rbp-11560h]
  __int64 v364; // [rsp+C8h] [rbp-11558h]
  char *v365; // [rsp+D0h] [rbp-11550h]
  char *v366; // [rsp+D8h] [rbp-11548h]
  const char *v367; // [rsp+E0h] [rbp-11540h]
  char *v368; // [rsp+E8h] [rbp-11538h]
  __int64 v369; // [rsp+F0h] [rbp-11530h]
  __int64 v370; // [rsp+F8h] [rbp-11528h]
  char *v371; // [rsp+100h] [rbp-11520h] BYREF
  __int128 v372; // [rsp+108h] [rbp-11518h]
  char *v373; // [rsp+120h] [rbp-11500h] BYREF
  __int128 v374; // [rsp+128h] [rbp-114F8h]
  void *dest; // [rsp+140h] [rbp-114E0h] BYREF
  __int128 v376; // [rsp+148h] [rbp-114D8h]
  __int64 v377; // [rsp+160h] [rbp-114C0h] BYREF
  __int128 v378; // [rsp+168h] [rbp-114B8h]
  __m256i src; // [rsp+180h] [rbp-114A0h] BYREF
  void *v380; // [rsp+1A0h] [rbp-11480h] BYREF
  __int128 v381; // [rsp+1A8h] [rbp-11478h]
  __int128 v382; // [rsp+1B8h] [rbp-11468h]
  char v383; // [rsp+1D0h] [rbp-11450h] BYREF
  __int64 v384[4]; // [rsp+1F0h] [rbp-11430h] BYREF
  __int64 v385[4]; // [rsp+210h] [rbp-11410h] BYREF
  char v386[8]; // [rsp+230h] [rbp-113F0h] BYREF
  __int64 v387; // [rsp+240h] [rbp-113E0h]
  __int64 v388; // [rsp+258h] [rbp-113C8h]
  char *v389; // [rsp+260h] [rbp-113C0h] BYREF
  __int128 v390; // [rsp+268h] [rbp-113B8h] BYREF
  __int64 v391; // [rsp+288h] [rbp-11398h]
  char v392[8]; // [rsp+290h] [rbp-11390h] BYREF
  __int64 v393; // [rsp+2A0h] [rbp-11380h]
  __int64 v394; // [rsp+2B8h] [rbp-11368h]
  char v395[8]; // [rsp+2C0h] [rbp-11360h] BYREF
  __int128 v396; // [rsp+2C8h] [rbp-11358h]
  __int64 v397; // [rsp+2E8h] [rbp-11338h]
  char v398[8]; // [rsp+2F0h] [rbp-11330h] BYREF
  __int128 v399; // [rsp+2F8h] [rbp-11328h]
  char v400; // [rsp+308h] [rbp-11318h]
  __int128 v401; // [rsp+310h] [rbp-11310h]
  char v402; // [rsp+320h] [rbp-11300h] BYREF
  __int128 v403; // [rsp+328h] [rbp-112F8h]
  __int64 v404; // [rsp+338h] [rbp-112E8h]
  __int64 v405; // [rsp+340h] [rbp-112E0h]
  __int64 v406; // [rsp+348h] [rbp-112D8h]
  char v407; // [rsp+350h] [rbp-112D0h] BYREF
  __int128 v408; // [rsp+358h] [rbp-112C8h]
  char v409; // [rsp+368h] [rbp-112B8h]
  signed __int64 v410; // [rsp+370h] [rbp-112B0h]
  __int64 v411; // [rsp+378h] [rbp-112A8h]
  char v412[8]; // [rsp+380h] [rbp-112A0h] BYREF
  __int128 v413; // [rsp+388h] [rbp-11298h]
  char v414; // [rsp+398h] [rbp-11288h]
  __m128i v415; // [rsp+3A0h] [rbp-11280h]
  char v416; // [rsp+3B0h] [rbp-11270h] BYREF
  __int128 v417; // [rsp+3B8h] [rbp-11268h]
  __int64 v418; // [rsp+3D8h] [rbp-11248h]
  char v419; // [rsp+3E0h] [rbp-11240h] BYREF
  __int128 v420; // [rsp+3E8h] [rbp-11238h]
  char v421; // [rsp+3F8h] [rbp-11228h]
  __int128 v422; // [rsp+400h] [rbp-11220h]
  char v423; // [rsp+410h] [rbp-11210h] BYREF
  __int128 v424; // [rsp+418h] [rbp-11208h]
  __int64 v425; // [rsp+428h] [rbp-111F8h]
  __int64 v426; // [rsp+430h] [rbp-111F0h]
  __int64 v427; // [rsp+438h] [rbp-111E8h]
  __int64 v428; // [rsp+440h] [rbp-111E0h] BYREF
  __m128i v429; // [rsp+448h] [rbp-111D8h]
  char v430; // [rsp+458h] [rbp-111C8h]
  __int64 v431; // [rsp+460h] [rbp-111C0h]
  __int64 v432; // [rsp+468h] [rbp-111B8h]
  __int64 *v433; // [rsp+470h] [rbp-111B0h] BYREF
  unsigned __int64 v434; // [rsp+478h] [rbp-111A8h]
  __int64 v435; // [rsp+480h] [rbp-111A0h] BYREF
  char v436; // [rsp+488h] [rbp-11198h] BYREF
  __int128 v437; // [rsp+490h] [rbp-11190h]
  void *v438[2]; // [rsp+4A0h] [rbp-11180h] BYREF
  void (__fastcall *v439)(void **, void **, __int64); // [rsp+4B0h] [rbp-11170h] BYREF
  _QWORD v440[2]; // [rsp+4B8h] [rbp-11168h] BYREF
  __int64 v441; // [rsp+4C8h] [rbp-11158h]
  _QWORD v442[2]; // [rsp+4D0h] [rbp-11150h] BYREF
  __int64 v443; // [rsp+4E0h] [rbp-11140h]
  _QWORD v444[2]; // [rsp+4E8h] [rbp-11138h] BYREF
  __int64 v445; // [rsp+4F8h] [rbp-11128h]
  _QWORD v446[2]; // [rsp+500h] [rbp-11120h] BYREF
  __int64 v447; // [rsp+510h] [rbp-11110h]
  _QWORD v448[2]; // [rsp+518h] [rbp-11108h] BYREF
  __int64 v449; // [rsp+528h] [rbp-110F8h]
  _QWORD v450[2]; // [rsp+530h] [rbp-110F0h] BYREF
  __int64 v451; // [rsp+540h] [rbp-110E0h]
  _QWORD v452[2]; // [rsp+548h] [rbp-110D8h] BYREF
  __int64 v453; // [rsp+558h] [rbp-110C8h]
  _QWORD v454[2]; // [rsp+560h] [rbp-110C0h] BYREF
  __int64 v455; // [rsp+570h] [rbp-110B0h]
  _QWORD v456[2]; // [rsp+578h] [rbp-110A8h] BYREF
  __int64 v457; // [rsp+588h] [rbp-11098h]
  _QWORD v458[3]; // [rsp+590h] [rbp-11090h] BYREF
  _QWORD v459[3]; // [rsp+5A8h] [rbp-11078h] BYREF
  _QWORD v460[3]; // [rsp+5C0h] [rbp-11060h] BYREF
  char v461[24]; // [rsp+5E0h] [rbp-11040h] BYREF
  char v462[4072]; // [rsp+5F8h] [rbp-11028h] BYREF
  char s[59848]; // [rsp+15E0h] [rbp-10040h] BYREF
  const char *v464; // [rsp+FFA8h] [rbp-1678h]
  const char *v465; // [rsp+FFB0h] [rbp-1670h]
  const char *v466; // [rsp+FFB8h] [rbp-1668h]
  const char *v467; // [rsp+FFC0h] [rbp-1660h]
  const char *v468; // [rsp+FFC8h] [rbp-1658h]
  const char *v469; // [rsp+FFD0h] [rbp-1650h]
  const char *v470; // [rsp+FFD8h] [rbp-1648h]
  const char *v471; // [rsp+FFE0h] [rbp-1640h]
  char *v472; // [rsp+FFE8h] [rbp-1638h]
  const char *v473; // [rsp+FFF0h] [rbp-1630h]
  const char *v474; // [rsp+FFF8h] [rbp-1628h]
  __int64 v475; // [rsp+10000h] [rbp-1620h]
  __int64 v476; // [rsp+10008h] [rbp-1618h]
  __int64 v477; // [rsp+10010h] [rbp-1610h]
  __int64 v478; // [rsp+10018h] [rbp-1608h]
  int v479; // [rsp+10020h] [rbp-1600h]
  int v480; // [rsp+10028h] [rbp-15F8h]
  __int64 v481; // [rsp+10030h] [rbp-15F0h]
  int v482; // [rsp+10038h] [rbp-15E8h]
  int v483; // [rsp+10040h] [rbp-15E0h]
  int v484; // [rsp+10048h] [rbp-15D8h]
  int v485; // [rsp+10050h] [rbp-15D0h]
  char v486; // [rsp+10058h] [rbp-15C8h]
  __int64 v487; // [rsp+10060h] [rbp-15C0h]
  int v488; // [rsp+10068h] [rbp-15B8h]
  __int64 v489; // [rsp+10070h] [rbp-15B0h]
  _QWORD v490[517]; // [rsp+105F8h] [rbp-1028h] BYREF

  while ( v490 != (_QWORD *)v462 )
    ;
  v357.m128i_i64[1] = a1;
  v490[510] = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_303;
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_QWORD *)(v11 + 16);
  if ( !v12 )
    goto LABEL_303;
  v13 = v11 + 8;
  v14 = v11 + 8;
  do
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(v12 + 40);
      if ( !v17 )
        break;
      v15 = 7;
      if ( v17 <= 7 )
        v15 = *(_QWORD *)(v12 + 40);
      v16 = memcmp(*(const void **)(v12 + 32), "address", v15);
      if ( v16 || (v16 = v17 - 7, (__int64)(v17 - 7) <= 0x7FFFFFFF) )
      {
        if ( v16 < 0 )
          break;
      }
      v14 = v12;
      v12 = *(_QWORD *)(v12 + 16);
      if ( !v12 )
        goto LABEL_13;
    }
    v12 = *(_QWORD *)(v12 + 24);
  }
  while ( v12 );
LABEL_13:
  if ( v13 == v14
    || std::string::compare(*(void **)(v14 + 32), *(_QWORD *)(v14 + 40), "address") > 0
    || *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
  {
LABEL_303:
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Missing required parameter: address");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  LOBYTE(v435) = 0;
  v434 = 0;
  v18 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v359 = (const __m128i *)&v433;
  v433 = &v435;
  if ( *v18 != 3 )
  {
    v8 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v18 )
    {
      case 0:
        v9 = "null";
        break;
      case 1:
        v9 = "object";
        break;
      case 2:
        v9 = (char *)"array";
        break;
      case 3:
        v9 = "string";
        break;
      case 4:
        v9 = "boolean";
        break;
      case 8:
        v9 = "binary";
        break;
      case 9:
        v9 = "discarded";
        break;
      default:
        v9 = "number";
        break;
    }
    v380 = v9;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v8,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v8,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v19 = v433;
  if ( v434 > 2 && *(_BYTE *)v433 == 48 && (*((_BYTE *)v433 + 1) & 0xDF) == 0x58 )
    v19 = (__int64 *)((char *)v433 + 2);
  v20 = __errno_location();
  *v20 = 0;
  v21 = v20;
  v361 = &v380;
  v358 = (const __m128i *)__isoc23_strtoull();
  if ( v19 == v380 || *(_BYTE *)v380 || (v351 = &v358->m128i_i8[1] == nullptr && *v21 == 34) )
  {
    std::string::_M_dispose();
    v10 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v10, "Invalid address");
    __cxa_throw(
      v10,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  std::string::_M_dispose();
  if ( (unsigned int)callui(&byte_7, 0xDEC0DE00000004LL, v361, 0, &callui, v22, v475, v476, v477, v478) != 14598366 )
  {
    v5 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v5, "Hexrays decompiler not available (check license)");
    __cxa_throw(
      v5,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  ida_mcp::tools::cpp_class_recovery::ensure_recovery_done((ida_mcp::tools::cpp_class_recovery *)&byte_7);
  func = (void **)get_func();
  if ( !func )
  {
    v6 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v6, "Address is not in a function");
    __cxa_throw(
      v6,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v24 = getseg();
  if ( v24 && *(_BYTE *)(v24 + 184) == 1 )
  {
    v377 = 0;
    get_func_name();
    memset(&src, 0, 24);
    get_segm_name();
    v380 = nullptr;
    v381 = 0;
    ida_mcp::format_ea[abi:cxx11]();
    _qstring<char>::sprnt(
      (int)v361,
      (int)"// ============================================================\n"
           "// EXTERNAL IMPORT\n"
           "// ============================================================\n"
           "// Address:  %s\n"
           "// Name:     %s\n"
           "// Segment:  %s (SEG_XTRN)\n"
           "// Note:     This is an extern symbol resolved at link/load time.\n"
           "//           No code body exists in this binary; calls to %s are\n"
           "//           dispatched through GOT/IAT to the dynamic library.\n"
           "// ============================================================\n"
           "\n"
           "extern void %s(/* see import library declaration */);\n",
      (int)v438[0],
      (int)"<anonymous>",
      (int)"<unnamed>",
      (int)"<anonymous>",
      (char)"extern_func");
    std::string::_M_dispose();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
    *((_QWORD *)&v403 + 1) = 0;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    v406 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v438,
      (const __m128i *)&v402);
    v439 = nullptr;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[14],char [14],0>();
    *((_QWORD *)&v408 + 1) = 0;
    v371 = _qstring<char>::c_str(void)const::nullstr;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
    v411 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v440,
      (const __m128i *)&v407);
    v441 = 0;
    v358 = (const __m128i *)v412;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
    *((_QWORD *)&v413 + 1) = 0;
    v185 = (char *)v380;
    if ( !(_QWORD)v381 )
      v185 = _qstring<char>::c_str(void)const::nullstr;
    v373 = v185;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
    v415.m128i_i64[1] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v442,
      v358);
    v443 = 0;
    *(_QWORD *)&v417 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v416 = 3;
    v186 = operator new(0x20u);
    *(_QWORD *)v186 = v186 + 16;
    strcpy((char *)(v186 + 16), "signature");
    *(_QWORD *)(v186 + 8) = 9;
    v417 = (unsigned __int64)v186;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[7],char [7],0>();
    v418 = 0;
    v361 = (void **)&v416;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v444,
      (const __m128i *)&v416);
    v445 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v419 = 3;
    v187 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v187,
      "decompilation_method",
      v188,
      v189,
      v190,
      v191,
      v475,
      v476,
      v477);
    v420 = (unsigned __int64)v187;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[14],char [14],0>();
    *((_QWORD *)&v422 + 1) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v446,
      (const __m128i *)&v419);
    v447 = 0;
    *(_QWORD *)&v424 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v423 = 3;
    v192 = operator new(0x20u);
    *(_QWORD *)v192 = v192 + 16;
    strcpy((char *)(v192 + 16), "is_extern");
    *(_QWORD *)(v192 + 8) = 9;
    v425 = 4;
    v426 = 1;
    v427 = 0;
    v424 = (unsigned __int64)v192;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v448,
      (const __m128i *)&v423);
    v449 = 0;
    v362[0] = &v428;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
    v429.m128i_i64[1] = 0;
    v193 = (char *)src.m256i_i64[0];
    if ( !src.m256i_i64[1] )
      v193 = _qstring<char>::c_str(void)const::nullstr;
    dest = v193;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
    v432 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v450,
      (const __m128i *)v362[0]);
    v451 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
    v435 = 0;
    v436 = 5;
    v437 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v452,
      v359);
    v453 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      (_QWORD *)v357.m128i_i64[1],
      (__int64)v438,
      8,
      v194,
      v195,
      v196,
      v475,
      v476,
      v477,
      v478,
      v479,
      v480,
      v481,
      v482,
      v483,
      v484,
      v485,
      v486,
      v487,
      v488,
      v489);
    v197 = (void **)v454;
    do
    {
      v197 -= 3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v197 != v438 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
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
    if ( v380 )
    {
      *(_QWORD *)&v381 = 0;
      qfree();
    }
    if ( src.m256i_i64[0] )
    {
      src.m256i_i64[1] = 0;
      qfree();
    }
    if ( v377 )
    {
      *(_QWORD *)&v378 = 0;
      qfree();
    }
    return v357.m128i_i64[1];
  }
  v25 = (unsigned __int64)func[2] & 0x80;
  if ( ((unsigned int)func[2] & 0x80) == 0 )
  {
    *(_QWORD *)&v390 = 0;
    v389 = (char *)&v390 + 8;
    BYTE8(v390) = 0;
    is_go_pathological_func = ida_mcp::is_go_pathological_func();
    *(_OWORD *)v362 = (unsigned __int64)func;
    if ( is_go_pathological_func )
    {
      v2 = __cxa_allocate_exception(0x10u);
      v3 = v390;
      v4 = v2;
      v438[1] = nullptr;
      v438[0] = &v439;
      LOBYTE(v439) = 0;
      std::string::reserve();
      if ( (unsigned __int64)v438[1] - 0x7FFFFFFFFFFFFFBBLL > 0x43 )
      {
        std::string::_M_append();
        if ( 0x7FFFFFFFFFFFFFFELL - (unsigned __int64)v438[1] >= v3 )
        {
          std::string::_M_append();
          std::runtime_error::runtime_error();
          std::string::_M_dispose();
          __cxa_throw(
            v4,
            (struct type_info *)&`typeinfo for'std::runtime_error,
            (void (*)(void *))&std::runtime_error::~runtime_error);
        }
        std::__throw_length_error("basic_string::append");
      }
      std::__throw_length_error("basic_string::append");
    }
    v380 = nullptr;
    v381 = 0xFFFFFFFFFFFFFFFFLL;
    v382 = 0;
    *(_OWORD *)src.m256i_i8 = (unsigned __int64)func;
    *(_OWORD *)&src.m256i_u64[2] = 0;
    hexdsp = (__int64 (__fastcall *)(__int64, __m256i *, void **, __int64))get_hexdsp();
    v362[0] = &src;
    v360 = (struct _Unwind_Exception *)hexdsp(566, &src, v361, 1);
    if ( src.m256i_i64[1] )
    {
      src.m256i_i64[2] = 0;
      qfree();
    }
    if ( v360 )
      goto LABEL_122;
    if ( (_DWORD)v380 == -29 )
    {
      if ( !ida_mcp::tools::hexrays::decompile_function(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::maxfuncsize_bumped )
      {
        v282 = (void (__fastcall *)(__int64, const char *))get_hexdsp();
        v282(434, "MAX_FUNCSIZE = 16384");
        ida_mcp::tools::hexrays::decompile_function(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::maxfuncsize_bumped = 1;
      }
      LODWORD(v380) = 0;
      *(_QWORD *)&v381 = -1;
      if ( *((_QWORD *)&v381 + 1) )
      {
        *(_QWORD *)&v382 = 0;
        qfree();
      }
      *((_QWORD *)&v381 + 1) = 0;
      v382 = 0;
      *(_OWORD *)src.m256i_i8 = (unsigned __int64)func;
      *(_OWORD *)&src.m256i_u64[2] = 0;
      v283 = (__int64 (__fastcall *)(__int64, void *, void **, __int64))get_hexdsp();
      v284 = v283(566, v362[0], v361, 1);
      qrefcnt_t<cfunc_t>::delref(0);
      if ( v284 )
      {
        ++*(_DWORD *)(v284 + 104);
        qrefcnt_t<cfunc_t>::delref(v284);
        if ( src.m256i_i64[1] )
        {
          src.m256i_i64[2] = 0;
          qfree();
        }
        v360 = (struct _Unwind_Exception *)v284;
LABEL_122:
        v161 = (__int64 (__fastcall *)(__int64, struct _Unwind_Exception *))get_hexdsp();
        v162 = v161(560, v360);
        v163 = 0;
        dest = nullptr;
        v376 = 0;
        if ( *(_QWORD *)(v162 + 8) )
        {
          while ( 1 )
          {
            memset(&src, 0, 24);
            tag_remove();
            v164 = (src.m256i_i64[1] == 0) + src.m256i_i64[1] - 1;
            if ( (src.m256i_i64[1] == 0) + src.m256i_i64[1] != 1 )
            {
              v165 = dest;
              v166 = ((_QWORD)v376 == 0) + (_QWORD)v376 - 1LL;
              v167 = v164 + v166;
              v168 = v164 + ((_QWORD)v376 == 0) + (_QWORD)v376;
              if ( *((_QWORD *)&v376 + 1) < v168 )
              {
                v354 = v164 + v166;
                v357.m128i_i64[0] = ((_QWORD)v376 == 0) + (_QWORD)v376 - 1LL;
                v361 = (void **)(v164 + ((_QWORD)v376 == 0) + (_QWORD)v376);
                dest = (void *)qvector_reserve();
                v167 = v354;
                v165 = dest;
                v166 = v357.m128i_i64[0];
                v168 = (unsigned __int64)v361;
              }
              *(_QWORD *)&v376 = v168;
              v165[v167] = 0;
              memcpy((char *)dest + v166, (const void *)src.m256i_i64[0], v164);
            }
            if ( src.m256i_i64[0] )
            {
              src.m256i_i64[1] = 0;
              ++v163;
              qfree();
              if ( v163 >= *(_QWORD *)(v162 + 8) )
                break;
            }
            else if ( ++v163 >= *(_QWORD *)(v162 + 8) )
            {
              break;
            }
            v169 = dest;
            v170 = ((_QWORD)v376 == 0) + (_QWORD)v376 - 1LL;
            v171 = v170;
            v172 = v170 + 2;
            if ( *((_QWORD *)&v376 + 1) < (unsigned __int64)(v170 + 2) )
            {
              v361 = (void **)(v170 + 2);
              dest = (void *)qvector_reserve();
              v172 = (__int64)v361;
              v169 = dest;
            }
            *(_QWORD *)&v376 = v172;
            v169[v171 + 1] = 0;
            *((_BYTE *)dest + v171) = 10;
          }
        }
        v371 = nullptr;
        v377 = 0;
        v378 = 0;
        v173 = (unsigned __int8 (__fastcall *)(__int64, struct _Unwind_Exception *, char **))get_hexdsp();
        if ( v173(538, v360, &v371) )
        {
          memset(&src, 0, 24);
          v474 = nullptr;
          v473 = nullptr;
          print_tinfo();
          tag_remove();
          if ( src.m256i_i64[0] )
          {
            src.m256i_i64[1] = 0;
            qfree();
          }
        }
        v174 = (__int64 (__fastcall *)(__int64, struct _Unwind_Exception *))get_hexdsp();
        v175 = v174(539, v360);
        if ( v175 )
          v25 = *(_QWORD *)(v175 + 8);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
        *((_QWORD *)&v417 + 1) = 0;
        v357.m128i_i64[0] = (__int64)&v407;
        ida_mcp::format_ea[abi:cxx11]();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
        v418 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v438,
          (const __m128i *)&v416);
        v439 = nullptr;
        *(_QWORD *)&v420 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v419 = 3;
        v176 = operator new(0x20u);
        strcpy((char *)(v176 + 16), "function_name");
        *(_QWORD *)v176 = v176 + 16;
        *(_QWORD *)(v176 + 8) = 13;
        v358 = (const __m128i *)v412;
        v420 = (unsigned __int64)v176;
        ida_mcp::get_function_name[abi:cxx11]();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
        *((_QWORD *)&v422 + 1) = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v440,
          (const __m128i *)&v419);
        v441 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
        *((_QWORD *)&v424 + 1) = 0;
        v177 = (char *)dest;
        if ( !(_QWORD)v376 )
          v177 = _qstring<char>::c_str(void)const::nullstr;
        v373 = v177;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
        v427 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v442,
          (const __m128i *)&v423);
        v443 = 0;
        v429.m128i_i64[0] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v428) = 3;
        v178 = operator new(0x20u);
        *(_QWORD *)v178 = v178 + 16;
        strcpy((char *)(v178 + 16), "signature");
        *(_QWORD *)(v178 + 8) = 9;
        v429 = (__m128i)(unsigned __int64)v178;
        if ( (_QWORD)v378 )
          v179 = (char *)v377;
        else
          v179 = _qstring<char>::c_str(void)const::nullstr;
        src.m256i_i64[0] = (__int64)v179;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
        v432 = 0;
        v362[0] = &v428;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v444,
          (const __m128i *)&v428);
        v445 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
        v435 = 0;
        v436 = 6;
        v437 = (unsigned __int64)v25;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v446,
          v359);
        v447 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          (_QWORD *)v357.m128i_i64[1],
          (__int64)v438,
          5,
          v180,
          v181,
          v182,
          v475,
          v476,
          v477,
          v478,
          v479,
          v480,
          v481,
          v482,
          v483,
          v484,
          v485,
          v486,
          v487,
          v488,
          v489);
        v183 = (void **)v448;
        do
        {
          v183 -= 3;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v183 != v438 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        std::string::_M_dispose();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        std::string::_M_dispose();
        if ( v377 )
        {
          *(_QWORD *)&v378 = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( dest )
        {
          *(_QWORD *)&v376 = 0;
          qfree();
        }
        goto LABEL_146;
      }
      qrefcnt_t<cfunc_t>::delref(0);
      if ( src.m256i_i64[1] )
      {
        src.m256i_i64[2] = 0;
        qfree();
      }
    }
    extlang = find_extlang();
    if ( extlang )
    {
      qtmpnam();
      v372 = 0;
      v198 = strlen(v461);
      v199 = v198 + 1;
      v200 = v198;
      v371 = (char *)qvector_reserve();
      *(_QWORD *)&v372 = v199;
      memmove(v371, v461, v200);
      v371[v200] = 0;
      _qstring<char>::append((__int64 *)&v371, ".json", 5u);
      v201 = v371;
      v373 = nullptr;
      v374 = 0;
      if ( !(_QWORD)v372 )
        v201 = _qstring<char>::c_str(void)const::nullstr;
      v377 = (__int64)v201;
      src.m256i_i8[0] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::dump();
      _qstring<char>::sprnt(
        (int)&v373,
        (int)"import ida_hexrays as hr, ida_funcs, ida_bytes, ida_lines, ida_kernwin, json\n"
             "ea = 0x%llX\n"
             "func = ida_funcs.get_func(ea)\n"
             "r = {'tier2': False, 'tier3': False}\n"
             "\n"
             "ida_kernwin.create_undo_point(b'mcp_decompile_tier2_patch')\n"
             "\n"
             "patches = []\n"
             "addr = func.start_ea\n"
             "while addr < func.end_ea:\n"
             "    dw = ida_bytes.get_dword(addr)\n"
             "    if (dw & 0xFFFF0000) == 0xD71F0000 or (dw & 0xFFFF0000) == 0xD61F0000:\n"
             "        patches.append((addr, dw))\n"
             "        ida_bytes.patch_dword(addr, 0xD65F03C0)\n"
             "    elif ida_bytes.get_byte(addr) == 0xFF:\n"
             "        modrm = ida_bytes.get_byte(addr + 1)\n"
             "        reg = (modrm >> 3) & 7\n"
             "        if reg == 4 or reg == 2:\n"
             "            sz = 2\n"
             "            if (modrm & 0xC0) == 0x40: sz = 3\n"
             "            elif (modrm & 0xC0) == 0x80: sz = 6\n"
             "            orig = [ida_bytes.get_byte(addr + i) for i in range(sz)]\n"
             "            patches.append((addr, orig))\n"
             "            ida_bytes.patch_byte(addr, 0xC3)\n"
             "            for i in range(1, sz):\n"
             "                ida_bytes.patch_byte(addr + i, 0x90)\n"
             "    addr += 4 if func.start_ea > 0x100000000 else 1\n"
             "\n"
             "try:\n"
             "    if patches:\n"
             "        try:\n"
             "            cfunc = hr.decompile(ea)\n"
             "            if cfunc:\n"
             "                sv = cfunc.get_pseudocode()\n"
             "                lines = []\n"
             "                for i in range(len(sv)):\n"
             "                    lines.append(ida_lines.tag_remove(sv[i].line))\n"
             "                r = {'tier2': True, 'pseudo': chr(10).join(lines), 'patched': len(patches)}\n"
             "        except: pass\n"
             "finally:\n"
             "    for p in patches:\n"
             "        try:\n"
             "            if isinstance(p[1], int):\n"
             "                ida_bytes.patch_dword(p[0], p[1])\n"
             "            else:\n"
             "                for i, b in enumerate(p[1]):\n"
             "                    ida_bytes.patch_byte(p[0] + i, b)\n"
             "        except: pass\n"
             "\n"
             "if not r.get('tier2'):\n"
             "    hf = hr.hexrays_failure_t()\n"
             "    mbr = hr.mba_ranges_t(func)\n"
             "    mba = hr.gen_microcode(mbr, hf, None, hr.DECOMP_WARNINGS, hr.MMAT_LOCOPT)\n"
             "    if mba:\n"
             "        lines = []\n"
             "        for i in range(mba.qty):\n"
             "            blk = mba.get_mblock(i)\n"
             "            if blk.start == 0xffffffffffffffff: continue\n"
             "            insn = blk.head\n"
             "            while insn:\n"
             "                lines.append(ida_lines.tag_remove(insn._print()))\n"
             "                insn = insn.next\n"
             "        r = {'tier3': True, 'pseudo': chr(10).join(lines), 'blocks': mba.qty}\n"
             "\n"
             "with open(%s, 'w') as f: json.dump(r, f)\n",
        (int)v358,
        (int)v438[0],
        v202,
        v203,
        v475);
      std::string::_M_dispose();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      dest = nullptr;
      v204 = v373;
      v376 = 0;
      if ( !(_QWORD)v374 )
        v204 = _qstring<char>::c_str(void)const::nullstr;
      (*(void (__fastcall **)(char *, void **))(extlang + 72))(v204, &dest);
      v377 = 0;
      v378 = 0;
      if ( qfopen() )
      {
        while ( 1 )
        {
          v205 = qfread();
          v206 = v205;
          if ( v205 <= 0 )
            break;
          v207 = v377;
          v208 = v205 + ((_QWORD)v378 == 0) + (_QWORD)v378 - 1LL;
          v209 = ((_QWORD)v378 == 0) + (_QWORD)v378 - 1LL;
          v210 = v205 + ((_QWORD)v378 == 0) + (_QWORD)v378;
          if ( *((_QWORD *)&v378 + 1) < v210 )
          {
            v355 = ((_QWORD)v378 == 0) + (_QWORD)v378 - 1LL;
            v350 = v205 + v355;
            v357.m128i_i64[0] = v205 + ((_QWORD)v378 == 0) + (_QWORD)v378;
            v377 = qvector_reserve();
            v208 = v350;
            v207 = v377;
            v209 = v355;
            v210 = v357.m128i_i64[0];
          }
          *(_QWORD *)&v378 = v210;
          *(_BYTE *)(v207 + v208) = 0;
          memmove((void *)(v209 + v377), s, v206);
        }
        qfclose();
      }
      qunlink();
      v211 = 0;
      v212 = 0;
      if ( (unsigned __int64)v378 > 1 )
      {
        v439 = nullptr;
        *(_OWORD *)v438 = 0;
        v440[0] = 0;
        v369 = v377;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::parse<char const*>();
        v212 = src.m256i_i8[0];
        src.m256i_i8[0] = 0;
        v211 = src.m256i_i64[1];
        src.m256i_i64[1] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v439 )
          v439(v438, v438, 3);
        if ( v212 == 1 )
        {
          src.m256i_i8[0] = 0;
          LOBYTE(v369) = 1;
          v370 = v211;
          if ( (unsigned __int8)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<bool,char const(&)[6],bool,0>() )
          {
            memset(&src, 0, 24);
            get_func_name();
            v357.m128i_i64[0] = (__int64)&v407;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
            *((_QWORD *)&v408 + 1) = 0;
            ida_mcp::format_ea[abi:cxx11]();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
            v411 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v438,
              (const __m128i *)&v407);
            v439 = nullptr;
            v358 = (const __m128i *)v412;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[14],char [14],0>();
            *((_QWORD *)&v413 + 1) = 0;
            v317 = (char *)src.m256i_i64[0];
            if ( !src.m256i_i64[1] )
              v317 = _qstring<char>::c_str(void)const::nullstr;
            v368 = v317;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
            v415.m128i_i64[1] = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v440,
              v358);
            v441 = 0;
            v361 = (void **)&v416;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
            *((_QWORD *)&v417 + 1) = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<char const(&)[1],char const(&)[7],std::string,0>();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
            v418 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v442,
              (__int64)&v416,
              2,
              v318,
              v319,
              v320,
              v475,
              v476,
              v477,
              v478,
              v479,
              v480,
              v481,
              v482,
              v483,
              v484,
              v485,
              v486,
              v487,
              v488,
              v489);
            v443 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[10],char [10],0>();
            *((_QWORD *)&v420 + 1) = 0;
            v421 = 0;
            v422 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v444,
              (__int64)&v419,
              2,
              v321,
              v322,
              v323,
              v475,
              v476,
              v477,
              v478,
              v479,
              v480,
              v481,
              v482,
              v483,
              v484,
              v485,
              v486,
              v487,
              v488,
              v489);
            v445 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[21],char [21],0>();
            *((_QWORD *)&v424 + 1) = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[18],char [18],0>();
            v427 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v446,
              (__int64)&v423,
              2,
              v324,
              v325,
              v326,
              v475,
              v476,
              v477,
              v478,
              v479,
              v480,
              v481,
              v482,
              v483,
              v484,
              v485,
              v486,
              v487,
              v488,
              v489);
            v447 = 0;
            v429.m128i_i64[0] = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            LOBYTE(v428) = 3;
            v327 = operator new(0x20u);
            *(_QWORD *)v327 = v327 + 16;
            strcpy((char *)(v327 + 16), "patches_applied");
            *(_QWORD *)(v327 + 8) = 15;
            LODWORD(v367) = 0;
            v429 = (__m128i)(unsigned __int64)v327;
            v328 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[8],int,0>();
            v430 = 5;
            v431 = v328;
            v362[0] = &v428;
            v432 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v448,
              (__int64)&v428,
              2,
              v329,
              v330,
              v331,
              v475,
              v476,
              v477,
              v478,
              v479,
              v480,
              v481,
              v482,
              v483,
              v484,
              v485,
              v486,
              v487,
              v488,
              v489);
            v449 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
            v435 = 0;
            v436 = 5;
            v437 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v450,
              (__int64)v359,
              2,
              v332,
              v333,
              v334,
              v475,
              v476,
              v477,
              v478,
              v479,
              v480,
              v481,
              v482,
              v483,
              v484,
              v485,
              v486,
              v487,
              v488,
              v489);
            v451 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              (_QWORD *)v357.m128i_i64[1],
              (__int64)v438,
              7,
              v335,
              v336,
              v337,
              v475,
              v476,
              v477,
              v478,
              v479,
              v480,
              v481,
              v482,
              v483,
              v484,
              v485,
              v486,
              v487,
              v488,
              v489);
            v338 = (void **)v452;
            do
            {
              v338 -= 3;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
            while ( v338 != v438 );
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
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
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            std::string::_M_dispose();
            if ( src.m256i_i64[0] )
            {
              src.m256i_i64[1] = 0;
              qfree();
            }
            goto LABEL_267;
          }
          src.m256i_i8[0] = 0;
          if ( (unsigned __int8)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<bool,char const(&)[6],bool,0>() )
          {
            memset(&src, 0, 24);
            get_func_name();
            v357.m128i_i64[0] = (__int64)&v407;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
            *((_QWORD *)&v408 + 1) = 0;
            ida_mcp::format_ea[abi:cxx11]();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
            v411 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v438,
              (__int64)&v407,
              2,
              v285,
              v286,
              v287,
              v475,
              v476,
              v477,
              v478,
              v479,
              v480,
              v481,
              v482,
              v483,
              v484,
              v485,
              v486,
              v487,
              v488,
              v489);
            v439 = nullptr;
            v358 = (const __m128i *)v412;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[14],char [14],0>();
            *((_QWORD *)&v413 + 1) = 0;
            v288 = (char *)src.m256i_i64[0];
            if ( !src.m256i_i64[1] )
              v288 = _qstring<char>::c_str(void)const::nullstr;
            v368 = v288;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
            v415.m128i_i64[1] = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v440,
              (__int64)v358,
              2,
              v289,
              v290,
              v291,
              v475,
              v476,
              v477,
              v478,
              v479,
              v480,
              v481,
              v482,
              v483,
              v484,
              v485,
              v486,
              v487,
              v488,
              v489);
            v441 = 0;
            v361 = (void **)&v416;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
            *((_QWORD *)&v417 + 1) = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<char const(&)[1],char const(&)[7],std::string,0>();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
            v418 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v442,
              (__int64)&v416,
              2,
              v292,
              v293,
              v294,
              v475,
              v476,
              v477,
              v478,
              v479,
              v480,
              v481,
              v482,
              v483,
              v484,
              v485,
              v486,
              v487,
              v488,
              v489);
            v443 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[10],char [10],0>();
            *((_QWORD *)&v420 + 1) = 0;
            v421 = 0;
            v422 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v444,
              (__int64)&v419,
              2,
              v295,
              v296,
              v297,
              v475,
              v476,
              v477,
              v478,
              v479,
              v480,
              v481,
              v482,
              v483,
              v484,
              v485,
              v486,
              v487,
              v488,
              v489);
            v445 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[21],char [21],0>();
            *((_QWORD *)&v424 + 1) = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[15],char [15],0>();
            v427 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v446,
              (__int64)&v423,
              2,
              v298,
              v299,
              v300,
              v475,
              v476,
              v477,
              v478,
              v479,
              v480,
              v481,
              v482,
              v483,
              v484,
              v485,
              v486,
              v487,
              v488,
              v489);
            v447 = 0;
            v429.m128i_i64[0] = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            LOBYTE(v428) = 3;
            v362[0] = (void *)operator new(0x20u);
            std::string::basic_string<std::allocator<char>>(
              (__int64 *)v362[0],
              "microcode_blocks",
              v301,
              v302,
              v303,
              v304,
              v475,
              v476,
              v477);
            v305 = _mm_loadl_epi64((const __m128i *)v362);
            LODWORD(v367) = 0;
            v429 = v305;
            v306 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[7],int,0>();
            v430 = 5;
            v431 = v306;
            v362[0] = &v428;
            v432 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v448,
              (__int64)&v428,
              2,
              v307,
              v308,
              v309,
              v475,
              v476,
              v477,
              v478,
              v479,
              v480,
              v481,
              v482,
              v483,
              v484,
              v485,
              v486,
              v487,
              v488,
              v489);
            v449 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
            v435 = 0;
            v436 = 5;
            v437 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v450,
              (__int64)v359,
              2,
              v310,
              v311,
              v312,
              v475,
              v476,
              v477,
              v478,
              v479,
              v480,
              v481,
              v482,
              v483,
              v484,
              v485,
              v486,
              v487,
              v488,
              v489);
            v451 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              (_QWORD *)v357.m128i_i64[1],
              (__int64)v438,
              7,
              v313,
              v314,
              v315,
              v475,
              v476,
              v477,
              v478,
              v479,
              v480,
              v481,
              v482,
              v483,
              v484,
              v485,
              v486,
              v487,
              v488,
              v489);
            v316 = (void **)v452;
            do
            {
              v316 -= 3;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
            while ( v316 != v438 );
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
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
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            std::string::_M_dispose();
            if ( src.m256i_i64[0] )
            {
              src.m256i_i64[1] = 0;
              qfree();
            }
LABEL_267:
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            if ( v377 )
            {
              *(_QWORD *)&v378 = 0;
              qfree();
            }
            if ( dest )
            {
              *(_QWORD *)&v376 = 0;
              qfree();
            }
            if ( v373 )
            {
              *(_QWORD *)&v374 = 0;
              qfree();
            }
            if ( v371 )
            {
              *(_QWORD *)&v372 = 0;
              qfree();
            }
LABEL_239:
            --*(_DWORD *)(extlang + 12);
LABEL_146:
            qrefcnt_t<cfunc_t>::delref((__int64)v360);
            if ( *((_QWORD *)&v381 + 1) )
            {
              *(_QWORD *)&v382 = 0;
              qfree();
            }
            std::string::_M_dispose();
            return v357.m128i_i64[1];
          }
        }
      }
      LOBYTE(v369) = v212;
      v370 = v211;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v377 )
      {
        *(_QWORD *)&v378 = 0;
        qfree();
      }
      if ( dest )
      {
        *(_QWORD *)&v376 = 0;
        qfree();
      }
      if ( v373 )
      {
        *(_QWORD *)&v374 = 0;
        qfree();
      }
      if ( v371 )
      {
        *(_QWORD *)&v372 = 0;
        qfree();
      }
    }
    v373 = nullptr;
    v374 = 0;
    v213 = (void (__fastcall *)(__int64, char **, void **))get_hexdsp();
    v213(440, &v373, v361);
    dest = nullptr;
    v376 = 0;
    get_func_name();
    v214 = (unsigned __int64)*func;
    v215 = (unsigned __int64)func[1];
    v377 = 0;
    v378 = 0;
    if ( v214 >= v215 )
    {
      memset(&src, 0, 24);
      if ( (unsigned __int64)v376 <= 1 )
      {
        v216 = 0;
LABEL_278:
        v224 = v215 - v214;
        v225 = "";
        v356 = "//   <no instructions decoded>\n";
        v226 = "raw_disasm_func";
        v223 = "<anonymous>";
LABEL_220:
        v357.m128i_i64[0] = v224;
        v361 = (void **)v223;
        ida_mcp::format_ea[abi:cxx11]();
        LODWORD(v227) = (_DWORD)v373;
        if ( !(_QWORD)v374 )
          v227 = _qstring<char>::c_str(void)const::nullstr;
        v474 = v226;
        v473 = v356;
        v472 = v225;
        _qstring<char>::sprnt(
          (int)v362[0],
          (int)"// ============================================================\n"
               "// RAW DISASSEMBLY FALLBACK\n"
               "// ============================================================\n"
               "// Hex-Rays decompilation failed: %s\n"
               "// Address:        %s\n"
               "// Name:           %s\n"
               "// Function size:  %llu bytes (%d instructions%s)\n"
               "// Why this fallback: tier-1 (decompile) and tier-2/3 (Python\n"
               "//   patch + microcode lift) both failed. This is the last\n"
               "//   resort - raw disassembly emitted as comments so the\n"
               "//   analyst still has visibility on the function body.\n"
               "// ============================================================\n"
               "//\n"
               "// Instructions:\n"
               "%s// ============================================================\n"
               "\n"
               "void %s(/* signature unknown */)\n"
               "{\n"
               "    // see disassembly above\n"
               "}\n",
          (int)v227,
          (int)v438[0],
          (int)v361,
          v357.m128i_i32[0],
          v216);
        std::string::_M_dispose();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
        *((_QWORD *)&v396 + 1) = 0;
        ida_mcp::format_ea[abi:cxx11]();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
        v397 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v438,
          (__int64)v395,
          2,
          v228,
          v229,
          v230,
          v475,
          v476,
          v477,
          v478,
          v479,
          v480,
          v481,
          v482,
          v483,
          v484,
          v485,
          v486,
          v487,
          v488,
          v489);
        v439 = nullptr;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[14],char [14],0>();
        *((_QWORD *)&v399 + 1) = 0;
        v231 = (char *)dest;
        if ( !(_QWORD)v376 )
          v231 = _qstring<char>::c_str(void)const::nullstr;
        v368 = v231;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
        *((_QWORD *)&v401 + 1) = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v440,
          (__int64)v398,
          2,
          v232,
          v233,
          v234,
          v475,
          v476,
          v477,
          v478,
          v479,
          v480,
          v481,
          v482,
          v483,
          v484,
          v485,
          v486,
          v487,
          v488,
          v489);
        v441 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
        *((_QWORD *)&v403 + 1) = 0;
        v235 = (char *)src.m256i_i64[0];
        if ( !src.m256i_i64[1] )
          v235 = _qstring<char>::c_str(void)const::nullstr;
        v369 = (__int64)v235;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
        v406 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v442,
          (__int64)&v402,
          2,
          v236,
          v237,
          v238,
          v475,
          v476,
          v477,
          v478,
          v479,
          v480,
          v481,
          v482,
          v483,
          v484,
          v485,
          v486,
          v487,
          v488,
          v489);
        v443 = 0;
        *(_QWORD *)&v408 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v407 = 3;
        v239 = operator new(0x20u);
        *(_QWORD *)v239 = v239 + 16;
        strcpy((char *)(v239 + 16), "signature");
        *(_QWORD *)(v239 + 8) = 9;
        v408 = (unsigned __int64)v239;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
        v411 = 0;
        v357.m128i_i64[0] = (__int64)&v407;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v444,
          (__int64)&v407,
          2,
          v240,
          v241,
          v242,
          v475,
          v476,
          v477,
          v478,
          v479,
          v480,
          v481,
          v482,
          v483,
          v484,
          v485,
          v486,
          v487,
          v488,
          v489);
        v445 = 0;
        *(_QWORD *)&v413 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v412[0] = 3;
        v243 = (__int64 *)operator new(0x20u);
        v371 = (char *)&dword_14;
        *v243 = (__int64)(v243 + 2);
        v244 = std::string::_M_create();
        v245 = v371;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3E26E0);
        *v243 = v244;
        v243[2] = (__int64)v245;
        *(__m128i *)v244 = si128;
        *(_DWORD *)(v244 + 16) = 1685022836;
        v247 = v371;
        v248 = *v243;
        v243[1] = (__int64)v371;
        v247[v248] = 0;
        v415.m128i_i64[0] = 0;
        v413 = (unsigned __int64)v243;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v414 = 3;
        v362[0] = (void *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(
          (__int64 *)v362[0],
          "raw_disasm_fallback",
          v249,
          v250,
          v251,
          v252,
          v475,
          v476,
          v477);
        v358 = (const __m128i *)v412;
        v415 = _mm_loadl_epi64((const __m128i *)v362);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v446,
          (__int64)v412,
          2,
          v253,
          v254,
          v255,
          v475,
          v476,
          v477,
          v478,
          v479,
          v480,
          v481,
          v482,
          v483,
          v484,
          v485,
          v486,
          v487,
          v488,
          v489);
        v447 = 0;
        v361 = (void **)&v416;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[14],char [14],0>();
        *((_QWORD *)&v417 + 1) = 0;
        v256 = v373;
        if ( !(_QWORD)v374 )
          v256 = _qstring<char>::c_str(void)const::nullstr;
        v371 = v256;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
        v418 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v448,
          (__int64)v361,
          2,
          v257,
          v258,
          v259,
          v475,
          v476,
          v477,
          v478,
          v479,
          v480,
          v481,
          v482,
          v483,
          v484,
          v485,
          v486,
          v487,
          v488,
          v489);
        v449 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
        v260 = func[1];
        *((_QWORD *)&v420 + 1) = 0;
        v422 = (unsigned __int64)(v260 - (_BYTE *)*func);
        v421 = 6;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v450,
          (__int64)&v419,
          2,
          v261,
          v262,
          v263,
          v475,
          v476,
          v477,
          v478,
          v479,
          v480,
          v481,
          v482,
          v483,
          v484,
          v485,
          v486,
          v487,
          v488,
          v489);
        v451 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
        *((_QWORD *)&v424 + 1) = 0;
        LOBYTE(v425) = 5;
        v426 = v216;
        v427 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v452,
          (__int64)&v423,
          2,
          v264,
          v265,
          v266,
          v475,
          v476,
          v477,
          v478,
          v479,
          v480,
          v481,
          v482,
          v483,
          v484,
          v485,
          v486,
          v487,
          v488,
          v489);
        v453 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v428) = 3;
        v267 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(
          v267,
          "instr_truncated",
          v268,
          v269,
          v270,
          v271,
          v475,
          v476,
          v477);
        v430 = 4;
        v431 = is_go_pathological_func;
        v432 = 0;
        v429 = (__m128i)(unsigned __int64)v267;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v454,
          (__int64)&v428,
          2,
          v272,
          v273,
          v274,
          v475,
          v476,
          v477,
          v478,
          v479,
          v480,
          v481,
          v482,
          v483,
          v484,
          v485,
          v486,
          v487,
          v488,
          v489);
        v455 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
        v435 = 0;
        v436 = 5;
        v437 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v456,
          (__int64)v359,
          2,
          v275,
          v276,
          v277,
          v475,
          v476,
          v477,
          v478,
          v479,
          v480,
          v481,
          v482,
          v483,
          v484,
          v485,
          v486,
          v487,
          v488,
          v489);
        v457 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          (_QWORD *)v357.m128i_i64[1],
          (__int64)v438,
          10,
          v278,
          v279,
          v280,
          v475,
          v476,
          v477,
          v478,
          v479,
          v480,
          v481,
          v482,
          v483,
          v484,
          v485,
          v486,
          v487,
          v488,
          v489);
        v281 = (void **)v458;
        do
        {
          v281 -= 3;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v281 != v438 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
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
        if ( src.m256i_i64[0] )
        {
          src.m256i_i64[1] = 0;
          qfree();
        }
        if ( v377 )
        {
          *(_QWORD *)&v378 = 0;
          qfree();
        }
        if ( dest )
        {
          *(_QWORD *)&v376 = 0;
          qfree();
        }
        if ( v373 )
        {
          *(_QWORD *)&v374 = 0;
          qfree();
        }
        if ( !extlang )
          goto LABEL_146;
        goto LABEL_239;
      }
      v223 = (const char *)dest;
      v216 = 0;
LABEL_276:
      v224 = v215 - v214;
      v225 = "";
      v356 = "//   <no instructions decoded>\n";
    }
    else
    {
      v216 = 0;
      while ( 1 )
      {
        memset(&src, 0, 24);
        generate_disasm_line();
        LODWORD(v217) = src.m256i_i32[0];
        if ( !src.m256i_i64[1] )
          v217 = _qstring<char>::c_str(void)const::nullstr;
        ida_mcp::format_ea[abi:cxx11]();
        _qstring<char>::cat_sprnt((int)&v377, (int)"//   %s %s\n", (int)v438[0], (int)v217, v218, v219, v475);
        if ( v438[0] != &v439 )
          operator delete(v438[0], (unsigned __int64)v439 + 1);
        ++v216;
        head = next_head();
        v221 = head;
        if ( head == -1 || v214 >= head )
          break;
        if ( src.m256i_i64[0] )
        {
          src.m256i_i64[1] = 0;
          qfree();
        }
        v215 = (unsigned __int64)func[1];
        if ( v221 >= v215 )
        {
          v222 = v378;
          v214 = (unsigned __int64)*func;
          is_go_pathological_func = v216 == 4096;
          goto LABEL_215;
        }
        if ( v216 == 4096 )
        {
          v214 = (unsigned __int64)*func;
          is_go_pathological_func = 1;
          v222 = v378;
          memset(&src, 0, 24);
          if ( (unsigned __int64)v376 <= 1 )
          {
            if ( (unsigned __int64)v378 <= 1 )
            {
LABEL_281:
              v224 = v215 - v214;
              v216 = 4096;
              v356 = "//   <no instructions decoded>\n";
              v225 = ", truncated";
              v226 = "raw_disasm_func";
              v223 = "<anonymous>";
              goto LABEL_220;
            }
LABEL_253:
            v224 = v215 - v214;
            v356 = (const char *)v377;
            if ( v216 == 4096 )
              v225 = ", truncated";
            else
              v225 = "";
            v226 = "raw_disasm_func";
            v223 = "<anonymous>";
            goto LABEL_220;
          }
          goto LABEL_216;
        }
        v214 = v221;
      }
      if ( src.m256i_i64[0] )
      {
        src.m256i_i64[1] = 0;
        qfree();
      }
      v222 = v378;
      v215 = (unsigned __int64)func[1];
      v214 = (unsigned __int64)*func;
      is_go_pathological_func = v216 == 4096;
LABEL_215:
      memset(&src, 0, 24);
      if ( (unsigned __int64)v376 <= 1 )
      {
        if ( v222 <= 1 )
        {
          if ( v216 != 4096 )
            goto LABEL_278;
          goto LABEL_281;
        }
        goto LABEL_253;
      }
LABEL_216:
      v223 = (const char *)dest;
      if ( v222 <= 1 )
      {
        if ( v216 != 4096 )
          goto LABEL_276;
        v224 = v215 - v214;
        v225 = ", truncated";
        v356 = "//   <no instructions decoded>\n";
      }
      else
      {
        v224 = v215 - v214;
        v225 = "";
        v356 = (const char *)v377;
        if ( v216 == 4096 )
          v225 = ", truncated";
      }
    }
    v226 = v223;
    goto LABEL_220;
  }
  v371 = nullptr;
  v372 = 0;
  get_func_name();
  v363 = -1;
  v357.m128i_i64[0] = calc_thunk_func_target();
  v373 = nullptr;
  v374 = 0;
  if ( v357.m128i_i64[0] != -1 )
    get_func_name();
  dest = nullptr;
  v376 = 0;
  v26 = *func;
  v27 = 0;
  v377 = 0;
  v378 = 0;
  v362[0] = v26;
  if ( v26 < func[1] )
  {
    while ( 1 )
    {
      v380 = nullptr;
      v381 = 0;
      generate_disasm_line();
      if ( (_QWORD)v381 )
        v360 = (struct _Unwind_Exception *)v380;
      else
        v360 = (struct _Unwind_Exception *)_qstring<char>::c_str(void)const::nullstr;
      qsnprintf();
      v438[0] = &v439;
      v28 = (char *)strlen(s);
      src.m256i_i64[0] = (__int64)v28;
      v31 = (unsigned int)v28;
      if ( (unsigned __int64)v28 > 0xF )
      {
        v352 = (unsigned int)v28;
        v36 = (_QWORD *)std::string::_M_create();
        v438[0] = v36;
        v31 = v352;
        v439 = (void (__fastcall *)(void **, void **, __int64))src.m256i_i64[0];
      }
      else
      {
        if ( v28 == (_BYTE *)&dword_0 + 1 )
        {
          LOBYTE(v439) = s[0];
LABEL_35:
          v32 = &v439;
          goto LABEL_36;
        }
        if ( !v28 )
          goto LABEL_35;
        v36 = &v439;
      }
      if ( v31 >= 8 )
      {
        *v36 = *(_QWORD *)s;
        *(_QWORD *)((char *)v36 + v31 - 8) = *(_QWORD *)&v462[v31 + 4064];
        v37 = (unsigned __int64)(v36 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v38 = (char *)v36 - v37;
        v39 = (char *)(s - v38);
        v40 = ((_DWORD)v38 + v31) & 0xFFFFFFF8;
        if ( v40 >= 8 )
        {
          v41 = v362[0];
          v42 = v40 & 0xFFFFFFF8;
          v43 = 0;
          do
          {
            v44 = v43;
            v43 += 8;
            *(_QWORD *)(v37 + v44) = *(_QWORD *)&v39[v44];
          }
          while ( v43 < v42 );
          v362[0] = v41;
        }
      }
      else if ( (v31 & 4) != 0 )
      {
        *(_DWORD *)v36 = *(_DWORD *)s;
        *(_DWORD *)((char *)v36 + v31 - 4) = *(_DWORD *)&v462[v31 + 4068];
      }
      else if ( v31 )
      {
        *(_BYTE *)v36 = s[0];
        if ( (v31 & 2) != 0 )
          *(_WORD *)((char *)v36 + v31 - 2) = *(_WORD *)&v462[v31 + 4070];
      }
      v28 = (char *)src.m256i_i64[0];
      v32 = (void (__fastcall **)(void **, void **, __int64))v438[0];
LABEL_36:
      v438[1] = v28;
      v33 = (int)v360;
      v28[(_QWORD)v32] = 0;
      _qstring<char>::cat_sprnt((int)&v377, (int)"//   %s %s\n", (int)v438[0], v33, v29, v30, v475);
      if ( v438[0] != &v439 )
        operator delete(v438[0], (unsigned __int64)v439 + 1);
      ++v27;
      v34 = (void *)next_head();
      v35 = v34;
      if ( v34 == (void *)-1LL || v362[0] >= v34 )
      {
        if ( v380 )
        {
          *(_QWORD *)&v381 = 0;
          qfree();
        }
        break;
      }
      if ( v380 )
      {
        *(_QWORD *)&v381 = 0;
        qfree();
      }
      if ( v35 >= func[1] || v27 == 16 )
        break;
      v362[0] = v35;
    }
  }
  memset(&src, 0, 24);
  v364 = 0;
  if ( v357.m128i_i64[0] == -1 )
  {
    v45 = 0;
  }
  else
  {
    if ( (unsigned __int8)get_tinfo() )
    {
      v474 = nullptr;
      v473 = nullptr;
      print_tinfo();
    }
    v45 = src.m256i_u64[1];
  }
  v380 = nullptr;
  v381 = 0;
  if ( (unsigned __int64)v374 <= 1 )
  {
    v184 = "GOT/IAT";
    if ( v363 == -1 )
      v184 = "direct jump";
    v340 = v184;
    v341 = "/* unresolved */";
    v345 = "<unresolved target>";
  }
  else
  {
    v46 = "direct jump";
    if ( v363 != -1 )
      v46 = "GOT/IAT";
    v345 = v373;
    v340 = v46;
    v341 = v373;
  }
  v47 = "thunk_func";
  if ( (unsigned __int64)v372 > 1 )
    v47 = v371;
  if ( v45 <= 1 )
  {
    v339 = "void";
    v344 = "<no type info>";
  }
  else
  {
    v344 = (const char *)src.m256i_i64[0];
    v339 = "/* see target sig */";
  }
  v48 = "<none>";
  if ( (unsigned __int64)v376 > 1 )
    v48 = (const char *)dest;
  if ( v363 == -1 )
  {
    LOBYTE(v360) = 0;
    v343 = "(none)";
  }
  else
  {
    ida_mcp::format_ea[abi:cxx11]();
    LOBYTE(v360) = 1;
    v343 = (const char *)v438[0];
  }
  v49 = "BADADDR";
  if ( v357.m128i_i64[0] != -1 )
  {
    ida_mcp::format_ea[abi:cxx11]();
    v351 = 1;
    v49 = (const char *)v433;
  }
  v50 = "<unresolved>";
  v51 = "//   <empty>\n";
  if ( (unsigned __int64)v374 > 1 )
    v50 = v373;
  v52 = "<anonymous>";
  v347 = v49;
  if ( (unsigned __int64)v378 > 1 )
    LOBYTE(v51) = v377;
  v348 = v50;
  v349 = (char)v51;
  v353 = (_BYTE *)func[1] - (_BYTE *)*func;
  if ( (unsigned __int64)v372 > 1 )
    LODWORD(v52) = (_DWORD)v371;
  v362[0] = &v428;
  ida_mcp::format_ea[abi:cxx11]();
  v473 = v341;
  v472 = (char *)v340;
  v471 = v345;
  v470 = v47;
  v469 = v339;
  v468 = v344;
  v467 = v48;
  v466 = v343;
  v465 = v347;
  v464 = v348;
  _qstring<char>::sprnt(
    (int)v361,
    (int)"// ============================================================\n"
         "// THUNK / TRAMPOLINE\n"
         "// ============================================================\n"
         "// Address:         %s\n"
         "// Name:            %s\n"
         "// Size:            %llu bytes (%d instructions)\n"
         "// Disassembly:\n"
         "%s//\n"
         "// Resolved target: %s\n"
         "// Target address:  %s\n"
         "// GOT/IAT slot:    %s\n"
         "// Slot symbol:     %s\n"
         "// Target type:     %s\n"
         "// ============================================================\n"
         "\n"
         "%s %s(/* see target signature */)\n"
         "{\n"
         "    // Tail-call to %s via %s indirection\n"
         "    return %s(/* forwarded args */);\n"
         "}\n",
    v428,
    (int)v52,
    v353,
    v27,
    v349);
  std::string::_M_dispose();
  if ( v351 )
    std::string::_M_dispose();
  if ( (_BYTE)v360 )
    std::string::_M_dispose();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v387 = 0;
  v360 = (struct _Unwind_Exception *)&v383;
  ida_mcp::format_ea[abi:cxx11]();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
  v388 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v438,
    (__int64)v386,
    2,
    v53,
    v54,
    v55,
    v475,
    v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488,
    v489);
  v439 = nullptr;
  *(_QWORD *)&v390 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v389) = 3;
  v56 = operator new(0x20u);
  strcpy((char *)(v56 + 16), "function_name");
  *(_QWORD *)v56 = v56 + 16;
  *(_QWORD *)(v56 + 8) = 13;
  v390 = (unsigned __int64)v56;
  if ( (_QWORD)v372 )
    v57 = v371;
  else
    v57 = _qstring<char>::c_str(void)const::nullstr;
  v365 = v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
  v391 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v440,
    (__int64)&v389,
    2,
    v58,
    v59,
    v60,
    v475,
    v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488,
    v489);
  v441 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[11],char [11],0>();
  v393 = 0;
  v61 = (char *)v380;
  if ( !(_QWORD)v381 )
    v61 = _qstring<char>::c_str(void)const::nullstr;
  v366 = v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
  v394 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v442,
    (__int64)v392,
    2,
    v62,
    v63,
    v64,
    v475,
    v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488,
    v489);
  v443 = 0;
  *(_QWORD *)&v396 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v395[0] = 3;
  v65 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v65, "signature", v66, v67, v68, v69, v475, v476, v477);
  v70 = "void(void)";
  if ( src.m256i_i64[1] > 1uLL )
    v70 = (const char *)src.m256i_i64[0];
  v367 = v70;
  v396 = (unsigned __int64)v65;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
  v397 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v444,
    (__int64)v395,
    2,
    v71,
    v72,
    v73,
    v475,
    v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488,
    v489);
  v445 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v398[0] = 3;
  v74 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v74, "decompilation_method", v75, v76, v77, v78, v475, v476, v477);
  v399 = (unsigned __int64)v74;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v400 = 3;
  v79 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v79, "thunk_disasm", v80, v81, v82, v83, v475, v476, v477);
  v401 = (unsigned __int64)v79;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v446,
    (__int64)v398,
    2,
    v84,
    v85,
    v86,
    v475,
    v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488,
    v489);
  v447 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v402 = 3;
  v87 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v87, "is_thunk", v88, v89, v90, v91, v475, v476, v477);
  v404 = 4;
  v403 = (unsigned __int64)v87;
  v405 = 1;
  v406 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v448,
    (__int64)&v402,
    2,
    v92,
    v93,
    v94,
    v475,
    v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488,
    v489);
  v449 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v407 = 3;
  v95 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v95, "thunk_size_bytes", v96, v97, v98, v99, v475, v476, v477);
  v408 = (unsigned __int64)v95;
  v410 = (_BYTE *)func[1] - (_BYTE *)*func;
  v409 = 6;
  v411 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v450,
    (__int64)&v407,
    2,
    v100,
    v101,
    v102,
    v475,
    v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488,
    v489);
  v451 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v412[0] = 3;
  v103 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v103, "thunk_instr_count", v104, v105, v106, v107, v475, v476, v477);
  v414 = 5;
  v415 = (__m128i)(unsigned __int64)v27;
  v413 = (unsigned __int64)v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v452,
    (__int64)v412,
    2,
    v108,
    v109,
    v110,
    v475,
    v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488,
    v489);
  v453 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v416 = 3;
  v111 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v111, "thunk_target", v112, v113, v114, v115, v475, v476, v477);
  v417 = (unsigned __int64)v111;
  v358 = (const __m128i *)v384;
  if ( v357.m128i_i64[0] == -1 )
    std::string::basic_string<std::allocator<char>>(v384, "", v116, v117, v118, v119, v475, v476, v477);
  else
    ida_mcp::format_ea[abi:cxx11]();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
  v418 = 0;
  v361 = (void **)&v416;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v454,
    (__int64)&v416,
    2,
    v120,
    v121,
    v122,
    v475,
    v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488,
    v489);
  v455 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v419 = 3;
  v123 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v123, "thunk_target_name", v124, v125, v126, v127, v475, v476, v477);
  v420 = (unsigned __int64)v123;
  if ( (_QWORD)v374 )
    v128 = v373;
  else
    v128 = _qstring<char>::c_str(void)const::nullstr;
  v368 = v128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
  *((_QWORD *)&v422 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v456,
    (__int64)&v419,
    2,
    v129,
    v130,
    v131,
    v475,
    v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488,
    v489);
  v457 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v423 = 3;
  v132 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v132, "thunk_got_slot", v133, v134, v135, v136, v475, v476, v477);
  v424 = (unsigned __int64)v132;
  if ( v363 == -1 )
    std::string::basic_string<std::allocator<char>>(v385, "", v137, v138, v139, v140, v475, v476, v477);
  else
    ida_mcp::format_ea[abi:cxx11]();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
  v427 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v458,
    (__int64)&v423,
    2,
    v141,
    v142,
    v143,
    v475,
    v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488,
    v489);
  v458[2] = 0;
  v429.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v428) = 3;
  v357.m128i_i64[0] = operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)v357.m128i_i64[0],
    "thunk_import_name",
    v144,
    v145,
    v146,
    v147,
    v475,
    v476,
    v477);
  v429 = _mm_loadl_epi64(&v357);
  if ( (_QWORD)v376 )
    v148 = (char *)dest;
  else
    v148 = _qstring<char>::c_str(void)const::nullstr;
  v369 = (__int64)v148;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
  v432 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v459,
    (__int64)v362[0],
    2,
    v149,
    v150,
    v151,
    v475,
    v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488,
    v489);
  v459[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  v152 = v359;
  v436 = 5;
  v435 = 0;
  v359 = (const __m128i *)v460;
  v437 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v460,
    (__int64)v152,
    2,
    v153,
    v154,
    v155,
    v475,
    v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488,
    v489);
  v460[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    (_QWORD *)v357.m128i_i64[1],
    (__int64)v438,
    13,
    v156,
    v157,
    v158,
    v475,
    v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488,
    v489);
  v362[0] = (void *)v359;
  do
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v362[0] = (char *)v362[0] - 24;
  }
  while ( &v436 != v362[0] );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
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
  if ( v380 )
  {
    *(_QWORD *)&v381 = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( src.m256i_i64[0] )
  {
    src.m256i_i64[1] = 0;
    qfree();
  }
  if ( v377 )
  {
    *(_QWORD *)&v378 = 0;
    qfree();
  }
  if ( dest )
  {
    *(_QWORD *)&v376 = 0;
    qfree();
  }
  if ( v373 )
  {
    *(_QWORD *)&v374 = 0;
    qfree();
  }
  if ( v371 )
  {
    *(_QWORD *)&v372 = 0;
    qfree();
  }
  return v357.m128i_i64[1];
}

