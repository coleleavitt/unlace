void __fastcall __noreturn ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO__cold(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char a12,
        __int64 a13,
        void (__fastcall *a14)(char *, char *, __int64),
        __int64 a15,
        void *a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        void *a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        char a28,
        void *a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        char a33,
        __int64 a34,
        char a35)
{
  void *v35; // rbx
  void *v36; // rbp
  struct _Unwind_Exception *v37; // r12

  if ( a14 )
    a14(&a12, &a12, 3);
  if ( a35 && a33 && a29 != &a31 )
    operator delete(a29, a31 + 1);
  if ( a28 )
  {
    a28 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( a20 != v36 )
    operator delete(a20, a22 + 1);
  if ( a16 != v35 )
    operator delete(a16, a18 + 1);
  _Unwind_Resume(v37);
}

