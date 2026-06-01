_BOOL8 __fastcall boost::asio::execution::detail::any_executor_base::query_fn<boost::asio::io_context::basic_executor_type<std::allocator<void>,0ul>,boost::asio::execution::prefer_only<boost::asio::execution::detail::relationship::fork_t<0>>>(
        _QWORD *a1,
        char *a2)
{
  _DWORD *v2; // rdx
  char v3; // al
  _BOOL8 result; // rax

  v2 = (_DWORD *)operator new(4u);
  v3 = *a2;
  *a1 = v2;
  result = (v3 & 2) != 0;
  *v2 = result;
  return result;
}

