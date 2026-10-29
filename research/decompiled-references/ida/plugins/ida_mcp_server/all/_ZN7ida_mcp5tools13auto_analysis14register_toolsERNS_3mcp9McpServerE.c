unsigned __int64 __fastcall ida_mcp::tools::auto_analysis::register_tools(
        ida_mcp::tools::auto_analysis *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __m128 v5; // xmm1
  __m128i v6; // xmm0
  char v7; // si
  __int64 v8; // rax
  __m128i v9; // xmm2
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i v14; // [rsp+0h] [rbp-1C8h] BYREF
  void **v15; // [rsp+10h] [rbp-1B8h]
  ida_mcp::tools::auto_analysis *v16; // [rsp+18h] [rbp-1B0h]
  char *v17; // [rsp+20h] [rbp-1A8h]
  char *v18; // [rsp+28h] [rbp-1A0h]
  __m128i v19; // [rsp+30h] [rbp-198h] BYREF
  char v20; // [rsp+40h] [rbp-188h]
  __int64 v21; // [rsp+48h] [rbp-180h]
  char v22; // [rsp+50h] [rbp-178h] BYREF
  __int128 v23; // [rsp+58h] [rbp-170h]
  char v24; // [rsp+68h] [rbp-160h]
  __int128 v25; // [rsp+70h] [rbp-158h]
  char v26; // [rsp+80h] [rbp-148h] BYREF
  __int128 v27; // [rsp+88h] [rbp-140h]
  __m128i v28; // [rsp+98h] [rbp-130h]
  __int64 v29; // [rsp+A8h] [rbp-120h]
  _QWORD v30[2]; // [rsp+B0h] [rbp-118h] BYREF
  __m128i v31; // [rsp+C0h] [rbp-108h]
  __int64 v32; // [rsp+D8h] [rbp-F0h]
  void *v33[2]; // [rsp+E0h] [rbp-E8h] BYREF
  _QWORD v34[2]; // [rsp+F0h] [rbp-D8h] BYREF
  void *v35; // [rsp+100h] [rbp-C8h]
  __int64 v36; // [rsp+108h] [rbp-C0h]
  _QWORD v37[2]; // [rsp+110h] [rbp-B8h] BYREF
  char v38; // [rsp+120h] [rbp-A8h]
  __int64 v39; // [rsp+128h] [rbp-A0h]
  char v40; // [rsp+140h] [rbp-88h]
  ida_mcp::tools::auto_analysis *v41; // [rsp+148h] [rbp-80h]
  __int64 v42; // [rsp+158h] [rbp-70h] BYREF
  char v43; // [rsp+168h] [rbp-60h]
  char v44; // [rsp+178h] [rbp-50h]
  unsigned __int64 v45; // [rsp+188h] [rbp-40h]

  v16 = this;
  v45 = __readfsqword(0x28u);
  v33[0] = v34;
  v33[1] = nullptr;
  LOBYTE(v34[0]) = 0;
  v35 = v37;
  v36 = 0;
  LOBYTE(v37[0]) = 0;
  v15 = v33;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v44 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  *(_QWORD *)&v23 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v22 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v24 = 0;
  *(_QWORD *)&v25 = 0;
  v23 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v24 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v18 = &v22;
  v25 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v31.m128i_i64[0] = 0;
  v26 = 0;
  *(_QWORD *)&v27 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v26 = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  v5 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v4 + 8) = 10;
  v14 = (__m128i)v5;
  v27 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v6 = _mm_load_si128(&v19);
  v29 = 0;
  v17 = &v26;
  v28 = v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v20 = 0;
  v32 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v7 = v38;
  v38 = v20;
  v8 = v39;
  v20 = v7;
  v39 = v21;
  v21 = v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v9 = _mm_load_si128(&v14);
  v30[1] = 0;
  v30[0] = ida_mcp::tools::auto_analysis::`anonymous namespace'::handle_is_auto_analysis_complete;
  v31 = v9;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v31.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64, __int64, __int64, __int64, __int64, __int64, void **, ida_mcp::tools::auto_analysis *, char *, char *))v31.m128i_i64[0])(
      v30,
      v30,
      3,
      v10,
      v11,
      v12,
      v14.m128i_i64[0],
      v14.m128i_i64[1],
      v15,
      v16,
      v17,
      v18);
  if ( v44 && v43 && v41 != (ida_mcp::tools::auto_analysis *)&v42 )
    operator delete(v41, v42 + 1);
  if ( v40 )
  {
    v40 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v35 != v37 )
    operator delete(v35, v37[0] + 1LL);
  if ( v33[0] != v34 )
    operator delete(v33[0], v34[0] + 1LL);
  return v45 - __readfsqword(0x28u);
}

