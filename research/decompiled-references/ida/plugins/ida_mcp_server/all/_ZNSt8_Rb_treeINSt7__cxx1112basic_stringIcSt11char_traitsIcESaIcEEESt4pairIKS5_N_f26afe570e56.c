void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>,std::_Select1st<std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>>>::_M_erase(
        void **a1)
{
  void **v1; // rbp
  void **v2; // rdi
  void **v3; // rdi
  void **v4; // rdi
  void **v5; // rbx
  void (__fastcall *v6)(void **, void **, __int64); // rax
  void **v7; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v5 = v1;
      std::_Rb_tree<std::string,std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>,std::_Select1st<std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>>>::_M_erase(v1[3]);
      v6 = (void (__fastcall *)(void **, void **, __int64))v1[30];
      v1 = (void **)v1[2];
      if ( v6 )
        v6(v5 + 28, v5 + 28, 3);
      if ( *((_BYTE *)v5 + 216) )
      {
        if ( *((_BYTE *)v5 + 200) )
        {
          v7 = (void **)v5[21];
          if ( v7 != v5 + 23 )
            operator delete(v7, (unsigned __int64)v5[23] + 1);
        }
      }
      if ( *((_BYTE *)v5 + 160) )
      {
        *((_BYTE *)v5 + 160) = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v2 = (void **)v5[12];
      if ( v2 != v5 + 14 )
        operator delete(v2, (unsigned __int64)v5[14] + 1);
      v3 = (void **)v5[8];
      if ( v3 != v5 + 10 )
        operator delete(v3, (unsigned __int64)v5[10] + 1);
      v4 = (void **)v5[4];
      if ( v4 != v5 + 6 )
        operator delete(v4, (unsigned __int64)v5[6] + 1);
      operator delete(v5, 0x100u);
    }
    while ( v1 );
  }
}

