int __fastcall ida_mcp::mcp::McpServer::set_logging_level(__int64 a1, int a2)
{
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 224)) )
    ida_mcp::mcp::McpServer::set_logging_level();
  *(_DWORD *)(a1 + 168) = a2;
  return pthread_mutex_unlock((pthread_mutex_t *)(a1 + 224));
}

