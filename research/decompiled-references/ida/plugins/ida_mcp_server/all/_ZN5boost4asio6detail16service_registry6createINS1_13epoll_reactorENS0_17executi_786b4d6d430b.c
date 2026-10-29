boost::asio::detail::epoll_reactor *__fastcall boost::asio::detail::service_registry::create<boost::asio::detail::epoll_reactor,boost::asio::execution_context>(
        __int64 *a1,
        boost::asio::execution_context *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, unsigned __int64, __int64); // rax
  boost::asio::detail::epoll_reactor *v7; // rbx
  __int64 v9; // [rsp+0h] [rbp-18h]

  v6 = *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)*a1 + 8LL);
  if ( v6 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate )
    v7 = (boost::asio::detail::epoll_reactor *)boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate(
                                                 0xE8u,
                                                 (__int64)a2,
                                                 a3,
                                                 a4,
                                                 a5,
                                                 a6,
                                                 v9);
  else
    v7 = (boost::asio::detail::epoll_reactor *)v6(*a1, 232u, 8);
  boost::asio::detail::epoll_reactor::epoll_reactor(v7, a2);
  *((_QWORD *)v7 + 5) = boost::asio::detail::service_registry::destroy_allocated<boost::asio::detail::epoll_reactor>;
  return v7;
}

