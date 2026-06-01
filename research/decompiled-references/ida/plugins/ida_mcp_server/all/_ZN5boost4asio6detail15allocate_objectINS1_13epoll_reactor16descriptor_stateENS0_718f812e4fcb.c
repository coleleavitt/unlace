unsigned __int64 __fastcall boost::asio::detail::allocate_object<boost::asio::detail::epoll_reactor::descriptor_state,boost::asio::execution_context::allocator<void>,bool &,int &>(
        __int64 a1,
        char *a2,
        int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v7)(); // rax
  unsigned __int64 v8; // rbx
  int v9; // r13d
  char v10; // r12
  __int64 v12; // [rsp+0h] [rbp-98h]

  v7 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 8LL);
  if ( v7 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate )
    v8 = boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate(
           0xA8u,
           (__int64)a2,
           (__int64)a3,
           a4,
           a5,
           a6,
           v12);
  else
    v8 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v7)(a1, 168, 8);
  v9 = *a3;
  v10 = *a2;
  *(_QWORD *)v8 = 0;
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 8) = boost::asio::detail::epoll_reactor::descriptor_state::do_complete;
  if ( pthread_mutex_init((pthread_mutex_t *)(v8 + 48), nullptr) )
  {
    boost::system::system_error::system_error();
    boost::asio::detail::allocate_object<boost::asio::detail::epoll_reactor::descriptor_state,boost::asio::execution_context::allocator<void>,bool &,int &>();
  }
  *(_DWORD *)(v8 + 88) = v9;
  *(_BYTE *)(v8 + 92) = v10;
  *(_OWORD *)(v8 + 112) = 0;
  *(_OWORD *)(v8 + 128) = 0;
  *(_OWORD *)(v8 + 144) = 0;
  return v8;
}

