unsigned __int64 __fastcall ZZN7ida_mcp5tools17xref_manipulation14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_RKN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS8_14adl_serializerESB_IhSaIhEEvEET_E_clIPFSL_SN_EEEDaS6_S6_SN_SO_(
        __int64 a1,
        const char *a2,
        const char *a3,
        __int64 a4,
        __int64 a5)
{
  char v7; // si
  __int64 v8; // rax
  __m128i si128; // xmm0
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128 v14; // [rsp+0h] [rbp-138h] BYREF
  __int64 v15; // [rsp+10h] [rbp-128h]
  const char *v16; // [rsp+18h] [rbp-120h]
  int v17; // [rsp+20h] [rbp-118h]
  __int64 v18; // [rsp+28h] [rbp-110h]
  _QWORD v19[2]; // [rsp+30h] [rbp-108h] BYREF
  __m128i v20; // [rsp+40h] [rbp-F8h]
  void *v21; // [rsp+50h] [rbp-E8h]
  __int64 v22; // [rsp+58h] [rbp-E0h]
  _QWORD v23[2]; // [rsp+60h] [rbp-D8h] BYREF
  void *v24; // [rsp+70h] [rbp-C8h]
  __int64 v25; // [rsp+78h] [rbp-C0h]
  _QWORD v26[2]; // [rsp+80h] [rbp-B8h] BYREF
  char v27; // [rsp+90h] [rbp-A8h]
  __int64 v28; // [rsp+98h] [rbp-A0h]
  char v29; // [rsp+B0h] [rbp-88h]
  void *v30; // [rsp+B8h] [rbp-80h]
  __int64 v31; // [rsp+C8h] [rbp-70h] BYREF
  char v32; // [rsp+D8h] [rbp-60h]
  char v33; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v34; // [rsp+F8h] [rbp-40h]

  v15 = a4;
  v34 = __readfsqword(0x28u);
  v16 = a2;
  v21 = v23;
  v22 = 0;
  LOBYTE(v23[0]) = 0;
  v24 = v26;
  v25 = 0;
  LOBYTE(v26[0]) = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v33 = 0;
  v14 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  strlen(a2);
  std::string::_M_replace();
  strlen(a3);
  std::string::_M_replace();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v7 = v27;
  v27 = 0;
  v8 = v28;
  LOBYTE(v17) = v7;
  v28 = v18;
  v18 = v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v14);
  v19[0] = a5;
  v19[1] = 0;
  v20 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v20.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64, __int64, __int64, __int64, unsigned __int64, unsigned __int64, __int64, const char *, int, __int64))v20.m128i_i64[0])(
      v19,
      v19,
      3,
      v10,
      v11,
      v12,
      v14.m128_u64[0],
      v14.m128_u64[1],
      v15,
      v16,
      v17,
      v18);
  if ( v33 && v32 && v30 != &v31 )
    operator delete(v30, v31 + 1);
  if ( v29 )
  {
    v29 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v24 != v26 )
    operator delete(v24, v26[0] + 1LL);
  if ( v21 != v23 )
    operator delete(v21, v23[0] + 1LL);
  return v34 - __readfsqword(0x28u);
}

