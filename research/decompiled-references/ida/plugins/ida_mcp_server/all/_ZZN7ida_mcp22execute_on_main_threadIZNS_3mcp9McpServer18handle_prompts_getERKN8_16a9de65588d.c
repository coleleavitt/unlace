void __fastcall ida_mcp::execute_on_main_thread<ida_mcp::mcp::McpServer::handle_prompts_get(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1}>(ida_mcp::mcp::McpServer::handle_prompts_get(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1} &&)::SyncRequest::~SyncRequest(
        _QWORD *a1)
{
  *a1 = off_443328;
  if ( a1[5] )
    std::__exception_ptr::exception_ptr::_M_release((std::__exception_ptr::exception_ptr *)(a1 + 5));
  *a1 = &off_4451B0;
  qsem_free();
  operator delete(a1, 0x30u);
}

