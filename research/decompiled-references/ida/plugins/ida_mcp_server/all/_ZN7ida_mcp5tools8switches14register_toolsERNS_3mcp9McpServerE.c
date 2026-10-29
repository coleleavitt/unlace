unsigned __int64 __fastcall ida_mcp::tools::switches::register_tools(
        ida_mcp::tools::switches *this,
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
  __m128i *v15; // r15
  __int64 v16; // rdx
  __m128i v17; // xmm2
  __int64 v18; // rax
  __int64 v19; // rax
  const __m128i *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  const __m128i *v25; // rsi
  __int64 v26; // rax
  __int64 *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // xmm0
  __m128i *v35; // r15
  __int64 v36; // rax
  __m128i v37; // xmm3
  __int64 v38; // rax
  __int64 v39; // rax
  const __m128i *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  const __m128i *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  const __m128i *v48; // rsi
  _QWORD *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  __m128i v52; // xmm0
  __m128i *v53; // rbp
  __int64 v54; // rax
  __m128i v55; // xmm4
  int v57; // [rsp+0h] [rbp-418h]
  __m128i v58; // [rsp+60h] [rbp-3B8h] BYREF
  ida_mcp::tools::switches *v59; // [rsp+70h] [rbp-3A8h]
  const __m128i *v60; // [rsp+78h] [rbp-3A0h]
  const __m128i *v61; // [rsp+80h] [rbp-398h]
  const __m128i *v62; // [rsp+88h] [rbp-390h]
  char *v63; // [rsp+90h] [rbp-388h]
  char *v64; // [rsp+98h] [rbp-380h]
  const __m128i *v65; // [rsp+A0h] [rbp-378h]
  char *v66; // [rsp+A8h] [rbp-370h]
  char *v67; // [rsp+B0h] [rbp-368h]
  __int8 *v68; // [rsp+B8h] [rbp-360h]
  __int64 *v69; // [rsp+C0h] [rbp-358h]
  __int64 *v70; // [rsp+C8h] [rbp-350h]
  char *v71; // [rsp+D0h] [rbp-348h]
  char v72[8]; // [rsp+D8h] [rbp-340h]
  char v73[8]; // [rsp+E0h] [rbp-338h]
  char v74[8]; // [rsp+E8h] [rbp-330h]
  char v75[8]; // [rsp+F0h] [rbp-328h]
  void **v76; // [rsp+F8h] [rbp-320h]
  __int64 *v77; // [rsp+100h] [rbp-318h]
  __m128i *v78; // [rsp+108h] [rbp-310h]
  char v79[8]; // [rsp+110h] [rbp-308h]
  __int64 *v80; // [rsp+118h] [rbp-300h]
  char *v81; // [rsp+120h] [rbp-2F8h]
  char v82[8]; // [rsp+128h] [rbp-2F0h]
  __m128i v83; // [rsp+130h] [rbp-2E8h] BYREF
  __int64 v84; // [rsp+140h] [rbp-2D8h] BYREF
  __int64 v85; // [rsp+148h] [rbp-2D0h] BYREF
  char v86; // [rsp+150h] [rbp-2C8h] BYREF
  int v87[4]; // [rsp+158h] [rbp-2C0h]
  __m128i v88; // [rsp+170h] [rbp-2A8h] BYREF
  __int64 v89; // [rsp+180h] [rbp-298h]
  char v90; // [rsp+190h] [rbp-288h] BYREF
  __int64 v91[2]; // [rsp+198h] [rbp-280h]
  char v92; // [rsp+1A8h] [rbp-270h]
  __int64 v93[2]; // [rsp+1B0h] [rbp-268h]
  char v94; // [rsp+1C0h] [rbp-258h] BYREF
  int v95[4]; // [rsp+1C8h] [rbp-250h]
  char v96; // [rsp+1D8h] [rbp-240h]
  int v97[4]; // [rsp+1E0h] [rbp-238h]
  char v98; // [rsp+1F0h] [rbp-228h] BYREF
  char v99[16]; // [rsp+1F8h] [rbp-220h]
  char v100; // [rsp+208h] [rbp-210h]
  int v101[4]; // [rsp+210h] [rbp-208h]
  __m128i v102; // [rsp+220h] [rbp-1F8h] BYREF
  __int64 v103; // [rsp+230h] [rbp-1E8h]
  __int64 v104; // [rsp+238h] [rbp-1E0h] BYREF
  char v105; // [rsp+240h] [rbp-1D8h] BYREF
  __int64 v106; // [rsp+248h] [rbp-1D0h]
  char v107; // [rsp+250h] [rbp-1C8h] BYREF
  int v108[4]; // [rsp+258h] [rbp-1C0h] BYREF
  __int64 v109; // [rsp+268h] [rbp-1B0h] BYREF
  char v110; // [rsp+270h] [rbp-1A8h] BYREF
  __int64 v111; // [rsp+278h] [rbp-1A0h]
  char v112; // [rsp+280h] [rbp-198h] BYREF
  int v113[4]; // [rsp+288h] [rbp-190h] BYREF
  __int64 v114; // [rsp+298h] [rbp-180h] BYREF
  char v115; // [rsp+2A0h] [rbp-178h] BYREF
  __int64 v116; // [rsp+2A8h] [rbp-170h]
  char v117; // [rsp+2B0h] [rbp-168h] BYREF
  int v118[4]; // [rsp+2B8h] [rbp-160h]
  __m128i v119; // [rsp+2C8h] [rbp-150h] BYREF
  __int64 v120; // [rsp+2D8h] [rbp-140h]
  __m128i v121; // [rsp+2E0h] [rbp-138h] BYREF
  void (__fastcall *v122[3])(__m128i *, __m128i *, __int64); // [rsp+2F0h] [rbp-128h] BYREF
  __int64 v123; // [rsp+308h] [rbp-110h]
  int v124[4]; // [rsp+310h] [rbp-108h] BYREF
  __int64 v125; // [rsp+320h] [rbp-F8h]
  char v126; // [rsp+328h] [rbp-F0h] BYREF
  void *v127; // [rsp+330h] [rbp-E8h]
  __int64 v128; // [rsp+338h] [rbp-E0h]
  _QWORD v129[2]; // [rsp+340h] [rbp-D8h] BYREF
  void *v130; // [rsp+350h] [rbp-C8h] BYREF
  __int64 v131; // [rsp+358h] [rbp-C0h]
  _QWORD v132[2]; // [rsp+360h] [rbp-B8h] BYREF
  char v133; // [rsp+370h] [rbp-A8h]
  __int64 v134; // [rsp+378h] [rbp-A0h] BYREF
  char v135; // [rsp+390h] [rbp-88h]
  ida_mcp::tools::switches *v136; // [rsp+398h] [rbp-80h]
  _QWORD v137[2]; // [rsp+3A8h] [rbp-70h] BYREF
  char v138; // [rsp+3B8h] [rbp-60h]
  char v139; // [rsp+3C8h] [rbp-50h]
  unsigned __int64 v140; // [rsp+3D8h] [rbp-40h]

  v59 = this;
  v140 = __readfsqword(0x28u);
  v127 = v129;
  v128 = 0;
  LOBYTE(v129[0]) = 0;
  v130 = v132;
  v131 = 0;
  LOBYTE(v132[0]) = 0;
  v133 = 0;
  v134 = 0;
  v135 = 0;
  v139 = 0;
  std::string::_M_replace();
  v76 = &v130;
  std::string::_M_replace();
  v91[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v90 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v92 = 0;
  v93[0] = 0;
  *(_OWORD *)v91 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v92 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v63 = &v90;
  *(_OWORD *)v93 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v121,
    (const __m128i *)&v90);
  v122[0] = nullptr;
  v112 = 0;
  *(_QWORD *)v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)(v4 + 8) = 10;
  v107 = 0;
  *(_QWORD *)v108 = 0;
  *(_OWORD *)v113 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v107 = 3;
  v5 = operator new(0x20u);
  strcpy((char *)(v5 + 16), "address");
  *(_QWORD *)v5 = v5 + 16;
  *(_QWORD *)(v5 + 8) = 7;
  v94 = 0;
  *(_QWORD *)v95 = 0;
  *(_OWORD *)v108 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v94 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  v96 = 0;
  *(_QWORD *)v97 = 0;
  *(_OWORD *)v95 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v96 = 3;
  v7 = operator new(0x20u);
  *(_QWORD *)v7 = v7 + 16;
  strcpy((char *)(v7 + 16), "string");
  *(_QWORD *)(v7 + 8) = 6;
  v64 = &v94;
  *(_OWORD *)v97 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v102,
    (const __m128i *)&v94);
  v103 = 0;
  v98 = 0;
  *(_QWORD *)v99 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v98 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "description");
  *(_QWORD *)(v8 + 8) = 11;
  v100 = 0;
  *(_QWORD *)v101 = 0;
  *(_OWORD *)v99 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v100 = 3;
  v9 = operator new(0x20u);
  *(_QWORD *)v9 = v9 + 16;
  strcpy((char *)(v9 + 16), "Hex address");
  *(_QWORD *)(v9 + 8) = 11;
  v65 = (const __m128i *)&v98;
  *(_QWORD *)v82 = &v104;
  *(_OWORD *)v101 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v104,
    (const __m128i *)&v98);
  v106 = 0;
  *(_QWORD *)v72 = &v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v109,
    &v102);
  v111 = 0;
  v61 = (const __m128i *)&v107;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v88,
    (const __m128i *)&v107);
  v89 = 0;
  *(_QWORD *)v73 = &v114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v114,
    &v88,
    1);
  v116 = 0;
  v60 = (const __m128i *)&v112;
  *(_QWORD *)v74 = &v122[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v122[1],
    (const __m128i *)&v112);
  v123 = 0;
  v117 = 0;
  *(_QWORD *)v118 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v117 = 3;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v10 + 16;
  strcpy((char *)(v10 + 16), "required");
  *(_QWORD *)(v10 + 8) = 8;
  *(_QWORD *)v87 = 0;
  *(_OWORD *)v118 = (unsigned __int64)v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v86 = 3;
  v11 = operator new(0x20u);
  *(_QWORD *)v11 = v11 + 16;
  strcpy((char *)(v11 + 16), "address");
  v12 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v11 + 8) = 7;
  v81 = &v86;
  v78 = &v83;
  v58 = (__m128i)v12;
  *(_OWORD *)v87 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v13 = _mm_load_si128(&v83);
  v120 = 0;
  v62 = (const __m128i *)&v117;
  *(_QWORD *)v75 = v124;
  v119 = v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v124,
    (const __m128i *)&v117);
  v125 = 0;
  LOBYTE(v84) = 0;
  *(_QWORD *)v79 = &v84;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v84,
    &v121,
    3);
  v14 = v133;
  v15 = (__m128i *)&v126;
  v16 = v85;
  v133 = v84;
  LOBYTE(v84) = v14;
  v85 = v134;
  v134 = v16;
  v80 = &v85;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v15 = (__m128i *)((char *)v15 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v15 != &v121 );
  v68 = &v119.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v67 = &v115;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v69 = &v88.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v66 = &v110;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v71 = &v105;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v70 = &v102.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v17 = _mm_load_si128(&v58);
  v121.m128i_i64[1] = 0;
  v121.m128i_i64[0] = (__int64)ida_mcp::tools::switches::`anonymous namespace'::handle_get_switch_info;
  *(__m128i *)v122 = v17;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v122[0] )
    v122[0](&v121, &v121, 3);
  if ( v139 && v138 && v136 != (ida_mcp::tools::switches *)v137 )
    operator delete(v136, v137[0] + 1LL);
  if ( v135 )
  {
    v135 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v77 = &v134;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v130 != v132 )
    operator delete(v130, v132[0] + 1LL);
  if ( v127 != v129 )
    operator delete(v127, v129[0] + 1LL);
  v127 = v129;
  v128 = 0;
  LOBYTE(v129[0]) = 0;
  v130 = v132;
  v131 = 0;
  LOBYTE(v132[0]) = 0;
  v133 = 0;
  v134 = 0;
  v135 = 0;
  v139 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v90 = 0;
  v91[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v90 = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "type");
  *(_QWORD *)(v18 + 8) = 4;
  v92 = 0;
  v93[0] = 0;
  *(_OWORD *)v91 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v92 = 3;
  v19 = operator new(0x20u);
  *(_QWORD *)v19 = v19 + 16;
  v20 = (const __m128i *)v63;
  strcpy((char *)(v19 + 16), "object");
  *(_QWORD *)(v19 + 8) = 6;
  *(_OWORD *)v93 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v121,
    v20);
  v122[0] = nullptr;
  v112 = 0;
  *(_QWORD *)v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = 3;
  v21 = operator new(0x20u);
  *(_QWORD *)v21 = v21 + 16;
  strcpy((char *)(v21 + 16), "properties");
  *(_QWORD *)(v21 + 8) = 10;
  v107 = 0;
  *(_QWORD *)v108 = 0;
  *(_OWORD *)v113 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v107 = 3;
  v22 = operator new(0x20u);
  strcpy((char *)(v22 + 16), "address");
  *(_QWORD *)v22 = v22 + 16;
  *(_QWORD *)(v22 + 8) = 7;
  v94 = 0;
  *(_QWORD *)v95 = 0;
  *(_OWORD *)v108 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v94 = 3;
  v23 = operator new(0x20u);
  *(_QWORD *)v23 = v23 + 16;
  strcpy((char *)(v23 + 16), "type");
  *(_QWORD *)(v23 + 8) = 4;
  v96 = 0;
  *(_QWORD *)v97 = 0;
  *(_OWORD *)v95 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v96 = 3;
  v24 = operator new(0x20u);
  *(_QWORD *)v24 = v24 + 16;
  v25 = (const __m128i *)v64;
  strcpy((char *)(v24 + 16), "string");
  *(_QWORD *)(v24 + 8) = 6;
  *(_OWORD *)v97 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v102,
    v25);
  v103 = 0;
  v98 = 0;
  *(_QWORD *)v99 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v98 = 3;
  v26 = operator new(0x20u);
  *(_QWORD *)v26 = v26 + 16;
  strcpy((char *)(v26 + 16), "description");
  *(_QWORD *)(v26 + 8) = 11;
  v100 = 0;
  *(_QWORD *)v101 = 0;
  *(_OWORD *)v99 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v100 = 3;
  v27 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v27, "Hex address", v28, v29, v30, v31, v57, (int)v108, (__int64)v113);
  *(_OWORD *)v101 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v82,
    v65);
  v106 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v72,
    &v102);
  v111 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v88,
    v61);
  v89 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v73,
    &v88,
    1);
  v116 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v74,
    v60);
  v123 = 0;
  v117 = 0;
  *(_QWORD *)v118 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v117 = 3;
  v32 = operator new(0x20u);
  *(_QWORD *)v32 = v32 + 16;
  strcpy((char *)(v32 + 16), "required");
  *(_QWORD *)(v32 + 8) = 8;
  v86 = 0;
  *(_QWORD *)v87 = 0;
  *(_OWORD *)v118 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v86 = 3;
  v33 = operator new(0x20u);
  *(_QWORD *)v33 = v33 + 16;
  strcpy((char *)(v33 + 16), "address");
  *(_QWORD *)(v33 + 8) = 7;
  *(_OWORD *)v87 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v34 = _mm_load_si128(&v83);
  v120 = 0;
  v119 = v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v75,
    v62);
  v125 = 0;
  LOBYTE(v84) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v79,
    &v121,
    3);
  LOBYTE(v25) = v133;
  v35 = (__m128i *)&v126;
  v133 = v84;
  v36 = v134;
  LOBYTE(v84) = (_BYTE)v25;
  v134 = v85;
  v85 = v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v35 = (__m128i *)((char *)v35 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v35 != &v121 );
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
  v37 = _mm_load_si128(&v58);
  v121.m128i_i64[1] = 0;
  v121.m128i_i64[0] = (__int64)ida_mcp::tools::switches::`anonymous namespace'::handle_enumerate_switch_cases;
  *(__m128i *)v122 = v37;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v122[0] )
    v122[0](&v121, &v121, 3);
  if ( v139 && v138 && v136 != (ida_mcp::tools::switches *)v137 )
    operator delete(v136, v137[0] + 1LL);
  if ( v135 )
  {
    v135 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v130 != v132 )
    operator delete(v130, v132[0] + 1LL);
  if ( v127 != v129 )
    operator delete(v127, v129[0] + 1LL);
  v127 = v129;
  v128 = 0;
  LOBYTE(v129[0]) = 0;
  v130 = v132;
  v131 = 0;
  LOBYTE(v132[0]) = 0;
  v133 = 0;
  v134 = 0;
  v135 = 0;
  v139 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v90 = 0;
  v91[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v90 = 3;
  v38 = operator new(0x20u);
  *(_QWORD *)v38 = v38 + 16;
  strcpy((char *)(v38 + 16), "type");
  *(_QWORD *)(v38 + 8) = 4;
  v92 = 0;
  v93[0] = 0;
  *(_OWORD *)v91 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v92 = 3;
  v39 = operator new(0x20u);
  *(_QWORD *)v39 = v39 + 16;
  v40 = (const __m128i *)v63;
  strcpy((char *)(v39 + 16), "object");
  *(_QWORD *)(v39 + 8) = 6;
  *(_OWORD *)v93 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v121,
    v40);
  v122[0] = nullptr;
  v112 = 0;
  *(_QWORD *)v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = 3;
  v41 = operator new(0x20u);
  *(_QWORD *)v41 = v41 + 16;
  strcpy((char *)(v41 + 16), "properties");
  *(_QWORD *)(v41 + 8) = 10;
  v107 = 0;
  *(_QWORD *)v108 = 0;
  *(_OWORD *)v113 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v107 = 3;
  v42 = operator new(0x20u);
  strcpy((char *)(v42 + 16), "address");
  *(_QWORD *)v42 = v42 + 16;
  *(_QWORD *)(v42 + 8) = 7;
  v94 = 0;
  *(_QWORD *)v95 = 0;
  *(_OWORD *)v108 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v94 = 3;
  v43 = operator new(0x20u);
  *(_QWORD *)v43 = v43 + 16;
  strcpy((char *)(v43 + 16), "type");
  *(_QWORD *)(v43 + 8) = 4;
  v96 = 0;
  *(_QWORD *)v97 = 0;
  *(_OWORD *)v95 = (unsigned __int64)v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v96 = 3;
  v44 = operator new(0x20u);
  *(_QWORD *)v44 = v44 + 16;
  v45 = (const __m128i *)v64;
  strcpy((char *)(v44 + 16), "string");
  *(_QWORD *)(v44 + 8) = 6;
  *(_OWORD *)v97 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v102,
    v45,
    2);
  v103 = 0;
  v98 = 0;
  *(_QWORD *)v99 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v98 = 3;
  v46 = operator new(0x20u);
  *(_QWORD *)v46 = v46 + 16;
  strcpy((char *)(v46 + 16), "description");
  *(_QWORD *)(v46 + 8) = 11;
  v100 = 0;
  *(_QWORD *)v101 = 0;
  *(_OWORD *)v99 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v100 = 3;
  v47 = operator new(0x20u);
  v48 = v65;
  *(_QWORD *)v47 = v47 + 16;
  v49 = *(_QWORD **)v82;
  strcpy((char *)(v47 + 16), "Hex address");
  *(_QWORD *)(v47 + 8) = 11;
  *(_OWORD *)v101 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v49,
    v48,
    2);
  v106 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v72,
    &v102,
    2);
  v111 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v88,
    v61,
    2);
  v89 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v73,
    &v88,
    1);
  v116 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v74,
    v60,
    2);
  v123 = 0;
  v117 = 0;
  *(_QWORD *)v118 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v117 = 3;
  v50 = operator new(0x20u);
  *(_QWORD *)v50 = v50 + 16;
  strcpy((char *)(v50 + 16), "required");
  *(_QWORD *)(v50 + 8) = 8;
  v86 = 0;
  *(_QWORD *)v87 = 0;
  *(_OWORD *)v118 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v86 = 3;
  v51 = operator new(0x20u);
  *(_QWORD *)v51 = v51 + 16;
  strcpy((char *)(v51 + 16), "address");
  *(_QWORD *)(v51 + 8) = 7;
  *(_OWORD *)v87 = (unsigned __int64)v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v52 = _mm_load_si128(&v83);
  v120 = 0;
  v119 = v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v75,
    v62,
    2);
  v125 = 0;
  LOBYTE(v84) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v79,
    &v121,
    3);
  LOBYTE(v48) = v133;
  v53 = (__m128i *)&v126;
  v133 = v84;
  v54 = v134;
  LOBYTE(v84) = (_BYTE)v48;
  v134 = v85;
  v85 = v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v53 = (__m128i *)((char *)v53 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v53 != &v121 );
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
  v55 = _mm_load_si128(&v58);
  v121.m128i_i64[1] = 0;
  v121.m128i_i64[0] = (__int64)ida_mcp::tools::switches::`anonymous namespace'::handle_find_switches_in_function;
  *(__m128i *)v122 = v55;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v122[0] )
    v122[0](&v121, &v121, 3);
  if ( v139 && v138 && v136 != (ida_mcp::tools::switches *)v137 )
    operator delete(v136, v137[0] + 1LL);
  if ( v135 )
  {
    v135 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v130 != v132 )
    operator delete(v130, v132[0] + 1LL);
  if ( v127 != v129 )
    operator delete(v127, v129[0] + 1LL);
  return v140 - __readfsqword(0x28u);
}

