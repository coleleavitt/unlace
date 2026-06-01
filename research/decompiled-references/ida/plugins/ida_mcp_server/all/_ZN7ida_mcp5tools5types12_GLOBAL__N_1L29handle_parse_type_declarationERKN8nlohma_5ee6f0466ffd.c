void __fastcall __noreturn ida_mcp::tools::types::`anonymous namespace'::handle_parse_type_declaration()
{
  void *v0; // rbx
  __int64 v1; // rbp
  struct _Unwind_Exception *v2; // r14
  struct _Unwind_Exception *v3; // r15
  __int64 i; // r14
  __int64 j; // r13

  operator delete(v0, 0x20u);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *(_QWORD *)(v1 - 480) = v1 - 272;
  v3 = v2;
  for ( i = *(_QWORD *)(v1 - 480) + 24LL; i != *(_QWORD *)(v1 - 480); i -= 24 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  for ( j = v1 - 128; j != v1 - 128; j -= 24 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( *(_QWORD *)(v1 - 336) )
  {
    *(_QWORD *)(v1 - 328) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v1 - 368) )
  {
    *(_QWORD *)(v1 - 360) = 0;
    qfree();
  }
  clear_tinfo_t();
  std::string::_M_dispose();
  _Unwind_Resume(v3);
}

