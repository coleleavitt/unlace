_QWORD *__fastcall ida_mcp::tools::database::handle_is_trusted_idb(_QWORD *a1)
{
  unsigned __int8 v1; // bl
  __int64 v2; // rax
  __int64 v3; // rax
  const char *v4; // r15
  __int64 *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  size_t v9; // [rsp+8h] [rbp-F0h]
  char v10; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v11; // [rsp+28h] [rbp-D0h]
  char v12; // [rsp+38h] [rbp-C0h]
  __int64 v13; // [rsp+40h] [rbp-B8h]
  __int64 v14; // [rsp+48h] [rbp-B0h]
  char v15; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v16; // [rsp+58h] [rbp-A0h]
  char v17; // [rsp+68h] [rbp-90h]
  __int128 v18; // [rsp+70h] [rbp-88h]
  __m128i v19; // [rsp+80h] [rbp-78h] BYREF
  __int64 v20; // [rsp+90h] [rbp-68h]
  _QWORD v21[12]; // [rsp+98h] [rbp-60h] BYREF

  v21[4] = __readfsqword(0x28u);
  *(_QWORD *)&v11 = 0;
  v1 = is_trusted_idb();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v10 = 3;
  v2 = operator new(0x20u);
  strcpy((char *)(v2 + 16), "trusted");
  *(_QWORD *)v2 = v2 + 16;
  *(_QWORD *)(v2 + 8) = 7;
  v12 = 4;
  v13 = v1;
  v14 = 0;
  v11 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v19,
    (const __m128i *)&v10);
  v15 = 0;
  v20 = 0;
  *(_QWORD *)&v16 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v15 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  v4 = "Database is NOT trusted - may contain malicious content";
  strcpy((char *)(v3 + 16), "note");
  *(_QWORD *)(v3 + 8) = 4;
  if ( v1 )
    v4 = "Database is trusted";
  v17 = 0;
  *(_QWORD *)&v18 = 0;
  v16 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v17 = 3;
  v5 = (__int64 *)operator new(0x20u);
  *v5 = (__int64)(v5 + 2);
  v9 = strlen(v4);
  v6 = (_QWORD *)std::string::_M_create();
  *v5 = (__int64)v6;
  v5[2] = v9;
  *v6 = *(_QWORD *)v4;
  *(_QWORD *)((char *)v6 + (unsigned int)v9 - 8) = *(_QWORD *)&v4[(unsigned int)v9 - 8];
  qmemcpy(
    (void *)((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)(v4 - ((const char *)v6 - ((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)v6 - (((_DWORD)v6 + 8) & 0xFFFFFFF8) + (unsigned int)v9) >> 3));
  v7 = *v5;
  v5[1] = v9;
  *(_BYTE *)(v7 + v9) = 0;
  v18 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v21,
    (const __m128i *)&v15);
  v21[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v19);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

