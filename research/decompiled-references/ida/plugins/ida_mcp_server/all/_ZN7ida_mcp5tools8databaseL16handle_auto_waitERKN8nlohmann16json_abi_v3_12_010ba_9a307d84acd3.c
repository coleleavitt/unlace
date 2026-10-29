_QWORD *__fastcall ida_mcp::tools::database::handle_auto_wait(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rax
  __m128i si128; // xmm0
  __int64 v6; // rdx
  char v8; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v9; // [rsp+28h] [rbp-D0h]
  __int64 v10; // [rsp+38h] [rbp-C0h]
  __int64 v11; // [rsp+40h] [rbp-B8h]
  __int64 v12; // [rsp+48h] [rbp-B0h]
  char v13; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+58h] [rbp-A0h]
  char v15; // [rsp+68h] [rbp-90h]
  __int128 v16; // [rsp+70h] [rbp-88h]
  __m128i v17; // [rsp+80h] [rbp-78h] BYREF
  __int64 v18; // [rsp+90h] [rbp-68h]
  _QWORD v19[12]; // [rsp+98h] [rbp-60h] BYREF

  v19[4] = __readfsqword(0x28u);
  auto_wait();
  *(_QWORD *)&v9 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v8 = 3;
  v1 = operator new(0x20u);
  *(_QWORD *)v1 = v1 + 16;
  strcpy((char *)(v1 + 16), "completed");
  *(_QWORD *)(v1 + 8) = 9;
  v10 = 4;
  v11 = 1;
  v12 = 0;
  v9 = (unsigned __int64)v1;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v17,
    (const __m128i *)&v8);
  v13 = 0;
  v18 = 0;
  *(_QWORD *)&v14 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v13 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "note");
  *(_QWORD *)(v2 + 8) = 4;
  v15 = 0;
  *(_QWORD *)&v16 = 0;
  v14 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v15 = 3;
  v3 = (__int64 *)operator new(0x20u);
  *v3 = (__int64)(v3 + 2);
  v4 = std::string::_M_create();
  *v3 = v4;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2090);
  v3[2] = 27;
  *(__m128i *)v4 = si128;
  *(__m128i *)(v4 + 11) = _mm_load_si128((const __m128i *)&xmmword_3E20A0);
  v6 = *v3;
  v3[1] = 27;
  *(_BYTE *)(v6 + 27) = 0;
  v16 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v19,
    (const __m128i *)&v13);
  v19[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v17);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

