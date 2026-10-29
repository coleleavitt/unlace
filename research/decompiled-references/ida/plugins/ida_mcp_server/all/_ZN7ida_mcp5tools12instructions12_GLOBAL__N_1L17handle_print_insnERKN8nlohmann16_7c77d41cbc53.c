void __fastcall __noreturn ida_mcp::tools::instructions::`anonymous namespace'::handle_print_insn(
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
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28)
{
  void *v28; // rbx
  __int64 v29; // rbp
  struct _Unwind_Exception *v30; // r12
  __int64 v31; // r13

  do
  {
    v29 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v29 != v31 );
  if ( a28 )
    qfree();
  if ( a24 )
    qfree();
  operator delete(v28, 0x168u);
  if ( a20 )
    qfree();
  _Unwind_Resume(v30);
}

