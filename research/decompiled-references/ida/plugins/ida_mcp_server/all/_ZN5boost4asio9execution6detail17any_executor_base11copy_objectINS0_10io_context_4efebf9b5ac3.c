unsigned __int64 __fastcall boost::asio::execution::detail::any_executor_base::copy_object<boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>>(
        unsigned __int64 *a1,
        unsigned __int64 *a2)
{
  unsigned __int64 result; // rax

  result = *a2;
  *a1 = *a2;
  if ( result > 3 )
  {
    result = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFFCLL) + 16);
    _InterlockedAdd64((volatile signed __int64 *)(result + 224), 1u);
  }
  a1[4] = (unsigned __int64)a1;
  return result;
}

