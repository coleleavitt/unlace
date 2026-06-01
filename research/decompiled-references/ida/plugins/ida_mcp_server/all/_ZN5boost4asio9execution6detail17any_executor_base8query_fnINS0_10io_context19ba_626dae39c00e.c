__int64 __fastcall boost::asio::execution::detail::any_executor_base::query_fn<boost::asio::io_context::basic_executor_type<std::allocator<void>,0ul>,boost::asio::execution::detail::blocking::never_t<0>>(
        _QWORD *a1,
        __int64 *a2)
{
  _DWORD *v2; // rdx
  __int64 v3; // rax
  __int64 result; // rax

  v2 = (_DWORD *)operator new(4u);
  v3 = *a2;
  *a1 = v2;
  result = 2 * (unsigned int)(v3 & 1);
  *v2 = result;
  return result;
}

