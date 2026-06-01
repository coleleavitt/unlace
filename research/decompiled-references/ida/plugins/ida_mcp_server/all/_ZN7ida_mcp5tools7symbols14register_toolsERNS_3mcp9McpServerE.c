unsigned __int64 __fastcall ida_mcp::tools::symbols::register_tools(
        ida_mcp::tools::symbols *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __m128 v12; // xmm1
  __m128i v13; // xmm0
  char v14; // si
  int *v15; // r15
  __int64 v16; // rdx
  __m128i v17; // xmm2
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdx
  __m128i si128; // xmm0
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  const __m128i *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  const __m128i *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rdi
  __m128i v47; // xmm0
  int *v48; // r15
  __int64 v49; // rax
  __int64 *v50; // r13
  __m128i v51; // xmm3
  __m128i v53; // [rsp+80h] [rbp-5C8h] BYREF
  __int64 *v54; // [rsp+90h] [rbp-5B8h]
  ida_mcp::tools::symbols *v55; // [rsp+98h] [rbp-5B0h]
  char *v56; // [rsp+A0h] [rbp-5A8h]
  const __m128i *v57; // [rsp+A8h] [rbp-5A0h]
  char *v58; // [rsp+B0h] [rbp-598h]
  char *v59; // [rsp+B8h] [rbp-590h]
  const __m128i *v60; // [rsp+C0h] [rbp-588h]
  int v61[2]; // [rsp+C8h] [rbp-580h]
  __int128 *v62; // [rsp+D0h] [rbp-578h]
  __int128 *v63; // [rsp+D8h] [rbp-570h]
  __int128 *v64; // [rsp+E0h] [rbp-568h]
  __int128 *v65; // [rsp+E8h] [rbp-560h]
  __int128 *v66; // [rsp+F0h] [rbp-558h]
  __int128 *v67; // [rsp+F8h] [rbp-550h]
  __int128 *v68; // [rsp+100h] [rbp-548h]
  __int128 *v69; // [rsp+108h] [rbp-540h]
  __int128 *v70; // [rsp+110h] [rbp-538h]
  __int128 *v71; // [rsp+118h] [rbp-530h]
  __int128 *v72; // [rsp+120h] [rbp-528h]
  char *v73; // [rsp+128h] [rbp-520h]
  char *v74; // [rsp+130h] [rbp-518h]
  __int8 *v75; // [rsp+138h] [rbp-510h]
  __int64 *v76; // [rsp+140h] [rbp-508h]
  int v77[2]; // [rsp+148h] [rbp-500h]
  int *v78; // [rsp+150h] [rbp-4F8h]
  int v79[2]; // [rsp+158h] [rbp-4F0h]
  __int64 *v80; // [rsp+160h] [rbp-4E8h]
  __int64 *v81; // [rsp+168h] [rbp-4E0h]
  char *v82; // [rsp+170h] [rbp-4D8h]
  char *v83; // [rsp+178h] [rbp-4D0h]
  char *v84; // [rsp+180h] [rbp-4C8h]
  char *v85; // [rsp+188h] [rbp-4C0h]
  char *v86; // [rsp+190h] [rbp-4B8h]
  char *v87; // [rsp+198h] [rbp-4B0h]
  __m128i v88; // [rsp+1A0h] [rbp-4A8h] BYREF
  __int64 v89; // [rsp+1B0h] [rbp-498h] BYREF
  __int64 v90; // [rsp+1B8h] [rbp-490h] BYREF
  char v91; // [rsp+1C0h] [rbp-488h] BYREF
  __int128 v92; // [rsp+1C8h] [rbp-480h]
  char v93; // [rsp+1D8h] [rbp-470h]
  __int128 v94; // [rsp+1E0h] [rbp-468h] BYREF
  char v95; // [rsp+1F0h] [rbp-458h] BYREF
  __int128 v96; // [rsp+1F8h] [rbp-450h] BYREF
  char v97; // [rsp+208h] [rbp-440h]
  __int128 v98; // [rsp+210h] [rbp-438h] BYREF
  char v99; // [rsp+220h] [rbp-428h] BYREF
  __int128 v100; // [rsp+228h] [rbp-420h] BYREF
  char v101; // [rsp+238h] [rbp-410h]
  __int128 v102; // [rsp+240h] [rbp-408h] BYREF
  char v103; // [rsp+250h] [rbp-3F8h] BYREF
  __int128 v104; // [rsp+258h] [rbp-3F0h] BYREF
  char v105; // [rsp+268h] [rbp-3E0h]
  __int128 v106; // [rsp+270h] [rbp-3D8h] BYREF
  _QWORD v107[3]; // [rsp+280h] [rbp-3C8h] BYREF
  _QWORD v108[3]; // [rsp+298h] [rbp-3B0h] BYREF
  char v109; // [rsp+2B0h] [rbp-398h] BYREF
  __int128 v110; // [rsp+2B8h] [rbp-390h] BYREF
  _QWORD v111[3]; // [rsp+2C8h] [rbp-380h] BYREF
  char v112; // [rsp+2E0h] [rbp-368h] BYREF
  __int128 v113; // [rsp+2E8h] [rbp-360h] BYREF
  char v114; // [rsp+2F8h] [rbp-350h]
  __int128 v115; // [rsp+300h] [rbp-348h] BYREF
  char v116; // [rsp+310h] [rbp-338h] BYREF
  __int128 v117; // [rsp+318h] [rbp-330h] BYREF
  char v118; // [rsp+328h] [rbp-320h]
  __int128 v119; // [rsp+330h] [rbp-318h] BYREF
  __int64 v120; // [rsp+340h] [rbp-308h] BYREF
  __int128 v121; // [rsp+348h] [rbp-300h]
  _QWORD v122[3]; // [rsp+358h] [rbp-2F0h] BYREF
  __int64 v123; // [rsp+370h] [rbp-2D8h] BYREF
  __int128 v124; // [rsp+378h] [rbp-2D0h]
  _QWORD v125[3]; // [rsp+388h] [rbp-2C0h] BYREF
  char v126; // [rsp+3A0h] [rbp-2A8h] BYREF
  __int128 v127; // [rsp+3A8h] [rbp-2A0h]
  char v128; // [rsp+3B8h] [rbp-290h]
  __int128 v129; // [rsp+3C0h] [rbp-288h]
  char v130; // [rsp+3D0h] [rbp-278h] BYREF
  __int128 v131; // [rsp+3D8h] [rbp-270h]
  char v132; // [rsp+3E8h] [rbp-260h]
  __int128 v133; // [rsp+3F0h] [rbp-258h]
  __int64 v134; // [rsp+400h] [rbp-248h] BYREF
  __int128 v135; // [rsp+408h] [rbp-240h]
  __int64 v136; // [rsp+418h] [rbp-230h] BYREF
  __int128 v137; // [rsp+420h] [rbp-228h]
  __int64 v138; // [rsp+430h] [rbp-218h] BYREF
  __int128 v139; // [rsp+438h] [rbp-210h]
  __int64 v140; // [rsp+448h] [rbp-200h] BYREF
  char v141; // [rsp+450h] [rbp-1F8h] BYREF
  __int64 v142; // [rsp+458h] [rbp-1F0h]
  char v143; // [rsp+460h] [rbp-1E8h] BYREF
  __int128 v144; // [rsp+468h] [rbp-1E0h]
  __int64 v145; // [rsp+478h] [rbp-1D0h] BYREF
  char v146; // [rsp+480h] [rbp-1C8h] BYREF
  __int64 v147; // [rsp+488h] [rbp-1C0h]
  char v148; // [rsp+490h] [rbp-1B8h] BYREF
  __int128 v149; // [rsp+498h] [rbp-1B0h]
  __m128i v150; // [rsp+4A8h] [rbp-1A0h] BYREF
  __int64 v151; // [rsp+4B8h] [rbp-190h]
  __int64 v152; // [rsp+4C0h] [rbp-188h] BYREF
  __int128 v153; // [rsp+4C8h] [rbp-180h]
  int v154[4]; // [rsp+4D8h] [rbp-170h] BYREF
  __int64 v155; // [rsp+4E8h] [rbp-160h]
  _QWORD v156[3]; // [rsp+4F0h] [rbp-158h] BYREF
  char v157; // [rsp+508h] [rbp-140h] BYREF
  int v158[2]; // [rsp+510h] [rbp-138h] BYREF
  __int64 v159; // [rsp+518h] [rbp-130h]
  void (__fastcall *v160[3])(int *, int *, __int64); // [rsp+520h] [rbp-128h] BYREF
  __int64 v161; // [rsp+538h] [rbp-110h]
  int v162[4]; // [rsp+540h] [rbp-108h] BYREF
  __int64 v163; // [rsp+550h] [rbp-F8h]
  char v164; // [rsp+558h] [rbp-F0h] BYREF
  void *v165; // [rsp+560h] [rbp-E8h]
  __int64 v166; // [rsp+568h] [rbp-E0h]
  _QWORD v167[2]; // [rsp+570h] [rbp-D8h] BYREF
  void *v168; // [rsp+580h] [rbp-C8h] BYREF
  __int64 v169; // [rsp+588h] [rbp-C0h]
  _QWORD v170[2]; // [rsp+590h] [rbp-B8h] BYREF
  char v171; // [rsp+5A0h] [rbp-A8h]
  __int64 v172; // [rsp+5A8h] [rbp-A0h] BYREF
  char v173; // [rsp+5C0h] [rbp-88h]
  ida_mcp::tools::symbols *v174; // [rsp+5C8h] [rbp-80h]
  _QWORD v175[2]; // [rsp+5D8h] [rbp-70h] BYREF
  char v176; // [rsp+5E8h] [rbp-60h]
  char v177; // [rsp+5F8h] [rbp-50h]
  unsigned __int64 v178; // [rsp+608h] [rbp-40h]

  v55 = this;
  v178 = __readfsqword(0x28u);
  v165 = v167;
  v166 = 0;
  LOBYTE(v167[0]) = 0;
  v168 = v170;
  v169 = 0;
  LOBYTE(v170[0]) = 0;
  v171 = 0;
  v172 = 0;
  v173 = 0;
  v177 = 0;
  std::string::_M_replace();
  v60 = (const __m128i *)&v168;
  std::string::_M_replace();
  *(_QWORD *)&v127 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v126 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v128 = 0;
  *(_QWORD *)&v129 = 0;
  v127 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v128 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v58 = &v126;
  v129 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v158,
    (const __m128i *)&v126,
    2,
    1);
  v160[0] = nullptr;
  v148 = 0;
  *(_QWORD *)&v149 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v4 = operator new(0x20u);
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)v4 = v4 + 16;
  *(_QWORD *)(v4 + 8) = 10;
  v143 = 0;
  *(_QWORD *)&v144 = 0;
  v149 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v143 = 3;
  v5 = operator new(0x20u);
  strcpy((char *)(v5 + 16), "address");
  *(_QWORD *)v5 = v5 + 16;
  *(_QWORD *)(v5 + 8) = 7;
  v130 = 0;
  *(_QWORD *)&v131 = 0;
  v144 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v130 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  v132 = 0;
  *(_QWORD *)&v133 = 0;
  v131 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v132 = 3;
  v7 = operator new(0x20u);
  *(_QWORD *)v7 = v7 + 16;
  strcpy((char *)(v7 + 16), "string");
  *(_QWORD *)(v7 + 8) = 6;
  v59 = &v130;
  v133 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v138,
    (const __m128i *)&v130,
    2,
    1);
  *((_QWORD *)&v139 + 1) = 0;
  LOBYTE(v134) = 0;
  *(_QWORD *)&v135 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v134) = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "description");
  *(_QWORD *)(v8 + 8) = 11;
  LOBYTE(v136) = 0;
  *(_QWORD *)&v137 = 0;
  v135 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v136) = 3;
  v9 = operator new(0x20u);
  strcpy((char *)(v9 + 16), "Hex address");
  *(_QWORD *)v9 = v9 + 16;
  *(_QWORD *)(v9 + 8) = 11;
  *(_QWORD *)v61 = &v140;
  v137 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v140,
    (const __m128i *)&v134,
    2,
    1);
  v76 = &v145;
  v142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v145,
    (const __m128i *)&v138,
    2,
    1);
  v147 = 0;
  v57 = (const __m128i *)&v143;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v123,
    (const __m128i *)&v143,
    2,
    1);
  *((_QWORD *)&v124 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v151 = 0;
  v56 = &v148;
  *(_QWORD *)v77 = &v160[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v160[1],
    (const __m128i *)&v148,
    2,
    1);
  v161 = 0;
  LOBYTE(v152) = 0;
  *(_QWORD *)&v153 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v152) = 3;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v10 + 16;
  strcpy((char *)(v10 + 16), "required");
  *(_QWORD *)(v10 + 8) = 8;
  *(_QWORD *)&v121 = 0;
  v153 = (unsigned __int64)v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v120) = 3;
  v11 = operator new(0x20u);
  *(_QWORD *)v11 = v11 + 16;
  strcpy((char *)(v11 + 16), "address");
  v12 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v11 + 8) = 7;
  *(_QWORD *)v79 = &v88;
  v53 = (__m128i)v12;
  v121 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v13 = _mm_load_si128(&v88);
  v155 = 0;
  v78 = v162;
  *(__m128i *)v154 = v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v162,
    (const __m128i *)&v152,
    2,
    1);
  v163 = 0;
  LOBYTE(v89) = 0;
  v54 = &v89;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v14 = v171;
  v15 = (int *)&v164;
  v16 = v90;
  v171 = v89;
  LOBYTE(v89) = v14;
  v90 = v172;
  v172 = v16;
  v81 = &v90;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v15 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v15 != v158 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v75 = &v150.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v74 = &v146;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v73 = &v141;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v17 = _mm_load_si128(&v53);
  v159 = 0;
  *(_QWORD *)v158 = ida_mcp::tools::symbols::`anonymous namespace'::handle_get_name_origin;
  *(__m128i *)v160 = v17;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v160[0] )
    v160[0](v158, v158, 3);
  if ( v177 && v176 && v174 != (ida_mcp::tools::symbols *)v175 )
    operator delete(v174, v175[0] + 1LL);
  if ( v173 )
  {
    v173 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v80 = &v172;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v168 != v170 )
    operator delete(v168, v170[0] + 1LL);
  if ( v165 != v167 )
    operator delete(v165, v167[0] + 1LL);
  v165 = v167;
  v166 = 0;
  LOBYTE(v167[0]) = 0;
  v168 = v170;
  v169 = 0;
  LOBYTE(v170[0]) = 0;
  v171 = 0;
  v172 = 0;
  v173 = 0;
  v177 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v95 = 0;
  v62 = &v96;
  *(_QWORD *)&v96 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v95 = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "type");
  *(_QWORD *)(v18 + 8) = 4;
  v97 = 0;
  *(_QWORD *)&v98 = 0;
  v63 = &v98;
  v96 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v97 = 3;
  v19 = operator new(0x20u);
  *(_QWORD *)v19 = v19 + 16;
  strcpy((char *)(v19 + 16), "object");
  *(_QWORD *)(v19 + 8) = 6;
  v83 = &v95;
  v98 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v158,
    (const __m128i *)&v95,
    2,
    1);
  v160[0] = nullptr;
  v143 = 0;
  *(_QWORD *)&v144 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v143 = 3;
  v20 = operator new(0x20u);
  *(_QWORD *)v20 = v20 + 16;
  strcpy((char *)(v20 + 16), "properties");
  *(_QWORD *)(v20 + 8) = 10;
  v109 = 0;
  *(_QWORD *)&v110 = 0;
  v68 = &v110;
  v144 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v109 = 3;
  v21 = operator new(0x20u);
  strcpy((char *)(v21 + 16), "start_address");
  *(_QWORD *)v21 = v21 + 16;
  *(_QWORD *)(v21 + 8) = 13;
  v99 = 0;
  *(_QWORD *)&v100 = 0;
  v64 = &v100;
  v110 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v99 = 3;
  v22 = operator new(0x20u);
  *(_QWORD *)v22 = v22 + 16;
  strcpy((char *)(v22 + 16), "type");
  *(_QWORD *)(v22 + 8) = 4;
  v101 = 0;
  *(_QWORD *)&v102 = 0;
  v65 = &v102;
  v100 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v101 = 3;
  v23 = operator new(0x20u);
  strcpy((char *)(v23 + 16), "string");
  *(_QWORD *)v23 = v23 + 16;
  *(_QWORD *)(v23 + 8) = 6;
  v84 = &v99;
  v60 = (const __m128i *)v107;
  v102 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v107,
    (const __m128i *)&v99,
    2,
    1);
  v107[2] = 0;
  v103 = 0;
  *(_QWORD *)&v104 = 0;
  v66 = &v104;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v103 = 3;
  v24 = operator new(0x20u);
  *(_QWORD *)v24 = v24 + 16;
  strcpy((char *)(v24 + 16), "description");
  *(_QWORD *)(v24 + 8) = 11;
  v105 = 0;
  *(_QWORD *)&v106 = 0;
  v67 = &v106;
  v104 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v105 = 3;
  v25 = (__int64 *)operator new(0x20u);
  *v25 = (__int64)(v25 + 2);
  v89 = 17;
  v26 = std::string::_M_create();
  v27 = v89;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E23A0);
  *v25 = v26;
  v25[2] = v27;
  *(__m128i *)v26 = si128;
  *(_BYTE *)(v26 + 16) = 115;
  v29 = v89;
  v30 = *v25;
  v25[1] = v89;
  *(_BYTE *)(v30 + v29) = 0;
  v85 = &v103;
  v106 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v108,
    (const __m128i *)&v103,
    2,
    1);
  v108[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v111,
    v60,
    2,
    1);
  v82 = &v109;
  v111[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v152,
    (const __m128i *)&v109,
    2,
    1);
  *((_QWORD *)&v153 + 1) = 0;
  LOBYTE(v123) = 0;
  *(_QWORD *)&v124 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v123) = 3;
  v31 = operator new(0x20u);
  *(_QWORD *)v31 = v31 + 16;
  strcpy((char *)(v31 + 16), "end_address");
  *(_QWORD *)(v31 + 8) = 11;
  v112 = 0;
  *(_QWORD *)&v113 = 0;
  v69 = &v113;
  v124 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = 3;
  v32 = operator new(0x20u);
  *(_QWORD *)v32 = v32 + 16;
  strcpy((char *)(v32 + 16), "type");
  *(_QWORD *)(v32 + 8) = 4;
  v114 = 0;
  *(_QWORD *)&v115 = 0;
  v70 = &v115;
  v113 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v114 = 3;
  v33 = operator new(0x20u);
  *(_QWORD *)v33 = v33 + 16;
  strcpy((char *)(v33 + 16), "string");
  *(_QWORD *)(v33 + 8) = 6;
  v86 = &v112;
  v115 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v120,
    (const __m128i *)&v112,
    2,
    1);
  *((_QWORD *)&v121 + 1) = 0;
  v116 = 0;
  *(_QWORD *)&v117 = 0;
  v71 = &v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v116 = 3;
  v34 = operator new(0x20u);
  *(_QWORD *)v34 = v34 + 16;
  strcpy((char *)(v34 + 16), "description");
  *(_QWORD *)(v34 + 8) = 11;
  v118 = 0;
  *(_QWORD *)&v119 = 0;
  v72 = &v119;
  v117 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = 3;
  v35 = operator new(0x20u);
  strcpy((char *)(v35 + 16), "End hex address");
  *(_QWORD *)v35 = v35 + 16;
  *(_QWORD *)(v35 + 8) = 15;
  v87 = &v116;
  v119 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v122,
    (const __m128i *)&v116,
    2,
    1);
  v122[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v125,
    (const __m128i *)&v120,
    2,
    1);
  v125[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v154,
    (const __m128i *)&v123,
    2,
    1);
  v155 = 0;
  LOBYTE(v138) = 0;
  *(_QWORD *)&v139 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v138) = 3;
  v36 = operator new(0x20u);
  *(_QWORD *)v36 = v36 + 16;
  *(_DWORD *)(v36 + 16) = 1768778092;
  *(_BYTE *)(v36 + 20) = 116;
  *(_QWORD *)(v36 + 8) = 5;
  *(_BYTE *)(v36 + 21) = 0;
  v126 = 0;
  *(_QWORD *)&v127 = 0;
  v139 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v126 = 3;
  v37 = operator new(0x20u);
  *(_QWORD *)v37 = v37 + 16;
  strcpy((char *)(v37 + 16), "type");
  *(_QWORD *)(v37 + 8) = 4;
  v128 = 0;
  *(_QWORD *)&v129 = 0;
  v127 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v128 = 3;
  v38 = operator new(0x20u);
  v39 = (const __m128i *)v58;
  *(_QWORD *)v38 = v38 + 16;
  strcpy((char *)(v38 + 16), "number");
  *(_QWORD *)(v38 + 8) = 6;
  v129 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v134,
    v39,
    2,
    1);
  *((_QWORD *)&v135 + 1) = 0;
  v130 = 0;
  *(_QWORD *)&v131 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v130 = 3;
  v40 = operator new(0x20u);
  *(_QWORD *)v40 = v40 + 16;
  strcpy((char *)(v40 + 16), "description");
  *(_QWORD *)(v40 + 8) = 11;
  v132 = 0;
  *(_QWORD *)&v133 = 0;
  v131 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v132 = 3;
  v41 = operator new(0x20u);
  strcpy((char *)(v41 + 16), "Max results");
  v42 = (const __m128i *)v59;
  *(_QWORD *)v41 = v41 + 16;
  *(_QWORD *)(v41 + 8) = 11;
  v133 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v136,
    v42,
    2,
    1);
  *((_QWORD *)&v137 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v61,
    (const __m128i *)&v134,
    2,
    1);
  v142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v156,
    (const __m128i *)&v138,
    2,
    1);
  v156[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v147 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v77,
    v57,
    2,
    1);
  v161 = 0;
  v148 = 0;
  *(_QWORD *)&v149 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v43 = operator new(0x20u);
  *(_QWORD *)v43 = v43 + 16;
  strcpy((char *)(v43 + 16), "required");
  *(_QWORD *)(v43 + 8) = 8;
  v91 = 0;
  *(_QWORD *)&v92 = 0;
  v149 = (unsigned __int64)v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v91 = 3;
  v44 = operator new(0x20u);
  strcpy((char *)(v44 + 16), "start_address");
  *(_QWORD *)v44 = v44 + 16;
  *(_QWORD *)(v44 + 8) = 13;
  v93 = 0;
  *(_QWORD *)&v94 = 0;
  *(_QWORD *)v61 = &v94;
  v92 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v93 = 3;
  v45 = operator new(0x20u);
  strcpy((char *)(v45 + 16), "end_address");
  *(_QWORD *)v45 = v45 + 16;
  v46 = *(_QWORD **)v79;
  *(_QWORD *)(v45 + 8) = 11;
  v94 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v46,
    (const __m128i *)&v91,
    2,
    0);
  v47 = _mm_load_si128(&v88);
  v151 = 0;
  v150 = v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  LOBYTE(v89) = 0;
  v163 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  LOBYTE(v42) = v171;
  v48 = (int *)&v164;
  v171 = v89;
  v49 = v172;
  LOBYTE(v89) = (_BYTE)v42;
  v172 = v90;
  v90 = v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v48 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v48 != v158 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v50 = (__int64 *)&v157;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v50 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v50 != &v152 );
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
  v51 = _mm_load_si128(&v53);
  v159 = 0;
  *(_QWORD *)v158 = ida_mcp::tools::symbols::`anonymous namespace'::handle_get_all_names_in_range;
  *(__m128i *)v160 = v51;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v160[0] )
    v160[0](v158, v158, 3);
  if ( v177 && v176 && v174 != (ida_mcp::tools::symbols *)v175 )
    operator delete(v174, v175[0] + 1LL);
  if ( v173 )
  {
    v173 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v168 != v170 )
    operator delete(v168, v170[0] + 1LL);
  if ( v165 != v167 )
    operator delete(v165, v167[0] + 1LL);
  return v178 - __readfsqword(0x28u);
}

