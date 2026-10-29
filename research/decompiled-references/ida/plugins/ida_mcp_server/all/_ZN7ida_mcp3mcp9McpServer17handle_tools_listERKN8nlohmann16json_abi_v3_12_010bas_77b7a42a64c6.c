__int64 __fastcall ida_mcp::mcp::McpServer::handle_tools_list(int a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r12
  char v4; // r15
  __int64 v5; // rax
  __int64 v6; // rbp
  __int8 v7; // si
  __int64 i; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v20; // [rsp+0h] [rbp-F8h]
  __int64 v21; // [rsp+0h] [rbp-F8h]
  int mutex; // [rsp+8h] [rbp-F0h]
  pthread_mutex_t *mutexa; // [rsp+8h] [rbp-F0h]
  pthread_mutex_t *mutexb; // [rsp+8h] [rbp-F0h]
  int v25; // [rsp+10h] [rbp-E8h]
  int v26; // [rsp+20h] [rbp-D8h]
  int v27; // [rsp+28h] [rbp-D0h]
  __int64 v28; // [rsp+30h] [rbp-C8h]
  int v29; // [rsp+38h] [rbp-C0h]
  int v30; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B0h]
  __m128i v32; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-98h] BYREF
  int v34; // [rsp+68h] [rbp-90h]
  char v35; // [rsp+80h] [rbp-78h] BYREF
  __int128 v36; // [rsp+88h] [rbp-70h]
  __int64 v37; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v38; // [rsp+B8h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  mutex = a2 + 224;
  v2 = pthread_mutex_lock((pthread_mutex_t *)(a2 + 224));
  if ( v2 )
    std::__throw_system_error(v2);
  LOBYTE(v30) = 0;
  v31 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v3 = a2 + 8;
  v4 = 0;
  if ( *(_QWORD *)(a2 + 24) == a2 + 8 )
  {
    v6 = v31;
  }
  else
  {
    ida_mcp::mcp::ToolDefinition::to_json[abi:cxx11]();
    v26 = v32.m128i_i32[2];
    v5 = operator new(0x18u);
    *(_QWORD *)(v5 + 16) = 0;
    v6 = v5;
    *(_OWORD *)v5 = 0;
LABEL_4:
    std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    v7 = v32.m128i_i8[0];
    for ( i = v32.m128i_i64[1]; ; i = 0 )
    {
      v32.m128i_i8[0] = v7;
      v32.m128i_i64[1] = i;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v3 == std::_Rb_tree_increment() )
        break;
      ida_mcp::mcp::ToolDefinition::to_json[abi:cxx11]();
      v9 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v6 + 16) == v9 )
        goto LABEL_4;
      v10 = v9 + 16;
      v7 = 0;
      *(__m128i *)(v10 - 16) = _mm_load_si128(&v32);
      *(_QWORD *)(v6 + 8) = v10;
    }
    v4 = 2;
  }
  v35 = 0;
  *(_QWORD *)&v36 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v35 = 3;
  v11 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v11, "tools", v12, v13, v14, v15, a1, mutex, (__int64)&v30);
  LOBYTE(v30) = v4;
  v31 = v6;
  v36 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v37 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v33,
    (const __m128i *)&v35);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v20,
    (__int64)&v33,
    1,
    v16,
    v17,
    v18,
    (int)v20,
    (__int64)mutexa,
    v25,
    0,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32.m128i_i32[0],
    v32.m128i_i8[8],
    v33,
    v34,
    0);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  pthread_mutex_unlock(mutexb);
  return v21;
}

