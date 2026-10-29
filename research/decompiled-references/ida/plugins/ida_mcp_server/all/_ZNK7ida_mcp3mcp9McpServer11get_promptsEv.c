ida_mcp::mcp::McpServer *__fastcall ida_mcp::mcp::McpServer::get_prompts(ida_mcp::mcp::McpServer *this, __int64 a2)
{
  int v3; // r8d
  int v4; // r9d
  unsigned __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rbx
  size_t v18; // rdx
  __int64 v19; // rax
  __int16 v20; // ax
  unsigned __int64 v21; // rax
  _BYTE *v22; // rdi
  _BYTE *v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  bool v26; // zf
  void *v28; // [rsp+0h] [rbp-78h]
  unsigned __int64 v29; // [rsp+8h] [rbp-70h]
  ida_mcp::mcp::PromptArgument *v30; // [rsp+10h] [rbp-68h]
  __int64 v31; // [rsp+20h] [rbp-58h]
  _QWORD v32[9]; // [rsp+30h] [rbp-48h] BYREF

  v32[1] = __readfsqword(0x28u);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a2 + 224)) )
    ida_mcp::mcp::McpServer::get_prompts();
  v5 = *(_QWORD *)(a2 + 160);
  v6 = 991146299;
  *((_QWORD *)this + 2) = 0;
  *(_OWORD *)this = 0;
  if ( v5 > 0x13B13B13B13B13BLL )
    std::__throw_length_error("vector::reserve");
  if ( v5 )
  {
    v7 = 104 * v5;
    v8 = operator new(104 * v5);
    v9 = (__m128i)(unsigned __int64)v8;
    v10 = v8;
    v11 = v8 + v7;
    *((_QWORD *)this + 2) = v11;
    *(__m128i *)this = _mm_unpacklo_epi64(v9, v9);
  }
  else
  {
    v11 = 0;
    v10 = 0;
  }
  v12 = *(_QWORD *)(a2 + 144);
  v30 = (ida_mcp::mcp::PromptArgument *)(a2 + 128);
  if ( v12 != a2 + 128 )
  {
    v13 = v32;
    while ( v10 == v11 )
    {
      std::vector<ida_mcp::mcp::Prompt>::_M_realloc_append<ida_mcp::mcp::Prompt const&>(
        (int)this,
        v12 + 64,
        v6,
        (int)v13,
        v3,
        v4,
        v28,
        v29,
        v30);
LABEL_11:
      v12 = std::_Rb_tree_increment();
      if ( v30 == (ida_mcp::mcp::PromptArgument *)v12 )
        goto LABEL_31;
      v10 = *((_QWORD *)this + 1);
      v11 = *((_QWORD *)this + 2);
    }
    *(_QWORD *)v10 = v10 + 16;
    std::string::_M_construct<true>();
    *(_BYTE *)(v10 + 64) = 0;
    if ( *(_BYTE *)(v12 + 128) )
    {
      *(_QWORD *)(v10 + 32) = v10 + 48;
      std::string::_M_construct<true>();
      *(_BYTE *)(v10 + 64) = 1;
    }
    *(_BYTE *)(v10 + 96) = 0;
    if ( !*(_BYTE *)(v12 + 160) )
    {
LABEL_10:
      *((_QWORD *)this + 1) += 104LL;
      goto LABEL_11;
    }
    v14 = *(_QWORD *)(v12 + 144) - *(_QWORD *)(v12 + 136);
    *(_QWORD *)(v10 + 88) = 0;
    *(_OWORD *)(v10 + 72) = 0;
    if ( v14 )
      v31 = operator new(v14);
    else
      v31 = 0;
    *(_QWORD *)(v10 + 88) = v31 + v14;
    *(__m128i *)(v10 + 72) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
    v15 = *(_QWORD *)(v12 + 144);
    if ( v15 == *(_QWORD *)(v12 + 136) )
    {
      v17 = v31;
LABEL_30:
      *(_QWORD *)(v10 + 80) = v17;
      *(_BYTE *)(v10 + 96) = 1;
      goto LABEL_10;
    }
    v16 = *(_QWORD *)(v12 + 136);
    v17 = v31;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v16 + 8);
      v22 = (_BYTE *)(v17 + 16);
      *(_QWORD *)v17 = v17 + 16;
      v23 = *(_BYTE **)v16;
      v32[0] = v21;
      if ( v21 <= 0xF )
        break;
      v29 = (unsigned __int64)v23;
      v24 = std::string::_M_create();
      *(_QWORD *)v17 = v24;
      v22 = (_BYTE *)v24;
      v25 = v32[0];
      v23 = (_BYTE *)v29;
      v26 = v32[0] == 0;
      *(_QWORD *)(v17 + 16) = v32[0];
      v18 = v25 + 1;
      if ( v26 )
      {
LABEL_28:
        *v22 = *v23;
        v19 = v32[0];
        goto LABEL_21;
      }
      v19 = -1;
      if ( v18 )
        goto LABEL_20;
LABEL_21:
      *(_QWORD *)(v17 + 8) = v19;
      *(_BYTE *)(v17 + 64) = 0;
      if ( *(_BYTE *)(v16 + 64) )
      {
        *(_QWORD *)(v17 + 32) = v17 + 48;
        std::string::_M_construct<true>();
        *(_BYTE *)(v17 + 64) = 1;
      }
      v20 = *(_WORD *)(v16 + 72);
      v16 += 80;
      v17 += 80;
      *(_WORD *)(v17 - 8) = v20;
      if ( v15 == v16 )
        goto LABEL_30;
    }
    v18 = v21 + 1;
    if ( !v21 )
      goto LABEL_28;
LABEL_20:
    memcpy(v22, v23, v18);
    v19 = v32[0];
    goto LABEL_21;
  }
LABEL_31:
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 224));
  return this;
}

