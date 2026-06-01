_QWORD *__fastcall ida_mcp::tools::debugger::`anonymous namespace'::is_debugger_active(_QWORD *a1)
{
  unsigned __int8 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  char v8; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v9; // [rsp+18h] [rbp-C0h]
  char v10; // [rsp+28h] [rbp-B0h]
  __int64 v11; // [rsp+30h] [rbp-A8h]
  __int64 v12; // [rsp+38h] [rbp-A0h]
  char v13; // [rsp+40h] [rbp-98h] BYREF
  __int128 v14; // [rsp+48h] [rbp-90h]
  char v15; // [rsp+58h] [rbp-80h]
  __int64 v16; // [rsp+60h] [rbp-78h]
  __int64 v17; // [rsp+68h] [rbp-70h]
  __m128i v18; // [rsp+70h] [rbp-68h] BYREF
  __int64 v19; // [rsp+80h] [rbp-58h]
  _QWORD v20[10]; // [rsp+88h] [rbp-50h] BYREF

  v20[4] = __readfsqword(0x28u);
  *(_QWORD *)&v9 = 0;
  v1 = is_debugger_on();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v8 = 3;
  v2 = operator new(0x20u);
  strcpy((char *)(v2 + 16), "active");
  *(_QWORD *)v2 = v2 + 16;
  *(_QWORD *)(v2 + 8) = 6;
  v11 = v1;
  v10 = 4;
  v12 = 0;
  v9 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v18,
    (const __m128i *)&v8);
  v13 = 0;
  v19 = 0;
  *(_QWORD *)&v14 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v13 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)(v3 + 8) = 13;
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "process_state");
  v14 = (unsigned __int64)v3;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
         1004,
         0,
         &callui,
         0x65746174735F7373LL,
         v4,
         v5);
  v15 = 5;
  v16 = v6;
  v17 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v20,
    (const __m128i *)&v13);
  v20[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v18);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

