void __fastcall __noreturn ida_mcp::tools::offsets::register_tools(
        ida_mcp::tools::offsets *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rbx
  struct _Unwind_Exception *v3; // rbp
  ida_mcp::mcp::ToolDefinition *v4; // r13

  if ( STACK[0x8F0] )
    ((void (__fastcall *)(__int64, __int64, __int64))STACK[0x8F0])(v2, v2, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition(v4);
  _Unwind_Resume(v3);
}

