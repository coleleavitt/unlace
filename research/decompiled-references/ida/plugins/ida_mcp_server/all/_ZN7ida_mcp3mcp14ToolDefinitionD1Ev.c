// Alternative name is '_ZN7ida_mcp3mcp14ToolDefinitionD2Ev'
void __fastcall ida_mcp::mcp::ToolDefinition::~ToolDefinition(ida_mcp::mcp::ToolDefinition *this)
{
  char *v2; // rdi
  char *v3; // rdi

  if ( *((_BYTE *)this + 152) )
  {
    if ( *((_BYTE *)this + 136) )
    {
      v3 = *((char **)this + 13);
      if ( v3 != (char *)this + 120 )
        operator delete(v3, *((_QWORD *)this + 15) + 1LL);
    }
  }
  if ( *((_BYTE *)this + 96) )
  {
    *((_BYTE *)this + 96) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v2 = *((char **)this + 4);
  if ( v2 != (char *)this + 48 )
    operator delete(v2, *((_QWORD *)this + 6) + 1LL);
  if ( *(ida_mcp::mcp::ToolDefinition **)this != (ida_mcp::mcp::ToolDefinition *)((char *)this + 16) )
    operator delete(*(void **)this, *((_QWORD *)this + 2) + 1LL);
}

