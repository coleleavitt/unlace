void __fastcall __noreturn ida_mcp::tools::metadata::register_tools(
        ida_mcp::tools::metadata *this,
        ida_mcp::mcp::McpServer *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        char a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        char a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        void *a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        void *a38,
        __int64 a39,
        __int64 a40,
        __int64 a41,
        __int64 a42,
        __int64 a43,
        __int64 a44,
        __int64 a45,
        char a46,
        void *a47,
        __int64 a48,
        __int64 a49,
        __int64 a50,
        char a51,
        __int64 a52,
        char a53)
{
  struct _Unwind_Exception *v53; // rax
  void *v54; // r14
  void *v55; // r15
  struct _Unwind_Exception *v56; // rbp
  char *i; // r12
  char *j; // r12
  __int64 retaddr; // [rsp+0h] [rbp+0h]

  v56 = v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  retaddr = 1;
  for ( i = &a16; i != &a16; i -= 24 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  for ( j = &a28 + (((_BYTE)retaddr - 1) & 0x18); j != &a28; j -= 24 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( a53 && a51 && a47 != &a49 )
    operator delete(a47, a49 + 1);
  if ( a46 )
  {
    a46 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( a38 != v55 )
    operator delete(a38, a40 + 1);
  if ( a34 != v54 )
    operator delete(a34, a36 + 1);
  _Unwind_Resume(v56);
}

