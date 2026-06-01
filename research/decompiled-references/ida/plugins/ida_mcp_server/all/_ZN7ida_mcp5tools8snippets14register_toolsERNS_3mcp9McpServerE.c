unsigned __int64 __fastcall ida_mcp::tools::snippets::register_tools(
        ida_mcp::tools::snippets *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
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
  __int64 *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 *v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 *v55; // r14
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rax
  __m128 v62; // xmm1
  __m128i v63; // xmm0
  char v64; // si
  __m128i *v65; // r14
  __int64 v66; // rdx
  __int64 *v67; // r14
  __m128i v68; // xmm2
  __int64 v69; // rax
  __int64 v70; // rax
  const __m128i *v71; // rsi
  __int64 *v72; // r14
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  const __m128i *v80; // rsi
  __int64 *v81; // r14
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 *v86; // r14
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 *v91; // r14
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  __m128i v97; // xmm0
  __m128i *v98; // r14
  __int64 v99; // rax
  __m128i v100; // xmm3
  __int64 v101; // rax
  __int64 v102; // rax
  const __m128i *v103; // rsi
  __int64 *v104; // r14
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 *v111; // r14
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  __int64 *v117; // r14
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 *v122; // r14
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 *v129; // r14
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 *v134; // r14
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 *v141; // r14
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 *v146; // r14
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 *v151; // r14
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __m128i v156; // xmm0
  __m128i *v157; // r14
  __int64 v158; // rax
  __int64 *v159; // r14
  __m128i v160; // xmm4
  int v162; // [rsp+0h] [rbp-678h]
  int v163; // [rsp+0h] [rbp-678h]
  int v164; // [rsp+0h] [rbp-678h]
  int v165; // [rsp+0h] [rbp-678h]
  int v166; // [rsp+0h] [rbp-678h]
  int v167; // [rsp+0h] [rbp-678h]
  int v168; // [rsp+0h] [rbp-678h]
  int v169; // [rsp+0h] [rbp-678h]
  int v170; // [rsp+0h] [rbp-678h]
  int v171; // [rsp+0h] [rbp-678h]
  int v172; // [rsp+0h] [rbp-678h]
  int v173; // [rsp+0h] [rbp-678h]
  int v174; // [rsp+0h] [rbp-678h]
  int v175; // [rsp+0h] [rbp-678h]
  int v176; // [rsp+0h] [rbp-678h]
  int v177; // [rsp+0h] [rbp-678h]
  int v178; // [rsp+0h] [rbp-678h]
  int v179; // [rsp+0h] [rbp-678h]
  int v180; // [rsp+0h] [rbp-678h]
  int v181; // [rsp+0h] [rbp-678h]
  int v182; // [rsp+0h] [rbp-678h]
  int v183; // [rsp+0h] [rbp-678h]
  int v184; // [rsp+0h] [rbp-678h]
  int v185; // [rsp+8h] [rbp-670h]
  int v186; // [rsp+8h] [rbp-670h]
  int v187; // [rsp+8h] [rbp-670h]
  int v188; // [rsp+8h] [rbp-670h]
  int v189; // [rsp+8h] [rbp-670h]
  int v190; // [rsp+8h] [rbp-670h]
  int v191; // [rsp+8h] [rbp-670h]
  int v192; // [rsp+8h] [rbp-670h]
  int v193; // [rsp+8h] [rbp-670h]
  int v194; // [rsp+8h] [rbp-670h]
  int v195; // [rsp+8h] [rbp-670h]
  int v196; // [rsp+8h] [rbp-670h]
  int v197; // [rsp+8h] [rbp-670h]
  int v198; // [rsp+8h] [rbp-670h]
  int v199; // [rsp+8h] [rbp-670h]
  int v200; // [rsp+8h] [rbp-670h]
  int v201; // [rsp+8h] [rbp-670h]
  int v202; // [rsp+8h] [rbp-670h]
  int v203; // [rsp+8h] [rbp-670h]
  int v204; // [rsp+8h] [rbp-670h]
  int v205; // [rsp+8h] [rbp-670h]
  int v206; // [rsp+8h] [rbp-670h]
  __int64 v207; // [rsp+10h] [rbp-668h]
  __int64 v208; // [rsp+10h] [rbp-668h]
  __int64 v209; // [rsp+10h] [rbp-668h]
  __int64 v210; // [rsp+10h] [rbp-668h]
  __int64 v211; // [rsp+10h] [rbp-668h]
  __int64 v212; // [rsp+10h] [rbp-668h]
  __int64 v213; // [rsp+10h] [rbp-668h]
  __int64 v214; // [rsp+10h] [rbp-668h]
  __int64 v215; // [rsp+10h] [rbp-668h]
  __int64 v216; // [rsp+10h] [rbp-668h]
  __int64 v217; // [rsp+10h] [rbp-668h]
  __int64 v218; // [rsp+10h] [rbp-668h]
  __int64 v219; // [rsp+10h] [rbp-668h]
  __int64 v220; // [rsp+10h] [rbp-668h]
  __int64 v221; // [rsp+10h] [rbp-668h]
  __int64 v222; // [rsp+10h] [rbp-668h]
  __int64 v223; // [rsp+10h] [rbp-668h]
  __int64 v224; // [rsp+10h] [rbp-668h]
  __int64 v225; // [rsp+10h] [rbp-668h]
  __int64 v226; // [rsp+10h] [rbp-668h]
  __int64 v227; // [rsp+10h] [rbp-668h]
  __int64 v228; // [rsp+10h] [rbp-668h]
  __m128i v229; // [rsp+A0h] [rbp-5D8h] BYREF
  __int128 *v230; // [rsp+B0h] [rbp-5C8h]
  ida_mcp::tools::snippets *v231; // [rsp+B8h] [rbp-5C0h]
  const __m128i *v232; // [rsp+C0h] [rbp-5B8h]
  const __m128i *v233; // [rsp+C8h] [rbp-5B0h]
  const __m128i *v234; // [rsp+D0h] [rbp-5A8h]
  const __m128i *v235; // [rsp+D8h] [rbp-5A0h]
  const __m128i *v236; // [rsp+E0h] [rbp-598h]
  char v237[8]; // [rsp+E8h] [rbp-590h]
  char v238[8]; // [rsp+F0h] [rbp-588h]
  __int128 *v239; // [rsp+F8h] [rbp-580h]
  __int128 *v240; // [rsp+100h] [rbp-578h]
  __int128 *v241; // [rsp+108h] [rbp-570h]
  __int128 *v242; // [rsp+110h] [rbp-568h]
  __int128 *v243; // [rsp+118h] [rbp-560h]
  __int128 *v244; // [rsp+120h] [rbp-558h]
  __int128 *v245; // [rsp+128h] [rbp-550h]
  __int128 *v246; // [rsp+130h] [rbp-548h]
  __int128 *v247; // [rsp+138h] [rbp-540h]
  char *v248; // [rsp+140h] [rbp-538h]
  char *v249; // [rsp+148h] [rbp-530h]
  char *v250; // [rsp+150h] [rbp-528h]
  __m128i *v251; // [rsp+158h] [rbp-520h]
  char v252[8]; // [rsp+160h] [rbp-518h]
  __int64 *v253; // [rsp+168h] [rbp-510h]
  char v254[8]; // [rsp+170h] [rbp-508h]
  char v255[8]; // [rsp+178h] [rbp-500h]
  char v256[8]; // [rsp+180h] [rbp-4F8h]
  char v257[8]; // [rsp+188h] [rbp-4F0h]
  void **v258; // [rsp+190h] [rbp-4E8h]
  __int64 *v259; // [rsp+198h] [rbp-4E0h]
  const __m128i *v260; // [rsp+1A0h] [rbp-4D8h]
  char *v261; // [rsp+1A8h] [rbp-4D0h]
  const __m128i *v262; // [rsp+1B0h] [rbp-4C8h]
  char *v263; // [rsp+1B8h] [rbp-4C0h]
  __int128 *v264; // [rsp+1C0h] [rbp-4B8h]
  char v265[8]; // [rsp+1C8h] [rbp-4B0h]
  char v266[8]; // [rsp+1D0h] [rbp-4A8h]
  char v267[8]; // [rsp+1D8h] [rbp-4A0h]
  __m128i v268; // [rsp+1E0h] [rbp-498h] BYREF
  __int64 v269; // [rsp+1F0h] [rbp-488h] BYREF
  __int64 v270; // [rsp+1F8h] [rbp-480h] BYREF
  char v271; // [rsp+200h] [rbp-478h]
  char v272[16]; // [rsp+208h] [rbp-470h]
  char v273; // [rsp+220h] [rbp-458h] BYREF
  __int128 v274; // [rsp+228h] [rbp-450h]
  char v275; // [rsp+238h] [rbp-440h]
  __int128 v276; // [rsp+240h] [rbp-438h] BYREF
  char v277; // [rsp+250h] [rbp-428h] BYREF
  __int128 v278; // [rsp+258h] [rbp-420h] BYREF
  char v279; // [rsp+268h] [rbp-410h]
  __int128 v280; // [rsp+270h] [rbp-408h] BYREF
  char v281; // [rsp+280h] [rbp-3F8h] BYREF
  __int128 v282; // [rsp+288h] [rbp-3F0h]
  char v283; // [rsp+298h] [rbp-3E0h]
  __int128 v284; // [rsp+2A0h] [rbp-3D8h]
  __int64 v285; // [rsp+2B0h] [rbp-3C8h] BYREF
  __int128 v286; // [rsp+2B8h] [rbp-3C0h] BYREF
  __int64 v287; // [rsp+2C8h] [rbp-3B0h] BYREF
  __int128 v288; // [rsp+2D0h] [rbp-3A8h] BYREF
  char v289; // [rsp+2E0h] [rbp-398h] BYREF
  __int128 v290; // [rsp+2E8h] [rbp-390h]
  __int64 v291; // [rsp+2F8h] [rbp-380h] BYREF
  __int128 v292; // [rsp+300h] [rbp-378h] BYREF
  char v293; // [rsp+310h] [rbp-368h] BYREF
  __int128 v294; // [rsp+318h] [rbp-360h] BYREF
  __int64 v295; // [rsp+328h] [rbp-350h] BYREF
  __int128 v296; // [rsp+330h] [rbp-348h] BYREF
  char v297; // [rsp+340h] [rbp-338h] BYREF
  __int128 v298; // [rsp+348h] [rbp-330h]
  __int64 v299; // [rsp+358h] [rbp-320h] BYREF
  __int128 v300; // [rsp+360h] [rbp-318h] BYREF
  __int64 v301; // [rsp+370h] [rbp-308h] BYREF
  char v302[16]; // [rsp+378h] [rbp-300h]
  __int64 v303; // [rsp+388h] [rbp-2F0h] BYREF
  __int128 v304; // [rsp+390h] [rbp-2E8h] BYREF
  __int64 v305; // [rsp+3A0h] [rbp-2D8h] BYREF
  int v306[4]; // [rsp+3A8h] [rbp-2D0h]
  __int64 v307; // [rsp+3B8h] [rbp-2C0h] BYREF
  __int128 v308; // [rsp+3C0h] [rbp-2B8h] BYREF
  char v309; // [rsp+3D0h] [rbp-2A8h] BYREF
  __int128 v310; // [rsp+3D8h] [rbp-2A0h]
  char v311; // [rsp+3E8h] [rbp-290h]
  int v312[4]; // [rsp+3F0h] [rbp-288h] BYREF
  char v313; // [rsp+400h] [rbp-278h] BYREF
  int v314[4]; // [rsp+408h] [rbp-270h] BYREF
  __int64 v315; // [rsp+418h] [rbp-260h] BYREF
  int v316[4]; // [rsp+420h] [rbp-258h]
  __int64 v317; // [rsp+430h] [rbp-248h] BYREF
  __int128 v318; // [rsp+438h] [rbp-240h]
  __int64 v319; // [rsp+448h] [rbp-230h] BYREF
  __int128 v320; // [rsp+450h] [rbp-228h] BYREF
  __int64 v321; // [rsp+460h] [rbp-218h] BYREF
  __int128 v322; // [rsp+468h] [rbp-210h]
  __int64 v323; // [rsp+478h] [rbp-200h] BYREF
  char v324; // [rsp+480h] [rbp-1F8h] BYREF
  __int64 v325; // [rsp+488h] [rbp-1F0h]
  char v326; // [rsp+490h] [rbp-1E8h] BYREF
  int v327[4]; // [rsp+498h] [rbp-1E0h]
  __int64 v328; // [rsp+4A8h] [rbp-1D0h] BYREF
  char v329; // [rsp+4B0h] [rbp-1C8h] BYREF
  __int64 v330; // [rsp+4B8h] [rbp-1C0h]
  char v331; // [rsp+4C0h] [rbp-1B8h] BYREF
  int v332[4]; // [rsp+4C8h] [rbp-1B0h]
  char v333[16]; // [rsp+4D8h] [rbp-1A0h] BYREF
  __int64 v334; // [rsp+4E8h] [rbp-190h]
  __int64 v335; // [rsp+4F0h] [rbp-188h] BYREF
  __int128 v336; // [rsp+4F8h] [rbp-180h] BYREF
  __m128i v337; // [rsp+508h] [rbp-170h] BYREF
  __int64 v338; // [rsp+518h] [rbp-160h]
  _QWORD v339[2]; // [rsp+520h] [rbp-158h] BYREF
  __int64 v340; // [rsp+530h] [rbp-148h]
  char v341; // [rsp+538h] [rbp-140h] BYREF
  __m128i v342; // [rsp+540h] [rbp-138h] BYREF
  __m128i v343; // [rsp+550h] [rbp-128h] BYREF
  __int64 v344; // [rsp+568h] [rbp-110h]
  _QWORD v345[2]; // [rsp+570h] [rbp-108h] BYREF
  __int64 v346; // [rsp+580h] [rbp-F8h]
  char v347; // [rsp+588h] [rbp-F0h] BYREF
  void *v348; // [rsp+590h] [rbp-E8h]
  __int64 v349; // [rsp+598h] [rbp-E0h]
  _QWORD v350[2]; // [rsp+5A0h] [rbp-D8h] BYREF
  void *v351; // [rsp+5B0h] [rbp-C8h] BYREF
  __int64 v352; // [rsp+5B8h] [rbp-C0h]
  _QWORD v353[2]; // [rsp+5C0h] [rbp-B8h] BYREF
  char v354; // [rsp+5D0h] [rbp-A8h]
  __int64 v355; // [rsp+5D8h] [rbp-A0h] BYREF
  char v356; // [rsp+5F0h] [rbp-88h]
  ida_mcp::tools::snippets *v357; // [rsp+5F8h] [rbp-80h]
  _QWORD v358[2]; // [rsp+608h] [rbp-70h] BYREF
  char v359; // [rsp+618h] [rbp-60h]
  char v360; // [rsp+628h] [rbp-50h]
  unsigned __int64 v361; // [rsp+638h] [rbp-40h]

  v231 = this;
  v361 = __readfsqword(0x28u);
  v348 = v350;
  v349 = 0;
  LOBYTE(v350[0]) = 0;
  v351 = v353;
  v352 = 0;
  LOBYTE(v353[0]) = 0;
  v354 = 0;
  v355 = 0;
  v356 = 0;
  v360 = 0;
  std::string::_M_replace();
  v258 = &v351;
  std::string::_M_replace();
  *(_QWORD *)&v274 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v273 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v275 = 0;
  *(_QWORD *)&v276 = 0;
  v259 = (__int64 *)&v276;
  v274 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v275 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v263 = &v273;
  v276 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v342,
    (const __m128i *)&v273);
  v343.m128i_i64[0] = 0;
  v326 = 0;
  *(_QWORD *)v327 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v326 = 3;
  v4 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v4, "properties", v5, v6, v7, v8, v162, v185, v207);
  v289 = 0;
  *(_QWORD *)&v290 = 0;
  *(_OWORD *)v327 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v289 = 3;
  v9 = operator new(0x20u);
  *(_QWORD *)v9 = v9 + 16;
  strcpy((char *)(v9 + 16), "code");
  *(_QWORD *)(v9 + 8) = 4;
  v277 = 0;
  *(_QWORD *)&v278 = 0;
  v239 = &v278;
  v290 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v277 = 3;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v10 + 16;
  strcpy((char *)(v10 + 16), "type");
  *(_QWORD *)(v10 + 8) = 4;
  v279 = 0;
  *(_QWORD *)&v280 = 0;
  v264 = &v280;
  v278 = (unsigned __int64)v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v279 = 3;
  v11 = operator new(0x20u);
  strcpy((char *)(v11 + 16), "string");
  *(_QWORD *)v11 = v11 + 16;
  *(_QWORD *)(v11 + 8) = 6;
  *(_QWORD *)v238 = &v277;
  v236 = (const __m128i *)&v285;
  v280 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v285,
    (const __m128i *)&v277);
  *((_QWORD *)&v286 + 1) = 0;
  v281 = 0;
  *(_QWORD *)&v282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v281 = 3;
  v12 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v12, "description", v13, v14, v15, v16, v163, v186, v208);
  v283 = 0;
  *(_QWORD *)&v284 = 0;
  v282 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v283 = 3;
  v17 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v17, "IDC code to compile", v18, v19, v20, v21, v164, v187, v209);
  v261 = &v281;
  v284 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v287,
    (const __m128i *)&v281);
  *((_QWORD *)&v288 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v291,
    (const __m128i *)&v285);
  *((_QWORD *)&v292 + 1) = 0;
  v260 = (const __m128i *)&v289;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v335,
    (const __m128i *)&v289);
  *((_QWORD *)&v336 + 1) = 0;
  LOBYTE(v305) = 0;
  *(_QWORD *)v306 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v305) = 3;
  v22 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v22, "function_name", v23, v24, v25, v26, v165, v188, v210);
  v293 = 0;
  v240 = &v294;
  *(_QWORD *)&v294 = 0;
  *(_OWORD *)v306 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v293 = 3;
  v27 = operator new(0x20u);
  *(_QWORD *)v27 = v27 + 16;
  strcpy((char *)(v27 + 16), "type");
  *(_QWORD *)(v27 + 8) = 4;
  LOBYTE(v295) = 0;
  *(_QWORD *)&v296 = 0;
  v241 = &v296;
  v294 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v295) = 3;
  v28 = operator new(0x20u);
  strcpy((char *)(v28 + 16), "string");
  *(_QWORD *)v28 = v28 + 16;
  *(_QWORD *)(v28 + 8) = 6;
  *(_QWORD *)v237 = &v293;
  v296 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v301,
    (const __m128i *)&v293);
  *(_QWORD *)&v302[8] = 0;
  v297 = 0;
  *(_QWORD *)&v298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v297 = 3;
  v29 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v29, "description", v30, v31, v32, v33, v166, v189, v211);
  LOBYTE(v299) = 0;
  v242 = &v300;
  *(_QWORD *)&v300 = 0;
  v298 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v299) = 3;
  v34 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v34,
    "Name for the compiled function (default: __mcp_snippet)",
    v35,
    v36,
    v37,
    v38,
    v167,
    v190,
    v212);
  v262 = (const __m128i *)&v297;
  v300 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v303,
    (const __m128i *)&v297);
  *((_QWORD *)&v304 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v307,
    (const __m128i *)&v301);
  *((_QWORD *)&v308 + 1) = 0;
  *(_QWORD *)v266 = &v337;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v337,
    (const __m128i *)&v305);
  v338 = 0;
  LOBYTE(v321) = 0;
  *(_QWORD *)&v322 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v321) = 3;
  v39 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v39, "safe_only", v40, v41, v42, v43, v168, v191, v213);
  v309 = 0;
  v322 = (unsigned __int64)v39;
  *(_QWORD *)&v310 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v309 = 3;
  v44 = operator new(0x20u);
  *(_QWORD *)v44 = v44 + 16;
  strcpy((char *)(v44 + 16), "type");
  *(_QWORD *)(v44 + 8) = 4;
  v311 = 0;
  *(_QWORD *)v312 = 0;
  v310 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v311 = 3;
  v45 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v45, "boolean", v46, v47, v48, v49, v169, (int)v312, v214);
  v234 = (const __m128i *)&v309;
  *(_OWORD *)v312 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v317,
    (const __m128i *)&v309);
  *((_QWORD *)&v318 + 1) = 0;
  v313 = 0;
  *(_QWORD *)v314 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v313 = 3;
  v50 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v50, "description", v51, v52, v53, v54, v170, v192, (__int64)v314);
  LOBYTE(v315) = 0;
  *(_QWORD *)v316 = 0;
  *(_OWORD *)v314 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v315) = 3;
  v55 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v55,
    "Only allow safe function calls (default false)",
    v56,
    v57,
    v58,
    v59,
    v171,
    v193,
    v215);
  v235 = (const __m128i *)&v313;
  *(_QWORD *)v265 = &v319;
  *(_OWORD *)v316 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v319,
    (const __m128i *)&v313);
  *((_QWORD *)&v320 + 1) = 0;
  *(_QWORD *)v254 = &v323;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v323,
    (const __m128i *)&v317);
  v325 = 0;
  *(_QWORD *)v267 = v339;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v339,
    (const __m128i *)&v321);
  v340 = 0;
  *(_QWORD *)v255 = &v328;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v328,
    (const __m128i *)&v335,
    3);
  v330 = 0;
  v232 = (const __m128i *)&v326;
  *(_QWORD *)v256 = &v343.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v343.m128i_i64[1],
    (const __m128i *)&v326);
  v344 = 0;
  v331 = 0;
  *(_QWORD *)v332 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v331 = 3;
  v60 = operator new(0x20u);
  *(_QWORD *)v60 = v60 + 16;
  strcpy((char *)(v60 + 16), "required");
  *(_QWORD *)(v60 + 8) = 8;
  *(_QWORD *)v272 = 0;
  *(_OWORD *)v332 = (unsigned __int64)v60;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v271 = 3;
  v61 = operator new(0x20u);
  *(_QWORD *)v61 = v61 + 16;
  strcpy((char *)(v61 + 16), "code");
  v62 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v61 + 8) = 4;
  v251 = &v268;
  v229 = (__m128i)v62;
  *(_OWORD *)v272 = (unsigned __int64)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v63 = _mm_load_si128(&v268);
  v334 = 0;
  v233 = (const __m128i *)&v331;
  *(_QWORD *)v257 = v345;
  *(__m128i *)v333 = v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v345,
    (const __m128i *)&v331);
  v346 = 0;
  LOBYTE(v269) = 0;
  *(_QWORD *)v252 = &v269;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v269,
    &v342,
    3);
  v64 = v354;
  v65 = (__m128i *)&v347;
  v66 = v270;
  v354 = v269;
  LOBYTE(v269) = v64;
  v270 = v355;
  v355 = v66;
  v253 = &v270;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v65 = (__m128i *)((char *)v65 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v65 != &v342 );
  v67 = (__int64 *)&v341;
  v250 = &v333[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v249 = &v329;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v67 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v67 != &v335 );
  v248 = &v324;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v230 = &v320;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v247 = &v308;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v246 = &v304;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v245 = &v292;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v244 = &v288;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v243 = &v286;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v68 = _mm_load_si128(&v229);
  v342.m128i_i64[1] = 0;
  v342.m128i_i64[0] = (__int64)ida_mcp::tools::snippets::`anonymous namespace'::compile_snippet_impl;
  v343 = v68;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v343.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v343.m128i_i64[0])(&v342, &v342, 3);
  if ( v360 && v359 && v357 != (ida_mcp::tools::snippets *)v358 )
    operator delete(v357, v358[0] + 1LL);
  if ( v356 )
  {
    v356 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v259 = &v355;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v351 != v353 )
    operator delete(v351, v353[0] + 1LL);
  if ( v348 != v350 )
    operator delete(v348, v350[0] + 1LL);
  v348 = v350;
  v349 = 0;
  LOBYTE(v350[0]) = 0;
  v351 = v353;
  v352 = 0;
  LOBYTE(v353[0]) = 0;
  v354 = 0;
  v355 = 0;
  v356 = 0;
  v360 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v309 = 0;
  *(_QWORD *)&v310 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v309 = 3;
  v69 = operator new(0x20u);
  *(_QWORD *)v69 = v69 + 16;
  strcpy((char *)(v69 + 16), "type");
  *(_QWORD *)(v69 + 8) = 4;
  v311 = 0;
  *(_QWORD *)v312 = 0;
  v310 = (unsigned __int64)v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v311 = 3;
  v70 = operator new(0x20u);
  *(_QWORD *)v70 = v70 + 16;
  v71 = v234;
  strcpy((char *)(v70 + 16), "object");
  *(_QWORD *)(v70 + 8) = 6;
  *(_OWORD *)v312 = (unsigned __int64)v70;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v342,
    v71);
  v343.m128i_i64[0] = 0;
  v331 = 0;
  *(_QWORD *)v332 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v331 = 3;
  v72 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v72, "properties", v73, v74, v75, v76, v172, v194, v216);
  v326 = 0;
  *(_QWORD *)v327 = 0;
  *(_OWORD *)v332 = (unsigned __int64)v72;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v326 = 3;
  v77 = operator new(0x20u);
  *(_QWORD *)v77 = v77 + 16;
  strcpy((char *)(v77 + 16), "code");
  *(_QWORD *)(v77 + 8) = 4;
  v313 = 0;
  *(_QWORD *)v314 = 0;
  *(_OWORD *)v327 = (unsigned __int64)v77;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v313 = 3;
  v78 = operator new(0x20u);
  *(_QWORD *)v78 = v78 + 16;
  strcpy((char *)(v78 + 16), "type");
  *(_QWORD *)(v78 + 8) = 4;
  LOBYTE(v315) = 0;
  *(_QWORD *)v316 = 0;
  *(_OWORD *)v314 = (unsigned __int64)v78;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v315) = 3;
  v79 = operator new(0x20u);
  v80 = v235;
  *(_QWORD *)v79 = v79 + 16;
  strcpy((char *)(v79 + 16), "string");
  *(_QWORD *)(v79 + 8) = 6;
  *(_OWORD *)v316 = (unsigned __int64)v79;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v321,
    v80);
  *((_QWORD *)&v322 + 1) = 0;
  LOBYTE(v317) = 0;
  *(_QWORD *)&v318 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v317) = 3;
  v81 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v81, "description", v82, v83, v84, v85, v173, v195, v217);
  LOBYTE(v319) = 0;
  *(_QWORD *)&v320 = 0;
  v318 = (unsigned __int64)v81;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v319) = 3;
  v86 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v86,
    "IDC statements to execute",
    v87,
    v88,
    v89,
    v90,
    v174,
    v196,
    v218);
  v320 = (unsigned __int64)v86;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v254,
    (const __m128i *)&v317);
  v325 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v255,
    (const __m128i *)&v321);
  v330 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v305,
    v232);
  *(_QWORD *)&v306[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v333,
    (const __m128i *)&v305,
    1);
  v334 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v256,
    v233);
  v344 = 0;
  LOBYTE(v335) = 0;
  *(_QWORD *)&v336 = 0;
  v264 = &v336;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v335) = 3;
  v91 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v91, "required", v92, v93, v94, v95, v175, v197, v219);
  LOBYTE(v301) = 0;
  *(_QWORD *)v302 = 0;
  v336 = (unsigned __int64)v91;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v301) = 3;
  v96 = operator new(0x20u);
  *(_QWORD *)v96 = v96 + 16;
  strcpy((char *)(v96 + 16), "code");
  *(_QWORD *)(v96 + 8) = 4;
  *(_OWORD *)v302 = (unsigned __int64)v96;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v97 = _mm_load_si128(&v268);
  v338 = 0;
  v337 = v97;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v257,
    (const __m128i *)&v335,
    2);
  v346 = 0;
  LOBYTE(v269) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v252,
    &v342,
    3);
  LOBYTE(v80) = v354;
  v98 = (__m128i *)&v347;
  v354 = v269;
  v99 = v355;
  LOBYTE(v269) = (_BYTE)v80;
  v355 = v270;
  v270 = v99;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v98 = (__m128i *)((char *)v98 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v98 != &v342 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v100 = _mm_load_si128(&v229);
  v342.m128i_i64[1] = 0;
  v342.m128i_i64[0] = (__int64)ida_mcp::tools::snippets::`anonymous namespace'::eval_snippet_impl;
  v343 = v100;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v343.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v343.m128i_i64[0])(&v342, &v342, 3);
  if ( v360 && v359 && v357 != (ida_mcp::tools::snippets *)v358 )
    operator delete(v357, v358[0] + 1LL);
  if ( v356 )
  {
    v356 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v351 != v353 )
    operator delete(v351, v353[0] + 1LL);
  if ( v348 != v350 )
    operator delete(v348, v350[0] + 1LL);
  v348 = v350;
  v349 = 0;
  LOBYTE(v350[0]) = 0;
  v351 = v353;
  v352 = 0;
  LOBYTE(v353[0]) = 0;
  v354 = 0;
  v355 = 0;
  v356 = 0;
  v360 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v281 = 0;
  *(_QWORD *)&v282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v281 = 3;
  v101 = operator new(0x20u);
  *(_QWORD *)v101 = v101 + 16;
  strcpy((char *)(v101 + 16), "type");
  *(_QWORD *)(v101 + 8) = 4;
  v283 = 0;
  *(_QWORD *)&v284 = 0;
  v282 = (unsigned __int64)v101;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v283 = 3;
  v102 = operator new(0x20u);
  *(_QWORD *)v102 = v102 + 16;
  v103 = (const __m128i *)v261;
  strcpy((char *)(v102 + 16), "object");
  *(_QWORD *)(v102 + 8) = 6;
  v284 = (unsigned __int64)v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v342,
    v103,
    2);
  v343.m128i_i64[0] = 0;
  v326 = 0;
  *(_QWORD *)v327 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v326 = 3;
  v104 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v104, "properties", v105, v106, v107, v108, v176, v198, v220);
  v297 = 0;
  *(_QWORD *)&v298 = 0;
  *(_OWORD *)v327 = (unsigned __int64)v104;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v297 = 3;
  v109 = operator new(0x20u);
  strcpy((char *)(v109 + 16), "function_name");
  *(_QWORD *)v109 = v109 + 16;
  *(_QWORD *)(v109 + 8) = 13;
  LOBYTE(v285) = 0;
  *(_QWORD *)&v286 = 0;
  v298 = (unsigned __int64)v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v285) = 3;
  v110 = operator new(0x20u);
  *(_QWORD *)v110 = v110 + 16;
  strcpy((char *)(v110 + 16), "type");
  *(_QWORD *)(v110 + 8) = 4;
  LOBYTE(v287) = 0;
  *(_QWORD *)&v288 = 0;
  v286 = (unsigned __int64)v110;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v287) = 3;
  v111 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v111, "string", v112, v113, v114, v115, v177, v199, v221);
  v288 = (unsigned __int64)v111;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v237,
    v236,
    2);
  *((_QWORD *)&v294 + 1) = 0;
  v289 = 0;
  *(_QWORD *)&v290 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v289 = 3;
  v116 = operator new(0x20u);
  *(_QWORD *)v116 = v116 + 16;
  strcpy((char *)(v116 + 16), "description");
  *(_QWORD *)(v116 + 8) = 11;
  LOBYTE(v291) = 0;
  *(_QWORD *)&v292 = 0;
  v290 = (unsigned __int64)v116;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v291) = 3;
  v117 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v117, "IDC function name", v118, v119, v120, v121, v178, v200, v222);
  v292 = (unsigned __int64)v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v295,
    v260,
    2);
  *((_QWORD *)&v296 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v299,
    *(const __m128i **)v237,
    2);
  *((_QWORD *)&v300 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v321,
    v262,
    2);
  *((_QWORD *)&v322 + 1) = 0;
  LOBYTE(v317) = 0;
  *(_QWORD *)&v318 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v317) = 3;
  v122 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v122, "args", v123, v124, v125, v126, v179, v201, v223);
  LOBYTE(v301) = 0;
  *(_QWORD *)v302 = 0;
  v318 = (unsigned __int64)v122;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v301) = 3;
  v127 = operator new(0x20u);
  *(_QWORD *)v127 = v127 + 16;
  strcpy((char *)(v127 + 16), "type");
  *(_QWORD *)(v127 + 8) = 4;
  LOBYTE(v303) = 0;
  *(_QWORD *)&v304 = 0;
  *(_OWORD *)v302 = (unsigned __int64)v127;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v303) = 3;
  v128 = operator new(0x20u);
  *(_BYTE *)(v128 + 20) = 121;
  *(_QWORD *)v128 = v128 + 16;
  *(_DWORD *)(v128 + 16) = 1634890337;
  *(_QWORD *)(v128 + 8) = 5;
  *(_BYTE *)(v128 + 21) = 0;
  v304 = (unsigned __int64)v128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v335,
    (const __m128i *)&v301,
    2);
  *((_QWORD *)&v336 + 1) = 0;
  LOBYTE(v305) = 0;
  *(_QWORD *)v306 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v305) = 3;
  v129 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v129, "description", v130, v131, v132, v133, v180, v202, v224);
  LOBYTE(v307) = 0;
  *(_QWORD *)&v308 = 0;
  *(_OWORD *)v306 = (unsigned __int64)v129;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v307) = 3;
  v134 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v134,
    "Arguments to pass (integers, strings, or floats)",
    v135,
    v136,
    v137,
    v138,
    v181,
    v203,
    v225);
  v308 = (unsigned __int64)v134;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v266,
    (const __m128i *)&v305,
    2);
  v338 = 0;
  v313 = 0;
  *(_QWORD *)v314 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v313 = 3;
  v139 = operator new(0x20u);
  *(_DWORD *)(v139 + 16) = 1835365481;
  *(_QWORD *)v139 = v139 + 16;
  *(_BYTE *)(v139 + 20) = 115;
  *(_QWORD *)(v139 + 8) = 5;
  *(_BYTE *)(v139 + 21) = 0;
  v309 = 0;
  *(_QWORD *)&v310 = 0;
  *(_OWORD *)v314 = (unsigned __int64)v139;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v309 = 3;
  v140 = operator new(0x20u);
  *(_QWORD *)v140 = v140 + 16;
  strcpy((char *)(v140 + 16), "type");
  *(_QWORD *)(v140 + 8) = 4;
  v311 = 0;
  *(_QWORD *)v312 = 0;
  v310 = (unsigned __int64)v140;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v311 = 3;
  v141 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v141, "string", v142, v143, v144, v145, v182, v204, v226);
  *(_OWORD *)v312 = (unsigned __int64)v141;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v238,
    v234,
    2);
  *((_QWORD *)&v278 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v315,
    *(const __m128i **)v238,
    1);
  *(_QWORD *)&v316[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v267,
    v235,
    2);
  v340 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v265,
    (const __m128i *)&v335,
    3);
  *((_QWORD *)&v320 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v254,
    (const __m128i *)&v317,
    2);
  v325 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v255,
    (const __m128i *)&v321,
    2);
  v330 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v256,
    v232,
    2);
  v344 = 0;
  v331 = 0;
  *(_QWORD *)v332 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v331 = 3;
  v146 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v146, "required", v147, v148, v149, v150, v183, v205, v227);
  v273 = 0;
  *(_QWORD *)&v274 = 0;
  *(_OWORD *)v332 = (unsigned __int64)v146;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v273 = 3;
  v151 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v151, "function_name", v152, v153, v154, v155, v184, v206, v228);
  v274 = (unsigned __int64)v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v156 = _mm_load_si128(&v268);
  v334 = 0;
  *(__m128i *)v333 = v156;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v257,
    v233,
    2);
  v346 = 0;
  LOBYTE(v269) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v252,
    &v342,
    3);
  LOBYTE(v103) = v354;
  v157 = (__m128i *)&v347;
  v354 = v269;
  v158 = v355;
  LOBYTE(v269) = (_BYTE)v103;
  v355 = v270;
  v270 = v158;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v157 = (__m128i *)((char *)v157 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v157 != &v342 );
  v159 = (__int64 *)&v341;
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
    v159 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v159 != &v335 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v160 = _mm_load_si128(&v229);
  v342.m128i_i64[1] = 0;
  v342.m128i_i64[0] = (__int64)ida_mcp::tools::snippets::`anonymous namespace'::call_idc_func_impl;
  v343 = v160;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v343.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v343.m128i_i64[0])(&v342, &v342, 3);
  if ( v360 && v359 && v357 != (ida_mcp::tools::snippets *)v358 )
    operator delete(v357, v358[0] + 1LL);
  if ( v356 )
  {
    v356 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v351 != v353 )
    operator delete(v351, v353[0] + 1LL);
  if ( v348 != v350 )
    operator delete(v348, v350[0] + 1LL);
  return v361 - __readfsqword(0x28u);
}

