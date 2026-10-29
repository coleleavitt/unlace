_QWORD *__fastcall ida_mcp::mcp::ResourceTemplate::to_json[abi:cxx11](_QWORD *a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbp
  __int64 *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rbp
  _QWORD *v15; // r13
  __int64 v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rax
  int v19; // [rsp+0h] [rbp-118h]
  int v20; // [rsp+0h] [rbp-118h]
  int v21; // [rsp+8h] [rbp-110h]
  __int64 v22; // [rsp+10h] [rbp-108h]
  char v23; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v24; // [rsp+48h] [rbp-D0h] BYREF
  char v25; // [rsp+58h] [rbp-C0h]
  __int128 v26; // [rsp+60h] [rbp-B8h] BYREF
  char v27; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+78h] [rbp-A0h]
  char v29; // [rsp+88h] [rbp-90h]
  __int128 v30; // [rsp+90h] [rbp-88h]
  __m128i v31; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-68h]
  _QWORD v33[12]; // [rsp+B8h] [rbp-60h] BYREF

  v33[4] = __readfsqword(0x28u);
  *(_QWORD *)&v24 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v23 = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "uriTemplate", v3, v4, v5, v6, v19, (int)&v24, v22);
  v25 = 0;
  *(_QWORD *)&v26 = 0;
  v24 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v25 = 3;
  v7 = (_QWORD *)operator new(0x20u);
  *v7 = v7 + 2;
  std::string::_M_construct<true>();
  v26 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v31,
    (const __m128i *)&v23);
  v27 = 0;
  v32 = 0;
  *(_QWORD *)&v28 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v27 = 3;
  v8 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v8, "name", v9, v10, v11, v12, v20, v21, (__int64)&v26);
  v29 = 0;
  v28 = (unsigned __int64)v8;
  *(_QWORD *)&v30 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v29 = 3;
  v13 = (_QWORD *)operator new(0x20u);
  *v13 = v13 + 2;
  std::string::_M_construct<true>();
  v30 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v33,
    (const __m128i *)&v27);
  v33[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v31);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( *(_BYTE *)(a2 + 96) )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v15 = (_QWORD *)operator new(0x20u);
    *v15 = v15 + 2;
    std::string::_M_construct<true>();
    v16 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v16 = 3;
    *(_QWORD *)(v16 + 8) = v15;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( !*(_BYTE *)(a2 + 136) )
      return a1;
LABEL_5:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v17 = (_QWORD *)operator new(0x20u);
    *v17 = v17 + 2;
    std::string::_M_construct<true>();
    v18 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v18 = 3;
    *(_QWORD *)(v18 + 8) = v17;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    return a1;
  }
  if ( *(_BYTE *)(a2 + 136) )
    goto LABEL_5;
  return a1;
}

