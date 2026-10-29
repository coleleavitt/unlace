// Alternative name is '_ZNSt6vectorIN7ida_mcp3mcp13PromptMessageESaIS2_EED1Ev'
void __fastcall std::vector<ida_mcp::mcp::PromptMessage>::~vector(char **a1)
{
  char *v1; // rbp
  char *v2; // rbx

  v1 = a1[1];
  v2 = *a1;
  if ( v1 != *a1 )
  {
    do
    {
      v2 += 24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v1 != v2 );
    v2 = *a1;
  }
  if ( v2 )
    operator delete(v2, a1[2] - v2);
}

