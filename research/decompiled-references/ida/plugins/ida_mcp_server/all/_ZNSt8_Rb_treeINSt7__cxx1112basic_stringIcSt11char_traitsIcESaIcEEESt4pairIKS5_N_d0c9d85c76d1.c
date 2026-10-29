void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ida_mcp::mcp::McpServer::PromptEntry>,std::_Select1st<std::pair<std::string const,ida_mcp::mcp::McpServer::PromptEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,ida_mcp::mcp::McpServer::PromptEntry>>>::_M_erase(
        void **a1)
{
  void **v1; // r13
  void **v2; // rdi
  void **v3; // rdi
  void **v4; // rbp
  void (__fastcall *v5)(void **, void **, __int64); // rax
  _QWORD *v6; // r12
  _QWORD *v7; // rbx
  char *v8; // rdi
  void **v9; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v4 = v1;
      std::_Rb_tree<std::string,std::pair<std::string const,ida_mcp::mcp::McpServer::PromptEntry>,std::_Select1st<std::pair<std::string const,ida_mcp::mcp::McpServer::PromptEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,ida_mcp::mcp::McpServer::PromptEntry>>>::_M_erase(v1[3]);
      v5 = (void (__fastcall *)(void **, void **, __int64))v1[23];
      v1 = (void **)v1[2];
      if ( v5 )
        v5(v4 + 21, v4 + 21, 3);
      if ( *((_BYTE *)v4 + 160) )
      {
        v6 = v4[18];
        v7 = v4[17];
        *((_BYTE *)v4 + 160) = 0;
        if ( v6 != v7 )
        {
          do
          {
            if ( *((_BYTE *)v7 + 64) )
            {
              v8 = (char *)v7[4];
              if ( v8 != (char *)(v7 + 6) )
                operator delete(v8, v7[6] + 1LL);
            }
            if ( (_QWORD *)*v7 != v7 + 2 )
              operator delete((void *)*v7, v7[2] + 1LL);
            v7 += 10;
          }
          while ( v6 != v7 );
          v7 = v4[17];
        }
        if ( v7 )
          operator delete(v7, (_BYTE *)v4[19] - (_BYTE *)v7);
      }
      if ( *((_BYTE *)v4 + 128) )
      {
        v9 = (void **)v4[12];
        if ( v9 != v4 + 14 )
          operator delete(v9, (unsigned __int64)v4[14] + 1);
      }
      v2 = (void **)v4[8];
      if ( v2 != v4 + 10 )
        operator delete(v2, (unsigned __int64)v4[10] + 1);
      v3 = (void **)v4[4];
      if ( v3 != v4 + 6 )
        operator delete(v3, (unsigned __int64)v4[6] + 1);
      operator delete(v4, 0xC8u);
    }
    while ( v1 );
  }
}

