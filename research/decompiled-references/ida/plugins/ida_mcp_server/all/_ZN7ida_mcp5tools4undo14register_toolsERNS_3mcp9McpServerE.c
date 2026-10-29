unsigned __int64 __fastcall ida_mcp::tools::undo::register_tools(
        ida_mcp::tools::undo *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __m128i si128; // xmm0
  __int64 v6; // rax
  __m128 v7; // xmm1
  __m128i v8; // xmm0
  char v9; // si
  __int64 v10; // rdx
  __m128i *v11; // rbp
  __int64 v12; // rbp
  __m128i v13; // xmm2
  __int64 v14; // rax
  __int64 v15; // rax
  const __m128i *v16; // rsi
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i *v22; // rbp
  __int64 v23; // rbp
  __m128i v24; // xmm3
  __int64 v25; // rax
  __int64 v26; // rax
  const __m128i *v27; // rsi
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rax
  __m128i *v33; // rbp
  __int64 v34; // rbp
  __m128i v35; // xmm4
  __int64 v36; // rax
  __int64 v37; // rax
  const __m128i *v38; // rsi
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rax
  __m128i *v44; // rbp
  __m128i v45; // xmm5
  int v47[4]; // [rsp+10h] [rbp-288h] BYREF
  int v48[2]; // [rsp+20h] [rbp-278h]
  int v49[2]; // [rsp+28h] [rbp-270h]
  int v50[2]; // [rsp+30h] [rbp-268h]
  int v51[2]; // [rsp+38h] [rbp-260h]
  int v52[2]; // [rsp+40h] [rbp-258h]
  int v53[2]; // [rsp+48h] [rbp-250h]
  int v54[2]; // [rsp+50h] [rbp-248h]
  int v55[2]; // [rsp+58h] [rbp-240h]
  int v56[2]; // [rsp+60h] [rbp-238h]
  char v57[8]; // [rsp+68h] [rbp-230h]
  char v58[8]; // [rsp+70h] [rbp-228h]
  __int64 *v59; // [rsp+78h] [rbp-220h]
  char v60[8]; // [rsp+80h] [rbp-218h]
  char v61[8]; // [rsp+88h] [rbp-210h]
  void **v62; // [rsp+90h] [rbp-208h]
  __int64 v63; // [rsp+98h] [rbp-200h]
  int v64[4]; // [rsp+A0h] [rbp-1F8h] BYREF
  char v65[16]; // [rsp+B0h] [rbp-1E8h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-1D8h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-1D0h] BYREF
  int v68; // [rsp+D0h] [rbp-1C8h] BYREF
  int v69[4]; // [rsp+D8h] [rbp-1C0h]
  char v70; // [rsp+E8h] [rbp-1B0h]
  __int128 v71; // [rsp+F0h] [rbp-1A8h] BYREF
  int v72; // [rsp+100h] [rbp-198h] BYREF
  __int128 v73; // [rsp+108h] [rbp-190h]
  int v74[4]; // [rsp+118h] [rbp-180h] BYREF
  __int64 v75; // [rsp+128h] [rbp-170h]
  int v76; // [rsp+130h] [rbp-168h] BYREF
  __int128 v77; // [rsp+138h] [rbp-160h]
  int v78[4]; // [rsp+148h] [rbp-150h] BYREF
  __int64 v79; // [rsp+158h] [rbp-140h]
  __m128i v80; // [rsp+160h] [rbp-138h] BYREF
  void (__fastcall *v81[3])(__m128i *, __m128i *, __int64); // [rsp+170h] [rbp-128h] BYREF
  __int64 v82; // [rsp+188h] [rbp-110h]
  char v83[16]; // [rsp+190h] [rbp-108h] BYREF
  __int64 v84; // [rsp+1A0h] [rbp-F8h]
  char v85; // [rsp+1A8h] [rbp-F0h] BYREF
  void *v86; // [rsp+1B0h] [rbp-E8h] BYREF
  __int64 v87; // [rsp+1B8h] [rbp-E0h]
  _QWORD v88[2]; // [rsp+1C0h] [rbp-D8h] BYREF
  void *v89; // [rsp+1D0h] [rbp-C8h] BYREF
  __int64 v90; // [rsp+1D8h] [rbp-C0h]
  _QWORD v91[2]; // [rsp+1E0h] [rbp-B8h] BYREF
  char v92; // [rsp+1F0h] [rbp-A8h]
  int v93[2]; // [rsp+1F8h] [rbp-A0h] BYREF
  char v94; // [rsp+210h] [rbp-88h]
  ida_mcp::tools::undo *v95; // [rsp+218h] [rbp-80h]
  _QWORD v96[2]; // [rsp+228h] [rbp-70h] BYREF
  char v97; // [rsp+238h] [rbp-60h]
  char v98; // [rsp+248h] [rbp-50h]
  unsigned __int64 v99; // [rsp+258h] [rbp-40h]

  *(_QWORD *)v49 = this;
  v99 = __readfsqword(0x28u);
  v86 = v88;
  v87 = 0;
  LOBYTE(v88[0]) = 0;
  v89 = v91;
  v90 = 0;
  LOBYTE(v91[0]) = 0;
  *(_QWORD *)v48 = &v86;
  v92 = 0;
  *(_QWORD *)v93 = 0;
  v94 = 0;
  v98 = 0;
  std::string::_M_replace();
  v62 = &v89;
  std::string::_M_replace();
  *(_QWORD *)v69 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v68) = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v70 = 0;
  *(_QWORD *)&v71 = 0;
  *(_OWORD *)v69 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v70 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  *(_QWORD *)v50 = &v68;
  v71 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v80,
    (const __m128i *)&v68,
    2);
  v81[0] = nullptr;
  LOBYTE(v72) = 0;
  *(_QWORD *)&v73 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v72) = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)(v4 + 8) = 10;
  *(_QWORD *)v56 = v64;
  v73 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  si128 = _mm_load_si128((const __m128i *)v64);
  v75 = 0;
  *(_QWORD *)v51 = &v72;
  *(_QWORD *)v60 = &v81[1];
  *(__m128i *)v74 = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v81[1],
    (const __m128i *)&v72,
    2);
  v82 = 0;
  LOBYTE(v76) = 0;
  *(_QWORD *)&v77 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v76) = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "required");
  v7 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v6 + 8) = 8;
  *(_QWORD *)v57 = v65;
  *(__m128 *)v47 = v7;
  v77 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v8 = _mm_load_si128((const __m128i *)v65);
  v79 = 0;
  *(_QWORD *)v52 = &v76;
  *(_QWORD *)v61 = v83;
  *(__m128i *)v78 = v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v83,
    (const __m128i *)&v76,
    2);
  v84 = 0;
  LOBYTE(v66) = 0;
  *(_QWORD *)v58 = &v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v66,
    &v80,
    3);
  v9 = v92;
  v10 = v67;
  v92 = v66;
  LOBYTE(v66) = v9;
  v67 = *(_QWORD *)v93;
  *(_QWORD *)v93 = v10;
  v59 = &v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *(_QWORD *)v53 = &v71;
  v11 = (__m128i *)&v85;
  do
  {
    v11 = (__m128i *)((char *)v11 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v11 != &v80 );
  v12 = *(_QWORD *)v53;
  *(_QWORD *)v54 = &v78[2];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *(_QWORD *)v53 = &v74[2];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v13 = _mm_load_si128((const __m128i *)v47);
  v80.m128i_i64[1] = 0;
  v80.m128i_i64[0] = (__int64)ida_mcp::tools::undo::`anonymous namespace'::create_undo_point_impl;
  *(__m128i *)v81 = v13;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v81[0] )
    v81[0](&v80, &v80, 3);
  if ( v98 && v97 && v95 != (ida_mcp::tools::undo *)v96 )
    operator delete(v95, v96[0] + 1LL);
  if ( v94 )
  {
    v94 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  *(_QWORD *)v55 = v93;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v89 != v91 )
    operator delete(v89, v91[0] + 1LL);
  if ( v86 != v88 )
    operator delete(v86, v88[0] + 1LL);
  v86 = v88;
  v87 = 0;
  LOBYTE(v88[0]) = 0;
  v89 = v91;
  v90 = 0;
  LOBYTE(v91[0]) = 0;
  v92 = 0;
  *(_QWORD *)v93 = 0;
  v94 = 0;
  v98 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  LOBYTE(v68) = 0;
  *(_QWORD *)v69 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v68) = 3;
  v14 = operator new(0x20u);
  strcpy((char *)(v14 + 16), "type");
  *(_QWORD *)v14 = v14 + 16;
  *(_QWORD *)(v14 + 8) = 4;
  v70 = 0;
  *(_QWORD *)&v71 = 0;
  *(_OWORD *)v69 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v70 = 3;
  v15 = operator new(0x20u);
  v16 = *(const __m128i **)v50;
  *(_QWORD *)v15 = v15 + 16;
  strcpy((char *)(v15 + 16), "object");
  *(_QWORD *)(v15 + 8) = 6;
  v71 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v80,
    v16,
    2);
  v81[0] = nullptr;
  LOBYTE(v72) = 0;
  *(_QWORD *)&v73 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v72) = 3;
  v17 = operator new(0x20u);
  *(_QWORD *)v17 = v17 + 16;
  strcpy((char *)(v17 + 16), "properties");
  *(_QWORD *)(v17 + 8) = 10;
  v73 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v18 = _mm_load_si128((const __m128i *)v64);
  v75 = 0;
  *(__m128i *)v74 = v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v60,
    *(const __m128i **)v51,
    2);
  v82 = 0;
  LOBYTE(v76) = 0;
  *(_QWORD *)&v77 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v76) = 3;
  v19 = operator new(0x20u);
  *(_QWORD *)v19 = v19 + 16;
  *(_QWORD *)(v19 + 8) = 8;
  strcpy((char *)(v19 + 16), "required");
  v77 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v20 = _mm_load_si128((const __m128i *)v65);
  v79 = 0;
  *(__m128i *)v78 = v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v61,
    *(const __m128i **)v52,
    2);
  v84 = 0;
  LOBYTE(v66) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v58,
    &v80,
    3);
  LOBYTE(v16) = v92;
  v92 = v66;
  v21 = *(_QWORD *)v93;
  LOBYTE(v66) = (_BYTE)v16;
  *(_QWORD *)v93 = v67;
  v67 = v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v63 = v12;
  v22 = (__m128i *)&v85;
  do
  {
    v22 = (__m128i *)((char *)v22 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v22 != &v80 );
  v23 = v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v24 = _mm_load_si128((const __m128i *)v47);
  v80.m128i_i64[1] = 0;
  v80.m128i_i64[0] = (__int64)ida_mcp::tools::undo::`anonymous namespace'::perform_undo_impl;
  *(__m128i *)v81 = v24;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v81[0] )
    v81[0](&v80, &v80, 3);
  if ( v98 && v97 && v95 != (ida_mcp::tools::undo *)v96 )
    operator delete(v95, v96[0] + 1LL);
  if ( v94 )
  {
    v94 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v89 != v91 )
    operator delete(v89, v91[0] + 1LL);
  if ( v86 != v88 )
    operator delete(v86, v88[0] + 1LL);
  v86 = v88;
  v87 = 0;
  LOBYTE(v88[0]) = 0;
  v89 = v91;
  v90 = 0;
  LOBYTE(v91[0]) = 0;
  v92 = 0;
  *(_QWORD *)v93 = 0;
  v94 = 0;
  v98 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  LOBYTE(v68) = 0;
  *(_QWORD *)v69 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v68) = 3;
  v25 = operator new(0x20u);
  strcpy((char *)(v25 + 16), "type");
  *(_QWORD *)v25 = v25 + 16;
  *(_QWORD *)(v25 + 8) = 4;
  v70 = 0;
  *(_QWORD *)&v71 = 0;
  *(_OWORD *)v69 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v70 = 3;
  v26 = operator new(0x20u);
  v27 = *(const __m128i **)v50;
  *(_QWORD *)v26 = v26 + 16;
  strcpy((char *)(v26 + 16), "object");
  *(_QWORD *)(v26 + 8) = 6;
  v71 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v80,
    v27,
    2);
  v81[0] = nullptr;
  LOBYTE(v72) = 0;
  *(_QWORD *)&v73 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v72) = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)(v28 + 8) = 10;
  *(_QWORD *)v28 = v28 + 16;
  strcpy((char *)(v28 + 16), "properties");
  v73 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v29 = _mm_load_si128((const __m128i *)v64);
  v75 = 0;
  *(__m128i *)v74 = v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v60,
    *(const __m128i **)v51,
    2);
  v82 = 0;
  LOBYTE(v76) = 0;
  *(_QWORD *)&v77 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v76) = 3;
  v30 = operator new(0x20u);
  *(_QWORD *)v30 = v30 + 16;
  *(_QWORD *)(v30 + 8) = 8;
  strcpy((char *)(v30 + 16), "required");
  v77 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v31 = _mm_load_si128((const __m128i *)v65);
  v79 = 0;
  *(__m128i *)v78 = v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v61,
    *(const __m128i **)v52,
    2);
  v84 = 0;
  LOBYTE(v66) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v58,
    &v80,
    3);
  LOBYTE(v27) = v92;
  v92 = v66;
  v32 = *(_QWORD *)v93;
  LOBYTE(v66) = (_BYTE)v27;
  *(_QWORD *)v93 = v67;
  v67 = v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v63 = v23;
  v33 = (__m128i *)&v85;
  do
  {
    v33 = (__m128i *)((char *)v33 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v33 != &v80 );
  v34 = v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v35 = _mm_load_si128((const __m128i *)v47);
  v80.m128i_i64[1] = 0;
  v80.m128i_i64[0] = (__int64)ida_mcp::tools::undo::`anonymous namespace'::perform_redo_impl;
  *(__m128i *)v81 = v35;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v81[0] )
    v81[0](&v80, &v80, 3);
  if ( v98 && v97 && v95 != (ida_mcp::tools::undo *)v96 )
    operator delete(v95, v96[0] + 1LL);
  if ( v94 )
  {
    v94 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v89 != v91 )
    operator delete(v89, v91[0] + 1LL);
  if ( v86 != v88 )
    operator delete(v86, v88[0] + 1LL);
  v86 = v88;
  v87 = 0;
  LOBYTE(v88[0]) = 0;
  v89 = v91;
  v90 = 0;
  LOBYTE(v91[0]) = 0;
  v92 = 0;
  *(_QWORD *)v93 = 0;
  v94 = 0;
  v98 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  LOBYTE(v68) = 0;
  *(_QWORD *)v69 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v68) = 3;
  v36 = operator new(0x20u);
  strcpy((char *)(v36 + 16), "type");
  *(_QWORD *)v36 = v36 + 16;
  *(_QWORD *)(v36 + 8) = 4;
  v70 = 0;
  *(_QWORD *)&v71 = 0;
  *(_OWORD *)v69 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v70 = 3;
  v37 = operator new(0x20u);
  *(_QWORD *)v37 = v37 + 16;
  v38 = *(const __m128i **)v50;
  strcpy((char *)(v37 + 16), "object");
  *(_QWORD *)(v37 + 8) = 6;
  v71 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v80,
    v38,
    2);
  v81[0] = nullptr;
  LOBYTE(v72) = 0;
  *(_QWORD *)&v73 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v72) = 3;
  v39 = operator new(0x20u);
  *(_QWORD *)v39 = v39 + 16;
  strcpy((char *)(v39 + 16), "properties");
  *(_QWORD *)(v39 + 8) = 10;
  v73 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v40 = _mm_load_si128((const __m128i *)v64);
  v75 = 0;
  *(__m128i *)v74 = v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v60,
    *(const __m128i **)v51,
    2);
  v82 = 0;
  LOBYTE(v76) = 0;
  *(_QWORD *)&v77 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v76) = 3;
  v41 = operator new(0x20u);
  *(_QWORD *)v41 = v41 + 16;
  *(_QWORD *)(v41 + 8) = 8;
  strcpy((char *)(v41 + 16), "required");
  v77 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v42 = _mm_load_si128((const __m128i *)v65);
  v79 = 0;
  *(__m128i *)v78 = v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v61,
    *(const __m128i **)v52,
    2);
  v84 = 0;
  LOBYTE(v66) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v58,
    &v80,
    3);
  LOBYTE(v38) = v92;
  v92 = v66;
  v43 = *(_QWORD *)v93;
  LOBYTE(v66) = (_BYTE)v38;
  *(_QWORD *)v93 = v67;
  v67 = v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *(_QWORD *)v50 = v34;
  v44 = (__m128i *)&v85;
  do
  {
    v44 = (__m128i *)((char *)v44 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v44 != &v80 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v45 = _mm_load_si128((const __m128i *)v47);
  v80.m128i_i64[1] = 0;
  v80.m128i_i64[0] = (__int64)ida_mcp::tools::undo::`anonymous namespace'::get_undo_label_impl;
  *(__m128i *)v81 = v45;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v81[0] )
    v81[0](&v80, &v80, 3);
  if ( v98 && v97 && v95 != (ida_mcp::tools::undo *)v96 )
    operator delete(v95, v96[0] + 1LL);
  if ( v94 )
  {
    v94 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v89 != v91 )
    operator delete(v89, v91[0] + 1LL);
  if ( v86 != v88 )
    operator delete(v86, v88[0] + 1LL);
  return v99 - __readfsqword(0x28u);
}

