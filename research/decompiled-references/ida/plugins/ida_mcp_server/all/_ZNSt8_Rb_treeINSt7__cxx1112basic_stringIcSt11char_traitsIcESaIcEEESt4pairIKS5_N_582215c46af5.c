_QWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>,std::_Select1st<std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>>>::_M_get_insert_unique_pos(
        __int64 a1,
        const void *a2,
        size_t a3)
{
  _QWORD *v4; // r14
  const void *v5; // r15
  size_t v6; // r12
  _QWORD *v7; // rdx
  char v8; // cl
  size_t v9; // rdx
  signed __int64 v10; // rax
  size_t v11; // rdx
  int v12; // eax
  __int64 v14; // r12
  __int64 v15; // rax

  v4 = *(_QWORD **)(a1 + 16);
  if ( !v4 )
  {
    v4 = (_QWORD *)(a1 + 8);
    goto LABEL_25;
  }
  v5 = (const void *)v4[4];
  v6 = v4[5];
  while ( 1 )
  {
    v9 = v6;
    if ( a3 <= v6 )
      v9 = a3;
    if ( !v9 || (LODWORD(v10) = memcmp(a2, v5, v9), !(_DWORD)v10) )
    {
      v10 = a3 - v6;
      if ( (__int64)(a3 - v6) > 0x7FFFFFFF )
        goto LABEL_3;
      if ( v10 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v10 < 0 )
      break;
LABEL_3:
    v7 = (_QWORD *)v4[3];
    v8 = 0;
    if ( !v7 )
      goto LABEL_13;
LABEL_4:
    v5 = (const void *)v7[4];
    v6 = v7[5];
    v4 = v7;
  }
  v7 = (_QWORD *)v4[2];
  v8 = 1;
  if ( v7 )
    goto LABEL_4;
LABEL_13:
  if ( !v8 )
    goto LABEL_14;
LABEL_25:
  if ( v4 == *(_QWORD **)(a1 + 24) )
    return nullptr;
  v15 = std::_Rb_tree_decrement();
  v5 = *(const void **)(v15 + 32);
  v6 = *(_QWORD *)(v15 + 40);
  v4 = (_QWORD *)v15;
LABEL_14:
  v11 = v6;
  if ( a3 <= v6 )
    v11 = a3;
  if ( !v11 || (v12 = memcmp(v5, a2, v11)) == 0 )
  {
    v14 = v6 - a3;
    if ( v14 > 0x7FFFFFFF )
      return v4;
    if ( v14 >= (__int64)0xFFFFFFFF80000000LL )
    {
      v12 = v14;
      goto LABEL_18;
    }
    return nullptr;
  }
LABEL_18:
  if ( v12 < 0 )
    return nullptr;
  return v4;
}

