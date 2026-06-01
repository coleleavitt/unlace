// Alternative name is '_ZN7ida_mcp3mcp9McpServerD2Ev'
void __fastcall ida_mcp::mcp::McpServer::~McpServer(ida_mcp::mcp::McpServer *this)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  void *v4; // r12
  __int64 v5; // r12
  __int64 v6; // rbx
  void *v7; // rdi
  void (__fastcall *v8)(__int64, __int64, __int64); // rax
  void *v9; // rdi
  void *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbx
  void (__fastcall *v13)(__int64, __int64, __int64); // rax
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // rbp
  __int64 v18; // rbx
  void (__fastcall *v19)(__int64, __int64, __int64); // rax
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi

  v2 = *((unsigned __int8 *)this + 304);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v3 = *((_QWORD *)this + 24);
  while ( v3 )
  {
    v4 = (void *)v3;
    std::_Rb_tree<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,std::_Identity<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::less<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::allocator<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>::_M_erase(
      *(_QWORD **)(v3 + 24),
      v2);
    v3 = *(_QWORD *)(v3 + 16);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v2 = 48;
    operator delete(v4, 0x30u);
  }
  std::_Rb_tree<std::string,std::pair<std::string const,ida_mcp::mcp::McpServer::PromptEntry>,std::_Select1st<std::pair<std::string const,ida_mcp::mcp::McpServer::PromptEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,ida_mcp::mcp::McpServer::PromptEntry>>>::_M_erase(*((void ***)this + 17));
  v5 = *((_QWORD *)this + 13);
  v6 = *((_QWORD *)this + 12);
  if ( v5 != v6 )
  {
    while ( 1 )
    {
      v8 = *(void (__fastcall **)(__int64, __int64, __int64))(v6 + 160);
      if ( v8 )
        v8(v6 + 144, v6 + 144, 3);
      if ( !*(_BYTE *)(v6 + 136) || (v9 = *(void **)(v6 + 104), v9 == (void *)(v6 + 120)) )
      {
        if ( *(_BYTE *)(v6 + 96) )
          goto LABEL_16;
      }
      else
      {
        operator delete(v9, *(_QWORD *)(v6 + 120) + 1LL);
        if ( *(_BYTE *)(v6 + 96) )
        {
LABEL_16:
          v10 = *(void **)(v6 + 64);
          if ( v10 != (void *)(v6 + 80) )
            operator delete(v10, *(_QWORD *)(v6 + 80) + 1LL);
        }
      }
      v7 = *(void **)(v6 + 32);
      if ( v7 != (void *)(v6 + 48) )
        operator delete(v7, *(_QWORD *)(v6 + 48) + 1LL);
      if ( *(_QWORD *)v6 != v6 + 16 )
        operator delete(*(void **)v6, *(_QWORD *)(v6 + 16) + 1LL);
      v6 += 176;
      if ( v5 == v6 )
      {
        v6 = *((_QWORD *)this + 12);
        break;
      }
    }
  }
  if ( v6 )
    operator delete((void *)v6, *((_QWORD *)this + 14) - v6);
  v11 = *((_QWORD *)this + 8);
  while ( v11 )
  {
    v12 = v11;
    std::_Rb_tree<std::string,std::pair<std::string const,ida_mcp::mcp::McpServer::ResourceEntry>,std::_Select1st<std::pair<std::string const,ida_mcp::mcp::McpServer::ResourceEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,ida_mcp::mcp::McpServer::ResourceEntry>>>::_M_erase(*(void ***)(v11 + 24));
    v13 = *(void (__fastcall **)(__int64, __int64, __int64))(v11 + 320);
    v11 = *(_QWORD *)(v11 + 16);
    if ( v13 )
      v13(v12 + 304, v12 + 304, 3);
    if ( *(_BYTE *)(v12 + 296) )
    {
      *(_BYTE *)(v12 + 296) = 0;
      if ( *(_BYTE *)(v12 + 288) )
      {
        *(_BYTE *)(v12 + 288) = 0;
        std::string::_M_dispose();
      }
      if ( *(_BYTE *)(v12 + 232) )
      {
        v23 = *(void **)(v12 + 208);
        if ( v23 )
          operator delete(v23, *(_QWORD *)(v12 + 224) - (_QWORD)v23);
      }
    }
    if ( *(_BYTE *)(v12 + 200) )
    {
      *(_BYTE *)(v12 + 200) = 0;
      std::string::_M_dispose();
      if ( *(_BYTE *)(v12 + 160) )
      {
LABEL_51:
        *(_BYTE *)(v12 + 160) = 0;
        std::string::_M_dispose();
      }
    }
    else if ( *(_BYTE *)(v12 + 160) )
    {
      goto LABEL_51;
    }
    v14 = *(void **)(v12 + 96);
    if ( v14 != (void *)(v12 + 112) )
      operator delete(v14, *(_QWORD *)(v12 + 112) + 1LL);
    v15 = *(void **)(v12 + 64);
    if ( v15 != (void *)(v12 + 80) )
      operator delete(v15, *(_QWORD *)(v12 + 80) + 1LL);
    v16 = *(void **)(v12 + 32);
    if ( v16 != (void *)(v12 + 48) )
      operator delete(v16, *(_QWORD *)(v12 + 48) + 1LL);
    operator delete((void *)v12, 0x150u);
  }
  v17 = *((_QWORD *)this + 2);
  while ( v17 )
  {
    v18 = v17;
    std::_Rb_tree<std::string,std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>,std::_Select1st<std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>>>::_M_erase(*(void ***)(v17 + 24));
    v19 = *(void (__fastcall **)(__int64, __int64, __int64))(v17 + 240);
    v17 = *(_QWORD *)(v17 + 16);
    if ( v19 )
      v19(v18 + 224, v18 + 224, 3);
    if ( *(_BYTE *)(v18 + 216) )
    {
      *(_BYTE *)(v18 + 216) = 0;
      if ( *(_BYTE *)(v18 + 200) )
      {
        *(_BYTE *)(v18 + 200) = 0;
        std::string::_M_dispose();
      }
    }
    if ( *(_BYTE *)(v18 + 160) )
    {
      *(_BYTE *)(v18 + 160) = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v20 = *(void **)(v18 + 96);
    if ( v20 != (void *)(v18 + 112) )
      operator delete(v20, *(_QWORD *)(v18 + 112) + 1LL);
    v21 = *(void **)(v18 + 64);
    if ( v21 != (void *)(v18 + 80) )
      operator delete(v21, *(_QWORD *)(v18 + 80) + 1LL);
    v22 = *(void **)(v18 + 32);
    if ( v22 != (void *)(v18 + 48) )
      operator delete(v22, *(_QWORD *)(v18 + 48) + 1LL);
    operator delete((void *)v18, 0x100u);
  }
}

