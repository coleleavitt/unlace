// Alternative name is '_ZN5boost4asio6detail13epoll_reactorD1Ev'
void __fastcall boost::asio::detail::epoll_reactor::~epoll_reactor(boost::asio::detail::epoll_reactor *this)
{
  int v2; // edi
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rsi
  int v8; // edi

  *(_QWORD *)this = off_4447D0;
  *((_QWORD *)this + 6) = off_444810;
  v2 = *((_DWORD *)this + 32);
  if ( v2 != -1 )
    close(v2);
  v3 = *((_DWORD *)this + 33);
  if ( v3 != -1 )
    close(v3);
  v4 = *((_QWORD *)this + 27);
  while ( v4 )
  {
    v5 = v4;
    v4 = *(_QWORD *)(v4 + 24);
    boost::asio::detail::deallocate_object<boost::asio::execution_context::allocator<void>,boost::asio::detail::epoll_reactor::descriptor_state>(
      *((_QWORD *)this + 26),
      v5);
  }
  v6 = *((_QWORD *)this + 28);
  while ( v6 )
  {
    v7 = v6;
    v6 = *(_QWORD *)(v6 + 24);
    boost::asio::detail::deallocate_object<boost::asio::execution_context::allocator<void>,boost::asio::detail::epoll_reactor::descriptor_state>(
      *((_QWORD *)this + 26),
      v7);
  }
  pthread_mutex_destroy((pthread_mutex_t *)this + 4);
  v8 = *((_DWORD *)this + 31);
  if ( v8 != -1 )
  {
    if ( *((_DWORD *)this + 30) == v8 )
    {
LABEL_11:
      close(v8);
      pthread_mutex_destroy((pthread_mutex_t *)((char *)this + 72));
      return;
    }
    close(v8);
  }
  v8 = *((_DWORD *)this + 30);
  if ( v8 != -1 )
    goto LABEL_11;
  pthread_mutex_destroy((pthread_mutex_t *)((char *)this + 72));
}

