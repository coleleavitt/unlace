void __fastcall __noreturn ida_mcp::tools::jumptables::register_tools(
        ida_mcp::tools::jumptables *this,
        ida_mcp::mcp::McpServer *a2)
{
  struct _Unwind_Exception *v2; // rbx
  __int64 v3; // rbp
  ida_mcp::mcp::ToolDefinition *v4; // r12

  if ( STACK[0xC80] )
    ((void (__fastcall *)(__int64, __int64, __int64))STACK[0xC80])(v3, v3, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition(v4);
  _Unwind_Resume(v2);
}

