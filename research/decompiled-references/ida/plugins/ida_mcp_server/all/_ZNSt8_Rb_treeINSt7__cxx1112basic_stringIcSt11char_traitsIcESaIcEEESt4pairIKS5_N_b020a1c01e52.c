void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ida_mcp::mcp::McpServer::ResourceEntry>,std::_Select1st<std::pair<std::string const,ida_mcp::mcp::McpServer::ResourceEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,ida_mcp::mcp::McpServer::ResourceEntry>>>::_M_erase(
        void **a1)
{
  void **v1; // rbp
  void **v2; // rdi
  void **v3; // rdi
  void **v4; // rdi
  void **v5; // rbx
  void (__fastcall *v6)(void **, void **, __int64); // rax
  void *v7; // rdi
  void **v8; // rdi
  void **v9; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v5 = v1;
      std::_Rb_tree<std::string,std::pair<std::string const,ida_mcp::mcp::McpServer::ResourceEntry>,std::_Select1st<std::pair<std::string const,ida_mcp::mcp::McpServer::ResourceEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,ida_mcp::mcp::McpServer::ResourceEntry>>>::_M_erase(v1[3]);
      v6 = (void (__fastcall *)(void **, void **, __int64))v1[40];
      v1 = (void **)v1[2];
      if ( v6 )
        v6(v5 + 38, v5 + 38, 3);
      if ( !*((_BYTE *)v5 + 296) )
        goto LABEL_26;
      *((_BYTE *)v5 + 296) = 0;
      if ( *((_BYTE *)v5 + 288) )
      {
        *((_BYTE *)v5 + 288) = 0;
        std::string::_M_dispose();
      }
      if ( *((_BYTE *)v5 + 232) && (v7 = v5[26]) != nullptr )
      {
        operator delete(v7, (_BYTE *)v5[28] - (_BYTE *)v7);
        if ( !*((_BYTE *)v5 + 200) )
          goto LABEL_4;
      }
      else
      {
LABEL_26:
        if ( !*((_BYTE *)v5 + 200) )
          goto LABEL_4;
      }
      v8 = (void **)v5[21];
      if ( v8 == v5 + 23 )
      {
LABEL_4:
        if ( *((_BYTE *)v5 + 160) )
          goto LABEL_22;
        goto LABEL_5;
      }
      operator delete(v8, (unsigned __int64)v5[23] + 1);
      if ( *((_BYTE *)v5 + 160) )
      {
LABEL_22:
        v9 = (void **)v5[16];
        if ( v9 != v5 + 18 )
          operator delete(v9, (unsigned __int64)v5[18] + 1);
      }
LABEL_5:
      v2 = (void **)v5[12];
      if ( v2 != v5 + 14 )
        operator delete(v2, (unsigned __int64)v5[14] + 1);
      v3 = (void **)v5[8];
      if ( v3 != v5 + 10 )
        operator delete(v3, (unsigned __int64)v5[10] + 1);
      v4 = (void **)v5[4];
      if ( v4 != v5 + 6 )
        operator delete(v4, (unsigned __int64)v5[6] + 1);
      operator delete(v5, 0x150u);
    }
    while ( v1 );
  }
}

