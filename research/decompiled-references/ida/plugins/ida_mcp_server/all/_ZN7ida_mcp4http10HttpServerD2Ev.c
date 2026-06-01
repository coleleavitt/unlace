// Alternative name is '_ZN7ida_mcp4http10HttpServerD1Ev'
void __fastcall ida_mcp::http::HttpServer::~HttpServer(__int64 (__fastcall ****this)(), __int64 a2)
{
  _QWORD *v3; // r13
  _QWORD *v4; // rbx
  int v5; // eax
  volatile signed __int32 *v6; // rbp
  volatile signed __int32 *v7; // rdx
  void *v8; // rbx
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  _QWORD *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(); // rax
  __int64 (__fastcall ***v16)(); // rbx
  __int64 (__fastcall *v17)(); // rdx
  __int64 (__fastcall ***v18)(); // rdi
  __int64 v19; // rax
  __int64 v20; // rdi

  ida_mcp::http::HttpServer::stop((ida_mcp::http::HttpServer *)this);
  v3 = *(this + 17);
  v4 = *(this + 16);
  if ( v3 != v4 )
  {
    while ( 1 )
    {
      v6 = (volatile signed __int32 *)v4[1];
      if ( !v6 )
        goto LABEL_4;
      v7 = v6 + 2;
      if ( *((_QWORD *)v6 + 1) == 0x100000001LL )
      {
        v19 = *(_QWORD *)v6;
        v20 = v4[1];
        *((_QWORD *)v6 + 1) = 0;
        (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v19 + 16))(v20, a2, v7);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 24LL))(v6);
        goto LABEL_4;
      }
      if ( _libc_single_threaded )
      {
        v5 = *((_DWORD *)v6 + 2);
        *((_DWORD *)v6 + 2) = v5 - 1;
        if ( v5 != 1 )
          goto LABEL_4;
LABEL_9:
        v4 += 2;
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold();
        if ( v3 == v4 )
        {
LABEL_10:
          v4 = *(this + 16);
          break;
        }
      }
      else
      {
        if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 )
          goto LABEL_9;
LABEL_4:
        v4 += 2;
        if ( v3 == v4 )
          goto LABEL_10;
      }
    }
  }
  if ( v4 )
    operator delete(v4, (char *)*(this + 18) - (char *)v4);
  v8 = *(this + 9);
  if ( v8 )
  {
    boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::any_io_executor>::~io_object_impl();
    operator delete(v8, 0x58u);
  }
  v9 = (__int64)*(this + 7);
  v10 = *(_QWORD **)(v9 + 56);
  if ( !v10 )
    goto LABEL_27;
  do
  {
    (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
    v10 = (_QWORD *)v10[4];
  }
  while ( v10 );
  v9 = (__int64)*(this + 7);
  v11 = *(_QWORD **)(v9 + 56);
  if ( !v11 )
    goto LABEL_27;
  do
  {
    (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    v11 = (_QWORD *)v11[4];
  }
  while ( v11 );
  v9 = (__int64)*(this + 7);
  v12 = *(_QWORD *)(v9 + 56);
  if ( v12 )
  {
    do
    {
      v13 = v12;
      v12 = *(_QWORD *)(v12 + 32);
      (*(void (__fastcall **)(__int64))(v13 + 40))(v13);
      *(_QWORD *)(v9 + 56) = v12;
    }
    while ( v12 );
    v9 = (__int64)*(this + 7);
    v14 = (__int64)*(this + 6);
    pthread_mutex_destroy((pthread_mutex_t *)(v9 + 8));
    v15 = *(__int64 (__fastcall **)())(*(_QWORD *)v14 + 16LL);
    if ( v15 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::deallocate )
    {
      if ( !v9 )
        goto LABEL_23;
      goto LABEL_28;
    }
  }
  else
  {
LABEL_27:
    v14 = (__int64)*(this + 6);
    pthread_mutex_destroy((pthread_mutex_t *)(v9 + 8));
    v15 = *(__int64 (__fastcall **)())(*(_QWORD *)v14 + 16LL);
    if ( v15 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::deallocate )
    {
LABEL_28:
      operator delete((void *)(v9 - *(_QWORD *)(v9 + 64)), 0x4Fu);
      goto LABEL_23;
    }
  }
  ((void (__fastcall *)(__int64, __int64, __int64, __int64))v15)(v14, v9, 64, 8);
LABEL_23:
  v16 = *(this + 6);
  v17 = **v16;
  if ( v17 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::destroy )
  {
    ((void (__fastcall *)(__int64 (__fastcall ***)()))(*v16)[3])(v16);
    operator delete(v16, 0x10u);
    v18 = *this;
    if ( *this == (__int64 (__fastcall ***)())(this + 2) )
      return;
    goto LABEL_25;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)()))v17)(v16);
  v18 = *this;
  if ( *this != (__int64 (__fastcall ***)())(this + 2) )
LABEL_25:
    operator delete(v18, (unsigned __int64)*(this + 2) + 1);
}

