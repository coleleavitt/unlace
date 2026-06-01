unsigned __int64 __fastcall ida_mcp::tools::bookmarks::register_tools(
        ida_mcp::tools::bookmarks *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i v15; // xmm0
  char v16; // si
  __m128i *v17; // r13
  __int64 v18; // rdx
  __m128i si128; // xmm2
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 *v42; // r13
  __int64 v43; // rax
  __int64 v44; // rdx
  __m128i v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __m128i v50; // xmm0
  char v51; // si
  __m128i *v52; // r14
  __int64 v53; // rax
  __int64 *v54; // r13
  __m128i v55; // xmm3
  __int64 v56; // rax
  __int64 v57; // rax
  const __m128i *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  const __m128i *v63; // rsi
  __m128i *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rax
  const __m128i *v67; // rsi
  _QWORD *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rax
  __m128i v71; // xmm0
  __m128i *v72; // r15
  __int64 v73; // rax
  __m128i v74; // xmm4
  int v76; // [rsp+0h] [rbp-638h]
  int v77; // [rsp+8h] [rbp-630h]
  __int64 v78; // [rsp+10h] [rbp-628h]
  int v79[4]; // [rsp+50h] [rbp-5E8h] BYREF
  int v80[2]; // [rsp+60h] [rbp-5D8h]
  char v81[8]; // [rsp+68h] [rbp-5D0h]
  char v82[8]; // [rsp+70h] [rbp-5C8h]
  const __m128i *v83; // [rsp+78h] [rbp-5C0h]
  const __m128i *v84; // [rsp+80h] [rbp-5B8h]
  const __m128i *v85; // [rsp+88h] [rbp-5B0h]
  const __m128i *v86; // [rsp+90h] [rbp-5A8h]
  __int128 *v87; // [rsp+98h] [rbp-5A0h]
  __int128 *v88; // [rsp+A0h] [rbp-598h]
  char *v89; // [rsp+A8h] [rbp-590h]
  char *v90; // [rsp+B0h] [rbp-588h]
  char v91[8]; // [rsp+B8h] [rbp-580h]
  void **v92; // [rsp+C0h] [rbp-578h]
  __int64 *v93; // [rsp+C8h] [rbp-570h]
  __m128i *v94; // [rsp+D0h] [rbp-568h]
  __int64 *v95; // [rsp+D8h] [rbp-560h]
  char v96[8]; // [rsp+E0h] [rbp-558h]
  char *v97; // [rsp+E8h] [rbp-550h]
  char *v98; // [rsp+F0h] [rbp-548h]
  __int128 *v99; // [rsp+F8h] [rbp-540h]
  __int128 *v100; // [rsp+100h] [rbp-538h]
  __int128 *v101; // [rsp+108h] [rbp-530h]
  __int128 *v102; // [rsp+110h] [rbp-528h]
  __int128 *v103; // [rsp+118h] [rbp-520h]
  __int128 *v104; // [rsp+120h] [rbp-518h]
  __int128 *v105; // [rsp+128h] [rbp-510h]
  __int128 *v106; // [rsp+130h] [rbp-508h]
  __int128 *v107; // [rsp+138h] [rbp-500h]
  __int128 *v108; // [rsp+140h] [rbp-4F8h]
  __int128 *v109; // [rsp+148h] [rbp-4F0h]
  char *v110; // [rsp+150h] [rbp-4E8h]
  int *v111; // [rsp+158h] [rbp-4E0h]
  char v112[8]; // [rsp+160h] [rbp-4D8h]
  char v113[8]; // [rsp+168h] [rbp-4D0h]
  char *v114; // [rsp+170h] [rbp-4C8h]
  char *v115; // [rsp+178h] [rbp-4C0h]
  char *v116; // [rsp+180h] [rbp-4B8h]
  char *v117; // [rsp+188h] [rbp-4B0h]
  __m128i v118; // [rsp+190h] [rbp-4A8h] BYREF
  __m128i v119; // [rsp+1A0h] [rbp-498h] BYREF
  char v120[8]; // [rsp+1B0h] [rbp-488h] BYREF
  __int64 v121; // [rsp+1B8h] [rbp-480h] BYREF
  char v122; // [rsp+1C0h] [rbp-478h]
  __int128 v123; // [rsp+1C8h] [rbp-470h]
  char v124; // [rsp+1E0h] [rbp-458h] BYREF
  __int128 v125; // [rsp+1E8h] [rbp-450h] BYREF
  char v126; // [rsp+1F8h] [rbp-440h]
  __int128 v127; // [rsp+200h] [rbp-438h] BYREF
  char v128; // [rsp+210h] [rbp-428h] BYREF
  __int128 v129; // [rsp+218h] [rbp-420h] BYREF
  char v130; // [rsp+228h] [rbp-410h]
  __int128 v131; // [rsp+230h] [rbp-408h] BYREF
  char v132; // [rsp+240h] [rbp-3F8h] BYREF
  __int128 v133; // [rsp+248h] [rbp-3F0h] BYREF
  char v134; // [rsp+258h] [rbp-3E0h]
  __int128 v135; // [rsp+260h] [rbp-3D8h] BYREF
  __m128i v136; // [rsp+270h] [rbp-3C8h] BYREF
  __int64 v137; // [rsp+280h] [rbp-3B8h]
  _QWORD v138[3]; // [rsp+288h] [rbp-3B0h] BYREF
  char v139; // [rsp+2A0h] [rbp-398h] BYREF
  __int128 v140; // [rsp+2A8h] [rbp-390h] BYREF
  _QWORD v141[3]; // [rsp+2B8h] [rbp-380h] BYREF
  char v142; // [rsp+2D0h] [rbp-368h] BYREF
  __int128 v143; // [rsp+2D8h] [rbp-360h] BYREF
  char v144; // [rsp+2E8h] [rbp-350h]
  __int128 v145; // [rsp+2F0h] [rbp-348h] BYREF
  char v146; // [rsp+300h] [rbp-338h] BYREF
  __int128 v147; // [rsp+308h] [rbp-330h] BYREF
  char v148; // [rsp+318h] [rbp-320h]
  __int128 v149; // [rsp+320h] [rbp-318h] BYREF
  __int64 v150; // [rsp+330h] [rbp-308h] BYREF
  __int128 v151; // [rsp+338h] [rbp-300h] BYREF
  _QWORD v152[3]; // [rsp+348h] [rbp-2F0h] BYREF
  char v153; // [rsp+360h] [rbp-2D8h] BYREF
  __int128 v154; // [rsp+368h] [rbp-2D0h] BYREF
  _QWORD v155[3]; // [rsp+378h] [rbp-2C0h] BYREF
  char v156; // [rsp+390h] [rbp-2A8h] BYREF
  int v157[4]; // [rsp+398h] [rbp-2A0h]
  char v158; // [rsp+3A8h] [rbp-290h]
  __int64 v159[2]; // [rsp+3B0h] [rbp-288h]
  char v160; // [rsp+3C0h] [rbp-278h] BYREF
  int v161[4]; // [rsp+3C8h] [rbp-270h]
  char v162; // [rsp+3D8h] [rbp-260h]
  int v163[4]; // [rsp+3E0h] [rbp-258h]
  __int64 v164; // [rsp+3F0h] [rbp-248h] BYREF
  __int128 v165; // [rsp+3F8h] [rbp-240h]
  __int64 v166; // [rsp+408h] [rbp-230h] BYREF
  __int128 v167; // [rsp+410h] [rbp-228h]
  char v168; // [rsp+420h] [rbp-218h] BYREF
  __int128 v169; // [rsp+428h] [rbp-210h] BYREF
  __int64 v170; // [rsp+438h] [rbp-200h] BYREF
  char v171; // [rsp+440h] [rbp-1F8h] BYREF
  __int64 v172; // [rsp+448h] [rbp-1F0h]
  char v173; // [rsp+450h] [rbp-1E8h] BYREF
  int v174[4]; // [rsp+458h] [rbp-1E0h] BYREF
  __int64 v175; // [rsp+468h] [rbp-1D0h] BYREF
  int v176[4]; // [rsp+470h] [rbp-1C8h]
  char v177; // [rsp+480h] [rbp-1B8h] BYREF
  int v178[4]; // [rsp+488h] [rbp-1B0h] BYREF
  char v179[16]; // [rsp+498h] [rbp-1A0h] BYREF
  __int64 v180; // [rsp+4A8h] [rbp-190h]
  __int64 v181; // [rsp+4B0h] [rbp-188h] BYREF
  int v182[4]; // [rsp+4B8h] [rbp-180h]
  int v183[4]; // [rsp+4C8h] [rbp-170h] BYREF
  __int64 v184; // [rsp+4D8h] [rbp-160h]
  _QWORD v185[3]; // [rsp+4E0h] [rbp-158h] BYREF
  char v186; // [rsp+4F8h] [rbp-140h] BYREF
  __m128i v187; // [rsp+500h] [rbp-138h] BYREF
  void (__fastcall *v188[3])(__m128i *, __m128i *, __int64); // [rsp+510h] [rbp-128h] BYREF
  __int64 v189; // [rsp+528h] [rbp-110h]
  int v190[4]; // [rsp+530h] [rbp-108h] BYREF
  __int64 v191; // [rsp+540h] [rbp-F8h]
  char v192; // [rsp+548h] [rbp-F0h] BYREF
  void *v193; // [rsp+550h] [rbp-E8h] BYREF
  __int64 v194; // [rsp+558h] [rbp-E0h]
  _QWORD v195[2]; // [rsp+560h] [rbp-D8h] BYREF
  void *v196; // [rsp+570h] [rbp-C8h] BYREF
  __int64 v197; // [rsp+578h] [rbp-C0h]
  _QWORD v198[2]; // [rsp+580h] [rbp-B8h] BYREF
  char v199; // [rsp+590h] [rbp-A8h]
  __int64 v200; // [rsp+598h] [rbp-A0h] BYREF
  char v201; // [rsp+5B0h] [rbp-88h]
  ida_mcp::tools::bookmarks *v202; // [rsp+5B8h] [rbp-80h]
  _QWORD v203[2]; // [rsp+5C8h] [rbp-70h] BYREF
  char v204; // [rsp+5D8h] [rbp-60h]
  char v205; // [rsp+5E8h] [rbp-50h]
  unsigned __int64 v206; // [rsp+5F8h] [rbp-40h]

  *(_QWORD *)v80 = this;
  v206 = __readfsqword(0x28u);
  v193 = v195;
  v194 = 0;
  LOBYTE(v195[0]) = 0;
  v196 = v198;
  v197 = 0;
  LOBYTE(v198[0]) = 0;
  v199 = 0;
  v200 = 0;
  v201 = 0;
  v205 = 0;
  std::string::_M_replace();
  v92 = &v196;
  std::string::_M_replace();
  *(_QWORD *)v174 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v173 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  LOBYTE(v175) = 0;
  *(_QWORD *)v176 = 0;
  *(_OWORD *)v174 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v175) = 3;
  v3 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v3, "object", v4, v5, v6, v7, (int)v174, v77, (__int64)&v193);
  v83 = (const __m128i *)&v173;
  *(_OWORD *)v176 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v187,
    (const __m128i *)&v173);
  v188[0] = nullptr;
  v177 = 0;
  *(_QWORD *)v178 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v177 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "properties");
  *(_QWORD *)(v8 + 8) = 10;
  *(_OWORD *)v178 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v9 = _mm_load_si128(&v118);
  v180 = 0;
  v84 = (const __m128i *)&v177;
  *(_QWORD *)v96 = &v188[1];
  *(__m128i *)v179 = v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v188[1],
    (const __m128i *)&v177);
  v189 = 0;
  LOBYTE(v181) = 0;
  *(_QWORD *)v182 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v181) = 3;
  v10 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v10, "required", v11, v12, v13, v14, v76, (int)v178, v78);
  v94 = &v119;
  *(_OWORD *)v182 = (unsigned __int64)v10;
  *(__m128 *)v79 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v15 = _mm_load_si128(&v119);
  v184 = 0;
  *(_QWORD *)v91 = v190;
  *(__m128i *)v183 = v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v190,
    (const __m128i *)&v181);
  v191 = 0;
  v120[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v120,
    &v187,
    3);
  v16 = v199;
  v17 = (__m128i *)&v192;
  v18 = v121;
  v199 = v120[0];
  v120[0] = v16;
  v121 = v200;
  v200 = v18;
  v95 = &v121;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v17 = (__m128i *)((char *)v17 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v17 != &v187 );
  v111 = &v183[2];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v90 = &v179[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)v79);
  v187.m128i_i64[1] = 0;
  v187.m128i_i64[0] = (__int64)ida_mcp::tools::bookmarks::`anonymous namespace'::list_bookmarks_impl;
  *(__m128i *)v188 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v188[0] )
    v188[0](&v187, &v187, 3);
  if ( v205 && v204 && v202 != (ida_mcp::tools::bookmarks *)v203 )
    operator delete(v202, v203[0] + 1LL);
  if ( v201 )
  {
    v201 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v93 = &v200;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v196 != v198 )
    operator delete(v196, v198[0] + 1LL);
  if ( v193 != v195 )
    operator delete(v193, v195[0] + 1LL);
  v193 = v195;
  v194 = 0;
  LOBYTE(v195[0]) = 0;
  v196 = v198;
  v197 = 0;
  LOBYTE(v198[0]) = 0;
  v199 = 0;
  v200 = 0;
  v201 = 0;
  v205 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v124 = 0;
  v99 = &v125;
  *(_QWORD *)&v125 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v124 = 3;
  v20 = operator new(0x20u);
  *(_QWORD *)v20 = v20 + 16;
  strcpy((char *)(v20 + 16), "type");
  *(_QWORD *)(v20 + 8) = 4;
  v126 = 0;
  *(_QWORD *)&v127 = 0;
  v100 = &v127;
  v125 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v126 = 3;
  v21 = operator new(0x20u);
  *(_QWORD *)v21 = v21 + 16;
  strcpy((char *)(v21 + 16), "object");
  *(_QWORD *)(v21 + 8) = 6;
  v110 = &v124;
  v127 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v187,
    (const __m128i *)&v124);
  v188[0] = nullptr;
  v173 = 0;
  *(_QWORD *)v174 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v173 = 3;
  v22 = operator new(0x20u);
  *(_QWORD *)v22 = v22 + 16;
  strcpy((char *)(v22 + 16), "properties");
  *(_QWORD *)(v22 + 8) = 10;
  v139 = 0;
  *(_QWORD *)&v140 = 0;
  v105 = &v140;
  *(_OWORD *)v174 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v139 = 3;
  v23 = operator new(0x20u);
  strcpy((char *)(v23 + 16), "address");
  *(_QWORD *)v23 = v23 + 16;
  *(_QWORD *)(v23 + 8) = 7;
  v128 = 0;
  *(_QWORD *)&v129 = 0;
  v101 = &v129;
  v140 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v128 = 3;
  v24 = operator new(0x20u);
  *(_QWORD *)v24 = v24 + 16;
  strcpy((char *)(v24 + 16), "type");
  *(_QWORD *)(v24 + 8) = 4;
  v130 = 0;
  *(_QWORD *)&v131 = 0;
  v102 = &v131;
  v129 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v130 = 3;
  v25 = operator new(0x20u);
  *(_QWORD *)v25 = v25 + 16;
  strcpy((char *)(v25 + 16), "string");
  *(_QWORD *)(v25 + 8) = 6;
  v114 = &v128;
  v131 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v136,
    (const __m128i *)&v128);
  v137 = 0;
  v132 = 0;
  *(_QWORD *)&v133 = 0;
  v103 = &v133;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v132 = 3;
  v26 = operator new(0x20u);
  *(_QWORD *)v26 = v26 + 16;
  strcpy((char *)(v26 + 16), "description");
  *(_QWORD *)(v26 + 8) = 11;
  v134 = 0;
  *(_QWORD *)&v135 = 0;
  v104 = &v135;
  v133 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v134 = 3;
  v27 = operator new(0x20u);
  *(_QWORD *)v27 = v27 + 16;
  strcpy((char *)(v27 + 16), "Hex address");
  *(_QWORD *)(v27 + 8) = 11;
  v115 = &v132;
  v135 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v138,
    (const __m128i *)&v132);
  v138[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v141,
    &v136);
  v141[2] = 0;
  v89 = &v139;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v181,
    (const __m128i *)&v139);
  *(_QWORD *)&v182[2] = 0;
  v153 = 0;
  *(_QWORD *)&v154 = 0;
  v87 = &v154;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v153 = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)v28 = v28 + 16;
  strcpy((char *)(v28 + 16), "description");
  *(_QWORD *)(v28 + 8) = 11;
  v142 = 0;
  *(_QWORD *)&v143 = 0;
  v106 = &v143;
  v154 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v142 = 3;
  v29 = operator new(0x20u);
  *(_QWORD *)v29 = v29 + 16;
  strcpy((char *)(v29 + 16), "type");
  *(_QWORD *)(v29 + 8) = 4;
  v144 = 0;
  *(_QWORD *)&v145 = 0;
  v107 = &v145;
  v143 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v144 = 3;
  v30 = operator new(0x20u);
  strcpy((char *)(v30 + 16), "string");
  *(_QWORD *)v30 = v30 + 16;
  *(_QWORD *)(v30 + 8) = 6;
  v116 = &v142;
  v86 = (const __m128i *)&v150;
  v145 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v150,
    (const __m128i *)&v142);
  *((_QWORD *)&v151 + 1) = 0;
  v146 = 0;
  *(_QWORD *)&v147 = 0;
  v108 = &v147;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v146 = 3;
  v31 = operator new(0x20u);
  *(_QWORD *)v31 = v31 + 16;
  strcpy((char *)(v31 + 16), "description");
  *(_QWORD *)(v31 + 8) = 11;
  v148 = 0;
  *(_QWORD *)&v149 = 0;
  v109 = &v149;
  v147 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v32 = (__int64 *)operator new(0x20u);
  *v32 = (__int64)(v32 + 2);
  *(_QWORD *)v120 = 20;
  v33 = std::string::_M_create();
  v34 = *(_QWORD *)v120;
  v35 = _mm_load_si128((const __m128i *)&xmmword_3E2440);
  *v32 = v33;
  v32[2] = v34;
  *(__m128i *)v33 = v35;
  *(_DWORD *)(v33 + 16) = 1852795252;
  v36 = *(_QWORD *)v120;
  v37 = *v32;
  v32[1] = *(_QWORD *)v120;
  *(_BYTE *)(v37 + v36) = 0;
  v117 = &v146;
  v149 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v152,
    (const __m128i *)&v146);
  v152[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v155,
    v86);
  v155[2] = 0;
  *(_QWORD *)v82 = &v153;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v183,
    (const __m128i *)&v153);
  v184 = 0;
  v168 = 0;
  *(_QWORD *)&v169 = 0;
  v88 = &v169;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v168 = 3;
  v38 = operator new(0x20u);
  *(_DWORD *)(v38 + 16) = 1701080681;
  *(_QWORD *)v38 = v38 + 16;
  *(_BYTE *)(v38 + 20) = 120;
  *(_QWORD *)(v38 + 8) = 5;
  *(_BYTE *)(v38 + 21) = 0;
  v156 = 0;
  *(_QWORD *)v157 = 0;
  v169 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v156 = 3;
  v39 = operator new(0x20u);
  *(_QWORD *)v39 = v39 + 16;
  strcpy((char *)(v39 + 16), "type");
  *(_QWORD *)(v39 + 8) = 4;
  v158 = 0;
  v159[0] = 0;
  *(_OWORD *)v157 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v158 = 3;
  v40 = operator new(0x20u);
  strcpy((char *)(v40 + 16), "integer");
  *(_QWORD *)v40 = v40 + 16;
  *(_QWORD *)(v40 + 8) = 7;
  v97 = &v156;
  v85 = (const __m128i *)&v164;
  *(_OWORD *)v159 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v164,
    (const __m128i *)&v156);
  *((_QWORD *)&v165 + 1) = 0;
  v160 = 0;
  *(_QWORD *)v161 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v160 = 3;
  v41 = operator new(0x20u);
  *(_QWORD *)v41 = v41 + 16;
  strcpy((char *)(v41 + 16), "description");
  *(_QWORD *)(v41 + 8) = 11;
  v162 = 0;
  *(_QWORD *)v163 = 0;
  *(_OWORD *)v161 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v162 = 3;
  v42 = (__int64 *)operator new(0x20u);
  *v42 = (__int64)(v42 + 2);
  *(_QWORD *)v120 = 48;
  v43 = std::string::_M_create();
  v44 = *(_QWORD *)v120;
  v45 = _mm_load_si128((const __m128i *)&xmmword_3E2450);
  *v42 = v43;
  v42[2] = v44;
  *(__m128i *)v43 = v45;
  *(__m128i *)(v43 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E2460);
  *(__m128i *)(v43 + 32) = _mm_load_si128((const __m128i *)&xmmword_3E2470);
  v46 = *(_QWORD *)v120;
  v47 = *v42;
  v42[1] = *(_QWORD *)v120;
  *(_BYTE *)(v47 + v46) = 0;
  v98 = &v160;
  *(_OWORD *)v163 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v166,
    (const __m128i *)&v160);
  *((_QWORD *)&v167 + 1) = 0;
  *(_QWORD *)v112 = &v170;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v170,
    v85);
  v172 = 0;
  *(_QWORD *)v81 = &v168;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v185,
    (const __m128i *)&v168);
  v185[2] = 0;
  *(_QWORD *)v113 = &v175;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v175,
    (const __m128i *)&v181,
    3);
  *(_QWORD *)&v176[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v96,
    v83);
  v189 = 0;
  v177 = 0;
  *(_QWORD *)v178 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v177 = 3;
  v48 = operator new(0x20u);
  *(_QWORD *)v48 = v48 + 16;
  strcpy((char *)(v48 + 16), "required");
  *(_QWORD *)(v48 + 8) = 8;
  v122 = 0;
  *(_QWORD *)&v123 = 0;
  *(_OWORD *)v178 = (unsigned __int64)v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v122 = 3;
  v49 = operator new(0x20u);
  *(_QWORD *)v49 = v49 + 16;
  strcpy((char *)(v49 + 16), "address");
  *(_QWORD *)(v49 + 8) = 7;
  v123 = (unsigned __int64)v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v50 = _mm_load_si128(&v119);
  v180 = 0;
  *(__m128i *)v179 = v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v91,
    v84);
  v191 = 0;
  v120[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v120,
    &v187,
    3);
  v51 = v199;
  v52 = (__m128i *)&v192;
  v199 = v120[0];
  v53 = v200;
  v120[0] = v51;
  v200 = v121;
  v121 = v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v52 = (__m128i *)((char *)v52 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v52 != &v187 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v54 = (__int64 *)&v186;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v54 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v54 != &v181 );
  v110 = &v171;
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
  v89 = (char *)&v151;
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
  v55 = _mm_load_si128((const __m128i *)v79);
  v187.m128i_i64[1] = 0;
  v187.m128i_i64[0] = (__int64)ida_mcp::tools::bookmarks::`anonymous namespace'::set_bookmark_impl;
  *(__m128i *)v188 = v55;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v188[0] )
    v188[0](&v187, &v187, 3);
  if ( v205 && v204 && v202 != (ida_mcp::tools::bookmarks *)v203 )
    operator delete(v202, v203[0] + 1LL);
  if ( v201 )
  {
    v201 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v196 != v198 )
    operator delete(v196, v198[0] + 1LL);
  if ( v193 != v195 )
    operator delete(v193, v195[0] + 1LL);
  v193 = v195;
  v194 = 0;
  LOBYTE(v195[0]) = 0;
  v196 = v198;
  v197 = 0;
  LOBYTE(v198[0]) = 0;
  v199 = 0;
  v200 = 0;
  v201 = 0;
  v205 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v156 = 0;
  *(_QWORD *)v157 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v156 = 3;
  v56 = operator new(0x20u);
  *(_QWORD *)v56 = v56 + 16;
  strcpy((char *)(v56 + 16), "type");
  *(_QWORD *)(v56 + 8) = 4;
  v158 = 0;
  v159[0] = 0;
  *(_OWORD *)v157 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v158 = 3;
  v57 = operator new(0x20u);
  *(_QWORD *)v57 = v57 + 16;
  v58 = (const __m128i *)v97;
  strcpy((char *)(v57 + 16), "object");
  *(_QWORD *)(v57 + 8) = 6;
  *(_OWORD *)v159 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v187,
    v58,
    2);
  v188[0] = nullptr;
  v177 = 0;
  *(_QWORD *)v178 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v177 = 3;
  v59 = operator new(0x20u);
  *(_QWORD *)v59 = v59 + 16;
  strcpy((char *)(v59 + 16), "properties");
  *(_QWORD *)(v59 + 8) = 10;
  v173 = 0;
  *(_QWORD *)v174 = 0;
  *(_OWORD *)v178 = (unsigned __int64)v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v173 = 3;
  v60 = operator new(0x20u);
  *(_QWORD *)v60 = v60 + 16;
  *(_DWORD *)(v60 + 16) = 1701080681;
  *(_BYTE *)(v60 + 20) = 120;
  *(_QWORD *)(v60 + 8) = 5;
  *(_BYTE *)(v60 + 21) = 0;
  v160 = 0;
  *(_QWORD *)v161 = 0;
  *(_OWORD *)v174 = (unsigned __int64)v60;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v160 = 3;
  v61 = operator new(0x20u);
  *(_QWORD *)v61 = v61 + 16;
  strcpy((char *)(v61 + 16), "type");
  *(_QWORD *)(v61 + 8) = 4;
  v162 = 0;
  *(_QWORD *)v163 = 0;
  *(_OWORD *)v161 = (unsigned __int64)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v162 = 3;
  v62 = operator new(0x20u);
  strcpy((char *)(v62 + 16), "integer");
  v63 = (const __m128i *)v98;
  *(_QWORD *)v62 = v62 + 16;
  v64 = *(__m128i **)v81;
  *(_QWORD *)(v62 + 8) = 7;
  *(_OWORD *)v163 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v64,
    v63,
    2);
  *((_QWORD *)&v169 + 1) = 0;
  LOBYTE(v164) = 0;
  *(_QWORD *)&v165 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v164) = 3;
  v65 = operator new(0x20u);
  *(_QWORD *)v65 = v65 + 16;
  strcpy((char *)(v65 + 16), "description");
  *(_QWORD *)(v65 + 8) = 11;
  LOBYTE(v166) = 0;
  *(_QWORD *)&v167 = 0;
  v165 = (unsigned __int64)v65;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v166) = 3;
  v66 = operator new(0x20u);
  v67 = v85;
  *(_QWORD *)v66 = v66 + 16;
  v68 = *(_QWORD **)v112;
  strcpy((char *)(v66 + 16), "Bookmark index");
  *(_QWORD *)(v66 + 8) = 14;
  v167 = (unsigned __int64)v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v68,
    v67,
    2);
  v172 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v113,
    *(const __m128i **)v81,
    2);
  *(_QWORD *)&v176[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v82,
    v83,
    2);
  *((_QWORD *)&v154 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v179,
    *(const __m128i **)v82,
    1);
  v180 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v96,
    v84,
    2);
  v189 = 0;
  LOBYTE(v181) = 0;
  *(_QWORD *)v182 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v181) = 3;
  v69 = operator new(0x20u);
  *(_QWORD *)v69 = v69 + 16;
  strcpy((char *)(v69 + 16), "required");
  *(_QWORD *)(v69 + 8) = 8;
  LOBYTE(v150) = 0;
  *(_QWORD *)&v151 = 0;
  *(_OWORD *)v182 = (unsigned __int64)v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v150) = 3;
  v70 = operator new(0x20u);
  *(_BYTE *)(v70 + 20) = 120;
  *(_QWORD *)v70 = v70 + 16;
  *(_DWORD *)(v70 + 16) = 1701080681;
  *(_QWORD *)(v70 + 8) = 5;
  *(_BYTE *)(v70 + 21) = 0;
  v151 = (unsigned __int64)v70;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v71 = _mm_load_si128(&v119);
  v184 = 0;
  *(__m128i *)v183 = v71;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v91,
    (const __m128i *)&v181,
    2);
  v191 = 0;
  v120[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v120,
    &v187,
    3);
  LOBYTE(v67) = v199;
  v72 = (__m128i *)&v192;
  v199 = v120[0];
  v73 = v200;
  v120[0] = (char)v67;
  v200 = v121;
  v121 = v73;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v72 = (__m128i *)((char *)v72 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v72 != &v187 );
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
  v74 = _mm_load_si128((const __m128i *)v79);
  v187.m128i_i64[1] = 0;
  v187.m128i_i64[0] = (__int64)ida_mcp::tools::bookmarks::`anonymous namespace'::delete_bookmark_impl;
  *(__m128i *)v188 = v74;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v188[0] )
    v188[0](&v187, &v187, 3);
  if ( v205 && v204 && v202 != (ida_mcp::tools::bookmarks *)v203 )
    operator delete(v202, v203[0] + 1LL);
  if ( v201 )
  {
    v201 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v196 != v198 )
    operator delete(v196, v198[0] + 1LL);
  if ( v193 != v195 )
    operator delete(v193, v195[0] + 1LL);
  return v206 - __readfsqword(0x28u);
}

