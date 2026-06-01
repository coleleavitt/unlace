void __noreturn ida_mcp::tools::types::`anonymous namespace'::handle_get_array_info()
{
  std::runtime_error *exception; // rbx

  exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
  std::runtime_error::runtime_error(exception, "Missing required parameter: name");
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::runtime_error,
    (void (*)(void *))&std::runtime_error::~runtime_error);
}

