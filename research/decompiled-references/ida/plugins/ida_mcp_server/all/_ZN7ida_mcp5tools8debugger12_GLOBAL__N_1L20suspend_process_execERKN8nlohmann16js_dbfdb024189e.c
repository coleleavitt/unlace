_QWORD *__fastcall ida_mcp::tools::debugger::`anonymous namespace'::suspend_process_exec(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int8 v6; // al
  unsigned __int8 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v14; // [rsp+0h] [rbp-D8h]
  __int64 v15; // [rsp+8h] [rbp-D0h]
  __int64 v16; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v17; // [rsp+18h] [rbp-C0h]
  char v18; // [rsp+28h] [rbp-B0h]
  __int64 v19; // [rsp+30h] [rbp-A8h]
  __int64 v20; // [rsp+38h] [rbp-A0h]
  char v21; // [rsp+40h] [rbp-98h] BYREF
  __int128 v22; // [rsp+48h] [rbp-90h]
  char v23; // [rsp+58h] [rbp-80h]
  __int64 v24; // [rsp+60h] [rbp-78h]
  __int64 v25; // [rsp+68h] [rbp-70h]
  __m128i v26; // [rsp+70h] [rbp-68h] BYREF
  __int64 v27; // [rsp+80h] [rbp-58h]
  _QWORD v28[10]; // [rsp+88h] [rbp-50h] BYREF

  v28[4] = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_debugger_on() )
    JUMPOUT(0xCB2ED);
  v6 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))callui)(1007, a2, v2, v3, v4, v5);
  *(_QWORD *)&v17 = 0;
  v7 = v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v16) = 3;
  v8 = operator new(0x20u);
  strcpy((char *)(v8 + 16), "success");
  *(_QWORD *)v8 = v8 + 16;
  *(_QWORD *)(v8 + 8) = 7;
  v19 = v7;
  v18 = 4;
  v20 = 0;
  v17 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v26,
    (const __m128i *)&v16);
  v21 = 0;
  v27 = 0;
  *(_QWORD *)&v22 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v21 = 3;
  v9 = operator new(0x20u);
  *(_QWORD *)(v9 + 16) = 0x5F737365636F7270LL;
  *(_QWORD *)v9 = v9 + 16;
  v22 = (unsigned __int64)v9;
  strcpy((char *)(v9 + 21), "ss_state");
  *(_QWORD *)(v9 + 8) = 13;
  v12 = callui(1004, 0, v9 + 16, 0x65746174735F7373LL, v10, v11, v14, v15, v16, v17);
  v23 = 5;
  v24 = v12;
  v25 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v28,
    (const __m128i *)&v21);
  v28[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v26);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

