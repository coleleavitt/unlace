_QWORD *__fastcall ida_mcp::tools::undo::`anonymous namespace'::perform_undo_impl(_QWORD *a1)
{
  unsigned __int8 v1; // bl
  __int64 v2; // rax
  __m128i v4; // [rsp+0h] [rbp-78h] BYREF
  int v5[2]; // [rsp+10h] [rbp-68h]
  int v6; // [rsp+20h] [rbp-58h] BYREF
  int v7[4]; // [rsp+28h] [rbp-50h]
  int v8; // [rsp+38h] [rbp-40h]
  int v9[2]; // [rsp+40h] [rbp-38h]
  int v10[2]; // [rsp+48h] [rbp-30h]
  int v11[2]; // [rsp+58h] [rbp-20h]

  *(_QWORD *)v11 = __readfsqword(0x28u);
  v1 = perform_undo();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v6) = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "success");
  *(_QWORD *)(v2 + 8) = 7;
  LOBYTE(v8) = 4;
  *(_QWORD *)v9 = v1;
  *(_QWORD *)v10 = 0;
  *(_OWORD *)v7 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v4,
    (const __m128i *)&v6,
    2);
  *(_QWORD *)v5 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v4,
    1);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

