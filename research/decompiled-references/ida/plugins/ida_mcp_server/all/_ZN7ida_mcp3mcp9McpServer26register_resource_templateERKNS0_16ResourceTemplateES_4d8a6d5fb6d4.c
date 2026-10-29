void __fastcall __noreturn ida_mcp::mcp::McpServer::register_resource_template(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        void *a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        void *a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        char a20)
{
  struct _Unwind_Exception *v20; // rbx
  pthread_mutex_t *v21; // r14

  if ( a20 )
    std::string::_M_dispose();
  std::string::_M_dispose();
  std::string::_M_dispose();
  pthread_mutex_unlock(v21);
  _Unwind_Resume(v20);
}

