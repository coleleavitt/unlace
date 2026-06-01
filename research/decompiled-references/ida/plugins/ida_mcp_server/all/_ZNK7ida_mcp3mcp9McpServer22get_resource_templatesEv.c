ida_mcp::mcp::McpServer *__fastcall ida_mcp::mcp::McpServer::get_resource_templates(
        ida_mcp::mcp::McpServer *this,
        __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rbx
  __int64 v7; // rax

  if ( pthread_mutex_lock((pthread_mutex_t *)(a2 + 224)) )
    ida_mcp::mcp::McpServer::get_resource_templates();
  v2 = *(_QWORD *)(a2 + 104);
  v3 = *(_QWORD *)(a2 + 96);
  *((_QWORD *)this + 2) = 0;
  *(_OWORD *)this = 0;
  if ( v2 == v3 )
  {
    v7 = 0;
    v6 = 0;
  }
  else
  {
    v4 = operator new(0x2E8BA2E8BA2E8BB0LL * ((v2 - v3) >> 4));
    v5 = (__m128i)(unsigned __int64)v4;
    v6 = v4;
    v7 = v4 + 0x2E8BA2E8BA2E8BB0LL * ((v2 - v3) >> 4);
    *((_QWORD *)this + 2) = v7;
    *(__m128i *)this = _mm_unpacklo_epi64(v5, v5);
  }
  if ( v2 != v3 )
  {
    while ( 1 )
    {
      if ( v6 == v7 )
      {
        std::vector<ida_mcp::mcp::ResourceTemplate>::_M_realloc_append<ida_mcp::mcp::ResourceTemplate const&>();
        v3 += 176;
        if ( v3 == v2 )
          break;
      }
      else
      {
        *(_QWORD *)v6 = v6 + 16;
        std::string::_M_construct<true>();
        *(_QWORD *)(v6 + 32) = v6 + 48;
        std::string::_M_construct<true>();
        *(_BYTE *)(v6 + 96) = 0;
        if ( *(_BYTE *)(v3 + 96) )
        {
          *(_QWORD *)(v6 + 64) = v6 + 80;
          std::string::_M_construct<true>();
          *(_BYTE *)(v6 + 96) = 1;
        }
        *(_BYTE *)(v6 + 136) = 0;
        if ( *(_BYTE *)(v3 + 136) )
        {
          *(_QWORD *)(v6 + 104) = v6 + 120;
          std::string::_M_construct<true>();
          *(_BYTE *)(v6 + 136) = 1;
        }
        *((_QWORD *)this + 1) += 144LL;
        v3 += 176;
        if ( v3 == v2 )
          break;
      }
      v6 = *((_QWORD *)this + 1);
      v7 = *((_QWORD *)this + 2);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 224));
  return this;
}

