void __fastcall __noreturn ida_mcp::mcp::McpServer::register_prompt(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        pthread_mutex_t *mutex,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        void *a18,
        int a19,
        __int64 a20,
        int a21,
        void *a22,
        int a23,
        __int64 a24,
        int a25,
        char a26,
        void *a27,
        __int64 a28,
        __int64 a29,
        char a30,
        char a31,
        int a32,
        __int64 a33,
        int a34,
        __int64 a35)
{
  ida_mcp::mcp::PromptArgument *v35; // rbx
  struct _Unwind_Exception *v36; // rbp
  ida_mcp::mcp::PromptArgument *i; // r12
  ida_mcp::mcp::PromptArgument *v38; // rdi
  ida_mcp::mcp::PromptArgument *retaddr; // [rsp+0h] [rbp+0h]

  std::string::_M_dispose();
  for ( i = retaddr; i != v35; i = (ida_mcp::mcp::PromptArgument *)((char *)i + 80) )
  {
    v38 = i;
    ida_mcp::mcp::PromptArgument::~PromptArgument(v38);
  }
  if ( a27 )
    operator delete(a27, a29 - (_QWORD)a27);
  if ( a26 )
    std::string::_M_dispose();
  std::string::_M_dispose();
  pthread_mutex_unlock(mutex);
  _Unwind_Resume(v36);
}

