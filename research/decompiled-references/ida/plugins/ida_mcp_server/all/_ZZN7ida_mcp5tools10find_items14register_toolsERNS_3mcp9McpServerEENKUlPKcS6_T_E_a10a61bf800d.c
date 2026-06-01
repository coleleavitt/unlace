void __fastcall __noreturn ZZN7ida_mcp5tools10find_items14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_T_E_clIPFN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNSB_14adl_serializerESE_IhSaIhEEvEERKSO_EEEDaS6_S6_S7__cold()
{
  ida_mcp::mcp::ToolDefinition *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *v2; // r15

  operator delete(v2, 0x28u);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  ida_mcp::mcp::ToolDefinition::~ToolDefinition(v0);
  _Unwind_Resume(v1);
}

