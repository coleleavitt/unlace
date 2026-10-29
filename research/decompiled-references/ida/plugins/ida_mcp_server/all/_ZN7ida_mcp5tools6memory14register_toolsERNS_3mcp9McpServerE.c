unsigned __int64 __fastcall ida_mcp::tools::memory::register_tools(
        ida_mcp::tools::memory *this,
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
  int *v15; // r12
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
  int *v33; // rbp
  __int64 v34; // rax
  __m128i v35; // xmm3
  int v37[4]; // [rsp+50h] [rbp-3B8h] BYREF
  void **v38; // [rsp+60h] [rbp-3A8h]
  ida_mcp::tools::memory *v39; // [rsp+68h] [rbp-3A0h]
  const __m128i *v40; // [rsp+70h] [rbp-398h]
  const __m128i *v41; // [rsp+78h] [rbp-390h]
  const __m128i *v42; // [rsp+80h] [rbp-388h]
  char *v43; // [rsp+88h] [rbp-380h]
  char *v44; // [rsp+90h] [rbp-378h]
  char *v45; // [rsp+98h] [rbp-370h]
  char *v46; // [rsp+A0h] [rbp-368h]
  __int64 *v47; // [rsp+A8h] [rbp-360h]
  char *v48; // [rsp+B0h] [rbp-358h]
  char *v49; // [rsp+B8h] [rbp-350h]
  char *v50; // [rsp+C0h] [rbp-348h]
  __m128i *v51; // [rsp+C8h] [rbp-340h]
  char *v52; // [rsp+D0h] [rbp-338h]
  __int64 *v53; // [rsp+D8h] [rbp-330h]
  char *v54; // [rsp+E0h] [rbp-328h]
  int v55[2]; // [rsp+E8h] [rbp-320h]
  int v56[2]; // [rsp+F0h] [rbp-318h]
  char *v57; // [rsp+F8h] [rbp-310h]
  int v58[2]; // [rsp+100h] [rbp-308h]
  int v59[2]; // [rsp+108h] [rbp-300h]
  void **v60; // [rsp+110h] [rbp-2F8h]
  __int64 *v61; // [rsp+118h] [rbp-2F0h]
  __m128i v62; // [rsp+120h] [rbp-2E8h] BYREF
  char v63; // [rsp+130h] [rbp-2D8h] BYREF
  __int64 v64; // [rsp+138h] [rbp-2D0h] BYREF
  char v65; // [rsp+140h] [rbp-2C8h] BYREF
  int v66[4]; // [rsp+148h] [rbp-2C0h]
  __int64 v67; // [rsp+160h] [rbp-2A8h] BYREF
  char v68; // [rsp+168h] [rbp-2A0h] BYREF
  __int64 v69; // [rsp+170h] [rbp-298h]
  char v70; // [rsp+180h] [rbp-288h] BYREF
  int v71[4]; // [rsp+188h] [rbp-280h]
  char v72; // [rsp+198h] [rbp-270h]
  int v73[4]; // [rsp+1A0h] [rbp-268h]
  char v74; // [rsp+1B0h] [rbp-258h] BYREF
  int v75[4]; // [rsp+1B8h] [rbp-250h]
  char v76; // [rsp+1C8h] [rbp-240h]
  int v77[4]; // [rsp+1D0h] [rbp-238h]
  char v78; // [rsp+1E0h] [rbp-228h] BYREF
  __int64 v79[2]; // [rsp+1E8h] [rbp-220h]
  char v80; // [rsp+1F8h] [rbp-210h]
  int v81[4]; // [rsp+200h] [rbp-208h]
  __m128i v82; // [rsp+210h] [rbp-1F8h] BYREF
  __int64 v83; // [rsp+220h] [rbp-1E8h]
  __int64 v84; // [rsp+228h] [rbp-1E0h] BYREF
  char v85; // [rsp+230h] [rbp-1D8h] BYREF
  __int64 v86; // [rsp+238h] [rbp-1D0h]
  char v87; // [rsp+240h] [rbp-1C8h] BYREF
  int v88[4]; // [rsp+248h] [rbp-1C0h]
  __int64 v89; // [rsp+258h] [rbp-1B0h] BYREF
  char v90; // [rsp+260h] [rbp-1A8h] BYREF
  __int64 v91; // [rsp+268h] [rbp-1A0h]
  char v92; // [rsp+270h] [rbp-198h] BYREF
  int v93[4]; // [rsp+278h] [rbp-190h]
  char v94; // [rsp+288h] [rbp-180h] BYREF
  char v95; // [rsp+290h] [rbp-178h] BYREF
  __int64 v96; // [rsp+298h] [rbp-170h]
  char v97; // [rsp+2A0h] [rbp-168h] BYREF
  int v98[4]; // [rsp+2A8h] [rbp-160h]
  __m128i v99; // [rsp+2B8h] [rbp-150h]
  __int64 v100; // [rsp+2C8h] [rbp-140h]
  int v101[2]; // [rsp+2D0h] [rbp-138h] BYREF
  __int64 v102; // [rsp+2D8h] [rbp-130h]
  void (__fastcall *v103[3])(int *, int *, __int64); // [rsp+2E0h] [rbp-128h] BYREF
  __int64 v104; // [rsp+2F8h] [rbp-110h]
  int v105[4]; // [rsp+300h] [rbp-108h] BYREF
  __int64 v106; // [rsp+310h] [rbp-F8h]
  char v107; // [rsp+318h] [rbp-F0h] BYREF
  void *v108; // [rsp+320h] [rbp-E8h] BYREF
  __int64 v109; // [rsp+328h] [rbp-E0h]
  _QWORD v110[2]; // [rsp+330h] [rbp-D8h] BYREF
  void *v111; // [rsp+340h] [rbp-C8h] BYREF
  __int64 v112; // [rsp+348h] [rbp-C0h]
  _QWORD v113[2]; // [rsp+350h] [rbp-B8h] BYREF
  char v114; // [rsp+360h] [rbp-A8h]
  __int64 v115; // [rsp+368h] [rbp-A0h] BYREF
  char v116; // [rsp+380h] [rbp-88h]
  ida_mcp::tools::memory *v117; // [rsp+388h] [rbp-80h]
  _QWORD v118[2]; // [rsp+398h] [rbp-70h] BYREF
  char v119; // [rsp+3A8h] [rbp-60h]
  char v120; // [rsp+3B8h] [rbp-50h]
  unsigned __int64 v121; // [rsp+3C8h] [rbp-40h]

  v39 = this;
  v121 = __readfsqword(0x28u);
  v108 = v110;
  v109 = 0;
  LOBYTE(v110[0]) = 0;
  v111 = v113;
  v112 = 0;
  LOBYTE(v113[0]) = 0;
  v38 = &v108;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v120 = 0;
  std::string::_M_replace();
  v60 = &v111;
  std::string::_M_replace();
  *(_QWORD *)v71 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v70 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v72 = 0;
  *(_QWORD *)v73 = 0;
  *(_OWORD *)v71 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v72 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v43 = &v70;
  *(_OWORD *)v73 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v101,
    (const __m128i *)&v70);
  v103[0] = nullptr;
  v92 = 0;
  *(_QWORD *)v93 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v92 = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)(v4 + 8) = 10;
  v87 = 0;
  *(_QWORD *)v88 = 0;
  *(_OWORD *)v93 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v87 = 3;
  v5 = operator new(0x20u);
  strcpy((char *)(v5 + 16), "address");
  *(_QWORD *)v5 = v5 + 16;
  *(_QWORD *)(v5 + 8) = 7;
  v74 = 0;
  *(_QWORD *)v75 = 0;
  *(_OWORD *)v88 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v74 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  v76 = 0;
  *(_QWORD *)v77 = 0;
  *(_OWORD *)v75 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v76 = 3;
  v7 = operator new(0x20u);
  *(_QWORD *)v7 = v7 + 16;
  strcpy((char *)(v7 + 16), "string");
  *(_QWORD *)(v7 + 8) = 6;
  v44 = &v74;
  *(_OWORD *)v77 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v82,
    (const __m128i *)&v74);
  v83 = 0;
  v78 = 0;
  v79[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v78 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "description");
  *(_QWORD *)(v8 + 8) = 11;
  v80 = 0;
  *(_QWORD *)v81 = 0;
  *(_OWORD *)v79 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v80 = 3;
  v9 = operator new(0x20u);
  *(_QWORD *)v9 = v9 + 16;
  strcpy((char *)(v9 + 16), "Hex address");
  *(_QWORD *)(v9 + 8) = 11;
  v45 = &v78;
  *(_QWORD *)v55 = &v84;
  *(_OWORD *)v81 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v84,
    (const __m128i *)&v78);
  v86 = 0;
  *(_QWORD *)v56 = &v89;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v89,
    &v82);
  v91 = 0;
  v41 = (const __m128i *)&v87;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v67,
    (const __m128i *)&v87);
  v69 = 0;
  v57 = &v94;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v96 = 0;
  v40 = (const __m128i *)&v92;
  *(_QWORD *)v58 = &v103[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v103[1],
    (const __m128i *)&v92);
  v104 = 0;
  v97 = 0;
  *(_QWORD *)v98 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v97 = 3;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v10 + 16;
  strcpy((char *)(v10 + 16), "required");
  *(_QWORD *)(v10 + 8) = 8;
  *(_QWORD *)v66 = 0;
  *(_OWORD *)v98 = (unsigned __int64)v10;
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
  v100 = 0;
  v42 = (const __m128i *)&v97;
  *(_QWORD *)v59 = v105;
  v99 = v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v105,
    (const __m128i *)&v97);
  v106 = 0;
  v63 = 0;
  v52 = &v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v14 = v114;
  v15 = (int *)&v107;
  v16 = v64;
  v114 = v63;
  v63 = v14;
  v64 = v115;
  v115 = v16;
  v53 = &v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v15 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v15 != v101 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v50 = &v95;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v46 = &v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v49 = &v90;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v48 = &v85;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v47 = &v82.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)v37);
  v102 = 0;
  *(_QWORD *)v101 = ida_mcp::tools::memory::`anonymous namespace'::handle_get_address_info;
  *(__m128i *)v103 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v103[0] )
    v103[0](v101, v101, 3);
  if ( v120 && v119 && v117 != (ida_mcp::tools::memory *)v118 )
    operator delete(v117, v118[0] + 1LL);
  if ( v116 )
  {
    v116 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v61 = &v115;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v111 != v113 )
    operator delete(v111, v113[0] + 1LL);
  if ( v108 != v110 )
    operator delete(v108, v110[0] + 1LL);
  v108 = v110;
  v109 = 0;
  LOBYTE(v110[0]) = 0;
  v111 = v113;
  v112 = 0;
  LOBYTE(v113[0]) = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v120 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v70 = 0;
  *(_QWORD *)v71 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v70 = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "type");
  *(_QWORD *)(v18 + 8) = 4;
  v72 = 0;
  *(_QWORD *)v73 = 0;
  *(_OWORD *)v71 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v72 = 3;
  v19 = operator new(0x20u);
  *(_QWORD *)v19 = v19 + 16;
  v20 = (const __m128i *)v43;
  strcpy((char *)(v19 + 16), "object");
  *(_QWORD *)(v19 + 8) = 6;
  *(_OWORD *)v73 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v101,
    v20);
  v103[0] = nullptr;
  v92 = 0;
  *(_QWORD *)v93 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v92 = 3;
  v21 = operator new(0x20u);
  *(_QWORD *)v21 = v21 + 16;
  strcpy((char *)(v21 + 16), "properties");
  *(_QWORD *)(v21 + 8) = 10;
  v87 = 0;
  *(_QWORD *)v88 = 0;
  *(_OWORD *)v93 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v87 = 3;
  v22 = operator new(0x20u);
  strcpy((char *)(v22 + 16), "address");
  *(_QWORD *)v22 = v22 + 16;
  *(_QWORD *)(v22 + 8) = 7;
  v74 = 0;
  *(_QWORD *)v75 = 0;
  *(_OWORD *)v88 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v74 = 3;
  v23 = operator new(0x20u);
  *(_QWORD *)v23 = v23 + 16;
  strcpy((char *)(v23 + 16), "type");
  *(_QWORD *)(v23 + 8) = 4;
  v76 = 0;
  *(_QWORD *)v77 = 0;
  *(_OWORD *)v75 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v76 = 3;
  v24 = operator new(0x20u);
  v25 = (const __m128i *)v44;
  *(_QWORD *)v24 = v24 + 16;
  strcpy((char *)(v24 + 16), "string");
  *(_QWORD *)(v24 + 8) = 6;
  *(_OWORD *)v77 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v82,
    v25);
  v83 = 0;
  v78 = 0;
  v79[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v78 = 3;
  v26 = operator new(0x20u);
  *(_QWORD *)v26 = v26 + 16;
  strcpy((char *)(v26 + 16), "description");
  *(_QWORD *)(v26 + 8) = 11;
  v80 = 0;
  *(_QWORD *)v81 = 0;
  *(_OWORD *)v79 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v80 = 3;
  v27 = operator new(0x20u);
  v28 = (const __m128i *)v45;
  *(_QWORD *)v27 = v27 + 16;
  v29 = *(_QWORD **)v55;
  strcpy((char *)(v27 + 16), "Hex address");
  *(_QWORD *)(v27 + 8) = 11;
  *(_OWORD *)v81 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v29,
    v28);
  v86 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v56,
    &v82);
  v91 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v67,
    v41);
  v69 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v96 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v58,
    v40);
  v104 = 0;
  v97 = 0;
  *(_QWORD *)v98 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v97 = 3;
  v30 = operator new(0x20u);
  *(_QWORD *)v30 = v30 + 16;
  strcpy((char *)(v30 + 16), "required");
  *(_QWORD *)(v30 + 8) = 8;
  v65 = 0;
  *(_QWORD *)v66 = 0;
  *(_OWORD *)v98 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v65 = 3;
  v31 = operator new(0x20u);
  *(_QWORD *)v31 = v31 + 16;
  strcpy((char *)(v31 + 16), "address");
  *(_QWORD *)(v31 + 8) = 7;
  *(_OWORD *)v66 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v32 = _mm_load_si128(&v62);
  v100 = 0;
  v99 = v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v59,
    v42);
  v63 = 0;
  v106 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  LOBYTE(v28) = v114;
  v33 = (int *)&v107;
  v114 = v63;
  v34 = v115;
  v63 = (char)v28;
  v115 = v64;
  v64 = v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v33 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v33 != v101 );
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
  v102 = 0;
  *(_QWORD *)v101 = ida_mcp::tools::memory::`anonymous namespace'::handle_is_address_valid;
  *(__m128i *)v103 = v35;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v103[0] )
    v103[0](v101, v101, 3);
  if ( v120 && v119 && v117 != (ida_mcp::tools::memory *)v118 )
    operator delete(v117, v118[0] + 1LL);
  if ( v116 )
  {
    v116 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v111 != v113 )
    operator delete(v111, v113[0] + 1LL);
  if ( v108 != v110 )
    operator delete(v108, v110[0] + 1LL);
  return v121 - __readfsqword(0x28u);
}

