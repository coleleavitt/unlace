unsigned __int64 __fastcall ida_mcp::tools::signatures::register_tools(
        ida_mcp::tools::signatures *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __m128 v5; // xmm1
  __m128i v6; // xmm0
  char v7; // si
  __int64 v8; // rdx
  __m128i si128; // xmm2
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i v25; // xmm0
  char v26; // si
  __m128i *v27; // rbp
  __int64 v28; // rax
  __m128i v29; // xmm3
  int v31[4]; // [rsp+10h] [rbp-3A8h] BYREF
  int v32[2]; // [rsp+20h] [rbp-398h]
  char v33[8]; // [rsp+28h] [rbp-390h]
  int v34[2]; // [rsp+30h] [rbp-388h]
  int v35[2]; // [rsp+38h] [rbp-380h]
  int v36[2]; // [rsp+40h] [rbp-378h]
  int v37[2]; // [rsp+48h] [rbp-370h]
  char v38[8]; // [rsp+50h] [rbp-368h]
  int v39[2]; // [rsp+58h] [rbp-360h]
  int v40[2]; // [rsp+60h] [rbp-358h]
  char v41[8]; // [rsp+68h] [rbp-350h]
  __int128 *v42; // [rsp+70h] [rbp-348h]
  __int128 *v43; // [rsp+78h] [rbp-340h]
  __int128 *v44; // [rsp+80h] [rbp-338h]
  __int128 *v45; // [rsp+88h] [rbp-330h]
  __int8 *v46; // [rsp+90h] [rbp-328h]
  __m128i *v47; // [rsp+98h] [rbp-320h]
  __int64 *v48; // [rsp+A0h] [rbp-318h]
  __int64 *v49; // [rsp+A8h] [rbp-310h]
  char *v50; // [rsp+B0h] [rbp-308h]
  char *v51; // [rsp+B8h] [rbp-300h]
  char *v52; // [rsp+C0h] [rbp-2F8h]
  char *v53; // [rsp+C8h] [rbp-2F0h]
  __m128i v54; // [rsp+D0h] [rbp-2E8h] BYREF
  char v55[8]; // [rsp+E0h] [rbp-2D8h] BYREF
  __int64 v56; // [rsp+E8h] [rbp-2D0h] BYREF
  char v57; // [rsp+F0h] [rbp-2C8h]
  int v58[4]; // [rsp+F8h] [rbp-2C0h] BYREF
  __m128i v59; // [rsp+110h] [rbp-2A8h] BYREF
  __int64 v60; // [rsp+120h] [rbp-298h]
  char v61; // [rsp+130h] [rbp-288h] BYREF
  int v62[4]; // [rsp+138h] [rbp-280h] BYREF
  char v63; // [rsp+148h] [rbp-270h]
  int v64[4]; // [rsp+150h] [rbp-268h] BYREF
  char v65; // [rsp+160h] [rbp-258h] BYREF
  char v66[16]; // [rsp+168h] [rbp-250h] BYREF
  char v67; // [rsp+178h] [rbp-240h]
  __int128 v68; // [rsp+180h] [rbp-238h] BYREF
  char v69; // [rsp+190h] [rbp-228h] BYREF
  __int128 v70; // [rsp+198h] [rbp-220h] BYREF
  char v71; // [rsp+1A8h] [rbp-210h]
  __int128 v72; // [rsp+1B0h] [rbp-208h] BYREF
  _QWORD v73[3]; // [rsp+1C0h] [rbp-1F8h] BYREF
  _QWORD v74[3]; // [rsp+1D8h] [rbp-1E0h] BYREF
  char v75; // [rsp+1F0h] [rbp-1C8h] BYREF
  __int128 v76; // [rsp+1F8h] [rbp-1C0h] BYREF
  _QWORD v77[3]; // [rsp+208h] [rbp-1B0h] BYREF
  int v78; // [rsp+220h] [rbp-198h] BYREF
  __int128 v79; // [rsp+228h] [rbp-190h]
  __int64 v80; // [rsp+238h] [rbp-180h] BYREF
  int v81[4]; // [rsp+240h] [rbp-178h] BYREF
  int v82; // [rsp+250h] [rbp-168h] BYREF
  __int128 v83; // [rsp+258h] [rbp-160h]
  __m128i v84; // [rsp+268h] [rbp-150h] BYREF
  __int64 v85; // [rsp+278h] [rbp-140h]
  __m128i v86; // [rsp+280h] [rbp-138h] BYREF
  char v87[16]; // [rsp+290h] [rbp-128h] BYREF
  __int64 v88; // [rsp+2A8h] [rbp-110h]
  _QWORD v89[3]; // [rsp+2B0h] [rbp-108h] BYREF
  char v90; // [rsp+2C8h] [rbp-F0h] BYREF
  void *v91; // [rsp+2D0h] [rbp-E8h]
  __int64 v92; // [rsp+2D8h] [rbp-E0h]
  _QWORD v93[2]; // [rsp+2E0h] [rbp-D8h] BYREF
  void *v94; // [rsp+2F0h] [rbp-C8h]
  __int64 v95; // [rsp+2F8h] [rbp-C0h]
  _QWORD v96[2]; // [rsp+300h] [rbp-B8h] BYREF
  char v97; // [rsp+310h] [rbp-A8h]
  __int64 v98; // [rsp+318h] [rbp-A0h] BYREF
  char v99; // [rsp+330h] [rbp-88h]
  ida_mcp::tools::signatures *v100; // [rsp+338h] [rbp-80h]
  _QWORD v101[2]; // [rsp+348h] [rbp-70h] BYREF
  char v102; // [rsp+358h] [rbp-60h]
  char v103; // [rsp+368h] [rbp-50h]
  unsigned __int64 v104; // [rsp+378h] [rbp-40h]

  *(_QWORD *)v34 = this;
  v104 = __readfsqword(0x28u);
  v91 = v93;
  v92 = 0;
  LOBYTE(v93[0]) = 0;
  v94 = v96;
  v95 = 0;
  LOBYTE(v96[0]) = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v103 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  *(_QWORD *)&v79 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v78) = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  LOBYTE(v80) = 0;
  *(_QWORD *)v81 = 0;
  *(_QWORD *)v32 = v81;
  v79 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v80) = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  *(_QWORD *)v35 = &v78;
  *(_OWORD *)v81 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v86,
    (const __m128i *)&v78,
    2);
  *(_QWORD *)v87 = 0;
  LOBYTE(v82) = 0;
  *(_QWORD *)&v83 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v82) = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  v5 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v4 + 8) = 10;
  v47 = &v54;
  *(__m128 *)v31 = v5;
  v83 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v6 = _mm_load_si128(&v54);
  v85 = 0;
  *(_QWORD *)v36 = &v82;
  *(_QWORD *)v38 = &v87[8];
  v84 = v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v87[8],
    (const __m128i *)&v82,
    2);
  v88 = 0;
  v55[0] = 0;
  *(_QWORD *)v33 = v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v55,
    &v86,
    2);
  v7 = v97;
  v8 = v56;
  v97 = v55[0];
  v55[0] = v7;
  v56 = v98;
  v98 = v8;
  v48 = &v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v46 = &v84.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)v31);
  v86.m128i_i64[1] = 0;
  v86.m128i_i64[0] = (__int64)ida_mcp::tools::signatures::`anonymous namespace'::handle_list_signatures;
  *(__m128i *)v87 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)v87 )
    (*(void (__fastcall **)(__m128i *, __m128i *, __int64))v87)(&v86, &v86, 3);
  if ( v103 && v102 && v100 != (ida_mcp::tools::signatures *)v101 )
    operator delete(v100, v101[0] + 1LL);
  if ( v99 )
  {
    v99 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v49 = &v98;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v94 != v96 )
    operator delete(v94, v96[0] + 1LL);
  if ( v91 != v93 )
    operator delete(v91, v93[0] + 1LL);
  v91 = v93;
  v92 = 0;
  LOBYTE(v93[0]) = 0;
  v94 = v96;
  v95 = 0;
  LOBYTE(v96[0]) = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v103 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v61 = 0;
  *(_QWORD *)v39 = v62;
  *(_QWORD *)v62 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v61 = 3;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v10 + 16;
  strcpy((char *)(v10 + 16), "type");
  *(_QWORD *)(v10 + 8) = 4;
  v63 = 0;
  *(_QWORD *)v64 = 0;
  *(_QWORD *)v40 = v64;
  *(_OWORD *)v62 = (unsigned __int64)v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v63 = 3;
  v11 = operator new(0x20u);
  *(_QWORD *)v11 = v11 + 16;
  strcpy((char *)(v11 + 16), "object");
  *(_QWORD *)(v11 + 8) = 6;
  v51 = &v61;
  *(_OWORD *)v64 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v86,
    (const __m128i *)&v61,
    2);
  *(_QWORD *)v87 = 0;
  LOBYTE(v78) = 0;
  *(_QWORD *)&v79 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v78) = 3;
  v12 = operator new(0x20u);
  *(_QWORD *)v12 = v12 + 16;
  strcpy((char *)(v12 + 16), "properties");
  *(_QWORD *)(v12 + 8) = 10;
  v75 = 0;
  *(_QWORD *)&v76 = 0;
  v45 = &v76;
  v79 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v75 = 3;
  v13 = operator new(0x20u);
  *(_QWORD *)v13 = v13 + 16;
  strcpy((char *)(v13 + 16), "name");
  *(_QWORD *)(v13 + 8) = 4;
  v65 = 0;
  *(_QWORD *)v66 = 0;
  *(_QWORD *)v41 = v66;
  v76 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v65 = 3;
  v14 = operator new(0x20u);
  *(_QWORD *)v14 = v14 + 16;
  strcpy((char *)(v14 + 16), "type");
  *(_QWORD *)(v14 + 8) = 4;
  v67 = 0;
  *(_QWORD *)&v68 = 0;
  v42 = &v68;
  *(_OWORD *)v66 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v67 = 3;
  v15 = operator new(0x20u);
  *(_QWORD *)v15 = v15 + 16;
  strcpy((char *)(v15 + 16), "string");
  *(_QWORD *)(v15 + 8) = 6;
  v52 = &v65;
  *(_QWORD *)v37 = v73;
  v68 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v73,
    (const __m128i *)&v65,
    2);
  v73[2] = 0;
  v69 = 0;
  *(_QWORD *)&v70 = 0;
  v43 = &v70;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v69 = 3;
  v16 = operator new(0x20u);
  *(_QWORD *)v16 = v16 + 16;
  strcpy((char *)(v16 + 16), "description");
  *(_QWORD *)(v16 + 8) = 11;
  v71 = 0;
  *(_QWORD *)&v72 = 0;
  v44 = &v72;
  v70 = (unsigned __int64)v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v71 = 3;
  v17 = (__int64 *)operator new(0x20u);
  *v17 = (__int64)(v17 + 2);
  *(_QWORD *)v55 = 63;
  v18 = std::string::_M_create();
  v19 = *(_QWORD *)v55;
  v20 = _mm_load_si128((const __m128i *)&xmmword_3E2640);
  *v17 = v18;
  v17[2] = v19;
  *(__m128i *)v18 = v20;
  *(__m128i *)(v18 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E2650);
  *(__m128i *)(v18 + 32) = _mm_load_si128((const __m128i *)&xmmword_3E2660);
  *(__m128i *)(v18 + 47) = _mm_load_si128((const __m128i *)&xmmword_3E2670);
  v21 = *(_QWORD *)v55;
  v22 = *v17;
  v17[1] = *(_QWORD *)v55;
  *(_BYTE *)(v22 + v21) = 0;
  v53 = &v69;
  v72 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v74,
    (const __m128i *)&v69,
    2);
  v74[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v77,
    *(const __m128i **)v37,
    2);
  v77[2] = 0;
  v50 = &v75;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v59,
    (const __m128i *)&v75,
    2);
  v60 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v80,
    &v59,
    1);
  *(_QWORD *)&v81[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v38,
    *(const __m128i **)v35,
    2);
  v88 = 0;
  LOBYTE(v82) = 0;
  *(_QWORD *)&v83 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v82) = 3;
  v23 = operator new(0x20u);
  *(_QWORD *)v23 = v23 + 16;
  strcpy((char *)(v23 + 16), "required");
  *(_QWORD *)(v23 + 8) = 8;
  v57 = 0;
  *(_QWORD *)v58 = 0;
  *(_QWORD *)v38 = v58;
  v83 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v57 = 3;
  v24 = operator new(0x20u);
  *(_QWORD *)v24 = v24 + 16;
  strcpy((char *)(v24 + 16), "name");
  *(_QWORD *)(v24 + 8) = 4;
  *(_OWORD *)v58 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v25 = _mm_load_si128(&v54);
  v85 = 0;
  v84 = v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v89,
    *(const __m128i **)v36,
    2);
  v89[2] = 0;
  v55[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v33,
    &v86,
    3);
  v26 = v97;
  v27 = (__m128i *)&v90;
  v97 = v55[0];
  v28 = v98;
  v55[0] = v26;
  v98 = v56;
  v56 = v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v27 = (__m128i *)((char *)v27 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v27 != &v86 );
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
  v29 = _mm_load_si128((const __m128i *)v31);
  v86.m128i_i64[1] = 0;
  v86.m128i_i64[0] = (__int64)ida_mcp::tools::signatures::`anonymous namespace'::handle_apply_signature;
  *(__m128i *)v87 = v29;
  ida_mcp::mcp::McpServer::register_tool();
  if ( *(_QWORD *)v87 )
    (*(void (__fastcall **)(__m128i *, __m128i *, __int64))v87)(&v86, &v86, 3);
  if ( v103 && v102 && v100 != (ida_mcp::tools::signatures *)v101 )
    operator delete(v100, v101[0] + 1LL);
  if ( v99 )
  {
    v99 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v94 != v96 )
    operator delete(v94, v96[0] + 1LL);
  if ( v91 != v93 )
    operator delete(v91, v93[0] + 1LL);
  return v104 - __readfsqword(0x28u);
}

