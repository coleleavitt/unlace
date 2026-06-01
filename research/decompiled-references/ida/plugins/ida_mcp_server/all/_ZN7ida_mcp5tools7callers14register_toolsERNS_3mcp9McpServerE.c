unsigned __int64 __fastcall ida_mcp::tools::callers::register_tools(
        ida_mcp::tools::callers *this,
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
  __m128i *v15; // r12
  __int64 v16; // rdx
  __m128i si128; // xmm2
  __int64 v18; // rax
  __int64 v19; // rax
  const __m128i *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  const __m128i *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  const __m128i *v28; // rsi
  _QWORD *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __m128i v32; // xmm0
  __m128i *v33; // rbp
  __int64 v34; // rax
  __m128i v35; // xmm3
  int v37[4]; // [rsp+50h] [rbp-3B8h] BYREF
  int v38[2]; // [rsp+60h] [rbp-3A8h]
  char v39[8]; // [rsp+68h] [rbp-3A0h]
  const __m128i *v40; // [rsp+70h] [rbp-398h]
  const __m128i *v41; // [rsp+78h] [rbp-390h]
  const __m128i *v42; // [rsp+80h] [rbp-388h]
  char *v43; // [rsp+88h] [rbp-380h]
  char *v44; // [rsp+90h] [rbp-378h]
  char *v45; // [rsp+98h] [rbp-370h]
  __int64 *v46; // [rsp+A0h] [rbp-368h]
  __int64 *v47; // [rsp+A8h] [rbp-360h]
  char *v48; // [rsp+B0h] [rbp-358h]
  char *v49; // [rsp+B8h] [rbp-350h]
  char *v50; // [rsp+C0h] [rbp-348h]
  __m128i *v51; // [rsp+C8h] [rbp-340h]
  char v52[8]; // [rsp+D0h] [rbp-338h]
  __int64 *v53; // [rsp+D8h] [rbp-330h]
  char *v54; // [rsp+E0h] [rbp-328h]
  char v55[8]; // [rsp+E8h] [rbp-320h]
  char v56[8]; // [rsp+F0h] [rbp-318h]
  char v57[8]; // [rsp+F8h] [rbp-310h]
  char v58[8]; // [rsp+100h] [rbp-308h]
  char v59[8]; // [rsp+108h] [rbp-300h]
  void **v60; // [rsp+110h] [rbp-2F8h]
  __int64 *v61; // [rsp+118h] [rbp-2F0h]
  __m128i v62; // [rsp+120h] [rbp-2E8h] BYREF
  __int64 v63; // [rsp+130h] [rbp-2D8h] BYREF
  __int64 v64; // [rsp+138h] [rbp-2D0h] BYREF
  char v65; // [rsp+140h] [rbp-2C8h] BYREF
  int v66[4]; // [rsp+148h] [rbp-2C0h]
  __m128i v67; // [rsp+160h] [rbp-2A8h] BYREF
  __int64 v68; // [rsp+170h] [rbp-298h]
  char v69; // [rsp+180h] [rbp-288h] BYREF
  int v70[4]; // [rsp+188h] [rbp-280h]
  char v71; // [rsp+198h] [rbp-270h]
  int v72[4]; // [rsp+1A0h] [rbp-268h]
  char v73; // [rsp+1B0h] [rbp-258h] BYREF
  int v74[4]; // [rsp+1B8h] [rbp-250h]
  char v75; // [rsp+1C8h] [rbp-240h]
  int v76[4]; // [rsp+1D0h] [rbp-238h]
  char v77; // [rsp+1E0h] [rbp-228h] BYREF
  int v78[4]; // [rsp+1E8h] [rbp-220h]
  char v79; // [rsp+1F8h] [rbp-210h]
  int v80[4]; // [rsp+200h] [rbp-208h]
  __m128i v81; // [rsp+210h] [rbp-1F8h] BYREF
  __int64 v82; // [rsp+220h] [rbp-1E8h]
  __int64 v83; // [rsp+228h] [rbp-1E0h] BYREF
  char v84; // [rsp+230h] [rbp-1D8h] BYREF
  __int64 v85; // [rsp+238h] [rbp-1D0h]
  char v86; // [rsp+240h] [rbp-1C8h] BYREF
  int v87[4]; // [rsp+248h] [rbp-1C0h]
  __int64 v88; // [rsp+258h] [rbp-1B0h] BYREF
  char v89; // [rsp+260h] [rbp-1A8h] BYREF
  __int64 v90; // [rsp+268h] [rbp-1A0h]
  char v91; // [rsp+270h] [rbp-198h] BYREF
  int v92[4]; // [rsp+278h] [rbp-190h]
  __int64 v93; // [rsp+288h] [rbp-180h] BYREF
  char v94; // [rsp+290h] [rbp-178h] BYREF
  __int64 v95; // [rsp+298h] [rbp-170h]
  char v96; // [rsp+2A0h] [rbp-168h] BYREF
  int v97[4]; // [rsp+2A8h] [rbp-160h]
  __m128i v98; // [rsp+2B8h] [rbp-150h]
  __int64 v99; // [rsp+2C8h] [rbp-140h]
  __m128i v100; // [rsp+2D0h] [rbp-138h] BYREF
  void (__fastcall *v101[3])(__m128i *, __m128i *, __int64); // [rsp+2E0h] [rbp-128h] BYREF
  __int64 v102; // [rsp+2F8h] [rbp-110h]
  char v103[16]; // [rsp+300h] [rbp-108h] BYREF
  __int64 v104; // [rsp+310h] [rbp-F8h]
  char v105; // [rsp+318h] [rbp-F0h] BYREF
  void *v106; // [rsp+320h] [rbp-E8h] BYREF
  __int64 v107; // [rsp+328h] [rbp-E0h]
  _QWORD v108[2]; // [rsp+330h] [rbp-D8h] BYREF
  void *v109; // [rsp+340h] [rbp-C8h] BYREF
  __int64 v110; // [rsp+348h] [rbp-C0h]
  _QWORD v111[2]; // [rsp+350h] [rbp-B8h] BYREF
  char v112; // [rsp+360h] [rbp-A8h]
  __int64 v113; // [rsp+368h] [rbp-A0h] BYREF
  char v114; // [rsp+380h] [rbp-88h]
  ida_mcp::tools::callers *v115; // [rsp+388h] [rbp-80h]
  _QWORD v116[2]; // [rsp+398h] [rbp-70h] BYREF
  char v117; // [rsp+3A8h] [rbp-60h]
  char v118; // [rsp+3B8h] [rbp-50h]
  unsigned __int64 v119; // [rsp+3C8h] [rbp-40h]

  *(_QWORD *)v39 = this;
  v119 = __readfsqword(0x28u);
  v106 = v108;
  v107 = 0;
  LOBYTE(v108[0]) = 0;
  v109 = v111;
  v110 = 0;
  LOBYTE(v111[0]) = 0;
  *(_QWORD *)v38 = &v106;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  v118 = 0;
  std::string::_M_replace();
  v60 = &v109;
  std::string::_M_replace();
  *(_QWORD *)v70 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v69 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v71 = 0;
  *(_QWORD *)v72 = 0;
  *(_OWORD *)v70 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v71 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v43 = &v69;
  *(_OWORD *)v72 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v100,
    (const __m128i *)&v69,
    2);
  v101[0] = nullptr;
  v91 = 0;
  *(_QWORD *)v92 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v91 = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)(v4 + 8) = 10;
  v86 = 0;
  *(_QWORD *)v87 = 0;
  *(_OWORD *)v92 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v86 = 3;
  v5 = operator new(0x20u);
  strcpy((char *)(v5 + 16), "address");
  *(_QWORD *)v5 = v5 + 16;
  *(_QWORD *)(v5 + 8) = 7;
  v73 = 0;
  *(_QWORD *)v74 = 0;
  *(_OWORD *)v87 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v73 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  v75 = 0;
  *(_QWORD *)v76 = 0;
  *(_OWORD *)v74 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v75 = 3;
  v7 = operator new(0x20u);
  *(_QWORD *)v7 = v7 + 16;
  strcpy((char *)(v7 + 16), "string");
  *(_QWORD *)(v7 + 8) = 6;
  v44 = &v73;
  *(_OWORD *)v76 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v81,
    (const __m128i *)&v73,
    2);
  v82 = 0;
  v77 = 0;
  *(_QWORD *)v78 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v77 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "description");
  *(_QWORD *)(v8 + 8) = 11;
  v79 = 0;
  *(_QWORD *)v80 = 0;
  *(_OWORD *)v78 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v79 = 3;
  v9 = operator new(0x20u);
  *(_QWORD *)v9 = v9 + 16;
  strcpy((char *)(v9 + 16), "Hex address");
  *(_QWORD *)(v9 + 8) = 11;
  v45 = &v77;
  *(_QWORD *)v55 = &v83;
  *(_OWORD *)v80 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v83,
    (const __m128i *)&v77,
    2);
  v85 = 0;
  *(_QWORD *)v56 = &v88;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v88,
    &v81,
    2);
  v90 = 0;
  v41 = (const __m128i *)&v86;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v67,
    (const __m128i *)&v86,
    2);
  v68 = 0;
  *(_QWORD *)v57 = &v93;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v93,
    &v67,
    1);
  v95 = 0;
  v40 = (const __m128i *)&v91;
  *(_QWORD *)v58 = &v101[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v101[1],
    (const __m128i *)&v91,
    2);
  v102 = 0;
  v96 = 0;
  *(_QWORD *)v97 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v96 = 3;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v10 + 16;
  strcpy((char *)(v10 + 16), "required");
  *(_QWORD *)(v10 + 8) = 8;
  *(_QWORD *)v66 = 0;
  *(_OWORD *)v97 = (unsigned __int64)v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v65 = 3;
  v11 = operator new(0x20u);
  *(_QWORD *)v11 = v11 + 16;
  strcpy((char *)(v11 + 16), "address");
  v12 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v11 + 8) = 7;
  v54 = &v65;
  v51 = &v62;
  *(__m128 *)v37 = v12;
  *(_OWORD *)v66 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v13 = _mm_load_si128(&v62);
  v99 = 0;
  v42 = (const __m128i *)&v96;
  *(_QWORD *)v59 = v103;
  v98 = v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v103,
    (const __m128i *)&v96,
    2);
  v104 = 0;
  LOBYTE(v63) = 0;
  *(_QWORD *)v52 = &v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v63,
    &v100,
    3);
  v14 = v112;
  v15 = (__m128i *)&v105;
  v16 = v64;
  v112 = v63;
  LOBYTE(v63) = v14;
  v64 = v113;
  v113 = v16;
  v53 = &v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v15 = (__m128i *)((char *)v15 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v15 != &v100 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v50 = &v94;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v46 = &v67.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v49 = &v89;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v48 = &v84;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v47 = &v81.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)v37);
  v100.m128i_i64[1] = 0;
  v100.m128i_i64[0] = (__int64)ida_mcp::tools::callers::`anonymous namespace'::handle_get_callers;
  *(__m128i *)v101 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v101[0] )
    v101[0](&v100, &v100, 3);
  if ( v118 && v117 && v115 != (ida_mcp::tools::callers *)v116 )
    operator delete(v115, v116[0] + 1LL);
  if ( v114 )
  {
    v114 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v61 = &v113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v109 != v111 )
    operator delete(v109, v111[0] + 1LL);
  if ( v106 != v108 )
    operator delete(v106, v108[0] + 1LL);
  v106 = v108;
  v107 = 0;
  LOBYTE(v108[0]) = 0;
  v109 = v111;
  v110 = 0;
  LOBYTE(v111[0]) = 0;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  v118 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v69 = 0;
  *(_QWORD *)v70 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v69 = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "type");
  *(_QWORD *)(v18 + 8) = 4;
  v71 = 0;
  *(_QWORD *)v72 = 0;
  *(_OWORD *)v70 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v71 = 3;
  v19 = operator new(0x20u);
  *(_QWORD *)v19 = v19 + 16;
  v20 = (const __m128i *)v43;
  strcpy((char *)(v19 + 16), "object");
  *(_QWORD *)(v19 + 8) = 6;
  *(_OWORD *)v72 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v100,
    v20,
    2);
  v101[0] = nullptr;
  v91 = 0;
  *(_QWORD *)v92 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v91 = 3;
  v21 = operator new(0x20u);
  *(_QWORD *)v21 = v21 + 16;
  strcpy((char *)(v21 + 16), "properties");
  *(_QWORD *)(v21 + 8) = 10;
  v86 = 0;
  *(_QWORD *)v87 = 0;
  *(_OWORD *)v92 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v86 = 3;
  v22 = operator new(0x20u);
  strcpy((char *)(v22 + 16), "address");
  *(_QWORD *)v22 = v22 + 16;
  *(_QWORD *)(v22 + 8) = 7;
  v73 = 0;
  *(_QWORD *)v74 = 0;
  *(_OWORD *)v87 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v73 = 3;
  v23 = operator new(0x20u);
  *(_QWORD *)v23 = v23 + 16;
  strcpy((char *)(v23 + 16), "type");
  *(_QWORD *)(v23 + 8) = 4;
  v75 = 0;
  *(_QWORD *)v76 = 0;
  *(_OWORD *)v74 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v75 = 3;
  v24 = operator new(0x20u);
  v25 = (const __m128i *)v44;
  *(_QWORD *)v24 = v24 + 16;
  strcpy((char *)(v24 + 16), "string");
  *(_QWORD *)(v24 + 8) = 6;
  *(_OWORD *)v76 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v81,
    v25,
    2);
  v82 = 0;
  v77 = 0;
  *(_QWORD *)v78 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v77 = 3;
  v26 = operator new(0x20u);
  *(_QWORD *)v26 = v26 + 16;
  strcpy((char *)(v26 + 16), "description");
  *(_QWORD *)(v26 + 8) = 11;
  v79 = 0;
  *(_QWORD *)v80 = 0;
  *(_OWORD *)v78 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v79 = 3;
  v27 = operator new(0x20u);
  v28 = (const __m128i *)v45;
  *(_QWORD *)v27 = v27 + 16;
  v29 = *(_QWORD **)v55;
  strcpy((char *)(v27 + 16), "Hex address");
  *(_QWORD *)(v27 + 8) = 11;
  *(_OWORD *)v80 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v29,
    v28,
    2);
  v85 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v56,
    &v81,
    2);
  v90 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v67,
    v41,
    2);
  v68 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v57,
    &v67,
    1);
  v95 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v58,
    v40,
    2);
  v102 = 0;
  v96 = 0;
  *(_QWORD *)v97 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v96 = 3;
  v30 = operator new(0x20u);
  *(_QWORD *)v30 = v30 + 16;
  strcpy((char *)(v30 + 16), "required");
  *(_QWORD *)(v30 + 8) = 8;
  v65 = 0;
  *(_QWORD *)v66 = 0;
  *(_OWORD *)v97 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v65 = 3;
  v31 = operator new(0x20u);
  *(_QWORD *)v31 = v31 + 16;
  strcpy((char *)(v31 + 16), "address");
  *(_QWORD *)(v31 + 8) = 7;
  *(_OWORD *)v66 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v32 = _mm_load_si128(&v62);
  v99 = 0;
  v98 = v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v59,
    v42,
    2);
  v104 = 0;
  LOBYTE(v63) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v52,
    &v100,
    3);
  LOBYTE(v28) = v112;
  v33 = (__m128i *)&v105;
  v112 = v63;
  v34 = v113;
  LOBYTE(v63) = (_BYTE)v28;
  v113 = v64;
  v64 = v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v33 = (__m128i *)((char *)v33 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v33 != &v100 );
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
  v35 = _mm_load_si128((const __m128i *)v37);
  v100.m128i_i64[1] = 0;
  v100.m128i_i64[0] = (__int64)ida_mcp::tools::callers::`anonymous namespace'::handle_get_callees;
  *(__m128i *)v101 = v35;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v101[0] )
    v101[0](&v100, &v100, 3);
  if ( v118 && v117 && v115 != (ida_mcp::tools::callers *)v116 )
    operator delete(v115, v116[0] + 1LL);
  if ( v114 )
  {
    v114 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v109 != v111 )
    operator delete(v109, v111[0] + 1LL);
  if ( v106 != v108 )
    operator delete(v106, v108[0] + 1LL);
  return v119 - __readfsqword(0x28u);
}

