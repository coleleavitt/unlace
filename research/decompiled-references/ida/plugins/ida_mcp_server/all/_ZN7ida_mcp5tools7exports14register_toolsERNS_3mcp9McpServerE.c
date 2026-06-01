unsigned __int64 __fastcall ida_mcp::tools::exports::register_tools(
        ida_mcp::tools::exports *this,
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
  __m128 v11; // xmm1
  __m128i *v12; // r12
  char v13; // si
  __int64 v14; // rax
  __m128i si128; // xmm2
  int v17[4]; // [rsp+40h] [rbp-2F8h] BYREF
  int v18[2]; // [rsp+50h] [rbp-2E8h]
  int v19[2]; // [rsp+58h] [rbp-2E0h]
  int v20[2]; // [rsp+60h] [rbp-2D8h]
  char v21[8]; // [rsp+68h] [rbp-2D0h]
  char *v22; // [rsp+70h] [rbp-2C8h]
  char *v23; // [rsp+78h] [rbp-2C0h]
  __int64 v24; // [rsp+80h] [rbp-2B8h] BYREF
  __int64 v25; // [rsp+88h] [rbp-2B0h]
  __m128i v26; // [rsp+90h] [rbp-2A8h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-298h]
  char v28; // [rsp+B0h] [rbp-288h] BYREF
  int v29[4]; // [rsp+B8h] [rbp-280h]
  char v30; // [rsp+C8h] [rbp-270h]
  int v31[4]; // [rsp+D0h] [rbp-268h]
  char v32; // [rsp+E0h] [rbp-258h] BYREF
  int v33[4]; // [rsp+E8h] [rbp-250h]
  char v34; // [rsp+F8h] [rbp-240h]
  int v35[4]; // [rsp+100h] [rbp-238h]
  char v36; // [rsp+110h] [rbp-228h] BYREF
  int v37[4]; // [rsp+118h] [rbp-220h]
  char v38; // [rsp+128h] [rbp-210h]
  int v39[4]; // [rsp+130h] [rbp-208h]
  char v40; // [rsp+140h] [rbp-1F8h] BYREF
  __int128 v41; // [rsp+148h] [rbp-1F0h]
  __int64 v42; // [rsp+158h] [rbp-1E0h]
  __int64 v43; // [rsp+160h] [rbp-1D8h]
  __int64 v44; // [rsp+168h] [rbp-1D0h]
  int v45; // [rsp+170h] [rbp-1C8h] BYREF
  int v46[4]; // [rsp+178h] [rbp-1C0h]
  _QWORD v47[3]; // [rsp+188h] [rbp-1B0h] BYREF
  char v48; // [rsp+1A0h] [rbp-198h] BYREF
  int v49[4]; // [rsp+1A8h] [rbp-190h]
  _QWORD v50[3]; // [rsp+1B8h] [rbp-180h] BYREF
  __m128i v51; // [rsp+1D0h] [rbp-168h] BYREF
  __int64 v52; // [rsp+1E0h] [rbp-158h]
  _QWORD v53[3]; // [rsp+1E8h] [rbp-150h] BYREF
  __m128i v54; // [rsp+200h] [rbp-138h] BYREF
  void (__fastcall *v55[3])(__m128i *, __m128i *, __int64); // [rsp+210h] [rbp-128h] BYREF
  __int64 v56; // [rsp+228h] [rbp-110h]
  _QWORD v57[3]; // [rsp+230h] [rbp-108h] BYREF
  char v58; // [rsp+248h] [rbp-F0h] BYREF
  void *v59[2]; // [rsp+250h] [rbp-E8h] BYREF
  _QWORD v60[2]; // [rsp+260h] [rbp-D8h] BYREF
  void *v61; // [rsp+270h] [rbp-C8h]
  __int64 v62; // [rsp+278h] [rbp-C0h]
  _QWORD v63[2]; // [rsp+280h] [rbp-B8h] BYREF
  char v64; // [rsp+290h] [rbp-A8h]
  __int64 v65; // [rsp+298h] [rbp-A0h]
  char v66; // [rsp+2B0h] [rbp-88h]
  ida_mcp::tools::exports *v67; // [rsp+2B8h] [rbp-80h]
  __int64 v68; // [rsp+2C8h] [rbp-70h] BYREF
  char v69; // [rsp+2D8h] [rbp-60h]
  char v70; // [rsp+2E8h] [rbp-50h]
  unsigned __int64 v71; // [rsp+2F8h] [rbp-40h]

  *(_QWORD *)v19 = this;
  v71 = __readfsqword(0x28u);
  v59[0] = v60;
  v59[1] = nullptr;
  LOBYTE(v60[0]) = 0;
  v61 = v63;
  v62 = 0;
  LOBYTE(v63[0]) = 0;
  *(_QWORD *)v18 = v59;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v70 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  *(_QWORD *)v29 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v28 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v30 = 0;
  *(_QWORD *)v31 = 0;
  *(_OWORD *)v29 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v30 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  *(_QWORD *)v21 = &v28;
  *(_OWORD *)v31 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v51,
    (const __m128i *)&v28,
    2);
  v52 = 0;
  v48 = 0;
  *(_QWORD *)v49 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v48 = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)(v4 + 8) = 10;
  LOBYTE(v45) = 0;
  *(_QWORD *)v46 = 0;
  *(_OWORD *)v49 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v45) = 3;
  v5 = operator new(0x20u);
  *(_DWORD *)(v5 + 16) = 1768778092;
  *(_QWORD *)v5 = v5 + 16;
  *(_BYTE *)(v5 + 20) = 116;
  *(_QWORD *)(v5 + 8) = 5;
  *(_BYTE *)(v5 + 21) = 0;
  v32 = 0;
  *(_QWORD *)v33 = 0;
  *(_OWORD *)v46 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v32 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  v34 = 0;
  *(_QWORD *)v35 = 0;
  *(_OWORD *)v33 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v34 = 3;
  v7 = operator new(0x20u);
  strcpy((char *)(v7 + 16), "number");
  *(_QWORD *)v7 = v7 + 16;
  *(_QWORD *)(v7 + 8) = 6;
  v22 = &v32;
  *(_OWORD *)v35 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v54,
    (const __m128i *)&v32,
    2);
  v55[0] = nullptr;
  v36 = 0;
  *(_QWORD *)v37 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v36 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "description");
  *(_QWORD *)(v8 + 8) = 11;
  v38 = 0;
  *(_QWORD *)v39 = 0;
  *(_OWORD *)v37 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v38 = 3;
  v9 = operator new(0x20u);
  *(_QWORD *)v9 = v9 + 16;
  strcpy((char *)(v9 + 16), "Max results");
  *(_QWORD *)(v9 + 8) = 11;
  v23 = &v36;
  *(_OWORD *)v39 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v55[1],
    (const __m128i *)&v36,
    2);
  v56 = 0;
  v40 = 0;
  *(_QWORD *)&v41 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v40 = 3;
  v10 = operator new(0x20u);
  strcpy((char *)(v10 + 16), "default");
  *(_QWORD *)v10 = v10 + 16;
  v11 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v10 + 8) = 7;
  v42 = 5;
  v43 = 1000;
  v44 = 0;
  *(__m128 *)v17 = v11;
  v41 = (unsigned __int64)v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v57,
    (const __m128i *)&v40,
    2);
  v57[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v47,
    &v54,
    3);
  v47[2] = 0;
  *(_QWORD *)v20 = &v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v26,
    (const __m128i *)&v45,
    2);
  v27 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v50,
    &v26,
    1);
  v50[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v53,
    (const __m128i *)&v48,
    2);
  v53[2] = 0;
  LOBYTE(v24) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v24,
    &v51,
    2);
  v12 = (__m128i *)&v58;
  v13 = v64;
  v64 = v24;
  v14 = v65;
  LOBYTE(v24) = v13;
  v65 = v25;
  v25 = v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v12 = (__m128i *)((char *)v12 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v12 != &v54 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)v17);
  v54.m128i_i64[1] = 0;
  v54.m128i_i64[0] = (__int64)ida_mcp::tools::exports::`anonymous namespace'::handle_list_exports;
  *(__m128i *)v55 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v55[0] )
    v55[0](&v54, &v54, 3);
  if ( v70 && v69 && v67 != (ida_mcp::tools::exports *)&v68 )
    operator delete(v67, v68 + 1);
  if ( v66 )
  {
    v66 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v61 != v63 )
    operator delete(v61, v63[0] + 1LL);
  if ( v59[0] != v60 )
    operator delete(v59[0], v60[0] + 1LL);
  return v71 - __readfsqword(0x28u);
}

