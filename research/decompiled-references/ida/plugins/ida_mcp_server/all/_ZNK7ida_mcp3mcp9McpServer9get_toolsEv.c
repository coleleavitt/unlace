ida_mcp::mcp::McpServer *__fastcall ida_mcp::mcp::McpServer::get_tools(ida_mcp::mcp::McpServer *this, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  __int16 v11; // ax

  if ( pthread_mutex_lock((pthread_mutex_t *)(a2 + 224)) )
    ida_mcp::mcp::McpServer::get_tools();
  v2 = *(_QWORD *)(a2 + 40);
  *((_QWORD *)this + 2) = 0;
  *(_OWORD *)this = 0;
  if ( v2 > 0xCCCCCCCCCCCCCCLL )
    std::__throw_length_error("vector::reserve");
  if ( v2 )
  {
    v3 = 160 * v2;
    v4 = operator new(160 * v2);
    v5 = (__m128i)(unsigned __int64)v4;
    v6 = v4;
    v7 = v4 + v3;
    *((_QWORD *)this + 2) = v7;
    *(__m128i *)this = _mm_unpacklo_epi64(v5, v5);
  }
  else
  {
    v7 = 0;
    v6 = 0;
  }
  v8 = *(_QWORD *)(a2 + 24);
  v9 = a2 + 8;
  if ( v8 != a2 + 8 )
  {
    while ( 1 )
    {
      if ( v6 == v7 )
      {
        std::vector<ida_mcp::mcp::ToolDefinition>::_M_realloc_append<ida_mcp::mcp::ToolDefinition const&>();
        v8 = std::_Rb_tree_increment();
        if ( v9 == v8 )
          break;
      }
      else
      {
        *(_QWORD *)v6 = v6 + 16;
        std::string::_M_construct<true>();
        *(_QWORD *)(v6 + 32) = v6 + 48;
        std::string::_M_construct<true>();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        *(_BYTE *)(v6 + 96) = 0;
        if ( *(_BYTE *)(v8 + 160) )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          *(_BYTE *)(v6 + 96) = 1;
        }
        *(_BYTE *)(v6 + 152) = 0;
        if ( *(_BYTE *)(v8 + 216) )
        {
          *(_BYTE *)(v6 + 136) = 0;
          if ( *(_BYTE *)(v8 + 200) )
          {
            *(_QWORD *)(v6 + 104) = v6 + 120;
            std::string::_M_construct<true>();
            *(_BYTE *)(v6 + 136) = 1;
          }
          *(_WORD *)(v6 + 144) = *(_WORD *)(v8 + 208);
          *(_WORD *)(v6 + 146) = *(_WORD *)(v8 + 210);
          *(_WORD *)(v6 + 148) = *(_WORD *)(v8 + 212);
          v11 = *(_WORD *)(v8 + 214);
          *(_BYTE *)(v6 + 152) = 1;
          *(_WORD *)(v6 + 150) = v11;
        }
        *((_QWORD *)this + 1) += 160LL;
        v8 = std::_Rb_tree_increment();
        if ( v9 == v8 )
          break;
      }
      v6 = *((_QWORD *)this + 1);
      v7 = *((_QWORD *)this + 2);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 224));
  return this;
}

