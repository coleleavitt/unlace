void __fastcall __noreturn ida_mcp::mcp::McpServer::handle_resources_read(
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
        pthread_mutex_t *mutex,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        char a30,
        __int64 a31,
        void (__fastcall *a32)(char *, char *, __int64))
{
  struct _Unwind_Exception *v32; // rbp

  std::string::_M_dispose();
  std::string::_M_dispose();
  pthread_mutex_unlock(mutex);
  if ( a32 )
    a32(&a30, &a30, 3);
  std::string::_M_dispose();
  _Unwind_Resume(v32);
}

