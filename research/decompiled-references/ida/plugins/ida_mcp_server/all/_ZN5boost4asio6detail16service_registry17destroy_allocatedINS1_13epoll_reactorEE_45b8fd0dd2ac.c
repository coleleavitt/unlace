void __fastcall boost::asio::detail::service_registry::destroy_allocated<boost::asio::detail::epoll_reactor>(
        __int64 a1)
{
  __int64 v2; // r12
  void (__fastcall *v3)(boost::asio::detail::epoll_reactor *); // rax
  int v4; // edi
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rsi
  int v10; // eax
  int v11; // edi
  void (__fastcall *v12)(__int64, __int64, __int64, __int64); // rax

  v2 = **(_QWORD **)(a1 + 24);
  v3 = **(void (__fastcall ***)(boost::asio::detail::epoll_reactor *))a1;
  if ( v3 == boost::asio::detail::epoll_reactor::~epoll_reactor )
  {
    *(_QWORD *)a1 = off_4447D0;
    *(_QWORD *)(a1 + 48) = off_444810;
    v4 = *(_DWORD *)(a1 + 128);
    if ( v4 == -1 )
    {
      v5 = *(_DWORD *)(a1 + 132);
      if ( v5 == -1 )
        goto LABEL_4;
    }
    else
    {
      close(v4);
      v5 = *(_DWORD *)(a1 + 132);
      if ( v5 == -1 )
      {
LABEL_4:
        v6 = *(_QWORD *)(a1 + 216);
        while ( v6 )
        {
          v7 = v6;
          v6 = *(_QWORD *)(v6 + 24);
          boost::asio::detail::deallocate_object<boost::asio::execution_context::allocator<void>,boost::asio::detail::epoll_reactor::descriptor_state>(
            *(_QWORD *)(a1 + 208),
            v7);
        }
        v8 = *(_QWORD *)(a1 + 224);
        while ( v8 )
        {
          v9 = v8;
          v8 = *(_QWORD *)(v8 + 24);
          boost::asio::detail::deallocate_object<boost::asio::execution_context::allocator<void>,boost::asio::detail::epoll_reactor::descriptor_state>(
            *(_QWORD *)(a1 + 208),
            v9);
        }
        pthread_mutex_destroy((pthread_mutex_t *)(a1 + 160));
        v10 = *(_DWORD *)(a1 + 124);
        if ( v10 != -1 )
        {
          v11 = *(_DWORD *)(a1 + 120);
          if ( v10 == v11 )
          {
LABEL_10:
            close(v11);
LABEL_11:
            pthread_mutex_destroy((pthread_mutex_t *)(a1 + 72));
            goto LABEL_12;
          }
          close(v10);
        }
        v11 = *(_DWORD *)(a1 + 120);
        if ( v11 == -1 )
          goto LABEL_11;
        goto LABEL_10;
      }
    }
    close(v5);
    goto LABEL_4;
  }
  ((void (*)(void))v3)();
LABEL_12:
  v12 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v2 + 16LL);
  if ( v12 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::deallocate )
    operator delete((void *)(a1 - *(_QWORD *)(a1 + 232)), 0xF7u);
  else
    v12(v2, a1, 232, 8);
}

