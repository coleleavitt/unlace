__int64 __fastcall ida_mcp::execute_on_main_thread<ida_mcp::mcp::McpServer::handle_tools_call(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1}>(ida_mcp::mcp::McpServer::handle_tools_call(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1} &&)::SyncRequest::execute(
        __int64 a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx
  char *v4; // rax
  __int64 v5; // rcx
  char v6; // si
  __int64 v7; // rdx
  _BYTE v9[8]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v1 = *(__int64 **)(a1 + 24);
  v11 = __readfsqword(0x28u);
  v2 = *v1;
  v3 = v1[1];
  if ( !*(_QWORD *)(v2 + 16) )
    ida_mcp::execute_on_main_thread<ida_mcp::mcp::McpServer::handle_tools_call(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1}>(ida_mcp::mcp::McpServer::handle_tools_call(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1} &&)::SyncRequest::execute();
  (*(void (__fastcall **)(_BYTE *, __int64, __int64))(v2 + 24))(v9, v2, v3);
  v4 = *(char **)(a1 + 32);
  v5 = v10;
  v6 = *v4;
  *v4 = v9[0];
  v7 = *((_QWORD *)v4 + 1);
  v9[0] = v6;
  *((_QWORD *)v4 + 1) = v5;
  v10 = v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return 0;
}

