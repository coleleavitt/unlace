// Alternative name is '_ZNSt6vectorIN7ida_mcp3mcp14ToolDefinitionESaIS2_EED1Ev'
void __fastcall std::vector<ida_mcp::mcp::ToolDefinition>::~vector(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi
  void *v5; // rdi

  v2 = a1[1];
  v3 = *a1;
  if ( v2 != *a1 )
  {
    do
    {
      if ( *(_BYTE *)(v3 + 152) )
      {
        if ( *(_BYTE *)(v3 + 136) )
        {
          v5 = *(void **)(v3 + 104);
          if ( v5 != (void *)(v3 + 120) )
            operator delete(v5, *(_QWORD *)(v3 + 120) + 1LL);
        }
      }
      if ( *(_BYTE *)(v3 + 96) )
      {
        *(_BYTE *)(v3 + 96) = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v4 = *(void **)(v3 + 32);
      if ( v4 != (void *)(v3 + 48) )
        operator delete(v4, *(_QWORD *)(v3 + 48) + 1LL);
      if ( *(_QWORD *)v3 != v3 + 16 )
        operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) + 1LL);
      v3 += 160;
    }
    while ( v2 != v3 );
    v3 = *a1;
  }
  if ( v3 )
    operator delete((void *)v3, a1[2] - v3);
}

