unsigned __int64 __fastcall ida_mcp::tools::find_items::register_tools(
        ida_mcp::tools::find_items *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i si128; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __m128 v34; // xmm1
  __m128i v35; // xmm0
  __m128i *v36; // r14
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 *v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 *v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  const __m128i *v56; // rsi
  __int64 v57; // rax
  __int64 *v58; // r12
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  const __m128i *v66; // rsi
  __int64 v67; // rax
  __int64 *v68; // r12
  __int64 v69; // rax
  __int64 v70; // rdx
  __m128i v71; // xmm0
  const __m128i *v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __m128 v78; // xmm2
  __m128i v79; // xmm0
  char *v80; // r15
  __int64 v81; // rax
  __int64 *v82; // r12
  __m128i v83; // xmm4
  int v85; // [rsp+0h] [rbp-668h]
  int v86; // [rsp+0h] [rbp-668h]
  int v87; // [rsp+0h] [rbp-668h]
  int v88; // [rsp+0h] [rbp-668h]
  int v89; // [rsp+0h] [rbp-668h]
  int v90; // [rsp+8h] [rbp-660h]
  int v91; // [rsp+8h] [rbp-660h]
  int v92; // [rsp+8h] [rbp-660h]
  int v93; // [rsp+8h] [rbp-660h]
  int v94; // [rsp+8h] [rbp-660h]
  __int64 v95; // [rsp+10h] [rbp-658h]
  __int64 v96; // [rsp+10h] [rbp-658h]
  __int64 v97; // [rsp+10h] [rbp-658h]
  __int64 v98; // [rsp+10h] [rbp-658h]
  __int64 v99; // [rsp+10h] [rbp-658h]
  ida_mcp::tools::find_items *v100; // [rsp+C0h] [rbp-5A8h] BYREF
  char *v101; // [rsp+C8h] [rbp-5A0h]
  const __m128i *v102; // [rsp+D0h] [rbp-598h]
  char *v103; // [rsp+D8h] [rbp-590h]
  const __m128i *v104; // [rsp+E0h] [rbp-588h]
  char *v105; // [rsp+E8h] [rbp-580h]
  __m128i v106; // [rsp+F0h] [rbp-578h] BYREF
  char v107[8]; // [rsp+100h] [rbp-568h]
  __int128 *v108; // [rsp+108h] [rbp-560h]
  __int128 *v109; // [rsp+110h] [rbp-558h]
  __int128 *v110; // [rsp+118h] [rbp-550h]
  __int128 *v111; // [rsp+120h] [rbp-548h]
  __int128 *v112; // [rsp+128h] [rbp-540h]
  __int128 *v113; // [rsp+130h] [rbp-538h]
  const __m128i *v114; // [rsp+138h] [rbp-530h]
  char *v115; // [rsp+140h] [rbp-528h]
  char *v116; // [rsp+148h] [rbp-520h]
  char *v117; // [rsp+150h] [rbp-518h]
  char *v118; // [rsp+158h] [rbp-510h]
  char v119[16]; // [rsp+160h] [rbp-508h] BYREF
  __int64 *v120; // [rsp+170h] [rbp-4F8h]
  char v121[8]; // [rsp+178h] [rbp-4F0h]
  char v122[8]; // [rsp+180h] [rbp-4E8h]
  char *v123; // [rsp+188h] [rbp-4E0h]
  char *v124; // [rsp+190h] [rbp-4D8h]
  char *v125; // [rsp+198h] [rbp-4D0h]
  __int64 v126; // [rsp+1A0h] [rbp-4C8h] BYREF
  __m128i v127; // [rsp+1B0h] [rbp-4B8h] BYREF
  __m128i v128; // [rsp+1C0h] [rbp-4A8h] BYREF
  int v129[4]; // [rsp+1D0h] [rbp-498h] BYREF
  char v130; // [rsp+1E0h] [rbp-488h]
  __int128 v131; // [rsp+1E8h] [rbp-480h]
  char v132; // [rsp+1F8h] [rbp-470h]
  __int128 v133; // [rsp+200h] [rbp-468h] BYREF
  char v134; // [rsp+210h] [rbp-458h] BYREF
  __int128 v135; // [rsp+218h] [rbp-450h] BYREF
  char v136; // [rsp+228h] [rbp-440h]
  __int128 v137; // [rsp+230h] [rbp-438h] BYREF
  char v138; // [rsp+240h] [rbp-428h] BYREF
  __int128 v139; // [rsp+248h] [rbp-420h] BYREF
  char v140; // [rsp+258h] [rbp-410h]
  __int128 v141; // [rsp+260h] [rbp-408h] BYREF
  char v142; // [rsp+270h] [rbp-3F8h] BYREF
  __int128 v143; // [rsp+278h] [rbp-3F0h] BYREF
  char v144; // [rsp+288h] [rbp-3E0h]
  __int128 v145; // [rsp+290h] [rbp-3D8h] BYREF
  _QWORD v146[3]; // [rsp+2A0h] [rbp-3C8h] BYREF
  _QWORD v147[3]; // [rsp+2B8h] [rbp-3B0h] BYREF
  char v148; // [rsp+2D0h] [rbp-398h] BYREF
  int v149[4]; // [rsp+2D8h] [rbp-390h] BYREF
  _QWORD v150[3]; // [rsp+2E8h] [rbp-380h] BYREF
  char v151; // [rsp+300h] [rbp-368h] BYREF
  int v152[4]; // [rsp+308h] [rbp-360h] BYREF
  char v153; // [rsp+318h] [rbp-350h]
  int v154[4]; // [rsp+320h] [rbp-348h] BYREF
  char v155; // [rsp+330h] [rbp-338h] BYREF
  int v156[4]; // [rsp+338h] [rbp-330h]
  char v157; // [rsp+348h] [rbp-320h]
  int v158[4]; // [rsp+350h] [rbp-318h]
  __int64 v159; // [rsp+360h] [rbp-308h] BYREF
  __int128 v160; // [rsp+368h] [rbp-300h]
  __int64 v161; // [rsp+378h] [rbp-2F0h] BYREF
  __int128 v162; // [rsp+380h] [rbp-2E8h]
  __int64 v163; // [rsp+390h] [rbp-2D8h] BYREF
  __int128 v164; // [rsp+398h] [rbp-2D0h]
  __int64 v165; // [rsp+3A8h] [rbp-2C0h] BYREF
  char v166; // [rsp+3B0h] [rbp-2B8h] BYREF
  __int64 v167; // [rsp+3B8h] [rbp-2B0h]
  char v168; // [rsp+3C0h] [rbp-2A8h] BYREF
  int v169[4]; // [rsp+3C8h] [rbp-2A0h]
  __int64 v170; // [rsp+3D8h] [rbp-290h] BYREF
  __int128 v171; // [rsp+3E0h] [rbp-288h]
  char v172; // [rsp+3F0h] [rbp-278h] BYREF
  int v173[4]; // [rsp+3F8h] [rbp-270h]
  char v174; // [rsp+408h] [rbp-260h]
  int v175[4]; // [rsp+410h] [rbp-258h]
  __int64 v176; // [rsp+420h] [rbp-248h] BYREF
  __int128 v177; // [rsp+428h] [rbp-240h]
  __int64 v178; // [rsp+438h] [rbp-230h] BYREF
  __int128 v179; // [rsp+440h] [rbp-228h]
  __int64 v180; // [rsp+450h] [rbp-218h] BYREF
  __int128 v181; // [rsp+458h] [rbp-210h]
  __int64 v182; // [rsp+468h] [rbp-200h] BYREF
  char v183; // [rsp+470h] [rbp-1F8h] BYREF
  __int64 v184; // [rsp+478h] [rbp-1F0h]
  char v185; // [rsp+480h] [rbp-1E8h] BYREF
  int v186[4]; // [rsp+488h] [rbp-1E0h]
  __int64 v187; // [rsp+498h] [rbp-1D0h] BYREF
  char v188; // [rsp+4A0h] [rbp-1C8h] BYREF
  __int64 v189; // [rsp+4A8h] [rbp-1C0h]
  __int64 v190; // [rsp+4B0h] [rbp-1B8h] BYREF
  __int128 v191; // [rsp+4B8h] [rbp-1B0h]
  char v192[16]; // [rsp+4C8h] [rbp-1A0h] BYREF
  __int64 v193; // [rsp+4D8h] [rbp-190h]
  __int64 v194; // [rsp+4E0h] [rbp-188h] BYREF
  __int128 v195; // [rsp+4E8h] [rbp-180h]
  __int64 v196; // [rsp+4F8h] [rbp-170h] BYREF
  __int64 v197; // [rsp+508h] [rbp-160h]
  _QWORD v198[3]; // [rsp+510h] [rbp-158h] BYREF
  char v199; // [rsp+528h] [rbp-140h] BYREF
  char v200[8]; // [rsp+530h] [rbp-138h] BYREF
  __m256i v201; // [rsp+538h] [rbp-130h] BYREF
  __int64 v202; // [rsp+558h] [rbp-110h]
  _QWORD v203[3]; // [rsp+560h] [rbp-108h] BYREF
  char v204; // [rsp+578h] [rbp-F0h] BYREF
  __m128i v205; // [rsp+580h] [rbp-E8h] BYREF
  __int64 v206; // [rsp+590h] [rbp-D8h] BYREF
  __int64 v207; // [rsp+598h] [rbp-D0h] BYREF
  void *v208; // [rsp+5A0h] [rbp-C8h]
  __int64 v209; // [rsp+5A8h] [rbp-C0h]
  char v210[16]; // [rsp+5B0h] [rbp-B8h] BYREF
  __int64 v211; // [rsp+5C0h] [rbp-A8h]
  __int64 v212; // [rsp+5C8h] [rbp-A0h] BYREF
  char v213; // [rsp+5E0h] [rbp-88h]
  ida_mcp::tools::find_items *v214; // [rsp+5E8h] [rbp-80h]
  __int64 v215; // [rsp+5F8h] [rbp-70h] BYREF
  char v216; // [rsp+608h] [rbp-60h]
  char v217; // [rsp+618h] [rbp-50h]
  unsigned __int64 v218; // [rsp+628h] [rbp-40h]

  v100 = this;
  v218 = __readfsqword(0x28u);
  *(_QWORD *)v152 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v151 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v153 = 0;
  *(_QWORD *)v154 = 0;
  *(_OWORD *)v152 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v153 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v103 = &v151;
  *(_OWORD *)v154 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v205,
    (const __m128i *)&v151,
    2);
  v206 = 0;
  LOBYTE(v194) = 0;
  *(_QWORD *)&v195 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v194) = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)(v4 + 8) = 10;
  v168 = 0;
  *(_QWORD *)v169 = 0;
  v195 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v168 = 3;
  v5 = operator new(0x20u);
  strcpy((char *)(v5 + 16), "address");
  *(_QWORD *)v5 = v5 + 16;
  *(_QWORD *)(v5 + 8) = 7;
  v155 = 0;
  *(_QWORD *)v156 = 0;
  *(_OWORD *)v169 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v155 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  v157 = 0;
  *(_QWORD *)v158 = 0;
  *(_OWORD *)v156 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v157 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "string", v8, v9, v10, v11, v85, (int)v152, (__int64)v154);
  v104 = (const __m128i *)&v155;
  *(_OWORD *)v158 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v163,
    (const __m128i *)&v155,
    2);
  *((_QWORD *)&v164 + 1) = 0;
  LOBYTE(v159) = 0;
  *(_QWORD *)&v160 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v159) = 3;
  v12 = operator new(0x20u);
  *(_QWORD *)v12 = v12 + 16;
  strcpy((char *)(v12 + 16), "description");
  *(_QWORD *)(v12 + 8) = 11;
  LOBYTE(v161) = 0;
  *(_QWORD *)&v162 = 0;
  v160 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v161) = 3;
  v13 = (__int64 *)operator new(0x20u);
  *(_QWORD *)v129 = 20;
  *v13 = (__int64)(v13 + 2);
  v14 = std::string::_M_create();
  v15 = *(_QWORD *)v129;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2680);
  *v13 = v14;
  v13[2] = v15;
  *(__m128i *)v14 = si128;
  *(_DWORD *)(v14 + 16) = 1936942450;
  v17 = *(_QWORD *)v129;
  v18 = *v13;
  v13[1] = *(_QWORD *)v129;
  *(_BYTE *)(v18 + v17) = 0;
  *(_QWORD *)v119 = &v165;
  v162 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v165,
    (const __m128i *)&v159,
    2);
  v167 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v170,
    (const __m128i *)&v163,
    2);
  *((_QWORD *)&v171 + 1) = 0;
  v101 = &v168;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v190,
    (const __m128i *)&v168,
    2);
  *((_QWORD *)&v191 + 1) = 0;
  v185 = 0;
  *(_QWORD *)v186 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v185 = 3;
  v19 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v19, "direction", v20, v21, v22, v23, v86, v90, v95);
  v172 = 0;
  *(_QWORD *)v173 = 0;
  *(_OWORD *)v186 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v172 = 3;
  v24 = operator new(0x20u);
  *(_QWORD *)v24 = v24 + 16;
  strcpy((char *)(v24 + 16), "type");
  *(_QWORD *)(v24 + 8) = 4;
  v174 = 0;
  *(_QWORD *)v175 = 0;
  *(_OWORD *)v173 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v174 = 3;
  v25 = operator new(0x20u);
  strcpy((char *)(v25 + 16), "integer");
  *(_QWORD *)v25 = v25 + 16;
  *(_QWORD *)(v25 + 8) = 7;
  v105 = &v172;
  *(_OWORD *)v175 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v180,
    (const __m128i *)&v172,
    2);
  *((_QWORD *)&v181 + 1) = 0;
  LOBYTE(v176) = 0;
  *(_QWORD *)&v177 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v176) = 3;
  v26 = operator new(0x20u);
  *(_QWORD *)v26 = v26 + 16;
  strcpy((char *)(v26 + 16), "description");
  *(_QWORD *)(v26 + 8) = 11;
  LOBYTE(v178) = 0;
  *(_QWORD *)&v179 = 0;
  v177 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v178) = 3;
  v27 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v27,
    "1=forward (default), -1=backward",
    v28,
    v29,
    v30,
    v31,
    v87,
    v91,
    v96);
  *(_QWORD *)v121 = &v182;
  v179 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v182,
    (const __m128i *)&v176,
    2);
  v184 = 0;
  *(_QWORD *)v122 = &v187;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v187,
    (const __m128i *)&v180,
    2);
  v189 = 0;
  v102 = (const __m128i *)&v185;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v192,
    (const __m128i *)&v185,
    2);
  v193 = 0;
  *(_QWORD *)v107 = &v196;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v196,
    (const __m128i *)&v190,
    2);
  v197 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v207,
    (const __m128i *)&v194,
    2);
  v209 = 0;
  v200[0] = 0;
  v201.m256i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v200[0] = 3;
  v32 = operator new(0x20u);
  *(_QWORD *)v32 = v32 + 16;
  strcpy((char *)(v32 + 16), "required");
  *(_QWORD *)(v32 + 8) = 8;
  v148 = 0;
  *(_QWORD *)v149 = 0;
  *(_OWORD *)v201.m256i_i8 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v33 = operator new(0x20u);
  *(_QWORD *)v33 = v33 + 16;
  strcpy((char *)(v33 + 16), "address");
  v34 = _mm_loadh_ps((const double *)&v100);
  *(_QWORD *)(v33 + 8) = 7;
  v114 = (const __m128i *)&v148;
  v106 = (__m128i)v34;
  *(_OWORD *)v149 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v35 = _mm_load_si128((const __m128i *)v129);
  v202 = 0;
  *(__m128i *)&v201.m256i_u64[2] = v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v210,
    (const __m128i *)v200,
    2);
  v211 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v126,
    &v205,
    3);
  v120 = &v212;
  v36 = (__m128i *)&v212;
  do
  {
    v36 = (__m128i *)((char *)v36 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v36 != &v205 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v115 = &v192[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = &v188;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v117 = &v183;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v116 = &v166;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v127 = _mm_load_si128(&v106);
  ZZN7ida_mcp5tools10find_items14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_T_E_clIPFN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNSB_14adl_serializerESE_IhSaIhEEvEERKSO_EEEDaS6_S6_S7_(
    (void ***)&v127,
    "find_code",
    "Find next/prev code (instruction) address",
    (__int64)ida_mcp::tools::find_items::`anonymous namespace'::handle_find_code);
  ZZN7ida_mcp5tools10find_items14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_T_E_clIPFN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNSB_14adl_serializerESE_IhSaIhEEvEERKSO_EEEDaS6_S6_S7_(
    (void ***)&v127,
    "find_data",
    "Find next/prev data item address",
    (__int64)ida_mcp::tools::find_items::`anonymous namespace'::handle_find_data);
  ZZN7ida_mcp5tools10find_items14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_T_E_clIPFN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNSB_14adl_serializerESE_IhSaIhEEvEERKSO_EEEDaS6_S6_S7_(
    (void ***)&v127,
    "find_unknown",
    "Find next/prev undefined/unexplored address",
    (__int64)ida_mcp::tools::find_items::`anonymous namespace'::handle_find_unknown);
  ZZN7ida_mcp5tools10find_items14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_T_E_clIPFN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNSB_14adl_serializerESE_IhSaIhEEvEERKSO_EEEDaS6_S6_S7_(
    (void ***)&v127,
    "find_defined",
    "Find next/prev defined (code or data) address",
    (__int64)ida_mcp::tools::find_items::`anonymous namespace'::handle_find_defined);
  ZZN7ida_mcp5tools10find_items14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_T_E_clIPFN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNSB_14adl_serializerESE_IhSaIhEEvEERKSO_EEEDaS6_S6_S7_(
    (void ***)&v127,
    "find_not_func",
    "Find next/prev address not inside any function (orphan code/data)",
    (__int64)ida_mcp::tools::find_items::`anonymous namespace'::handle_find_not_func);
  ZZN7ida_mcp5tools10find_items14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_T_E_clIPFN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNSB_14adl_serializerESE_IhSaIhEEvEERKSO_EEEDaS6_S6_S7_(
    (void ***)&v127,
    "find_notype",
    "Find next/prev address without type information",
    (__int64)ida_mcp::tools::find_items::`anonymous namespace'::handle_find_notype);
  v205.m128i_i64[1] = 0;
  v205.m128i_i64[0] = (__int64)&v206;
  LOBYTE(v206) = 0;
  v208 = v210;
  v209 = 0;
  v210[0] = 0;
  LOBYTE(v211) = 0;
  v212 = 0;
  v213 = 0;
  v217 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v134 = 0;
  v108 = &v135;
  *(_QWORD *)&v135 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v134 = 3;
  v37 = operator new(0x20u);
  *(_QWORD *)v37 = v37 + 16;
  strcpy((char *)(v37 + 16), "type");
  *(_QWORD *)(v37 + 8) = 4;
  v136 = 0;
  *(_QWORD *)&v137 = 0;
  v109 = &v137;
  v135 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v136 = 3;
  v38 = operator new(0x20u);
  *(_QWORD *)v38 = v38 + 16;
  strcpy((char *)(v38 + 16), "object");
  *(_QWORD *)(v38 + 8) = 6;
  v123 = &v134;
  v137 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v200,
    (const __m128i *)&v134,
    2);
  v201.m256i_i64[1] = 0;
  v185 = 0;
  *(_QWORD *)v186 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v185 = 3;
  v39 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v39, "properties", v40, v41, v42, v43, (int)v149, v92, v97);
  v148 = 0;
  *(_QWORD *)v149 = 0;
  *(_OWORD *)v186 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v44 = operator new(0x20u);
  strcpy((char *)(v44 + 16), "address");
  *(_QWORD *)v44 = v44 + 16;
  *(_QWORD *)(v44 + 8) = 7;
  v138 = 0;
  *(_QWORD *)&v139 = 0;
  v110 = &v139;
  *(_OWORD *)v149 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v138 = 3;
  v45 = operator new(0x20u);
  *(_QWORD *)v45 = v45 + 16;
  strcpy((char *)(v45 + 16), "type");
  *(_QWORD *)(v45 + 8) = 4;
  v140 = 0;
  *(_QWORD *)&v141 = 0;
  v111 = &v141;
  v139 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v140 = 3;
  v46 = operator new(0x20u);
  strcpy((char *)(v46 + 16), "string");
  *(_QWORD *)v46 = v46 + 16;
  *(_QWORD *)(v46 + 8) = 6;
  v124 = &v138;
  v106.m128i_i64[0] = (__int64)v146;
  v141 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v146,
    (const __m128i *)&v138,
    2);
  v146[2] = 0;
  v142 = 0;
  *(_QWORD *)&v143 = 0;
  v112 = &v143;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v142 = 3;
  v47 = operator new(0x20u);
  *(_QWORD *)v47 = v47 + 16;
  strcpy((char *)(v47 + 16), "description");
  *(_QWORD *)(v47 + 8) = 11;
  v144 = 0;
  *(_QWORD *)&v145 = 0;
  v113 = &v145;
  v143 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v144 = 3;
  v48 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v48, "Starting hex address", v49, v50, v51, v52, v88, v93, v98);
  v125 = &v142;
  v145 = (unsigned __int64)v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v147,
    (const __m128i *)&v142,
    2);
  v147[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v150,
    (const __m128i *)v106.m128i_i64[0],
    2);
  v150[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v194,
    v114,
    2);
  *((_QWORD *)&v195 + 1) = 0;
  LOBYTE(v163) = 0;
  *(_QWORD *)&v164 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v163) = 3;
  v53 = operator new(0x20u);
  *(_QWORD *)v53 = v53 + 16;
  *(_DWORD *)(v53 + 16) = 1970037110;
  *(_BYTE *)(v53 + 20) = 101;
  *(_QWORD *)(v53 + 8) = 5;
  *(_BYTE *)(v53 + 21) = 0;
  v151 = 0;
  *(_QWORD *)v152 = 0;
  v164 = (unsigned __int64)v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v151 = 3;
  v54 = operator new(0x20u);
  *(_QWORD *)v54 = v54 + 16;
  strcpy((char *)(v54 + 16), "type");
  *(_QWORD *)(v54 + 8) = 4;
  v153 = 0;
  *(_QWORD *)v154 = 0;
  *(_OWORD *)v152 = (unsigned __int64)v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v153 = 3;
  v55 = operator new(0x20u);
  v56 = (const __m128i *)v103;
  *(_QWORD *)v55 = v55 + 16;
  strcpy((char *)(v55 + 16), "string");
  *(_QWORD *)(v55 + 8) = 6;
  *(_OWORD *)v154 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v159,
    v56,
    2);
  *((_QWORD *)&v160 + 1) = 0;
  v155 = 0;
  *(_QWORD *)v156 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v155 = 3;
  v57 = operator new(0x20u);
  *(_QWORD *)v57 = v57 + 16;
  strcpy((char *)(v57 + 16), "description");
  *(_QWORD *)(v57 + 8) = 11;
  v157 = 0;
  *(_QWORD *)v158 = 0;
  *(_OWORD *)v156 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v157 = 3;
  v58 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v58,
    "Immediate value to search for (hex)",
    v59,
    v60,
    v61,
    v62,
    v89,
    v94,
    v99);
  *(_OWORD *)v158 = (unsigned __int64)v58;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v161,
    v104,
    2);
  *((_QWORD *)&v162 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v119,
    (const __m128i *)&v159,
    2);
  v167 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v107,
    (const __m128i *)&v163,
    2);
  v197 = 0;
  LOBYTE(v180) = 0;
  *(_QWORD *)&v181 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v180) = 3;
  v63 = operator new(0x20u);
  *(_QWORD *)v63 = v63 + 16;
  strcpy((char *)(v63 + 16), "direction");
  *(_QWORD *)(v63 + 8) = 9;
  v168 = 0;
  *(_QWORD *)v169 = 0;
  v181 = (unsigned __int64)v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v168 = 3;
  v64 = operator new(0x20u);
  *(_QWORD *)v64 = v64 + 16;
  strcpy((char *)(v64 + 16), "type");
  *(_QWORD *)(v64 + 8) = 4;
  LOBYTE(v170) = 0;
  *(_QWORD *)&v171 = 0;
  *(_OWORD *)v169 = (unsigned __int64)v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v170) = 3;
  v65 = operator new(0x20u);
  strcpy((char *)(v65 + 16), "integer");
  v66 = (const __m128i *)v101;
  *(_QWORD *)v65 = v65 + 16;
  *(_QWORD *)(v65 + 8) = 7;
  v171 = (unsigned __int64)v65;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v176,
    v66,
    2);
  *((_QWORD *)&v177 + 1) = 0;
  v172 = 0;
  *(_QWORD *)v173 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v172 = 3;
  v67 = operator new(0x20u);
  *(_QWORD *)v67 = v67 + 16;
  strcpy((char *)(v67 + 16), "description");
  *(_QWORD *)(v67 + 8) = 11;
  v174 = 0;
  *(_QWORD *)v175 = 0;
  *(_OWORD *)v173 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v174 = 3;
  v68 = (__int64 *)operator new(0x20u);
  *v68 = (__int64)(v68 + 2);
  *(_QWORD *)v129 = 32;
  v69 = std::string::_M_create();
  v70 = *(_QWORD *)v129;
  v71 = _mm_load_si128((const __m128i *)&xmmword_3E2690);
  *v68 = v69;
  v72 = (const __m128i *)v105;
  v68[2] = v70;
  *(__m128i *)v69 = v71;
  *(__m128i *)(v69 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E26A0);
  v73 = *(_QWORD *)v129;
  v74 = *v68;
  v68[1] = *(_QWORD *)v129;
  *(_BYTE *)(v74 + v73) = 0;
  *(_OWORD *)v175 = (unsigned __int64)v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v178,
    v72,
    2);
  *((_QWORD *)&v179 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v121,
    (const __m128i *)&v176,
    2);
  v184 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v198,
    (const __m128i *)&v180,
    2);
  v198[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v122,
    (const __m128i *)&v194,
    3);
  v189 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v201.m256i_i64[2],
    v102,
    2);
  v202 = 0;
  LOBYTE(v190) = 0;
  *(_QWORD *)&v191 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v190) = 3;
  v75 = operator new(0x20u);
  *(_QWORD *)v75 = v75 + 16;
  strcpy((char *)(v75 + 16), "required");
  *(_QWORD *)(v75 + 8) = 8;
  v130 = 0;
  *(_QWORD *)&v131 = 0;
  v191 = (unsigned __int64)v75;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v130 = 3;
  v76 = operator new(0x20u);
  strcpy((char *)(v76 + 16), "address");
  *(_QWORD *)v76 = v76 + 16;
  *(_QWORD *)(v76 + 8) = 7;
  v132 = 0;
  *(_QWORD *)&v133 = 0;
  *(_QWORD *)v107 = &v133;
  v131 = (unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v132 = 3;
  v77 = operator new(0x20u);
  *(_BYTE *)(v77 + 20) = 101;
  *(_QWORD *)v77 = v77 + 16;
  *(_BYTE *)(v77 + 21) = 0;
  *(_DWORD *)(v77 + 16) = 1970037110;
  v78 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v77 + 8) = 5;
  *(__m128 *)v119 = v78;
  v133 = (unsigned __int64)v77;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v79 = _mm_load_si128(&v128);
  v193 = 0;
  *(__m128i *)v192 = v79;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v203,
    (const __m128i *)&v190,
    2);
  v203[2] = 0;
  LOBYTE(v129[0]) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v129,
    (const __m128i *)v200,
    3);
  LOBYTE(v72) = v211;
  v80 = &v204;
  LOBYTE(v211) = v129[0];
  v81 = v212;
  LOBYTE(v129[0]) = (_BYTE)v72;
  v212 = *(_QWORD *)&v129[2];
  *(_QWORD *)&v129[2] = v81;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v80 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v80 != v200 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v82 = (__int64 *)&v199;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v82 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v82 != &v194 );
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
  v83 = _mm_load_si128((const __m128i *)v119);
  v201.m256i_i64[0] = 0;
  *(_QWORD *)v200 = ida_mcp::tools::find_items::`anonymous namespace'::handle_find_imm;
  *(__m128i *)&v201.m256i_u64[1] = v83;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v201.m256i_i64[1] )
    ((void (__fastcall *)(char *, char *, __int64))v201.m256i_i64[1])(v200, v200, 3);
  if ( v217 && v216 && v214 != (ida_mcp::tools::find_items *)&v215 )
    operator delete(v214, v215 + 1);
  if ( v213 )
  {
    v213 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v208 != v210 )
    operator delete(v208, *(_QWORD *)v210 + 1LL);
  if ( (__int64 *)v205.m128i_i64[0] != &v206 )
    operator delete((void *)v205.m128i_i64[0], v206 + 1);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v218 - __readfsqword(0x28u);
}

