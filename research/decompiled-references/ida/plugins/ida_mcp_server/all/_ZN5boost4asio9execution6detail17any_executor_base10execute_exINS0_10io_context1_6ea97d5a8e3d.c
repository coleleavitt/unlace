__int64 __fastcall boost::asio::execution::detail::any_executor_base::execute_ex<boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>>(
        __int64 a1)
{
  const char *v1; // rdi

  if ( *(_QWORD *)(a1 + 32) )
  {
    v1 = *(const char **)((**(__int64 (***)(void))(a1 + 40))() + 8);
    if ( v1 != "N5boost4asio10io_context19basic_executor_typeISaIvELm4EEE" && *v1 != 42 )
      strcmp(v1, "N5boost4asio10io_context19basic_executor_typeISaIvELm4EEE");
  }
  return boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>::execute<boost::asio::detail::executor_function>();
}

