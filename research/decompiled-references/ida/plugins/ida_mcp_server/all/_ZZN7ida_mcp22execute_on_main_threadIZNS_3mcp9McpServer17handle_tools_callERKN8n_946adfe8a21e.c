// Alternative name is '_ZZN7ida_mcp22execute_on_main_threadIZNS_3mcp9McpServer17handle_tools_callERKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS4_14adl_serializerES7_IhSaIhEEvEEEUlvE_EEDTclfp_EEOT_EN11SyncRequestD1Ev'
__int64 __fastcall ida_mcp::execute_on_main_thread<ida_mcp::mcp::McpServer::handle_tools_call(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1}>(ida_mcp::mcp::McpServer::handle_tools_call(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1} &&)::SyncRequest::~SyncRequest(
        _QWORD *a1)
{
  _QWORD *v1; // rax

  v1 = a1;
  *a1 = off_4432D8;
  if ( a1[5] )
  {
    std::__exception_ptr::exception_ptr::_M_release((std::__exception_ptr::exception_ptr *)(a1 + 5));
    v1 = a1;
  }
  *v1 = &off_4451B0;
  return qsem_free();
}

