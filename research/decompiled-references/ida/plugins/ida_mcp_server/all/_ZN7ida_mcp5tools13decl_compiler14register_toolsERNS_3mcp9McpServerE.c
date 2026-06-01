unsigned __int64 __fastcall ida_mcp::tools::decl_compiler::register_tools(
        ida_mcp::tools::decl_compiler *this,
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
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *v38; // rbp
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __m128 v45; // xmm1
  __m128i v46; // xmm0
  char v47; // si
  __m128i *v48; // r15
  __int64 v49; // rdx
  __m128i v50; // xmm2
  __int64 v51; // rax
  __int64 v52; // rax
  const __m128i *v53; // rsi
  __int64 *v54; // r15
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 *v59; // r15
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rax
  const __m128i *v66; // rsi
  __int64 *v67; // r15
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 *v72; // r15
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 *v77; // r15
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // rax
  const __m128i *v84; // rsi
  __int64 *v85; // r15
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 *v90; // r15
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 *v95; // r15
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 *v100; // r15
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __m128i v105; // xmm0
  __m128i *v106; // r15
  __int64 v107; // rax
  __m128i v108; // xmm3
  __int64 v109; // rax
  __int64 v110; // rax
  const __m128i *v111; // rsi
  __int64 *v112; // r15
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  const __m128i *v120; // rsi
  __int64 *v121; // r15
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  const __m128i *v127; // rsi
  _QWORD *v128; // rdi
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  const __m128i *v132; // rsi
  __int64 *v133; // r15
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 *v138; // r15
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 *v143; // r15
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rax
  __int64 v149; // rax
  __m128i v150; // xmm0
  __m128i *v151; // r15
  __int64 v152; // rax
  __m128i v153; // xmm4
  __int64 v154; // rax
  __int64 *v155; // r15
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 *v160; // r15
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rax
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
  __int64 v177; // rax
  const __m128i *v178; // rsi
  _QWORD *v179; // rdi
  __int64 *v180; // r15
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 v185; // rax
  __int64 v186; // rax
  const __m128i *v187; // rsi
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
  __m128i v204; // xmm0
  __m128i *v205; // r15
  __int64 v206; // rax
  __m128i v207; // xmm5
  int v209; // [rsp+0h] [rbp-578h]
  int v210; // [rsp+0h] [rbp-578h]
  int v211; // [rsp+0h] [rbp-578h]
  int v212; // [rsp+0h] [rbp-578h]
  const __m128i *v213; // [rsp+0h] [rbp-578h]
  int v214; // [rsp+0h] [rbp-578h]
  int v215; // [rsp+0h] [rbp-578h]
  int v216; // [rsp+0h] [rbp-578h]
  _QWORD *v217; // [rsp+0h] [rbp-578h]
  int v218; // [rsp+0h] [rbp-578h]
  const __m128i *v219; // [rsp+0h] [rbp-578h]
  int v220; // [rsp+0h] [rbp-578h]
  int v221; // [rsp+0h] [rbp-578h]
  int v222; // [rsp+0h] [rbp-578h]
  int v223; // [rsp+0h] [rbp-578h]
  int v224; // [rsp+0h] [rbp-578h]
  _QWORD *v225; // [rsp+0h] [rbp-578h]
  const __m128i *v226; // [rsp+0h] [rbp-578h]
  int v227; // [rsp+0h] [rbp-578h]
  int v228; // [rsp+0h] [rbp-578h]
  int v229; // [rsp+0h] [rbp-578h]
  int v230; // [rsp+0h] [rbp-578h]
  int v231; // [rsp+0h] [rbp-578h]
  _QWORD *v232; // [rsp+0h] [rbp-578h]
  const __m128i *v233; // [rsp+0h] [rbp-578h]
  int v234; // [rsp+0h] [rbp-578h]
  int v235; // [rsp+0h] [rbp-578h]
  int v236; // [rsp+0h] [rbp-578h]
  int v237; // [rsp+8h] [rbp-570h]
  int v238; // [rsp+8h] [rbp-570h]
  int v239; // [rsp+8h] [rbp-570h]
  int v240; // [rsp+8h] [rbp-570h]
  int v241; // [rsp+8h] [rbp-570h]
  int v242; // [rsp+8h] [rbp-570h]
  const __m128i *v243; // [rsp+8h] [rbp-570h]
  int v244; // [rsp+8h] [rbp-570h]
  int v245; // [rsp+8h] [rbp-570h]
  int v246; // [rsp+8h] [rbp-570h]
  int v247; // [rsp+8h] [rbp-570h]
  _QWORD *v248; // [rsp+8h] [rbp-570h]
  int v249; // [rsp+8h] [rbp-570h]
  const __m128i *v250; // [rsp+8h] [rbp-570h]
  int v251; // [rsp+8h] [rbp-570h]
  int v252; // [rsp+8h] [rbp-570h]
  int v253; // [rsp+8h] [rbp-570h]
  _QWORD *v254; // [rsp+8h] [rbp-570h]
  int v255; // [rsp+8h] [rbp-570h]
  const __m128i *v256; // [rsp+8h] [rbp-570h]
  int v257; // [rsp+8h] [rbp-570h]
  int v258; // [rsp+8h] [rbp-570h]
  int v259; // [rsp+8h] [rbp-570h]
  int v260; // [rsp+8h] [rbp-570h]
  int v261; // [rsp+8h] [rbp-570h]
  _QWORD *v262; // [rsp+8h] [rbp-570h]
  int v263; // [rsp+8h] [rbp-570h]
  const __m128i *v264; // [rsp+8h] [rbp-570h]
  __int64 v265; // [rsp+10h] [rbp-568h]
  __int64 v266; // [rsp+10h] [rbp-568h]
  __int64 v267; // [rsp+10h] [rbp-568h]
  __int64 v268; // [rsp+10h] [rbp-568h]
  __int64 v269; // [rsp+10h] [rbp-568h]
  __int64 v270; // [rsp+10h] [rbp-568h]
  __int64 v271; // [rsp+10h] [rbp-568h]
  __int64 v272; // [rsp+10h] [rbp-568h]
  __int64 v273; // [rsp+10h] [rbp-568h]
  __int64 v274; // [rsp+10h] [rbp-568h]
  __int64 v275; // [rsp+10h] [rbp-568h]
  __int64 v276; // [rsp+10h] [rbp-568h]
  __int64 v277; // [rsp+10h] [rbp-568h]
  __int64 v278; // [rsp+10h] [rbp-568h]
  __int64 v279; // [rsp+10h] [rbp-568h]
  __int64 v280; // [rsp+10h] [rbp-568h]
  __int64 v281; // [rsp+10h] [rbp-568h]
  __int64 v282; // [rsp+10h] [rbp-568h]
  __int64 v283; // [rsp+10h] [rbp-568h]
  __int64 v284; // [rsp+10h] [rbp-568h]
  __int64 v285; // [rsp+10h] [rbp-568h]
  __int64 v286; // [rsp+10h] [rbp-568h]
  __int64 v287; // [rsp+10h] [rbp-568h]
  __int64 v288; // [rsp+10h] [rbp-568h]
  __int64 v289; // [rsp+10h] [rbp-568h]
  __int64 v290; // [rsp+10h] [rbp-568h]
  __int64 v291; // [rsp+10h] [rbp-568h]
  __int64 v292; // [rsp+10h] [rbp-568h]
  __m128i v293; // [rsp+80h] [rbp-4F8h] BYREF
  void **v294; // [rsp+90h] [rbp-4E8h]
  ida_mcp::tools::decl_compiler *v295; // [rsp+98h] [rbp-4E0h]
  const __m128i *v296; // [rsp+A0h] [rbp-4D8h]
  const __m128i *v297; // [rsp+A8h] [rbp-4D0h]
  const __m128i *v298; // [rsp+B0h] [rbp-4C8h]
  const __m128i *v299; // [rsp+B8h] [rbp-4C0h]
  const __m128i *v300; // [rsp+C0h] [rbp-4B8h]
  const __m128i *v301; // [rsp+C8h] [rbp-4B0h]
  const __m128i *v302; // [rsp+D0h] [rbp-4A8h]
  char *v303; // [rsp+D8h] [rbp-4A0h]
  const __m128i *v304; // [rsp+E0h] [rbp-498h]
  char *v305; // [rsp+E8h] [rbp-490h]
  char *v306; // [rsp+F0h] [rbp-488h]
  char *v307; // [rsp+F8h] [rbp-480h]
  char *v308; // [rsp+100h] [rbp-478h]
  char *v309; // [rsp+108h] [rbp-470h]
  char *v310; // [rsp+110h] [rbp-468h]
  __int64 *v311; // [rsp+118h] [rbp-460h]
  char *v312; // [rsp+120h] [rbp-458h]
  char *v313; // [rsp+128h] [rbp-450h]
  __int8 *v314; // [rsp+130h] [rbp-448h]
  char *v315; // [rsp+138h] [rbp-440h]
  __m128i *v316; // [rsp+140h] [rbp-438h]
  char v317[8]; // [rsp+148h] [rbp-430h]
  __int64 *v318; // [rsp+150h] [rbp-428h]
  char v319[8]; // [rsp+158h] [rbp-420h]
  char v320[8]; // [rsp+160h] [rbp-418h]
  char v321[8]; // [rsp+168h] [rbp-410h]
  char v322[8]; // [rsp+170h] [rbp-408h]
  char v323[8]; // [rsp+178h] [rbp-400h]
  char v324[8]; // [rsp+180h] [rbp-3F8h]
  char v325[8]; // [rsp+188h] [rbp-3F0h]
  char v326[8]; // [rsp+190h] [rbp-3E8h]
  void **v327; // [rsp+198h] [rbp-3E0h]
  __int64 *v328; // [rsp+1A0h] [rbp-3D8h]
  __int128 *v329; // [rsp+1A8h] [rbp-3D0h]
  __m128i v330; // [rsp+1B0h] [rbp-3C8h] BYREF
  __int64 v331; // [rsp+1C0h] [rbp-3B8h] BYREF
  __int64 v332; // [rsp+1C8h] [rbp-3B0h] BYREF
  char v333; // [rsp+1D0h] [rbp-3A8h] BYREF
  __int128 v334; // [rsp+1D8h] [rbp-3A0h]
  char v335; // [rsp+1E8h] [rbp-390h]
  __int128 v336; // [rsp+1F0h] [rbp-388h] BYREF
  char v337; // [rsp+200h] [rbp-378h] BYREF
  int v338[4]; // [rsp+208h] [rbp-370h] BYREF
  char v339; // [rsp+218h] [rbp-360h]
  int v340[4]; // [rsp+220h] [rbp-358h]
  char v341; // [rsp+230h] [rbp-348h] BYREF
  int v342[4]; // [rsp+238h] [rbp-340h]
  char v343; // [rsp+248h] [rbp-330h]
  __int64 v344[2]; // [rsp+250h] [rbp-328h]
  char v345; // [rsp+260h] [rbp-318h] BYREF
  __int64 v346[2]; // [rsp+268h] [rbp-310h]
  char v347; // [rsp+278h] [rbp-300h]
  int v348[4]; // [rsp+280h] [rbp-2F8h]
  __int64 v349; // [rsp+290h] [rbp-2E8h] BYREF
  char v350; // [rsp+298h] [rbp-2E0h] BYREF
  __int64 v351; // [rsp+2A0h] [rbp-2D8h]
  __int64 v352; // [rsp+2A8h] [rbp-2D0h] BYREF
  char v353; // [rsp+2B0h] [rbp-2C8h] BYREF
  __int64 v354; // [rsp+2B8h] [rbp-2C0h]
  char v355; // [rsp+2C0h] [rbp-2B8h] BYREF
  int v356[4]; // [rsp+2C8h] [rbp-2B0h]
  __int64 v357; // [rsp+2D8h] [rbp-2A0h] BYREF
  char v358; // [rsp+2E0h] [rbp-298h] BYREF
  __int64 v359; // [rsp+2E8h] [rbp-290h]
  char v360; // [rsp+2F0h] [rbp-288h] BYREF
  char v361[16]; // [rsp+2F8h] [rbp-280h]
  char v362; // [rsp+308h] [rbp-270h]
  int v363[4]; // [rsp+310h] [rbp-268h]
  char v364; // [rsp+320h] [rbp-258h] BYREF
  char v365[16]; // [rsp+328h] [rbp-250h]
  char v366; // [rsp+338h] [rbp-240h]
  __int128 v367; // [rsp+340h] [rbp-238h]
  __int64 v368; // [rsp+350h] [rbp-228h] BYREF
  char v369; // [rsp+358h] [rbp-220h] BYREF
  __int64 v370; // [rsp+360h] [rbp-218h]
  __int64 v371; // [rsp+368h] [rbp-210h] BYREF
  char v372; // [rsp+370h] [rbp-208h] BYREF
  __int64 v373; // [rsp+378h] [rbp-200h]
  char v374; // [rsp+380h] [rbp-1F8h] BYREF
  __int128 v375; // [rsp+388h] [rbp-1F0h]
  __int64 v376; // [rsp+398h] [rbp-1E0h] BYREF
  char v377; // [rsp+3A0h] [rbp-1D8h] BYREF
  __int64 v378; // [rsp+3A8h] [rbp-1D0h]
  __m128i v379; // [rsp+3B0h] [rbp-1C8h] BYREF
  __int64 v380; // [rsp+3C0h] [rbp-1B8h]
  __int64 v381; // [rsp+3C8h] [rbp-1B0h] BYREF
  char v382; // [rsp+3D0h] [rbp-1A8h] BYREF
  __int64 v383; // [rsp+3D8h] [rbp-1A0h]
  char v384; // [rsp+3E0h] [rbp-198h] BYREF
  __int128 v385; // [rsp+3E8h] [rbp-190h]
  __int64 v386; // [rsp+3F8h] [rbp-180h] BYREF
  char v387; // [rsp+400h] [rbp-178h] BYREF
  __int64 v388; // [rsp+408h] [rbp-170h]
  char v389; // [rsp+410h] [rbp-168h] BYREF
  __int128 v390; // [rsp+418h] [rbp-160h]
  __m128i v391; // [rsp+428h] [rbp-150h] BYREF
  __int64 v392; // [rsp+438h] [rbp-140h]
  __m128i v393; // [rsp+440h] [rbp-138h] BYREF
  void (__fastcall *v394[3])(__m128i *, __m128i *, __int64); // [rsp+450h] [rbp-128h] BYREF
  __int64 v395; // [rsp+468h] [rbp-110h]
  int v396[4]; // [rsp+470h] [rbp-108h] BYREF
  __int64 v397; // [rsp+480h] [rbp-F8h]
  char v398; // [rsp+488h] [rbp-F0h] BYREF
  void *v399; // [rsp+490h] [rbp-E8h] BYREF
  __int64 v400; // [rsp+498h] [rbp-E0h]
  _QWORD v401[2]; // [rsp+4A0h] [rbp-D8h] BYREF
  void *v402; // [rsp+4B0h] [rbp-C8h] BYREF
  __int64 v403; // [rsp+4B8h] [rbp-C0h]
  _QWORD v404[2]; // [rsp+4C0h] [rbp-B8h] BYREF
  char v405; // [rsp+4D0h] [rbp-A8h]
  __int64 v406; // [rsp+4D8h] [rbp-A0h] BYREF
  char v407; // [rsp+4F0h] [rbp-88h]
  ida_mcp::tools::decl_compiler *v408; // [rsp+4F8h] [rbp-80h]
  _QWORD v409[2]; // [rsp+508h] [rbp-70h] BYREF
  char v410; // [rsp+518h] [rbp-60h]
  char v411; // [rsp+528h] [rbp-50h]
  unsigned __int64 v412; // [rsp+538h] [rbp-40h]

  v295 = this;
  v412 = __readfsqword(0x28u);
  v399 = v401;
  v400 = 0;
  LOBYTE(v401[0]) = 0;
  v402 = v404;
  v403 = 0;
  LOBYTE(v404[0]) = 0;
  v294 = &v399;
  v405 = 0;
  v406 = 0;
  v407 = 0;
  v411 = 0;
  std::string::_M_replace();
  v327 = &v402;
  std::string::_M_replace();
  *(_QWORD *)v338 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v337 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v339 = 0;
  *(_QWORD *)v340 = 0;
  *(_OWORD *)v338 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v339 = 3;
  v3 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v3, "object", v4, v5, v6, v7, v209, v237, (__int64)v338);
  v300 = (const __m128i *)&v337;
  *(_OWORD *)v340 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v393,
    (const __m128i *)&v337);
  v394[0] = nullptr;
  v384 = 0;
  *(_QWORD *)&v385 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v384 = 3;
  v8 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v8, "properties", v9, v10, v11, v12, v210, v238, v265);
  v355 = 0;
  *(_QWORD *)v356 = 0;
  v385 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v355 = 3;
  v13 = operator new(0x20u);
  *(_QWORD *)v13 = v13 + 16;
  strcpy((char *)(v13 + 16), "declaration");
  *(_QWORD *)(v13 + 8) = 11;
  v341 = 0;
  *(_QWORD *)v342 = 0;
  *(_OWORD *)v356 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v341 = 3;
  v14 = operator new(0x20u);
  *(_QWORD *)v14 = v14 + 16;
  strcpy((char *)(v14 + 16), "type");
  *(_QWORD *)(v14 + 8) = 4;
  v343 = 0;
  v344[0] = 0;
  *(_OWORD *)v342 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v343 = 3;
  v15 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v15, "string", v16, v17, v18, v19, v211, v239, v266);
  v301 = (const __m128i *)&v341;
  *(_OWORD *)v344 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v349,
    (const __m128i *)&v341);
  v351 = 0;
  v345 = 0;
  v346[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v345 = 3;
  v20 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v20, "description", v21, v22, v23, v24, (int)&v349, v240, v267);
  v347 = 0;
  *(_QWORD *)v348 = 0;
  *(_OWORD *)v346 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v347 = 3;
  v25 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v25, "C declaration string", v26, v27, v28, v29, v212, v241, v268);
  v302 = (const __m128i *)&v345;
  *(_QWORD *)v319 = &v352;
  *(_OWORD *)v348 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v352,
    (const __m128i *)&v345);
  v354 = 0;
  *(_QWORD *)v320 = &v357;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v357,
    v213);
  v359 = 0;
  v297 = (const __m128i *)&v355;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v379,
    (const __m128i *)&v355);
  v380 = 0;
  v374 = 0;
  *(_QWORD *)&v375 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v374 = 3;
  v30 = operator new(0x20u);
  strcpy((char *)(v30 + 16), "silent");
  *(_QWORD *)v30 = v30 + 16;
  *(_QWORD *)(v30 + 8) = 6;
  v360 = 0;
  *(_QWORD *)v361 = 0;
  v375 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v360 = 3;
  v31 = operator new(0x20u);
  *(_QWORD *)v31 = v31 + 16;
  strcpy((char *)(v31 + 16), "type");
  *(_QWORD *)(v31 + 8) = 4;
  v362 = 0;
  *(_QWORD *)v363 = 0;
  *(_OWORD *)v361 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v362 = 3;
  v32 = operator new(0x20u);
  strcpy((char *)(v32 + 16), "boolean");
  *(_QWORD *)v32 = v32 + 16;
  *(_QWORD *)(v32 + 8) = 7;
  v303 = &v360;
  *(_OWORD *)v363 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v368,
    (const __m128i *)&v360);
  v370 = 0;
  v364 = 0;
  *(_QWORD *)v365 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v364 = 3;
  v33 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v33, "description", v34, v35, v36, v37, (int)v213, (int)&v368, v269);
  v366 = 0;
  *(_QWORD *)&v367 = 0;
  *(_OWORD *)v365 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v366 = 3;
  v38 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v38,
    "Suppress error messages (default true)",
    v39,
    v40,
    v41,
    v42,
    v214,
    v242,
    v270);
  v304 = (const __m128i *)&v364;
  *(_QWORD *)v321 = &v371;
  v367 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v371,
    (const __m128i *)&v364);
  v373 = 0;
  *(_QWORD *)v322 = &v376;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v376,
    v243);
  v378 = 0;
  v298 = (const __m128i *)&v374;
  *(_QWORD *)v323 = &v381;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v381,
    (const __m128i *)&v374);
  v383 = 0;
  *(_QWORD *)v324 = &v386;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v386,
    &v379);
  v388 = 0;
  v296 = (const __m128i *)&v384;
  *(_QWORD *)v325 = &v394[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v394[1],
    (const __m128i *)&v384);
  v395 = 0;
  v389 = 0;
  *(_QWORD *)&v390 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v389 = 3;
  v43 = operator new(0x20u);
  *(_QWORD *)v43 = v43 + 16;
  strcpy((char *)(v43 + 16), "required");
  *(_QWORD *)(v43 + 8) = 8;
  *(_QWORD *)&v334 = 0;
  v390 = (unsigned __int64)v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v333 = 3;
  v44 = operator new(0x20u);
  strcpy((char *)(v44 + 16), "declaration");
  *(_QWORD *)v44 = v44 + 16;
  v45 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v44 + 8) = 11;
  v315 = &v333;
  v316 = &v330;
  v293 = (__m128i)v45;
  v334 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v46 = _mm_load_si128(&v330);
  v392 = 0;
  v299 = (const __m128i *)&v389;
  *(_QWORD *)v326 = v396;
  v391 = v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v396,
    (const __m128i *)&v389);
  v397 = 0;
  LOBYTE(v331) = 0;
  *(_QWORD *)v317 = &v331;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v331,
    &v393,
    3);
  v47 = v405;
  v48 = (__m128i *)&v398;
  v49 = v332;
  v405 = v331;
  LOBYTE(v331) = v47;
  v332 = v406;
  v406 = v49;
  v318 = &v332;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v48 = (__m128i *)((char *)v48 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v48 != &v393 );
  v314 = &v391.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v313 = &v387;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v312 = &v382;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v311 = &v379.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v310 = &v377;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v309 = &v372;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v308 = &v369;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v307 = &v358;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v306 = &v353;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v305 = &v350;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v50 = _mm_load_si128(&v293);
  v393.m128i_i64[1] = 0;
  v393.m128i_i64[0] = (__int64)ida_mcp::tools::decl_compiler::`anonymous namespace'::parse_decl_impl;
  *(__m128i *)v394 = v50;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v394[0] )
    v394[0](&v393, &v393, 3);
  if ( v411 && v410 && v408 != (ida_mcp::tools::decl_compiler *)v409 )
    operator delete(v408, v409[0] + 1LL);
  if ( v407 )
  {
    v407 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v328 = &v406;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v402 != v404 )
    operator delete(v402, v404[0] + 1LL);
  if ( v399 != v401 )
    operator delete(v399, v401[0] + 1LL);
  v399 = v401;
  v400 = 0;
  LOBYTE(v401[0]) = 0;
  v402 = v404;
  v403 = 0;
  LOBYTE(v404[0]) = 0;
  v405 = 0;
  v406 = 0;
  v407 = 0;
  v411 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v337 = 0;
  *(_QWORD *)v338 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v337 = 3;
  v51 = operator new(0x20u);
  *(_QWORD *)v51 = v51 + 16;
  strcpy((char *)(v51 + 16), "type");
  *(_QWORD *)(v51 + 8) = 4;
  v339 = 0;
  *(_QWORD *)v340 = 0;
  *(_OWORD *)v338 = (unsigned __int64)v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v339 = 3;
  v52 = operator new(0x20u);
  *(_QWORD *)v52 = v52 + 16;
  v53 = v300;
  strcpy((char *)(v52 + 16), "object");
  *(_QWORD *)(v52 + 8) = 6;
  *(_OWORD *)v340 = (unsigned __int64)v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v393,
    v53);
  v394[0] = nullptr;
  v384 = 0;
  *(_QWORD *)&v385 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v384 = 3;
  v54 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v54, "properties", v55, v56, v57, v58, v215, (int)v243, v271);
  v355 = 0;
  *(_QWORD *)v356 = 0;
  v385 = (unsigned __int64)v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v355 = 3;
  v59 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v59, "declarations", v60, v61, v62, v63, v216, v244, v272);
  v341 = 0;
  *(_QWORD *)v342 = 0;
  *(_OWORD *)v356 = (unsigned __int64)v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v341 = 3;
  v64 = operator new(0x20u);
  *(_QWORD *)v64 = v64 + 16;
  strcpy((char *)(v64 + 16), "type");
  *(_QWORD *)(v64 + 8) = 4;
  v343 = 0;
  v344[0] = 0;
  *(_OWORD *)v342 = (unsigned __int64)v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v343 = 3;
  v65 = operator new(0x20u);
  v66 = v301;
  *(_QWORD *)v65 = v65 + 16;
  strcpy((char *)(v65 + 16), "string");
  *(_QWORD *)(v65 + 8) = 6;
  *(_OWORD *)v344 = (unsigned __int64)v65;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v217,
    v66);
  v351 = 0;
  v345 = 0;
  v346[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v345 = 3;
  v67 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v67, "description", v68, v69, v70, v71, (int)v217, v245, v273);
  v347 = 0;
  *(_QWORD *)v348 = 0;
  *(_OWORD *)v346 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v347 = 3;
  v72 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v72,
    "C declarations (header-style)",
    v73,
    v74,
    v75,
    v76,
    v218,
    v246,
    v274);
  *(_OWORD *)v348 = (unsigned __int64)v72;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v319,
    v302);
  v354 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v320,
    v219);
  v359 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v379,
    v297);
  v380 = 0;
  v374 = 0;
  *(_QWORD *)&v375 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v374 = 3;
  v77 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v77, "pack_alignment", v78, v79, v80, v81, (int)v219, v247, v275);
  v360 = 0;
  *(_QWORD *)v361 = 0;
  v375 = (unsigned __int64)v77;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v360 = 3;
  v82 = operator new(0x20u);
  *(_QWORD *)v82 = v82 + 16;
  strcpy((char *)(v82 + 16), "type");
  *(_QWORD *)(v82 + 8) = 4;
  v362 = 0;
  *(_QWORD *)v363 = 0;
  *(_OWORD *)v361 = (unsigned __int64)v82;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v362 = 3;
  v83 = operator new(0x20u);
  strcpy((char *)(v83 + 16), "integer");
  v84 = (const __m128i *)v303;
  *(_QWORD *)v83 = v83 + 16;
  *(_QWORD *)(v83 + 8) = 7;
  *(_OWORD *)v363 = (unsigned __int64)v83;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v248,
    v84);
  v370 = 0;
  v364 = 0;
  *(_QWORD *)v365 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v364 = 3;
  v85 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v85, "description", v86, v87, v88, v89, v220, (int)v248, v276);
  v366 = 0;
  *(_QWORD *)&v367 = 0;
  *(_OWORD *)v365 = (unsigned __int64)v85;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v366 = 3;
  v90 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v90,
    "Pack alignment (optional)",
    v91,
    v92,
    v93,
    v94,
    v221,
    v249,
    v277);
  v367 = (unsigned __int64)v90;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v321,
    v304);
  v373 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v322,
    v250);
  v378 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v323,
    v298);
  v383 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v324,
    &v379);
  v388 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v325,
    v296);
  v395 = 0;
  v389 = 0;
  *(_QWORD *)&v390 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v389 = 3;
  v95 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v95, "required", v96, v97, v98, v99, v222, (int)v250, v278);
  v333 = 0;
  *(_QWORD *)&v334 = 0;
  v390 = (unsigned __int64)v95;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v333 = 3;
  v100 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v100, "declarations", v101, v102, v103, v104, v223, v251, v279);
  v334 = (unsigned __int64)v100;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v105 = _mm_load_si128(&v330);
  v392 = 0;
  v391 = v105;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v326,
    v299,
    2);
  v397 = 0;
  LOBYTE(v331) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v317,
    &v393,
    3);
  LOBYTE(v84) = v405;
  v106 = (__m128i *)&v398;
  v405 = v331;
  v107 = v406;
  LOBYTE(v331) = (_BYTE)v84;
  v406 = v332;
  v332 = v107;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v106 = (__m128i *)((char *)v106 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v106 != &v393 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v108 = _mm_load_si128(&v293);
  v393.m128i_i64[1] = 0;
  v393.m128i_i64[0] = (__int64)ida_mcp::tools::decl_compiler::`anonymous namespace'::parse_decls_impl;
  *(__m128i *)v394 = v108;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v394[0] )
    v394[0](&v393, &v393, 3);
  if ( v411 && v410 && v408 != (ida_mcp::tools::decl_compiler *)v409 )
    operator delete(v408, v409[0] + 1LL);
  if ( v407 )
  {
    v407 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v402 != v404 )
    operator delete(v402, v404[0] + 1LL);
  if ( v399 != v401 )
    operator delete(v399, v401[0] + 1LL);
  v399 = v401;
  v400 = 0;
  LOBYTE(v401[0]) = 0;
  v402 = v404;
  v403 = 0;
  LOBYTE(v404[0]) = 0;
  v405 = 0;
  v406 = 0;
  v407 = 0;
  v411 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v337 = 0;
  *(_QWORD *)v338 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v337 = 3;
  v109 = operator new(0x20u);
  *(_QWORD *)v109 = v109 + 16;
  strcpy((char *)(v109 + 16), "type");
  *(_QWORD *)(v109 + 8) = 4;
  v339 = 0;
  *(_QWORD *)v340 = 0;
  *(_OWORD *)v338 = (unsigned __int64)v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v339 = 3;
  v110 = operator new(0x20u);
  *(_QWORD *)v110 = v110 + 16;
  v111 = v300;
  strcpy((char *)(v110 + 16), "object");
  *(_QWORD *)(v110 + 8) = 6;
  *(_OWORD *)v340 = (unsigned __int64)v110;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v393,
    v111,
    2);
  v394[0] = nullptr;
  v384 = 0;
  *(_QWORD *)&v385 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v384 = 3;
  v112 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v112, "properties", v113, v114, v115, v116, v224, v252, v280);
  v355 = 0;
  *(_QWORD *)v356 = 0;
  v385 = (unsigned __int64)v112;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v355 = 3;
  v117 = operator new(0x20u);
  *(_QWORD *)v117 = v117 + 16;
  strcpy((char *)(v117 + 16), "address");
  *(_QWORD *)(v117 + 8) = 7;
  v341 = 0;
  *(_QWORD *)v342 = 0;
  *(_OWORD *)v356 = (unsigned __int64)v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v341 = 3;
  v118 = operator new(0x20u);
  *(_QWORD *)v118 = v118 + 16;
  strcpy((char *)(v118 + 16), "type");
  *(_QWORD *)(v118 + 8) = 4;
  v343 = 0;
  v344[0] = 0;
  *(_OWORD *)v342 = (unsigned __int64)v118;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v343 = 3;
  v119 = operator new(0x20u);
  *(_QWORD *)v119 = v119 + 16;
  v120 = v301;
  strcpy((char *)(v119 + 16), "string");
  *(_QWORD *)(v119 + 8) = 6;
  *(_OWORD *)v344 = (unsigned __int64)v119;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v225,
    v120,
    2);
  v351 = 0;
  v345 = 0;
  v346[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v345 = 3;
  v121 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v121, "description", v122, v123, v124, v125, (int)v225, v253, v281);
  v347 = 0;
  *(_QWORD *)v348 = 0;
  *(_OWORD *)v346 = (unsigned __int64)v121;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v347 = 3;
  v126 = operator new(0x20u);
  v127 = v302;
  *(_QWORD *)v126 = v126 + 16;
  v128 = *(_QWORD **)v319;
  strcpy((char *)(v126 + 16), "Hex address");
  *(_QWORD *)(v126 + 8) = 11;
  *(_OWORD *)v348 = (unsigned __int64)v126;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v128,
    v127,
    2);
  v354 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v320,
    v226,
    2);
  v359 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v379,
    v297,
    2);
  v380 = 0;
  v374 = 0;
  *(_QWORD *)&v375 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v374 = 3;
  v129 = operator new(0x20u);
  *(_QWORD *)v129 = v129 + 16;
  strcpy((char *)(v129 + 16), "declaration");
  *(_QWORD *)(v129 + 8) = 11;
  v360 = 0;
  *(_QWORD *)v361 = 0;
  v375 = (unsigned __int64)v129;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v360 = 3;
  v130 = operator new(0x20u);
  *(_QWORD *)v130 = v130 + 16;
  strcpy((char *)(v130 + 16), "type");
  *(_QWORD *)(v130 + 8) = 4;
  v362 = 0;
  *(_QWORD *)v363 = 0;
  *(_OWORD *)v361 = (unsigned __int64)v130;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v362 = 3;
  v131 = operator new(0x20u);
  v132 = (const __m128i *)v303;
  *(_QWORD *)v131 = v131 + 16;
  strcpy((char *)(v131 + 16), "string");
  *(_QWORD *)(v131 + 8) = 6;
  *(_OWORD *)v363 = (unsigned __int64)v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v254,
    v132,
    2);
  v370 = 0;
  v364 = 0;
  *(_QWORD *)v365 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v364 = 3;
  v133 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v133,
    "description",
    v134,
    v135,
    v136,
    v137,
    (int)v226,
    (int)v254,
    v282);
  v366 = 0;
  *(_QWORD *)&v367 = 0;
  *(_OWORD *)v365 = (unsigned __int64)v133;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v366 = 3;
  v138 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v138,
    "C declaration string",
    v139,
    v140,
    v141,
    v142,
    v227,
    v255,
    v283);
  v367 = (unsigned __int64)v138;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v321,
    v304,
    2);
  v373 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v322,
    v256,
    2);
  v378 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v323,
    v298,
    2);
  v383 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v324,
    &v379,
    2);
  v388 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v325,
    v296,
    2);
  v395 = 0;
  v389 = 0;
  *(_QWORD *)&v390 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v389 = 3;
  v143 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v143, "required", v144, v145, v146, v147, v228, (int)v256, v284);
  v333 = 0;
  *(_QWORD *)&v334 = 0;
  v390 = (unsigned __int64)v143;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v333 = 3;
  v148 = operator new(0x20u);
  strcpy((char *)(v148 + 16), "address");
  *(_QWORD *)v148 = v148 + 16;
  *(_QWORD *)(v148 + 8) = 7;
  v335 = 0;
  *(_QWORD *)&v336 = 0;
  v329 = &v336;
  v334 = (unsigned __int64)v148;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v335 = 3;
  v149 = operator new(0x20u);
  strcpy((char *)(v149 + 16), "declaration");
  *(_QWORD *)v149 = v149 + 16;
  *(_QWORD *)(v149 + 8) = 11;
  v336 = (unsigned __int64)v149;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v150 = _mm_load_si128(&v330);
  v392 = 0;
  v391 = v150;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v326,
    v299,
    2);
  v397 = 0;
  LOBYTE(v331) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v317,
    &v393,
    3);
  LOBYTE(v132) = v405;
  v151 = (__m128i *)&v398;
  v405 = v331;
  v152 = v406;
  LOBYTE(v331) = (_BYTE)v132;
  v406 = v332;
  v332 = v152;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v151 = (__m128i *)((char *)v151 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v151 != &v393 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v153 = _mm_load_si128(&v293);
  v393.m128i_i64[1] = 0;
  v393.m128i_i64[0] = (__int64)ida_mcp::tools::decl_compiler::`anonymous namespace'::apply_type_at_address_impl;
  *(__m128i *)v394 = v153;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v394[0] )
    v394[0](&v393, &v393, 3);
  if ( v411 && v410 && v408 != (ida_mcp::tools::decl_compiler *)v409 )
    operator delete(v408, v409[0] + 1LL);
  if ( v407 )
  {
    v407 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v402 != v404 )
    operator delete(v402, v404[0] + 1LL);
  if ( v399 != v401 )
    operator delete(v399, v401[0] + 1LL);
  v399 = v401;
  v400 = 0;
  LOBYTE(v401[0]) = 0;
  v402 = v404;
  v403 = 0;
  LOBYTE(v404[0]) = 0;
  v405 = 0;
  v406 = 0;
  v407 = 0;
  v411 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v337 = 0;
  *(_QWORD *)v338 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v337 = 3;
  v154 = operator new(0x20u);
  *(_QWORD *)v154 = v154 + 16;
  strcpy((char *)(v154 + 16), "type");
  *(_QWORD *)(v154 + 8) = 4;
  v339 = 0;
  *(_QWORD *)v340 = 0;
  *(_OWORD *)v338 = (unsigned __int64)v154;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v339 = 3;
  v155 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v155, "object", v156, v157, v158, v159, v229, v257, v285);
  *(_OWORD *)v340 = (unsigned __int64)v155;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v393,
    v300,
    2);
  v394[0] = nullptr;
  v384 = 0;
  *(_QWORD *)&v385 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v384 = 3;
  v160 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v160, "properties", v161, v162, v163, v164, v230, v258, v286);
  v355 = 0;
  *(_QWORD *)v356 = 0;
  v385 = (unsigned __int64)v160;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v355 = 3;
  v165 = operator new(0x20u);
  *(_QWORD *)v165 = v165 + 16;
  strcpy((char *)(v165 + 16), "address");
  *(_QWORD *)(v165 + 8) = 7;
  v341 = 0;
  *(_QWORD *)v342 = 0;
  *(_OWORD *)v356 = (unsigned __int64)v165;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v341 = 3;
  v166 = operator new(0x20u);
  *(_QWORD *)v166 = v166 + 16;
  strcpy((char *)(v166 + 16), "type");
  *(_QWORD *)(v166 + 8) = 4;
  v343 = 0;
  v344[0] = 0;
  *(_OWORD *)v342 = (unsigned __int64)v166;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v343 = 3;
  v167 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v167, "string", v168, v169, v170, v171, v231, v259, v287);
  *(_OWORD *)v344 = (unsigned __int64)v167;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v232,
    v301,
    2);
  v351 = 0;
  v345 = 0;
  v346[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v345 = 3;
  v172 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v172, "description", v173, v174, v175, v176, (int)v232, v260, v288);
  v347 = 0;
  *(_QWORD *)v348 = 0;
  *(_OWORD *)v346 = (unsigned __int64)v172;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v347 = 3;
  v177 = operator new(0x20u);
  v178 = v302;
  *(_QWORD *)v177 = v177 + 16;
  v179 = *(_QWORD **)v319;
  strcpy((char *)(v177 + 16), "Hex address");
  *(_QWORD *)(v177 + 8) = 11;
  *(_OWORD *)v348 = (unsigned __int64)v177;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v179,
    v178,
    2);
  v354 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v320,
    v233,
    2);
  v359 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v379,
    v297,
    2);
  v380 = 0;
  v374 = 0;
  *(_QWORD *)&v375 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v374 = 3;
  v180 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v180, "multiline", v181, v182, v183, v184, (int)v233, v261, v289);
  v360 = 0;
  *(_QWORD *)v361 = 0;
  v375 = (unsigned __int64)v180;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v360 = 3;
  v185 = operator new(0x20u);
  *(_QWORD *)v185 = v185 + 16;
  strcpy((char *)(v185 + 16), "type");
  *(_QWORD *)(v185 + 8) = 4;
  v362 = 0;
  *(_QWORD *)v363 = 0;
  *(_OWORD *)v361 = (unsigned __int64)v185;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v362 = 3;
  v186 = operator new(0x20u);
  strcpy((char *)(v186 + 16), "boolean");
  v187 = (const __m128i *)v303;
  *(_QWORD *)v186 = v186 + 16;
  *(_QWORD *)(v186 + 8) = 7;
  *(_OWORD *)v363 = (unsigned __int64)v186;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v262,
    v187,
    2);
  v370 = 0;
  v364 = 0;
  *(_QWORD *)v365 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v364 = 3;
  v188 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v188, "description", v189, v190, v191, v192, v234, (int)v262, v290);
  v366 = 0;
  *(_QWORD *)&v367 = 0;
  *(_OWORD *)v365 = (unsigned __int64)v188;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v366 = 3;
  v193 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v193,
    "Multi-line output (default false)",
    v194,
    v195,
    v196,
    v197,
    v235,
    v263,
    v291);
  v367 = (unsigned __int64)v193;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v321,
    v304,
    2);
  v373 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v322,
    v264,
    2);
  v378 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v323,
    v298,
    2);
  v383 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v324,
    &v379,
    2);
  v388 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v325,
    v296,
    2);
  v395 = 0;
  v389 = 0;
  *(_QWORD *)&v390 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v389 = 3;
  v198 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v198, "required", v199, v200, v201, v202, v236, (int)v264, v292);
  v333 = 0;
  *(_QWORD *)&v334 = 0;
  v390 = (unsigned __int64)v198;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v333 = 3;
  v203 = operator new(0x20u);
  *(_QWORD *)v203 = v203 + 16;
  strcpy((char *)(v203 + 16), "address");
  *(_QWORD *)(v203 + 8) = 7;
  v334 = (unsigned __int64)v203;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v204 = _mm_load_si128(&v330);
  v392 = 0;
  v391 = v204;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v326,
    v299,
    2);
  v397 = 0;
  LOBYTE(v331) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v317,
    &v393,
    3);
  LOBYTE(v187) = v405;
  v205 = (__m128i *)&v398;
  v405 = v331;
  v206 = v406;
  LOBYTE(v331) = (_BYTE)v187;
  v406 = v332;
  v332 = v206;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v205 = (__m128i *)((char *)v205 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v205 != &v393 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v207 = _mm_load_si128(&v293);
  v393.m128i_i64[1] = 0;
  v393.m128i_i64[0] = (__int64)ida_mcp::tools::decl_compiler::`anonymous namespace'::get_type_at_address_impl;
  *(__m128i *)v394 = v207;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v394[0] )
    v394[0](&v393, &v393, 3);
  if ( v411 && v410 && v408 != (ida_mcp::tools::decl_compiler *)v409 )
    operator delete(v408, v409[0] + 1LL);
  if ( v407 )
  {
    v407 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v402 != v404 )
    operator delete(v402, v404[0] + 1LL);
  if ( v399 != v401 )
    operator delete(v399, v401[0] + 1LL);
  return v412 - __readfsqword(0x28u);
}

