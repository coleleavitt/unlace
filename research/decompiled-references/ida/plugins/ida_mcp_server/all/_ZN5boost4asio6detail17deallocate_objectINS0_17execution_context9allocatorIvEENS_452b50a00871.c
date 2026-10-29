void __fastcall boost::asio::detail::deallocate_object<boost::asio::execution_context::allocator<void>,boost::asio::detail::epoll_reactor::descriptor_state>(
        __int64 a1,
        __int64 a2)
{
  __int64 **v3; // r14
  __int64 **v4; // r12
  __int64 *v5; // rsi
  void (__fastcall *v6)(_QWORD, __int64 *, __int128 *, _QWORD); // rax
  __int64 v7; // rax
  __int64 (__fastcall *v8)(); // rax
  __int128 v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v3 = (__int64 **)(a2 + 160);
  v4 = (__int64 **)(a2 + 112);
  do
  {
    v5 = *(v3 - 2);
    v3 -= 2;
    if ( v5 )
    {
      do
      {
        v7 = *v5;
        *v3 = (__int64 *)*v5;
        if ( v7 )
        {
          *v5 = 0;
          v6 = (void (__fastcall *)(_QWORD, __int64 *, __int128 *, _QWORD))v5[1];
        }
        else
        {
          v3[1] = nullptr;
          v6 = (void (__fastcall *)(_QWORD, __int64 *, __int128 *, _QWORD))v5[1];
          *v5 = 0;
        }
        v9 = 0;
        v10 = 0;
        v6(0, v5, &v9, 0);
        v5 = *v3;
      }
      while ( *v3 );
    }
  }
  while ( v3 != v4 );
  pthread_mutex_destroy((pthread_mutex_t *)(a2 + 48));
  v8 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 16LL);
  if ( v8 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::deallocate )
    operator delete((void *)(a2 - *(_QWORD *)(a2 + 168)), 0xB7u);
  else
    ((void (__fastcall *)(__int64, __int64, __int64, __int64))v8)(a1, a2, 168, 8);
}

