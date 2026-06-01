void __fastcall mcp_plugin_t::run(
        mcp_plugin_t *this,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbx
  void *v10; // r12
  struct _Unwind_Exception *v11; // r13
  void *v12; // rax
  __int64 v13; // [rsp+8h] [rbp+8h]
  __int64 v14; // [rsp+8h] [rbp+8h]

  if ( a9 )
  {
    v13 = a3;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a9 + 8LL))(a9);
    a3 = v13;
  }
  v14 = a3;
  operator delete(v10, 8u);
  std::vector<ida_mcp::mcp::ToolDefinition>::~vector();
  if ( v14 == 1 )
  {
    v12 = __cxa_begin_catch(v11);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
    warning("MCP Server error: %s");
    *(_BYTE *)(v9 + 128) = 0;
    __cxa_end_catch();
    JUMPOUT(0x16572F);
  }
  _Unwind_Resume(v11);
}

