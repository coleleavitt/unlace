// Alternative name is '_ZN12mcp_plugin_tD2Ev'
void __fastcall mcp_plugin_t::~mcp_plugin_t(ida_mcp::http::HttpServer **this)
{
  _QWORD *v2; // rdi
  ida_mcp::http::HttpServer *v3; // rdi
  ida_mcp::mcp::McpServer *v4; // rbx
  mcp_plugin_t *v5; // rdi
  void *v6; // [rsp+8h] [rbp-10h]

  *this = (ida_mcp::http::HttpServer *)&off_443D08;
  if ( *((_BYTE *)this + 128) && *(this + 14) )
  {
    msg("MCP Server: Stopping HTTP server...\n");
    ida_mcp::http::HttpServer::stop(*(this + 14));
    v2 = *(this + 15);
    if ( !v2 )
    {
      *((_BYTE *)this + 128) = 0;
      goto LABEL_6;
    }
    if ( !*v2 )
    {
      *((_BYTE *)this + 128) = 0;
      operator delete(v2, 8u);
      goto LABEL_6;
    }
    std::thread::join((std::thread *)v2);
    *((_BYTE *)this + 128) = 0;
    v5 = *(this + 15);
  }
  else
  {
    v5 = *(this + 15);
  }
  if ( v5 )
  {
    if ( *(_QWORD *)v5 )
      mcp_plugin_t::~mcp_plugin_t(v5);
    operator delete(v5, 8u);
  }
LABEL_6:
  v3 = *(this + 14);
  if ( v3 )
  {
    v6 = *(this + 14);
    ida_mcp::http::HttpServer::~HttpServer(v3);
    operator delete(v6, 0x98u);
  }
  v4 = *(this + 13);
  if ( v4 )
  {
    ida_mcp::mcp::McpServer::~McpServer(v4);
    operator delete(v4, 0x140u);
  }
}

