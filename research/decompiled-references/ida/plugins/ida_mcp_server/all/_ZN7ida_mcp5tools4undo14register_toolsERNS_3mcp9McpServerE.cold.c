void __fastcall __noreturn ida_mcp::tools::undo::register_tools(
        ida_mcp::tools::undo *this,
        ida_mcp::mcp::McpServer *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        ida_mcp::mcp::ToolDefinition *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v13; // rbx
  struct _Unwind_Exception *v14; // r12
  __int64 i; // r13
  struct _Unwind_Exception *v16; // rbp
  __int64 j; // r12
  __int64 k; // r12

  for ( i = a13 + 24; i != a13; i -= 24 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v16 = v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  for ( j = a12; j != a12; j -= 24 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  for ( k = v13 + 24; k != v13; k -= 24 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  ida_mcp::mcp::ToolDefinition::~ToolDefinition(a10);
  _Unwind_Resume(v16);
}

