// Alternative name is '_ZN5boost4asio6detail14io_object_implINS1_23reactive_socket_serviceINS0_2ip3tcpEEENS0_15any_io_executorEED1Ev'
unsigned __int64 __fastcall boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::any_io_executor>::~io_object_impl(
        __int64 *a1)
{
  int v1; // esi
  int v4; // edi
  __int64 v5; // rdx
  char v6; // si
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-38h]
  __int64 v12; // [rsp+0h] [rbp-38h]
  __int64 v13; // [rsp+8h] [rbp-30h]
  __m128i v14; // [rsp+10h] [rbp-28h] BYREF
  __int64 v15; // [rsp+20h] [rbp-18h]
  unsigned __int64 v16; // [rsp+28h] [rbp-10h]

  v1 = *((_DWORD *)a1 + 2);
  v16 = __readfsqword(0x28u);
  if ( v1 != -1 )
  {
    v11 = *a1;
    boost::asio::detail::epoll_reactor::deregister_descriptor();
    v4 = *((_DWORD *)a1 + 2);
    v14 = 0;
    v15 = 0;
    boost::asio::detail::socket_ops::close(v4, (char *)a1 + 12, 1, &v14);
    v5 = a1[2];
    if ( v5 )
    {
      v6 = 0;
      v7 = *(_QWORD *)(v11 + 48);
      if ( *(_BYTE *)(v7 + 204) )
      {
        v13 = a1[2];
        v12 = *(_QWORD *)(v11 + 48);
        pthread_mutex_lock((pthread_mutex_t *)(v7 + 160));
        v5 = v13;
        v7 = v12;
        v6 = 1;
      }
      if ( v5 == *(_QWORD *)(v7 + 216) )
        *(_QWORD *)(v7 + 216) = *(_QWORD *)(v5 + 24);
      v8 = *(_QWORD *)(v5 + 32);
      if ( v8 )
        *(_QWORD *)(v8 + 24) = *(_QWORD *)(v5 + 24);
      v9 = *(_QWORD *)(v5 + 24);
      if ( v9 )
        *(_QWORD *)(v9 + 32) = *(_QWORD *)(v5 + 32);
      v10 = *(_QWORD *)(v7 + 224);
      *(_QWORD *)(v5 + 32) = 0;
      *(_QWORD *)(v5 + 24) = v10;
      *(_QWORD *)(v7 + 224) = v5;
      if ( v6 )
        pthread_mutex_unlock((pthread_mutex_t *)(v7 + 160));
      a1[2] = 0;
    }
  }
  if ( a1[8] )
    (*(void (__fastcall **)(__int64 *))a1[7])(a1 + 4);
  return v16 - __readfsqword(0x28u);
}

