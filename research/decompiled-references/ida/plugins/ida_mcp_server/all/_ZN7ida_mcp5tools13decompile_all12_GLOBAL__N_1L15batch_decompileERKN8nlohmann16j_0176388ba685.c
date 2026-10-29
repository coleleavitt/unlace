void __noreturn ida_mcp::tools::decompile_all::`anonymous namespace'::batch_decompile()
{
  std::runtime_error *exception; // rbp

  exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
  std::runtime_error::runtime_error(exception, "Batch decompilation failed or was cancelled");
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::runtime_error,
    (void (*)(void *))&std::runtime_error::~runtime_error);
}

