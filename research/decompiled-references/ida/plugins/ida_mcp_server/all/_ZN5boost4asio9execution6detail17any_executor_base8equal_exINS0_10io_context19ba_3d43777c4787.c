bool __fastcall boost::asio::execution::detail::any_executor_base::equal_ex<boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>>(
        __int64 a1,
        __int64 a2)
{
  char *v3; // rdi
  _QWORD *v4; // rbp
  char *v5; // rdi

  if ( *(_QWORD *)(a1 + 32)
    && ((v3 = *(char **)((**(__int64 (***)(void))(a1 + 40))() + 8),
         v3 == "N5boost4asio10io_context19basic_executor_typeISaIvELm4EEE")
     || *v3 != 42 && !strcmp(v3, "N5boost4asio10io_context19basic_executor_typeISaIvELm4EEE")) )
  {
    v4 = *(_QWORD **)(a1 + 32);
  }
  else
  {
    v4 = nullptr;
  }
  if ( !*(_QWORD *)(a2 + 32)
    || (v5 = *(char **)((**(__int64 (***)(void))(a2 + 40))() + 8),
        v5 != "N5boost4asio10io_context19basic_executor_typeISaIvELm4EEE")
    && (*v5 == 42 || strcmp(v5, "N5boost4asio10io_context19basic_executor_typeISaIvELm4EEE")) )
  {
    BUG();
  }
  return **(_QWORD **)(a2 + 32) == *v4;
}

