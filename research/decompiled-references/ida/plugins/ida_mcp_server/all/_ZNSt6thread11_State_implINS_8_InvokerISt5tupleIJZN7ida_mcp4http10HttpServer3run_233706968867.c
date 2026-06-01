void __fastcall std::thread::_State_impl<std::thread::_Invoker<std::tuple<ida_mcp::http::HttpServer::run(void)::{lambda(void)#1}>>>::~_State_impl(
        char *a1)
{
  int v2; // edi
  __int64 v3; // rdx
  char v4; // si
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-38h]
  __int64 v10; // [rsp+0h] [rbp-38h]
  __int64 v11; // [rsp+8h] [rbp-30h]
  __m128i v12; // [rsp+10h] [rbp-28h] BYREF
  __int64 v13; // [rsp+20h] [rbp-18h]
  unsigned __int64 v14; // [rsp+28h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  *(_QWORD *)a1 = off_4429B8;
  if ( *((_QWORD *)a1 + 14) )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
  if ( *((_DWORD *)a1 + 6) != -1 )
  {
    v9 = *((_QWORD *)a1 + 2);
    boost::asio::detail::epoll_reactor::deregister_descriptor();
    v2 = *((_DWORD *)a1 + 6);
    v12 = 0;
    v13 = 0;
    boost::asio::detail::socket_ops::close(v2, a1 + 28, 1, &v12);
    v3 = *((_QWORD *)a1 + 4);
    if ( v3 )
    {
      v4 = 0;
      v5 = *(_QWORD *)(v9 + 48);
      if ( *(_BYTE *)(v5 + 204) )
      {
        v11 = *((_QWORD *)a1 + 4);
        v10 = *(_QWORD *)(v9 + 48);
        pthread_mutex_lock((pthread_mutex_t *)(v5 + 160));
        v3 = v11;
        v5 = v10;
        v4 = 1;
      }
      if ( v3 == *(_QWORD *)(v5 + 216) )
        *(_QWORD *)(v5 + 216) = *(_QWORD *)(v3 + 24);
      v6 = *(_QWORD *)(v3 + 32);
      if ( v6 )
        *(_QWORD *)(v6 + 24) = *(_QWORD *)(v3 + 24);
      v7 = *(_QWORD *)(v3 + 24);
      if ( v7 )
        *(_QWORD *)(v7 + 32) = *(_QWORD *)(v3 + 32);
      v8 = *(_QWORD *)(v5 + 224);
      *(_QWORD *)(v3 + 32) = 0;
      *(_QWORD *)(v3 + 24) = v8;
      *(_QWORD *)(v5 + 224) = v3;
      if ( v4 )
        pthread_mutex_unlock((pthread_mutex_t *)(v5 + 160));
      *((_QWORD *)a1 + 4) = 0;
    }
  }
  if ( *((_QWORD *)a1 + 10) )
    (**((void (__fastcall ***)(char *))a1 + 9))(a1 + 48);
  std::thread::_State::~_State((std::thread::_State *)a1);
  operator delete(a1, 0x78u);
}

