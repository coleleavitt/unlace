unsigned __int64 __fastcall ida_mcp::tools::read_bytes::register_tools(
        ida_mcp::tools::read_bytes *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i si128; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 *v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __m128i v31; // xmm0
  char v32; // si
  __m128i *v33; // r15
  __int64 v34; // rdx
  __m128i *v35; // r15
  __m128i v36; // xmm2
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 *v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 *v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  const __m128i *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rax
  const __m128i *v59; // rsi
  __int64 v60; // rax
  __int64 *v61; // r15
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rax
  const __m128i *v68; // rsi
  __int64 v69; // rax
  __int64 *v70; // r15
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rax
  __m128i v77; // xmm0
  __m128i *v78; // r15
  __int64 v79; // rax
  __m128i *v80; // r15
  __int64 *v81; // rbp
  __m128i v82; // xmm3
  int v84; // [rsp+0h] [rbp-6C8h]
  int v85; // [rsp+0h] [rbp-6C8h]
  int v86; // [rsp+0h] [rbp-6C8h]
  int v87; // [rsp+0h] [rbp-6C8h]
  int v88; // [rsp+0h] [rbp-6C8h]
  int v89; // [rsp+0h] [rbp-6C8h]
  int v90; // [rsp+8h] [rbp-6C0h]
  int v91; // [rsp+8h] [rbp-6C0h]
  int v92; // [rsp+8h] [rbp-6C0h]
  int v93; // [rsp+8h] [rbp-6C0h]
  int v94; // [rsp+8h] [rbp-6C0h]
  __int64 v95; // [rsp+10h] [rbp-6B8h]
  __int64 v96; // [rsp+10h] [rbp-6B8h]
  __int64 v97; // [rsp+10h] [rbp-6B8h]
  __int64 v98; // [rsp+10h] [rbp-6B8h]
  __int64 v99; // [rsp+10h] [rbp-6B8h]
  __m128 v100; // [rsp+B0h] [rbp-618h] BYREF
  __int128 *v101; // [rsp+C0h] [rbp-608h]
  char v102[8]; // [rsp+C8h] [rbp-600h]
  ida_mcp::tools::read_bytes *v103; // [rsp+D0h] [rbp-5F8h]
  const __m128i *v104; // [rsp+D8h] [rbp-5F0h]
  const __m128i *v105; // [rsp+E0h] [rbp-5E8h]
  const __m128i *v106; // [rsp+E8h] [rbp-5E0h]
  const __m128i *v107; // [rsp+F0h] [rbp-5D8h]
  char *v108; // [rsp+F8h] [rbp-5D0h]
  char *v109; // [rsp+100h] [rbp-5C8h]
  char *v110; // [rsp+108h] [rbp-5C0h]
  const __m128i *v111; // [rsp+110h] [rbp-5B8h]
  void **v112; // [rsp+118h] [rbp-5B0h]
  __int128 *v113; // [rsp+120h] [rbp-5A8h]
  __int128 *v114; // [rsp+128h] [rbp-5A0h]
  __int128 *v115; // [rsp+130h] [rbp-598h]
  __int128 *v116; // [rsp+138h] [rbp-590h]
  __int128 *v117; // [rsp+140h] [rbp-588h]
  __int64 *v118; // [rsp+148h] [rbp-580h]
  char *v119; // [rsp+150h] [rbp-578h]
  __int64 *v120; // [rsp+158h] [rbp-570h]
  char *v121; // [rsp+160h] [rbp-568h]
  char *v122; // [rsp+168h] [rbp-560h]
  int *v123; // [rsp+170h] [rbp-558h]
  __int64 *v124; // [rsp+178h] [rbp-550h]
  char v125[8]; // [rsp+180h] [rbp-548h]
  char v126[8]; // [rsp+188h] [rbp-540h]
  char v127[8]; // [rsp+190h] [rbp-538h]
  char v128[8]; // [rsp+198h] [rbp-530h]
  char v129[8]; // [rsp+1A0h] [rbp-528h]
  char v130[8]; // [rsp+1A8h] [rbp-520h]
  char v131[8]; // [rsp+1B0h] [rbp-518h]
  __int64 *v132; // [rsp+1B8h] [rbp-510h]
  __m128i *v133; // [rsp+1C0h] [rbp-508h]
  char *v134; // [rsp+1C8h] [rbp-500h]
  char *v135; // [rsp+1D0h] [rbp-4F8h]
  char *v136; // [rsp+1D8h] [rbp-4F0h]
  __m128i v137; // [rsp+1E0h] [rbp-4E8h] BYREF
  __int64 v138; // [rsp+1F0h] [rbp-4D8h] BYREF
  __int64 v139; // [rsp+1F8h] [rbp-4D0h] BYREF
  char v140; // [rsp+200h] [rbp-4C8h]
  __int128 v141; // [rsp+208h] [rbp-4C0h]
  char v142; // [rsp+220h] [rbp-4A8h] BYREF
  __int128 v143; // [rsp+228h] [rbp-4A0h] BYREF
  char v144; // [rsp+238h] [rbp-490h]
  __int128 v145; // [rsp+240h] [rbp-488h] BYREF
  char v146; // [rsp+250h] [rbp-478h] BYREF
  __int128 v147; // [rsp+258h] [rbp-470h] BYREF
  char v148; // [rsp+268h] [rbp-460h]
  __int128 v149; // [rsp+270h] [rbp-458h] BYREF
  char v150; // [rsp+280h] [rbp-448h] BYREF
  __int128 v151; // [rsp+288h] [rbp-440h] BYREF
  char v152; // [rsp+298h] [rbp-430h]
  __int128 v153; // [rsp+2A0h] [rbp-428h] BYREF
  __int64 v154; // [rsp+2B0h] [rbp-418h] BYREF
  __int128 v155; // [rsp+2B8h] [rbp-410h]
  _QWORD v156[3]; // [rsp+2C8h] [rbp-400h] BYREF
  char v157; // [rsp+2E0h] [rbp-3E8h] BYREF
  int v158[4]; // [rsp+2E8h] [rbp-3E0h] BYREF
  __int64 v159; // [rsp+2F8h] [rbp-3D0h] BYREF
  __int128 v160; // [rsp+300h] [rbp-3C8h]
  char v161; // [rsp+310h] [rbp-3B8h] BYREF
  int v162[4]; // [rsp+318h] [rbp-3B0h] BYREF
  char v163; // [rsp+328h] [rbp-3A0h]
  int v164[4]; // [rsp+330h] [rbp-398h]
  char v165; // [rsp+340h] [rbp-388h] BYREF
  int v166[4]; // [rsp+348h] [rbp-380h]
  char v167; // [rsp+358h] [rbp-370h]
  __int64 v168[2]; // [rsp+360h] [rbp-368h]
  __int64 v169; // [rsp+370h] [rbp-358h] BYREF
  __int128 v170; // [rsp+378h] [rbp-350h]
  int v171[2]; // [rsp+388h] [rbp-340h] BYREF
  __int64 v172; // [rsp+390h] [rbp-338h] BYREF
  __int64 v173; // [rsp+398h] [rbp-330h]
  char v174; // [rsp+3A0h] [rbp-328h] BYREF
  int v175[4]; // [rsp+3A8h] [rbp-320h]
  __int64 v176; // [rsp+3B8h] [rbp-310h] BYREF
  char v177; // [rsp+3C0h] [rbp-308h] BYREF
  __int64 v178; // [rsp+3C8h] [rbp-300h]
  char v179; // [rsp+3D0h] [rbp-2F8h] BYREF
  int v180[4]; // [rsp+3D8h] [rbp-2F0h]
  char v181; // [rsp+3E8h] [rbp-2E0h]
  int v182[4]; // [rsp+3F0h] [rbp-2D8h]
  char v183; // [rsp+400h] [rbp-2C8h] BYREF
  int v184[4]; // [rsp+408h] [rbp-2C0h]
  char v185; // [rsp+418h] [rbp-2B0h]
  int v186[4]; // [rsp+420h] [rbp-2A8h]
  __int64 v187; // [rsp+430h] [rbp-298h] BYREF
  __int128 v188; // [rsp+438h] [rbp-290h]
  char v189[8]; // [rsp+448h] [rbp-280h] BYREF
  __int64 v190; // [rsp+450h] [rbp-278h] BYREF
  __int64 v191; // [rsp+458h] [rbp-270h]
  char v192; // [rsp+460h] [rbp-268h] BYREF
  char v193[16]; // [rsp+468h] [rbp-260h]
  __int64 v194; // [rsp+478h] [rbp-250h] BYREF
  char v195; // [rsp+480h] [rbp-248h] BYREF
  __int64 v196; // [rsp+488h] [rbp-240h]
  __int64 v197; // [rsp+490h] [rbp-238h] BYREF
  __int128 v198; // [rsp+498h] [rbp-230h] BYREF
  __int64 v199; // [rsp+4A8h] [rbp-220h] BYREF
  char v200; // [rsp+4B0h] [rbp-218h] BYREF
  __int64 v201; // [rsp+4B8h] [rbp-210h]
  char v202; // [rsp+4C0h] [rbp-208h] BYREF
  int v203[4]; // [rsp+4C8h] [rbp-200h]
  int v204[4]; // [rsp+4D8h] [rbp-1F0h] BYREF
  __int64 v205; // [rsp+4E8h] [rbp-1E0h]
  __int64 v206; // [rsp+4F0h] [rbp-1D8h] BYREF
  __int128 v207; // [rsp+4F8h] [rbp-1D0h]
  int v208[4]; // [rsp+508h] [rbp-1C0h] BYREF
  __int64 v209; // [rsp+518h] [rbp-1B0h]
  _QWORD v210[3]; // [rsp+520h] [rbp-1A8h] BYREF
  char v211; // [rsp+538h] [rbp-190h] BYREF
  __m128i v212; // [rsp+540h] [rbp-188h] BYREF
  __int64 v213; // [rsp+550h] [rbp-178h]
  int v214[4]; // [rsp+558h] [rbp-170h] BYREF
  __int64 v215; // [rsp+568h] [rbp-160h]
  int v216[4]; // [rsp+570h] [rbp-158h] BYREF
  __int64 v217; // [rsp+580h] [rbp-148h]
  char v218; // [rsp+588h] [rbp-140h] BYREF
  __m128i v219; // [rsp+590h] [rbp-138h] BYREF
  void (__fastcall *v220[3])(__m128i *, __m128i *, __int64); // [rsp+5A0h] [rbp-128h] BYREF
  __int64 v221; // [rsp+5B8h] [rbp-110h]
  int v222[4]; // [rsp+5C0h] [rbp-108h] BYREF
  __int64 v223; // [rsp+5D0h] [rbp-F8h]
  char v224; // [rsp+5D8h] [rbp-F0h] BYREF
  void *v225; // [rsp+5E0h] [rbp-E8h]
  __int64 v226; // [rsp+5E8h] [rbp-E0h]
  _QWORD v227[2]; // [rsp+5F0h] [rbp-D8h] BYREF
  void *v228; // [rsp+600h] [rbp-C8h] BYREF
  __int64 v229; // [rsp+608h] [rbp-C0h]
  _QWORD v230[2]; // [rsp+610h] [rbp-B8h] BYREF
  char v231; // [rsp+620h] [rbp-A8h]
  __int64 v232; // [rsp+628h] [rbp-A0h] BYREF
  char v233; // [rsp+640h] [rbp-88h]
  ida_mcp::tools::read_bytes *v234; // [rsp+648h] [rbp-80h]
  _QWORD v235[2]; // [rsp+658h] [rbp-70h] BYREF
  char v236; // [rsp+668h] [rbp-60h]
  char v237; // [rsp+678h] [rbp-50h]
  unsigned __int64 v238; // [rsp+688h] [rbp-40h]

  v103 = this;
  v238 = __readfsqword(0x28u);
  v225 = v227;
  v226 = 0;
  LOBYTE(v227[0]) = 0;
  v228 = v230;
  v229 = 0;
  LOBYTE(v230[0]) = 0;
  v231 = 0;
  v232 = 0;
  v233 = 0;
  v237 = 0;
  std::string::_M_replace();
  v112 = &v228;
  std::string::_M_replace();
  *(_QWORD *)v158 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v157 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  LOBYTE(v159) = 0;
  *(_QWORD *)&v160 = 0;
  *(_OWORD *)v158 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v159) = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v107 = (const __m128i *)&v157;
  v160 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v219,
    (const __m128i *)&v157);
  v220[0] = nullptr;
  v202 = 0;
  *(_QWORD *)v203 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v202 = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)(v4 + 8) = 10;
  v174 = 0;
  *(_QWORD *)v175 = 0;
  *(_OWORD *)v203 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v174 = 3;
  v5 = operator new(0x20u);
  strcpy((char *)(v5 + 16), "address");
  *(_QWORD *)v5 = v5 + 16;
  *(_QWORD *)(v5 + 8) = 7;
  v161 = 0;
  *(_QWORD *)v162 = 0;
  *(_OWORD *)v175 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v161 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  v163 = 0;
  *(_QWORD *)v164 = 0;
  *(_OWORD *)v162 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v163 = 3;
  v7 = operator new(0x20u);
  strcpy((char *)(v7 + 16), "string");
  *(_QWORD *)v7 = v7 + 16;
  *(_QWORD *)(v7 + 8) = 6;
  v108 = &v161;
  *(_OWORD *)v164 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v169,
    (const __m128i *)&v161);
  *((_QWORD *)&v170 + 1) = 0;
  v165 = 0;
  *(_QWORD *)v166 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v165 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "description");
  *(_QWORD *)(v8 + 8) = 11;
  v167 = 0;
  v168[0] = 0;
  *(_OWORD *)v166 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v167 = 3;
  v9 = (__int64 *)operator new(0x20u);
  v138 = 17;
  *v9 = (__int64)(v9 + 2);
  *(_QWORD *)v102 = &v138;
  v10 = std::string::_M_create();
  v11 = v138;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2380);
  *v9 = v10;
  v9[2] = v11;
  *(__m128i *)v10 = si128;
  *(_BYTE *)(v10 + 16) = 115;
  v13 = v138;
  v14 = *v9;
  v9[1] = v138;
  *(_BYTE *)(v14 + v13) = 0;
  v109 = &v165;
  *(_OWORD *)v168 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v171,
    (const __m128i *)&v165);
  v173 = 0;
  *(_QWORD *)v125 = &v176;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v176,
    (const __m128i *)&v169);
  v178 = 0;
  v106 = (const __m128i *)&v174;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v197,
    (const __m128i *)&v174);
  *((_QWORD *)&v198 + 1) = 0;
  v192 = 0;
  *(_QWORD *)v193 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v192 = 3;
  v15 = operator new(0x20u);
  *(_QWORD *)v15 = v15 + 16;
  strcpy((char *)(v15 + 16), "size");
  *(_QWORD *)(v15 + 8) = 4;
  v179 = 0;
  *(_QWORD *)v180 = 0;
  *(_OWORD *)v193 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v179 = 3;
  v16 = operator new(0x20u);
  *(_QWORD *)v16 = v16 + 16;
  strcpy((char *)(v16 + 16), "type");
  *(_QWORD *)(v16 + 8) = 4;
  v181 = 0;
  *(_QWORD *)v182 = 0;
  *(_OWORD *)v180 = (unsigned __int64)v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v181 = 3;
  v17 = operator new(0x20u);
  *(_QWORD *)v17 = v17 + 16;
  strcpy((char *)(v17 + 16), "number");
  *(_QWORD *)(v17 + 8) = 6;
  v110 = &v179;
  *(_OWORD *)v182 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v212,
    (const __m128i *)&v179);
  v213 = 0;
  v183 = 0;
  *(_QWORD *)v184 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v183 = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "description");
  *(_QWORD *)(v18 + 8) = 11;
  v185 = 0;
  *(_QWORD *)v186 = 0;
  *(_OWORD *)v184 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v185 = 3;
  v19 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v19,
    "Bytes to read",
    v20,
    v21,
    v22,
    v23,
    v84,
    (int)v158,
    (__int64)v162);
  v111 = (const __m128i *)&v183;
  *(_QWORD *)v128 = v214;
  *(_OWORD *)v186 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v214,
    (const __m128i *)&v183);
  v215 = 0;
  LOBYTE(v187) = 0;
  *(_QWORD *)&v188 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v187) = 3;
  v24 = operator new(0x20u);
  strcpy((char *)(v24 + 16), "default");
  *(_QWORD *)v24 = v24 + 16;
  *(_QWORD *)(v24 + 8) = 7;
  *(_QWORD *)v189 = 5;
  v190 = 16;
  v191 = 0;
  *(_QWORD *)v129 = v216;
  v188 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v216,
    (const __m128i *)&v187);
  v217 = 0;
  *(_QWORD *)v126 = &v194;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v194,
    &v212,
    3);
  v196 = 0;
  v105 = (const __m128i *)&v192;
  *(_QWORD *)v127 = &v199;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v199,
    (const __m128i *)&v192);
  v201 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v204,
    (const __m128i *)&v197);
  v205 = 0;
  v104 = (const __m128i *)&v202;
  *(_QWORD *)v130 = &v220[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v220[1],
    (const __m128i *)&v202);
  v221 = 0;
  LOBYTE(v206) = 0;
  *(_QWORD *)&v207 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v206) = 3;
  v25 = operator new(0x20u);
  *(_QWORD *)v25 = v25 + 16;
  strcpy((char *)(v25 + 16), "required");
  *(_QWORD *)(v25 + 8) = 8;
  LOBYTE(v154) = 0;
  *(_QWORD *)&v155 = 0;
  v207 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v154) = 3;
  v26 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v26, "address", v27, v28, v29, v30, v85, v90, v95);
  v133 = &v137;
  v100 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  v155 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v31 = _mm_load_si128(&v137);
  v209 = 0;
  *(_QWORD *)v131 = v222;
  *(__m128i *)v208 = v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v222,
    (const __m128i *)&v206);
  v223 = 0;
  LOBYTE(v138) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v102,
    &v219,
    3);
  v32 = v231;
  v33 = (__m128i *)&v224;
  v34 = v139;
  v231 = v138;
  LOBYTE(v138) = v32;
  v139 = v232;
  v232 = v34;
  v124 = &v139;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v33 = (__m128i *)((char *)v33 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v33 != &v219 );
  v35 = (__m128i *)&v218;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v123 = &v204[2];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v122 = &v200;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v101 = &v198;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v121 = &v195;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v35 = (__m128i *)((char *)v35 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v35 != &v212 );
  v120 = &v190;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v119 = &v177;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = &v172;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v36 = _mm_load_si128((const __m128i *)&v100);
  v219.m128i_i64[1] = 0;
  v219.m128i_i64[0] = (__int64)ida_mcp::tools::read_bytes::`anonymous namespace'::handle_read_bytes;
  *(__m128i *)v220 = v36;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v220[0] )
    v220[0](&v219, &v219, 3);
  if ( v237 && v236 && v234 != (ida_mcp::tools::read_bytes *)v235 )
    operator delete(v234, v235[0] + 1LL);
  if ( v233 )
  {
    v233 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v132 = &v232;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v228 != v230 )
    operator delete(v228, v230[0] + 1LL);
  if ( v225 != v227 )
    operator delete(v225, v227[0] + 1LL);
  v225 = v227;
  v226 = 0;
  LOBYTE(v227[0]) = 0;
  v228 = v230;
  v229 = 0;
  LOBYTE(v230[0]) = 0;
  v231 = 0;
  v232 = 0;
  v233 = 0;
  v237 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v142 = 0;
  v112 = (void **)&v143;
  *(_QWORD *)&v143 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v142 = 3;
  v37 = operator new(0x20u);
  *(_QWORD *)v37 = v37 + 16;
  strcpy((char *)(v37 + 16), "type");
  *(_QWORD *)(v37 + 8) = 4;
  v144 = 0;
  *(_QWORD *)&v145 = 0;
  v113 = &v145;
  v143 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v144 = 3;
  v38 = operator new(0x20u);
  *(_QWORD *)v38 = v38 + 16;
  strcpy((char *)(v38 + 16), "object");
  *(_QWORD *)(v38 + 8) = 6;
  v134 = &v142;
  v145 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v219,
    (const __m128i *)&v142);
  v220[0] = nullptr;
  LOBYTE(v197) = 0;
  *(_QWORD *)&v198 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v197) = 3;
  v39 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v39, "properties", v40, v41, v42, v43, v86, v91, v96);
  v157 = 0;
  *(_QWORD *)v158 = 0;
  v198 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v157 = 3;
  v44 = operator new(0x20u);
  strcpy((char *)(v44 + 16), "address");
  *(_QWORD *)v44 = v44 + 16;
  *(_QWORD *)(v44 + 8) = 7;
  v146 = 0;
  *(_QWORD *)&v147 = 0;
  v114 = &v147;
  *(_OWORD *)v158 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v146 = 3;
  v45 = operator new(0x20u);
  *(_QWORD *)v45 = v45 + 16;
  strcpy((char *)(v45 + 16), "type");
  *(_QWORD *)(v45 + 8) = 4;
  v148 = 0;
  *(_QWORD *)&v149 = 0;
  v115 = &v149;
  v147 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v46 = operator new(0x20u);
  *(_QWORD *)v46 = v46 + 16;
  strcpy((char *)(v46 + 16), "string");
  *(_QWORD *)(v46 + 8) = 6;
  v135 = &v146;
  v149 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v154,
    (const __m128i *)&v146);
  *((_QWORD *)&v155 + 1) = 0;
  v150 = 0;
  *(_QWORD *)&v151 = 0;
  v116 = &v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v150 = 3;
  v47 = operator new(0x20u);
  *(_QWORD *)v47 = v47 + 16;
  strcpy((char *)(v47 + 16), "description");
  *(_QWORD *)(v47 + 8) = 11;
  v152 = 0;
  *(_QWORD *)&v153 = 0;
  v117 = &v153;
  v151 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v152 = 3;
  v48 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v48, "Hex start address", v49, v50, v51, v52, v87, v92, v97);
  v136 = &v150;
  v153 = (unsigned __int64)v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v156,
    (const __m128i *)&v150);
  v156[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v159,
    (const __m128i *)&v154);
  *((_QWORD *)&v160 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v212,
    v107);
  v213 = 0;
  v174 = 0;
  *(_QWORD *)v175 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v174 = 3;
  v53 = operator new(0x20u);
  *(_QWORD *)v53 = v53 + 16;
  *(_DWORD *)(v53 + 16) = 1853189987;
  *(_BYTE *)(v53 + 20) = 116;
  *(_QWORD *)(v53 + 8) = 5;
  *(_BYTE *)(v53 + 21) = 0;
  v161 = 0;
  *(_QWORD *)v162 = 0;
  *(_OWORD *)v175 = (unsigned __int64)v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v161 = 3;
  v54 = operator new(0x20u);
  *(_QWORD *)v54 = v54 + 16;
  strcpy((char *)(v54 + 16), "type");
  *(_QWORD *)(v54 + 8) = 4;
  v163 = 0;
  *(_QWORD *)v164 = 0;
  *(_OWORD *)v162 = (unsigned __int64)v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v163 = 3;
  v55 = operator new(0x20u);
  v56 = (const __m128i *)v108;
  *(_QWORD *)v55 = v55 + 16;
  strcpy((char *)(v55 + 16), "number");
  *(_QWORD *)(v55 + 8) = 6;
  *(_OWORD *)v164 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v206,
    v56);
  *((_QWORD *)&v207 + 1) = 0;
  v165 = 0;
  *(_QWORD *)v166 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v165 = 3;
  v57 = operator new(0x20u);
  *(_QWORD *)v57 = v57 + 16;
  strcpy((char *)(v57 + 16), "description");
  *(_QWORD *)(v57 + 8) = 11;
  v167 = 0;
  v168[0] = 0;
  *(_OWORD *)v166 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v167 = 3;
  v58 = operator new(0x20u);
  strcpy((char *)(v58 + 16), "Pointer count");
  v59 = (const __m128i *)v109;
  *(_QWORD *)v58 = v58 + 16;
  *(_QWORD *)(v58 + 8) = 13;
  *(_OWORD *)v168 = (unsigned __int64)v58;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v208,
    v59);
  v209 = 0;
  LOBYTE(v169) = 0;
  *(_QWORD *)&v170 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v169) = 3;
  v60 = operator new(0x20u);
  strcpy((char *)(v60 + 16), "default");
  *(_QWORD *)v60 = v60 + 16;
  *(_QWORD *)(v60 + 8) = 7;
  *(_QWORD *)v171 = 5;
  v172 = 8;
  v173 = 0;
  v170 = (unsigned __int64)v60;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v210,
    (const __m128i *)&v169);
  v210[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v125,
    (const __m128i *)&v206,
    3);
  v178 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v128,
    v106,
    2);
  v215 = 0;
  v192 = 0;
  *(_QWORD *)v193 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v192 = 3;
  v61 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v61, "pointer_size", v62, v63, v64, v65, v88, v93, v98);
  v179 = 0;
  *(_QWORD *)v180 = 0;
  *(_OWORD *)v193 = (unsigned __int64)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v179 = 3;
  v66 = operator new(0x20u);
  *(_QWORD *)v66 = v66 + 16;
  strcpy((char *)(v66 + 16), "type");
  *(_QWORD *)(v66 + 8) = 4;
  v181 = 0;
  *(_QWORD *)v182 = 0;
  *(_OWORD *)v180 = (unsigned __int64)v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v181 = 3;
  v67 = operator new(0x20u);
  v68 = (const __m128i *)v110;
  *(_QWORD *)v67 = v67 + 16;
  strcpy((char *)(v67 + 16), "number");
  *(_QWORD *)(v67 + 8) = 6;
  *(_OWORD *)v182 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v187,
    v68,
    2);
  *((_QWORD *)&v188 + 1) = 0;
  v183 = 0;
  *(_QWORD *)v184 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v183 = 3;
  v69 = operator new(0x20u);
  *(_QWORD *)v69 = v69 + 16;
  strcpy((char *)(v69 + 16), "description");
  *(_QWORD *)(v69 + 8) = 11;
  v185 = 0;
  *(_QWORD *)v186 = 0;
  *(_OWORD *)v184 = (unsigned __int64)v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v185 = 3;
  v70 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v70, "Pointer size bytes", v71, v72, v73, v74, v89, v94, v99);
  *(_OWORD *)v186 = (unsigned __int64)v70;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v189,
    v111,
    2);
  v191 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v126,
    (const __m128i *)&v187,
    2);
  v196 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v129,
    v105,
    2);
  v217 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v127,
    &v212,
    3);
  v201 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v130,
    (const __m128i *)&v197,
    2);
  v221 = 0;
  v202 = 0;
  *(_QWORD *)v203 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v202 = 3;
  v75 = operator new(0x20u);
  *(_QWORD *)v75 = v75 + 16;
  strcpy((char *)(v75 + 16), "required");
  *(_QWORD *)(v75 + 8) = 8;
  v140 = 0;
  *(_QWORD *)&v141 = 0;
  *(_OWORD *)v203 = (unsigned __int64)v75;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v140 = 3;
  v76 = operator new(0x20u);
  *(_QWORD *)v76 = v76 + 16;
  strcpy((char *)(v76 + 16), "address");
  *(_QWORD *)(v76 + 8) = 7;
  v141 = (unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v77 = _mm_load_si128(&v137);
  v205 = 0;
  *(__m128i *)v204 = v77;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v131,
    v104,
    2);
  v223 = 0;
  LOBYTE(v138) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v102,
    &v219,
    3);
  LOBYTE(v68) = v231;
  v78 = (__m128i *)&v224;
  v231 = v138;
  v79 = v232;
  LOBYTE(v138) = (_BYTE)v68;
  v232 = v139;
  v139 = v79;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v78 = (__m128i *)((char *)v78 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v78 != &v219 );
  v80 = (__m128i *)&v218;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v80 = (__m128i *)((char *)v80 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v80 != &v212 );
  v81 = (__int64 *)&v211;
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
  do
  {
    v81 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v81 != &v206 );
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
  v82 = _mm_load_si128((const __m128i *)&v100);
  v219.m128i_i64[1] = 0;
  v219.m128i_i64[0] = (__int64)ida_mcp::tools::read_bytes::`anonymous namespace'::handle_read_pointer_table;
  *(__m128i *)v220 = v82;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v220[0] )
    v220[0](&v219, &v219, 3);
  if ( v237 && v236 && v234 != (ida_mcp::tools::read_bytes *)v235 )
    operator delete(v234, v235[0] + 1LL);
  if ( v233 )
  {
    v233 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v228 != v230 )
    operator delete(v228, v230[0] + 1LL);
  if ( v225 != v227 )
    operator delete(v225, v227[0] + 1LL);
  return v238 - __readfsqword(0x28u);
}

