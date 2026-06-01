void __fastcall __noreturn ida_mcp::tools::types::`anonymous namespace'::handle_get_function_tinfo()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  char v2; // r15
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 i; // r12
  _QWORD *v6; // r15

  *(_BYTE *)(v1 - 744) = 0;
  *(_QWORD *)(v1 - 752) = 0;
  v3 = *(_QWORD *)(v1 - 752);
  *(_BYTE *)(v1 - 688) = *(_BYTE *)(v1 - 744);
  *(_QWORD *)(v1 - 680) = v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *(_BYTE *)(v1 - 720) = v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( *(_QWORD *)(v1 - 672) )
  {
    *(_QWORD *)(v1 - 664) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v1 - 544) )
  {
    *(_QWORD *)(v1 - 536) = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  if ( *(_QWORD *)(v1 - 608) )
  {
    v4 = *(_QWORD *)(v1 - 600);
    for ( i = 0; v4 != i; ++i )
    {
      v6 = (_QWORD *)(*(_QWORD *)(v1 - 608) + 80 * i);
      clear_tinfo_t();
      if ( v6[5] )
      {
        v6[6] = 0;
        qfree();
      }
      if ( v6[2] )
      {
        v6[3] = 0;
        qfree();
      }
      cleanup_argloc();
    }
    *(_QWORD *)(v1 - 600) = 0;
    qfree();
  }
  clear_tinfo_t();
  _Unwind_Resume(v0);
}

