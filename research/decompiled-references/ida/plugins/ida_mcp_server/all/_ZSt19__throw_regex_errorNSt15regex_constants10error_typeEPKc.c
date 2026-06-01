void __fastcall __noreturn std::__throw_regex_error(int a1, const char *a2)
{
  std::runtime_error *exception; // rbx

  exception = (std::runtime_error *)__cxa_allocate_exception(0x18u);
  std::runtime_error::runtime_error(exception, a2);
  *((_DWORD *)exception + 4) = a1;
  *(_QWORD *)exception = (char *)&`vtable for'std::regex_error + 16;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::regex_error,
    (void (*)(void *))&std::regex_error::~regex_error);
}

