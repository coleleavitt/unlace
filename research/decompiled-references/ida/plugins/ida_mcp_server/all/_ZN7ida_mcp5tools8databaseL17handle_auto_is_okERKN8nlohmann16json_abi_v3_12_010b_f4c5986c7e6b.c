_QWORD *__fastcall ida_mcp::tools::database::handle_auto_is_ok(_QWORD *a1)
{
  unsigned __int8 is_ok; // bl
  __int64 v2; // rax
  __int64 v3; // rax
  const char *v4; // r15
  __int64 *v5; // rbx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  char *v8; // rax
  int v9; // r8d
  const char *v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rsi
  __int64 v14; // rdx
  size_t v16; // [rsp+18h] [rbp-E0h]
  char v17; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+28h] [rbp-D0h]
  char v19; // [rsp+38h] [rbp-C0h]
  __int64 v20; // [rsp+40h] [rbp-B8h]
  __int64 v21; // [rsp+48h] [rbp-B0h]
  char v22; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+58h] [rbp-A0h]
  char v24; // [rsp+68h] [rbp-90h]
  __int128 v25; // [rsp+70h] [rbp-88h]
  __m128i v26; // [rsp+80h] [rbp-78h] BYREF
  __int64 v27; // [rsp+90h] [rbp-68h]
  _QWORD v28[12]; // [rsp+98h] [rbp-60h] BYREF

  v28[4] = __readfsqword(0x28u);
  is_ok = auto_is_ok();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v17 = 3;
  v2 = operator new(0x20u);
  *(_DWORD *)(v2 + 16) = 1868526441;
  *(_QWORD *)v2 = v2 + 16;
  *(_BYTE *)(v2 + 20) = 107;
  *(_QWORD *)(v2 + 8) = 5;
  *(_BYTE *)(v2 + 21) = 0;
  v19 = 4;
  v20 = is_ok;
  v21 = 0;
  v18 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v26,
    (const __m128i *)&v17);
  v22 = 0;
  v27 = 0;
  *(_QWORD *)&v23 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v22 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  v4 = "Auto-analysis has problems";
  strcpy((char *)(v3 + 16), "note");
  *(_QWORD *)(v3 + 8) = 4;
  if ( is_ok )
    v4 = "Auto-analysis is working normally";
  v24 = 0;
  *(_QWORD *)&v25 = 0;
  v23 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v24 = 3;
  v5 = (__int64 *)operator new(0x20u);
  *v5 = (__int64)(v5 + 2);
  v16 = strlen(v4);
  v6 = (_QWORD *)std::string::_M_create();
  *v5 = (__int64)v6;
  v5[2] = v16;
  *v6 = *(_QWORD *)v4;
  *(_QWORD *)((char *)v6 + (unsigned int)v16 - 8) = *(_QWORD *)&v4[(unsigned int)v16 - 8];
  v7 = (unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  v8 = (char *)v6 - v7;
  v9 = (_DWORD)v8 + v16;
  v10 = (const char *)(v4 - v8);
  v11 = 0;
  v12 = v9 & 0xFFFFFFF8;
  do
  {
    v13 = v11;
    v11 += 8;
    *(_QWORD *)(v7 + v13) = *(_QWORD *)&v10[v13];
  }
  while ( v11 < v12 );
  v14 = *v5;
  v5[1] = v16;
  *(_BYTE *)(v14 + v16) = 0;
  v25 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v28,
    (const __m128i *)&v22);
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

