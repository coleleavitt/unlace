void __fastcall __noreturn boost::asio::detail::allocate_object<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::execution_context::allocator<void>,boost::asio::io_context &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  __int64 v11; // rbx
  void *v12; // rbp

  if ( a11 )
    pthread_mutex_unlock((pthread_mutex_t *)(a10 + 8));
  __cxa_begin_catch(v12);
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a9 + 16LL))(a9, v11, 88, 8);
  __cxa_rethrow();
}

