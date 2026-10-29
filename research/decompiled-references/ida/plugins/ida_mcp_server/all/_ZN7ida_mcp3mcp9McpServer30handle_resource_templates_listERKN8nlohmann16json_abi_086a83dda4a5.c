__int64 __fastcall ida_mcp::mcp::McpServer::handle_resource_templates_list(int a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // r14
  char v5; // r15
  __int64 v6; // rax
  __int64 v7; // rbp
  __int8 v8; // si
  __int64 i; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v21; // [rsp+0h] [rbp-F8h]
  __int64 v22; // [rsp+0h] [rbp-F8h]
  int mutex; // [rsp+8h] [rbp-F0h]
  pthread_mutex_t *mutexa; // [rsp+8h] [rbp-F0h]
  pthread_mutex_t *mutexb; // [rsp+8h] [rbp-F0h]
  int v26; // [rsp+10h] [rbp-E8h]
  int v27; // [rsp+20h] [rbp-D8h]
  int v28; // [rsp+28h] [rbp-D0h]
  __int64 v29; // [rsp+30h] [rbp-C8h]
  int v30; // [rsp+38h] [rbp-C0h]
  int v31; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B0h]
  __m128i v33; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-98h] BYREF
  int v35; // [rsp+68h] [rbp-90h]
  char v36; // [rsp+80h] [rbp-78h] BYREF
  __int128 v37; // [rsp+88h] [rbp-70h]
  __int64 v38; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v39; // [rsp+B8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  mutex = a2 + 224;
  v2 = pthread_mutex_lock((pthread_mutex_t *)(a2 + 224));
  if ( v2 )
    std::__throw_system_error(v2);
  LOBYTE(v31) = 0;
  v32 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v3 = *(_QWORD *)(a2 + 96);
  v4 = *(_QWORD *)(a2 + 104);
  v5 = 0;
  if ( v4 == v3 )
  {
    v7 = v32;
  }
  else
  {
    ida_mcp::mcp::ResourceTemplate::to_json[abi:cxx11]();
    v27 = v33.m128i_i32[2];
    v6 = operator new(0x18u);
    *(_QWORD *)(v6 + 16) = 0;
    v7 = v6;
    *(_OWORD *)v6 = 0;
LABEL_4:
    std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    v8 = v33.m128i_i8[0];
    for ( i = v33.m128i_i64[1]; ; i = 0 )
    {
      v3 += 176;
      v33.m128i_i8[0] = v8;
      v33.m128i_i64[1] = i;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v4 == v3 )
        break;
      ida_mcp::mcp::ResourceTemplate::to_json[abi:cxx11]();
      v10 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD *)(v7 + 16) == v10 )
        goto LABEL_4;
      v11 = v10 + 16;
      v8 = 0;
      *(__m128i *)(v11 - 16) = _mm_load_si128(&v33);
      *(_QWORD *)(v7 + 8) = v11;
    }
    v5 = 2;
  }
  v36 = 0;
  *(_QWORD *)&v37 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v36 = 3;
  v12 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v12,
    "resourceTemplates",
    v13,
    v14,
    v15,
    v16,
    a1,
    mutex,
    (__int64)&v31);
  LOBYTE(v31) = v5;
  v32 = v7;
  v37 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v38 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v34,
    (const __m128i *)&v36);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v21,
    (__int64)&v34,
    1,
    v17,
    v18,
    v19,
    (int)v21,
    (__int64)mutexa,
    v26,
    0,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33.m128i_i32[0],
    v33.m128i_i8[8],
    v34,
    v35,
    0);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  pthread_mutex_unlock(mutexb);
  return v22;
}

