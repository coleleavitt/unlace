ida_mcp::mcp::McpServer *__fastcall ida_mcp::mcp::McpServer::get_resources(ida_mcp::mcp::McpServer *this, __int64 a2)
{
  pthread_mutex_t *v2; // r13
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  unsigned __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rbp
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rbx
  __int64 v12; // rax
  const __m128i *v13; // rbp
  const __m128i *v14; // r14
  __m128i v16; // xmm0
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  char *v19; // rcx
  const void *v20; // rsi
  void *v21; // [rsp+0h] [rbp-48h]
  size_t v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+10h] [rbp-38h]

  v2 = (pthread_mutex_t *)(a2 + 224);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a2 + 224)) )
    ida_mcp::mcp::McpServer::get_resources();
  v6 = *(_QWORD *)(a2 + 88);
  v7 = -2004318072;
  *((_QWORD *)this + 2) = 0;
  *(_OWORD *)this = 0;
  if ( v6 > 0x88888888888888LL )
    std::__throw_length_error("vector::reserve");
  if ( v6 )
  {
    v8 = 240 * v6;
    v9 = operator new(240 * v6);
    v10 = (__m128i)(unsigned __int64)v9;
    v11 = v9;
    v12 = v9 + v8;
    *((_QWORD *)this + 2) = v12;
    *(__m128i *)this = _mm_unpacklo_epi64(v10, v10);
  }
  else
  {
    v12 = 0;
    v11 = 0;
  }
  v13 = *(const __m128i **)(a2 + 72);
  v14 = (const __m128i *)(a2 + 56);
  if ( v13 != (const __m128i *)(a2 + 56) )
  {
    while ( 1 )
    {
      if ( v11 == v12 )
      {
        std::vector<ida_mcp::mcp::Resource>::_M_realloc_append<ida_mcp::mcp::Resource const&>(
          (int)this,
          (_DWORD)v13 + 64,
          v7,
          v3,
          v4,
          v5,
          v21,
          v22,
          v23);
        v13 = (const __m128i *)std::_Rb_tree_increment();
        if ( v14 == v13 )
          break;
      }
      else
      {
        *(_QWORD *)v11 = v11 + 16;
        std::string::_M_construct<true>();
        *(_QWORD *)(v11 + 32) = v11 + 48;
        std::string::_M_construct<true>();
        *(_BYTE *)(v11 + 96) = 0;
        if ( v13[10].m128i_i8[0] )
        {
          *(_QWORD *)(v11 + 64) = v11 + 80;
          std::string::_M_construct<true>();
          *(_BYTE *)(v11 + 96) = 1;
        }
        *(_BYTE *)(v11 + 136) = 0;
        if ( v13[12].m128i_i8[8] )
        {
          *(_QWORD *)(v11 + 104) = v11 + 120;
          std::string::_M_construct<true>();
          *(_BYTE *)(v11 + 136) = 1;
        }
        *(_BYTE *)(v11 + 232) = 0;
        if ( v13[18].m128i_i8[8] )
        {
          *(_BYTE *)(v11 + 168) = 0;
          if ( v13[14].m128i_i8[8] )
          {
            v17 = v13[13].m128i_i64[1] - v13[13].m128i_i64[0];
            *(_QWORD *)(v11 + 160) = 0;
            *(_OWORD *)(v11 + 144) = 0;
            if ( v17 )
            {
              v22 = v17;
              v18 = operator new(v17);
              v17 = v22;
              v19 = (char *)v18;
            }
            else
            {
              v19 = nullptr;
            }
            *(_QWORD *)(v11 + 160) = &v19[v17];
            *(__m128i *)(v11 + 144) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
            v20 = (const void *)v13[13].m128i_i64[0];
            if ( v13[13].m128i_i64[1] - (__int64)v20 > 0 )
            {
              v22 = v13[13].m128i_i64[1] - (_QWORD)v20;
              v19 = (char *)memcpy(v19, v20, v22) + v22;
            }
            *(_QWORD *)(v11 + 152) = v19;
            *(_BYTE *)(v11 + 168) = 1;
          }
          v16 = _mm_loadu_si128(v13 + 15);
          *(_BYTE *)(v11 + 224) = 0;
          *(__m128i *)(v11 + 176) = v16;
          if ( v13[18].m128i_i8[0] )
          {
            *(_QWORD *)(v11 + 192) = v11 + 208;
            std::string::_M_construct<true>();
            *(_BYTE *)(v11 + 224) = 1;
          }
          *(_BYTE *)(v11 + 232) = 1;
        }
        *((_QWORD *)this + 1) += 240LL;
        v13 = (const __m128i *)std::_Rb_tree_increment();
        if ( v14 == v13 )
          break;
      }
      v11 = *((_QWORD *)this + 1);
      v12 = *((_QWORD *)this + 2);
    }
  }
  pthread_mutex_unlock(v2);
  return this;
}

