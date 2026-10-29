unsigned __int64 __fastcall ida_mcp::tools::cpp_class_recovery::register_tools(
        ida_mcp::tools::cpp_class_recovery *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // rbp
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 *v67; // rbp
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 *v72; // rbp
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  char v77; // si
  __m128i *v78; // rbp
  __int64 v79; // rdx
  __int64 *v80; // rbp
  __m128i si128; // xmm2
  __int64 *v82; // rbp
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 *v87; // rbp
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 *v92; // rbp
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 *v97; // rbp
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 *v102; // rbp
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 *v107; // rbp
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 *v112; // rbp
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 *v117; // rbp
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 *v122; // rbp
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 *v127; // rbp
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 *v132; // rbp
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  char v137; // si
  __int64 v138; // rax
  __m128i v139; // xmm3
  int v141; // [rsp+0h] [rbp-548h]
  int v142; // [rsp+0h] [rbp-548h]
  int v143; // [rsp+0h] [rbp-548h]
  int v144; // [rsp+0h] [rbp-548h]
  int v145; // [rsp+0h] [rbp-548h]
  int v146; // [rsp+0h] [rbp-548h]
  int v147; // [rsp+0h] [rbp-548h]
  int v148; // [rsp+0h] [rbp-548h]
  int v149; // [rsp+0h] [rbp-548h]
  int v150; // [rsp+0h] [rbp-548h]
  int v151; // [rsp+0h] [rbp-548h]
  int v152; // [rsp+0h] [rbp-548h]
  int v153; // [rsp+0h] [rbp-548h]
  int v154; // [rsp+0h] [rbp-548h]
  int v155; // [rsp+0h] [rbp-548h]
  int v156; // [rsp+0h] [rbp-548h]
  int v157; // [rsp+0h] [rbp-548h]
  int v158; // [rsp+0h] [rbp-548h]
  int v159; // [rsp+0h] [rbp-548h]
  int v160; // [rsp+0h] [rbp-548h]
  int v161; // [rsp+0h] [rbp-548h]
  int v162; // [rsp+0h] [rbp-548h]
  int v163; // [rsp+0h] [rbp-548h]
  int v164; // [rsp+0h] [rbp-548h]
  int v165; // [rsp+0h] [rbp-548h]
  int v166; // [rsp+0h] [rbp-548h]
  int v167; // [rsp+8h] [rbp-540h]
  int v168; // [rsp+8h] [rbp-540h]
  int v169; // [rsp+8h] [rbp-540h]
  int v170; // [rsp+8h] [rbp-540h]
  int v171; // [rsp+8h] [rbp-540h]
  int v172; // [rsp+8h] [rbp-540h]
  int v173; // [rsp+8h] [rbp-540h]
  int v174; // [rsp+8h] [rbp-540h]
  int v175; // [rsp+8h] [rbp-540h]
  int v176; // [rsp+8h] [rbp-540h]
  int v177; // [rsp+8h] [rbp-540h]
  int v178; // [rsp+8h] [rbp-540h]
  int v179; // [rsp+8h] [rbp-540h]
  int v180; // [rsp+8h] [rbp-540h]
  const __m128i *v181; // [rsp+8h] [rbp-540h]
  int v182; // [rsp+8h] [rbp-540h]
  int v183; // [rsp+8h] [rbp-540h]
  int v184; // [rsp+8h] [rbp-540h]
  int v185; // [rsp+8h] [rbp-540h]
  int v186; // [rsp+8h] [rbp-540h]
  int v187; // [rsp+8h] [rbp-540h]
  int v188; // [rsp+8h] [rbp-540h]
  int v189; // [rsp+8h] [rbp-540h]
  int v190; // [rsp+8h] [rbp-540h]
  _QWORD *v191; // [rsp+8h] [rbp-540h]
  const __m128i *v192; // [rsp+8h] [rbp-540h]
  __int64 v193; // [rsp+10h] [rbp-538h]
  __int64 v194; // [rsp+10h] [rbp-538h]
  __int64 v195; // [rsp+10h] [rbp-538h]
  __int64 v196; // [rsp+10h] [rbp-538h]
  __int64 v197; // [rsp+10h] [rbp-538h]
  __int64 v198; // [rsp+10h] [rbp-538h]
  __int64 v199; // [rsp+10h] [rbp-538h]
  __int64 v200; // [rsp+10h] [rbp-538h]
  __int64 v201; // [rsp+10h] [rbp-538h]
  __int64 v202; // [rsp+10h] [rbp-538h]
  __int64 v203; // [rsp+10h] [rbp-538h]
  __int64 v204; // [rsp+10h] [rbp-538h]
  __int64 v205; // [rsp+10h] [rbp-538h]
  __int64 v206; // [rsp+10h] [rbp-538h]
  const __m128i *v207; // [rsp+10h] [rbp-538h]
  __int64 v208; // [rsp+10h] [rbp-538h]
  __int64 v209; // [rsp+10h] [rbp-538h]
  __int64 v210; // [rsp+10h] [rbp-538h]
  __int64 v211; // [rsp+10h] [rbp-538h]
  __int64 v212; // [rsp+10h] [rbp-538h]
  __int64 v213; // [rsp+10h] [rbp-538h]
  _QWORD *v214; // [rsp+10h] [rbp-538h]
  __int64 v215; // [rsp+10h] [rbp-538h]
  __int64 v216; // [rsp+10h] [rbp-538h]
  __int64 v217; // [rsp+10h] [rbp-538h]
  const __m128i *v218; // [rsp+10h] [rbp-538h]
  __m128 v219; // [rsp+80h] [rbp-4C8h] BYREF
  char *v220; // [rsp+90h] [rbp-4B8h]
  ida_mcp::tools::cpp_class_recovery *v221; // [rsp+98h] [rbp-4B0h]
  const __m128i *v222; // [rsp+A0h] [rbp-4A8h]
  const __m128i *v223; // [rsp+A8h] [rbp-4A0h]
  const __m128i *v224; // [rsp+B0h] [rbp-498h]
  const __m128i *v225; // [rsp+B8h] [rbp-490h]
  const __m128i *v226; // [rsp+C0h] [rbp-488h]
  __int64 *v227; // [rsp+C8h] [rbp-480h]
  __int128 *v228; // [rsp+D0h] [rbp-478h]
  const __m128i *v229; // [rsp+D8h] [rbp-470h]
  const __m128i *v230; // [rsp+E0h] [rbp-468h]
  __int128 *v231; // [rsp+E8h] [rbp-460h]
  char *v232; // [rsp+F0h] [rbp-458h]
  __int64 *v233; // [rsp+F8h] [rbp-450h]
  __int128 *v234; // [rsp+100h] [rbp-448h]
  char *v235; // [rsp+108h] [rbp-440h]
  char *v236; // [rsp+110h] [rbp-438h]
  char *v237; // [rsp+118h] [rbp-430h]
  char *v238; // [rsp+120h] [rbp-428h]
  char *v239; // [rsp+128h] [rbp-420h]
  __int64 *v240; // [rsp+130h] [rbp-418h]
  __int64 *v241; // [rsp+138h] [rbp-410h]
  __int64 *v242; // [rsp+140h] [rbp-408h]
  __int64 *v243; // [rsp+148h] [rbp-400h]
  __int64 *v244; // [rsp+150h] [rbp-3F8h]
  void **v245; // [rsp+158h] [rbp-3F0h]
  __int64 *v246; // [rsp+160h] [rbp-3E8h]
  __int64 *v247; // [rsp+168h] [rbp-3E0h]
  __int64 v248; // [rsp+170h] [rbp-3D8h] BYREF
  __int64 v249; // [rsp+178h] [rbp-3D0h] BYREF
  char v250; // [rsp+180h] [rbp-3C8h] BYREF
  __int128 v251; // [rsp+188h] [rbp-3C0h] BYREF
  char v252; // [rsp+198h] [rbp-3B0h]
  __int128 v253; // [rsp+1A0h] [rbp-3A8h] BYREF
  char v254; // [rsp+1B0h] [rbp-398h] BYREF
  __int128 v255; // [rsp+1B8h] [rbp-390h] BYREF
  char v256; // [rsp+1C8h] [rbp-380h]
  __int128 v257; // [rsp+1D0h] [rbp-378h]
  char v258; // [rsp+1E0h] [rbp-368h] BYREF
  __int128 v259; // [rsp+1E8h] [rbp-360h]
  __int64 v260; // [rsp+1F8h] [rbp-350h]
  __int128 v261; // [rsp+200h] [rbp-348h] BYREF
  char v262; // [rsp+210h] [rbp-338h] BYREF
  __int128 v263; // [rsp+218h] [rbp-330h]
  char v264; // [rsp+228h] [rbp-320h]
  __int128 v265; // [rsp+230h] [rbp-318h]
  char v266; // [rsp+240h] [rbp-308h] BYREF
  __int128 v267; // [rsp+248h] [rbp-300h]
  __int64 v268; // [rsp+258h] [rbp-2F0h]
  __int64 v269; // [rsp+260h] [rbp-2E8h] BYREF
  __int64 v270; // [rsp+268h] [rbp-2E0h]
  __int64 v271; // [rsp+270h] [rbp-2D8h] BYREF
  __int128 v272; // [rsp+278h] [rbp-2D0h]
  __int64 v273; // [rsp+288h] [rbp-2C0h] BYREF
  __int128 v274; // [rsp+290h] [rbp-2B8h]
  char v275; // [rsp+2A0h] [rbp-2A8h] BYREF
  __int128 v276; // [rsp+2A8h] [rbp-2A0h]
  __int64 v277; // [rsp+2B8h] [rbp-290h] BYREF
  __int64 v278; // [rsp+2C0h] [rbp-288h] BYREF
  __int64 v279; // [rsp+2C8h] [rbp-280h]
  char v280; // [rsp+2D0h] [rbp-278h] BYREF
  __int128 v281; // [rsp+2D8h] [rbp-270h]
  char v282; // [rsp+2E8h] [rbp-260h]
  __int128 v283; // [rsp+2F0h] [rbp-258h]
  char v284; // [rsp+300h] [rbp-248h] BYREF
  __int128 v285; // [rsp+308h] [rbp-240h]
  __int64 v286; // [rsp+318h] [rbp-230h]
  __int128 v287; // [rsp+320h] [rbp-228h] BYREF
  __int64 v288; // [rsp+330h] [rbp-218h] BYREF
  char v289; // [rsp+338h] [rbp-210h] BYREF
  __int64 v290; // [rsp+340h] [rbp-208h]
  __int64 v291; // [rsp+348h] [rbp-200h] BYREF
  char v292; // [rsp+350h] [rbp-1F8h] BYREF
  __int64 v293; // [rsp+358h] [rbp-1F0h]
  char v294; // [rsp+360h] [rbp-1E8h] BYREF
  __int128 v295; // [rsp+368h] [rbp-1E0h]
  __int64 v296; // [rsp+378h] [rbp-1D0h] BYREF
  char v297; // [rsp+380h] [rbp-1C8h] BYREF
  __int64 v298; // [rsp+388h] [rbp-1C0h]
  __int64 v299; // [rsp+390h] [rbp-1B8h] BYREF
  char v300; // [rsp+398h] [rbp-1B0h] BYREF
  __int64 v301; // [rsp+3A0h] [rbp-1A8h]
  __int64 v302; // [rsp+3A8h] [rbp-1A0h] BYREF
  char v303; // [rsp+3B0h] [rbp-198h] BYREF
  __int64 v304; // [rsp+3B8h] [rbp-190h]
  __int64 v305; // [rsp+3C0h] [rbp-188h] BYREF
  __int128 v306; // [rsp+3C8h] [rbp-180h]
  __int64 v307; // [rsp+3D8h] [rbp-170h] BYREF
  __int64 v308; // [rsp+3E8h] [rbp-160h]
  _QWORD v309[3]; // [rsp+3F0h] [rbp-158h] BYREF
  char v310; // [rsp+408h] [rbp-140h] BYREF
  __m128i v311; // [rsp+410h] [rbp-138h] BYREF
  __m128i v312; // [rsp+420h] [rbp-128h] BYREF
  __int64 v313; // [rsp+438h] [rbp-110h]
  _QWORD v314[3]; // [rsp+440h] [rbp-108h] BYREF
  char v315; // [rsp+458h] [rbp-F0h] BYREF
  void *v316; // [rsp+460h] [rbp-E8h]
  __int64 v317; // [rsp+468h] [rbp-E0h]
  _QWORD v318[2]; // [rsp+470h] [rbp-D8h] BYREF
  void *v319; // [rsp+480h] [rbp-C8h] BYREF
  __int64 v320; // [rsp+488h] [rbp-C0h]
  _QWORD v321[2]; // [rsp+490h] [rbp-B8h] BYREF
  char v322; // [rsp+4A0h] [rbp-A8h]
  __int64 v323; // [rsp+4A8h] [rbp-A0h] BYREF
  char v324; // [rsp+4C0h] [rbp-88h]
  ida_mcp::tools::cpp_class_recovery *v325; // [rsp+4C8h] [rbp-80h]
  _QWORD v326[2]; // [rsp+4D8h] [rbp-70h] BYREF
  char v327; // [rsp+4E8h] [rbp-60h]
  char v328; // [rsp+4F8h] [rbp-50h]
  unsigned __int64 v329; // [rsp+508h] [rbp-40h]

  v221 = this;
  v329 = __readfsqword(0x28u);
  v316 = v318;
  v317 = 0;
  LOBYTE(v318[0]) = 0;
  v319 = v321;
  v320 = 0;
  LOBYTE(v321[0]) = 0;
  v322 = 0;
  v323 = 0;
  v324 = 0;
  v328 = 0;
  std::string::_M_replace();
  v245 = &v319;
  std::string::_M_replace();
  v231 = &v251;
  *(_QWORD *)&v251 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v250 = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "type", v3, v4, v5, v6, v141, v167, v193);
  v252 = 0;
  v227 = (__int64 *)&v253;
  *(_QWORD *)&v253 = 0;
  v251 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v252 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "object", v8, v9, v10, v11, v142, v168, v194);
  v232 = &v250;
  v253 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v299,
    (const __m128i *)&v250);
  v301 = 0;
  v294 = 0;
  *(_QWORD *)&v295 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v294 = 3;
  v12 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v12, "properties", v13, v14, v15, v16, v143, v169, (__int64)&v299);
  v266 = 0;
  *(_QWORD *)&v267 = 0;
  v295 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v266 = 3;
  v17 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v17, "dry_run", v18, v19, v20, v21, v144, v170, v195);
  v254 = 0;
  v228 = &v255;
  *(_QWORD *)&v255 = 0;
  v267 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v254 = 3;
  v22 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v22, "type", v23, v24, v25, v26, v145, v171, v196);
  v256 = 0;
  v255 = (unsigned __int64)v22;
  *(_QWORD *)&v257 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v256 = 3;
  v27 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v27, "boolean", v28, v29, v30, v31, v146, v172, v197);
  v220 = &v254;
  v257 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v305,
    (const __m128i *)&v254);
  *((_QWORD *)&v306 + 1) = 0;
  v258 = 0;
  *(_QWORD *)&v259 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v258 = 3;
  v32 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v32, "default", v33, v34, v35, v36, v147, v173, v198);
  v260 = 4;
  v229 = (const __m128i *)&v258;
  v243 = &v307;
  v261 = 0u;
  v259 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v307,
    (const __m128i *)&v258);
  v308 = 0;
  v262 = 0;
  *(_QWORD *)&v263 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v262 = 3;
  v37 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v37, "description", v38, v39, v40, v41, v148, v174, v199);
  v264 = 0;
  *(_QWORD *)&v265 = 0;
  v263 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v264 = 3;
  v42 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v42,
    "Scan and report counts WITHOUT modifying the IDB.",
    v43,
    v44,
    v45,
    v46,
    v149,
    v175,
    v200);
  v225 = (const __m128i *)&v262;
  v265 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v309,
    (const __m128i *)&v262);
  v309[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v270 = 0;
  v223 = (const __m128i *)&v266;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v288,
    (const __m128i *)&v266);
  v290 = 0;
  v284 = 0;
  *(_QWORD *)&v285 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v284 = 3;
  v47 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v47, "rename_methods", v48, v49, v50, v51, v150, (int)&v288, v201);
  LOBYTE(v271) = 0;
  *(_QWORD *)&v272 = 0;
  v285 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v271) = 3;
  v52 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v52, "type", v53, v54, v55, v56, v151, v176, v202);
  LOBYTE(v273) = 0;
  *(_QWORD *)&v274 = 0;
  v272 = (unsigned __int64)v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v273) = 3;
  v57 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v57, "boolean", v58, v59, v60, v61, v152, v177, v203);
  v274 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v311,
    (const __m128i *)&v271);
  v312.m128i_i64[0] = 0;
  v275 = 0;
  *(_QWORD *)&v276 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v275 = 3;
  v62 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v62, "default", v63, v64, v65, v66, v153, v178, v204);
  v277 = 4;
  v230 = (const __m128i *)&v275;
  v244 = &v312.m128i_i64[1];
  v278 = 1;
  v279 = 0;
  v276 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v312.m128i_i64[1],
    (const __m128i *)&v275);
  v313 = 0;
  v280 = 0;
  *(_QWORD *)&v281 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v280 = 3;
  v67 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v67, "description", v68, v69, v70, v71, v154, v179, v205);
  v282 = 0;
  *(_QWORD *)&v283 = 0;
  v281 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v282 = 3;
  v72 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v72,
    "Also rename sub_XXXX virtual methods to ClassName::vfunc_N. Disable to only name vtables.",
    v73,
    v74,
    v75,
    v76,
    v155,
    v180,
    v206);
  v226 = (const __m128i *)&v280;
  v219 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  v283 = (unsigned __int64)v72;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v314,
    (const __m128i *)&v280);
  v314[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  *((_QWORD *)&v287 + 1) = 0;
  v224 = (const __m128i *)&v284;
  v240 = &v291;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v291,
    (const __m128i *)&v284);
  v293 = 0;
  v241 = &v296;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v296,
    v181);
  v298 = 0;
  v222 = (const __m128i *)&v294;
  v242 = &v302;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v302,
    (const __m128i *)&v294);
  v304 = 0;
  LOBYTE(v248) = 0;
  v246 = &v248;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v248,
    v207);
  v77 = v322;
  v78 = (__m128i *)&v315;
  v79 = v249;
  v322 = v248;
  LOBYTE(v248) = v77;
  v249 = v323;
  v323 = v79;
  v247 = &v249;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v239 = &v303;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v238 = &v300;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v237 = &v297;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v236 = &v292;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v235 = &v289;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v234 = &v287;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v78 = (__m128i *)((char *)v78 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v78 != &v311 );
  v80 = (__int64 *)&v310;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v233 = &v278;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v232 = (char *)&v269;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v80 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v80 != &v305 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v220 = (char *)&v261;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v219);
  v311.m128i_i64[1] = 0;
  v311.m128i_i64[0] = (__int64)ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::handle_recover_cpp_classes;
  v312 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v312.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v312.m128i_i64[0])(&v311, &v311, 3);
  if ( v328 && v327 && v325 != (ida_mcp::tools::cpp_class_recovery *)v326 )
    operator delete(v325, v326[0] + 1LL);
  if ( v324 )
  {
    v324 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v227 = &v323;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v319 != v321 )
    operator delete(v319, v321[0] + 1LL);
  if ( v316 != v318 )
    operator delete(v316, v318[0] + 1LL);
  v316 = v318;
  v317 = 0;
  LOBYTE(v318[0]) = 0;
  v319 = v321;
  v320 = 0;
  LOBYTE(v321[0]) = 0;
  v322 = 0;
  v323 = 0;
  v324 = 0;
  v328 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v258 = 0;
  *(_QWORD *)&v259 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v258 = 3;
  v82 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v82, "type", v83, v84, v85, v86, v156, (int)v181, (__int64)v207);
  LOBYTE(v260) = 0;
  *(_QWORD *)&v261 = 0;
  v259 = (unsigned __int64)v82;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v260) = 3;
  v87 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v87, "object", v88, v89, v90, v91, v157, v182, v208);
  v261 = (unsigned __int64)v87;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v311,
    v229);
  v312.m128i_i64[0] = 0;
  LOBYTE(v305) = 0;
  *(_QWORD *)&v306 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v305) = 3;
  v92 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v92, "properties", v93, v94, v95, v96, v158, v183, v209);
  v275 = 0;
  *(_QWORD *)&v276 = 0;
  v306 = (unsigned __int64)v92;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v275 = 3;
  v97 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v97, "limit", v98, v99, v100, v101, v159, v184, v210);
  v262 = 0;
  *(_QWORD *)&v263 = 0;
  v276 = (unsigned __int64)v97;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v262 = 3;
  v102 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v102, "type", v103, v104, v105, v106, v160, v185, v211);
  v264 = 0;
  *(_QWORD *)&v265 = 0;
  v263 = (unsigned __int64)v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v264 = 3;
  v107 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v107, "integer", v108, v109, v110, v111, v161, v186, v212);
  v265 = (unsigned __int64)v107;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v271,
    v225);
  *((_QWORD *)&v272 + 1) = 0;
  v266 = 0;
  *(_QWORD *)&v267 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v266 = 3;
  v112 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v112, "default", v113, v114, v115, v116, v162, v187, v213);
  v268 = 5;
  v269 = 50;
  v270 = 0;
  v267 = (unsigned __int64)v112;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v273,
    v223);
  *((_QWORD *)&v274 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v277,
    (const __m128i *)&v271);
  v279 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v214,
    v230);
  v301 = 0;
  v294 = 0;
  *(_QWORD *)&v295 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v294 = 3;
  v117 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v117, "offset", v118, v119, v120, v121, v163, v188, (__int64)v214);
  v280 = 0;
  *(_QWORD *)&v281 = 0;
  v295 = (unsigned __int64)v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v280 = 3;
  v122 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v122, "type", v123, v124, v125, v126, v164, v189, v215);
  v282 = 0;
  *(_QWORD *)&v283 = 0;
  v281 = (unsigned __int64)v122;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v282 = 3;
  v127 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v127, "integer", v128, v129, v130, v131, v165, v190, v216);
  v283 = (unsigned __int64)v127;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v191,
    v226);
  v290 = 0;
  v284 = 0;
  *(_QWORD *)&v285 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v284 = 3;
  v132 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v132, "default", v133, v134, v135, v136, v166, (int)v191, v217);
  v285 = (unsigned __int64)v132;
  v286 = 5;
  v287 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v240,
    v224);
  v293 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v241,
    v192);
  v298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v242,
    v222);
  v304 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v243,
    v218);
  v308 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v244,
    (const __m128i *)&v305);
  v313 = 0;
  LOBYTE(v248) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v246,
    &v311);
  v137 = v322;
  v322 = v248;
  v138 = v323;
  LOBYTE(v248) = v137;
  v323 = v249;
  v249 = v138;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v139 = _mm_load_si128((const __m128i *)&v219);
  v311.m128i_i64[1] = 0;
  v311.m128i_i64[0] = (__int64)ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::handle_list_recovered_vtables;
  v312 = v139;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v312.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v312.m128i_i64[0])(&v311, &v311, 3);
  if ( v328 && v327 && v325 != (ida_mcp::tools::cpp_class_recovery *)v326 )
    operator delete(v325, v326[0] + 1LL);
  if ( v324 )
  {
    v324 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v319 != v321 )
    operator delete(v319, v321[0] + 1LL);
  if ( v316 != v318 )
    operator delete(v316, v318[0] + 1LL);
  return v329 - __readfsqword(0x28u);
}

