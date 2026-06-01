__int64 __fastcall boost::asio::execution::detail::any_executor_base::move_object<boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  a1[4] = a1;
  *a1 = result;
  return result;
}

