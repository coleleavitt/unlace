void __fastcall __noreturn ida_mcp::tools::hexrays::export_all_decompiled()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  std::locale *v2; // r12
  __int64 v3; // r15
  void *v4; // r15
  void *exception; // rbx

  if ( *(_QWORD *)(v1 - 1464) )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
  std::locale::~locale(v2);
  if ( v3 == 1 )
  {
    v4 = __cxa_begin_catch(v0);
    exception = __cxa_allocate_exception(0x10u);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
    std::string::basic_string<std::allocator<char>>(v1 - 864, "Invalid name_filter regex: ");
    std::string::append();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  std::string::_M_dispose();
  if ( *(_BYTE *)(v1 - 1504) )
  {
    *(_BYTE *)(v1 - 1504) = 0;
    std::basic_regex<char,std::regex_traits<char>>::~basic_regex((void *)(v1 - 1536));
  }
  std::filesystem::__cxx11::path::~path(*(std::filesystem::__cxx11::path **)(v1 - 1800));
  std::string::_M_dispose();
  _Unwind_Resume(v0);
}

