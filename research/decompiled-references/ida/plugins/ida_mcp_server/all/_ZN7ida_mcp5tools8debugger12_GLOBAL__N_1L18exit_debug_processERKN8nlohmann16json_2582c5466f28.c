_QWORD *__fastcall ida_mcp::tools::debugger::`anonymous namespace'::exit_debug_process(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 v5; // al
  unsigned __int8 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int8 v9; // al
  char v11; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v12; // [rsp+18h] [rbp-C0h]
  char v13; // [rsp+28h] [rbp-B0h]
  __int64 v14; // [rsp+30h] [rbp-A8h]
  __int64 v15; // [rsp+38h] [rbp-A0h]
  char v16; // [rsp+40h] [rbp-98h] BYREF
  __int128 v17; // [rsp+48h] [rbp-90h]
  char v18; // [rsp+58h] [rbp-80h]
  __int64 v19; // [rsp+60h] [rbp-78h]
  __int64 v20; // [rsp+68h] [rbp-70h]
  __m128i v21; // [rsp+70h] [rbp-68h] BYREF
  __int64 v22; // [rsp+80h] [rbp-58h]
  _QWORD v23[10]; // [rsp+88h] [rbp-50h] BYREF

  v23[4] = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_debugger_on() )
    JUMPOUT(0xCBEB3);
  v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(1011, a2, &callui, v2, v3, v4);
  *(_QWORD *)&v12 = 0;
  v6 = v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v11 = 3;
  v7 = operator new(0x20u);
  strcpy((char *)(v7 + 16), "success");
  *(_QWORD *)v7 = v7 + 16;
  *(_QWORD *)(v7 + 8) = 7;
  v14 = v6;
  v13 = 4;
  v15 = 0;
  v12 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v21,
    (const __m128i *)&v11);
  v16 = 0;
  v22 = 0;
  *(_QWORD *)&v17 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v16 = 3;
  v8 = operator new(0x20u);
  strcpy((char *)(v8 + 16), "debugger_active");
  *(_QWORD *)v8 = v8 + 16;
  *(_QWORD *)(v8 + 8) = 15;
  v17 = (unsigned __int64)v8;
  v9 = is_debugger_on();
  v18 = 4;
  v19 = v9;
  v20 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v23,
    (const __m128i *)&v16);
  v23[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v21);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

