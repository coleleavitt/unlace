unsigned __int64 __fastcall boost::asio::execution::detail::any_executor_base::query_fn<boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>,boost::asio::execution::context_as_t<boost::asio::execution_context &>>(
        unsigned __int64 *a1,
        _QWORD *a2)
{
  unsigned __int64 result; // rax

  result = *a2 & 0xFFFFFFFFFFFFFFFCLL;
  *a1 = result;
  return result;
}

