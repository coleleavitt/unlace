unsigned __int64 __fastcall ida_mcp::tools::indirect_branches::register_tools(
        ida_mcp::tools::indirect_branches *this,
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
  __m128i *v15; // r13
  __int64 v16; // rdx
  __m128i v17; // xmm2
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  const __m128i *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  __m128i si128; // xmm0
  const __m128i *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __m128i v39; // xmm0
  __m128i *v40; // r15
  __int64 v41; // rax
  __m128i v42; // xmm3
  __m128i v44; // [rsp+90h] [rbp-448h] BYREF
  char v45[8]; // [rsp+A0h] [rbp-438h]
  ida_mcp::tools::indirect_branches *v46; // [rsp+A8h] [rbp-430h]
  const __m128i *v47; // [rsp+B0h] [rbp-428h]
  const __m128i *v48; // [rsp+B8h] [rbp-420h]
  const __m128i *v49; // [rsp+C0h] [rbp-418h]
  char *v50; // [rsp+C8h] [rbp-410h]
  void **v51; // [rsp+D0h] [rbp-408h]
  char *v52; // [rsp+D8h] [rbp-400h]
  __int128 *v53; // [rsp+E0h] [rbp-3F8h]
  __int128 *v54; // [rsp+E8h] [rbp-3F0h]
  __int128 *v55; // [rsp+F0h] [rbp-3E8h]
  char *v56; // [rsp+F8h] [rbp-3E0h]
  char *v57; // [rsp+100h] [rbp-3D8h]
  char *v58; // [rsp+108h] [rbp-3D0h]
  __int8 *v59; // [rsp+110h] [rbp-3C8h]
  char v60[8]; // [rsp+118h] [rbp-3C0h]
  char v61[8]; // [rsp+120h] [rbp-3B8h]
  char v62[8]; // [rsp+128h] [rbp-3B0h]
  __int64 *v63; // [rsp+130h] [rbp-3A8h]
  __m128i *v64; // [rsp+138h] [rbp-3A0h]
  __int64 *v65; // [rsp+140h] [rbp-398h]
  char *v66; // [rsp+148h] [rbp-390h]
  __m128i v67; // [rsp+150h] [rbp-388h] BYREF
  char v68[8]; // [rsp+160h] [rbp-378h] BYREF
  __int64 v69; // [rsp+168h] [rbp-370h] BYREF
  __m128i v70; // [rsp+170h] [rbp-368h] BYREF
  __int64 v71; // [rsp+180h] [rbp-358h]
  char v72; // [rsp+190h] [rbp-348h]
  __int128 v73; // [rsp+198h] [rbp-340h]
  char v74; // [rsp+1A8h] [rbp-330h]
  __int128 v75; // [rsp+1B0h] [rbp-328h]
  char v76; // [rsp+1C0h] [rbp-318h] BYREF
  __int128 v77; // [rsp+1C8h] [rbp-310h] BYREF
  char v78; // [rsp+1D8h] [rbp-300h]
  __int128 v79; // [rsp+1E0h] [rbp-2F8h] BYREF
  char v80; // [rsp+1F0h] [rbp-2E8h] BYREF
  int v81[4]; // [rsp+1F8h] [rbp-2E0h]
  char v82; // [rsp+208h] [rbp-2D0h]
  __int128 v83; // [rsp+210h] [rbp-2C8h] BYREF
  __int64 v84; // [rsp+220h] [rbp-2B8h] BYREF
  __int128 v85; // [rsp+228h] [rbp-2B0h]
  char v86; // [rsp+238h] [rbp-2A0h]
  __int128 v87; // [rsp+240h] [rbp-298h] BYREF
  __int64 v88; // [rsp+250h] [rbp-288h] BYREF
  int v89[4]; // [rsp+258h] [rbp-280h]
  __int64 v90; // [rsp+268h] [rbp-270h] BYREF
  int v91[4]; // [rsp+270h] [rbp-268h]
  char v92; // [rsp+280h] [rbp-258h] BYREF
  int v93[4]; // [rsp+288h] [rbp-250h]
  __int64 v94; // [rsp+298h] [rbp-240h] BYREF
  char v95[16]; // [rsp+2A0h] [rbp-238h]
  char v96; // [rsp+2B0h] [rbp-228h] BYREF
  int v97[4]; // [rsp+2B8h] [rbp-220h]
  char v98; // [rsp+2C8h] [rbp-210h]
  int v99[4]; // [rsp+2D0h] [rbp-208h]
  __int64 v100; // [rsp+2E0h] [rbp-1F8h] BYREF
  __int128 v101; // [rsp+2E8h] [rbp-1F0h]
  __int64 v102; // [rsp+2F8h] [rbp-1E0h] BYREF
  char v103; // [rsp+300h] [rbp-1D8h] BYREF
  __int64 v104; // [rsp+308h] [rbp-1D0h]
  __int64 v105; // [rsp+310h] [rbp-1C8h] BYREF
  __int128 v106; // [rsp+318h] [rbp-1C0h]
  __int64 v107; // [rsp+328h] [rbp-1B0h] BYREF
  char v108; // [rsp+330h] [rbp-1A8h] BYREF
  __int64 v109; // [rsp+338h] [rbp-1A0h]
  char v110; // [rsp+340h] [rbp-198h] BYREF
  int v111[4]; // [rsp+348h] [rbp-190h]
  __int64 v112; // [rsp+358h] [rbp-180h] BYREF
  char v113; // [rsp+360h] [rbp-178h] BYREF
  __int64 v114; // [rsp+368h] [rbp-170h]
  char v115; // [rsp+370h] [rbp-168h] BYREF
  int v116[4]; // [rsp+378h] [rbp-160h]
  __m128i v117; // [rsp+388h] [rbp-150h] BYREF
  __int64 v118; // [rsp+398h] [rbp-140h]
  __m128i v119; // [rsp+3A0h] [rbp-138h] BYREF
  void (__fastcall *v120[3])(__m128i *, __m128i *, __int64); // [rsp+3B0h] [rbp-128h] BYREF
  __int64 v121; // [rsp+3C8h] [rbp-110h]
  char v122[16]; // [rsp+3D0h] [rbp-108h] BYREF
  __int64 v123; // [rsp+3E0h] [rbp-F8h]
  char v124; // [rsp+3E8h] [rbp-F0h] BYREF
  void *v125; // [rsp+3F0h] [rbp-E8h]
  __int64 v126; // [rsp+3F8h] [rbp-E0h]
  _QWORD v127[2]; // [rsp+400h] [rbp-D8h] BYREF
  void *v128; // [rsp+410h] [rbp-C8h] BYREF
  __int64 v129; // [rsp+418h] [rbp-C0h]
  _QWORD v130[2]; // [rsp+420h] [rbp-B8h] BYREF
  char v131; // [rsp+430h] [rbp-A8h]
  __int64 v132; // [rsp+438h] [rbp-A0h] BYREF
  char v133; // [rsp+450h] [rbp-88h]
  ida_mcp::tools::indirect_branches *v134; // [rsp+458h] [rbp-80h]
  _QWORD v135[2]; // [rsp+468h] [rbp-70h] BYREF
  char v136; // [rsp+478h] [rbp-60h]
  char v137; // [rsp+488h] [rbp-50h]
  unsigned __int64 v138; // [rsp+498h] [rbp-40h]

  v46 = this;
  v138 = __readfsqword(0x28u);
  v125 = v127;
  v126 = 0;
  LOBYTE(v127[0]) = 0;
  v128 = v130;
  v129 = 0;
  LOBYTE(v130[0]) = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v137 = 0;
  std::string::_M_replace();
  v51 = &v128;
  std::string::_M_replace();
  *(_QWORD *)v89 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v88) = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  LOBYTE(v90) = 0;
  *(_QWORD *)v91 = 0;
  *(_OWORD *)v89 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v90) = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  *(_OWORD *)v91 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v119,
    (const __m128i *)&v88,
    2);
  v120[0] = nullptr;
  v110 = 0;
  *(_QWORD *)v111 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)(v4 + 8) = 10;
  LOBYTE(v105) = 0;
  *(_QWORD *)&v106 = 0;
  *(_OWORD *)v111 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v105) = 3;
  v5 = operator new(0x20u);
  strcpy((char *)(v5 + 16), "address");
  *(_QWORD *)v5 = v5 + 16;
  *(_QWORD *)(v5 + 8) = 7;
  v92 = 0;
  *(_QWORD *)v93 = 0;
  v106 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v92 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  LOBYTE(v94) = 0;
  *(_QWORD *)v95 = 0;
  *(_OWORD *)v93 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v94) = 3;
  v7 = operator new(0x20u);
  strcpy((char *)(v7 + 16), "string");
  *(_QWORD *)v7 = v7 + 16;
  *(_QWORD *)(v7 + 8) = 6;
  v49 = (const __m128i *)&v92;
  *(_OWORD *)v95 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v100,
    (const __m128i *)&v92,
    2);
  *((_QWORD *)&v101 + 1) = 0;
  v96 = 0;
  *(_QWORD *)v97 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v96 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "description");
  *(_QWORD *)(v8 + 8) = 11;
  v98 = 0;
  *(_QWORD *)v99 = 0;
  *(_OWORD *)v97 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v98 = 3;
  v9 = operator new(0x20u);
  *(_QWORD *)v9 = v9 + 16;
  strcpy((char *)(v9 + 16), "Hex address");
  *(_QWORD *)(v9 + 8) = 11;
  v50 = &v96;
  *(_OWORD *)v99 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v102,
    (const __m128i *)&v96,
    2);
  v104 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v107,
    (const __m128i *)&v100,
    2);
  v109 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v84,
    (const __m128i *)&v105,
    2);
  *((_QWORD *)&v85 + 1) = 0;
  *(_QWORD *)v60 = &v112;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v112,
    (const __m128i *)&v84,
    1);
  v114 = 0;
  v47 = (const __m128i *)&v110;
  *(_QWORD *)v61 = &v120[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v120[1],
    (const __m128i *)&v110,
    2);
  v121 = 0;
  v115 = 0;
  *(_QWORD *)v116 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v115 = 3;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v10 + 16;
  strcpy((char *)(v10 + 16), "required");
  *(_QWORD *)(v10 + 8) = 8;
  *(_QWORD *)v81 = 0;
  *(_OWORD *)v116 = (unsigned __int64)v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v80 = 3;
  v11 = operator new(0x20u);
  *(_QWORD *)v11 = v11 + 16;
  strcpy((char *)(v11 + 16), "address");
  v12 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v11 + 8) = 7;
  v52 = &v80;
  v64 = &v67;
  v44 = (__m128i)v12;
  *(_OWORD *)v81 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v13 = _mm_load_si128(&v67);
  v118 = 0;
  v48 = (const __m128i *)&v115;
  *(_QWORD *)v62 = v122;
  v117 = v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v122,
    (const __m128i *)&v115,
    2);
  v123 = 0;
  v68[0] = 0;
  *(_QWORD *)v45 = v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v68,
    &v119,
    3);
  v14 = v131;
  v15 = (__m128i *)&v124;
  v16 = v69;
  v131 = v68[0];
  v68[0] = v14;
  v69 = v132;
  v132 = v16;
  v65 = &v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v15 = (__m128i *)((char *)v15 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v15 != &v119 );
  v59 = &v117.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v58 = &v113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v57 = &v108;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v56 = &v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v17 = _mm_load_si128(&v44);
  v119.m128i_i64[1] = 0;
  v119.m128i_i64[0] = (__int64)ida_mcp::tools::indirect_branches::`anonymous namespace'::handle_analyze_indirect_branch;
  *(__m128i *)v120 = v17;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v120[0] )
    v120[0](&v119, &v119, 3);
  if ( v137 && v136 && v134 != (ida_mcp::tools::indirect_branches *)v135 )
    operator delete(v134, v135[0] + 1LL);
  if ( v133 )
  {
    v133 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v63 = &v132;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v128 != v130 )
    operator delete(v128, v130[0] + 1LL);
  if ( v125 != v127 )
    operator delete(v125, v127[0] + 1LL);
  v125 = v127;
  v126 = 0;
  LOBYTE(v127[0]) = 0;
  v128 = v130;
  v129 = 0;
  LOBYTE(v130[0]) = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v137 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v76 = 0;
  v55 = &v77;
  *(_QWORD *)&v77 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v76 = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "type");
  *(_QWORD *)(v18 + 8) = 4;
  v78 = 0;
  *(_QWORD *)&v79 = 0;
  v51 = (void **)&v79;
  v77 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v78 = 3;
  v19 = operator new(0x20u);
  *(_QWORD *)v19 = v19 + 16;
  strcpy((char *)(v19 + 16), "object");
  *(_QWORD *)(v19 + 8) = 6;
  v66 = &v76;
  v79 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v119,
    (const __m128i *)&v76,
    2);
  v120[0] = nullptr;
  v110 = 0;
  *(_QWORD *)v111 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = 3;
  v20 = operator new(0x20u);
  *(_QWORD *)v20 = v20 + 16;
  strcpy((char *)(v20 + 16), "properties");
  *(_QWORD *)(v20 + 8) = 10;
  v92 = 0;
  *(_QWORD *)v93 = 0;
  *(_OWORD *)v111 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v92 = 3;
  v21 = operator new(0x20u);
  *(_QWORD *)v21 = v21 + 16;
  strcpy((char *)(v21 + 16), "address");
  *(_QWORD *)(v21 + 8) = 7;
  v80 = 0;
  *(_QWORD *)v81 = 0;
  *(_OWORD *)v93 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v80 = 3;
  v22 = operator new(0x20u);
  *(_QWORD *)v22 = v22 + 16;
  strcpy((char *)(v22 + 16), "type");
  *(_QWORD *)(v22 + 8) = 4;
  v82 = 0;
  *(_QWORD *)&v83 = 0;
  v53 = &v83;
  *(_OWORD *)v81 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v82 = 3;
  v23 = operator new(0x20u);
  strcpy((char *)(v23 + 16), "string");
  v24 = (const __m128i *)v52;
  *(_QWORD *)v23 = v23 + 16;
  *(_QWORD *)(v23 + 8) = 6;
  v83 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v88,
    v24,
    2);
  *(_QWORD *)&v89[2] = 0;
  LOBYTE(v84) = 0;
  *(_QWORD *)&v85 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v84) = 3;
  v25 = operator new(0x20u);
  *(_QWORD *)v25 = v25 + 16;
  strcpy((char *)(v25 + 16), "description");
  *(_QWORD *)(v25 + 8) = 11;
  v86 = 0;
  *(_QWORD *)&v87 = 0;
  v54 = &v87;
  v85 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v86 = 3;
  v26 = operator new(0x20u);
  *(_QWORD *)v26 = v26 + 16;
  strcpy((char *)(v26 + 16), "Hex address");
  *(_QWORD *)(v26 + 8) = 11;
  v87 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v90,
    (const __m128i *)&v84,
    2);
  *(_QWORD *)&v91[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v94,
    (const __m128i *)&v88,
    2);
  *(_QWORD *)&v95[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v105,
    v49,
    2);
  *((_QWORD *)&v106 + 1) = 0;
  LOBYTE(v100) = 0;
  *(_QWORD *)&v101 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v100) = 3;
  v27 = operator new(0x20u);
  *(_QWORD *)v27 = v27 + 16;
  strcpy((char *)(v27 + 16), "register");
  *(_QWORD *)(v27 + 8) = 8;
  v96 = 0;
  *(_QWORD *)v97 = 0;
  v101 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v96 = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)v28 = v28 + 16;
  strcpy((char *)(v28 + 16), "description");
  *(_QWORD *)(v28 + 8) = 11;
  v98 = 0;
  *(_QWORD *)v99 = 0;
  *(_OWORD *)v97 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v98 = 3;
  v29 = (__int64 *)operator new(0x20u);
  *v29 = (__int64)(v29 + 2);
  *(_QWORD *)v68 = 43;
  v30 = std::string::_M_create();
  v31 = *(_QWORD *)v68;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2410);
  *v29 = v30;
  v33 = (const __m128i *)v50;
  v29[2] = v31;
  *(__m128i *)v30 = si128;
  *(__m128i *)(v30 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E2420);
  *(__m128i *)(v30 + 27) = _mm_load_si128((const __m128i *)&xmmword_3E2430);
  v34 = *v29;
  v35 = *(_QWORD *)v68;
  v29[1] = *(_QWORD *)v68;
  *(_BYTE *)(v34 + v35) = 0;
  *(_OWORD *)v99 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v70,
    v33,
    2);
  v71 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v102,
    &v70,
    1);
  v104 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v107,
    (const __m128i *)&v100,
    2);
  v109 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v60,
    (const __m128i *)&v105,
    2);
  v114 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v61,
    v47,
    2);
  v121 = 0;
  v115 = 0;
  *(_QWORD *)v116 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v115 = 3;
  v36 = operator new(0x20u);
  *(_QWORD *)v36 = v36 + 16;
  strcpy((char *)(v36 + 16), "required");
  *(_QWORD *)(v36 + 8) = 8;
  v72 = 0;
  *(_QWORD *)&v73 = 0;
  *(_OWORD *)v116 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v72 = 3;
  v37 = operator new(0x20u);
  strcpy((char *)(v37 + 16), "address");
  *(_QWORD *)v37 = v37 + 16;
  *(_QWORD *)(v37 + 8) = 7;
  v74 = 0;
  *(_QWORD *)&v75 = 0;
  v73 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v74 = 3;
  v38 = operator new(0x20u);
  *(_QWORD *)v38 = v38 + 16;
  strcpy((char *)(v38 + 16), "register");
  *(_QWORD *)(v38 + 8) = 8;
  v75 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v39 = _mm_load_si128(&v67);
  v118 = 0;
  v117 = v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v62,
    v48,
    2);
  v123 = 0;
  v68[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v45,
    &v119,
    3);
  LOBYTE(v33) = v131;
  v40 = (__m128i *)&v124;
  v131 = v68[0];
  v41 = v132;
  v68[0] = (char)v33;
  v132 = v69;
  v69 = v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v40 = (__m128i *)((char *)v40 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v40 != &v119 );
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
  v42 = _mm_load_si128(&v44);
  v119.m128i_i64[1] = 0;
  v119.m128i_i64[0] = (__int64)&ida_mcp::tools::indirect_branches::`anonymous namespace'::handle_trace_register_usage;
  *(__m128i *)v120 = v42;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v120[0] )
    v120[0](&v119, &v119, 3);
  if ( v137 && v136 && v134 != (ida_mcp::tools::indirect_branches *)v135 )
    operator delete(v134, v135[0] + 1LL);
  if ( v133 )
  {
    v133 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v128 != v130 )
    operator delete(v128, v130[0] + 1LL);
  if ( v125 != v127 )
    operator delete(v125, v127[0] + 1LL);
  return v138 - __readfsqword(0x28u);
}

