__int64 __fastcall mcp_plugin_t::run(mcp_plugin_t *this, ida_mcp::mcp::McpServer *a2)
{
  char v3; // bp
  ida_mcp::mcp::McpServer *v4; // r13
  ida_mcp::mcp::McpServer *v5; // r12
  ida_mcp::http::HttpServer *v6; // r12
  int v7; // r8d
  int v8; // r9d
  ida_mcp::http::HttpServer *v9; // r13
  _QWORD *v10; // rax
  _QWORD *v11; // r12
  _QWORD *v12; // rdi
  _QWORD *v13; // rbp
  _QWORD *v14; // rbx
  char *v15; // rdi
  char *v16; // rdi
  std::thread *v18; // rdi
  ida_mcp::http::HttpServer *v19; // rbp
  _QWORD *v20; // rdi
  ida_mcp::mcp::McpServer *v21; // rbp
  int v22; // [rsp+0h] [rbp-A8h]
  __int64 v23; // [rsp+8h] [rbp-A0h]
  int v24; // [rsp+10h] [rbp-98h]
  __int64 v25; // [rsp+18h] [rbp-90h] BYREF
  void *v26; // [rsp+20h] [rbp-88h] BYREF
  _QWORD *v27; // [rsp+28h] [rbp-80h]
  __int64 v28; // [rsp+30h] [rbp-78h]
  void *v29[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v30[11]; // [rsp+50h] [rbp-58h] BYREF

  v3 = *((_BYTE *)this + 128);
  v30[3] = __readfsqword(0x28u);
  if ( !v3 )
  {
    v4 = (ida_mcp::mcp::McpServer *)operator new(0x140u);
    ida_mcp::mcp::McpServer::McpServer(v4);
    v5 = *((ida_mcp::mcp::McpServer **)this + 13);
    *((_QWORD *)this + 13) = v4;
    if ( v5 )
    {
      ida_mcp::mcp::McpServer::~McpServer(v5);
      a2 = (ida_mcp::mcp::McpServer *)&qword_140;
      operator delete(v5, (unsigned __int64)&qword_140);
    }
    msg("MCP Server: Registering tools...\n");
    ida_mcp::tools::register_all_tools(*((ida_mcp::tools **)this + 13), a2);
    ida_mcp::mcp::McpServer::get_tools((ida_mcp::mcp::McpServer *)&v26);
    msg("MCP Server: Registered %zu tools\n");
    msg("MCP Server: Starting HTTP server on %s:%d\n");
    v23 = *((_QWORD *)this + 13);
    v6 = (ida_mcp::http::HttpServer *)operator new(0x98u);
    v29[0] = v30;
    strcpy((char *)v30, "127.0.0.1");
    v29[1] = byte_9;
    ida_mcp::http::HttpServer::HttpServer(
      (int)v6,
      (int)v29,
      7777,
      v23,
      v7,
      v8,
      v22,
      v23,
      v24,
      v25,
      (int)v26,
      (__int64)v27);
    if ( v29[0] != v30 )
      operator delete(v29[0], v30[0] + 1LL);
    v9 = *((ida_mcp::http::HttpServer **)this + 14);
    *((_QWORD *)this + 14) = v6;
    if ( v9 )
    {
      ida_mcp::http::HttpServer::~HttpServer(v9);
      operator delete(v9, 0x98u);
      v6 = *((ida_mcp::http::HttpServer **)this + 14);
    }
    ida_mcp::http::HttpServer::bind(v6);
    v10 = (_QWORD *)operator new(8u);
    *v10 = 0;
    v11 = v10;
    v25 = operator new(0x10u);
    *(__m128i *)v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_442930, (__m128i)(unsigned __int64)this);
    std::thread::_M_start_thread();
    if ( v25 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 8LL))(v25, &v25);
    v12 = *((_QWORD **)this + 15);
    *((_QWORD *)this + 15) = v11;
    if ( !v12 )
      goto LABEL_13;
    if ( !*v12 )
    {
      operator delete(v12, 8u);
LABEL_13:
      *((_BYTE *)this + 128) = 1;
      msg("MCP Server: Ready! Access at http://%s:%d\n");
      msg("MCP Server: Run plugin again to stop server\n");
      v13 = v27;
      v14 = v26;
      if ( v27 != v26 )
      {
        do
        {
          if ( *((_BYTE *)v14 + 152) )
          {
            if ( *((_BYTE *)v14 + 136) )
            {
              v16 = (char *)v14[13];
              if ( v16 != (char *)(v14 + 15) )
                operator delete(v16, v14[15] + 1LL);
            }
          }
          if ( *((_BYTE *)v14 + 96) )
          {
            *((_BYTE *)v14 + 96) = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v15 = (char *)v14[4];
          if ( v15 != (char *)(v14 + 6) )
            operator delete(v15, v14[6] + 1LL);
          if ( (_QWORD *)*v14 != v14 + 2 )
            operator delete((void *)*v14, v14[2] + 1LL);
          v14 += 20;
        }
        while ( v13 != v14 );
        v14 = v26;
      }
      if ( v14 )
        operator delete(v14, v28 - (_QWORD)v14);
      return 1;
    }
LABEL_41:
    JUMPOUT(0x4C86E);
  }
  msg("MCP Server: Stopping...\n");
  ida_mcp::http::HttpServer::stop(*((ida_mcp::http::HttpServer **)this + 14));
  v18 = *((std::thread **)this + 15);
  if ( v18 && *(_QWORD *)v18 )
    std::thread::join(v18);
  v19 = *((ida_mcp::http::HttpServer **)this + 14);
  *((_QWORD *)this + 14) = 0;
  if ( v19 )
  {
    ida_mcp::http::HttpServer::~HttpServer(v19);
    operator delete(v19, 0x98u);
  }
  v20 = *((_QWORD **)this + 15);
  *((_QWORD *)this + 15) = 0;
  if ( v20 )
  {
    if ( *v20 )
      goto LABEL_41;
    operator delete(v20, 8u);
  }
  v21 = *((ida_mcp::mcp::McpServer **)this + 13);
  *((_QWORD *)this + 13) = 0;
  if ( v21 )
  {
    ida_mcp::mcp::McpServer::~McpServer(v21);
    operator delete(v21, 0x140u);
  }
  *((_BYTE *)this + 128) = 0;
  msg("MCP Server: Stopped\n");
  return 1;
}

