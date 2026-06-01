void __fastcall __noreturn ida_mcp::tools::objc_deep::`anonymous namespace'::handle_get_decompiler_call_info()
{
  struct _Unwind_Exception *v0; // rax
  void *v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // r12
  void *v4; // rdi
  struct _Unwind_Exception *v5; // rbx
  char v6; // si
  __int64 v7; // r13
  __int64 i; // r12
  _QWORD *v9; // r15

  v4 = v1;
  v5 = v0;
  operator delete(v4, 0x20u);
  *(_BYTE *)(v2 - 368) = *(_BYTE *)(v2 - 426);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( *(_QWORD *)(v2 - 288) )
  {
    *(_QWORD *)(v2 - 280) = 0;
    qfree();
  }
  v6 = *(_BYTE *)(v2 - 425);
  *(_QWORD *)(v2 - 392) = v3;
  *(_BYTE *)(v2 - 400) = v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( *(_QWORD *)(v2 - 192) )
  {
    *(_QWORD *)(v2 - 184) = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  if ( *(_QWORD *)(v2 - 256) )
  {
    v7 = *(_QWORD *)(v2 - 248);
    for ( i = 0; v7 != i; ++i )
    {
      v9 = (_QWORD *)(*(_QWORD *)(v2 - 256) + 80 * i);
      clear_tinfo_t();
      if ( v9[5] )
      {
        v9[6] = 0;
        qfree();
      }
      if ( v9[2] )
      {
        v9[3] = 0;
        qfree();
      }
      cleanup_argloc();
    }
    *(_QWORD *)(v2 - 248) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v2 - 320) )
  {
    *(_QWORD *)(v2 - 312) = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( *(_QWORD *)(v2 - 352) )
  {
    *(_QWORD *)(v2 - 344) = 0;
    qfree();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  _Unwind_Resume(v5);
}

