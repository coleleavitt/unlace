void __fastcall __noreturn ida_mcp::tools::dirtree_tools::`anonymous namespace'::resolve_tree(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12,
        int a13,
        int a14,
        __int64 a15)
{
  __int64 v15; // rbx
  void *exception; // rbp
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  exception = __cxa_allocate_exception(0x10u);
  std::operator+<char>((__int64)&retaddr, "Unknown dirtree: ", *(_QWORD *)v15, *(_QWORD *)(v15 + 8));
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

