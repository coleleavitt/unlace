unsigned __int64 __fastcall ida_mcp::tools::functions::register_tools(
        ida_mcp::tools::functions *this,
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
  char v15; // si
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
  const __m128i *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v30; // xmm0
  __m128i *v31; // rbp
  __int64 v32; // rax
  __m128i v33; // xmm3
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  const __m128i *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  const __m128i *v43; // rsi
  _QWORD *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __m128i v47; // xmm0
  __m128i *v48; // rbp
  __int64 v49; // rax
  __m128i v50; // xmm4
  __m128 v52; // [rsp+70h] [rbp-3A8h] BYREF
  __int128 *v53; // [rsp+80h] [rbp-398h]
  char v54[8]; // [rsp+88h] [rbp-390h]
  char v55[8]; // [rsp+90h] [rbp-388h]
  ida_mcp::tools::functions *v56; // [rsp+98h] [rbp-380h]
  const __m128i *v57; // [rsp+A0h] [rbp-378h]
  const __m128i *v58; // [rsp+A8h] [rbp-370h]
  char *v59; // [rsp+B0h] [rbp-368h]
  char *v60; // [rsp+B8h] [rbp-360h]
  char *v61; // [rsp+C0h] [rbp-358h]
  char *v62; // [rsp+C8h] [rbp-350h]
  char *v63; // [rsp+D0h] [rbp-348h]
  __int64 *v64; // [rsp+D8h] [rbp-340h]
  char v65[8]; // [rsp+E0h] [rbp-338h]
  char v66[8]; // [rsp+E8h] [rbp-330h]
  char v67[8]; // [rsp+F0h] [rbp-328h]
  void **v68; // [rsp+F8h] [rbp-320h]
  __int64 *v69; // [rsp+100h] [rbp-318h]
  char *v70; // [rsp+108h] [rbp-310h]
  __m128i *v71; // [rsp+110h] [rbp-308h]
  char *v72; // [rsp+118h] [rbp-300h]
  int v73[2]; // [rsp+120h] [rbp-2F8h]
  char v74[8]; // [rsp+128h] [rbp-2F0h]
  __m128i v75; // [rsp+130h] [rbp-2E8h] BYREF
  __int64 v76; // [rsp+140h] [rbp-2D8h] BYREF
  __int64 v77; // [rsp+148h] [rbp-2D0h] BYREF
  char v78; // [rsp+150h] [rbp-2C8h] BYREF
  int v79[4]; // [rsp+158h] [rbp-2C0h]
  __int64 v80; // [rsp+170h] [rbp-2A8h] BYREF
  char v81; // [rsp+178h] [rbp-2A0h] BYREF
  __int64 v82; // [rsp+180h] [rbp-298h]
  __int64 v83; // [rsp+190h] [rbp-288h] BYREF
  int v84[4]; // [rsp+198h] [rbp-280h]
  char v85; // [rsp+1A8h] [rbp-270h]
  int v86[4]; // [rsp+1B0h] [rbp-268h]
  char v87; // [rsp+1C0h] [rbp-258h] BYREF
  __int128 v88; // [rsp+1C8h] [rbp-250h]
  char v89; // [rsp+1D8h] [rbp-240h]
  __int128 v90; // [rsp+1E0h] [rbp-238h]
  char v91; // [rsp+1F0h] [rbp-228h] BYREF
  int v92[4]; // [rsp+1F8h] [rbp-220h]
  char v93; // [rsp+208h] [rbp-210h]
  int v94[4]; // [rsp+210h] [rbp-208h]
  __int64 v95; // [rsp+220h] [rbp-1F8h] BYREF
  char v96[16]; // [rsp+228h] [rbp-1F0h]
  __int64 v97; // [rsp+238h] [rbp-1E0h] BYREF
  __int128 v98; // [rsp+240h] [rbp-1D8h] BYREF
  __int64 v99; // [rsp+250h] [rbp-1C8h] BYREF
  int v100[4]; // [rsp+258h] [rbp-1C0h]
  __int64 v101; // [rsp+268h] [rbp-1B0h] BYREF
  char v102; // [rsp+270h] [rbp-1A8h] BYREF
  __int64 v103; // [rsp+278h] [rbp-1A0h]
  char v104; // [rsp+280h] [rbp-198h] BYREF
  int v105[4]; // [rsp+288h] [rbp-190h]
  __int64 v106; // [rsp+298h] [rbp-180h] BYREF
  char v107; // [rsp+2A0h] [rbp-178h] BYREF
  __int64 v108; // [rsp+2A8h] [rbp-170h]
  char v109; // [rsp+2B0h] [rbp-168h] BYREF
  int v110[4]; // [rsp+2B8h] [rbp-160h]
  char v111[16]; // [rsp+2C8h] [rbp-150h] BYREF
  __int64 v112; // [rsp+2D8h] [rbp-140h]
  __m128i v113; // [rsp+2E0h] [rbp-138h] BYREF
  int v114[4]; // [rsp+2F0h] [rbp-128h] BYREF
  __int64 v115; // [rsp+308h] [rbp-110h]
  int v116[4]; // [rsp+310h] [rbp-108h] BYREF
  __int64 v117; // [rsp+320h] [rbp-F8h]
  char v118; // [rsp+328h] [rbp-F0h] BYREF
  void *v119; // [rsp+330h] [rbp-E8h]
  __int64 v120; // [rsp+338h] [rbp-E0h]
  _QWORD v121[2]; // [rsp+340h] [rbp-D8h] BYREF
  void *v122; // [rsp+350h] [rbp-C8h] BYREF
  __int64 v123; // [rsp+358h] [rbp-C0h]
  _QWORD v124[2]; // [rsp+360h] [rbp-B8h] BYREF
  char v125; // [rsp+370h] [rbp-A8h]
  __int64 v126; // [rsp+378h] [rbp-A0h] BYREF
  char v127; // [rsp+390h] [rbp-88h]
  ida_mcp::tools::functions *v128; // [rsp+398h] [rbp-80h]
  _QWORD v129[2]; // [rsp+3A8h] [rbp-70h] BYREF
  char v130; // [rsp+3B8h] [rbp-60h]
  char v131; // [rsp+3C8h] [rbp-50h]
  unsigned __int64 v132; // [rsp+3D8h] [rbp-40h]

  v56 = this;
  v132 = __readfsqword(0x28u);
  v119 = v121;
  v120 = 0;
  LOBYTE(v121[0]) = 0;
  v122 = v124;
  v123 = 0;
  LOBYTE(v124[0]) = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v131 = 0;
  std::string::_M_replace();
  v68 = &v122;
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v87 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  *(_QWORD *)&v90 = 0;
  v88 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v89 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v59 = &v87;
  v90 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v113,
    (const __m128i *)&v87);
  *(_QWORD *)v114 = 0;
  v109 = 0;
  *(_QWORD *)v110 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v109 = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 8) = 10;
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  v104 = 0;
  *(_QWORD *)v105 = 0;
  *(_OWORD *)v110 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v104 = 3;
  v5 = operator new(0x20u);
  *(_QWORD *)v5 = v5 + 16;
  strcpy((char *)(v5 + 16), "cursor");
  *(_QWORD *)(v5 + 8) = 6;
  v91 = 0;
  *(_QWORD *)v92 = 0;
  *(_OWORD *)v105 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v91 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  v93 = 0;
  *(_QWORD *)v94 = 0;
  *(_OWORD *)v92 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v93 = 3;
  v7 = operator new(0x20u);
  *(_QWORD *)v7 = v7 + 16;
  strcpy((char *)(v7 + 16), "string");
  *(_QWORD *)(v7 + 8) = 6;
  v60 = &v91;
  *(_OWORD *)v94 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v99,
    (const __m128i *)&v91);
  *(_QWORD *)&v100[2] = 0;
  LOBYTE(v95) = 0;
  *(_QWORD *)v96 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v95) = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "description");
  *(_QWORD *)(v8 + 8) = 11;
  LOBYTE(v97) = 0;
  *(_QWORD *)&v98 = 0;
  v53 = &v98;
  *(_OWORD *)v96 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v97) = 3;
  v9 = (__int64 *)operator new(0x20u);
  v76 = 17;
  *v9 = (__int64)(v9 + 2);
  *(_QWORD *)v54 = &v76;
  v10 = std::string::_M_create();
  v11 = v76;
  *v9 = v10;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E20B0);
  v52 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  v9[2] = v11;
  *(__m128i *)v10 = si128;
  *(_BYTE *)(v10 + 16) = 114;
  v13 = v76;
  v14 = *v9;
  v9[1] = v76;
  *(_BYTE *)(v14 + v13) = 0;
  *(_QWORD *)v65 = &v101;
  v98 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v101,
    (const __m128i *)&v95);
  v103 = 0;
  *(_QWORD *)v66 = &v106;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v106,
    (const __m128i *)&v99);
  v108 = 0;
  v58 = (const __m128i *)&v104;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v83,
    (const __m128i *)&v104);
  *(_QWORD *)&v84[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v111,
    (const __m128i *)&v83,
    1);
  v112 = 0;
  v57 = (const __m128i *)&v109;
  *(_QWORD *)v67 = &v114[2];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v114[2],
    (const __m128i *)&v109);
  v115 = 0;
  LOBYTE(v76) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v54,
    &v113);
  v15 = v125;
  v16 = v77;
  v125 = v76;
  LOBYTE(v76) = v15;
  v77 = v126;
  v126 = v16;
  v64 = &v77;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v63 = &v111[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v62 = &v107;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v61 = &v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v17 = _mm_load_si128((const __m128i *)&v52);
  v113.m128i_i64[1] = 0;
  v113.m128i_i64[0] = (__int64)ida_mcp::tools::functions::`anonymous namespace'::list_functions;
  *(__m128i *)v114 = v17;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)v114 )
    (*(void (__fastcall **)(__m128i *, __m128i *, __int64))v114)(&v113, &v113, 3);
  if ( v131 && v130 && v128 != (ida_mcp::tools::functions *)v129 )
    operator delete(v128, v129[0] + 1LL);
  if ( v127 )
  {
    v127 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v69 = &v126;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v122 != v124 )
    operator delete(v122, v124[0] + 1LL);
  if ( v119 != v121 )
    operator delete(v119, v121[0] + 1LL);
  v119 = v121;
  v120 = 0;
  LOBYTE(v121[0]) = 0;
  v122 = v124;
  v123 = 0;
  LOBYTE(v124[0]) = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v131 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  LOBYTE(v83) = 0;
  *(_QWORD *)v84 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v83) = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "type");
  *(_QWORD *)(v18 + 8) = 4;
  v85 = 0;
  *(_QWORD *)v86 = 0;
  *(_OWORD *)v84 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v85 = 3;
  v19 = operator new(0x20u);
  *(_QWORD *)v19 = v19 + 16;
  strcpy((char *)(v19 + 16), "object");
  *(_QWORD *)(v19 + 8) = 6;
  *(_OWORD *)v86 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v113,
    (const __m128i *)&v83);
  *(_QWORD *)v114 = 0;
  v104 = 0;
  *(_QWORD *)v105 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v104 = 3;
  v20 = operator new(0x20u);
  *(_QWORD *)v20 = v20 + 16;
  strcpy((char *)(v20 + 16), "properties");
  *(_QWORD *)(v20 + 8) = 10;
  LOBYTE(v99) = 0;
  *(_QWORD *)v100 = 0;
  *(_OWORD *)v105 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v99) = 3;
  v21 = operator new(0x20u);
  strcpy((char *)(v21 + 16), "address");
  *(_QWORD *)v21 = v21 + 16;
  *(_QWORD *)(v21 + 8) = 7;
  v87 = 0;
  *(_QWORD *)&v88 = 0;
  *(_OWORD *)v100 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v87 = 3;
  v22 = operator new(0x20u);
  strcpy((char *)(v22 + 16), "type");
  *(_QWORD *)v22 = v22 + 16;
  *(_QWORD *)(v22 + 8) = 4;
  v89 = 0;
  *(_QWORD *)&v90 = 0;
  v88 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v89 = 3;
  v23 = operator new(0x20u);
  v24 = (const __m128i *)v59;
  *(_QWORD *)v23 = v23 + 16;
  strcpy((char *)(v23 + 16), "string");
  *(_QWORD *)(v23 + 8) = 6;
  v90 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v95,
    v24);
  *(_QWORD *)&v96[8] = 0;
  v91 = 0;
  *(_QWORD *)v92 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v91 = 3;
  v25 = operator new(0x20u);
  *(_QWORD *)v25 = v25 + 16;
  strcpy((char *)(v25 + 16), "description");
  *(_QWORD *)(v25 + 8) = 11;
  v93 = 0;
  *(_QWORD *)v94 = 0;
  *(_OWORD *)v92 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v93 = 3;
  v26 = operator new(0x20u);
  *(_QWORD *)v26 = v26 + 16;
  v27 = (const __m128i *)v60;
  strcpy((char *)(v26 + 16), "Hex address");
  *(_QWORD *)(v26 + 8) = 11;
  *(_QWORD *)v73 = &v97;
  *(_OWORD *)v94 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v97,
    v27);
  *((_QWORD *)&v98 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v65,
    (const __m128i *)&v95);
  v103 = 0;
  *(_QWORD *)v55 = &v80;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v80,
    (const __m128i *)&v99);
  v82 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v66,
    *(const __m128i **)v55,
    1);
  v108 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v67,
    v58);
  v115 = 0;
  v109 = 0;
  *(_QWORD *)v110 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v109 = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)v28 = v28 + 16;
  strcpy((char *)(v28 + 16), "required");
  *(_QWORD *)(v28 + 8) = 8;
  v78 = 0;
  *(_QWORD *)v79 = 0;
  *(_OWORD *)v110 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v78 = 3;
  v29 = operator new(0x20u);
  *(_QWORD *)v29 = v29 + 16;
  strcpy((char *)(v29 + 16), "address");
  *(_QWORD *)(v29 + 8) = 7;
  v72 = &v78;
  v71 = &v75;
  *(_OWORD *)v79 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v30 = _mm_load_si128(&v75);
  *(_QWORD *)v74 = v116;
  v112 = 0;
  *(__m128i *)v111 = v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v116,
    v57);
  v117 = 0;
  LOBYTE(v76) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v54,
    &v113,
    3);
  LOBYTE(v27) = v125;
  v31 = (__m128i *)&v118;
  v125 = v76;
  v32 = v126;
  LOBYTE(v76) = (_BYTE)v27;
  v126 = v77;
  v77 = v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v31 = (__m128i *)((char *)v31 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v31 != &v113 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v70 = &v81;
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
  v33 = _mm_load_si128((const __m128i *)&v52);
  v113.m128i_i64[1] = 0;
  v113.m128i_i64[0] = (__int64)ida_mcp::tools::functions::`anonymous namespace'::get_function_attributes;
  *(__m128i *)v114 = v33;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)v114 )
    (*(void (__fastcall **)(__m128i *, __m128i *, __int64))v114)(&v113, &v113, 3);
  if ( v131 && v130 && v128 != (ida_mcp::tools::functions *)v129 )
    operator delete(v128, v129[0] + 1LL);
  if ( v127 )
  {
    v127 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v122 != v124 )
    operator delete(v122, v124[0] + 1LL);
  if ( v119 != v121 )
    operator delete(v119, v121[0] + 1LL);
  v119 = v121;
  v120 = 0;
  LOBYTE(v121[0]) = 0;
  v122 = v124;
  v123 = 0;
  LOBYTE(v124[0]) = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v131 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  LOBYTE(v83) = 0;
  *(_QWORD *)v84 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v83) = 3;
  v34 = operator new(0x20u);
  *(_QWORD *)v34 = v34 + 16;
  strcpy((char *)(v34 + 16), "type");
  *(_QWORD *)(v34 + 8) = 4;
  v85 = 0;
  *(_QWORD *)v86 = 0;
  *(_OWORD *)v84 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v85 = 3;
  v35 = operator new(0x20u);
  *(_QWORD *)v35 = v35 + 16;
  strcpy((char *)(v35 + 16), "object");
  *(_QWORD *)(v35 + 8) = 6;
  *(_OWORD *)v86 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v113,
    (const __m128i *)&v83);
  *(_QWORD *)v114 = 0;
  v104 = 0;
  *(_QWORD *)v105 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v104 = 3;
  v36 = operator new(0x20u);
  *(_QWORD *)v36 = v36 + 16;
  strcpy((char *)(v36 + 16), "properties");
  *(_QWORD *)(v36 + 8) = 10;
  LOBYTE(v99) = 0;
  *(_QWORD *)v100 = 0;
  *(_OWORD *)v105 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v99) = 3;
  v37 = operator new(0x20u);
  strcpy((char *)(v37 + 16), "address");
  *(_QWORD *)v37 = v37 + 16;
  *(_QWORD *)(v37 + 8) = 7;
  v87 = 0;
  *(_QWORD *)&v88 = 0;
  *(_OWORD *)v100 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v87 = 3;
  v38 = operator new(0x20u);
  strcpy((char *)(v38 + 16), "type");
  *(_QWORD *)v38 = v38 + 16;
  *(_QWORD *)(v38 + 8) = 4;
  v89 = 0;
  *(_QWORD *)&v90 = 0;
  v88 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v89 = 3;
  v39 = operator new(0x20u);
  v40 = (const __m128i *)v59;
  *(_QWORD *)v39 = v39 + 16;
  strcpy((char *)(v39 + 16), "string");
  *(_QWORD *)(v39 + 8) = 6;
  v90 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v95,
    v40);
  *(_QWORD *)&v96[8] = 0;
  v91 = 0;
  *(_QWORD *)v92 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v91 = 3;
  v41 = operator new(0x20u);
  *(_QWORD *)v41 = v41 + 16;
  strcpy((char *)(v41 + 16), "description");
  *(_QWORD *)(v41 + 8) = 11;
  v93 = 0;
  *(_QWORD *)v94 = 0;
  *(_OWORD *)v92 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v93 = 3;
  v42 = operator new(0x20u);
  v43 = (const __m128i *)v60;
  *(_QWORD *)v42 = v42 + 16;
  v44 = *(_QWORD **)v73;
  strcpy((char *)(v42 + 16), "Hex address");
  *(_QWORD *)(v42 + 8) = 11;
  *(_OWORD *)v94 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v44,
    v43);
  *((_QWORD *)&v98 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v65,
    (const __m128i *)&v95,
    2);
  v103 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v55,
    (const __m128i *)&v99,
    2);
  v82 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v66,
    *(const __m128i **)v55,
    1);
  v108 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v67,
    v58,
    2);
  v115 = 0;
  v109 = 0;
  *(_QWORD *)v110 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v109 = 3;
  v45 = operator new(0x20u);
  *(_QWORD *)v45 = v45 + 16;
  strcpy((char *)(v45 + 16), "required");
  *(_QWORD *)(v45 + 8) = 8;
  v78 = 0;
  *(_QWORD *)v79 = 0;
  *(_OWORD *)v110 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v78 = 3;
  v46 = operator new(0x20u);
  *(_QWORD *)v46 = v46 + 16;
  strcpy((char *)(v46 + 16), "address");
  *(_QWORD *)(v46 + 8) = 7;
  *(_OWORD *)v79 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v47 = _mm_load_si128(&v75);
  v112 = 0;
  *(__m128i *)v111 = v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v74,
    v57,
    2);
  v117 = 0;
  LOBYTE(v76) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v54,
    &v113,
    3);
  LOBYTE(v43) = v125;
  v48 = (__m128i *)&v118;
  v125 = v76;
  v49 = v126;
  LOBYTE(v76) = (_BYTE)v43;
  v126 = v77;
  v77 = v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v48 = (__m128i *)((char *)v48 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v48 != &v113 );
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
  v50 = _mm_load_si128((const __m128i *)&v52);
  v113.m128i_i64[1] = 0;
  v113.m128i_i64[0] = (__int64)ida_mcp::tools::functions::`anonymous namespace'::get_function_signature;
  *(__m128i *)v114 = v50;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)v114 )
    (*(void (__fastcall **)(__m128i *, __m128i *, __int64))v114)(&v113, &v113, 3);
  if ( v131 && v130 && v128 != (ida_mcp::tools::functions *)v129 )
    operator delete(v128, v129[0] + 1LL);
  if ( v127 )
  {
    v127 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v122 != v124 )
    operator delete(v122, v124[0] + 1LL);
  if ( v119 != v121 )
    operator delete(v119, v121[0] + 1LL);
  return v132 - __readfsqword(0x28u);
}

