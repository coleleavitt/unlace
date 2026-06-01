_QWORD *__fastcall ida_mcp::tools::fixups::`anonymous namespace'::handle_count_fixups(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD v7[2]; // [rsp+0h] [rbp-78h] BYREF
  int v8; // [rsp+18h] [rbp-60h]
  int v9; // [rsp+20h] [rbp-58h] BYREF
  __int128 v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+50h] [rbp-28h]
  unsigned __int64 v15; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-18h]
  int v17; // [rsp+68h] [rbp-10h]
  __int64 v18; // [rsp+70h] [rbp-8h]

  v15 = __readfsqword(0x28u);
  if ( get_first_fixup_ea() == -1 )
  {
    v1 = 0;
  }
  else
  {
    v1 = 0;
    do
      ++v1;
    while ( get_next_fixup_ea() != -1 );
  }
  *(_QWORD *)&v10 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v9) = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "total_fixups");
  *(_QWORD *)(v2 + 8) = 12;
  LOBYTE(v11) = 6;
  v12 = v1;
  v13 = 0;
  v10 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v7,
    (const __m128i *)&v9);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v7,
    1,
    v3,
    v4,
    v5,
    v7[0],
    v7[1],
    0,
    v8,
    v9,
    v10,
    *((__int64 *)&v10 + 1),
    v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

