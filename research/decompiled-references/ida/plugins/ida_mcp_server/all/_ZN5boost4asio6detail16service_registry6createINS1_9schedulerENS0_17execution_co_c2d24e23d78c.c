unsigned __int64 __fastcall boost::asio::detail::service_registry::create<boost::asio::detail::scheduler,boost::asio::execution_context>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, unsigned __int64, __int64); // rax
  unsigned __int64 v7; // rbx
  __int64 v9; // [rsp+0h] [rbp-18h]

  v6 = *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)*a1 + 8LL);
  if ( v6 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate )
    v7 = boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate(0x110u, a2, a3, a4, a5, a6, v9);
  else
    v7 = v6(*a1, 272u, 8);
  boost::asio::detail::scheduler::scheduler();
  *(_QWORD *)(v7 + 40) = boost::asio::detail::service_registry::destroy_allocated<boost::asio::detail::scheduler>;
  return v7;
}

