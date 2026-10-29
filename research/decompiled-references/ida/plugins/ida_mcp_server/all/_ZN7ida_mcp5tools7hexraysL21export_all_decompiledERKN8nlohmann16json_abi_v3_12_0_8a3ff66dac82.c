_QWORD *__fastcall ida_mcp::tools::hexrays::export_all_decompiled(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  std::runtime_error *v6; // r15
  std::runtime_error *exception; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  size_t v13; // r15
  void *v14; // r12
  _BYTE *v15; // rax
  const std::filesystem::__cxx11::path *v16; // rax
  __int64 v17; // rsi
  std::filesystem::__cxx11::path *v18; // rdi
  const std::filesystem::__cxx11::path *v19; // rsi
  const std::filesystem::__cxx11::path *v20; // rax
  __int64 v21; // rsi
  std::filesystem::__cxx11::path *v22; // rdi
  __int64 v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  const char *v29; // rsi
  char v30; // r12
  __int64 (__fastcall *hexdsp)(__int64, __m256i *, __m128i *, __int64); // rax
  void (__fastcall *v32)(__int64, __int64, __m128i *); // rax
  __int64 *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __m128i v38; // xmm0
  _BYTE *v39; // r13
  unsigned __int64 v40; // r14
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _BYTE *v45; // rdi
  __int64 *v46; // r12
  __m128i v47; // xmm0
  size_t v48; // rdx
  __int64 v49; // rax
  _QWORD *v50; // rax
  unsigned __int64 v51; // r8
  __int8 *v52; // r9
  unsigned __int64 *v53; // rcx
  _QWORD *v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rcx
  __int64 *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  char *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  std::filesystem::__cxx11::path *v66; // r13
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  std::filesystem::__cxx11::path *v70; // r12
  _QWORD *v71; // r15
  __int64 v72; // rax
  std::filesystem *v73; // rsi
  void *v74; // r12
  __int64 v75; // rbx
  _BYTE *v76; // rax
  _QWORD *v77; // rax
  char *v78; // rdx
  _QWORD *v79; // rcx
  char *v80; // rbx
  __int64 v81; // rsi
  __int64 *v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 *v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 *v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 *v97; // r13
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  std::filesystem::__cxx11::path *v105; // r13
  std::filesystem::__cxx11::path *v106; // rbx
  void *v107; // r13
  __int8 v108; // bl
  __int64 v109; // rax
  __int8 v110; // si
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 (__fastcall *v118)(__int64, __int64); // rax
  __int64 v119; // r13
  unsigned __int64 v120; // r12
  __int64 v121; // rax
  size_t v122; // r14
  __int64 v123; // rsi
  __int64 v124; // r15
  __int64 v125; // r8
  unsigned __int64 v126; // rdx
  __int64 v127; // rsi
  __int64 v128; // r14
  unsigned __int8 (__fastcall *v129)(__int64, __int64, __int64 *); // rax
  unsigned __int64 v130; // r13
  unsigned __int64 v131; // rsi
  unsigned __int32 v132; // ecx
  __int64 v133; // r14
  __m128i *v134; // rdi
  _QWORD *v135; // r10
  unsigned __int32 v136; // ecx
  unsigned __int64 v137; // rax
  unsigned __int64 v138; // r8
  __int64 v139; // rdx
  __int8 v140; // al
  unsigned __int8 *v141; // r14
  unsigned __int8 v142; // r13
  const __m128i *v143; // rax
  std::filesystem::__cxx11::path *v144; // rsi
  unsigned __int64 v145; // rdx
  _BYTE *v146; // r11
  __int64 v147; // rax
  __int64 v148; // r13
  __int64 v149; // r12
  __int64 v150; // r15
  size_t v151; // rdx
  int v152; // eax
  unsigned __int64 v153; // r14
  unsigned __int64 v154; // r14
  size_t v155; // rdx
  int v156; // eax
  _QWORD *v157; // r15
  __int64 v158; // r12
  size_t v159; // rdx
  int v160; // eax
  unsigned __int64 v161; // r14
  int v162; // eax
  _QWORD *v163; // r14
  size_t v164; // rdx
  int v165; // eax
  unsigned __int64 v166; // r12
  unsigned __int64 v167; // r12
  size_t v168; // rdx
  int v169; // eax
  __int64 v170; // r12
  __int64 v171; // r14
  __int64 v172; // rax
  __int64 v173; // r14
  __int64 v174; // r13
  __int64 v175; // r15
  size_t v176; // rdx
  int v177; // eax
  unsigned __int64 v178; // r12
  unsigned __int64 v179; // r12
  size_t v180; // rdx
  int v181; // eax
  void *v182; // rdi
  void *v183; // rdi
  __int64 v184; // rax
  __int64 v185; // rax
  bool v186; // al
  unsigned __int64 v187; // rax
  unsigned __int64 v188; // rax
  void *v189; // r13
  void *v190; // r12
  __int64 *v191; // rax
  void *v192; // rcx
  _QWORD *v193; // rdi
  __int64 v194; // r13
  void *v195; // rcx
  _QWORD *v196; // rdi
  size_t v197; // r13
  __int64 *v198; // rax
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __m128i v203; // xmm0
  unsigned __int64 v204; // r13
  _QWORD *v205; // rax
  __int64 v206; // rcx
  __int64 v207; // r8
  __int64 v208; // r9
  _BYTE *v209; // rdi
  __int64 *v210; // r12
  __m128i v211; // xmm0
  size_t v212; // rdx
  __int64 v213; // rax
  _QWORD *v214; // rax
  unsigned __int64 v215; // r8
  __int8 *v216; // r9
  unsigned __int64 *v217; // rcx
  _QWORD *v218; // rsi
  __int64 v219; // rdi
  __int64 v220; // rcx
  __int64 *v221; // rax
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  __m128i v226; // xmm0
  __int64 *v227; // rax
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  std::filesystem::__cxx11::path *v238; // r13
  _QWORD *v239; // r15
  std::filesystem::__cxx11::path *v240; // r14
  bool v241; // zf
  void (__fastcall *v242)(__int64, __int64); // rax
  __int64 v243; // rbx
  __int64 v244; // rdx
  __int64 v245; // r12
  _QWORD *v246; // r15
  __int64 i; // rbx
  __int64 v248; // r15
  void (__fastcall *v249)(__int64, __int64); // rax
  void (__fastcall *v250)(__int64, __int64); // rax
  void (__fastcall *v251)(__int64, __int64); // rax
  __int64 *v252; // rdi
  unsigned __int8 **v253; // r14
  const __m128i *v254; // r13
  __m128i *v255; // rax
  __int64 v256; // rax
  __int64 v257; // rax
  unsigned __int64 v258; // rax
  unsigned int v259; // edx
  __int64 v260; // rax
  unsigned __int64 v261; // rax
  void *v262; // rax
  unsigned __int64 v263; // rdi
  char *v264; // rcx
  char *v265; // r8
  unsigned int v266; // edx
  unsigned int v267; // edx
  unsigned int v268; // ecx
  __int64 v269; // r9
  char *v270; // rsi
  _QWORD *v271; // rbx
  unsigned int v272; // esi
  __int64 v273; // r10
  __m128i v274; // xmm0
  __int64 v275; // rdi
  void *v276; // rdi
  unsigned __int64 v277; // r13
  void **v278; // rax
  void **v279; // r15
  char *v280; // rsi
  _QWORD *v281; // rbx
  unsigned int v282; // esi
  __int64 v283; // r10
  __int64 *v284; // rax
  __int64 v285; // rdx
  __int64 v286; // rcx
  __int64 v287; // r8
  __int64 v288; // r9
  __int64 v289; // rcx
  __int64 v290; // r8
  __int64 v291; // r9
  __int64 v292; // rcx
  __int64 v293; // r8
  __int64 v294; // r9
  __int64 *v295; // rax
  __int64 v296; // rdx
  __int64 v297; // rcx
  __int64 v298; // r8
  __int64 v299; // r9
  __m128i v300; // xmm0
  void *v301; // rcx
  _QWORD *v302; // rdi
  __int64 v303; // rbx
  __int64 v304; // rcx
  __int64 v305; // r8
  __int64 v306; // r9
  __int64 v307; // rcx
  __int64 v308; // r8
  __int64 v309; // r9
  const __m128i **v310; // rbx
  _QWORD *v311; // r14
  __m128i si128; // xmm0
  unsigned __int64 v313; // rax
  int v314; // [rsp+0h] [rbp-800h]
  int v315; // [rsp+0h] [rbp-800h]
  int v316; // [rsp+0h] [rbp-800h]
  int v317; // [rsp+0h] [rbp-800h]
  int v318; // [rsp+0h] [rbp-800h]
  int v319; // [rsp+0h] [rbp-800h]
  int v320; // [rsp+0h] [rbp-800h]
  int v321; // [rsp+0h] [rbp-800h]
  int v322; // [rsp+0h] [rbp-800h]
  int v323; // [rsp+0h] [rbp-800h]
  int v324; // [rsp+0h] [rbp-800h]
  int v325; // [rsp+0h] [rbp-800h]
  int v326; // [rsp+0h] [rbp-800h]
  int v327; // [rsp+0h] [rbp-800h]
  int v328; // [rsp+0h] [rbp-800h]
  int v329; // [rsp+0h] [rbp-800h]
  int v330; // [rsp+0h] [rbp-800h]
  int v331; // [rsp+0h] [rbp-800h]
  int v332; // [rsp+0h] [rbp-800h]
  int v333; // [rsp+0h] [rbp-800h]
  int v334; // [rsp+0h] [rbp-800h]
  int v335; // [rsp+8h] [rbp-7F8h]
  int v336; // [rsp+8h] [rbp-7F8h]
  __int64 v337; // [rsp+8h] [rbp-7F8h]
  __int64 v338; // [rsp+8h] [rbp-7F8h]
  int v339; // [rsp+8h] [rbp-7F8h]
  __int64 v340; // [rsp+8h] [rbp-7F8h]
  __int64 v341; // [rsp+8h] [rbp-7F8h]
  int v342; // [rsp+8h] [rbp-7F8h]
  int v343; // [rsp+8h] [rbp-7F8h]
  int v344; // [rsp+8h] [rbp-7F8h]
  __int64 v345; // [rsp+8h] [rbp-7F8h]
  __int64 v346; // [rsp+8h] [rbp-7F8h]
  __int64 v347; // [rsp+8h] [rbp-7F8h]
  int v348; // [rsp+8h] [rbp-7F8h]
  int v349; // [rsp+8h] [rbp-7F8h]
  __int64 v350; // [rsp+8h] [rbp-7F8h]
  __int64 v351; // [rsp+8h] [rbp-7F8h]
  __int64 v352; // [rsp+8h] [rbp-7F8h]
  __int64 v353; // [rsp+8h] [rbp-7F8h]
  int v354; // [rsp+8h] [rbp-7F8h]
  __int64 v355; // [rsp+8h] [rbp-7F8h]
  __m128i v356; // [rsp+10h] [rbp-7F0h] BYREF
  void **v357; // [rsp+20h] [rbp-7E0h]
  _QWORD *v358; // [rsp+28h] [rbp-7D8h]
  void *v359; // [rsp+30h] [rbp-7D0h]
  void **v360; // [rsp+38h] [rbp-7C8h]
  __int64 v361; // [rsp+40h] [rbp-7C0h]
  std::filesystem::__cxx11::path *v362; // [rsp+48h] [rbp-7B8h]
  __int64 v363; // [rsp+50h] [rbp-7B0h]
  __int64 v364; // [rsp+58h] [rbp-7A8h]
  __m128i v365; // [rsp+60h] [rbp-7A0h] BYREF
  __int64 v366; // [rsp+70h] [rbp-790h]
  __m128i *v367; // [rsp+78h] [rbp-788h]
  std::filesystem::__cxx11::path *v368; // [rsp+80h] [rbp-780h]
  __int64 v369; // [rsp+88h] [rbp-778h]
  _QWORD *v370; // [rsp+90h] [rbp-770h]
  char *v371; // [rsp+98h] [rbp-768h]
  __int64 *v372; // [rsp+A0h] [rbp-760h]
  std::filesystem::__cxx11::path::_List *v373; // [rsp+A8h] [rbp-758h]
  void *v374[2]; // [rsp+B0h] [rbp-750h] BYREF
  _QWORD *v375; // [rsp+C0h] [rbp-740h]
  std::filesystem::__cxx11::path *v376; // [rsp+C8h] [rbp-738h]
  __int64 *v377; // [rsp+D0h] [rbp-730h]
  unsigned __int64 v378; // [rsp+D8h] [rbp-728h]
  void **p_src; // [rsp+E0h] [rbp-720h]
  char **v380; // [rsp+E8h] [rbp-718h]
  _QWORD *v381; // [rsp+F0h] [rbp-710h]
  std::filesystem *v382; // [rsp+F8h] [rbp-708h]
  __m128i v383; // [rsp+100h] [rbp-700h] BYREF
  __int8 v384; // [rsp+115h] [rbp-6EBh]
  char v385; // [rsp+116h] [rbp-6EAh]
  char v386; // [rsp+117h] [rbp-6E9h]
  __m128i **v387; // [rsp+118h] [rbp-6E8h]
  __int64 v388; // [rsp+120h] [rbp-6E0h]
  unsigned __int64 v389; // [rsp+128h] [rbp-6D8h]
  __m128i v390; // [rsp+130h] [rbp-6D0h] BYREF
  __int64 func_qty; // [rsp+140h] [rbp-6C0h]
  __m128i *v392; // [rsp+148h] [rbp-6B8h]
  std::filesystem::__cxx11::path *v393; // [rsp+150h] [rbp-6B0h]
  _QWORD *v394; // [rsp+158h] [rbp-6A8h]
  __int64 v395; // [rsp+160h] [rbp-6A0h] BYREF
  unsigned __int64 v396; // [rsp+168h] [rbp-698h]
  int v397; // [rsp+170h] [rbp-690h]
  __int64 v398; // [rsp+178h] [rbp-688h]
  char v399; // [rsp+180h] [rbp-680h] BYREF
  _QWORD *v400; // [rsp+188h] [rbp-678h]
  int v401; // [rsp+190h] [rbp-670h]
  __int64 v402; // [rsp+198h] [rbp-668h]
  __int64 v403; // [rsp+1A0h] [rbp-660h]
  __int128 v404; // [rsp+1A8h] [rbp-658h]
  __int64 v405; // [rsp+1C0h] [rbp-640h] BYREF
  __int128 v406; // [rsp+1C8h] [rbp-638h]
  __m256i v407; // [rsp+1E0h] [rbp-620h] BYREF
  __int128 v408; // [rsp+200h] [rbp-600h] BYREF
  __m128i v409; // [rsp+210h] [rbp-5F0h]
  __int64 v410; // [rsp+220h] [rbp-5E0h]
  __m128i v411[3]; // [rsp+230h] [rbp-5D0h] BYREF
  void *v412; // [rsp+260h] [rbp-5A0h] BYREF
  size_t v413; // [rsp+268h] [rbp-598h]
  __int64 v414; // [rsp+270h] [rbp-590h] BYREF
  void *src; // [rsp+280h] [rbp-580h] BYREF
  unsigned __int64 v416; // [rsp+288h] [rbp-578h]
  __int64 v417; // [rsp+290h] [rbp-570h] BYREF
  char *v418; // [rsp+2A0h] [rbp-560h] BYREF
  __int64 v419; // [rsp+2A8h] [rbp-558h]
  char v420; // [rsp+2B0h] [rbp-550h] BYREF
  void *v421; // [rsp+2C0h] [rbp-540h] BYREF
  size_t v422; // [rsp+2C8h] [rbp-538h]
  void *s2; // [rsp+2E0h] [rbp-520h]
  size_t v424; // [rsp+2E8h] [rbp-518h]
  _QWORD v425[2]; // [rsp+2F0h] [rbp-510h] BYREF
  void *s1; // [rsp+300h] [rbp-500h]
  size_t v427; // [rsp+308h] [rbp-4F8h]
  _QWORD v428[2]; // [rsp+310h] [rbp-4F0h] BYREF
  char v429; // [rsp+320h] [rbp-4E0h] BYREF
  _QWORD v430[2]; // [rsp+340h] [rbp-4C0h] BYREF
  _QWORD v431[2]; // [rsp+350h] [rbp-4B0h] BYREF
  void *v432; // [rsp+360h] [rbp-4A0h] BYREF
  __int64 v433; // [rsp+368h] [rbp-498h]
  _QWORD v434[2]; // [rsp+370h] [rbp-490h] BYREF
  void *v435; // [rsp+380h] [rbp-480h] BYREF
  size_t v436; // [rsp+388h] [rbp-478h]
  _QWORD v437[2]; // [rsp+390h] [rbp-470h] BYREF
  _QWORD v438[2]; // [rsp+3A0h] [rbp-460h] BYREF
  void *v439; // [rsp+3B0h] [rbp-450h] BYREF
  size_t n; // [rsp+3B8h] [rbp-448h]
  _QWORD v441[2]; // [rsp+3C0h] [rbp-440h] BYREF
  _QWORD v442[2]; // [rsp+3D0h] [rbp-430h] BYREF
  void *v443; // [rsp+3E0h] [rbp-420h] BYREF
  size_t v444[2]; // [rsp+3E8h] [rbp-418h] BYREF
  char v445; // [rsp+3F8h] [rbp-408h]
  __int128 v446; // [rsp+400h] [rbp-400h]
  __int8 *v447; // [rsp+410h] [rbp-3F0h] BYREF
  __m128i v448; // [rsp+418h] [rbp-3E8h] BYREF
  char v449; // [rsp+428h] [rbp-3D8h]
  __int64 v450; // [rsp+430h] [rbp-3D0h]
  __int64 v451; // [rsp+438h] [rbp-3C8h]
  char v452; // [rsp+440h] [rbp-3C0h] BYREF
  __m128i v453; // [rsp+448h] [rbp-3B8h] BYREF
  char v454; // [rsp+458h] [rbp-3A8h]
  __m128i v455; // [rsp+460h] [rbp-3A0h] BYREF
  __m128i *v456; // [rsp+470h] [rbp-390h] BYREF
  __m128i v457; // [rsp+478h] [rbp-388h] BYREF
  char v458; // [rsp+488h] [rbp-378h]
  __int128 v459; // [rsp+490h] [rbp-370h] BYREF
  const __m128i *v460; // [rsp+4A0h] [rbp-360h] BYREF
  __m128i v461; // [rsp+4A8h] [rbp-358h] BYREF
  __int64 v462; // [rsp+4B8h] [rbp-348h] BYREF
  __m128i v463; // [rsp+4C0h] [rbp-340h]
  _QWORD v464[3]; // [rsp+4D0h] [rbp-330h] BYREF
  char v465; // [rsp+4E8h] [rbp-318h] BYREF
  void *v466[2]; // [rsp+4F0h] [rbp-310h] BYREF
  __int64 v467; // [rsp+500h] [rbp-300h] BYREF
  __int64 v468; // [rsp+508h] [rbp-2F8h] BYREF
  const std::filesystem::__cxx11::path *v469; // [rsp+510h] [rbp-2F0h] BYREF
  __int64 v470; // [rsp+518h] [rbp-2E8h]
  _QWORD v471[2]; // [rsp+520h] [rbp-2E0h] BYREF
  __int64 v472; // [rsp+530h] [rbp-2D0h] BYREF
  _QWORD v473[3]; // [rsp+538h] [rbp-2C8h] BYREF
  _QWORD v474[3]; // [rsp+550h] [rbp-2B0h] BYREF
  char v475; // [rsp+568h] [rbp-298h] BYREF
  void *v476; // [rsp+5C0h] [rbp-240h]
  __int64 v477; // [rsp+5D0h] [rbp-230h] BYREF
  char *v478; // [rsp+5E8h] [rbp-218h] BYREF
  __m128i v479; // [rsp+5F0h] [rbp-210h] BYREF
  void *v480; // [rsp+600h] [rbp-200h]
  __int64 v481; // [rsp+610h] [rbp-1F0h] BYREF
  void *v482; // [rsp+620h] [rbp-1E0h]
  __int64 v483; // [rsp+628h] [rbp-1D8h]
  unsigned __int64 v484; // [rsp+648h] [rbp-1B8h]
  __int64 v485; // [rsp+668h] [rbp-198h]
  _OWORD v486[11]; // [rsp+6F0h] [rbp-110h] BYREF
  __m128i v487[2]; // [rsp+7A0h] [rbp-60h]
  unsigned __int64 v488; // [rsp+7C8h] [rbp-38h]

  v375 = a1;
  v488 = __readfsqword(0x28u);
  v392 = v411;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                       &byte_7,
                       0xDEC0DE00000004LL,
                       v411,
                       0,
                       &callui,
                       a6) != 14598366 )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Hexrays decompiler not available (check license)");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  ida_mcp::tools::cpp_class_recovery::ensure_recovery_done((ida_mcp::tools::cpp_class_recovery *)&byte_7);
  v357 = &v412;
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v412,
    ".",
    v9,
    v10,
    v11,
    v12,
    v314,
    v335,
    v356.m128i_i64[0]);
  v13 = v413;
  if ( *(_BYTE *)a2 == 1 )
  {
    v171 = *(_QWORD *)(a2 + 8);
    v172 = *(_QWORD *)(v171 + 16);
    v173 = v171 + 8;
    v174 = v173;
    if ( v172 )
    {
      v175 = v172;
      do
      {
        while ( 1 )
        {
          v178 = *(_QWORD *)(v175 + 40);
          if ( !v178 )
            break;
          v176 = 10;
          if ( v178 <= 0xA )
            v176 = *(_QWORD *)(v175 + 40);
          v177 = memcmp(*(const void **)(v175 + 32), "output_dir", v176);
          if ( v177 || (v177 = v178 - 10, (__int64)(v178 - 10) <= 0x7FFFFFFF) )
          {
            if ( v177 < 0 )
              break;
          }
          v174 = v175;
          v175 = *(_QWORD *)(v175 + 16);
          if ( !v175 )
            goto LABEL_199;
        }
        v175 = *(_QWORD *)(v175 + 24);
      }
      while ( v175 );
LABEL_199:
      if ( v173 != v174 )
      {
        v179 = *(_QWORD *)(v174 + 40);
        if ( !v179 )
          goto LABEL_229;
        v180 = 10;
        if ( v179 <= 0xA )
          v180 = *(_QWORD *)(v174 + 40);
        v181 = memcmp(*(const void **)(v174 + 32), "output_dir", v180);
        if ( v181 || (v181 = v179 - 10, (__int64)(v179 - 10) <= 0x7FFFFFFF) )
        {
          if ( v181 <= 0 )
          {
LABEL_229:
            if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() == 3 )
            {
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::get<std::string,std::string>();
              std::string::operator=((__int64)v357, (unsigned __int8 **)v466);
              std::string::_M_dispose();
            }
          }
        }
      }
    }
    v13 = v413;
  }
  v14 = v412;
  v370 = v437;
  v435 = v437;
  if ( !v412 && v13 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v411[0].m128i_i64[0] = v13;
  if ( v13 > 0xF )
  {
    v382 = (std::filesystem *)&v435;
    v435 = (void *)std::string::_M_create();
    v183 = v435;
    v437[0] = v411[0].m128i_i64[0];
LABEL_212:
    memcpy(v183, v14, v13);
    v13 = v411[0].m128i_i64[0];
    v15 = v435;
    goto LABEL_9;
  }
  if ( v13 == 1 )
  {
    LOBYTE(v437[0]) = *(_BYTE *)v412;
    goto LABEL_8;
  }
  if ( v13 )
  {
    v183 = v370;
    v382 = (std::filesystem *)&v435;
    goto LABEL_212;
  }
LABEL_8:
  v15 = v370;
  v382 = (std::filesystem *)&v435;
LABEL_9:
  v436 = v13;
  v15[v13] = 0;
  v373 = (std::filesystem::__cxx11::path::_List *)v438;
  std::filesystem::__cxx11::path::_List::_List((std::filesystem::__cxx11::path::_List *)v438);
  std::filesystem::__cxx11::path::_M_split_cmpts(v382);
  v397 = 0;
  v361 = std::_V2::system_category(v382);
  v398 = v361;
  v393 = (std::filesystem::__cxx11::path *)v466;
  std::filesystem::weakly_canonical();
  std::string::operator=((__int64)v382, (unsigned __int8 **)v466);
  v16 = v469;
  v17 = v438[0];
  v469 = nullptr;
  v438[0] = v16;
  if ( v17 )
    std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()();
  v18 = v393;
  v466[1] = nullptr;
  *(_BYTE *)v466[0] = 0;
  std::filesystem::__cxx11::path::_M_split_cmpts(v18);
  v19 = v469;
  if ( v469 )
    std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()();
  v377 = &v467;
  if ( v466[0] != &v467 )
  {
    v19 = (const std::filesystem::__cxx11::path *)(v467 + 1);
    operator delete(v466[0], v467 + 1);
  }
  if ( v397 )
    JUMPOUT(0x15A71B);
  if ( !(unsigned __int8)std::filesystem::__cxx11::path::has_root_directory(v382) )
  {
    std::filesystem::absolute();
    std::string::operator=((__int64)v382, (unsigned __int8 **)v393);
    v20 = v469;
    v21 = v438[0];
    v469 = nullptr;
    v438[0] = v20;
    if ( v21 )
      std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()();
    v22 = v393;
    v466[1] = nullptr;
    *(_BYTE *)v466[0] = 0;
    std::filesystem::__cxx11::path::_M_split_cmpts(v22);
    v19 = v469;
    if ( v469 )
      std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()();
    if ( v466[0] != v377 )
    {
      v19 = (const std::filesystem::__cxx11::path *)(v467 + 1);
      operator delete(v466[0], v467 + 1);
    }
    if ( v397 )
      JUMPOUT(0x15A7B5);
  }
  if ( (unsigned __int8)(std::filesystem::status(v382, v19) + 1) > 1u )
  {
    if ( (unsigned __int8)std::filesystem::status(v382, v19) != 2 )
    {
      v6 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
      std::runtime_error::runtime_error(v6, "Output path exists but is not a directory");
      __cxa_throw(
        v6,
        (struct type_info *)&`typeinfo for'std::runtime_error,
        (void (*)(void *))&std::runtime_error::~runtime_error);
    }
  }
  else
  {
    std::filesystem::create_directories();
  }
  v410 = 0;
  v408 = 0;
  v409 = 0;
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_27;
  v147 = *(_QWORD *)(a2 + 8);
  v148 = *(_QWORD *)(v147 + 16);
  if ( !v148 )
    goto LABEL_221;
  v149 = *(_QWORD *)(v147 + 16);
  v394 = (_QWORD *)(v147 + 8);
  v150 = v147 + 8;
  do
  {
    while ( 1 )
    {
      v153 = *(_QWORD *)(v149 + 40);
      if ( !v153 )
        break;
      v151 = 11;
      if ( v153 <= 0xB )
        v151 = *(_QWORD *)(v149 + 40);
      v152 = memcmp(*(const void **)(v149 + 32), "name_filter", v151);
      if ( v152 || (v152 = v153 - 11, (__int64)(v153 - 11) <= 0x7FFFFFFF) )
      {
        if ( v152 < 0 )
          break;
      }
      v150 = v149;
      v149 = *(_QWORD *)(v149 + 16);
      if ( !v149 )
        goto LABEL_154;
    }
    v149 = *(_QWORD *)(v149 + 24);
  }
  while ( v149 );
LABEL_154:
  if ( v394 != (_QWORD *)v150 )
  {
    v154 = *(_QWORD *)(v150 + 40);
    if ( !v154 )
      goto LABEL_218;
    v155 = 11;
    if ( v154 <= 0xB )
      v155 = *(_QWORD *)(v150 + 40);
    v156 = memcmp(*(const void **)(v150 + 32), "name_filter", v155);
    if ( v156 || (v156 = v154 - 11, (__int64)(v154 - 11) <= 0x7FFFFFFF) )
    {
      if ( v156 <= 0 )
      {
LABEL_218:
        if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() == 3 )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v387 = &v456;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::get<std::string,std::string>();
          if ( v457.m128i_i64[0] > 0x200uLL )
            JUMPOUT(0x15A381);
          if ( v457.m128i_i64[0] )
          {
            std::locale::locale((std::locale *)&v411[0].m128i_u64[1]);
            v411[1] = 0;
            std::__detail::_Compiler<std::regex_traits<char>>::_Compiler();
            v274 = _mm_load_si128(&v479);
            v275 = v411[1].m128i_i64[1];
            v479 = 0;
            v411[1] = v274;
            if ( v275 )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
            v276 = v482;
            v411[0].m128i_i32[0] = 23;
            if ( v482 )
            {
              v277 = v485 + 8;
              v278 = (void **)v484;
              if ( v484 < v485 + 8 )
              {
                do
                {
                  v279 = v278 + 1;
                  operator delete(*v278, 0x1F8u);
                  v278 = v279;
                }
                while ( (unsigned __int64)v279 < v277 );
                v276 = v482;
              }
              operator delete(v276, 8 * v483);
            }
            if ( v480 != &v481 )
              operator delete(v480, v481 + 1);
            if ( v479.m128i_i64[1] )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
            if ( v476 != &v477 )
              operator delete(v476, v477 + 1);
            LODWORD(v408) = v411[0].m128i_i32[0];
            std::locale::locale((std::locale *)((char *)&v408 + 8), (const std::locale *)&v411[0].m128i_u64[1]);
            si128 = _mm_load_si128(&v411[1]);
            LOBYTE(v410) = 1;
            v409 = si128;
            std::locale::~locale((std::locale *)&v411[0].m128i_u64[1]);
          }
          std::string::_M_dispose();
        }
        if ( *(_BYTE *)a2 != 1 )
        {
LABEL_27:
          v386 = 1;
          v384 = 1;
          goto LABEL_28;
        }
        v184 = *(_QWORD *)(a2 + 8);
        v148 = *(_QWORD *)(v184 + 16);
        v394 = (_QWORD *)(v184 + 8);
        if ( !v148 )
        {
LABEL_221:
          v386 = 1;
LABEL_188:
          v384 = 1;
          goto LABEL_28;
        }
      }
    }
  }
  v157 = v394;
  v158 = v148;
  do
  {
    while ( 1 )
    {
      v161 = *(_QWORD *)(v158 + 40);
      if ( !v161 )
        break;
      v159 = 12;
      if ( v161 <= 0xC )
        v159 = *(_QWORD *)(v158 + 40);
      v160 = memcmp(*(const void **)(v158 + 32), "skip_library", v159);
      if ( v160 || (v160 = v161 - 12, (__int64)(v161 - 12) <= 0x7FFFFFFF) )
      {
        if ( v160 < 0 )
          break;
      }
      v157 = (_QWORD *)v158;
      v158 = *(_QWORD *)(v158 + 16);
      if ( !v158 )
        goto LABEL_170;
    }
    v158 = *(_QWORD *)(v158 + 24);
  }
  while ( v158 );
LABEL_170:
  if ( v394 == v157 )
  {
    v386 = 1;
  }
  else
  {
    v162 = std::string::compare((void *)v157[4], v157[5], "skip_library");
    v386 = 1;
    if ( v162 <= 0 )
    {
      v386 = 1;
      if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() == 4 )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v407.m256i_i8[0] = 0;
        nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
        v386 = 0;
      }
      if ( *(_BYTE *)a2 != 1 )
        goto LABEL_188;
      v185 = *(_QWORD *)(a2 + 8);
      v148 = *(_QWORD *)(v185 + 16);
      v394 = (_QWORD *)(v185 + 8);
      if ( !v148 )
        goto LABEL_188;
    }
  }
  v163 = v394;
  do
  {
    while ( 1 )
    {
      v166 = *(_QWORD *)(v148 + 40);
      if ( !v166 )
        break;
      v164 = 11;
      if ( v166 <= 0xB )
        v164 = *(_QWORD *)(v148 + 40);
      v165 = memcmp(*(const void **)(v148 + 32), "skip_thunks", v164);
      if ( v165 || (v165 = v166 - 11, (__int64)(v166 - 11) <= 0x7FFFFFFF) )
      {
        if ( v165 < 0 )
          break;
      }
      v163 = (_QWORD *)v148;
      v148 = *(_QWORD *)(v148 + 16);
      if ( !v148 )
        goto LABEL_181;
    }
    v148 = *(_QWORD *)(v148 + 24);
  }
  while ( v148 );
LABEL_181:
  if ( v394 == v163 )
    goto LABEL_188;
  v167 = v163[5];
  if ( v167 )
  {
    v168 = 11;
    if ( v167 <= 0xB )
      v168 = v163[5];
    v169 = memcmp((const void *)v163[4], "skip_thunks", v168);
    if ( !v169 )
    {
      v170 = v167 - 11;
      v169 = v170;
      if ( v170 > 0x7FFFFFFF )
        goto LABEL_188;
    }
    if ( v169 > 0 )
      goto LABEL_188;
  }
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 4 )
    goto LABEL_188;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v411[0].m128i_i8[0] = 0;
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
  v384 = v411[0].m128i_i8[0];
LABEL_28:
  func_qty = get_func_qty();
  v399 = 0;
  v400 = nullptr;
  v371 = &v399;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v378 = 0;
  v389 = 0;
  v385 = v399;
  v366 = 0;
  v381 = v400;
  if ( func_qty )
  {
    v394 = nullptr;
    while ( 1 )
    {
      v23 = getn_func();
      v24 = (_QWORD *)v23;
      if ( v23 )
      {
        if ( (!v386 || (*(_BYTE *)(v23 + 16) & 4) == 0) && (!v384 || *(char *)(v23 + 16) >= 0) )
          break;
      }
      ++v389;
LABEL_66:
      v394 = (_QWORD *)((char *)v394 + 1);
      if ( (_QWORD *)func_qty == v394 )
        goto LABEL_67;
    }
    memset(v411, 0, 24);
    if ( get_func_name() <= 0 )
    {
      qsnprintf();
      p_src = &src;
      std::string::basic_string<std::allocator<char>>(
        (__int64 *)&src,
        (const char *)v486,
        v114,
        v115,
        v116,
        v117,
        v315,
        v336,
        v356.m128i_i64[0]);
    }
    else
    {
      v29 = (const char *)v411[0].m128i_i64[0];
      if ( !v411[0].m128i_i64[1] )
        v29 = _qstring<char>::c_str(void)const::nullstr;
      p_src = &src;
      std::string::basic_string<std::allocator<char>>(
        (__int64 *)&src,
        v29,
        v25,
        v26,
        v27,
        v28,
        v315,
        v336,
        v356.m128i_i64[0]);
    }
    if ( v411[0].m128i_i64[0] )
    {
      v411[0].m128i_i64[1] = 0;
      qfree();
      if ( (_BYTE)v410 )
        goto LABEL_41;
    }
    else if ( (_BYTE)v410 )
    {
LABEL_41:
      memset(v411, 0, 32);
      v30 = std::__detail::__regex_algo_impl<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
              (int)src,
              (int)src + (int)v416,
              (int)v392,
              (int)&v408,
              0,
              0,
              0);
      if ( v411[0].m128i_i64[0] )
        operator delete((void *)v411[0].m128i_i64[0], v411[1].m128i_i64[0] - v411[0].m128i_i64[0]);
      if ( !v30 )
        goto LABEL_97;
    }
    if ( !(unsigned __int8)ida_mcp::is_go_pathological_func() )
    {
      v411[0].m128i_i64[0] = 0;
      v411[0].m128i_i64[1] = -1;
      memset(&v411[1], 0, 24);
      *(_OWORD *)v407.m256i_i8 = (unsigned __int64)v24;
      *(_OWORD *)&v407.m256i_u64[2] = 0;
      hexdsp = (__int64 (__fastcall *)(__int64, __m256i *, __m128i *, __int64))get_hexdsp();
      v390.m128i_i64[0] = (__int64)&v407;
      v388 = hexdsp(566, &v407, v392, 1);
      if ( v407.m256i_i64[1] )
      {
        v407.m256i_i64[2] = 0;
        qfree();
      }
      if ( !v388 )
      {
        memset(&v407, 0, 24);
        v32 = (void (__fastcall *)(__int64, __int64, __m128i *))get_hexdsp();
        v32(440, v390.m128i_i64[0], v392);
        if ( v385 == 1 )
        {
          v187 = v381[5];
        }
        else
        {
          if ( v385 != 2 )
            goto LABEL_50;
          v187 = (__int64)(v381[1] - *v381) >> 4;
        }
        if ( v187 > 0x63 )
        {
LABEL_60:
          ++v378;
          if ( v407.m256i_i64[0] )
          {
            v407.m256i_i64[1] = 0;
            qfree();
          }
LABEL_62:
          if ( v411[1].m128i_i64[0] )
          {
            v411[1].m128i_i64[1] = 0;
            qfree();
          }
          goto LABEL_64;
        }
LABEL_50:
        v452 = 0;
        v383.m128i_i64[0] = (__int64)&v453;
        v453.m128i_i64[0] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v452 = 3;
        v33 = (__int64 *)operator new(0x20u);
        v390 = (__m128i)(unsigned __int64)v33;
        std::string::basic_string<std::allocator<char>>(v33, "name", v34, v35, v36, v37, v315, v336, v356.m128i_i64[0]);
        v38 = _mm_load_si128(&v390);
        v454 = 0;
        v367 = &v455;
        v455.m128i_i64[0] = 0;
        v453 = v38;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v454 = 3;
        v39 = src;
        v40 = v416;
        v41 = (_QWORD *)operator new(0x20u);
        v45 = v41 + 2;
        v403 = v40;
        v46 = v41;
        *v41 = v41 + 2;
        if ( v40 > 0xF )
        {
          v256 = std::string::_M_create();
          *v46 = v256;
          v45 = (_BYTE *)v256;
          v257 = v403;
          v47 = (__m128i)(unsigned __int64)v46;
          v46[2] = v403;
          v48 = v257 + 1;
          if ( v257 )
          {
            v49 = -1;
            if ( !v48 )
              goto LABEL_53;
            goto LABEL_52;
          }
        }
        else
        {
          v47 = (__m128i)(unsigned __int64)v41;
          v48 = v40 + 1;
          if ( v40 )
          {
LABEL_52:
            v390 = v47;
            memcpy(v45, v39, v48);
            v49 = v403;
            v47 = _mm_load_si128(&v390);
LABEL_53:
            v46[1] = v49;
            v455 = v47;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v393,
              (__int64)&v452,
              2,
              v42,
              v43,
              v44,
              v316,
              v337,
              v356.m128i_i32[0],
              v356.m128i_i32[2],
              (int)v357,
              (int)v358,
              (__int64)v359,
              (int)v360,
              v361,
              (int)v362,
              v363,
              v364,
              v365.m128i_i64[0],
              v365.m128i_i32[2],
              v366);
            v467 = 0;
            v387 = &v456;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
            v457.m128i_i64[1] = 0;
            v374[0] = &v447;
            ida_mcp::format_ea[abi:cxx11]();
            v458 = 0;
            v365.m128i_i64[0] = (__int64)&v459;
            *(_QWORD *)&v459 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v458 = 3;
            v50 = (_QWORD *)operator new(0x20u);
            v53 = (unsigned __int64 *)v447;
            v54 = v50 + 2;
            v55 = v448.m128i_i64[0];
            *v50 = v50 + 2;
            if ( v53 == &v448.m128i_u64[1] )
            {
              v56 = v55 + 1;
              if ( (unsigned int)(v55 + 1) >= 8 )
              {
                v50[2] = v448.m128i_i64[1];
                *(_QWORD *)((char *)v54 + (unsigned int)v56 - 8) = *(__int64 *)((char *)v448.m128i_i64
                                                                              + (unsigned int)v56);
                v51 = (unsigned __int64)(v50 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                v270 = (char *)v54 - v51;
                v52 = (__int8 *)((char *)&v448.m128i_u64[1] - v270);
                v56 = ((_DWORD)v270 + (_DWORD)v56) & 0xFFFFFFF8;
                if ( (unsigned int)v56 >= 8 )
                {
                  v271 = v394;
                  v56 = (unsigned int)v56 & 0xFFFFFFF8;
                  v272 = 0;
                  do
                  {
                    v273 = v272;
                    v272 += 8;
                    *(_QWORD *)(v51 + v273) = *(_QWORD *)&v52[v273];
                  }
                  while ( v272 < (unsigned int)v56 );
                  v394 = v271;
                }
              }
              else if ( (v56 & 4) != 0 )
              {
                v56 = (unsigned int)v56;
                *((_DWORD *)v50 + 4) = v448.m128i_i32[2];
                v51 = *(unsigned int *)((char *)&v448.m128i_u32[1] + (unsigned int)v56);
                *(_DWORD *)((char *)v54 + (unsigned int)v56 - 4) = v51;
              }
              else if ( (_DWORD)v55 != -1 )
              {
                v51 = v448.m128i_u8[8];
                *((_BYTE *)v50 + 16) = v448.m128i_i8[8];
                if ( (v56 & 2) != 0 )
                {
                  v56 = (unsigned int)v56;
                  v51 = *(unsigned __int16 *)((char *)&v448.m128i_u16[3] + (unsigned int)v56);
                  *(_WORD *)((char *)v54 + (unsigned int)v56 - 2) = v51;
                }
              }
            }
            else
            {
              *v50 = v53;
              v56 = v448.m128i_i64[1];
              v50[2] = v448.m128i_i64[1];
            }
            v50[1] = v55;
            v447 = &v448.m128i_i8[8];
            v448.m128i_i64[0] = 0;
            v448.m128i_i8[8] = 0;
            v459 = (unsigned __int64)v50;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              &v468,
              (__int64)v387,
              2,
              v56,
              v51,
              (__int64)v52,
              v317,
              v338,
              v356.m128i_i32[0],
              v356.m128i_i32[2],
              (int)v357,
              (int)v358,
              (__int64)v359,
              (int)v360,
              v361,
              (int)v362,
              v363,
              v364,
              v365.m128i_i64[0],
              v365.m128i_i32[2],
              v366);
            LOBYTE(v460) = 0;
            v470 = 0;
            v461.m128i_i64[0] = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            LOBYTE(v460) = 3;
            v57 = (__int64 *)operator new(0x20u);
            v390 = (__m128i)(unsigned __int64)v57;
            std::string::basic_string<std::allocator<char>>(
              v57,
              "error",
              v58,
              v59,
              v60,
              v61,
              v318,
              v339,
              v356.m128i_i64[0]);
            v461 = _mm_load_si128(&v390);
            if ( v407.m256i_i64[1] )
              v62 = (char *)v407.m256i_i64[0];
            else
              v62 = _qstring<char>::c_str(void)const::nullstr;
            v403 = (__int64)v62;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
            v463.m128i_i64[1] = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v471,
              (__int64)&v460,
              2,
              v63,
              v64,
              v65,
              v319,
              v340,
              v356.m128i_i32[0],
              v356.m128i_i32[2],
              (int)v357,
              (int)v358,
              (__int64)v359,
              (int)v360,
              v361,
              (int)v362,
              v363,
              v364,
              v365.m128i_i64[0],
              v365.m128i_i32[2],
              v366);
            v66 = v393;
            v472 = 0;
            v369 = 3;
            v368 = v393;
            LOBYTE(v405) = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              &v405,
              (__int64)v393,
              3,
              v67,
              v68,
              v69,
              v320,
              v341,
              v356.m128i_i32[0],
              v356.m128i_i32[2],
              (int)v357,
              (int)v358,
              (__int64)v359,
              (int)v360,
              v361,
              (int)v362,
              v363,
              v364,
              v365.m128i_i64[0],
              v365.m128i_i32[2],
              v366);
            v399 = v385;
            v400 = v381;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
            v70 = (std::filesystem::__cxx11::path *)v473;
            v385 = v399;
            v381 = v400;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v71 = v394;
            do
            {
              v70 = (std::filesystem::__cxx11::path *)((char *)v70 - 24);
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
            while ( v70 != v66 );
            v394 = v71;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            std::string::_M_dispose();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            goto LABEL_60;
          }
        }
        *v45 = *v39;
        v49 = v403;
        goto LABEL_53;
      }
      v118 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
      v119 = v118(560, v388);
      v120 = 0;
      v403 = 0;
      v404 = 0;
      if ( *(_QWORD *)(v119 + 8) )
      {
        while ( 1 )
        {
          memset(&v407, 0, 24);
          tag_remove();
          v121 = (v407.m256i_i64[1] == 0) + v407.m256i_i64[1] - 1;
          v122 = v121;
          if ( (v407.m256i_i64[1] == 0) + v407.m256i_i64[1] != 1 )
          {
            v123 = v403;
            v124 = ((_QWORD)v404 == 0) + (_QWORD)v404 - 1LL;
            v125 = v121 + v124;
            v126 = v121 + ((_QWORD)v404 == 0) + (_QWORD)v404;
            if ( *((_QWORD *)&v404 + 1) < v126 )
            {
              v383.m128i_i64[0] = v121 + v124;
              v387 = (__m128i **)(v121 + ((_QWORD)v404 == 0) + (_QWORD)v404);
              v403 = qvector_reserve();
              v125 = v383.m128i_i64[0];
              v123 = v403;
              v126 = (unsigned __int64)v387;
            }
            *(_QWORD *)&v404 = v126;
            *(_BYTE *)(v123 + v125) = 0;
            memcpy((void *)(v124 + v403), (const void *)v407.m256i_i64[0], v122);
          }
          if ( v407.m256i_i64[0] )
          {
            v407.m256i_i64[1] = 0;
            ++v120;
            qfree();
            if ( v120 >= *(_QWORD *)(v119 + 8) )
              break;
          }
          else if ( ++v120 >= *(_QWORD *)(v119 + 8) )
          {
            break;
          }
          v127 = v403;
          v128 = ((_QWORD)v404 == 0) + (_QWORD)v404 - 1LL;
          if ( *((_QWORD *)&v404 + 1) < (unsigned __int64)(v128 + 2) )
          {
            v403 = qvector_reserve();
            v127 = v403;
          }
          *(_QWORD *)&v404 = v128 + 2;
          *(_BYTE *)(v127 + v128 + 1) = 0;
          *(_BYTE *)(v128 + v403) = 10;
        }
      }
      v395 = 0;
      v405 = 0;
      v372 = &v395;
      v406 = 0;
      v129 = (unsigned __int8 (__fastcall *)(__int64, __int64, __int64 *))get_hexdsp();
      v372 = &v395;
      if ( v129(538, v388, &v395) )
      {
        memset(&v407, 0, 24);
        print_tinfo();
        tag_remove();
        if ( v407.m256i_i64[0] )
        {
          v407.m256i_i64[1] = 0;
          qfree();
        }
      }
      v419 = 0;
      v418 = &v420;
      v420 = 0;
      v460 = (const __m128i *)&v461.m128i_u64[1];
      v461.m128i_i64[0] = 0;
      v461.m128i_i8[8] = 0;
      std::string::reserve();
      std::string::append();
      std::string::append();
      std::string::append();
      std::string::basic_string();
      if ( (void *)(0x7FFFFFFFFFFFFFFELL - v419) < v466[1] )
        JUMPOUT(0x15A59D);
      v380 = &v418;
      std::string::_M_append();
      std::string::_M_dispose();
      std::string::_M_dispose();
      v387 = &v456;
      ida_mcp::format_ea[abi:cxx11]();
      std::string::_M_replace();
      std::string::basic_string();
      std::string::append();
      std::string::basic_string();
      if ( (void *)(0x7FFFFFFFFFFFFFFELL - v419) < v466[1] )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append();
      std::string::_M_dispose();
      std::string::_M_dispose();
      std::string::_M_dispose();
      v130 = v24[1] - *v24;
      if ( v130 <= 9 )
      {
        v133 = 1;
        v132 = 1;
      }
      else
      {
        v131 = v24[1] - *v24;
        v132 = 1;
        while ( 1 )
        {
          if ( v131 <= 0x63 )
          {
            v133 = ++v132;
            goto LABEL_125;
          }
          if ( v131 <= 0x3E7 )
          {
            v133 = v132 + 2;
            v132 += 2;
            goto LABEL_125;
          }
          if ( v131 <= 0x270F )
          {
            v133 = v132 + 3;
            v132 += 3;
            goto LABEL_125;
          }
          v132 += 4;
          if ( v131 <= 0x1869F )
            break;
          v131 /= 0x2710u;
        }
        v133 = v132;
      }
LABEL_125:
      v383.m128i_i32[0] = v132;
      v367 = (__m128i *)&v457.m128i_u64[1];
      v456 = (__m128i *)&v457.m128i_u64[1];
      v457.m128i_i64[0] = 0;
      v457.m128i_i8[8] = 0;
      std::string::reserve();
      v134 = v456;
      v486[0] = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
      v486[1] = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
      v486[2] = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
      v486[3] = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
      v486[4] = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
      v486[5] = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
      v486[6] = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
      v486[7] = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
      v486[8] = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
      v486[9] = _mm_load_si128((const __m128i *)&xmmword_3E2000);
      v486[10] = _mm_load_si128((const __m128i *)&xmmword_3E2010);
      v487[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
      *(__m128i *)((char *)v487 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
      if ( v130 > 0x63 )
      {
        v135 = v394;
        v136 = v383.m128i_i32[0] - 1;
        do
        {
          v137 = v130 % 0x64;
          v138 = v130;
          v130 /= 0x64u;
          v134->m128i_i8[v136] = *((_BYTE *)v486 + 2 * v137 + 1);
          v139 = v136 - 1;
          v136 -= 2;
          v134->m128i_i8[v139] = *((_BYTE *)v486 + 2 * v137);
        }
        while ( v138 > 0x270F );
        v394 = v135;
      }
      v140 = v130 + 48;
      if ( v130 > 9 )
      {
        v134->m128i_i8[1] = *((_BYTE *)v486 + 2 * v130 + 1);
        v140 = *((_BYTE *)v486 + 2 * v130);
      }
      v134->m128i_i8[0] = v140;
      v457.m128i_i64[0] = v133;
      v456->m128i_i8[v133] = 0;
      std::string::_M_replace();
      std::string::basic_string();
      std::string::append();
      std::string::basic_string();
      if ( (void *)(0x7FFFFFFFFFFFFFFELL - v419) < v466[1] )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append();
      std::string::_M_dispose();
      std::string::_M_dispose();
      std::string::_M_dispose();
      std::string::append();
      if ( (unsigned __int64)v406 > 1 )
      {
        std::string::append();
        std::string::append();
        std::string::append();
      }
      std::string::append();
      std::string::append();
      v460 = (const __m128i *)&v461.m128i_u64[1];
      v461.m128i_i64[0] = 0;
      v461.m128i_i8[8] = 0;
      std::string::reserve();
      v383.m128i_i64[0] = (__int64)src + v416;
      if ( src != (char *)src + v416 )
      {
        v141 = (unsigned __int8 *)src;
        do
        {
          while ( 1 )
          {
            v142 = *v141;
            if ( isalnum(*v141) || (unsigned __int8)(v142 - 45) <= 1u || v142 == 95 )
              break;
            std::string::push_back();
            if ( (unsigned __int8 *)v383.m128i_i64[0] == ++v141 )
              goto LABEL_241;
          }
          v143 = v460;
          v144 = (std::filesystem::__cxx11::path *)v461.m128i_i64[0];
          v145 = 15;
          if ( v460 != (const __m128i *)&v461.m128i_u64[1] )
            v145 = v461.m128i_u64[1];
          v146 = (_BYTE *)(v461.m128i_i64[0] + 1);
          if ( v145 < v461.m128i_i64[0] + 1 )
          {
            v374[0] = (void *)(v461.m128i_i64[0] + 1);
            v376 = (std::filesystem::__cxx11::path *)v461.m128i_i64[0];
            std::string::_M_mutate();
            v143 = v460;
            v146 = v374[0];
            v144 = v376;
          }
          *((_BYTE *)v144 + (_QWORD)v143) = v142;
          ++v141;
          v461.m128i_i64[0] = (__int64)v146;
          v146[(_QWORD)v460] = 0;
        }
        while ( (unsigned __int8 *)v383.m128i_i64[0] != v141 );
      }
LABEL_241:
      if ( v461.m128i_i64[0] > 0xC8uLL )
      {
        v253 = (unsigned __int8 **)v393;
        v407.m256i_i64[0] = 200;
        v254 = v460;
        v466[0] = v377;
        v255 = (__m128i *)std::string::_M_create();
        v466[0] = v255;
        v467 = v407.m256i_i64[0];
        *v255 = _mm_loadu_si128(v254);
        v255[1] = _mm_loadu_si128(v254 + 1);
        v255[2] = _mm_loadu_si128(v254 + 2);
        v255[3] = _mm_loadu_si128(v254 + 3);
        v255[4] = _mm_loadu_si128(v254 + 4);
        v255[5] = _mm_loadu_si128(v254 + 5);
        v255[6] = _mm_loadu_si128(v254 + 6);
        v255[7] = _mm_loadu_si128(v254 + 7);
        v255[8] = _mm_loadu_si128(v254 + 8);
        v255[9] = _mm_loadu_si128(v254 + 9);
        v255[10] = _mm_loadu_si128(v254 + 10);
        v255[11] = _mm_loadu_si128(v254 + 11);
        v255[12].m128i_i64[0] = v254[12].m128i_i64[0];
        v466[1] = (void *)v407.m256i_i64[0];
        *((_BYTE *)v466[0] + v407.m256i_i64[0]) = 0;
        std::string::operator=((__int64)&v460, v253);
        std::string::_M_dispose();
      }
      ida_mcp::format_ea[abi:cxx11]();
      std::string::append();
      std::string::basic_string();
      v188 = v457.m128i_i64[0] + v461.m128i_i64[0];
      if ( v456 == v367 )
      {
        if ( v188 <= 0xF || v460 == (const __m128i *)&v461.m128i_u64[1] )
        {
LABEL_248:
          std::string::_M_append();
LABEL_249:
          std::string::basic_string();
          std::string::append();
          v360 = &v421;
          std::string::basic_string();
          std::string::_M_dispose();
          std::string::_M_dispose();
          std::string::_M_dispose();
          std::string::_M_dispose();
          v189 = v421;
          v190 = (void *)v422;
          v466[0] = v377;
          if ( !v421 && v422 )
            std::__throw_logic_error("basic_string: construction from null is not valid");
          v407.m256i_i64[0] = v422;
          if ( v422 > 0xF )
          {
            v466[0] = (void *)std::string::_M_create();
            v252 = (__int64 *)v466[0];
            v467 = v407.m256i_i64[0];
          }
          else
          {
            if ( v422 == 1 )
            {
              LOBYTE(v467) = *(_BYTE *)v421;
              goto LABEL_254;
            }
            if ( !v422 )
            {
LABEL_254:
              v191 = v377;
              goto LABEL_255;
            }
            v252 = v377;
          }
          memcpy(v252, v189, (size_t)v190);
          v190 = (void *)v407.m256i_i64[0];
          v191 = (__int64 *)v466[0];
LABEL_255:
          v466[1] = v190;
          *((_BYTE *)v190 + (_QWORD)v191) = 0;
          std::filesystem::__cxx11::path::_List::_List((std::filesystem::__cxx11::path::_List *)&v469);
          std::filesystem::__cxx11::path::_M_split_cmpts(v393);
          v376 = (std::filesystem::__cxx11::path *)&v439;
          v359 = v441;
          v439 = v441;
          std::string::_M_construct<true>();
          v358 = v442;
          std::filesystem::__cxx11::path::_List::_List((std::filesystem::__cxx11::path::_List *)v442, v373);
          std::filesystem::__cxx11::path::operator/=();
          if ( v469 )
            std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()();
          if ( v466[0] != v377 )
            operator delete(v466[0], v467 + 1);
          v401 = 0;
          v402 = v361;
          v362 = (std::filesystem::__cxx11::path *)&v443;
          std::filesystem::weakly_canonical();
          v192 = v435;
          v193 = v425;
          v194 = v436;
          s2 = v425;
          if ( !v435 && v436 )
            std::__throw_logic_error("basic_string: construction from null is not valid");
          v407.m256i_i64[0] = v436;
          if ( v436 > 0xF )
          {
            v383.m128i_i64[0] = (__int64)v435;
            s2 = (void *)std::string::_M_create();
            v193 = s2;
            v192 = (void *)v383.m128i_i64[0];
            v425[0] = v407.m256i_i64[0];
          }
          else
          {
            if ( v436 == 1 )
            {
              LOBYTE(v425[0]) = *(_BYTE *)v435;
              goto LABEL_264;
            }
            if ( !v436 )
            {
LABEL_264:
              v424 = v194;
              *((_BYTE *)v193 + v194) = 0;
              if ( v424 && *((char *)s2 + v424 - 1) != 47 )
                std::string::push_back();
              v195 = v443;
              v196 = v428;
              v197 = v444[0];
              s1 = v428;
              if ( !v443 && v444[0] )
                std::__throw_logic_error("basic_string: construction from null is not valid");
              v407.m256i_i64[0] = v444[0];
              if ( v444[0] > 0xF )
              {
                v383.m128i_i64[0] = (__int64)v443;
                s1 = (void *)std::string::_M_create();
                v196 = s1;
                v195 = (void *)v383.m128i_i64[0];
                v428[0] = v407.m256i_i64[0];
              }
              else
              {
                if ( v444[0] == 1 )
                {
                  LOBYTE(v428[0]) = *(_BYTE *)v443;
                  goto LABEL_272;
                }
                if ( !v444[0] )
                {
LABEL_272:
                  v427 = v197;
                  *((_BYTE *)v196 + v197) = 0;
                  if ( !v401 && v427 >= v424 && (!v424 || !memcmp(s1, s2, v424)) )
                  {
                    std::ofstream::basic_ofstream();
                    if ( (unsigned __int8)std::__basic_file<char>::is_open() )
                    {
                      std::__ostream_insert<char,std::char_traits<char>>();
                      if ( !std::filebuf::close() )
                        std::ios::clear();
                      ++v366;
                      goto LABEL_348;
                    }
                    ++v378;
                    if ( v385 == 1 )
                    {
                      v313 = v381[5];
                    }
                    else
                    {
                      if ( v385 != 2 )
                      {
LABEL_402:
                        LOBYTE(v447) = 0;
                        v367 = &v448;
                        v448.m128i_i64[0] = 0;
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                        LOBYTE(v447) = 3;
                        v284 = (__int64 *)operator new(0x20u);
                        v383 = (__m128i)(unsigned __int64)v284;
                        std::string::basic_string<std::allocator<char>>(
                          v284,
                          "name",
                          v285,
                          v286,
                          v287,
                          v288,
                          v315,
                          v336,
                          v356.m128i_i64[0]);
                        v448 = _mm_load_si128(&v383);
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string&,std::string,0>();
                        v451 = 0;
                        v374[0] = &v447;
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                          &v460,
                          (__int64)&v447,
                          2,
                          v289,
                          v290,
                          v291,
                          v331,
                          v352,
                          v356.m128i_i32[0],
                          v356.m128i_i32[2],
                          (int)v357,
                          (int)v358,
                          (__int64)v359,
                          (int)v360,
                          v361,
                          (int)v362,
                          v363,
                          v364,
                          v365.m128i_i64[0],
                          v365.m128i_i32[2],
                          v366);
                        v461.m128i_i64[1] = 0;
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
                        v453.m128i_i64[1] = 0;
                        v365.m128i_i64[0] = (__int64)&v429;
                        ida_mcp::format_ea[abi:cxx11]();
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
                        v455.m128i_i64[1] = 0;
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                          &v462,
                          (__int64)&v452,
                          2,
                          v292,
                          v293,
                          v294,
                          v332,
                          v353,
                          v356.m128i_i32[0],
                          v356.m128i_i32[2],
                          (int)v357,
                          (int)v358,
                          (__int64)v359,
                          (int)v360,
                          v361,
                          (int)v362,
                          v363,
                          v364,
                          v365.m128i_i64[0],
                          v365.m128i_i32[2],
                          v366);
                        LOBYTE(v456) = 0;
                        v463.m128i_i64[1] = 0;
                        v457.m128i_i64[0] = 0;
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                        LOBYTE(v456) = 3;
                        v295 = (__int64 *)operator new(0x20u);
                        v383 = (__m128i)(unsigned __int64)v295;
                        std::string::basic_string<std::allocator<char>>(
                          v295,
                          "error",
                          v296,
                          v297,
                          v298,
                          v299,
                          v333,
                          v354,
                          v356.m128i_i64[0]);
                        v300 = _mm_load_si128(&v383);
                        v301 = v439;
                        v302 = v431;
                        v430[0] = v431;
                        v303 = n;
                        v457 = v300;
                        if ( !v439 && n )
                          std::__throw_logic_error("basic_string: construction from null is not valid");
                        v407.m256i_i64[0] = n;
                        if ( n > 0xF )
                        {
                          v359 = v439;
                          v383.m128i_i64[0] = (__int64)v430;
                          v430[0] = std::string::_M_create();
                          v302 = (_QWORD *)v430[0];
                          v301 = v359;
                          v431[0] = v407.m256i_i64[0];
                          goto LABEL_418;
                        }
                        if ( n == 1 )
                        {
                          LOBYTE(v431[0]) = *(_BYTE *)v439;
LABEL_407:
                          v383.m128i_i64[0] = (__int64)v430;
                        }
                        else
                        {
                          if ( !n )
                            goto LABEL_407;
                          v383.m128i_i64[0] = (__int64)v430;
LABEL_418:
                          memcpy(v302, v301, v303);
                          v303 = v407.m256i_i64[0];
                          v302 = (_QWORD *)v430[0];
                        }
                        v430[1] = v303;
                        *((_BYTE *)v302 + v303) = 0;
                        std::string::insert();
                        v359 = &v432;
                        std::string::basic_string();
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
                        *((_QWORD *)&v459 + 1) = 0;
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                          v464,
                          (__int64)v387,
                          2,
                          v304,
                          v305,
                          v306,
                          v334,
                          v355,
                          v356.m128i_i32[0],
                          v356.m128i_i32[2],
                          (int)v357,
                          (int)v358,
                          (__int64)v359,
                          (int)v360,
                          v361,
                          (int)v362,
                          v363,
                          v364,
                          v365.m128i_i64[0],
                          v365.m128i_i32[2],
                          v366);
                        v407.m256i_i8[0] = 0;
                        v464[2] = 0;
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                          v390.m128i_i64[0],
                          (__int64)&v460,
                          3,
                          v307,
                          v308,
                          v309,
                          (int)&v460,
                          3,
                          v356.m128i_i32[0],
                          v356.m128i_i32[2],
                          (int)v357,
                          (int)v358,
                          (__int64)v359,
                          (int)v360,
                          v361,
                          (int)v362,
                          v363,
                          v364,
                          v365.m128i_i64[0],
                          v365.m128i_i32[2],
                          v366);
                        v399 = v385;
                        v400 = v381;
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
                        v310 = (const __m128i **)&v465;
                        v385 = v399;
                        v381 = v400;
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                        v311 = v394;
                        do
                        {
                          v310 -= 3;
                          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                        }
                        while ( v310 != &v460 );
                        v394 = v311;
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                        std::string::_M_dispose();
                        std::string::_M_dispose();
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                        std::string::_M_dispose();
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_348:
                        v478 = (char *)&`vtable for'std::ofstream + 64;
                        *(__m128i *)v466 = _mm_unpacklo_epi64(
                                             (__m128i)((unsigned __int64)&`vtable for'std::ofstream + 24),
                                             (__m128i)((unsigned __int64)&`vtable for'std::filebuf + 16));
                        std::filebuf::close();
                        std::__basic_file<char>::~__basic_file();
                        v466[1] = (char *)&`vtable for'std::streambuf + 16;
                        std::locale::~locale((std::locale *)&v472);
                        v262 = *((void **)&`VTT for'std::ofstream + 2);
                        v466[0] = *((void **)&`VTT for'std::ofstream + 1);
                        *(void **)((char *)v466 + *((_QWORD *)v466[0] - 3)) = v262;
                        v478 = (char *)&`vtable for'std::ios + 16;
                        std::ios_base::~ios_base((std::ios_base *)&v478);
                        std::string::_M_dispose();
                        std::string::_M_dispose();
                        std::filesystem::__cxx11::path::~path(v362);
                        std::filesystem::__cxx11::path::~path(v376);
                        std::string::_M_dispose();
                        std::string::_M_dispose();
                        if ( v405 )
                        {
                          *(_QWORD *)&v406 = 0;
                          qfree();
                        }
                        clear_tinfo_t();
                        if ( v403 )
                        {
                          *(_QWORD *)&v404 = 0;
                          qfree();
                        }
                        qrefcnt_t<cfunc_t>::delref(v388);
                        if ( v411[1].m128i_i64[0] )
                        {
                          v411[1].m128i_i64[1] = 0;
                          qfree();
                        }
                        std::string::_M_dispose();
                        goto LABEL_66;
                      }
                      v313 = (__int64)(v381[1] - *v381) >> 4;
                    }
                    if ( v313 <= 0x63 )
                      goto LABEL_402;
                    goto LABEL_348;
                  }
                  if ( v385 == 1 )
                  {
                    v258 = v381[5];
                  }
                  else
                  {
                    if ( v385 != 2 )
                      goto LABEL_276;
                    v258 = (__int64)(v381[1] - *v381) >> 4;
                  }
                  if ( v258 > 0x63 )
                    goto LABEL_284;
LABEL_276:
                  v452 = 0;
                  v383.m128i_i64[0] = (__int64)&v453;
                  v453.m128i_i64[0] = 0;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  v452 = 3;
                  v198 = (__int64 *)operator new(0x20u);
                  *(_OWORD *)v374 = (unsigned __int64)v198;
                  std::string::basic_string<std::allocator<char>>(
                    v198,
                    "name",
                    v199,
                    v200,
                    v201,
                    v202,
                    v315,
                    v336,
                    v356.m128i_i64[0]);
                  v203 = _mm_load_si128((const __m128i *)v374);
                  v454 = 0;
                  v367 = &v455;
                  v455.m128i_i64[0] = 0;
                  v453 = v203;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  v454 = 3;
                  v204 = v416;
                  v374[0] = src;
                  v205 = (_QWORD *)operator new(0x20u);
                  v209 = v205 + 2;
                  v396 = v204;
                  v210 = v205;
                  *v205 = v205 + 2;
                  if ( v204 > 0xF )
                  {
                    v260 = std::string::_M_create();
                    *v210 = v260;
                    v209 = (_BYTE *)v260;
                    v261 = v396;
                    v211 = (__m128i)(unsigned __int64)v210;
                    v210[2] = v396;
                    v212 = v261 + 1;
                    if ( v261 )
                    {
                      v213 = -1;
                      if ( !v212 )
                        goto LABEL_279;
                      goto LABEL_278;
                    }
                  }
                  else
                  {
                    v211 = (__m128i)(unsigned __int64)v205;
                    v212 = v204 + 1;
                    if ( v204 )
                    {
LABEL_278:
                      v365 = v211;
                      memcpy(v209, v374[0], v212);
                      v213 = v396;
                      v211 = _mm_load_si128(&v365);
LABEL_279:
                      v210[1] = v213;
                      v455 = v211;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                        v393,
                        (__int64)&v452,
                        2,
                        v206,
                        v207,
                        v208,
                        v325,
                        v346,
                        v356.m128i_i32[0],
                        v356.m128i_i32[2],
                        (int)v357,
                        (int)v358,
                        (__int64)v359,
                        (int)v360,
                        v361,
                        (int)v362,
                        v363,
                        v364,
                        v365.m128i_i64[0],
                        v365.m128i_i32[2],
                        v366);
                      v467 = 0;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
                      v457.m128i_i64[1] = 0;
                      v374[0] = &v447;
                      ida_mcp::format_ea[abi:cxx11]();
                      v458 = 0;
                      v365.m128i_i64[0] = (__int64)&v459;
                      *(_QWORD *)&v459 = 0;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      v458 = 3;
                      v214 = (_QWORD *)operator new(0x20u);
                      v217 = (unsigned __int64 *)v447;
                      v218 = v214 + 2;
                      v219 = v448.m128i_i64[0];
                      *v214 = v214 + 2;
                      if ( v217 == &v448.m128i_u64[1] )
                      {
                        v220 = v219 + 1;
                        if ( (unsigned int)(v219 + 1) >= 8 )
                        {
                          v214[2] = v448.m128i_i64[1];
                          *(_QWORD *)((char *)v218 + (unsigned int)v220 - 8) = *(__int64 *)((char *)v448.m128i_i64
                                                                                          + (unsigned int)v220);
                          v215 = (unsigned __int64)(v214 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                          v280 = (char *)v218 - v215;
                          v216 = (__int8 *)((char *)&v448.m128i_u64[1] - v280);
                          v220 = ((_DWORD)v280 + (_DWORD)v220) & 0xFFFFFFF8;
                          if ( (unsigned int)v220 >= 8 )
                          {
                            v281 = v394;
                            v220 = (unsigned int)v220 & 0xFFFFFFF8;
                            v282 = 0;
                            do
                            {
                              v283 = v282;
                              v282 += 8;
                              *(_QWORD *)(v215 + v283) = *(_QWORD *)&v216[v283];
                            }
                            while ( v282 < (unsigned int)v220 );
                            v394 = v281;
                          }
                        }
                        else if ( (v220 & 4) != 0 )
                        {
                          v220 = (unsigned int)v220;
                          *((_DWORD *)v214 + 4) = v448.m128i_i32[2];
                          v215 = *(unsigned int *)((char *)&v448.m128i_u32[1] + (unsigned int)v220);
                          *(_DWORD *)((char *)v218 + (unsigned int)v220 - 4) = v215;
                        }
                        else if ( (_DWORD)v219 != -1 )
                        {
                          v215 = v448.m128i_u8[8];
                          *((_BYTE *)v214 + 16) = v448.m128i_i8[8];
                          if ( (v220 & 2) != 0 )
                          {
                            v220 = (unsigned int)v220;
                            v215 = *(unsigned __int16 *)((char *)&v448.m128i_u16[3] + (unsigned int)v220);
                            *(_WORD *)((char *)v218 + (unsigned int)v220 - 2) = v215;
                          }
                        }
                      }
                      else
                      {
                        *v214 = v217;
                        v220 = v448.m128i_i64[1];
                        v214[2] = v448.m128i_i64[1];
                      }
                      v214[1] = v219;
                      v447 = &v448.m128i_i8[8];
                      v448.m128i_i64[0] = 0;
                      v448.m128i_i8[8] = 0;
                      v459 = (unsigned __int64)v214;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                        &v468,
                        (__int64)v387,
                        2,
                        v220,
                        v215,
                        (__int64)v216,
                        v326,
                        v347,
                        v356.m128i_i32[0],
                        v356.m128i_i32[2],
                        (int)v357,
                        (int)v358,
                        (__int64)v359,
                        (int)v360,
                        v361,
                        (int)v362,
                        v363,
                        v364,
                        v365.m128i_i64[0],
                        v365.m128i_i32[2],
                        v366);
                      LOBYTE(v460) = 0;
                      v470 = 0;
                      v461.m128i_i64[0] = 0;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      LOBYTE(v460) = 3;
                      v221 = (__int64 *)operator new(0x20u);
                      v356 = (__m128i)(unsigned __int64)v221;
                      std::string::basic_string<std::allocator<char>>(
                        v221,
                        "error",
                        v222,
                        v223,
                        v224,
                        v225,
                        v327,
                        v348,
                        (__int64)v221);
                      v226 = _mm_load_si128(&v356);
                      LOBYTE(v462) = 0;
                      v463.m128i_i64[0] = 0;
                      v461 = v226;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      LOBYTE(v462) = 3;
                      v227 = (__int64 *)operator new(0x20u);
                      v356 = (__m128i)(unsigned __int64)v227;
                      std::string::basic_string<std::allocator<char>>(
                        v227,
                        "Path escape attempt detected",
                        v228,
                        v229,
                        v230,
                        v231,
                        v328,
                        v349,
                        (__int64)v227);
                      v463 = _mm_load_si128(&v356);
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                        v471,
                        (__int64)&v460,
                        2,
                        v232,
                        v233,
                        v234,
                        v329,
                        v350,
                        v356.m128i_i32[0],
                        v356.m128i_i32[2],
                        (int)v357,
                        (int)v358,
                        (__int64)v359,
                        (int)v360,
                        v361,
                        (int)v362,
                        v363,
                        v364,
                        v365.m128i_i64[0],
                        v365.m128i_i32[2],
                        v366);
                      v472 = 0;
                      v407.m256i_i8[0] = 0;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                        v390.m128i_i64[0],
                        (__int64)v393,
                        3,
                        v235,
                        v236,
                        v237,
                        v330,
                        v351,
                        v356.m128i_i32[0],
                        v356.m128i_i32[2],
                        (int)v357,
                        (int)v358,
                        (__int64)v359,
                        (int)v360,
                        v361,
                        (int)v362,
                        (int)v393,
                        3,
                        v365.m128i_i64[0],
                        v365.m128i_i32[2],
                        v366);
                      v399 = v385;
                      v400 = v381;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
                      v238 = (std::filesystem::__cxx11::path *)v473;
                      v385 = v399;
                      v381 = v400;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      v239 = v394;
                      v240 = v393;
                      do
                      {
                        v238 = (std::filesystem::__cxx11::path *)((char *)v238 - 24);
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      }
                      while ( v238 != v240 );
                      v394 = v239;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      std::string::_M_dispose();
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_284:
                      ++v378;
                      std::string::_M_dispose();
                      std::string::_M_dispose();
                      if ( (_QWORD)v446 )
                        std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()();
                      if ( v443 != &v444[1] )
                        operator delete(v443, v444[1] + 1);
                      if ( v442[0] )
                        std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()();
                      if ( v439 != v359 )
                        operator delete(v439, v441[0] + 1LL);
                      std::string::_M_dispose();
                      std::string::_M_dispose();
                      if ( v405 )
                      {
                        *(_QWORD *)&v406 = 0;
                        qfree();
                      }
                      clear_tinfo_t();
                      if ( v403 )
                      {
                        *(_QWORD *)&v404 = 0;
                        qfree();
                      }
                      v390.m128i_i32[0] = *(_DWORD *)(v388 + 104);
                      v241 = v390.m128i_i32[0] == 1;
                      *(_DWORD *)(v388 + 104) = v390.m128i_i32[0] - 1;
                      if ( v241 )
                      {
                        v242 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
                        v243 = v388;
                        v242(564, v388);
                        if ( *(_QWORD *)(v243 + 160) )
                        {
                          *(_QWORD *)(v243 + 168) = 0;
                          qfree();
                        }
                        v244 = *(_QWORD *)(v388 + 128);
                        if ( v244 )
                        {
                          v245 = *(_QWORD *)(v388 + 136);
                          if ( v245 )
                          {
                            v246 = v394;
                            for ( i = 0; i != v245; ++i )
                            {
                              while ( *(_QWORD *)(v244 + 32 * i) )
                              {
                                *(_QWORD *)(v244 + 32 * i++ + 8) = 0;
                                qfree();
                                v244 = *(_QWORD *)(v388 + 128);
                                if ( v245 == i )
                                  goto LABEL_304;
                              }
                            }
LABEL_304:
                            v394 = v246;
                          }
                          *(_QWORD *)(v388 + 136) = 0;
                          qfree();
                        }
                        v248 = v388;
                        v249 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
                        v249(493, v248 + 16);
                        v250 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
                        v250(444, v248 + 16);
                        v251 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
                        v251(130, v248);
                      }
                      goto LABEL_62;
                    }
                  }
                  *v209 = *(_BYTE *)v374[0];
                  v213 = v396;
                  goto LABEL_279;
                }
              }
              memcpy(v196, v195, v197);
              v197 = v407.m256i_i64[0];
              v196 = s1;
              goto LABEL_272;
            }
          }
          memcpy(v193, v192, v194);
          v194 = v407.m256i_i64[0];
          v193 = s2;
          goto LABEL_264;
        }
      }
      else if ( v457.m128i_i64[1] >= v188 || v460 == (const __m128i *)&v461.m128i_u64[1] )
      {
LABEL_247:
        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFELL - v457.m128i_i64[0]) < v461.m128i_i64[0] )
          std::__throw_length_error("basic_string::append");
        goto LABEL_248;
      }
      if ( v461.m128i_i64[1] >= v188 )
      {
        std::string::_M_replace();
        goto LABEL_249;
      }
      goto LABEL_247;
    }
LABEL_97:
    ++v389;
LABEL_64:
    if ( src != &v417 )
      operator delete(src, v417 + 1);
    goto LABEL_66;
  }
LABEL_67:
  LOBYTE(v443) = 0;
  v444[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v443) = 3;
  v72 = operator new(0x20u);
  v73 = v382;
  *(_QWORD *)v72 = v72 + 16;
  strcpy((char *)(v72 + 16), "output_dir");
  *(_QWORD *)(v72 + 8) = 10;
  v376 = (std::filesystem::__cxx11::path *)&v439;
  *(_OWORD *)v444 = (unsigned __int64)v72;
  std::filesystem::absolute((std::filesystem *)&v439, v73);
  v74 = v439;
  v75 = n;
  v394 = v434;
  v432 = v434;
  if ( !v439 && n )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v411[0].m128i_i64[0] = n;
  if ( n > 0xF )
  {
    v432 = (void *)std::string::_M_create();
    v182 = v432;
    v434[0] = v411[0].m128i_i64[0];
  }
  else
  {
    if ( n == 1 )
    {
      LOBYTE(v434[0]) = *(_BYTE *)v439;
LABEL_72:
      v76 = v394;
      goto LABEL_73;
    }
    if ( !n )
      goto LABEL_72;
    v182 = v394;
  }
  memcpy(v182, v74, v75);
  v75 = v411[0].m128i_i64[0];
  v76 = v432;
LABEL_73:
  v433 = v75;
  v76[v75] = 0;
  v445 = 0;
  *(_QWORD *)&v446 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v445 = 3;
  v77 = (_QWORD *)operator new(0x20u);
  v78 = (char *)v432;
  v79 = v77 + 2;
  v80 = (char *)v394;
  *v77 = v77 + 2;
  v81 = v433;
  if ( v78 == v80 )
  {
    v259 = v433 + 1;
    if ( (unsigned int)(v433 + 1) >= 8 )
    {
      v77[2] = *(_QWORD *)v80;
      *(_QWORD *)((char *)v79 + v259 - 8) = *(_QWORD *)&v80[v259 - 8];
      v263 = (unsigned __int64)(v77 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v264 = (char *)v79 - v263;
      v265 = (char *)(v80 - v264);
      v266 = ((_DWORD)v264 + v259) & 0xFFFFFFF8;
      if ( v266 >= 8 )
      {
        v267 = v266 & 0xFFFFFFF8;
        v268 = 0;
        do
        {
          v269 = v268;
          v268 += 8;
          *(_QWORD *)(v263 + v269) = *(_QWORD *)&v265[v269];
        }
        while ( v268 < v267 );
        v394 = v80;
      }
    }
    else if ( (v259 & 4) != 0 )
    {
      *((_DWORD *)v77 + 4) = *(_DWORD *)v80;
      *(_DWORD *)((char *)v79 + v259 - 4) = *(_DWORD *)&v80[v259 - 4];
    }
    else if ( (_DWORD)v433 != -1 )
    {
      *((_BYTE *)v77 + 16) = *v80;
      if ( (v259 & 2) != 0 )
        *(_WORD *)((char *)v79 + v259 - 2) = *(_WORD *)((char *)v394 + v259 - 2);
    }
  }
  else
  {
    *v77 = v78;
    v77[2] = v434[0];
  }
  v77[1] = v81;
  LOBYTE(v434[0]) = 0;
  v432 = v394;
  v362 = (std::filesystem::__cxx11::path *)&v443;
  v433 = 0;
  v446 = (unsigned __int64)v77;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v393,
    (const __m128i *)&v443);
  LOBYTE(v447) = 0;
  v367 = &v448;
  v467 = 0;
  v448.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v447) = 3;
  v82 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v82,
    "total_functions",
    v83,
    v84,
    v85,
    v86,
    v315,
    v336,
    v356.m128i_i64[0]);
  v449 = 6;
  v450 = func_qty;
  v451 = 0;
  v448 = (__m128i)(unsigned __int64)v82;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v468,
    (const __m128i *)&v447);
  v452 = 0;
  v383.m128i_i64[0] = (__int64)&v453;
  v470 = 0;
  v453.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v452 = 3;
  v87 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v87,
    "exported_count",
    v88,
    v89,
    v90,
    v91,
    v321,
    v342,
    v356.m128i_i64[0]);
  v454 = 6;
  v455 = (__m128i)(unsigned __int64)v366;
  v453 = (__m128i)(unsigned __int64)v87;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v471,
    (const __m128i *)&v452);
  LOBYTE(v456) = 0;
  v472 = 0;
  v457.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v456) = 3;
  v92 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v92,
    "skipped_count",
    v93,
    v94,
    v95,
    v96,
    v322,
    v343,
    v356.m128i_i64[0]);
  v458 = 6;
  v459 = v389;
  v457 = (__m128i)(unsigned __int64)v92;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v473,
    (const __m128i *)&v456);
  LOBYTE(v460) = 0;
  v473[2] = 0;
  v461.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v460) = 3;
  v97 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v97,
    "failed_count",
    v98,
    v99,
    v100,
    v101,
    v323,
    v344,
    v356.m128i_i64[0]);
  LOBYTE(v462) = 6;
  v463 = (__m128i)v378;
  v461 = (__m128i)(unsigned __int64)v97;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v474,
    (const __m128i *)&v460);
  v474[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v375,
    (__int64)v393,
    5,
    v102,
    v103,
    v104,
    v324,
    v345,
    v356.m128i_i32[0],
    v356.m128i_i32[2],
    (int)v357,
    (int)v358,
    (__int64)v359,
    (int)v360,
    v361,
    (int)v362,
    v363,
    v364,
    v365.m128i_i64[0],
    v365.m128i_i32[2],
    v366);
  v105 = v393;
  v390.m128i_i64[0] = (__int64)&v461;
  v106 = (std::filesystem::__cxx11::path *)&v475;
  do
  {
    v106 = (std::filesystem::__cxx11::path *)((char *)v106 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v106 != v105 );
  v107 = v394;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v432 != v107 )
    operator delete(v432, v434[0] + 1LL);
  if ( v442[0] )
    std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()();
  if ( v439 != v441 )
    operator delete(v439, v441[0] + 1LL);
  switch ( v385 )
  {
    case 1:
      v186 = v381[5] == 0;
      break;
    case 2:
      v186 = v381[1] == *v381;
      break;
    case 0:
      goto LABEL_87;
    default:
      goto LABEL_86;
  }
  if ( !v186 )
  {
LABEL_86:
    v411[0].m128i_i8[0] = 0;
    v399 = v385;
    v400 = v381;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v108 = v411[0].m128i_i8[0];
    v109 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v110 = *(_BYTE *)v109;
    v111 = v411[0].m128i_i64[1];
    *(_BYTE *)v109 = v108;
    v112 = *(_QWORD *)(v109 + 8);
    *(_QWORD *)(v109 + 8) = v111;
    v411[0].m128i_i64[1] = v112;
    v411[0].m128i_i8[0] = v110;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
LABEL_87:
  v399 = v385;
  v400 = v381;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( (_BYTE)v410 )
  {
    LOBYTE(v410) = 0;
    if ( v409.m128i_i64[1] )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
    std::locale::~locale((std::locale *)((char *)&v408 + 8));
  }
  if ( v438[0] )
    std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()();
  if ( v435 != v370 )
    operator delete(v435, v437[0] + 1LL);
  if ( v412 != &v414 )
    operator delete(v412, v414 + 1);
  return v375;
}

