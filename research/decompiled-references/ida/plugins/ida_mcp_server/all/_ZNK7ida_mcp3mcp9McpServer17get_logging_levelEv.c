__int64 __fastcall ida_mcp::mcp::McpServer::get_logging_level(ida_mcp::mcp::McpServer *this)
{
  unsigned int v1; // ebp

  if ( pthread_mutex_lock((pthread_mutex_t *)((char *)this + 224)) )
    ida_mcp::mcp::McpServer::get_logging_level();
  v1 = *((_DWORD *)this + 42);
  pthread_mutex_unlock((pthread_mutex_t *)((char *)this + 224));
  return v1;
}

