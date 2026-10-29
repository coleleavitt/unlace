unsigned __int64 __fastcall ida_mcp::tools::names::register_tools(
        ida_mcp::tools::names *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i v20; // xmm0
  char v21; // si
  __m128i *v22; // r13
  __int64 v23; // rdx
  __m128i si128; // xmm2
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 *v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  const __m128i *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  const __m128i *v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rdi
  __m128i v49; // xmm0
  __m128i *v50; // r15
  __int64 v51; // rax
  __m128i v52; // xmm3
  __int64 v53; // rax
  __int64 v54; // rax
  const __m128i *v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  const __m128i *v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rdi
  __int64 *v64; // r13
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __m128i v70; // xmm0
  __m128i *v71; // r13
  __int64 v72; // rax
  __m128i v73; // xmm4
  int v75; // [rsp+0h] [rbp-548h]
  int v76; // [rsp+0h] [rbp-548h]
  int v77; // [rsp+0h] [rbp-548h]
  int v78; // [rsp+8h] [rbp-540h]
  int v79; // [rsp+8h] [rbp-540h]
  int v80; // [rsp+8h] [rbp-540h]
  __int64 v81; // [rsp+10h] [rbp-538h]
  __int64 v82; // [rsp+10h] [rbp-538h]
  __int64 v83; // [rsp+10h] [rbp-538h]
  __m128 v84; // [rsp+80h] [rbp-4C8h] BYREF
  int v85[2]; // [rsp+90h] [rbp-4B8h]
  ida_mcp::tools::names *v86; // [rsp+98h] [rbp-4B0h]
  const __m128i *v87; // [rsp+A0h] [rbp-4A8h]
  const __m128i *v88; // [rsp+A8h] [rbp-4A0h]
  char *v89; // [rsp+B0h] [rbp-498h]
  char *v90; // [rsp+B8h] [rbp-490h]
  char *v91; // [rsp+C0h] [rbp-488h]
  char *v92; // [rsp+C8h] [rbp-480h]
  char *v93; // [rsp+D0h] [rbp-478h]
  __int8 *v94; // [rsp+D8h] [rbp-470h]
  int v95[2]; // [rsp+E0h] [rbp-468h]
  char v96[8]; // [rsp+E8h] [rbp-460h]
  __int64 *v97; // [rsp+F0h] [rbp-458h]
  char v98[8]; // [rsp+F8h] [rbp-450h]
  char v99[8]; // [rsp+100h] [rbp-448h]
  char v100[8]; // [rsp+108h] [rbp-440h]
  char v101[8]; // [rsp+110h] [rbp-438h]
  char v102[8]; // [rsp+118h] [rbp-430h]
  void **v103; // [rsp+120h] [rbp-428h]
  __int64 *v104; // [rsp+128h] [rbp-420h]
  __int128 *v105; // [rsp+130h] [rbp-418h]
  __int128 *v106; // [rsp+138h] [rbp-410h]
  __int128 *v107; // [rsp+140h] [rbp-408h]
  __int128 *v108; // [rsp+148h] [rbp-400h]
  __int128 *v109; // [rsp+150h] [rbp-3F8h]
  __int128 *v110; // [rsp+158h] [rbp-3F0h]
  __int128 *v111; // [rsp+160h] [rbp-3E8h]
  char *v112; // [rsp+168h] [rbp-3E0h]
  char *v113; // [rsp+170h] [rbp-3D8h]
  char *v114; // [rsp+178h] [rbp-3D0h]
  __m128i v115; // [rsp+180h] [rbp-3C8h] BYREF
  __int64 v116; // [rsp+190h] [rbp-3B8h] BYREF
  __int64 v117; // [rsp+198h] [rbp-3B0h] BYREF
  char v118; // [rsp+1A0h] [rbp-3A8h] BYREF
  __int128 v119; // [rsp+1A8h] [rbp-3A0h]
  char v120; // [rsp+1B8h] [rbp-390h]
  __int128 v121; // [rsp+1C0h] [rbp-388h] BYREF
  char v122; // [rsp+1D0h] [rbp-378h] BYREF
  __int128 v123; // [rsp+1D8h] [rbp-370h] BYREF
  char v124; // [rsp+1E8h] [rbp-360h]
  __int128 v125; // [rsp+1F0h] [rbp-358h] BYREF
  char v126; // [rsp+200h] [rbp-348h] BYREF
  __int128 v127; // [rsp+208h] [rbp-340h] BYREF
  char v128; // [rsp+218h] [rbp-330h]
  __int128 v129; // [rsp+220h] [rbp-328h] BYREF
  char v130; // [rsp+230h] [rbp-318h] BYREF
  __int128 v131; // [rsp+238h] [rbp-310h] BYREF
  char v132; // [rsp+248h] [rbp-300h]
  __int128 v133; // [rsp+250h] [rbp-2F8h] BYREF
  char v134; // [rsp+260h] [rbp-2E8h] BYREF
  int v135[4]; // [rsp+268h] [rbp-2E0h]
  _QWORD v136[3]; // [rsp+278h] [rbp-2D0h] BYREF
  __int64 v137; // [rsp+290h] [rbp-2B8h] BYREF
  __int128 v138; // [rsp+298h] [rbp-2B0h]
  _QWORD v139[3]; // [rsp+2A8h] [rbp-2A0h] BYREF
  char v140; // [rsp+2C0h] [rbp-288h] BYREF
  __int128 v141; // [rsp+2C8h] [rbp-280h]
  char v142; // [rsp+2D8h] [rbp-270h]
  int v143[4]; // [rsp+2E0h] [rbp-268h] BYREF
  char v144; // [rsp+2F0h] [rbp-258h] BYREF
  int v145[4]; // [rsp+2F8h] [rbp-250h] BYREF
  char v146; // [rsp+308h] [rbp-240h]
  int v147[4]; // [rsp+310h] [rbp-238h] BYREF
  __int64 v148; // [rsp+320h] [rbp-228h] BYREF
  int v149[4]; // [rsp+328h] [rbp-220h]
  __int64 v150; // [rsp+338h] [rbp-210h] BYREF
  int v151[4]; // [rsp+340h] [rbp-208h]
  __int64 v152; // [rsp+350h] [rbp-1F8h] BYREF
  __int128 v153; // [rsp+358h] [rbp-1F0h]
  __int64 v154; // [rsp+368h] [rbp-1E0h] BYREF
  char v155; // [rsp+370h] [rbp-1D8h] BYREF
  __int64 v156; // [rsp+378h] [rbp-1D0h]
  __int64 v157; // [rsp+380h] [rbp-1C8h] BYREF
  int v158[4]; // [rsp+388h] [rbp-1C0h]
  __int64 v159; // [rsp+398h] [rbp-1B0h] BYREF
  char v160; // [rsp+3A0h] [rbp-1A8h] BYREF
  __int64 v161; // [rsp+3A8h] [rbp-1A0h]
  char v162; // [rsp+3B0h] [rbp-198h] BYREF
  int v163[4]; // [rsp+3B8h] [rbp-190h]
  __int64 v164; // [rsp+3C8h] [rbp-180h] BYREF
  char v165; // [rsp+3D0h] [rbp-178h] BYREF
  __int64 v166; // [rsp+3D8h] [rbp-170h]
  char v167; // [rsp+3E0h] [rbp-168h] BYREF
  int v168[4]; // [rsp+3E8h] [rbp-160h]
  __m128i v169; // [rsp+3F8h] [rbp-150h] BYREF
  __int64 v170; // [rsp+408h] [rbp-140h]
  __m128i v171; // [rsp+410h] [rbp-138h] BYREF
  void (__fastcall *v172[3])(__m128i *, __m128i *, __int64); // [rsp+420h] [rbp-128h] BYREF
  __int64 v173; // [rsp+438h] [rbp-110h]
  int v174[4]; // [rsp+440h] [rbp-108h] BYREF
  __int64 v175; // [rsp+450h] [rbp-F8h]
  char v176; // [rsp+458h] [rbp-F0h] BYREF
  void *v177; // [rsp+460h] [rbp-E8h]
  __int64 v178; // [rsp+468h] [rbp-E0h]
  _QWORD v179[2]; // [rsp+470h] [rbp-D8h] BYREF
  void *v180; // [rsp+480h] [rbp-C8h] BYREF
  __int64 v181; // [rsp+488h] [rbp-C0h]
  _QWORD v182[2]; // [rsp+490h] [rbp-B8h] BYREF
  char v183; // [rsp+4A0h] [rbp-A8h]
  __int64 v184; // [rsp+4A8h] [rbp-A0h] BYREF
  char v185; // [rsp+4C0h] [rbp-88h]
  ida_mcp::tools::names *v186; // [rsp+4C8h] [rbp-80h]
  _QWORD v187[2]; // [rsp+4D8h] [rbp-70h] BYREF
  char v188; // [rsp+4E8h] [rbp-60h]
  char v189; // [rsp+4F8h] [rbp-50h]
  unsigned __int64 v190; // [rsp+508h] [rbp-40h]

  v86 = this;
  v190 = __readfsqword(0x28u);
  v177 = v179;
  v178 = 0;
  LOBYTE(v179[0]) = 0;
  v180 = v182;
  v181 = 0;
  LOBYTE(v182[0]) = 0;
  v183 = 0;
  v184 = 0;
  v185 = 0;
  v189 = 0;
  std::string::_M_replace();
  v103 = &v180;
  std::string::_M_replace();
  *(_QWORD *)&v141 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v140 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v142 = 0;
  *(_QWORD *)v143 = 0;
  v141 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v142 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v89 = &v140;
  *(_OWORD *)v143 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v171,
    (const __m128i *)&v140,
    2,
    1);
  v172[0] = nullptr;
  v162 = 0;
  *(_QWORD *)v163 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v162 = 3;
  v4 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v4, "properties", v5, v6, v7, v8, (int)v143, v78, v81);
  LOBYTE(v157) = 0;
  *(_QWORD *)v158 = 0;
  *(_OWORD *)v163 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v157) = 3;
  v9 = operator new(0x20u);
  strcpy((char *)(v9 + 16), "address");
  *(_QWORD *)v9 = v9 + 16;
  *(_QWORD *)(v9 + 8) = 7;
  v144 = 0;
  *(_QWORD *)v145 = 0;
  *(_OWORD *)v158 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v144 = 3;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v10 + 16;
  strcpy((char *)(v10 + 16), "type");
  *(_QWORD *)(v10 + 8) = 4;
  v146 = 0;
  *(_QWORD *)v147 = 0;
  *(_OWORD *)v145 = (unsigned __int64)v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v146 = 3;
  v11 = operator new(0x20u);
  strcpy((char *)(v11 + 16), "string");
  *(_QWORD *)v11 = v11 + 16;
  *(_QWORD *)(v11 + 8) = 6;
  v90 = &v144;
  *(_OWORD *)v147 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v152,
    (const __m128i *)&v144,
    2,
    1);
  *((_QWORD *)&v153 + 1) = 0;
  LOBYTE(v148) = 0;
  *(_QWORD *)v149 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v148) = 3;
  v12 = operator new(0x20u);
  *(_QWORD *)v12 = v12 + 16;
  strcpy((char *)(v12 + 16), "description");
  *(_QWORD *)(v12 + 8) = 11;
  LOBYTE(v150) = 0;
  *(_QWORD *)v151 = 0;
  *(_OWORD *)v149 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v150) = 3;
  v13 = operator new(0x20u);
  strcpy((char *)(v13 + 16), "Hex address");
  *(_QWORD *)v13 = v13 + 16;
  *(_QWORD *)(v13 + 8) = 11;
  *(_QWORD *)v98 = &v154;
  *(_OWORD *)v151 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v154,
    (const __m128i *)&v148,
    2,
    1);
  *(_QWORD *)v99 = &v159;
  v156 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v159,
    (const __m128i *)&v152,
    2,
    1);
  v161 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v137,
    (const __m128i *)&v157,
    2,
    1);
  *((_QWORD *)&v138 + 1) = 0;
  *(_QWORD *)v100 = &v164;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v164,
    (const __m128i *)&v137,
    1);
  v166 = 0;
  v87 = (const __m128i *)&v162;
  *(_QWORD *)v101 = &v172[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v172[1],
    (const __m128i *)&v162,
    2,
    1);
  v173 = 0;
  v167 = 0;
  *(_QWORD *)v168 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v167 = 3;
  v14 = operator new(0x20u);
  *(_QWORD *)v14 = v14 + 16;
  strcpy((char *)(v14 + 16), "required");
  *(_QWORD *)(v14 + 8) = 8;
  *(_QWORD *)v135 = 0;
  *(_OWORD *)v168 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v134 = 3;
  v15 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v15, "address", v16, v17, v18, v19, v75, (int)v145, (__int64)v147);
  *(_QWORD *)v85 = &v134;
  *(_QWORD *)v95 = &v115;
  v84 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_OWORD *)v135 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v20 = _mm_load_si128(&v115);
  v88 = (const __m128i *)&v167;
  *(_QWORD *)v102 = v174;
  v170 = 0;
  v169 = v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v174,
    (const __m128i *)&v167,
    2,
    1);
  v175 = 0;
  LOBYTE(v116) = 0;
  *(_QWORD *)v96 = &v116;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v116,
    &v171,
    3);
  v21 = v183;
  v22 = (__m128i *)&v176;
  v23 = v117;
  v183 = v116;
  LOBYTE(v116) = v21;
  v117 = v184;
  v184 = v23;
  v97 = &v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v22 = (__m128i *)((char *)v22 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v22 != &v171 );
  v94 = &v169.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v93 = &v165;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v92 = &v160;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v91 = &v155;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v84);
  v171.m128i_i64[1] = 0;
  v171.m128i_i64[0] = (__int64)ida_mcp::tools::names::`anonymous namespace'::handle_get_name;
  *(__m128i *)v172 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v172[0] )
    v172[0](&v171, &v171, 3);
  if ( v189 && v188 && v186 != (ida_mcp::tools::names *)v187 )
    operator delete(v186, v187[0] + 1LL);
  if ( v185 )
  {
    v185 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v104 = &v184;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v180 != v182 )
    operator delete(v180, v182[0] + 1LL);
  if ( v177 != v179 )
    operator delete(v177, v179[0] + 1LL);
  v177 = v179;
  v178 = 0;
  LOBYTE(v179[0]) = 0;
  v180 = v182;
  v181 = 0;
  LOBYTE(v182[0]) = 0;
  v183 = 0;
  v184 = 0;
  v185 = 0;
  v189 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v122 = 0;
  v106 = &v123;
  *(_QWORD *)&v123 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v122 = 3;
  v25 = operator new(0x20u);
  *(_QWORD *)v25 = v25 + 16;
  strcpy((char *)(v25 + 16), "type");
  *(_QWORD *)(v25 + 8) = 4;
  v124 = 0;
  *(_QWORD *)&v125 = 0;
  v107 = &v125;
  v123 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v124 = 3;
  v26 = operator new(0x20u);
  *(_QWORD *)v26 = v26 + 16;
  strcpy((char *)(v26 + 16), "object");
  *(_QWORD *)(v26 + 8) = 6;
  v112 = &v122;
  v125 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v171,
    (const __m128i *)&v122,
    2,
    1);
  v172[0] = nullptr;
  v162 = 0;
  *(_QWORD *)v163 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v162 = 3;
  v27 = operator new(0x20u);
  *(_QWORD *)v27 = v27 + 16;
  strcpy((char *)(v27 + 16), "properties");
  *(_QWORD *)(v27 + 8) = 10;
  LOBYTE(v137) = 0;
  *(_QWORD *)&v138 = 0;
  *(_OWORD *)v163 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v137) = 3;
  v28 = operator new(0x20u);
  strcpy((char *)(v28 + 16), "address");
  *(_QWORD *)v28 = v28 + 16;
  *(_QWORD *)(v28 + 8) = 7;
  v126 = 0;
  *(_QWORD *)&v127 = 0;
  v108 = &v127;
  v138 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v126 = 3;
  v29 = operator new(0x20u);
  *(_QWORD *)v29 = v29 + 16;
  strcpy((char *)(v29 + 16), "type");
  *(_QWORD *)(v29 + 8) = 4;
  v128 = 0;
  *(_QWORD *)&v129 = 0;
  v109 = &v129;
  v127 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v128 = 3;
  v30 = operator new(0x20u);
  *(_QWORD *)v30 = v30 + 16;
  v31 = *(__m128i **)v85;
  strcpy((char *)(v30 + 16), "string");
  *(_QWORD *)(v30 + 8) = 6;
  v113 = &v126;
  v129 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v31,
    (const __m128i *)&v126,
    2,
    1);
  *(_QWORD *)&v135[2] = 0;
  v130 = 0;
  *(_QWORD *)&v131 = 0;
  v110 = &v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v130 = 3;
  v32 = operator new(0x20u);
  *(_QWORD *)v32 = v32 + 16;
  strcpy((char *)(v32 + 16), "description");
  *(_QWORD *)(v32 + 8) = 11;
  v132 = 0;
  *(_QWORD *)&v133 = 0;
  v111 = &v133;
  v131 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v132 = 3;
  v33 = operator new(0x20u);
  strcpy((char *)(v33 + 16), "Hex address");
  *(_QWORD *)v33 = v33 + 16;
  *(_QWORD *)(v33 + 8) = 11;
  v114 = &v130;
  v133 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v136,
    (const __m128i *)&v130,
    2,
    1);
  v136[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v139,
    *(const __m128i **)v85,
    2,
    1);
  v139[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v157,
    (const __m128i *)&v137,
    2,
    1);
  *(_QWORD *)&v158[2] = 0;
  LOBYTE(v152) = 0;
  *(_QWORD *)&v153 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v152) = 3;
  v34 = operator new(0x20u);
  strcpy((char *)(v34 + 16), "name");
  *(_QWORD *)v34 = v34 + 16;
  *(_QWORD *)(v34 + 8) = 4;
  v140 = 0;
  *(_QWORD *)&v141 = 0;
  v153 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v140 = 3;
  v35 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v35, "type", v36, v37, v38, v39, v76, v79, v82);
  v142 = 0;
  *(_QWORD *)v143 = 0;
  v141 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v142 = 3;
  v40 = operator new(0x20u);
  v41 = (const __m128i *)v89;
  *(_QWORD *)v40 = v40 + 16;
  strcpy((char *)(v40 + 16), "string");
  *(_QWORD *)(v40 + 8) = 6;
  *(_OWORD *)v143 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v148,
    v41,
    2,
    1);
  *(_QWORD *)&v149[2] = 0;
  v144 = 0;
  *(_QWORD *)v145 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v144 = 3;
  v42 = operator new(0x20u);
  *(_QWORD *)v42 = v42 + 16;
  strcpy((char *)(v42 + 16), "description");
  *(_QWORD *)(v42 + 8) = 11;
  v146 = 0;
  *(_QWORD *)v147 = 0;
  *(_OWORD *)v145 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v146 = 3;
  v43 = operator new(0x20u);
  strcpy((char *)(v43 + 16), "Name to set");
  v44 = (const __m128i *)v90;
  *(_QWORD *)v43 = v43 + 16;
  *(_QWORD *)(v43 + 8) = 11;
  *(_OWORD *)v147 = (unsigned __int64)v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v150,
    v44,
    2,
    1);
  *(_QWORD *)&v151[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v98,
    (const __m128i *)&v148,
    2,
    1);
  v156 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v99,
    (const __m128i *)&v152,
    2,
    1);
  v161 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v100,
    (const __m128i *)&v157,
    2,
    1);
  v166 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v101,
    v87,
    2,
    1);
  v173 = 0;
  v167 = 0;
  *(_QWORD *)v168 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v167 = 3;
  v45 = operator new(0x20u);
  *(_QWORD *)v45 = v45 + 16;
  strcpy((char *)(v45 + 16), "required");
  *(_QWORD *)(v45 + 8) = 8;
  v118 = 0;
  *(_QWORD *)&v119 = 0;
  *(_OWORD *)v168 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = 3;
  v46 = operator new(0x20u);
  strcpy((char *)(v46 + 16), "address");
  *(_QWORD *)v46 = v46 + 16;
  *(_QWORD *)(v46 + 8) = 7;
  v120 = 0;
  *(_QWORD *)&v121 = 0;
  v105 = &v121;
  v119 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v120 = 3;
  v47 = operator new(0x20u);
  *(_QWORD *)v47 = v47 + 16;
  v48 = *(_QWORD **)v95;
  strcpy((char *)(v47 + 16), "name");
  *(_QWORD *)(v47 + 8) = 4;
  v121 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v48,
    (const __m128i *)&v118,
    2,
    0);
  v49 = _mm_load_si128(&v115);
  v170 = 0;
  v169 = v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v102,
    v88,
    2,
    1);
  v175 = 0;
  LOBYTE(v116) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v96,
    &v171,
    3);
  LOBYTE(v44) = v183;
  v50 = (__m128i *)&v176;
  v183 = v116;
  v51 = v184;
  LOBYTE(v116) = (_BYTE)v44;
  v184 = v117;
  v117 = v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v50 = (__m128i *)((char *)v50 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v50 != &v171 );
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
  v52 = _mm_load_si128((const __m128i *)&v84);
  v171.m128i_i64[1] = 0;
  v171.m128i_i64[0] = (__int64)ida_mcp::tools::names::`anonymous namespace'::handle_set_name;
  *(__m128i *)v172 = v52;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v172[0] )
    v172[0](&v171, &v171, 3);
  if ( v189 && v188 && v186 != (ida_mcp::tools::names *)v187 )
    operator delete(v186, v187[0] + 1LL);
  if ( v185 )
  {
    v185 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v180 != v182 )
    operator delete(v180, v182[0] + 1LL);
  if ( v177 != v179 )
    operator delete(v177, v179[0] + 1LL);
  v177 = v179;
  v178 = 0;
  LOBYTE(v179[0]) = 0;
  v180 = v182;
  v181 = 0;
  LOBYTE(v182[0]) = 0;
  v183 = 0;
  v184 = 0;
  v185 = 0;
  v189 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v140 = 0;
  *(_QWORD *)&v141 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v140 = 3;
  v53 = operator new(0x20u);
  *(_QWORD *)v53 = v53 + 16;
  strcpy((char *)(v53 + 16), "type");
  *(_QWORD *)(v53 + 8) = 4;
  v142 = 0;
  *(_QWORD *)v143 = 0;
  v141 = (unsigned __int64)v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v142 = 3;
  v54 = operator new(0x20u);
  *(_QWORD *)v54 = v54 + 16;
  v55 = (const __m128i *)v89;
  strcpy((char *)(v54 + 16), "object");
  *(_QWORD *)(v54 + 8) = 6;
  *(_OWORD *)v143 = (unsigned __int64)v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v171,
    v55,
    2);
  v172[0] = nullptr;
  v162 = 0;
  *(_QWORD *)v163 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v162 = 3;
  v56 = operator new(0x20u);
  *(_QWORD *)v56 = v56 + 16;
  strcpy((char *)(v56 + 16), "properties");
  *(_QWORD *)(v56 + 8) = 10;
  LOBYTE(v157) = 0;
  *(_QWORD *)v158 = 0;
  *(_OWORD *)v163 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v157) = 3;
  v57 = operator new(0x20u);
  *(_QWORD *)v57 = v57 + 16;
  strcpy((char *)(v57 + 16), "address");
  *(_QWORD *)(v57 + 8) = 7;
  v144 = 0;
  *(_QWORD *)v145 = 0;
  *(_OWORD *)v158 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v144 = 3;
  v58 = operator new(0x20u);
  *(_QWORD *)v58 = v58 + 16;
  strcpy((char *)(v58 + 16), "type");
  *(_QWORD *)(v58 + 8) = 4;
  v146 = 0;
  *(_QWORD *)v147 = 0;
  *(_OWORD *)v145 = (unsigned __int64)v58;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v146 = 3;
  v59 = operator new(0x20u);
  v60 = (const __m128i *)v90;
  *(_QWORD *)v59 = v59 + 16;
  strcpy((char *)(v59 + 16), "string");
  *(_QWORD *)(v59 + 8) = 6;
  *(_OWORD *)v147 = (unsigned __int64)v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v152,
    v60,
    2);
  *((_QWORD *)&v153 + 1) = 0;
  LOBYTE(v148) = 0;
  *(_QWORD *)v149 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v148) = 3;
  v61 = operator new(0x20u);
  *(_QWORD *)v61 = v61 + 16;
  strcpy((char *)(v61 + 16), "description");
  *(_QWORD *)(v61 + 8) = 11;
  LOBYTE(v150) = 0;
  *(_QWORD *)v151 = 0;
  *(_OWORD *)v149 = (unsigned __int64)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v150) = 3;
  v62 = operator new(0x20u);
  *(_QWORD *)v62 = v62 + 16;
  v63 = *(_QWORD **)v98;
  strcpy((char *)(v62 + 16), "Hex address");
  *(_QWORD *)(v62 + 8) = 11;
  *(_OWORD *)v151 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v63,
    (const __m128i *)&v148,
    2);
  v156 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v99,
    (const __m128i *)&v152,
    2);
  v161 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v137,
    (const __m128i *)&v157,
    2);
  *((_QWORD *)&v138 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v100,
    (const __m128i *)&v137,
    1);
  v166 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v101,
    v87,
    2);
  v173 = 0;
  v167 = 0;
  *(_QWORD *)v168 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v167 = 3;
  v64 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v64, "required", v65, v66, v67, v68, v77, v80, v83);
  v134 = 0;
  *(_QWORD *)v135 = 0;
  *(_OWORD *)v168 = (unsigned __int64)v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v134 = 3;
  v69 = operator new(0x20u);
  *(_QWORD *)v69 = v69 + 16;
  strcpy((char *)(v69 + 16), "address");
  *(_QWORD *)(v69 + 8) = 7;
  *(_OWORD *)v135 = (unsigned __int64)v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v70 = _mm_load_si128(&v115);
  v170 = 0;
  v169 = v70;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v102,
    v88,
    2);
  v175 = 0;
  LOBYTE(v116) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v96,
    &v171,
    3);
  LOBYTE(v60) = v183;
  v71 = (__m128i *)&v176;
  v183 = v116;
  v72 = v184;
  LOBYTE(v116) = (_BYTE)v60;
  v184 = v117;
  v117 = v72;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v71 = (__m128i *)((char *)v71 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v71 != &v171 );
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
  v73 = _mm_load_si128((const __m128i *)&v84);
  v171.m128i_i64[1] = 0;
  v171.m128i_i64[0] = (__int64)ida_mcp::tools::names::`anonymous namespace'::handle_get_true_name;
  *(__m128i *)v172 = v73;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v172[0] )
    v172[0](&v171, &v171, 3);
  if ( v189 && v188 && v186 != (ida_mcp::tools::names *)v187 )
    operator delete(v186, v187[0] + 1LL);
  if ( v185 )
  {
    v185 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v180 != v182 )
    operator delete(v180, v182[0] + 1LL);
  if ( v177 != v179 )
    operator delete(v177, v179[0] + 1LL);
  return v190 - __readfsqword(0x28u);
}

