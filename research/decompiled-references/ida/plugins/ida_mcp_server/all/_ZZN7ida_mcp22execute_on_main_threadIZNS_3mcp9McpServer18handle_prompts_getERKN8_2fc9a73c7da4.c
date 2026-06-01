__int64 __fastcall ida_mcp::execute_on_main_thread<ida_mcp::mcp::McpServer::handle_prompts_get(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1}>(ida_mcp::mcp::McpServer::handle_prompts_get(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1} &&)::SyncRequest::execute(
        __int64 a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx
  char **v4; // rax
  char *v5; // r12
  char *v6; // rbp
  char *v7; // r13
  char *v8; // rbx
  char *v9; // rbp
  char *v10; // rbx
  unsigned __int64 v11; // rsi
  void *v13[2]; // [rsp+10h] [rbp-48h] BYREF
  char *v14; // [rsp+20h] [rbp-38h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v1 = *(__int64 **)(a1 + 24);
  v15 = __readfsqword(0x28u);
  v2 = *v1;
  v3 = v1[1];
  if ( !*(_QWORD *)(v2 + 16) )
    ida_mcp::execute_on_main_thread<ida_mcp::mcp::McpServer::handle_prompts_get(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1}>(ida_mcp::mcp::McpServer::handle_prompts_get(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1} &&)::SyncRequest::execute();
  (*(void (__fastcall **)(void **, __int64, __int64))(v2 + 24))(v13, v2, v3);
  v4 = *(char ***)(a1 + 32);
  v5 = *v4;
  v6 = v4[1];
  *(__m128i *)v4 = _mm_load_si128((const __m128i *)v13);
  v7 = v4[2];
  v4[2] = v14;
  v14 = nullptr;
  *(_OWORD *)v13 = 0;
  if ( v5 == v6 )
  {
    if ( !v5 )
      return 0;
  }
  else
  {
    v8 = v5;
    do
    {
      v8 += 24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v6 != v8 );
    if ( !v5 )
      goto LABEL_7;
  }
  operator delete(v5, v7 - v5);
LABEL_7:
  v9 = (char *)v13[1];
  v10 = (char *)v13[0];
  if ( v13[1] == v13[0] )
  {
    v11 = v14 - (char *)v13[0];
  }
  else
  {
    do
    {
      v10 += 24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v9 != v10 );
    v10 = (char *)v13[0];
    v11 = v14 - (char *)v13[0];
  }
  if ( v10 )
    operator delete(v10, v11);
  return 0;
}

