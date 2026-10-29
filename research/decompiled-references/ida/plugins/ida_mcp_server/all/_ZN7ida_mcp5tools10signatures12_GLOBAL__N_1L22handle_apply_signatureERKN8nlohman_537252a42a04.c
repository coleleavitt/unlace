void __fastcall __noreturn ida_mcp::tools::signatures::`anonymous namespace'::handle_apply_signature()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  __int64 v2; // r12

  do
  {
    v2 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v2 != v1 );
  std::string::_M_dispose();
  _Unwind_Resume(v0);
}

