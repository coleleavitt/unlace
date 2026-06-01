unsigned __int64 __fastcall ida_mcp::tools::metadata_backup::register_tools(
        ida_mcp::tools::metadata_backup *this,
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
  __m128 v17; // xmm1
  __m128i v18; // xmm0
  char v19; // si
  __m128i *v20; // rbp
  __int64 v21; // rdx
  __m128i v22; // xmm2
  __int64 *v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  const __m128i *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  const __m128i *v34; // rsi
  __int64 v35; // rax
  __int64 *v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rdx
  __m128i v39; // xmm0
  const __m128i *v40; // rsi
  _QWORD *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __m128i v46; // xmm0
  __m128i *v47; // rbp
  __int64 v48; // rax
  __m128i v49; // xmm3
  __int64 v50; // rax
  __int64 v51; // rax
  const __m128i *v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  const __m128i *v57; // rsi
  __int64 v58; // rax
  __int64 *v59; // rbp
  __int64 v60; // rax
  __int64 v61; // rdx
  __m128i v62; // xmm0
  const __m128i *v63; // rsi
  _QWORD *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rax
  __m128i v69; // xmm0
  __m128i *v70; // rbp
  __int64 v71; // rax
  __m128i v72; // xmm4
  int v74; // [rsp+0h] [rbp-418h]
  int v75[4]; // [rsp+60h] [rbp-3B8h] BYREF
  char v76[8]; // [rsp+70h] [rbp-3A8h]
  ida_mcp::tools::metadata_backup *v77; // [rsp+78h] [rbp-3A0h]
  const __m128i *v78; // [rsp+80h] [rbp-398h]
  const __m128i *v79; // [rsp+88h] [rbp-390h]
  const __m128i *v80; // [rsp+90h] [rbp-388h]
  char *v81; // [rsp+98h] [rbp-380h]
  char *v82; // [rsp+A0h] [rbp-378h]
  char *v83; // [rsp+A8h] [rbp-370h]
  __int64 *v84; // [rsp+B0h] [rbp-368h]
  __int64 *v85; // [rsp+B8h] [rbp-360h]
  char *v86; // [rsp+C0h] [rbp-358h]
  char *v87; // [rsp+C8h] [rbp-350h]
  char *v88; // [rsp+D0h] [rbp-348h]
  __int8 *v89; // [rsp+D8h] [rbp-340h]
  char v90[8]; // [rsp+E0h] [rbp-338h]
  void **v91; // [rsp+E8h] [rbp-330h]
  __int64 *v92; // [rsp+F0h] [rbp-328h]
  __m128i *v93; // [rsp+F8h] [rbp-320h]
  __int64 *v94; // [rsp+100h] [rbp-318h]
  char *v95; // [rsp+108h] [rbp-310h]
  char v96[8]; // [rsp+110h] [rbp-308h]
  char v97[8]; // [rsp+118h] [rbp-300h]
  char v98[8]; // [rsp+120h] [rbp-2F8h]
  char v99[8]; // [rsp+128h] [rbp-2F0h]
  __m128i v100; // [rsp+130h] [rbp-2E8h] BYREF
  __int64 v101; // [rsp+140h] [rbp-2D8h] BYREF
  __int64 v102; // [rsp+148h] [rbp-2D0h] BYREF
  char v103; // [rsp+150h] [rbp-2C8h] BYREF
  int v104[4]; // [rsp+158h] [rbp-2C0h] BYREF
  __m128i v105; // [rsp+170h] [rbp-2A8h] BYREF
  __int64 v106; // [rsp+180h] [rbp-298h]
  char v107; // [rsp+190h] [rbp-288h] BYREF
  int v108[4]; // [rsp+198h] [rbp-280h] BYREF
  char v109; // [rsp+1A8h] [rbp-270h]
  int v110[4]; // [rsp+1B0h] [rbp-268h]
  char v111; // [rsp+1C0h] [rbp-258h] BYREF
  int v112[4]; // [rsp+1C8h] [rbp-250h]
  char v113; // [rsp+1D8h] [rbp-240h]
  __int64 v114[2]; // [rsp+1E0h] [rbp-238h]
  char v115; // [rsp+1F0h] [rbp-228h] BYREF
  int v116[4]; // [rsp+1F8h] [rbp-220h]
  char v117; // [rsp+208h] [rbp-210h]
  int v118[4]; // [rsp+210h] [rbp-208h]
  __m128i v119; // [rsp+220h] [rbp-1F8h] BYREF
  __int64 v120; // [rsp+230h] [rbp-1E8h]
  __int64 v121; // [rsp+238h] [rbp-1E0h] BYREF
  char v122; // [rsp+240h] [rbp-1D8h] BYREF
  __int64 v123; // [rsp+248h] [rbp-1D0h]
  char v124; // [rsp+250h] [rbp-1C8h] BYREF
  int v125[4]; // [rsp+258h] [rbp-1C0h]
  __int64 v126; // [rsp+268h] [rbp-1B0h] BYREF
  char v127; // [rsp+270h] [rbp-1A8h] BYREF
  __int64 v128; // [rsp+278h] [rbp-1A0h]
  char v129; // [rsp+280h] [rbp-198h] BYREF
  int v130[4]; // [rsp+288h] [rbp-190h]
  __int64 v131; // [rsp+298h] [rbp-180h] BYREF
  char v132; // [rsp+2A0h] [rbp-178h] BYREF
  __int64 v133; // [rsp+2A8h] [rbp-170h]
  char v134; // [rsp+2B0h] [rbp-168h] BYREF
  int v135[4]; // [rsp+2B8h] [rbp-160h]
  __m128i v136; // [rsp+2C8h] [rbp-150h] BYREF
  __int64 v137; // [rsp+2D8h] [rbp-140h]
  __m128i v138; // [rsp+2E0h] [rbp-138h] BYREF
  void (__fastcall *v139[3])(__m128i *, __m128i *, __int64); // [rsp+2F0h] [rbp-128h] BYREF
  __int64 v140; // [rsp+308h] [rbp-110h]
  int v141[4]; // [rsp+310h] [rbp-108h] BYREF
  __int64 v142; // [rsp+320h] [rbp-F8h]
  char v143; // [rsp+328h] [rbp-F0h] BYREF
  void *v144; // [rsp+330h] [rbp-E8h]
  __int64 v145; // [rsp+338h] [rbp-E0h]
  _QWORD v146[2]; // [rsp+340h] [rbp-D8h] BYREF
  void *v147; // [rsp+350h] [rbp-C8h] BYREF
  __int64 v148; // [rsp+358h] [rbp-C0h]
  _QWORD v149[2]; // [rsp+360h] [rbp-B8h] BYREF
  char v150; // [rsp+370h] [rbp-A8h]
  __int64 v151; // [rsp+378h] [rbp-A0h] BYREF
  char v152; // [rsp+390h] [rbp-88h]
  ida_mcp::tools::metadata_backup *v153; // [rsp+398h] [rbp-80h]
  _QWORD v154[2]; // [rsp+3A8h] [rbp-70h] BYREF
  char v155; // [rsp+3B8h] [rbp-60h]
  char v156; // [rsp+3C8h] [rbp-50h]
  unsigned __int64 v157; // [rsp+3D8h] [rbp-40h]

  v77 = this;
  v157 = __readfsqword(0x28u);
  v144 = v146;
  v145 = 0;
  LOBYTE(v146[0]) = 0;
  v147 = v149;
  v148 = 0;
  LOBYTE(v149[0]) = 0;
  v150 = 0;
  v151 = 0;
  v152 = 0;
  v156 = 0;
  std::string::_M_replace();
  v91 = &v147;
  std::string::_M_replace();
  *(_QWORD *)v108 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v107 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v109 = 0;
  *(_QWORD *)v110 = 0;
  *(_OWORD *)v108 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v109 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v81 = &v107;
  *(_OWORD *)v110 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v138,
    (const __m128i *)&v107);
  v139[0] = nullptr;
  v129 = 0;
  *(_QWORD *)v130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v129 = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)(v4 + 8) = 10;
  v124 = 0;
  *(_QWORD *)v125 = 0;
  *(_OWORD *)v130 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v124 = 3;
  v5 = operator new(0x20u);
  strcpy((char *)(v5 + 16), "address");
  *(_QWORD *)v5 = v5 + 16;
  *(_QWORD *)(v5 + 8) = 7;
  v111 = 0;
  *(_QWORD *)v112 = 0;
  *(_OWORD *)v125 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v111 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  v113 = 0;
  v114[0] = 0;
  *(_OWORD *)v112 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v113 = 3;
  v7 = operator new(0x20u);
  *(_QWORD *)v7 = v7 + 16;
  strcpy((char *)(v7 + 16), "string");
  *(_QWORD *)(v7 + 8) = 6;
  v82 = &v111;
  *(_OWORD *)v114 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v119,
    (const __m128i *)&v111);
  v120 = 0;
  v115 = 0;
  *(_QWORD *)v116 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v115 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "description");
  *(_QWORD *)(v8 + 8) = 11;
  v117 = 0;
  *(_QWORD *)v118 = 0;
  *(_OWORD *)v116 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v117 = 3;
  v9 = (__int64 *)operator new(0x20u);
  v101 = 38;
  *v9 = (__int64)(v9 + 2);
  *(_QWORD *)v76 = &v101;
  v10 = std::string::_M_create();
  v11 = v101;
  *v9 = v10;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2560);
  v9[2] = v11;
  *(__m128i *)v10 = si128;
  *(__m128i *)(v10 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E2570);
  *(_QWORD *)(v10 + 30) = 0x6E6F6974636E7566LL;
  v13 = v101;
  v14 = *v9;
  v9[1] = v101;
  *(_BYTE *)(v14 + v13) = 0;
  v83 = &v115;
  *(_QWORD *)v96 = &v121;
  *(_OWORD *)v118 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v121,
    (const __m128i *)&v115);
  v123 = 0;
  *(_QWORD *)v97 = &v126;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v126,
    &v119);
  v128 = 0;
  v79 = (const __m128i *)&v124;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v105,
    (const __m128i *)&v124);
  v106 = 0;
  *(_QWORD *)v98 = &v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v131,
    &v105,
    1);
  v133 = 0;
  v78 = (const __m128i *)&v129;
  *(_QWORD *)v99 = &v139[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v139[1],
    (const __m128i *)&v129);
  v140 = 0;
  v134 = 0;
  *(_QWORD *)v135 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v134 = 3;
  v15 = operator new(0x20u);
  *(_QWORD *)v15 = v15 + 16;
  strcpy((char *)(v15 + 16), "required");
  *(_QWORD *)(v15 + 8) = 8;
  v103 = 0;
  *(_QWORD *)v104 = 0;
  *(_OWORD *)v135 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v103 = 3;
  v16 = operator new(0x20u);
  *(_QWORD *)v16 = v16 + 16;
  strcpy((char *)(v16 + 16), "address");
  v17 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v16 + 8) = 7;
  v95 = &v103;
  v93 = &v100;
  *(__m128 *)v75 = v17;
  *(_OWORD *)v104 = (unsigned __int64)v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v18 = _mm_load_si128(&v100);
  v137 = 0;
  v80 = (const __m128i *)&v134;
  *(_QWORD *)v90 = v141;
  v136 = v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v141,
    (const __m128i *)&v134);
  v142 = 0;
  LOBYTE(v101) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v76,
    &v138,
    3);
  v19 = v150;
  v20 = (__m128i *)&v143;
  v21 = v102;
  v150 = v101;
  LOBYTE(v101) = v19;
  v102 = v151;
  v151 = v21;
  v94 = &v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v20 = (__m128i *)((char *)v20 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v20 != &v138 );
  v89 = &v136.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v88 = &v132;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v84 = &v105.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v87 = &v127;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v86 = &v122;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v85 = &v119.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v22 = _mm_load_si128((const __m128i *)v75);
  v138.m128i_i64[1] = 0;
  v138.m128i_i64[0] = (__int64)ida_mcp::tools::metadata_backup::`anonymous namespace'::backup_metadata_impl;
  *(__m128i *)v139 = v22;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v139[0] )
    v139[0](&v138, &v138, 3);
  if ( v156 && v155 && v153 != (ida_mcp::tools::metadata_backup *)v154 )
    operator delete(v153, v154[0] + 1LL);
  if ( v152 )
  {
    v152 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v92 = &v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v147 != v149 )
    operator delete(v147, v149[0] + 1LL);
  if ( v144 != v146 )
    operator delete(v144, v146[0] + 1LL);
  v144 = v146;
  v145 = 0;
  LOBYTE(v146[0]) = 0;
  v147 = v149;
  v148 = 0;
  LOBYTE(v149[0]) = 0;
  v150 = 0;
  v151 = 0;
  v152 = 0;
  v156 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v107 = 0;
  *(_QWORD *)v108 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v107 = 3;
  v23 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v23, "type", v24, v25, v26, v27, v74, (int)v104, (__int64)v108);
  v109 = 0;
  *(_QWORD *)v110 = 0;
  *(_OWORD *)v108 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v109 = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)v28 = v28 + 16;
  v29 = (const __m128i *)v81;
  strcpy((char *)(v28 + 16), "object");
  *(_QWORD *)(v28 + 8) = 6;
  *(_OWORD *)v110 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v138,
    v29);
  v139[0] = nullptr;
  v129 = 0;
  *(_QWORD *)v130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v129 = 3;
  v30 = operator new(0x20u);
  *(_QWORD *)v30 = v30 + 16;
  strcpy((char *)(v30 + 16), "properties");
  *(_QWORD *)(v30 + 8) = 10;
  v124 = 0;
  *(_QWORD *)v125 = 0;
  *(_OWORD *)v130 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v124 = 3;
  v31 = operator new(0x20u);
  strcpy((char *)(v31 + 16), "address");
  *(_QWORD *)v31 = v31 + 16;
  *(_QWORD *)(v31 + 8) = 7;
  v111 = 0;
  *(_QWORD *)v112 = 0;
  *(_OWORD *)v125 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v111 = 3;
  v32 = operator new(0x20u);
  *(_QWORD *)v32 = v32 + 16;
  strcpy((char *)(v32 + 16), "type");
  *(_QWORD *)(v32 + 8) = 4;
  v113 = 0;
  v114[0] = 0;
  *(_OWORD *)v112 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v113 = 3;
  v33 = operator new(0x20u);
  *(_QWORD *)v33 = v33 + 16;
  v34 = (const __m128i *)v82;
  strcpy((char *)(v33 + 16), "string");
  *(_QWORD *)(v33 + 8) = 6;
  *(_OWORD *)v114 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v119,
    v34);
  v120 = 0;
  v115 = 0;
  *(_QWORD *)v116 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v115 = 3;
  v35 = operator new(0x20u);
  *(_QWORD *)v35 = v35 + 16;
  strcpy((char *)(v35 + 16), "description");
  *(_QWORD *)(v35 + 8) = 11;
  v117 = 0;
  *(_QWORD *)v118 = 0;
  *(_OWORD *)v116 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v117 = 3;
  v36 = (__int64 *)operator new(0x20u);
  *v36 = (__int64)(v36 + 2);
  v101 = 38;
  v37 = std::string::_M_create();
  v38 = v101;
  *v36 = v37;
  v39 = _mm_load_si128((const __m128i *)&xmmword_3E2560);
  v40 = (const __m128i *)v83;
  v36[2] = v38;
  v41 = *(_QWORD **)v96;
  *(__m128i *)v37 = v39;
  *(__m128i *)(v37 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E2570);
  *(_QWORD *)(v37 + 30) = 0x6E6F6974636E7566LL;
  v42 = v101;
  v43 = *v36;
  v36[1] = v101;
  *(_BYTE *)(v43 + v42) = 0;
  *(_OWORD *)v118 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v41,
    v40);
  v123 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v97,
    &v119);
  v128 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v105,
    v79);
  v106 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v98,
    &v105,
    1);
  v133 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v99,
    v78);
  v140 = 0;
  v134 = 0;
  *(_QWORD *)v135 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v134 = 3;
  v44 = operator new(0x20u);
  *(_QWORD *)v44 = v44 + 16;
  strcpy((char *)(v44 + 16), "required");
  *(_QWORD *)(v44 + 8) = 8;
  v103 = 0;
  *(_QWORD *)v104 = 0;
  *(_OWORD *)v135 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v103 = 3;
  v45 = operator new(0x20u);
  *(_QWORD *)v45 = v45 + 16;
  strcpy((char *)(v45 + 16), "address");
  *(_QWORD *)(v45 + 8) = 7;
  *(_OWORD *)v104 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v46 = _mm_load_si128(&v100);
  v137 = 0;
  v136 = v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v90,
    v80);
  v142 = 0;
  LOBYTE(v101) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v76,
    &v138,
    3);
  LOBYTE(v40) = v150;
  v47 = (__m128i *)&v143;
  v150 = v101;
  v48 = v151;
  LOBYTE(v101) = (_BYTE)v40;
  v151 = v102;
  v102 = v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v47 = (__m128i *)((char *)v47 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v47 != &v138 );
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
  v49 = _mm_load_si128((const __m128i *)v75);
  v138.m128i_i64[1] = 0;
  v138.m128i_i64[0] = (__int64)ida_mcp::tools::metadata_backup::`anonymous namespace'::has_backup_metadata_impl;
  *(__m128i *)v139 = v49;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v139[0] )
    v139[0](&v138, &v138, 3);
  if ( v156 && v155 && v153 != (ida_mcp::tools::metadata_backup *)v154 )
    operator delete(v153, v154[0] + 1LL);
  if ( v152 )
  {
    v152 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v147 != v149 )
    operator delete(v147, v149[0] + 1LL);
  if ( v144 != v146 )
    operator delete(v144, v146[0] + 1LL);
  v144 = v146;
  v145 = 0;
  LOBYTE(v146[0]) = 0;
  v147 = v149;
  v148 = 0;
  LOBYTE(v149[0]) = 0;
  v150 = 0;
  v151 = 0;
  v152 = 0;
  v156 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v107 = 0;
  *(_QWORD *)v108 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v107 = 3;
  v50 = operator new(0x20u);
  *(_QWORD *)v50 = v50 + 16;
  strcpy((char *)(v50 + 16), "type");
  *(_QWORD *)(v50 + 8) = 4;
  v109 = 0;
  *(_QWORD *)v110 = 0;
  *(_OWORD *)v108 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v109 = 3;
  v51 = operator new(0x20u);
  *(_QWORD *)v51 = v51 + 16;
  v52 = (const __m128i *)v81;
  strcpy((char *)(v51 + 16), "object");
  *(_QWORD *)(v51 + 8) = 6;
  *(_OWORD *)v110 = (unsigned __int64)v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v138,
    v52);
  v139[0] = nullptr;
  v129 = 0;
  *(_QWORD *)v130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v129 = 3;
  v53 = operator new(0x20u);
  *(_QWORD *)v53 = v53 + 16;
  strcpy((char *)(v53 + 16), "properties");
  *(_QWORD *)(v53 + 8) = 10;
  v124 = 0;
  *(_QWORD *)v125 = 0;
  *(_OWORD *)v130 = (unsigned __int64)v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v124 = 3;
  v54 = operator new(0x20u);
  strcpy((char *)(v54 + 16), "address");
  *(_QWORD *)v54 = v54 + 16;
  *(_QWORD *)(v54 + 8) = 7;
  v111 = 0;
  *(_QWORD *)v112 = 0;
  *(_OWORD *)v125 = (unsigned __int64)v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v111 = 3;
  v55 = operator new(0x20u);
  *(_QWORD *)v55 = v55 + 16;
  strcpy((char *)(v55 + 16), "type");
  *(_QWORD *)(v55 + 8) = 4;
  v113 = 0;
  v114[0] = 0;
  *(_OWORD *)v112 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v113 = 3;
  v56 = operator new(0x20u);
  *(_QWORD *)v56 = v56 + 16;
  v57 = (const __m128i *)v82;
  strcpy((char *)(v56 + 16), "string");
  *(_QWORD *)(v56 + 8) = 6;
  *(_OWORD *)v114 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v119,
    v57,
    2);
  v120 = 0;
  v115 = 0;
  *(_QWORD *)v116 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v115 = 3;
  v58 = operator new(0x20u);
  *(_QWORD *)v58 = v58 + 16;
  strcpy((char *)(v58 + 16), "description");
  *(_QWORD *)(v58 + 8) = 11;
  v117 = 0;
  *(_QWORD *)v118 = 0;
  *(_OWORD *)v116 = (unsigned __int64)v58;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v117 = 3;
  v59 = (__int64 *)operator new(0x20u);
  *v59 = (__int64)(v59 + 2);
  v101 = 38;
  v60 = std::string::_M_create();
  v61 = v101;
  *v59 = v60;
  v62 = _mm_load_si128((const __m128i *)&xmmword_3E2560);
  v63 = (const __m128i *)v83;
  v59[2] = v61;
  v64 = *(_QWORD **)v96;
  *(__m128i *)v60 = v62;
  *(__m128i *)(v60 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E2570);
  *(_QWORD *)(v60 + 30) = 0x6E6F6974636E7566LL;
  v65 = v101;
  v66 = *v59;
  v59[1] = v101;
  *(_BYTE *)(v66 + v65) = 0;
  *(_OWORD *)v118 = (unsigned __int64)v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v64,
    v63,
    2);
  v123 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v97,
    &v119,
    2);
  v128 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v105,
    v79,
    2);
  v106 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v98,
    &v105,
    1);
  v133 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v99,
    v78,
    2);
  v140 = 0;
  v134 = 0;
  *(_QWORD *)v135 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v134 = 3;
  v67 = operator new(0x20u);
  *(_QWORD *)v67 = v67 + 16;
  strcpy((char *)(v67 + 16), "required");
  *(_QWORD *)(v67 + 8) = 8;
  v103 = 0;
  *(_QWORD *)v104 = 0;
  *(_OWORD *)v135 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v103 = 3;
  v68 = operator new(0x20u);
  *(_QWORD *)v68 = v68 + 16;
  strcpy((char *)(v68 + 16), "address");
  *(_QWORD *)(v68 + 8) = 7;
  *(_OWORD *)v104 = (unsigned __int64)v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v69 = _mm_load_si128(&v100);
  v137 = 0;
  v136 = v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v90,
    v80,
    2);
  v142 = 0;
  LOBYTE(v101) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v76,
    &v138,
    3);
  LOBYTE(v63) = v150;
  v70 = (__m128i *)&v143;
  v150 = v101;
  v71 = v151;
  LOBYTE(v101) = (_BYTE)v63;
  v151 = v102;
  v102 = v71;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v70 = (__m128i *)((char *)v70 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v70 != &v138 );
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
  v72 = _mm_load_si128((const __m128i *)v75);
  v138.m128i_i64[1] = 0;
  v138.m128i_i64[0] = (__int64)ida_mcp::tools::metadata_backup::`anonymous namespace'::revert_metadata_impl;
  *(__m128i *)v139 = v72;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v139[0] )
    v139[0](&v138, &v138, 3);
  if ( v156 && v155 && v153 != (ida_mcp::tools::metadata_backup *)v154 )
    operator delete(v153, v154[0] + 1LL);
  if ( v152 )
  {
    v152 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v147 != v149 )
    operator delete(v147, v149[0] + 1LL);
  if ( v144 != v146 )
    operator delete(v144, v146[0] + 1LL);
  return v157 - __readfsqword(0x28u);
}

