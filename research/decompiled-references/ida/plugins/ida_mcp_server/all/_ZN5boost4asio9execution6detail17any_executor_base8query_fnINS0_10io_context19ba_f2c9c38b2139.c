_DWORD *__fastcall boost::asio::execution::detail::any_executor_base::query_fn<boost::asio::io_context::basic_executor_type<std::allocator<void>,0ul>,boost::asio::execution::prefer_only<boost::asio::execution::detail::outstanding_work::untracked_t<0>>>(
        _QWORD *a1)
{
  _DWORD *result; // rax

  result = (_DWORD *)operator new(4u);
  *result = 0;
  *a1 = result;
  return result;
}

