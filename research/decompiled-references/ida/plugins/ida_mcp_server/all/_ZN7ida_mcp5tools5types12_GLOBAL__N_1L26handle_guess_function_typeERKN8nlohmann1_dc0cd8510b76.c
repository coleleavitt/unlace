void __fastcall __noreturn ida_mcp::tools::types::`anonymous namespace'::handle_guess_function_type()
{
  __int64 v0; // rbx
  __int64 v1; // rbp
  struct _Unwind_Exception *v2; // r12
  __int64 v3; // r14
  __int64 i; // r13
  __int64 j; // r14

  *(_QWORD *)(v1 - 448) = 1;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  v3 = *(_QWORD *)(v1 - 448);
  for ( i = *(_QWORD *)(v1 - 504); i != *(_QWORD *)(v1 - 504); i -= 24 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  for ( j = v0 + (((_BYTE)v3 - 1) & 0x18); j != v0; j -= 24 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( *(_QWORD *)(v1 - 416) )
  {
    *(_QWORD *)(v1 - 408) = 0;
    qfree();
  }
  clear_tinfo_t();
  _Unwind_Resume(v2);
}

