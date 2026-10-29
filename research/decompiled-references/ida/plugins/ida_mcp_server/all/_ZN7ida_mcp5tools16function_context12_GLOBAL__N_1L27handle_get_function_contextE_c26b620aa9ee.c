void __fastcall __noreturn ida_mcp::tools::function_context::`anonymous namespace'::handle_get_function_context()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  __int64 v2; // r12
  __int64 v3; // rax

  if ( *(_QWORD *)(v1 - 1168) )
  {
    *(_QWORD *)(v1 - 1160) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v1 - 1200) )
  {
    *(_QWORD *)(v1 - 1192) = 0;
    qfree();
  }
  qrefcnt_t<cfunc_t>::delref(v2);
  if ( *(_QWORD *)(v1 - 1104) )
  {
    *(_QWORD *)(v1 - 1096) = 0;
    qfree();
  }
  v3 = *(_QWORD *)(v1 - 1760);
  *(_BYTE *)(v1 - 1424) = *(_BYTE *)(v1 - 1761);
  *(_QWORD *)(v1 - 1416) = v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  clear_tinfo_t();
  if ( *(_QWORD *)(v1 - 1264) )
  {
    *(_QWORD *)(v1 - 1256) = 0;
    qfree();
  }
  std::string::_M_dispose();
  _Unwind_Resume(v0);
}

