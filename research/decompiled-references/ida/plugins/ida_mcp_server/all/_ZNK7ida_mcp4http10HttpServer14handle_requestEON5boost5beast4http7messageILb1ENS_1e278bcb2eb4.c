__int64 __fastcall ida_mcp::http::HttpServer::handle_request(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  char *decimal_point; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // [rsp+0h] [rbp-208h]
  int v24; // [rsp+0h] [rbp-208h]
  pthread_mutex_t *v25; // [rsp+8h] [rbp-200h]
  __int64 v26; // [rsp+10h] [rbp-1F8h]
  int v27; // [rsp+10h] [rbp-1F8h]
  int v28; // [rsp+18h] [rbp-1F0h]
  int v29; // [rsp+20h] [rbp-1E8h] BYREF
  int v30; // [rsp+28h] [rbp-1E0h]
  int v31[4]; // [rsp+30h] [rbp-1D8h]
  int v32[2]; // [rsp+40h] [rbp-1C8h]
  char v33[8]; // [rsp+48h] [rbp-1C0h]
  __int64 v34[2]; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-1A8h]
  __int64 v36; // [rsp+68h] [rbp-1A0h]
  int v37[4]; // [rsp+80h] [rbp-188h] BYREF
  __int64 v38; // [rsp+90h] [rbp-178h]
  __int64 v39; // [rsp+98h] [rbp-170h]
  char v40; // [rsp+B0h] [rbp-158h]
  char v41; // [rsp+E8h] [rbp-120h]
  int v42[4]; // [rsp+F0h] [rbp-118h] BYREF
  void (__fastcall *v43)(int *, int *, __int64); // [rsp+100h] [rbp-108h]
  __int64 v44; // [rsp+108h] [rbp-100h]
  int v45; // [rsp+110h] [rbp-F8h]
  int v46[4]; // [rsp+118h] [rbp-F0h] BYREF
  char v47; // [rsp+128h] [rbp-E0h]
  int v48; // [rsp+12Ch] [rbp-DCh]
  char v49; // [rsp+130h] [rbp-D8h]
  __int128 v50; // [rsp+138h] [rbp-D0h]
  __int64 v51; // [rsp+148h] [rbp-C0h]
  void *v52[2]; // [rsp+150h] [rbp-B8h]
  __m128i v53; // [rsp+160h] [rbp-A8h]
  __int64 v54; // [rsp+170h] [rbp-98h]
  char v55; // [rsp+178h] [rbp-90h] BYREF
  char *v56; // [rsp+188h] [rbp-80h]
  __int64 v57; // [rsp+190h] [rbp-78h]
  __int64 v58; // [rsp+198h] [rbp-70h]
  __int64 v59; // [rsp+1A0h] [rbp-68h]
  int v60; // [rsp+1A8h] [rbp-60h]
  __int64 v61; // [rsp+1B0h] [rbp-58h]
  char v62; // [rsp+1B8h] [rbp-50h]
  unsigned __int64 v63; // [rsp+1C8h] [rbp-40h]

  v6 = *(_DWORD *)(a3 + 84);
  v63 = __readfsqword(0x28u);
  v8 = (unsigned int)(v6 - 1);
  if ( (unsigned int)v8 <= 1 )
  {
    ida_mcp::http::HttpServer::handle_request(boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> &&)const::{lambda(boost::beast::http::status)#1}::operator()(
      a1,
      a3,
      405);
    return a1;
  }
  if ( v6 != 4 )
  {
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)v42,
      "{\"error\":\"Only POST requests are supported\"}",
      v8,
      a4,
      a5,
      a6,
      v23,
      (int)v25,
      v26);
    ida_mcp::http::HttpServer::handle_request(boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> &&)const::{lambda(boost::beast::http::status,std::string)#1}::operator()(
      a1,
      a3,
      405,
      v42);
    std::string::_M_dispose();
    return a1;
  }
  v9 = *(_QWORD *)(a3 + 72);
  if ( !v9 )
    goto LABEL_4;
  v8 = *(_QWORD *)(a3 + 64);
  a4 = v9 - 1;
  if ( v9 == 5 )
  {
    if ( *(_DWORD *)(v8 + 1) == 1885564207 )
      goto LABEL_10;
LABEL_4:
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)v42,
      "{\"error\":\"Not found\"}",
      v8,
      a4,
      a5,
      a6,
      v23,
      (int)v25,
      v26);
    ida_mcp::http::HttpServer::handle_request(boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> &&)const::{lambda(boost::beast::http::status,std::string)#1}::operator()(
      a1,
      a3,
      404,
      v42);
    std::string::_M_dispose();
    return a1;
  }
  if ( v9 != 2 || *(_BYTE *)(v8 + 1) != 47 )
    goto LABEL_4;
LABEL_10:
  v11 = *(_QWORD *)(a3 + 88);
  v12 = *(_QWORD *)(a3 + 96);
  LOBYTE(v26) = 0;
  *(_QWORD *)v32 = 0;
  *(_OWORD *)v31 = 0;
  *(_OWORD *)v34 = 0;
  *(__m128i *)v46 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)(v11 + v12));
  v50 = 0;
  *(_OWORD *)v52 = 0;
  *(_QWORD *)v33 = 0;
  v35 = 0;
  v36 = 0;
  v38 = 0;
  v39 = 0;
  v43 = nullptr;
  v44 = 0;
  v45 = 0;
  v47 = 0;
  v48 = -1;
  v49 = 0;
  v51 = 0;
  v54 = 0;
  v55 = 0;
  v56 = "";
  v57 = 0;
  v58 = 0;
  v59 = 0;
  *(_OWORD *)v37 = 0;
  *(_OWORD *)v42 = 0;
  v53 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)&v55);
  decimal_point = localeconv()->decimal_point;
  if ( decimal_point )
    v14 = *decimal_point;
  else
    v14 = 46;
  v60 = v14;
  v62 = 1;
  v61 = -1;
  v45 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
  nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse();
  std::string::_M_dispose();
  if ( v52[0] )
    operator delete(v52[0], v53.m128i_i64[0] - (unsigned __int64)v52[0]);
  if ( v43 )
    v43(v42, v42, 3);
  ida_mcp::mcp::McpRequest::from_json();
  if ( v41 )
  {
    ida_mcp::mcp::McpServer::handle_request(
      (int)v42,
      *(_QWORD *)(a2 + 40),
      (int)v37,
      v16,
      v17,
      v18,
      (int)v46,
      v25,
      v26,
      0,
      v29,
      v30,
      v31[0],
      v31[2],
      v32[0],
      v33[0],
      v34[0],
      v34[1]);
    if ( LOBYTE(v52[1]) )
    {
      ida_mcp::http::HttpServer::handle_request(boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> &&)const::{lambda(boost::beast::http::status)#1}::operator()(
        a1,
        a3,
        202);
    }
    else
    {
      ida_mcp::mcp::McpResponse::to_json[abi:cxx11](
        (int)&v29,
        (int)v42,
        v19,
        v20,
        v21,
        v22,
        v24,
        (int)&v29,
        v27,
        v28,
        v29,
        v30,
        v31[0],
        v31[2],
        v32[0],
        *(int *)v33,
        v34[0],
        v34[1],
        v35,
        v36);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::dump();
      ida_mcp::http::HttpServer::handle_request(boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> &&)const::{lambda(boost::beast::http::status,std::string)#1}::operator()(
        a1,
        a3,
        200,
        v34);
      std::string::_M_dispose();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    if ( LOBYTE(v52[0]) )
    {
      LOBYTE(v52[0]) = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    if ( (_BYTE)v50 )
    {
      LOBYTE(v50) = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    if ( LOBYTE(v46[2]) )
    {
      LOBYTE(v46[2]) = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
  }
  else
  {
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)v42,
      "{\"error\":\"Invalid JSON-RPC request\"}",
      v15,
      v16,
      v17,
      v18,
      (int)v46,
      (int)v25,
      v26);
    ida_mcp::http::HttpServer::handle_request(boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> &&)const::{lambda(boost::beast::http::status,std::string)#1}::operator()(
      a1,
      a3,
      400,
      v42);
  }
  std::string::_M_dispose();
  if ( v41 )
  {
    v41 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    std::string::_M_dispose();
    if ( v40 )
    {
      v40 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    std::string::_M_dispose();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

