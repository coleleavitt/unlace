void __fastcall __noreturn ida_mcp::tools::decl_compiler::`anonymous namespace'::apply_type_at_address_impl()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  __int64 v2; // r12
  struct _Unwind_Exception *v3; // r15
  __int64 i; // r13
  __int64 j; // r13
  __int64 k; // r13
  __int64 m; // rbx

  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v3 = v0;
  for ( i = v1 - 288; i != v1 - 288; i -= 24 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  for ( j = *(_QWORD *)(v1 - 664); j != *(_QWORD *)(v1 - 664); j -= 24 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  for ( k = *(_QWORD *)(v1 - 656); k != *(_QWORD *)(v1 - 656); k -= 24 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  for ( m = v2 + 48; m != v2; m -= 24 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( *(_QWORD *)(v1 - 480) )
  {
    *(_QWORD *)(v1 - 472) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v1 - 512) )
  {
    *(_QWORD *)(v1 - 504) = 0;
    qfree();
  }
  clear_tinfo_t();
  std::string::_M_dispose();
  _Unwind_Resume(v3);
}

