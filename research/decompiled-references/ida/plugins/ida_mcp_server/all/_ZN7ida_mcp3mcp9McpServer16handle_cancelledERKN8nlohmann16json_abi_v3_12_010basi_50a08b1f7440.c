void __fastcall ida_mcp::mcp::McpServer::handle_cancelled(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r12
  size_t v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // r13
  void *v9; // rbp
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r15
  char v13; // dl
  __int64 v14; // rax

  if ( *(_BYTE *)a2 == 1 )
  {
    v2 = *(_QWORD *)(a2 + 8);
    v3 = *(_QWORD *)(v2 + 16);
    if ( v3 )
    {
      v4 = v2 + 8;
      v5 = v2 + 8;
      do
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v3 + 40);
          if ( !v8 )
            break;
          v6 = 9;
          if ( v8 <= 9 )
            v6 = *(_QWORD *)(v3 + 40);
          v7 = memcmp(*(const void **)(v3 + 32), "requestId", v6);
          if ( v7 || (v7 = v8 - 9, (__int64)(v8 - 9) <= 0x7FFFFFFF) )
          {
            if ( v7 < 0 )
              break;
          }
          v5 = v3;
          v3 = *(_QWORD *)(v3 + 16);
          if ( !v3 )
            goto LABEL_12;
        }
        v3 = *(_QWORD *)(v3 + 24);
      }
      while ( v3 );
LABEL_12:
      if ( v4 != v5 && std::string::compare(*(void **)(v5 + 32), *(_QWORD *)(v5 + 40), "requestId") <= 0 )
      {
        if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 224)) )
          ida_mcp::mcp::McpServer::handle_cancelled();
        if ( *(_QWORD *)(a1 + 216) > 0x3E7u )
        {
          do
          {
            v9 = (void *)std::_Rb_tree_rebalance_for_erase();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            operator delete(v9, 0x30u);
            v10 = *(_QWORD *)(a1 + 216) - 1LL;
            *(_QWORD *)(a1 + 216) = v10;
          }
          while ( v10 > 0x3E7 );
        }
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v11 = *(_QWORD *)(a1 + 192);
        v12 = a1 + 184;
        if ( v11 )
        {
          while ( 1 )
          {
            v13 = nlohmann::json_abi_v3_12_0::operator<();
            v14 = *(_QWORD *)(v11 + 24);
            if ( v13 )
              v14 = *(_QWORD *)(v11 + 16);
            if ( !v14 )
              break;
            v11 = v14;
          }
          if ( !v13 )
          {
LABEL_27:
            if ( !(unsigned __int8)nlohmann::json_abi_v3_12_0::operator<() )
            {
LABEL_31:
              pthread_mutex_unlock((pthread_mutex_t *)(a1 + 224));
              return;
            }
            goto LABEL_28;
          }
          if ( v11 == *(_QWORD *)(a1 + 200) )
          {
LABEL_28:
            if ( v11 != v12 )
              nlohmann::json_abi_v3_12_0::operator<();
            goto LABEL_30;
          }
        }
        else
        {
          v11 = a1 + 184;
          if ( v12 == *(_QWORD *)(a1 + 200) )
          {
LABEL_30:
            operator new(0x30u);
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(a1 + 216);
            goto LABEL_31;
          }
        }
        std::_Rb_tree_decrement();
        goto LABEL_27;
      }
    }
  }
}

