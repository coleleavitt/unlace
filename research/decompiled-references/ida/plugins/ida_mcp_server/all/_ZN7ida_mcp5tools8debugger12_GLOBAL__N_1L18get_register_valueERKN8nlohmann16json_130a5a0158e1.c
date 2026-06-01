void __fastcall __noreturn ida_mcp::tools::debugger::`anonymous namespace'::get_register_value(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        int a22,
        __int64 a23)
{
  struct _Unwind_Exception *v23; // rax
  void *v24; // rbp
  void *v25; // rdi
  struct _Unwind_Exception *v26; // rbp

  v25 = v24;
  v26 = v23;
  operator delete(v25, 0x20u);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( a22 >= -1 )
  {
    if ( a23 )
      qfree();
  }
  std::string::_M_dispose();
  _Unwind_Resume(v26);
}

